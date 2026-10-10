#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82107B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82107B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x82107b8c
	if (ctx.cr6.eq) goto loc_82107B8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,-27120
	ctx.r4.s64 = ctx.r11.s64 + -27120;
	// bl 0x82280b08
	ctx.lr = 0x82107B84;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82107B8C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x82107bac
	if (!ctx.cr6.gt) goto loc_82107BAC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107bb0
	goto loc_82107BB0;
loc_82107BAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107BB0:
	// bl 0x823deaf8
	ctx.lr = 0x82107BB4;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82107be0
	if (!ctx.cr6.gt) goto loc_82107BE0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82107be4
	goto loc_82107BE4;
loc_82107BE0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107BE4:
	// bl 0x823dec00
	ctx.lr = 0x82107BE8;
	sub_823DEC00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82107C04;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfc r7,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r6,r8,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// subfe r5,r9,r6
	temp.u8 = (~ctx.r9.u32 + ctx.r6.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 & ctx.r8.u64;
	// bl 0x82366010
	ctx.lr = 0x82107C34;
	sub_82366010(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107B48) {
	__imp__sub_82107B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107C3C) {
	__imp__sub_82107C3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82107C48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x82107c8c
	if (!ctx.cr6.lt) goto loc_82107C8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26976
	ctx.r4.s64 = ctx.r11.s64 + -26976;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82107C84;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82107C8C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r27,r10,-28736
	ctx.r27.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x82107cac
	if (!ctx.cr6.gt) goto loc_82107CAC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107cb0
	goto loc_82107CB0;
loc_82107CAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82107CB0:
	// bl 0x823deaf8
	ctx.lr = 0x82107CB4;
	sub_823DEAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82107d34
	if (!ctx.cr6.gt) goto loc_82107D34;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bgt cr6,0x82107d34
	if (ctx.cr6.gt) goto loc_82107D34;
	// addi r3,r3,1752
	ctx.r3.s64 = ctx.r3.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x82107CD0;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820f9a10
	ctx.lr = 0x82107CDC;
	sub_820F9A10(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82107d4c
	if (!ctx.cr6.gt) goto loc_82107D4C;
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
	// ble cr6,0x82107d10
	if (!ctx.cr6.gt) goto loc_82107D10;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82107d14
	goto loc_82107D14;
loc_82107D10:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82107D14:
	// bl 0x823deaf8
	ctx.lr = 0x82107D18;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82362d50
	ctx.lr = 0x82107D2C;
	sub_82362D50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82107D34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r4,r11,-27048
	ctx.r4.s64 = ctx.r11.s64 + -27048;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82107D4C;
	sub_82280B08(ctx, base);
loc_82107D4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107C40) {
	__imp__sub_82107C40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107D54) {
	__imp__sub_82107D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107D58) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-17592
	ctx.r11.s64 = ctx.r11.s64 + -17592;
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82107db0
	if (ctx.cr6.eq) goto loc_82107DB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,9
	ctx.r3.s64 = 9;
	// addi r4,r11,-26836
	ctx.r4.s64 = ctx.r11.s64 + -26836;
	// bl 0x82280b08
	ctx.lr = 0x82107D9C;
	sub_82280B08(ctx, base);
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
loc_82107DB0:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82107DC0;
	sub_823DEAF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82107dfc
	if (!ctx.cr6.gt) goto loc_82107DFC;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bgt cr6,0x82107dfc
	if (ctx.cr6.gt) goto loc_82107DFC;
	// addi r3,r3,1752
	ctx.r3.s64 = ctx.r3.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x82107DDC;
	sub_821201A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f8818
	ctx.lr = 0x82107DE8;
	sub_820F8818(ctx, base);
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
loc_82107DFC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,512
	ctx.r6.s64 = 512;
	// addi r4,r11,-26912
	ctx.r4.s64 = ctx.r11.s64 + -26912;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82280b08
	ctx.lr = 0x82107E10;
	sub_82280B08(ctx, base);
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

PPC_WEAK_FUNC(sub_82107D58) {
	__imp__sub_82107D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107E24) {
	__imp__sub_82107E24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107E28) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// addi r3,r10,-26764
	ctx.r3.s64 = ctx.r10.s64 + -26764;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x82107E54;
	sub_822B7268(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,-26772
	ctx.r3.s64 = ctx.r9.s64 + -26772;
	// bl 0x822e84f0
	ctx.lr = 0x82107E64;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,17
	ctx.r5.s64 = 17;
	// bl 0x820f7ee8
	ctx.lr = 0x82107E74;
	sub_820F7EE8(ctx, base);
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

PPC_WEAK_FUNC(sub_82107E28) {
	__imp__sub_82107E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107E88) {
	PPC_FUNC_PROLOGUE();
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c4c00
	sub_822C4C00(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107E88) {
	__imp__sub_82107E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107E94) {
	__imp__sub_82107E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82107EA0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r10,-17592
	ctx.r31.s64 = ctx.r10.s64 + -17592;
	// addi r29,r11,-28736
	ctx.r29.s64 = ctx.r11.s64 + -28736;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82107ee4
	if (!ctx.cr6.gt) goto loc_82107EE4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107ee8
	goto loc_82107EE8;
loc_82107EE4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107EE8:
	// bl 0x823deaf8
	ctx.lr = 0x82107EEC;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82107f18
	if (!ctx.cr6.gt) goto loc_82107F18;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82107f1c
	goto loc_82107F1C;
loc_82107F18:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107F1C:
	// bl 0x823dec00
	ctx.lr = 0x82107F20;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82107f4c
	if (!ctx.cr6.gt) goto loc_82107F4C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82107f50
	goto loc_82107F50;
loc_82107F4C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107F50:
	// bl 0x823deaf8
	ctx.lr = 0x82107F54;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82107f80
	if (!ctx.cr6.gt) goto loc_82107F80;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82107f84
	goto loc_82107F84;
loc_82107F80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107F84:
	// bl 0x823deaf8
	ctx.lr = 0x82107F88;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820dc6e0
	ctx.lr = 0x82107FA0;
	sub_820DC6E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107E98) {
	__imp__sub_82107E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107FAC) {
	__imp__sub_82107FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82107FB8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r31,r10,-17592
	ctx.r31.s64 = ctx.r10.s64 + -17592;
	// addi r30,r11,-28736
	ctx.r30.s64 = ctx.r11.s64 + -28736;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82107ffc
	if (!ctx.cr6.gt) goto loc_82107FFC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82108000
	goto loc_82108000;
loc_82107FFC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82108000:
	// bl 0x823deaf8
	ctx.lr = 0x82108004;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82108030
	if (!ctx.cr6.gt) goto loc_82108030;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82108034
	goto loc_82108034;
loc_82108030:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82108034:
	// bl 0x823dec00
	ctx.lr = 0x82108038;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82108064
	if (!ctx.cr6.gt) goto loc_82108064;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82108068
	goto loc_82108068;
loc_82108064:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82108068:
	// bl 0x823dec00
	ctx.lr = 0x8210806C;
	sub_823DEC00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e4030
	ctx.lr = 0x82108080;
	sub_820E4030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107FB0) {
	__imp__sub_82107FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210808C) {
	__imp__sub_8210808C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82108090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82108098;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,19816
	ctx.r31.s64 = ctx.r11.s64 + 19816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x821080B4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821080d0
	if (!ctx.cr6.eq) goto loc_821080D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e2708
	ctx.lr = 0x821080C8;
	sub_822E2708(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821080D0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-26740
	ctx.r4.s64 = ctx.r11.s64 + -26740;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821080E4;
	sub_822830E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82108090) {
	__imp__sub_82108090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821080EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821080EC) {
	__imp__sub_821080EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821080F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821080F8;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// beq cr6,0x82108144
	if (ctx.cr6.eq) goto loc_82108144;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26456
	ctx.r4.s64 = ctx.r11.s64 + -26456;
	// bl 0x82280b08
	ctx.lr = 0x82108134;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82108144:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r28,r10,-28736
	ctx.r28.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x82108164
	if (!ctx.cr6.gt) goto loc_82108164;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82108168
	goto loc_82108168;
loc_82108164:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82108168:
	// bl 0x823dec00
	ctx.lr = 0x8210816C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210819c
	if (!ctx.cr6.gt) goto loc_8210819C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821081a0
	goto loc_821081A0;
loc_8210819C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821081A0:
	// bl 0x823dec00
	ctx.lr = 0x821081A4;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x821081d4
	if (!ctx.cr6.gt) goto loc_821081D4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821081d8
	goto loc_821081D8;
loc_821081D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821081D8:
	// bl 0x823dec00
	ctx.lr = 0x821081DC;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x8210820c
	if (!ctx.cr6.gt) goto loc_8210820C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82108210
	goto loc_82108210;
loc_8210820C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82108210:
	// bl 0x823deaf8
	ctx.lr = 0x82108214;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82108240
	if (!ctx.cr6.gt) goto loc_82108240;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82108244
	goto loc_82108244;
loc_82108240:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82108244:
	// bl 0x823deaf8
	ctx.lr = 0x82108248;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x82108274
	if (!ctx.cr6.gt) goto loc_82108274;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x82108278
	goto loc_82108278;
loc_82108274:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82108278:
	// bl 0x823dec00
	ctx.lr = 0x8210827C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x821082a8
	if (!ctx.cr6.gt) goto loc_821082A8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x821082ac
	goto loc_821082AC;
loc_821082A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821082AC:
	// bl 0x823dec00
	ctx.lr = 0x821082B0;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x821082dc
	if (!ctx.cr6.gt) goto loc_821082DC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x821082e0
	goto loc_821082E0;
loc_821082DC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821082E0:
	// bl 0x823dec00
	ctx.lr = 0x821082E4;
	sub_823DEC00(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82108314
	if (!ctx.cr6.lt) goto loc_82108314;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-26496
	ctx.r4.s64 = ctx.r11.s64 + -26496;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82108304;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82108314:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82108344
	if (!ctx.cr6.lt) goto loc_82108344;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-26548
	ctx.r4.s64 = ctx.r11.s64 + -26548;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82108334;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82108344:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82108380
	if (!ctx.cr6.lt) goto loc_82108380;
	// stfd f31,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26588
	ctx.r4.s64 = ctx.r11.s64 + -26588;
	// bl 0x82280b08
	ctx.lr = 0x82108370;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82108380:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bge cr6,0x821083c0
	if (!ctx.cr6.lt) goto loc_821083C0;
	// stfd f31,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r11,-26644
	ctx.r4.s64 = ctx.r11.s64 + -26644;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280b08
	ctx.lr = 0x821083B0;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821083C0:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821083f4
	if (!ctx.cr6.lt) goto loc_821083F4;
	// stfd f3,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f3.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26684
	ctx.r4.s64 = ctx.r11.s64 + -26684;
	// bl 0x82280b08
	ctx.lr = 0x821083E4;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821083F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82369fd8
	ctx.lr = 0x8210840C;
	sub_82369FD8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821080F0) {
	__imp__sub_821080F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210841C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210841C) {
	__imp__sub_8210841C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82108420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82108428;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82108468
	if (ctx.cr6.eq) goto loc_82108468;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26408
	ctx.r4.s64 = ctx.r11.s64 + -26408;
	// bl 0x82280b08
	ctx.lr = 0x82108460;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82108468:
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x82108478;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,68
	ctx.r8.s64 = ctx.r31.s64 + 68;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// ble cr6,0x821084b0
	if (!ctx.cr6.gt) goto loc_821084B0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821084b4
	goto loc_821084B4;
loc_821084B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821084B4:
	// bl 0x823dec00
	ctx.lr = 0x821084B8;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x821084e8
	if (!ctx.cr6.gt) goto loc_821084E8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821084ec
	goto loc_821084EC;
loc_821084E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821084EC:
	// bl 0x823dec00
	ctx.lr = 0x821084F0;
	sub_823DEC00(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82108548
	if (!ctx.cr6.eq) goto loc_82108548;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82108548
	if (!ctx.cr6.eq) goto loc_82108548;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82108548
	if (!ctx.cr6.eq) goto loc_82108548;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82108548:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82258318
	ctx.lr = 0x82108550;
	sub_82258318(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181020
	ctx.lr = 0x82108558;
	sub_82181020(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82108420) {
	__imp__sub_82108420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82108560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82108568;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// beq cr6,0x821085a4
	if (ctx.cr6.eq) goto loc_821085A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26356
	ctx.r4.s64 = ctx.r11.s64 + -26356;
	// bl 0x82280b08
	ctx.lr = 0x8210859C;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821085A4:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x821085c4
	if (!ctx.cr6.gt) goto loc_821085C4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x821085c8
	goto loc_821085C8;
loc_821085C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821085C8:
	// bl 0x823deaf8
	ctx.lr = 0x821085CC;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x821085f8
	if (!ctx.cr6.gt) goto loc_821085F8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821085fc
	goto loc_821085FC;
loc_821085F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821085FC:
	// bl 0x823dec00
	ctx.lr = 0x82108600;
	sub_823DEC00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82365360
	ctx.lr = 0x8210860C;
	sub_82365360(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82108560) {
	__imp__sub_82108560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82108614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82108614) {
	__imp__sub_82108614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82108618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82108620;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r11,-17592
	ctx.r27.s64 = ctx.r11.s64 + -17592;
	// addi r26,r10,-28736
	ctx.r26.s64 = ctx.r10.s64 + -28736;
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82108668
	if (!ctx.cr6.gt) goto loc_82108668;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8210866c
	goto loc_8210866C;
loc_82108668:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_8210866C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// ori r4,r11,61924
	ctx.r4.u64 = ctx.r11.u64 | 61924;
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// mullw r10,r25,r4
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r4.s32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x8210a440
	if (ctx.cr6.eq) goto loc_8210A440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25520
	ctx.r10.s64 = ctx.r10.s64 + -25520;
loc_8210869C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821086c0
	if (ctx.cr6.eq) goto loc_821086C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210869c
	if (ctx.cr6.eq) goto loc_8210869C;
loc_821086C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108720
	if (!ctx.cr6.eq) goto loc_82108720;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x821086fc
	if (!ctx.cr6.gt) goto loc_821086FC;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x821086E0;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x821086EC;
	sub_8211B8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821086FC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82108704;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8211b8e0
	ctx.lr = 0x82108710;
	sub_8211B8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108720:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25524
	ctx.r10.s64 = ctx.r10.s64 + -25524;
loc_8210872C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108750
	if (ctx.cr6.eq) goto loc_82108750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210872c
	if (ctx.cr6.eq) goto loc_8210872C;
loc_82108750:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821087a0
	if (!ctx.cr6.eq) goto loc_821087A0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108784
	if (!ctx.cr6.gt) goto loc_82108784;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x820e27e8
	ctx.lr = 0x82108774;
	sub_820E27E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108784:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820e27e8
	ctx.lr = 0x82108790;
	sub_820E27E8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821087A0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25528
	ctx.r10.s64 = ctx.r10.s64 + -25528;
loc_821087AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821087d0
	if (ctx.cr6.eq) goto loc_821087D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821087ac
	if (ctx.cr6.eq) goto loc_821087AC;
loc_821087D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821087f0
	if (!ctx.cr6.eq) goto loc_821087F0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821068b0
	ctx.lr = 0x821087E0;
	sub_821068B0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821087F0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25532
	ctx.r10.s64 = ctx.r10.s64 + -25532;
loc_821087FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108820
	if (ctx.cr6.eq) goto loc_82108820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821087fc
	if (ctx.cr6.eq) goto loc_821087FC;
loc_82108820:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821089dc
	if (!ctx.cr6.eq) goto loc_821089DC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8210a440
	if (!ctx.cr6.eq) goto loc_8210A440;
	// bl 0x822ddaf8
	ctx.lr = 0x82108834;
	sub_822DDAF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x8210883C;
	sub_82310110(ctx, base);
	// bl 0x822ddb08
	ctx.lr = 0x82108840;
	sub_822DDB08(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82108868
	if (!ctx.cr6.gt) goto loc_82108868;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8210886c
	goto loc_8210886C;
loc_82108868:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210886C:
	// bl 0x823deaf8
	ctx.lr = 0x82108870;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210889c
	if (!ctx.cr6.gt) goto loc_8210889C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821088a0
	goto loc_821088A0;
loc_8210889C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821088A0:
	// bl 0x823deaf8
	ctx.lr = 0x821088A4;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x821088d0
	if (!ctx.cr6.gt) goto loc_821088D0;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821088d4
	goto loc_821088D4;
loc_821088D0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821088D4:
	// bl 0x823deaf8
	ctx.lr = 0x821088D8;
	sub_823DEAF8(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mulli r10,r30,404
	ctx.r10.s64 = ctx.r30.s64 * 404;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// addi r3,r29,1752
	ctx.r3.s64 = ctx.r29.s64 + 1752;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821201a0
	ctx.lr = 0x821088F8;
	sub_821201A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82108918
	if (!ctx.cr6.eq) goto loc_82108918;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f8be8
	ctx.lr = 0x82108914;
	sub_820F8BE8(ctx, base);
	// b 0x82108928
	goto loc_82108928;
loc_82108918:
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f8c68
	ctx.lr = 0x82108928;
	sub_820F8C68(ctx, base);
loc_82108928:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r11,11324(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11324);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821089c4
	if (ctx.cr6.eq) goto loc_821089C4;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821089b0
	if (ctx.cr6.eq) goto loc_821089B0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82108978
	if (!ctx.cr6.gt) goto loc_82108978;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x8210897c
	goto loc_8210897C;
loc_82108978:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210897C:
	// bl 0x823deaf8
	ctx.lr = 0x82108980;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362d60
	ctx.lr = 0x82108998;
	sub_82362D60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ddb08
	ctx.lr = 0x821089A0;
	sub_822DDB08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821089B0:
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362d40
	ctx.lr = 0x821089C4;
	sub_82362D40(ctx, base);
loc_821089C4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ddb08
	ctx.lr = 0x821089CC;
	sub_822DDB08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821089DC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25540
	ctx.r10.s64 = ctx.r10.s64 + -25540;
loc_821089E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108a0c
	if (ctx.cr6.eq) goto loc_82108A0C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821089e8
	if (ctx.cr6.eq) goto loc_821089E8;
loc_82108A0C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108a64
	if (!ctx.cr6.eq) goto loc_82108A64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108a2c
	if (!ctx.cr6.gt) goto loc_82108A2C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108a30
	goto loc_82108A30;
loc_82108A2C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108A30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25556
	ctx.r4.s64 = ctx.r11.s64 + -25556;
	// bl 0x822b7268
	ctx.lr = 0x82108A40;
	sub_822B7268(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,-27340
	ctx.r4.s64 = ctx.r10.s64 + -27340;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82280900
	ctx.lr = 0x82108A54;
	sub_82280900(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108A64:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25560
	ctx.r10.s64 = ctx.r10.s64 + -25560;
loc_82108A70:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108a94
	if (ctx.cr6.eq) goto loc_82108A94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108a70
	if (ctx.cr6.eq) goto loc_82108A70;
loc_82108A94:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108ae8
	if (!ctx.cr6.eq) goto loc_82108AE8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108ab4
	if (!ctx.cr6.gt) goto loc_82108AB4;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108ab8
	goto loc_82108AB8;
loc_82108AB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108AB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x822b7268
	ctx.lr = 0x82108AC8;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820f7ee8
	ctx.lr = 0x82108AD8;
	sub_820F7EE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108AE8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25564
	ctx.r10.s64 = ctx.r10.s64 + -25564;
loc_82108AF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108b18
	if (ctx.cr6.eq) goto loc_82108B18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108af4
	if (ctx.cr6.eq) goto loc_82108AF4;
loc_82108B18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108b6c
	if (!ctx.cr6.eq) goto loc_82108B6C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108b38
	if (!ctx.cr6.gt) goto loc_82108B38;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108b3c
	goto loc_82108B3C;
loc_82108B38:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108B3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-25584
	ctx.r4.s64 = ctx.r11.s64 + -25584;
	// bl 0x822b7268
	ctx.lr = 0x82108B4C;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820f7f08
	ctx.lr = 0x82108B5C;
	sub_820F7F08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108B6C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25592
	ctx.r10.s64 = ctx.r10.s64 + -25592;
loc_82108B78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108b9c
	if (ctx.cr6.eq) goto loc_82108B9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108b78
	if (ctx.cr6.eq) goto loc_82108B78;
loc_82108B9C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108d44
	if (!ctx.cr6.eq) goto loc_82108D44;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108bbc
	if (!ctx.cr6.gt) goto loc_82108BBC;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108bc0
	goto loc_82108BC0;
loc_82108BBC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108BC0:
	// bl 0x823deaf8
	ctx.lr = 0x82108BC4;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r28,r3,16
	ctx.r28.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82108bf0
	if (!ctx.cr6.gt) goto loc_82108BF0;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82108bf4
	goto loc_82108BF4;
loc_82108BF0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108BF4:
	// bl 0x823deaf8
	ctx.lr = 0x82108BF8;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// ble cr6,0x82108c24
	if (!ctx.cr6.gt) goto loc_82108C24;
	// addi r9,r27,100
	ctx.r9.s64 = ctx.r27.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// b 0x82108c28
	goto loc_82108C28;
loc_82108C24:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108C28:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x82108c40
	if (!ctx.cr6.gt) goto loc_82108C40;
	// addi r9,r27,100
	ctx.r9.s64 = ctx.r27.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r30,16(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// b 0x82108c44
	goto loc_82108C44;
loc_82108C40:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82108C44:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x82108c5c
	if (!ctx.cr6.gt) goto loc_82108C5C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r31,12(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82108c60
	goto loc_82108C60;
loc_82108C5C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82108C60:
	// bl 0x823dec00
	ctx.lr = 0x82108C64;
	sub_823DEC00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823dec00
	ctx.lr = 0x82108C70;
	sub_823DEC00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x823dec00
	ctx.lr = 0x82108C7C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// ble cr6,0x82108cb4
	if (!ctx.cr6.gt) goto loc_82108CB4;
	// addi r9,r27,100
	ctx.r9.s64 = ctx.r27.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,32(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// b 0x82108cb8
	goto loc_82108CB8;
loc_82108CB4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108CB8:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// ble cr6,0x82108cd0
	if (!ctx.cr6.gt) goto loc_82108CD0;
	// addi r9,r27,100
	ctx.r9.s64 = ctx.r27.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r30,28(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x82108cd4
	goto loc_82108CD4;
loc_82108CD0:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82108CD4:
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// ble cr6,0x82108cec
	if (!ctx.cr6.gt) goto loc_82108CEC;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r31,24(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x82108cf0
	goto loc_82108CF0;
loc_82108CEC:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82108CF0:
	// bl 0x823dec00
	ctx.lr = 0x82108CF4;
	sub_823DEC00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x823dec00
	ctx.lr = 0x82108D00;
	sub_823DEC00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// bl 0x823dec00
	ctx.lr = 0x82108D0C;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// clrlwi r4,r28,16
	ctx.r4.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82180598
	ctx.lr = 0x82108D34;
	sub_82180598(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108D44:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25604
	ctx.r10.s64 = ctx.r10.s64 + -25604;
loc_82108D50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108d74
	if (ctx.cr6.eq) goto loc_82108D74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108d50
	if (ctx.cr6.eq) goto loc_82108D50;
loc_82108D74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108dc8
	if (!ctx.cr6.eq) goto loc_82108DC8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108d94
	if (!ctx.cr6.gt) goto loc_82108D94;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108d98
	goto loc_82108D98;
loc_82108D94:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108D98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x822b7268
	ctx.lr = 0x82108DA8;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x820f7ee8
	ctx.lr = 0x82108DB8;
	sub_820F7EE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108DC8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25620
	ctx.r10.s64 = ctx.r10.s64 + -25620;
loc_82108DD4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108df8
	if (ctx.cr6.eq) goto loc_82108DF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108dd4
	if (ctx.cr6.eq) goto loc_82108DD4;
loc_82108DF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108e4c
	if (!ctx.cr6.eq) goto loc_82108E4C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108e18
	if (!ctx.cr6.gt) goto loc_82108E18;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108e1c
	goto loc_82108E1C;
loc_82108E18:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108E1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x822b7268
	ctx.lr = 0x82108E2C;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// bl 0x820f7ee8
	ctx.lr = 0x82108E3C;
	sub_820F7EE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108E4C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25632
	ctx.r10.s64 = ctx.r10.s64 + -25632;
loc_82108E58:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108e7c
	if (ctx.cr6.eq) goto loc_82108E7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108e58
	if (ctx.cr6.eq) goto loc_82108E58;
loc_82108E7C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108ed0
	if (!ctx.cr6.eq) goto loc_82108ED0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82108e9c
	if (!ctx.cr6.gt) goto loc_82108E9C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82108ea0
	goto loc_82108EA0;
loc_82108E9C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82108EA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x822b7268
	ctx.lr = 0x82108EB0;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x820f7ee8
	ctx.lr = 0x82108EC0;
	sub_820F7EE8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108ED0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25648
	ctx.r10.s64 = ctx.r10.s64 + -25648;
loc_82108EDC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108f00
	if (ctx.cr6.eq) goto loc_82108F00;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108edc
	if (ctx.cr6.eq) goto loc_82108EDC;
loc_82108F00:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108f30
	if (!ctx.cr6.eq) goto loc_82108F30;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// ori r8,r10,18548
	ctx.r8.u64 = ctx.r10.u64 | 18548;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108F30:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25664
	ctx.r10.s64 = ctx.r10.s64 + -25664;
loc_82108F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108f60
	if (ctx.cr6.eq) goto loc_82108F60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108f3c
	if (ctx.cr6.eq) goto loc_82108F3C;
loc_82108F60:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108f88
	if (!ctx.cr6.eq) goto loc_82108F88;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,18548
	ctx.r9.u64 = ctx.r11.u64 | 18548;
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108F88:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25684
	ctx.r10.s64 = ctx.r10.s64 + -25684;
loc_82108F94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82108fb8
	if (ctx.cr6.eq) goto loc_82108FB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108f94
	if (ctx.cr6.eq) goto loc_82108F94;
loc_82108FB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82108ff0
	if (!ctx.cr6.eq) goto loc_82108FF0;
	// bl 0x823653a0
	ctx.lr = 0x82108FC4;
	sub_823653A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82366010
	ctx.lr = 0x82108FD0;
	sub_82366010(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,-25700
	ctx.r4.s64 = ctx.r11.s64 + -25700;
	// bl 0x822c54b8
	ctx.lr = 0x82108FE0;
	sub_822C54B8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82108FF0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25716
	ctx.r10.s64 = ctx.r10.s64 + -25716;
loc_82108FFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109020
	if (ctx.cr6.eq) goto loc_82109020;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82108ffc
	if (ctx.cr6.eq) goto loc_82108FFC;
loc_82109020:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109044
	if (!ctx.cr6.eq) goto loc_82109044;
	// li r4,8
	ctx.r4.s64 = 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822c4c00
	ctx.lr = 0x82109034;
	sub_822C4C00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109044:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25736
	ctx.r10.s64 = ctx.r10.s64 + -25736;
loc_82109050:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109074
	if (ctx.cr6.eq) goto loc_82109074;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109050
	if (ctx.cr6.eq) goto loc_82109050;
loc_82109074:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109094
	if (!ctx.cr6.eq) goto loc_82109094;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82107e28
	ctx.lr = 0x82109084;
	sub_82107E28(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109094:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25744
	ctx.r10.s64 = ctx.r10.s64 + -25744;
loc_821090A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821090c4
	if (ctx.cr6.eq) goto loc_821090C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821090a0
	if (ctx.cr6.eq) goto loc_821090A0;
loc_821090C4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109138
	if (!ctx.cr6.eq) goto loc_82109138;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x821090e4
	if (!ctx.cr6.gt) goto loc_821090E4;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x821090e8
	goto loc_821090E8;
loc_821090E4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821090E8:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109100
	if (!ctx.cr6.gt) goto loc_82109100;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109104
	goto loc_82109104;
loc_82109100:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109104:
	// bl 0x823dec00
	ctx.lr = 0x82109108;
	sub_823DEC00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x821201c0
	ctx.lr = 0x82109114;
	sub_821201C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82365b38
	ctx.lr = 0x82109128;
	sub_82365B38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109138:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25752
	ctx.r10.s64 = ctx.r10.s64 + -25752;
loc_82109144:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109168
	if (ctx.cr6.eq) goto loc_82109168;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109144
	if (ctx.cr6.eq) goto loc_82109144;
loc_82109168:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821091b8
	if (!ctx.cr6.eq) goto loc_821091B8;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210919c
	if (!ctx.cr6.gt) goto loc_8210919C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82109188;
	sub_823DEAF8(ctx, base);
	// bl 0x82365c58
	ctx.lr = 0x8210918C;
	sub_82365C58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210919C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823deaf8
	ctx.lr = 0x821091A4;
	sub_823DEAF8(ctx, base);
	// bl 0x82365c58
	ctx.lr = 0x821091A8;
	sub_82365C58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821091B8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25764
	ctx.r10.s64 = ctx.r10.s64 + -25764;
loc_821091C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821091e8
	if (ctx.cr6.eq) goto loc_821091E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821091c4
	if (ctx.cr6.eq) goto loc_821091C4;
loc_821091E8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109254
	if (!ctx.cr6.eq) goto loc_82109254;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82109208
	if (!ctx.cr6.gt) goto loc_82109208;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8210920c
	goto loc_8210920C;
loc_82109208:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210920C:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109224
	if (!ctx.cr6.gt) goto loc_82109224;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109228
	goto loc_82109228;
loc_82109224:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109228:
	// bl 0x823deaf8
	ctx.lr = 0x8210922C;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x82109238;
	sub_823DEC00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8236a638
	ctx.lr = 0x82109244;
	sub_8236A638(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109254:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25776
	ctx.r10.s64 = ctx.r10.s64 + -25776;
loc_82109260:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109284
	if (ctx.cr6.eq) goto loc_82109284;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109260
	if (ctx.cr6.eq) goto loc_82109260;
loc_82109284:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821092a0
	if (!ctx.cr6.eq) goto loc_821092A0;
	// bl 0x82108560
	ctx.lr = 0x82109290;
	sub_82108560(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821092A0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25792
	ctx.r10.s64 = ctx.r10.s64 + -25792;
loc_821092AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821092d0
	if (ctx.cr6.eq) goto loc_821092D0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821092ac
	if (ctx.cr6.eq) goto loc_821092AC;
loc_821092D0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821092ec
	if (!ctx.cr6.eq) goto loc_821092EC;
	// bl 0x82365378
	ctx.lr = 0x821092DC;
	sub_82365378(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821092EC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25804
	ctx.r10.s64 = ctx.r10.s64 + -25804;
loc_821092F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210931c
	if (ctx.cr6.eq) goto loc_8210931C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821092f8
	if (ctx.cr6.eq) goto loc_821092F8;
loc_8210931C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210933c
	if (!ctx.cr6.eq) goto loc_8210933C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82107e98
	ctx.lr = 0x8210932C;
	sub_82107E98(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210933C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25816
	ctx.r10.s64 = ctx.r10.s64 + -25816;
loc_82109348:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210936c
	if (ctx.cr6.eq) goto loc_8210936C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109348
	if (ctx.cr6.eq) goto loc_82109348;
loc_8210936C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210938c
	if (!ctx.cr6.eq) goto loc_8210938C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820dc788
	ctx.lr = 0x8210937C;
	sub_820DC788(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210938C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25828
	ctx.r10.s64 = ctx.r10.s64 + -25828;
loc_82109398:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821093bc
	if (ctx.cr6.eq) goto loc_821093BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109398
	if (ctx.cr6.eq) goto loc_82109398;
loc_821093BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210947c
	if (!ctx.cr6.eq) goto loc_8210947C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// ble cr6,0x821093dc
	if (!ctx.cr6.gt) goto loc_821093DC;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x821093e0
	goto loc_821093E0;
loc_821093DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821093E0:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x821093f8
	if (!ctx.cr6.gt) goto loc_821093F8;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x821093fc
	goto loc_821093FC;
loc_821093F8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_821093FC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109414
	if (!ctx.cr6.gt) goto loc_82109414;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109418
	goto loc_82109418;
loc_82109414:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109418:
	// bl 0x823deaf8
	ctx.lr = 0x8210941C;
	sub_823DEAF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82109428;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x82109434;
	sub_823DEC00(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820e3878
	ctx.lr = 0x8210946C;
	sub_820E3878(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210947C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25840
	ctx.r10.s64 = ctx.r10.s64 + -25840;
loc_82109488:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821094ac
	if (ctx.cr6.eq) goto loc_821094AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109488
	if (ctx.cr6.eq) goto loc_82109488;
loc_821094AC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821094cc
	if (!ctx.cr6.eq) goto loc_821094CC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82107fb0
	ctx.lr = 0x821094BC;
	sub_82107FB0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821094CC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25848
	ctx.r10.s64 = ctx.r10.s64 + -25848;
loc_821094D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821094fc
	if (ctx.cr6.eq) goto loc_821094FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821094d8
	if (ctx.cr6.eq) goto loc_821094D8;
loc_821094FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109518
	if (!ctx.cr6.eq) goto loc_82109518;
	// bl 0x82107768
	ctx.lr = 0x82109508;
	sub_82107768(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109518:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25852
	ctx.r10.s64 = ctx.r10.s64 + -25852;
loc_82109524:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109548
	if (ctx.cr6.eq) goto loc_82109548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109524
	if (ctx.cr6.eq) goto loc_82109524;
loc_82109548:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109564
	if (!ctx.cr6.eq) goto loc_82109564;
	// bl 0x821071d8
	ctx.lr = 0x82109554;
	sub_821071D8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109564:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25868
	ctx.r10.s64 = ctx.r10.s64 + -25868;
loc_82109570:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109594
	if (ctx.cr6.eq) goto loc_82109594;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109570
	if (ctx.cr6.eq) goto loc_82109570;
loc_82109594:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821095b0
	if (!ctx.cr6.eq) goto loc_821095B0;
	// bl 0x821075f8
	ctx.lr = 0x821095A0;
	sub_821075F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821095B0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25876
	ctx.r10.s64 = ctx.r10.s64 + -25876;
loc_821095BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821095e0
	if (ctx.cr6.eq) goto loc_821095E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821095bc
	if (ctx.cr6.eq) goto loc_821095BC;
loc_821095E0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821095fc
	if (!ctx.cr6.eq) goto loc_821095FC;
	// bl 0x821074f8
	ctx.lr = 0x821095EC;
	sub_821074F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821095FC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25884
	ctx.r10.s64 = ctx.r10.s64 + -25884;
loc_82109608:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210962c
	if (ctx.cr6.eq) goto loc_8210962C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109608
	if (ctx.cr6.eq) goto loc_82109608;
loc_8210962C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109684
	if (!ctx.cr6.eq) goto loc_82109684;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109664
	if (!ctx.cr6.gt) goto loc_82109664;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823dec00
	ctx.lr = 0x8210964C;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82303c60
	ctx.lr = 0x82109654;
	sub_82303C60(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109664:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823dec00
	ctx.lr = 0x8210966C;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x82303c60
	ctx.lr = 0x82109674;
	sub_82303C60(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109684:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25904
	ctx.r10.s64 = ctx.r10.s64 + -25904;
loc_82109690:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821096b4
	if (ctx.cr6.eq) goto loc_821096B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109690
	if (ctx.cr6.eq) goto loc_82109690;
loc_821096B4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821096d0
	if (!ctx.cr6.eq) goto loc_821096D0;
	// bl 0x82107918
	ctx.lr = 0x821096C0;
	sub_82107918(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821096D0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25920
	ctx.r10.s64 = ctx.r10.s64 + -25920;
loc_821096DC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109700
	if (ctx.cr6.eq) goto loc_82109700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821096dc
	if (ctx.cr6.eq) goto loc_821096DC;
loc_82109700:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210971c
	if (!ctx.cr6.eq) goto loc_8210971C;
	// bl 0x82107a10
	ctx.lr = 0x8210970C;
	sub_82107A10(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210971C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25944
	ctx.r10.s64 = ctx.r10.s64 + -25944;
loc_82109728:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210974c
	if (ctx.cr6.eq) goto loc_8210974C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109728
	if (ctx.cr6.eq) goto loc_82109728;
loc_8210974C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109768
	if (!ctx.cr6.eq) goto loc_82109768;
	// bl 0x82107b48
	ctx.lr = 0x82109758;
	sub_82107B48(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109768:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25948
	ctx.r10.s64 = ctx.r10.s64 + -25948;
loc_82109774:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109798
	if (ctx.cr6.eq) goto loc_82109798;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109774
	if (ctx.cr6.eq) goto loc_82109774;
loc_82109798:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821097c0
	if (!ctx.cr6.eq) goto loc_821097C0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r3,r7,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// bl 0x82105f98
	ctx.lr = 0x821097B0;
	sub_82105F98(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821097C0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25964
	ctx.r10.s64 = ctx.r10.s64 + -25964;
loc_821097CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821097f0
	if (ctx.cr6.eq) goto loc_821097F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821097cc
	if (ctx.cr6.eq) goto loc_821097CC;
loc_821097F0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109878
	if (!ctx.cr6.eq) goto loc_82109878;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82109810
	if (!ctx.cr6.gt) goto loc_82109810;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82109814
	goto loc_82109814;
loc_82109810:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82109814:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210982c
	if (!ctx.cr6.gt) goto loc_8210982C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109830
	goto loc_82109830;
loc_8210982C:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109830:
	// bl 0x823deaf8
	ctx.lr = 0x82109834;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82109840;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq cr6,0x82109864
	if (ctx.cr6.eq) goto loc_82109864;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821125f8
	ctx.lr = 0x82109854;
	sub_821125F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109864:
	// bl 0x821126e0
	ctx.lr = 0x82109868;
	sub_821126E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109878:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25968
	ctx.r10.s64 = ctx.r10.s64 + -25968;
loc_82109884:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821098a8
	if (ctx.cr6.eq) goto loc_821098A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109884
	if (ctx.cr6.eq) goto loc_82109884;
loc_821098A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821098c8
	if (!ctx.cr6.eq) goto loc_821098C8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82107c40
	ctx.lr = 0x821098B8;
	sub_82107C40(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821098C8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
loc_821098D4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x821098f8
	if (ctx.cr6.eq) goto loc_821098F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821098d4
	if (ctx.cr6.eq) goto loc_821098D4;
loc_821098F8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109918
	if (!ctx.cr6.eq) goto loc_82109918;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82107d58
	ctx.lr = 0x82109908;
	sub_82107D58(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109918:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-25988
	ctx.r10.s64 = ctx.r10.s64 + -25988;
loc_82109924:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109948
	if (ctx.cr6.eq) goto loc_82109948;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109924
	if (ctx.cr6.eq) goto loc_82109924;
loc_82109948:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109968
	if (!ctx.cr6.eq) goto loc_82109968;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82106960
	ctx.lr = 0x82109958;
	sub_82106960(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109968:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26000
	ctx.r10.s64 = ctx.r10.s64 + -26000;
loc_82109974:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109998
	if (ctx.cr6.eq) goto loc_82109998;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109974
	if (ctx.cr6.eq) goto loc_82109974;
loc_82109998:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821099d8
	if (!ctx.cr6.eq) goto loc_821099D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c45d8
	ctx.lr = 0x821099AC;
	sub_822C45D8(ctx, base);
	// rlwinm r11,r25,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// add r9,r25,r11
	ctx.r9.u64 = ctx.r25.u64 + ctx.r11.u64;
	// addi r8,r10,-12552
	ctx.r8.s64 = ctx.r10.s64 + -12552;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821099D8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26012
	ctx.r10.s64 = ctx.r10.s64 + -26012;
loc_821099E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109a08
	if (ctx.cr6.eq) goto loc_82109A08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821099e4
	if (ctx.cr6.eq) goto loc_821099E4;
loc_82109A08:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109a28
	if (!ctx.cr6.eq) goto loc_82109A28;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82106bc8
	ctx.lr = 0x82109A18;
	sub_82106BC8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109A28:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26024
	ctx.r10.s64 = ctx.r10.s64 + -26024;
loc_82109A34:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109a58
	if (ctx.cr6.eq) goto loc_82109A58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109a34
	if (ctx.cr6.eq) goto loc_82109A34;
loc_82109A58:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109a78
	if (!ctx.cr6.eq) goto loc_82109A78;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82106ca8
	ctx.lr = 0x82109A68;
	sub_82106CA8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109A78:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26044
	ctx.r10.s64 = ctx.r10.s64 + -26044;
loc_82109A84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109aa8
	if (ctx.cr6.eq) goto loc_82109AA8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109a84
	if (ctx.cr6.eq) goto loc_82109A84;
loc_82109AA8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109b08
	if (!ctx.cr6.eq) goto loc_82109B08;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109ae4
	if (!ctx.cr6.gt) goto loc_82109AE4;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82109AC8;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82106d88
	ctx.lr = 0x82109AD4;
	sub_82106D88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109AE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82109AEC;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82106d88
	ctx.lr = 0x82109AF8;
	sub_82106D88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109B08:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26052
	ctx.r10.s64 = ctx.r10.s64 + -26052;
loc_82109B14:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109b38
	if (ctx.cr6.eq) goto loc_82109B38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109b14
	if (ctx.cr6.eq) goto loc_82109B14;
loc_82109B38:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109b98
	if (!ctx.cr6.eq) goto loc_82109B98;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109b74
	if (!ctx.cr6.gt) goto loc_82109B74;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x823deaf8
	ctx.lr = 0x82109B58;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8211f8e0
	ctx.lr = 0x82109B64;
	sub_8211F8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109B74:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82109B7C;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8211f8e0
	ctx.lr = 0x82109B88;
	sub_8211F8E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109B98:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26068
	ctx.r10.s64 = ctx.r10.s64 + -26068;
loc_82109BA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109bc8
	if (ctx.cr6.eq) goto loc_82109BC8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109ba4
	if (ctx.cr6.eq) goto loc_82109BA4;
loc_82109BC8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109c2c
	if (!ctx.cr6.eq) goto loc_82109C2C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82109be8
	if (!ctx.cr6.gt) goto loc_82109BE8;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82109bec
	goto loc_82109BEC;
loc_82109BE8:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82109BEC:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109c14
	if (!ctx.cr6.gt) goto loc_82109C14;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82108090
	ctx.lr = 0x82109C04;
	sub_82108090(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109C14:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82108090
	ctx.lr = 0x82109C1C;
	sub_82108090(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109C2C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26084
	ctx.r10.s64 = ctx.r10.s64 + -26084;
loc_82109C38:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109c5c
	if (ctx.cr6.eq) goto loc_82109C5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109c38
	if (ctx.cr6.eq) goto loc_82109C38;
loc_82109C5C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109c84
	if (!ctx.cr6.eq) goto loc_82109C84;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,20008
	ctx.r9.u64 = ctx.r11.u64 | 20008;
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109C84:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26100
	ctx.r10.s64 = ctx.r10.s64 + -26100;
loc_82109C90:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109cb4
	if (ctx.cr6.eq) goto loc_82109CB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109c90
	if (ctx.cr6.eq) goto loc_82109C90;
loc_82109CB4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109ce8
	if (!ctx.cr6.eq) goto loc_82109CE8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,20008
	ctx.r9.u64 = ctx.r11.u64 | 20008;
	// addis r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// stbx r10,r7,r9
	PPC_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u8);
	// bl 0x8232fd90
	ctx.lr = 0x82109CD8;
	sub_8232FD90(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109CE8:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26112
	ctx.r10.s64 = ctx.r10.s64 + -26112;
loc_82109CF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109d18
	if (ctx.cr6.eq) goto loc_82109D18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109cf4
	if (ctx.cr6.eq) goto loc_82109CF4;
loc_82109D18:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109d88
	if (!ctx.cr6.eq) goto loc_82109D88;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82109d38
	if (!ctx.cr6.gt) goto loc_82109D38;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82109d3c
	goto loc_82109D3C;
loc_82109D38:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82109D3C:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109d54
	if (!ctx.cr6.gt) goto loc_82109D54;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109d58
	goto loc_82109D58;
loc_82109D54:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109D58:
	// bl 0x823deaf8
	ctx.lr = 0x82109D5C;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82109D68;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8210e440
	ctx.lr = 0x82109D78;
	sub_8210E440(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109D88:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26116
	ctx.r10.s64 = ctx.r10.s64 + -26116;
loc_82109D94:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109db8
	if (ctx.cr6.eq) goto loc_82109DB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109d94
	if (ctx.cr6.eq) goto loc_82109D94;
loc_82109DB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109dd4
	if (!ctx.cr6.eq) goto loc_82109DD4;
	// bl 0x821080f0
	ctx.lr = 0x82109DC4;
	sub_821080F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109DD4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26128
	ctx.r10.s64 = ctx.r10.s64 + -26128;
loc_82109DE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109e04
	if (ctx.cr6.eq) goto loc_82109E04;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109de0
	if (ctx.cr6.eq) goto loc_82109DE0;
loc_82109E04:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109e20
	if (!ctx.cr6.eq) goto loc_82109E20;
	// bl 0x8236a028
	ctx.lr = 0x82109E10;
	sub_8236A028(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109E20:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26140
	ctx.r10.s64 = ctx.r10.s64 + -26140;
loc_82109E2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109e50
	if (ctx.cr6.eq) goto loc_82109E50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109e2c
	if (ctx.cr6.eq) goto loc_82109E2C;
loc_82109E50:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109e70
	if (!ctx.cr6.eq) goto loc_82109E70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82108420
	ctx.lr = 0x82109E60;
	sub_82108420(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109E70:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26148
	ctx.r10.s64 = ctx.r10.s64 + -26148;
loc_82109E7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109ea0
	if (ctx.cr6.eq) goto loc_82109EA0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109e7c
	if (ctx.cr6.eq) goto loc_82109E7C;
loc_82109EA0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109f0c
	if (!ctx.cr6.eq) goto loc_82109F0C;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x82109ec0
	if (!ctx.cr6.gt) goto loc_82109EC0;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x82109ec4
	goto loc_82109EC4;
loc_82109EC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82109EC4:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109edc
	if (!ctx.cr6.gt) goto loc_82109EDC;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109ee0
	goto loc_82109EE0;
loc_82109EDC:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82109EE0:
	// bl 0x823deaf8
	ctx.lr = 0x82109EE4;
	sub_823DEAF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82141340
	ctx.lr = 0x82109EF0;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8230a990
	ctx.lr = 0x82109EFC;
	sub_8230A990(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109F0C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26164
	ctx.r10.s64 = ctx.r10.s64 + -26164;
loc_82109F18:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109f3c
	if (ctx.cr6.eq) goto loc_82109F3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109f18
	if (ctx.cr6.eq) goto loc_82109F18;
loc_82109F3C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82109fcc
	if (!ctx.cr6.eq) goto loc_82109FCC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x82109f5c
	if (!ctx.cr6.gt) goto loc_82109F5C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82109f60
	goto loc_82109F60;
loc_82109F5C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82109F60:
	// addis r31,r7,3
	ctx.r31.s64 = ctx.r7.s64 + 196608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r31,-4760
	ctx.r31.s64 = ctx.r31.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82109F74;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x82109f9c
	if (!ctx.cr6.gt) goto loc_82109F9C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82109fa0
	goto loc_82109FA0;
loc_82109F9C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82109FA0:
	// bl 0x823deaf8
	ctx.lr = 0x82109FA4;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114210
	ctx.lr = 0x82109FBC;
	sub_82114210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82109FCC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26180
	ctx.r10.s64 = ctx.r10.s64 + -26180;
loc_82109FD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x82109ffc
	if (ctx.cr6.eq) goto loc_82109FFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82109fd8
	if (ctx.cr6.eq) goto loc_82109FD8;
loc_82109FFC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a08c
	if (!ctx.cr6.eq) goto loc_8210A08C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a01c
	if (!ctx.cr6.gt) goto loc_8210A01C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8210a020
	goto loc_8210A020;
loc_8210A01C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8210A020:
	// addis r31,r7,3
	ctx.r31.s64 = ctx.r7.s64 + 196608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r31,-4696
	ctx.r31.s64 = ctx.r31.s64 + -4696;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210A034;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210a05c
	if (!ctx.cr6.gt) goto loc_8210A05C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210a060
	goto loc_8210A060;
loc_8210A05C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A060:
	// bl 0x823deaf8
	ctx.lr = 0x8210A064;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114210
	ctx.lr = 0x8210A07C;
	sub_82114210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A08C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26204
	ctx.r10.s64 = ctx.r10.s64 + -26204;
loc_8210A098:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210a0bc
	if (ctx.cr6.eq) goto loc_8210A0BC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210a098
	if (ctx.cr6.eq) goto loc_8210A098;
loc_8210A0BC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a14c
	if (!ctx.cr6.eq) goto loc_8210A14C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a0dc
	if (!ctx.cr6.gt) goto loc_8210A0DC;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8210a0e0
	goto loc_8210A0E0;
loc_8210A0DC:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8210A0E0:
	// addis r31,r7,3
	ctx.r31.s64 = ctx.r7.s64 + 196608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r31,-4632
	ctx.r31.s64 = ctx.r31.s64 + -4632;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210A0F4;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210a11c
	if (!ctx.cr6.gt) goto loc_8210A11C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210a120
	goto loc_8210A120;
loc_8210A11C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A120:
	// bl 0x823deaf8
	ctx.lr = 0x8210A124;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114210
	ctx.lr = 0x8210A13C;
	sub_82114210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A14C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26224
	ctx.r10.s64 = ctx.r10.s64 + -26224;
loc_8210A158:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210a17c
	if (ctx.cr6.eq) goto loc_8210A17C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210a158
	if (ctx.cr6.eq) goto loc_8210A158;
loc_8210A17C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a20c
	if (!ctx.cr6.eq) goto loc_8210A20C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a19c
	if (!ctx.cr6.gt) goto loc_8210A19C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8210a1a0
	goto loc_8210A1A0;
loc_8210A19C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8210A1A0:
	// addis r31,r7,3
	ctx.r31.s64 = ctx.r7.s64 + 196608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r31,-4568
	ctx.r31.s64 = ctx.r31.s64 + -4568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210A1B4;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210a1dc
	if (!ctx.cr6.gt) goto loc_8210A1DC;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210a1e0
	goto loc_8210A1E0;
loc_8210A1DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A1E0:
	// bl 0x823deaf8
	ctx.lr = 0x8210A1E4;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114210
	ctx.lr = 0x8210A1FC;
	sub_82114210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A20C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26240
	ctx.r10.s64 = ctx.r10.s64 + -26240;
loc_8210A218:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// beq cr6,0x8210a23c
	if (ctx.cr6.eq) goto loc_8210A23C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210a218
	if (ctx.cr6.eq) goto loc_8210A218;
loc_8210A23C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a2cc
	if (!ctx.cr6.eq) goto loc_8210A2CC;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a25c
	if (!ctx.cr6.gt) goto loc_8210A25C;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8210a260
	goto loc_8210A260;
loc_8210A25C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_8210A260:
	// addis r31,r7,3
	ctx.r31.s64 = ctx.r7.s64 + 196608;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r31,-4504
	ctx.r31.s64 = ctx.r31.s64 + -4504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210A274;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210a29c
	if (!ctx.cr6.gt) goto loc_8210A29C;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210a2a0
	goto loc_8210A2A0;
loc_8210A29C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A2A0:
	// bl 0x823deaf8
	ctx.lr = 0x8210A2A4;
	sub_823DEAF8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82114210
	ctx.lr = 0x8210A2BC;
	sub_82114210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A2CC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26260
	ctx.r10.s64 = ctx.r10.s64 + -26260;
loc_8210A2D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8210a2fc
	if (ctx.cr6.eq) goto loc_8210A2FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210a2d8
	if (ctx.cr6.eq) goto loc_8210A2D8;
loc_8210A2FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a35c
	if (!ctx.cr6.eq) goto loc_8210A35C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a338
	if (!ctx.cr6.gt) goto loc_8210A338;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82141340
	ctx.lr = 0x8210A320;
	sub_82141340(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8230c438
	ctx.lr = 0x8210A328;
	sub_8230C438(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A338:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bl 0x82141340
	ctx.lr = 0x8210A344;
	sub_82141340(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8230c438
	ctx.lr = 0x8210A34C;
	sub_8230C438(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A35C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// addi r10,r10,-26272
	ctx.r10.s64 = ctx.r10.s64 + -26272;
loc_8210A368:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq cr6,0x8210a38c
	if (ctx.cr6.eq) goto loc_8210A38C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210a368
	if (ctx.cr6.eq) goto loc_8210A368;
loc_8210A38C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210a430
	if (!ctx.cr6.eq) goto loc_8210A430;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x8210a440
	if (!ctx.cr6.eq) goto loc_8210A440;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// ble cr6,0x8210a3b4
	if (!ctx.cr6.gt) goto loc_8210A3B4;
	// addi r11,r27,100
	ctx.r11.s64 = ctx.r27.s64 + 100;
	// lwzx r10,r8,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x8210a3b8
	goto loc_8210A3B8;
loc_8210A3B4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A3B8:
	// bl 0x823deaf8
	ctx.lr = 0x8210A3BC;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,68
	ctx.r10.s64 = ctx.r27.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210a3e8
	if (!ctx.cr6.gt) goto loc_8210A3E8;
	// addi r10,r27,100
	ctx.r10.s64 = ctx.r27.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210a3ec
	goto loc_8210A3EC;
loc_8210A3E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210A3EC:
	// bl 0x823deaf8
	ctx.lr = 0x8210A3F0;
	sub_823DEAF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823647f8
	ctx.lr = 0x8210A404;
	sub_823647F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8210a440
	if (!ctx.cr6.eq) goto loc_8210A440;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f89f8
	ctx.lr = 0x8210A420;
	sub_820F89F8(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210A430:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-26308
	ctx.r4.s64 = ctx.r11.s64 + -26308;
	// bl 0x82280900
	ctx.lr = 0x8210A440;
	sub_82280900(ctx, base);
loc_8210A440:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82108618) {
	__imp__sub_82108618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A450) {
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
	// bl 0x82108618
	ctx.lr = 0x8210A460;
	sub_82108618(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x8210A464;
	sub_8227D8F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210A450) {
	__imp__sub_8210A450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210A474) {
	__imp__sub_8210A474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210A480;
	__savegprlr_29(ctx, base);
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8210a4e4
	if (!ctx.cr6.lt) goto loc_8210A4E4;
loc_8210A4B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r4.u32);
	// bl 0x8211fef0
	ctx.lr = 0x8210A4C4;
	sub_8211FEF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210a4d8
	if (ctx.cr6.eq) goto loc_8210A4D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82108618
	ctx.lr = 0x8210A4D4;
	sub_82108618(ctx, base);
	// bl 0x8227d8f0
	ctx.lr = 0x8210A4D8;
	sub_8227D8F0(ctx, base);
loc_8210A4D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8210a4b0
	if (ctx.cr6.lt) goto loc_8210A4B0;
loc_8210A4E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210A478) {
	__imp__sub_8210A478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210A4EC) {
	__imp__sub_8210A4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A4F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210A4F0) {
	__imp__sub_8210A4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210A4F4) {
	__imp__sub_8210A4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x8210A500;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r29,r11,-15680
	ctx.r29.s64 = ctx.r11.s64 + -15680;
	// ori r9,r10,61928
	ctx.r9.u64 = ctx.r10.u64 | 61928;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r5,r5,58312
	ctx.r5.u64 = ctx.r5.u64 | 58312;
	// lwz r31,4(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r29,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// bl 0x823de090
	ctx.lr = 0x8210A534;
	sub_823DE090(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// ori r6,r8,61928
	ctx.r6.u64 = ctx.r8.u64 | 61928;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// addi r3,r7,-5696
	ctx.r3.s64 = ctx.r7.s64 + -5696;
	// ori r5,r5,40960
	ctx.r5.u64 = ctx.r5.u64 | 40960;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r29,r6
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, ctx.r30.u32);
	// bl 0x823de090
	ctx.lr = 0x8210A55C;
	sub_823DE090(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r3,r4,-29912
	ctx.r3.s64 = ctx.r4.s64 + -29912;
	// ori r5,r5,36864
	ctx.r5.u64 = ctx.r5.u64 | 36864;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8210A574;
	sub_823DE090(ctx, base);
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// li r5,11772
	ctx.r5.s64 = 11772;
	// addi r3,r3,6968
	ctx.r3.s64 = ctx.r3.s64 + 6968;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8210A588;
	sub_823DE090(ctx, base);
	// bl 0x820e1160
	ctx.lr = 0x8210A58C;
	sub_820E1160(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r16,0
	ctx.r16.s64 = 0;
	// addi r18,r11,9240
	ctx.r18.s64 = ctx.r11.s64 + 9240;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
	// addi r23,r18,24
	ctx.r23.s64 = ctx.r18.s64 + 24;
	// ori r25,r10,61924
	ctx.r25.u64 = ctx.r10.u64 | 61924;
	// ori r26,r9,18596
	ctx.r26.u64 = ctx.r9.u64 | 18596;
	// li r24,1
	ctx.r24.s64 = 1;
	// ori r27,r8,22912
	ctx.r27.u64 = ctx.r8.u64 | 22912;
	// ori r28,r7,2416
	ctx.r28.u64 = ctx.r7.u64 | 2416;
	// lis r19,-32190
	ctx.r19.s64 = -2109603840;
	// lis r17,-32166
	ctx.r17.s64 = -2108030976;
	// addi r21,r11,-27868
	ctx.r21.s64 = ctx.r11.s64 + -27868;
loc_8210A5D4:
	// lbz r10,29088(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210a600
	if (!ctx.cr6.eq) goto loc_8210A600;
	// lwz r11,-32312(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// subfc r8,r11,r22
	ctx.xer.ca = ctx.r22.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r22.s64 - ctx.r11.s64;
	// eqv r7,r11,r22
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r22.u64);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x8210a610
	goto loc_8210A610;
loc_8210A600:
	// lwz r11,-8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_8210A610:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210a77c
	if (ctx.cr6.eq) goto loc_8210A77C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// beq cr6,0x8210a62c
	if (ctx.cr6.eq) goto loc_8210A62C;
	// lhz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r23.u32 + 0);
loc_8210A62C:
	// mullw r11,r31,r25
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r25.s32);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r20,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r20.u32);
	// stwx r24,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r24.u32);
	// bl 0x820f5da0
	ctx.lr = 0x8210A644;
	sub_820F5DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217ec68
	ctx.lr = 0x8210A64C;
	sub_8217EC68(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r4,r30,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// bl 0x8239cd88
	ctx.lr = 0x8210A65C;
	sub_8239CD88(ctx, base);
	// add r3,r30,r28
	ctx.r3.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x8239e910
	ctx.lr = 0x8210A664;
	sub_8239E910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239d7d8
	ctx.lr = 0x8210A66C;
	sub_8239D7D8(ctx, base);
	// li r30,16
	ctx.r30.s64 = 16;
loc_8210A670:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821059e0
	ctx.lr = 0x8210A67C;
	sub_821059E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,48
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 48, ctx.xer);
	// blt cr6,0x8210a670
	if (ctx.cr6.lt) goto loc_8210A670;
	// li r30,80
	ctx.r30.s64 = 80;
loc_8210A68C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210e9f0
	ctx.lr = 0x8210A698;
	sub_8210E9F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,112
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 112, ctx.xer);
	// blt cr6,0x8210a68c
	if (ctx.cr6.lt) goto loc_8210A68C;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821201a0
	ctx.lr = 0x8210A6AC;
	sub_821201A0(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x8210A6B0;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8239b910
	ctx.lr = 0x8210A6B8;
	sub_8239B910(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eadd0
	ctx.lr = 0x8210A6C0;
	sub_820EADD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eae80
	ctx.lr = 0x8210A6C8;
	sub_820EAE80(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821201a0
	ctx.lr = 0x8210A6D0;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x8210a6f8
	if (ctx.cr6.eq) goto loc_8210A6F8;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x8210a6f0
	if (ctx.cr6.eq) goto loc_8210A6F0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8210a6fc
	goto loc_8210A6FC;
loc_8210A6F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8210a6fc
	goto loc_8210A6FC;
loc_8210A6F8:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8210A6FC:
	// bl 0x82112870
	ctx.lr = 0x8210A700;
	sub_82112870(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821201a0
	ctx.lr = 0x8210A708;
	sub_821201A0(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x823deeb8
	ctx.lr = 0x8210A728;
	sub_823DEEB8(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x82112898
	ctx.lr = 0x8210A744;
	sub_82112898(ctx, base);
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821201a0
	ctx.lr = 0x8210A74C;
	sub_821201A0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe r4,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821128d8
	ctx.lr = 0x8210A764;
	sub_821128D8(ctx, base);
	// lbz r4,29088(r17)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r17.u32 + 29088);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210a77c
	if (ctx.cr6.eq) goto loc_8210A77C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82127550
	ctx.lr = 0x8210A77C;
	sub_82127550(ctx, base);
loc_8210A77C:
	// addi r23,r23,9780
	ctx.r23.s64 = ctx.r23.s64 + 9780;
	// addi r11,r18,19584
	ctx.r11.s64 = ctx.r18.s64 + 19584;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210a5d4
	if (ctx.cr6.lt) goto loc_8210A5D4;
	// bl 0x823683b8
	ctx.lr = 0x8210A794;
	sub_823683B8(ctx, base);
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// addi r31,r18,24
	ctx.r31.s64 = ctx.r18.s64 + 24;
loc_8210A7A0:
	// lbz r9,29088(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210a7c4
	if (!ctx.cr6.eq) goto loc_8210A7C4;
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
	// b 0x8210a7d4
	goto loc_8210A7D4;
loc_8210A7C4:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8210A7D4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210a7f8
	if (ctx.cr6.eq) goto loc_8210A7F8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8210a7f0
	if (ctx.cr6.eq) goto loc_8210A7F0;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_8210A7F0:
	// bl 0x820f86b8
	ctx.lr = 0x8210A7F4;
	sub_820F86B8(ctx, base);
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
loc_8210A7F8:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r18,19584
	ctx.r11.s64 = ctx.r18.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210a7a0
	if (ctx.cr6.lt) goto loc_8210A7A0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8210a820
	if (ctx.cr6.eq) goto loc_8210A820;
	// bl 0x8228d778
	ctx.lr = 0x8210A818;
	sub_8228D778(ctx, base);
	// bl 0x8228d700
	ctx.lr = 0x8210A81C;
	sub_8228D700(ctx, base);
	// bl 0x82254920
	ctx.lr = 0x8210A820;
	sub_82254920(ctx, base);
loc_8210A820:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a1dd8
	ctx.lr = 0x8210A828;
	sub_821A1DD8(ctx, base);
	// bl 0x820f1870
	ctx.lr = 0x8210A82C;
	sub_820F1870(ctx, base);
	// bl 0x8234d2e0
	ctx.lr = 0x8210A830;
	sub_8234D2E0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// addi r30,r18,24
	ctx.r30.s64 = ctx.r18.s64 + 24;
	// addi r28,r11,-12552
	ctx.r28.s64 = ctx.r11.s64 + -12552;
loc_8210A844:
	// lbz r9,29088(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210a868
	if (!ctx.cr6.eq) goto loc_8210A868;
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
	// b 0x8210a878
	goto loc_8210A878;
loc_8210A868:
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8210A878:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210a8c0
	if (ctx.cr6.eq) goto loc_8210A8C0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// beq cr6,0x8210a894
	if (ctx.cr6.eq) goto loc_8210A894;
	// lhz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
loc_8210A894:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c45d8
	ctx.lr = 0x8210A8A0;
	sub_822C45D8(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r16,r10,r28
	PPC_STORE_U8(ctx.r10.u32 + ctx.r28.u32, ctx.r16.u8);
	// bl 0x821015c8
	ctx.lr = 0x8210A8BC;
	sub_821015C8(ctx, base);
	// lwz r10,-32312(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + -32312);
loc_8210A8C0:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r18,19584
	ctx.r11.s64 = ctx.r18.s64 + 19584;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210a844
	if (ctx.cr6.lt) goto loc_8210A844;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821994e8
	ctx.lr = 0x8210A8DC;
	sub_821994E8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210A4F8) {
	__imp__sub_8210A4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210A8E4) {
	__imp__sub_8210A8E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A8E8) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fsubs f12,f2,f3
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fsubs f11,f4,f2
	ctx.f11.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f13,f0,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fsubs f10,f13,f2
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmadds f8,f10,f1,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f7,f8,f1,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f1,f7,f1,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f3.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210A8E8) {
	__imp__sub_8210A8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A910) {
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
	// bl 0x823de028
	ctx.lr = 0x8210A928;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f30,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,5816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5816);
	ctx.f31.f64 = double(temp.f32);
loc_8210A940:
	// bl 0x822d3ee0
	ctx.lr = 0x8210A944;
	sub_822D3EE0(ctx, base);
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x8210A950;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x8210A95C;
	sub_823DE800(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x822d3ea0
	ctx.lr = 0x8210A964;
	sub_822D3EA0(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f1,f28
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x8210A980;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// blt cr6,0x8210a940
	if (ctx.cr6.lt) goto loc_8210A940;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x8210A994;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210A910) {
	__imp__sub_8210A910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210A9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210A9B0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-5928
	ctx.r3.s64 = ctx.r10.s64 + -5928;
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210a910
	ctx.lr = 0x8210A9D4;
	sub_8210A910(ctx, base);
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
	// li r30,127
	ctx.r30.s64 = 127;
loc_8210A9DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// bl 0x8210a910
	ctx.lr = 0x8210A9EC;
	sub_8210A910(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x8210a9dc
	if (!ctx.cr0.eq) goto loc_8210A9DC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,128
	ctx.r30.s64 = 128;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,-24464
	ctx.r29.s64 = ctx.r11.s64 + -24464;
loc_8210AA0C:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfsu f2,8(r31)
	ea = 8 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f2.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// li r3,17
	ctx.r3.s64 = 17;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82280900
	ctx.lr = 0x8210AA30;
	sub_82280900(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8210aa0c
	if (!ctx.cr0.eq) goto loc_8210AA0C;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210A9A8) {
	__imp__sub_8210A9A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210AA44) {
	__imp__sub_8210AA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,58132
	ctx.r9.u64 = ctx.r11.u64 | 58132;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r11,r8,58136
	ctx.r11.u64 = ctx.r8.u64 | 58136;
	// lfs f10,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f0,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x8210aa88
	if (!ctx.cr6.eq) goto loc_8210AA88;
	// lfsx f13,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beq cr6,0x8210ab58
	if (ctx.cr6.eq) goto loc_8210AB58;
loc_8210AA88:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfsx f11,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r31,r31,2128
	ctx.r31.s64 = ctx.r31.s64 + 2128;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fdivs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f12,f10,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fsubs f1,f13,f3
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f9,f3,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// fmuls f7,f1,f1
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f6,f8,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f5,f9,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f2,f3,f0,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// fdivs f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f10,f1,f7
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f9,f8,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f0,f12
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f5,f10,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f3,f10,f13,f6
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f6.f64));
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmsubs f2,f9,f12,f5
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f1,f0,f11,f4
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f4.f64));
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x822d7a78
	ctx.lr = 0x8210AB48;
	sub_822D7A78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d5c30
	ctx.lr = 0x8210AB58;
	sub_822D5C30(ctx, base);
loc_8210AB58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210AA48) {
	__imp__sub_8210AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210AB6C) {
	__imp__sub_8210AB6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AB70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82141398
	ctx.lr = 0x8210AB88;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x8210abac
	if (ctx.cr6.gt) goto loc_8210ABAC;
	// bl 0x82393488
	ctx.lr = 0x8210AB98;
	sub_82393488(ctx, base);
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
loc_8210ABAC:
	// bl 0x82111bd8
	ctx.lr = 0x8210ABB0;
	sub_82111BD8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f4,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82393508
	ctx.lr = 0x8210ABC8;
	sub_82393508(ctx, base);
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

PPC_WEAK_FUNC(sub_8210AB70) {
	__imp__sub_8210AB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210ABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210ABDC) {
	__imp__sub_8210ABDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210ABE0) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,58120
	ctx.r7.u64 = ctx.r8.u64 | 58120;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r6,58124
	ctx.r5.u64 = ctx.r6.u64 | 58124;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// beq cr6,0x8210acd4
	if (ctx.cr6.eq) goto loc_8210ACD4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8210acd4
	if (!ctx.cr6.gt) goto loc_8210ACD4;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8210acd4
	if (!ctx.cr0.gt) goto loc_8210ACD4;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,58116
	ctx.r8.u64 = ctx.r9.u64 | 58116;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r3,4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8210acd8
	if (!ctx.cr6.lt) goto loc_8210ACD8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fdivs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210ACB4;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210ACD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8210ACD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210ABE0) {
	__imp__sub_8210ABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210ACE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8210ACF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x8210ad40
	if (ctx.cr6.gt) goto loc_8210AD40;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,58144
	ctx.r9.u64 = ctx.r11.u64 | 58144;
	// ori r8,r10,58140
	ctx.r8.u64 = ctx.r10.u64 | 58140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8210AD40:
	// addis r28,r30,3
	ctx.r28.s64 = ctx.r30.s64 + 196608;
	// addi r28,r28,-7392
	ctx.r28.s64 = ctx.r28.s64 + -7392;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210ad7c
	if (ctx.cr6.eq) goto loc_8210AD7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82111bd8
	ctx.lr = 0x8210AD5C;
	sub_82111BD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82393590
	ctx.lr = 0x8210AD7C;
	sub_82393590(ctx, base);
loc_8210AD7C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,58148
	ctx.r10.u64 = ctx.r11.u64 | 58148;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210ada8
	if (ctx.cr6.eq) goto loc_8210ADA8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,58140
	ctx.r9.u64 = ctx.r11.u64 | 58140;
	// stwx r10,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8210ADA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210ab70
	ctx.lr = 0x8210ADB0;
	sub_8210AB70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210ACE8) {
	__imp__sub_8210ACE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210ADC0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f0,5816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5816);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x8210ADF8;
	sub_823DE720(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x8210AE04;
	sub_823DE800(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210ADC0) {
	__imp__sub_8210ADC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210AE38;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,58120
	ctx.r7.u64 = ctx.r8.u64 | 58120;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r6,58116
	ctx.r4.u64 = ctx.r6.u64 | 58116;
	// ori r3,r5,58124
	ctx.r3.u64 = ctx.r5.u64 | 58124;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r31,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// lwzx r10,r31,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// beq cr6,0x8210afcc
	if (ctx.cr6.eq) goto loc_8210AFCC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8210afcc
	if (!ctx.cr6.gt) goto loc_8210AFCC;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8210afcc
	if (!ctx.cr0.gt) goto loc_8210AFCC;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f31,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f0,f11
	ctx.f0.f64 = double(float(ctx.f11.f64));
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8210af08
	if (!ctx.cr6.lt) goto loc_8210AF08;
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x8210af0c
	goto loc_8210AF0C;
loc_8210AF08:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8210AF0C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8210af18
	if (!ctx.cr6.lt) goto loc_8210AF18;
	// fdivs f31,f0,f12
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
loc_8210AF18:
	// bl 0x8210adc0
	ctx.lr = 0x8210AF1C;
	sub_8210ADC0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210adc0
	ctx.lr = 0x8210AF28;
	sub_8210ADC0(ctx, base);
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r29,r29,-7392
	ctx.r29.s64 = ctx.r29.s64 + -7392;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210af78
	if (ctx.cr6.eq) goto loc_8210AF78;
	// bl 0x820e4850
	ctx.lr = 0x8210AF44;
	sub_820E4850(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82111bd8
	ctx.lr = 0x8210AF4C;
	sub_82111BD8(ctx, base);
	// lfs f6,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82393628
	ctx.lr = 0x8210AF68;
	sub_82393628(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210AF78:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,58148
	ctx.r10.u64 = ctx.r11.u64 | 58148;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210afac
	if (ctx.cr6.eq) goto loc_8210AFAC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,58140
	ctx.r9.u64 = ctx.r11.u64 | 58140;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210AFAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210ab70
	ctx.lr = 0x8210AFB4;
	sub_8210AB70(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210AFCC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,58144
	ctx.r9.u64 = ctx.r11.u64 | 58144;
	// ori r8,r10,58140
	ctx.r8.u64 = ctx.r10.u64 | 58140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210AE30) {
	__imp__sub_8210AE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210AFF8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82366010
	ctx.lr = 0x8210B018;
	sub_82366010(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823669e8
	ctx.lr = 0x8210B024;
	sub_823669E8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-7384
	ctx.r11.s64 = ctx.r11.s64 + -7384;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210b07c
	if (ctx.cr6.eq) goto loc_8210B07C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r3,r9,-24452
	ctx.r3.s64 = ctx.r9.s64 + -24452;
	// bl 0x821201c0
	ctx.lr = 0x8210B064;
	sub_821201C0(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r8,-5928
	ctx.r5.s64 = ctx.r8.s64 + -5928;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82364b50
	ctx.lr = 0x8210B07C;
	sub_82364B50(ctx, base);
loc_8210B07C:
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

PPC_WEAK_FUNC(sub_8210AFF8) {
	__imp__sub_8210AFF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r6,r3,r8
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f2,5484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// b 0x82120760
	sub_82120760(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B090) {
	__imp__sub_8210B090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B0C8) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r8,58132
	ctx.r5.u64 = ctx.r8.u64 | 58132;
	// ori r4,r7,58136
	ctx.r4.u64 = ctx.r7.u64 | 58136;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210B0C8) {
	__imp__sub_8210B0C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210B104) {
	__imp__sub_8210B104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B108) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,61864
	ctx.r7.u64 = ctx.r8.u64 | 61864;
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,58144
	ctx.r8.u64 = ctx.r10.u64 | 58144;
	// ori r7,r9,58140
	ctx.r7.u64 = ctx.r9.u64 | 58140;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210B108) {
	__imp__sub_8210B108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210B154) {
	__imp__sub_8210B154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210B160;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8210aff8
	ctx.lr = 0x8210B170;
	sub_8210AFF8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r31,r11,-15680
	ctx.r31.s64 = ctx.r11.s64 + -15680;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// addis r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 196608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mullw r30,r29,r9
	ctx.r30.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// lfs f0,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,-7408
	ctx.r7.s64 = ctx.r11.s64 + -7408;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfsx f0,r30,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82120760
	ctx.lr = 0x8210B1B0;
	sub_82120760(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ori r10,r5,58132
	ctx.r10.u64 = ctx.r5.u64 | 58132;
	// ori r9,r4,58136
	ctx.r9.u64 = ctx.r4.u64 | 58136;
	// ori r8,r3,61864
	ctx.r8.u64 = ctx.r3.u64 | 61864;
	// stfsx f31,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stfsx f31,r11,r9
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lbzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8210b1fc
	if (!ctx.cr6.eq) goto loc_8210B1FC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,58144
	ctx.r8.u64 = ctx.r10.u64 | 58144;
	// ori r7,r9,58140
	ctx.r7.u64 = ctx.r9.u64 | 58140;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
loc_8210B1FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B158) {
	__imp__sub_8210B158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8210B210;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210b23c
	if (!ctx.cr6.eq) goto loc_8210B23C;
	// bl 0x8210aff8
	ctx.lr = 0x8210B234;
	sub_8210AFF8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8210B23C:
	// lwz r10,580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// add r29,r9,r28
	ctx.r29.u64 = ctx.r9.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8210b28c
	if (!ctx.cr6.lt) goto loc_8210B28C;
	// subf r7,r30,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lfs f2,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// lfs f1,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823668c0
	ctx.lr = 0x8210B274;
	sub_823668C0(ctx, base);
	// lwz r11,292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// li r3,4
	ctx.r3.s64 = 4;
	// subf r5,r30,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bl 0x82365f08
	ctx.lr = 0x8210B288;
	sub_82365F08(ctx, base);
	// b 0x8210b2e8
	goto loc_8210B2E8;
loc_8210B28C:
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8210b2c0
	if (!ctx.cr6.gt) goto loc_8210B2C0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// lfs f1,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f1.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823668c0
	ctx.lr = 0x8210B2AC;
	sub_823668C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,324
	ctx.r4.s64 = ctx.r31.s64 + 324;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82365f08
	ctx.lr = 0x8210B2BC;
	sub_82365F08(ctx, base);
	// b 0x8210b2e8
	goto loc_8210B2E8;
loc_8210B2C0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8210b2e8
	if (ctx.cr6.lt) goto loc_8210B2E8;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8210b2e8
	if (!ctx.cr6.lt) goto loc_8210B2E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823669e8
	ctx.lr = 0x8210B2DC;
	sub_823669E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82366010
	ctx.lr = 0x8210B2E8;
	sub_82366010(ctx, base);
loc_8210B2E8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r10,584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// addi r27,r11,-5928
	ctx.r27.s64 = ctx.r11.s64 + -5928;
	// lwz r11,588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add. r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8210b390
	if (!ctx.cr0.gt) goto loc_8210B390;
	// addi r3,r31,33
	ctx.r3.s64 = ctx.r31.s64 + 33;
	// bl 0x821201c0
	ctx.lr = 0x8210B310;
	sub_821201C0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r31,97
	ctx.r3.s64 = ctx.r31.s64 + 97;
	// bl 0x821201c0
	ctx.lr = 0x8210B31C;
	sub_821201C0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 584);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f2,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// beq cr6,0x8210b370
	if (ctx.cr6.eq) goto loc_8210B370;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8210b370
	if (ctx.cr6.gt) goto loc_8210B370;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r29
	ctx.r10.s64 = ctx.r29.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// b 0x8210b378
	goto loc_8210B378;
loc_8210B370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_8210B378:
	// li r7,2047
	ctx.r7.s64 = 2047;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82365090
	ctx.lr = 0x8210B390;
	sub_82365090(ctx, base);
loc_8210B390:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r8,588(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 588);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// ori r6,r11,61924
	ctx.r6.u64 = ctx.r11.u64 | 61924;
	// addi r10,r7,-15680
	ctx.r10.s64 = ctx.r7.s64 + -15680;
	// mullw r11,r25,r6
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r6.s32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r4,r5,22912
	ctx.r4.u64 = ctx.r5.u64 | 22912;
	// subf r11,r30,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r30.s64;
	// lwzx r10,r9,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8210b3f0
	if (!ctx.cr6.lt) goto loc_8210B3F0;
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// addi r11,r11,-7384
	ctx.r11.s64 = ctx.r11.s64 + -7384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210b430
	if (ctx.cr6.eq) goto loc_8210B430;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,225
	ctx.r3.s64 = ctx.r31.s64 + 225;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// b 0x8210b410
	goto loc_8210B410;
loc_8210B3F0:
	// addis r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 196608;
	// addi r9,r9,-7384
	ctx.r9.s64 = ctx.r9.s64 + -7384;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8210b430
	if (ctx.cr6.eq) goto loc_8210B430;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r3,r31,161
	ctx.r3.s64 = ctx.r31.s64 + 161;
	// subf r29,r11,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8210B410:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r31,2047
	ctx.r31.s64 = 2047;
	// bl 0x821201c0
	ctx.lr = 0x8210B41C;
	sub_821201C0(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82364b50
	ctx.lr = 0x8210B430;
	sub_82364B50(ctx, base);
loc_8210B430:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B208) {
	__imp__sub_8210B208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B438) {
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
	// lbz r11,592(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 592);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b528
	if (ctx.cr6.eq) goto loc_8210B528;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,596(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 596);
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8210b470
	if (ctx.cr6.lt) goto loc_8210B470;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x8210b4a4
	goto loc_8210B4A4;
loc_8210B470:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210b528
	if (!ctx.cr6.gt) goto loc_8210B528;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
loc_8210B4A4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
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
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,58128
	ctx.r9.u64 = ctx.r10.u64 | 58128;
	// bne cr6,0x8210b4f0
	if (!ctx.cr6.eq) goto loc_8210B4F0;
	// lfs f0,600(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lfs f1,604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 604);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82120760
	ctx.lr = 0x8210B4E0;
	sub_82120760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210B4F0:
	// lfs f12,600(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 600);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f9,f11,f13,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfsx f9,r11,r9
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// lfs f7,608(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 608);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,604(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 604);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fmuls f2,f7,f10
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// bl 0x82120760
	ctx.lr = 0x8210B518;
	sub_82120760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210B528:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r5,r11,-7408
	ctx.r5.s64 = ctx.r11.s64 + -7408;
	// mullw r6,r3,r8
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f0,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f2,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82120760
	ctx.lr = 0x8210B560;
	sub_82120760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210B438) {
	__imp__sub_8210B438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B570) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf. r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x8210b5d8
	if (ctx.cr0.gt) goto loc_8210B5D8;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r8,58132
	ctx.r5.u64 = ctx.r8.u64 | 58132;
	// ori r4,r7,58136
	ctx.r4.u64 = ctx.r7.u64 | 58136;
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r11,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// b 0x8210b754
	goto loc_8210B754;
loc_8210B5D8:
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// lwz r10,-30052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30052);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8210b754
	if (ctx.cr6.eq) goto loc_8210B754;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// bge cr6,0x8210b62c
	if (!ctx.cr6.lt) goto loc_8210B62C;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
loc_8210B62C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f12,7544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7544);
	ctx.f12.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fnmsubs f9,f0,f13,f12
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fmuls f30,f11,f4
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f31,f5,f10
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210B674;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mulli r10,r31,61
	ctx.r10.s64 = ctx.r31.s64 * 61;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// addi r9,r8,-25512
	ctx.r9.s64 = ctx.r8.s64 + -25512;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r6,3,22,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3F8;
	// ori r4,r7,61924
	ctx.r4.u64 = ctx.r7.u64 | 61924;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r3,-32187
	ctx.r3.s64 = -2109407232;
	// mullw r9,r30,r4
	ctx.r9.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r4.s32);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f4,f30,f13
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f13,f12,f3
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f12,f11,f2
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fsubs f0,f2,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// addi r10,r3,-15680
	ctx.r10.s64 = ctx.r3.s64 + -15680;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fadds f11,f8,f6
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// ori r6,r8,58132
	ctx.r6.u64 = ctx.r8.u64 | 58132;
	// ori r5,r7,58136
	ctx.r5.u64 = ctx.r7.u64 | 58136;
	// fadds f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// fsubs f9,f11,f3
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fsubs f8,f10,f2
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// fsubs f7,f1,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// fsubs f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmadds f2,f9,f4,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fmadds f1,f8,f4,f3
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f0,f2,f4,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f13,f1,f4,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fmadds f12,f0,f4,f6
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f11,f13,f4,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfsx f10,r11,r6
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// stfsx f9,r11,r5
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
loc_8210B754:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_8210B570) {
	__imp__sub_8210B570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210B774) {
	__imp__sub_8210B774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8210B780;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r11,11308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// subf r31,r5,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r5.s64;
	// beq cr6,0x8210b7e8
	if (ctx.cr6.eq) goto loc_8210B7E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8210b7e8
	if (ctx.cr6.lt) goto loc_8210B7E8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8210b208
	ctx.lr = 0x8210B7B8;
	sub_8210B208(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b438
	ctx.lr = 0x8210B7CC;
	sub_8210B438(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b570
	ctx.lr = 0x8210B7E0;
	sub_8210B570(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8210B7E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b158
	ctx.lr = 0x8210B7F0;
	sub_8210B158(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B778) {
	__imp__sub_8210B778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B7F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r11,r11,58116
	ctx.r11.u64 = ctx.r11.u64 | 58116;
	// ori r10,r10,58120
	ctx.r10.u64 = ctx.r10.u64 | 58120;
	// ori r9,r9,58124
	ctx.r9.u64 = ctx.r9.u64 | 58124;
	// stwx r4,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// stwx r5,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r6,r3,r9
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210B7F8) {
	__imp__sub_8210B7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B820) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r6,r8,58124
	ctx.r6.u64 = ctx.r8.u64 | 58124;
	// ori r5,r7,22912
	ctx.r5.u64 = ctx.r7.u64 | 22912;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r3,r4,58120
	ctx.r3.u64 = ctx.r4.u64 | 58120;
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt 0x8210b870
	if (ctx.cr0.gt) goto loc_8210B870;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210B870:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,58116
	ctx.r8.u64 = ctx.r9.u64 | 58116;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210B820) {
	__imp__sub_8210B820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210B894) {
	__imp__sub_8210B894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B898) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r5,r8,-15680
	ctx.r5.s64 = ctx.r8.s64 + -15680;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// ori r4,r6,61924
	ctx.r4.u64 = ctx.r6.u64 | 61924;
	// addis r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 196608;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// mullw r10,r3,r4
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// addi r11,r11,-7384
	ctx.r11.s64 = ctx.r11.s64 + -7384;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_8210B898) {
	__imp__sub_8210B898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210B8D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8210b914
	if (!ctx.cr6.eq) goto loc_8210B914;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8210b914
	if (ctx.cr6.eq) goto loc_8210B914;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,-19392
	ctx.r7.s64 = ctx.r9.s64 + -19392;
	// rlwinm r6,r8,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r29,r6,r7
	PPC_STORE_U8(ctx.r6.u32 + ctx.r7.u32, ctx.r29.u8);
loc_8210B914:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x8210b92c
	if (!ctx.cr6.eq) goto loc_8210B92C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r4,334(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x8235dc10
	ctx.lr = 0x8210B92C;
	sub_8235DC10(ctx, base);
loc_8210B92C:
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210b964
	if (!ctx.cr6.eq) goto loc_8210B964;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x8210b954
	if (ctx.cr6.lt) goto loc_8210B954;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8210b958
	if (!ctx.cr6.gt) goto loc_8210B958;
loc_8210B954:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8210B958:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210b988
	if (ctx.cr6.eq) goto loc_8210B988;
loc_8210B964:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210b974
	if (ctx.cr6.eq) goto loc_8210B974;
	// bl 0x8228d1f8
	ctx.lr = 0x8210B974;
	sub_8228D1F8(ctx, base);
loc_8210B974:
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
loc_8210B988:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8210b99c
	if (ctx.cr6.eq) goto loc_8210B99C;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8210b9b0
	if (!ctx.cr6.eq) goto loc_8210B9B0;
loc_8210B99C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8210b9cc
	if (!ctx.cr6.eq) goto loc_8210B9CC;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8210b9c0
	if (ctx.cr6.eq) goto loc_8210B9C0;
loc_8210B9B0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8210b9c0
	if (ctx.cr6.eq) goto loc_8210B9C0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82259630
	ctx.lr = 0x8210B9C0;
	sub_82259630(ctx, base);
loc_8210B9C0:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r29,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r29.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
loc_8210B9CC:
	// stb r29,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B8D0) {
	__imp__sub_8210B8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210B9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 388, ctx.r9.u32);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 392, temp.u32);
	// stfs f0,396(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 396, temp.u32);
	// stfs f0,400(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 400, temp.u32);
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8210ba44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA44;
	// bdzf 4*cr6+eq,0x8210ba40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA40;
	// bdzf 4*cr6+eq,0x8210ba44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA44;
	// bdzf 4*cr6+eq,0x8210ba40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA40;
	// bdzf 4*cr6+eq,0x8210ba2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA2C;
	// bdzf 4*cr6+eq,0x8210ba40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8210BA40;
	// bne cr6,0x8210ba2c
	if (!ctx.cr6.eq) goto loc_8210BA2C;
	// b 0x8235dbf0
	sub_8235DBF0(ctx, base);
	return;
loc_8210BA2C:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210BA38:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8210ba38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210BA38;
loc_8210BA40:
	// blr 
	return;
loc_8210BA44:
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210B9D8) {
	__imp__sub_8210B9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210BA54) {
	__imp__sub_8210BA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BA58) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x8210ba88
	if (ctx.cr6.eq) goto loc_8210BA88;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x8210ba74
	if (ctx.cr6.eq) goto loc_8210BA74;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210BA74:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_8210BA88:
	// lbz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210BA58) {
	__imp__sub_8210BA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210BA9C) {
	__imp__sub_8210BA9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8210BAA8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8210bad0
	if (!ctx.cr6.eq) goto loc_8210BAD0;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210bae0
	if (ctx.cr6.eq) goto loc_8210BAE0;
loc_8210BAD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b8d0
	ctx.lr = 0x8210BAD8;
	sub_8210B8D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b9d8
	ctx.lr = 0x8210BAE0;
	sub_8210B9D8(ctx, base);
loc_8210BAE0:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,9240
	ctx.r25.s64 = ctx.r11.s64 + 9240;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// addi r29,r25,24
	ctx.r29.s64 = ctx.r25.s64 + 24;
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
	// lis r24,-32166
	ctx.r24.s64 = -2108030976;
loc_8210BB00:
	// lbz r9,29088(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210bb24
	if (!ctx.cr6.eq) goto loc_8210BB24;
	// subfc r11,r10,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r10.s64;
	// eqv r8,r10,r28
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r28.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x8210bb34
	goto loc_8210BB34;
loc_8210BB24:
	// lwz r11,-8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_8210BB34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210bb68
	if (ctx.cr6.eq) goto loc_8210BB68;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// beq cr6,0x8210bb50
	if (ctx.cr6.eq) goto loc_8210BB50;
	// lhz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
loc_8210BB50:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,334(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x820d67d8
	ctx.lr = 0x8210BB5C;
	sub_820D67D8(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stb r27,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r27.u8);
	// lwz r10,-32312(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_8210BB68:
	// addi r29,r29,9780
	ctx.r29.s64 = ctx.r29.s64 + 9780;
	// addi r11,r25,19584
	ctx.r11.s64 = ctx.r25.s64 + 19584;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210bb00
	if (ctx.cr6.lt) goto loc_8210BB00;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x823de1f0
	ctx.lr = 0x8210BB8C;
	sub_823DE1F0(ctx, base);
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lbz r9,208(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r8,r10,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stb r27,384(r31)
	PPC_STORE_U8(ctx.r31.u32 + 384, ctx.r27.u8);
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// rlwinm r8,r8,0,28,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// stw r8,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r8.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stb r9,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r9.u8);
	// lwz r29,11308(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8231f840
	ctx.lr = 0x8210BBC4;
	sub_8231F840(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// bl 0x8231f840
	ctx.lr = 0x8210BBD4;
	sub_8231F840(ctx, base);
	// lbz r7,208(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r4,334(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
	// bl 0x8211ddd0
	ctx.lr = 0x8210BBE8;
	sub_8211DDD0(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x8210bd30
	if (ctx.cr6.gt) goto loc_8210BD30;
	// lis r12,-32239
	ctx.r12.s64 = -2112815104;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-17392
	ctx.r12.s64 = ctx.r12.s64 + -17392;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8210BD08;
	case 1:
		goto loc_8210BD30;
	case 2:
		goto loc_8210BD30;
	case 3:
		goto loc_8210BD30;
	case 4:
		goto loc_8210BCE0;
	case 5:
		goto loc_8210BD30;
	case 6:
		goto loc_8210BD30;
	case 7:
		goto loc_8210BC4C;
	case 8:
		goto loc_8210BC90;
	case 9:
		goto loc_8210BD30;
	case 10:
		goto loc_8210BCA0;
	case 11:
		goto loc_8210BD30;
	case 12:
		goto loc_8210BCAC;
	case 13:
		goto loc_8210BD30;
	case 14:
		goto loc_8210BCAC;
	default:
		return;
	}
	// lwz r16,-17144(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17144);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17184(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17184);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17332(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17332);
	// lwz r16,-17264(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17264);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17248(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17248);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17236(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17236);
	// lwz r16,-17104(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17104);
	// lwz r16,-17236(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17236);
loc_8210BC4C:
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// stb r11,65(r31)
	PPC_STORE_U8(ctx.r31.u32 + 65, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,66(r31)
	PPC_STORE_U8(ctx.r31.u32 + 66, ctx.r11.u8);
	// stb r11,67(r31)
	PPC_STORE_U8(ctx.r31.u32 + 67, ctx.r11.u8);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// stb r10,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r10.u8);
	// bl 0x82284650
	ctx.lr = 0x8210BC7C;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210bd30
	if (ctx.cr6.eq) goto loc_8210BD30;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ebf68
	ctx.lr = 0x8210BC8C;
	sub_820EBF68(ctx, base);
	// b 0x8210bd30
	goto loc_8210BD30;
loc_8210BC90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8234dea8
	ctx.lr = 0x8210BC9C;
	sub_8234DEA8(ctx, base);
	// b 0x8210bd30
	goto loc_8210BD30;
loc_8210BCA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d7b0
	ctx.lr = 0x8210BCA8;
	sub_8234D7B0(ctx, base);
	// b 0x8210bd30
	goto loc_8210BD30;
loc_8210BCAC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,254
	ctx.r11.s64 = 254;
	// li r9,255
	ctx.r9.s64 = 255;
	// stb r11,70(r31)
	PPC_STORE_U8(ctx.r31.u32 + 70, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,71(r31)
	PPC_STORE_U8(ctx.r31.u32 + 71, ctx.r11.u8);
	// lfs f0,6688(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r11.u8);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stb r11,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r11.u8);
	// stb r9,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r9.u8);
	// bl 0x820d9148
	ctx.lr = 0x8210BCDC;
	sub_820D9148(ctx, base);
	// b 0x8210bd30
	goto loc_8210BD30;
loc_8210BCE0:
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8210bd30
	if (!ctx.cr6.eq) goto loc_8210BD30;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ec5c8
	ctx.lr = 0x8210BD00;
	sub_820EC5C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8210BD08:
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// addi r8,r30,11340
	ctx.r8.s64 = ctx.r30.s64 + 11340;
	// addi r10,r30,11484
	ctx.r10.s64 = ctx.r30.s64 + 11484;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210BD30;
	sub_823DE1F0(ctx, base);
loc_8210BD30:
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r10,21504
	ctx.r10.s64 = ctx.r10.s64 + 21504;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2432(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2432);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210BAA0) {
	__imp__sub_8210BAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BD68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210BD70;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r28,8(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8210bdcc
	if (!ctx.cr6.gt) goto loc_8210BDCC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r30,r28,10
	ctx.r30.s64 = ctx.r28.s64 + 10;
	// addi r29,r11,-5696
	ctx.r29.s64 = ctx.r11.s64 + -5696;
loc_8210BDA0:
	// lhzu r27,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r27.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82340840
	ctx.lr = 0x8210BDAC;
	sub_82340840(ctx, base);
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mulli r10,r27,404
	ctx.r10.s64 = ctx.r27.s64 * 404;
	// addi r9,r29,204
	ctx.r9.s64 = ctx.r29.s64 + 204;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8210bda0
	if (ctx.cr6.lt) goto loc_8210BDA0;
loc_8210BDCC:
	// lwz r11,4108(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4108);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210be24
	if (!ctx.cr6.gt) goto loc_8210BE24;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r27,r28,4110
	ctx.r27.s64 = ctx.r28.s64 + 4110;
	// addi r26,r11,-29912
	ctx.r26.s64 = ctx.r11.s64 + -29912;
loc_8210BDE8:
	// lhzu r31,2(r27)
	ea = 2 + ctx.r27.u32;
	ctx.r31.u64 = PPC_LOAD_U16(ea);
	ctx.r27.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82340858
	ctx.lr = 0x8210BDF8;
	sub_82340858(ctx, base);
	// rotlwi r11,r31,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r31.u32, 1);
	// lbz r10,33(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 33);
	// addi r9,r26,36
	ctx.r9.s64 = ctx.r26.s64 + 36;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r7,r6,r9
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r5,4108(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4108);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8210bde8
	if (ctx.cr6.lt) goto loc_8210BDE8;
loc_8210BE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239b1e8
	ctx.lr = 0x8210BE2C;
	sub_8239B1E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820dce50
	ctx.lr = 0x8210BE34;
	sub_820DCE50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210BD68) {
	__imp__sub_8210BD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210BE3C) {
	__imp__sub_8210BE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BE40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210BE40) {
	__imp__sub_8210BE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210BE54) {
	__imp__sub_8210BE54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BE58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210BE60;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r3,r11,-12160
	ctx.r3.s64 = ctx.r11.s64 + -12160;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8210BE7C;
	sub_823DE090(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// mullw r10,r29,r8
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r8.s32);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r7,6968
	ctx.r6.s64 = ctx.r7.s64 + 6968;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r9,r4,22912
	ctx.r9.u64 = ctx.r4.u64 | 22912;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// ori r8,r3,22916
	ctx.r8.u64 = ctx.r3.u64 | 22916;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,264
	ctx.r3.s64 = ctx.r30.s64 + 264;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,11308(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11308, ctx.r10.u32);
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r6,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r6.u32);
	// stwx r6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r6.u32);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f12,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x8210BF10;
	sub_822DA650(ctx, base);
	// addi r7,r30,40
	ctx.r7.s64 = ctx.r30.s64 + 40;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362970
	ctx.lr = 0x8210BF28;
	sub_82362970(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210BE58) {
	__imp__sub_8210BE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210BF3C) {
	__imp__sub_8210BF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210BF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210BF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8210bfb8
	if (ctx.cr6.eq) goto loc_8210BFB8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8210bf70
	if (ctx.cr6.eq) goto loc_8210BF70;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8210bf98
	if (!ctx.cr6.eq) goto loc_8210BF98;
loc_8210BF70:
	// lbz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 88);
	// bl 0x822ea328
	ctx.lr = 0x8210BF78;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210bf98
	if (ctx.cr6.eq) goto loc_8210BF98;
	// bl 0x821a9860
	ctx.lr = 0x8210BF84;
	sub_821A9860(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210bfa8
	if (!ctx.cr6.eq) goto loc_8210BFA8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210BF98:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f29c8
	ctx.lr = 0x8210BFA0;
	sub_822F29C8(ctx, base);
	// bl 0x82282dc0
	ctx.lr = 0x8210BFA4;
	sub_82282DC0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8210BFA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f5a00
	ctx.lr = 0x8210BFB4;
	sub_822F5A00(ctx, base);
	// b 0x8210bfbc
	goto loc_8210BFBC;
loc_8210BFB8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8210BFBC:
	// lhz r3,126(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x82284a58
	ctx.lr = 0x8210BFC4;
	sub_82284A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822ee8a8
	ctx.lr = 0x8210BFCC;
	sub_822EE8A8(ctx, base);
	// lhz r11,126(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r9,r9,21504
	ctx.r9.s64 = ctx.r9.s64 + 21504;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,2432(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2432);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210BF40) {
	__imp__sub_8210BF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C008) {
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
	// lbz r11,385(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 385);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8210c030
	if (ctx.cr6.eq) goto loc_8210C030;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8210c05c
	if (!ctx.cr6.eq) goto loc_8210C05C;
loc_8210C030:
	// lbz r3,172(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 172);
	// bl 0x822ea328
	ctx.lr = 0x8210C038;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210c05c
	if (ctx.cr6.eq) goto loc_8210C05C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9900
	ctx.lr = 0x8210C048;
	sub_821A9900(ctx, base);
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
loc_8210C05C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82282dd0
	ctx.lr = 0x8210C064;
	sub_82282DD0(ctx, base);
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

PPC_WEAK_FUNC(sub_8210C008) {
	__imp__sub_8210C008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C078) {
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
	// bl 0x82284770
	ctx.lr = 0x8210C090;
	sub_82284770(ctx, base);
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-11904
	ctx.r11.s64 = ctx.r9.s64 + -11904;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// rlwinm r6,r31,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8210C078) {
	__imp__sub_8210C078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8210C0D8;
	__savegprlr_20(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r21,r10,6968
	ctx.r21.s64 = ctx.r10.s64 + 6968;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// stw r20,6968(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6968, ctx.r20.u32);
	// bl 0x822f6fc0
	ctx.lr = 0x8210C0F4;
	sub_822F6FC0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// addi r26,r11,-11904
	ctx.r26.s64 = ctx.r11.s64 + -11904;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// li r24,64
	ctx.r24.s64 = 64;
	// ori r27,r9,65535
	ctx.r27.u64 = ctx.r9.u64 | 65535;
	// addi r22,r11,-5696
	ctx.r22.s64 = ctx.r11.s64 + -5696;
	// addi r23,r10,17280
	ctx.r23.s64 = ctx.r10.s64 + 17280;
loc_8210C11C:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8210c224
	if (!ctx.cr6.lt) goto loc_8210C224;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8210C130:
	// stw r20,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r20.u32);
	// add r30,r25,r11
	ctx.r30.u64 = ctx.r25.u64 + ctx.r11.u64;
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r11,r30,404
	ctx.r11.s64 = ctx.r30.s64 * 404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// andc r28,r28,r10
	ctx.r28.u64 = ctx.r28.u64 & ~ctx.r10.u64;
	// bl 0x82284650
	ctx.lr = 0x8210C154;
	sub_82284650(ctx, base);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r6,340(r31)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r31.u32 + 340);
	// subf r8,r9,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r9.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bl 0x82199020
	ctx.lr = 0x8210C178;
	sub_82199020(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8210c1d8
	if (ctx.cr6.eq) goto loc_8210C1D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ef118
	ctx.lr = 0x8210C188;
	sub_822EF118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82284b00
	ctx.lr = 0x8210C198;
	sub_82284B00(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8210c1d8
	if (ctx.cr6.eq) goto loc_8210C1D8;
	// lbz r11,385(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 385);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8210c1b4
	if (ctx.cr6.eq) goto loc_8210C1B4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8210c1d0
	if (!ctx.cr6.eq) goto loc_8210C1D0;
loc_8210C1B4:
	// lbz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 172);
	// bl 0x822ea328
	ctx.lr = 0x8210C1BC;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210c1d0
	if (ctx.cr6.eq) goto loc_8210C1D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a9900
	ctx.lr = 0x8210C1CC;
	sub_821A9900(ctx, base);
	// b 0x8210c1d8
	goto loc_8210C1D8;
loc_8210C1D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82282dd0
	ctx.lr = 0x8210C1D8;
	sub_82282DD0(ctx, base);
loc_8210C1D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82284ad0
	ctx.lr = 0x8210C1E0;
	sub_82284AD0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82284650
	ctx.lr = 0x8210C1EC;
	sub_82284650(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lhz r8,340(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 340);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82199230
	ctx.lr = 0x8210C214;
	sub_82199230(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8210c130
	if (ctx.cr6.lt) goto loc_8210C130;
loc_8210C224:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8210c11c
	if (!ctx.cr0.eq) goto loc_8210C11C;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823de090
	ctx.lr = 0x8210C244;
	sub_823DE090(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210C254:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8210c254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210C254;
	// lwz r29,4(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r26,r11,-29912
	ctx.r26.s64 = ctx.r11.s64 + -29912;
	// beq cr6,0x8210c354
	if (ctx.cr6.eq) goto loc_8210C354;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210c2e8
	if (!ctx.cr6.gt) goto loc_8210C2E8;
	// addi r28,r29,10
	ctx.r28.s64 = ctx.r29.s64 + 10;
loc_8210C284:
	// lhzu r11,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,112
	ctx.r5.s64 = 112;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,404
	ctx.r9.s64 = ctx.r9.s64 * 404;
	// lwzx r6,r8,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r23.u32);
	// add r31,r9,r22
	ctx.r31.u64 = ctx.r9.u64 + ctx.r22.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 | ctx.r9.u64;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8210C2C4;
	sub_823DE1F0(ctx, base);
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lbz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r5,r7,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r5.u32);
	// stb r6,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r6.u8);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8210c284
	if (ctx.cr6.lt) goto loc_8210C284;
loc_8210C2E8:
	// lwz r11,4108(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4108);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210c354
	if (!ctx.cr6.gt) goto loc_8210C354;
	// addi r6,r29,4110
	ctx.r6.s64 = ctx.r29.s64 + 4110;
loc_8210C2FC:
	// lhzu r11,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// srawi r5,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 5;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r3,r11,2,25,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lwzx r5,r3,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r23.u32);
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lbz r4,33(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 33);
	// or r3,r5,r11
	ctx.r3.u64 = ctx.r5.u64 | ctx.r11.u64;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stwx r3,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r3.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stb r11,33(r9)
	PPC_STORE_U8(ctx.r9.u32 + 33, ctx.r11.u8);
	// lwz r9,4108(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4108);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8210c2fc
	if (ctx.cr6.lt) goto loc_8210C2FC;
loc_8210C354:
	// lwz r27,8(r21)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8210c524
	if (ctx.cr6.eq) goto loc_8210C524;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8210c36c
	if (!ctx.cr6.eq) goto loc_8210C36C;
	// stw r27,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r27.u32);
loc_8210C36C:
	// bl 0x820eca80
	ctx.lr = 0x8210C370;
	sub_820ECA80(ctx, base);
	// bl 0x821fc2f0
	ctx.lr = 0x8210C374;
	sub_821FC2F0(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210c474
	if (!ctx.cr6.gt) goto loc_8210C474;
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
loc_8210C388:
	// lhz r25,0(r29)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mulli r11,r25,404
	ctx.r11.s64 = ctx.r25.s64 * 404;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// bl 0x82340840
	ctx.lr = 0x8210C3B0;
	sub_82340840(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,172
	ctx.r5.s64 = 172;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210C3C0;
	sub_823DE1F0(ctx, base);
	// srawi r11,r25,5
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 5;
	// rlwinm r7,r25,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x7C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwzx r11,r7,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe. r7,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8210c458
	if (ctx.cr0.eq) goto loc_8210C458;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// cmplwi cr6,r7,11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 11, ctx.xer);
	// beq cr6,0x8210c414
	if (ctx.cr6.eq) goto loc_8210C414;
	// cmplwi cr6,r7,15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 15, ctx.xer);
	// bne cr6,0x8210c430
	if (!ctx.cr6.eq) goto loc_8210C430;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// b 0x8210c41c
	goto loc_8210C41C;
loc_8210C414:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
loc_8210C41C:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210c430
	if (ctx.cr6.eq) goto loc_8210C430;
	// stb r7,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r7.u8);
loc_8210C430:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8210c458
	if (!ctx.cr6.eq) goto loc_8210C458;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210c460
	if (ctx.cr6.eq) goto loc_8210C460;
loc_8210C458:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210baa0
	ctx.lr = 0x8210C460;
	sub_8210BAA0(ctx, base);
loc_8210C460:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210c388
	if (ctx.cr6.lt) goto loc_8210C388;
loc_8210C474:
	// lwz r11,4108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4108);
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210c524
	if (!ctx.cr6.gt) goto loc_8210C524;
	// addi r29,r27,4112
	ctx.r29.s64 = ctx.r27.s64 + 4112;
loc_8210C488:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82340858
	ctx.lr = 0x8210C4A8;
	sub_82340858(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8210C4B8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8210c4b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210C4B8;
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r31,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// subfe. r7,r6,r7
	temp.u8 = (~ctx.r6.u32 + ctx.r7.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8210c508
	if (ctx.cr0.eq) goto loc_8210C508;
	// lbz r7,33(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 33);
	// andc r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi r4,r7,28
	ctx.r4.u64 = ctx.r7.u32 & 0xF;
	// stwx r6,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r6.u32);
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8210c510
	if (ctx.cr6.eq) goto loc_8210C510;
loc_8210C508:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235eff0
	ctx.lr = 0x8210C510;
	sub_8235EFF0(ctx, base);
loc_8210C510:
	// lwz r11,4108(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4108);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210c488
	if (ctx.cr6.lt) goto loc_8210C488;
loc_8210C524:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// addi r30,r22,172
	ctx.r30.s64 = ctx.r22.s64 + 172;
	// rlwinm r11,r20,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x7C;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_8210C534:
	// srawi r9,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 5;
	// lwzx r8,r11,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8210c5cc
	if (ctx.cr6.eq) goto loc_8210C5CC;
	// addi r3,r30,-172
	ctx.r3.s64 = ctx.r30.s64 + -172;
	// bl 0x8210b8d0
	ctx.lr = 0x8210C558;
	sub_8210B8D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82198ec8
	ctx.lr = 0x8210C564;
	sub_82198EC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x8210C570;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210c5cc
	if (ctx.cr6.eq) goto loc_8210C5CC;
	// bl 0x822ef118
	ctx.lr = 0x8210C57C;
	sub_822EF118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284b00
	ctx.lr = 0x8210C58C;
	sub_82284B00(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8210c5cc
	if (ctx.cr6.eq) goto loc_8210C5CC;
	// lbz r11,213(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 213);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8210c5a8
	if (ctx.cr6.eq) goto loc_8210C5A8;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8210c5c4
	if (!ctx.cr6.eq) goto loc_8210C5C4;
loc_8210C5A8:
	// lbz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// bl 0x822ea328
	ctx.lr = 0x8210C5B0;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210c5c4
	if (ctx.cr6.eq) goto loc_8210C5C4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a9900
	ctx.lr = 0x8210C5C0;
	sub_821A9900(ctx, base);
	// b 0x8210c5cc
	goto loc_8210C5CC;
loc_8210C5C4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82282dd0
	ctx.lr = 0x8210C5CC;
	sub_82282DD0(ctx, base);
loc_8210C5CC:
	// addis r11,r22,13
	ctx.r11.s64 = ctx.r22.s64 + 851968;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r11,-24404
	ctx.r9.s64 = ctx.r11.s64 + -24404;
	// addi r30,r30,404
	ctx.r30.s64 = ctx.r30.s64 + 404;
	// rlwinm r11,r31,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8210c534
	if (ctx.cr6.lt) goto loc_8210C534;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// rlwinm r11,r20,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0x7C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8210C5FC:
	// srawi r9,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 5;
	// lwzx r8,r11,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8210c620
	if (ctx.cr6.eq) goto loc_8210C620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef98
	ctx.lr = 0x8210C620;
	sub_8235EF98(ctx, base);
loc_8210C620:
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r9,r11,-28672
	ctx.r9.s64 = ctx.r11.s64 + -28672;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// rlwinm r11,r31,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8210c5fc
	if (ctx.cr6.lt) goto loc_8210C5FC;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210C0D0) {
	__imp__sub_8210C0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C648) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8210C650;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// addi r6,r7,6968
	ctx.r6.s64 = ctx.r7.s64 + 6968;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// ori r3,r5,22900
	ctx.r3.u64 = ctx.r5.u64 | 22900;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// ori r8,r4,22904
	ctx.r8.u64 = ctx.r4.u64 | 22904;
	// lwz r30,36(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfs f0,11316(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r27,r7,61100
	ctx.r27.u64 = ctx.r7.u64 | 61100;
	// stwx r9,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r9.u32);
	// stfsx f0,r31,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// addi r26,r10,-5696
	ctx.r26.s64 = ctx.r10.s64 + -5696;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x8210c6f0
	if (ctx.cr6.eq) goto loc_8210C6F0;
	// stbx r9,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r9.u8);
	// li r5,112
	ctx.r5.s64 = 112;
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r4,r29,220
	ctx.r4.s64 = ctx.r29.s64 + 220;
	// addi r3,r29,96
	ctx.r3.s64 = ctx.r29.s64 + 96;
	// bl 0x823de1f0
	ctx.lr = 0x8210C6DC;
	sub_823DE1F0(ctx, base);
	// lwz r10,380(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// lbz r9,208(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 208);
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r8.u32);
	// stb r9,385(r29)
	PPC_STORE_U8(ctx.r29.u32 + 385, ctx.r9.u8);
loc_8210C6F0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8210c7bc
	if (ctx.cr6.eq) goto loc_8210C7BC;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8210c710
	if (!ctx.cr6.eq) goto loc_8210C710;
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// stbx r25,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r25.u8);
loc_8210C710:
	// lwz r3,256(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// mulli r11,r3,404
	ctx.r11.s64 = ctx.r3.s64 * 404;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82340840
	ctx.lr = 0x8210C720;
	sub_82340840(ctx, base);
	// addi r11,r29,208
	ctx.r11.s64 = ctx.r29.s64 + 208;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,172
	ctx.r5.s64 = 172;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210C734;
	sub_823DE1F0(ctx, base);
	// lwz r10,380(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r9.u32);
	// beq cr6,0x8210c760
	if (ctx.cr6.eq) goto loc_8210C760;
	// lwz r11,220(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 220);
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210c7bc
	if (ctx.cr6.eq) goto loc_8210C7BC;
loc_8210C760:
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210C774;
	sub_823DE1F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210baa0
	ctx.lr = 0x8210C77C;
	sub_8210BAA0(ctx, base);
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r9,r31,3
	ctx.r9.s64 = ctx.r31.s64 + 196608;
	// addi r10,r10,2068
	ctx.r10.s64 = ctx.r10.s64 + 2068;
	// addi r9,r9,-4416
	ctx.r9.s64 = ctx.r9.s64 + -4416;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f12,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stbx r25,r31,r27
	PPC_STORE_U8(ctx.r31.u32 + ctx.r27.u32, ctx.r25.u8);
loc_8210C7BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820f1e80
	ctx.lr = 0x8210C7C4;
	sub_820F1E80(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210C648) {
	__imp__sub_8210C648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210C7CC) {
	__imp__sub_8210C7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C7D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8210C7D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r29,r11,-12160
	ctx.r29.s64 = ctx.r11.s64 + -12160;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// li r25,64
	ctx.r25.s64 = 64;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
loc_8210C7F8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8210c844
	if (!ctx.cr6.lt) goto loc_8210C844;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8210C80C:
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// add r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// andc r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r11.u64;
	// bl 0x8238a090
	ctx.lr = 0x8210C828;
	sub_8238A090(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211ddd0
	ctx.lr = 0x8210C834;
	sub_8211DDD0(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8210c80c
	if (ctx.cr6.lt) goto loc_8210C80C;
loc_8210C844:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8210c7f8
	if (!ctx.cr0.eq) goto loc_8210C7F8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210C7D0) {
	__imp__sub_8210C7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210C85C) {
	__imp__sub_8210C85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210C868;
	__savegprlr_29(ctx, base);
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x82112370
	ctx.lr = 0x8210C890;
	sub_82112370(ctx, base);
	// bl 0x821317a8
	ctx.lr = 0x8210C894;
	sub_821317A8(ctx, base);
	// lis r8,-32155
	ctx.r8.s64 = -2107310080;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// lwz r11,-30052(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30052);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8210c8c0
	if (!ctx.cr6.eq) goto loc_8210C8C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// b 0x8210c8cc
	goto loc_8210C8CC;
loc_8210C8C0:
	// addi r4,r29,1176
	ctx.r4.s64 = ctx.r29.s64 + 1176;
	// ori r5,r5,43008
	ctx.r5.u64 = ctx.r5.u64 | 43008;
	// addi r3,r3,24100
	ctx.r3.s64 = ctx.r3.s64 + 24100;
loc_8210C8CC:
	// bl 0x823de1f0
	ctx.lr = 0x8210C8D0;
	sub_823DE1F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x8210a478
	ctx.lr = 0x8210C8DC;
	sub_8210A478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106b18
	ctx.lr = 0x8210C8E4;
	sub_82106B18(ctx, base);
	// lwz r11,260(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210c908
	if (!ctx.cr6.gt) goto loc_8210C908;
	// addi r3,r11,1208
	ctx.r3.s64 = ctx.r11.s64 + 1208;
	// bl 0x821201a0
	ctx.lr = 0x8210C8F8;
	sub_821201A0(ctx, base);
	// bl 0x82393fe8
	ctx.lr = 0x8210C8FC;
	sub_82393FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117458
	ctx.lr = 0x8210C908;
	sub_82117458(ctx, base);
loc_8210C908:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117338
	ctx.lr = 0x8210C910;
	sub_82117338(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210C860) {
	__imp__sub_8210C860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C918) {
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
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// bl 0x8210c0d0
	ctx.lr = 0x8210C938;
	sub_8210C0D0(ctx, base);
	// bl 0x8210c7d0
	ctx.lr = 0x8210C93C;
	sub_8210C7D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210C918) {
	__imp__sub_8210C918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210C94C) {
	__imp__sub_8210C94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210C950) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8210c648
	ctx.lr = 0x8210C984;
	sub_8210C648(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821130a8
	ctx.lr = 0x8210C98C;
	sub_821130A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210c860
	ctx.lr = 0x8210C994;
	sub_8210C860(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r4,22924
	ctx.r4.s64 = ctx.r4.s64 + 22924;
	// bl 0x820d80c8
	ctx.lr = 0x8210C9A4;
	sub_820D80C8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r8,22960
	ctx.r5.u64 = ctx.r8.u64 | 22960;
	// ori r4,r7,22956
	ctx.r4.u64 = ctx.r7.u64 | 22956;
	// ori r11,r6,22952
	ctx.r11.u64 = ctx.r6.u64 | 22952;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfsx f3,r31,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r10,-24428
	ctx.r3.s64 = ctx.r10.s64 + -24428;
	// lfsx f2,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x8210C9EC;
	sub_822E84F0(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-16768(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16768);
	// bl 0x82360768
	ctx.lr = 0x8210C9FC;
	sub_82360768(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210C950) {
	__imp__sub_8210C950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210CA14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210CA14) {
	__imp__sub_8210CA14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210CA18) {
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
	// lis r31,-32168
	ctx.r31.s64 = -2108162048;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-30096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30096, ctx.r11.u32);
	// lwz r10,11324(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11324);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8210ca68
	if (ctx.cr6.eq) goto loc_8210CA68;
	// bl 0x8233fdc8
	ctx.lr = 0x8210CA4C;
	sub_8233FDC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210ca68
	if (ctx.cr6.eq) goto loc_8210CA68;
	// bl 0x8233fdd8
	ctx.lr = 0x8210CA58;
	sub_8233FDD8(ctx, base);
	// bl 0x8210c0d0
	ctx.lr = 0x8210CA5C;
	sub_8210C0D0(ctx, base);
	// bl 0x8210c7d0
	ctx.lr = 0x8210CA60;
	sub_8210C7D0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-30096(r31)
	PPC_STORE_U32(ctx.r31.u32 + -30096, ctx.r11.u32);
loc_8210CA68:
	// bl 0x820eca80
	ctx.lr = 0x8210CA6C;
	sub_820ECA80(ctx, base);
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

PPC_WEAK_FUNC(sub_8210CA18) {
	__imp__sub_8210CA18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210CA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8210CA88;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r25,r11,6968
	ctx.r25.s64 = ctx.r11.s64 + 6968;
	// lwz r11,6968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6968);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210cab0
	if (ctx.cr6.eq) goto loc_8210CAB0;
	// bl 0x8210c0d0
	ctx.lr = 0x8210CAB0;
	sub_8210C0D0(ctx, base);
loc_8210CAB0:
	// lwz r21,8(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// stw r21,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r21.u32);
	// bl 0x822f4248
	ctx.lr = 0x8210CAC4;
	sub_822F4248(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8210caf8
	if (ctx.cr6.eq) goto loc_8210CAF8;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r9,r25,12
	ctx.r9.s64 = ctx.r25.s64 + 12;
	// addi r10,r25,12
	ctx.r10.s64 = ctx.r25.s64 + 12;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mulli r11,r6,5648
	ctx.r11.s64 = ctx.r6.s64 * 5648;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8211faa0
	ctx.lr = 0x8210CAF4;
	sub_8211FAA0(ctx, base);
	// b 0x8210cafc
	goto loc_8210CAFC;
loc_8210CAF8:
	// li r22,0
	ctx.r22.s64 = 0;
loc_8210CAFC:
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r22,8(r25)
	PPC_STORE_U32(ctx.r25.u32 + 8, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823de090
	ctx.lr = 0x8210CB10;
	sub_823DE090(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r23,r11,-12160
	ctx.r23.s64 = ctx.r11.s64 + -12160;
	// addi r26,r10,17280
	ctx.r26.s64 = ctx.r10.s64 + 17280;
	// beq cr6,0x8210cbf0
	if (ctx.cr6.eq) goto loc_8210CBF0;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cbf0
	if (!ctx.cr6.gt) goto loc_8210CBF0;
	// addi r28,r21,12
	ctx.r28.s64 = ctx.r21.s64 + 12;
loc_8210CB3C:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r29,r10,2,25,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// lwzx r8,r29,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwzx r7,r30,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r6.u32);
	// bge cr6,0x8210cb90
	if (!ctx.cr6.lt) goto loc_8210CB90;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r25,11340
	ctx.r9.s64 = ctx.r25.s64 + 11340;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r25,11484
	ctx.r10.s64 = ctx.r25.s64 + 11484;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210CB90;
	sub_823DE1F0(ctx, base);
loc_8210CB90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284740
	ctx.lr = 0x8210CB98;
	sub_82284740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210cbdc
	if (ctx.cr6.eq) goto loc_8210CBDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284688
	ctx.lr = 0x8210CBAC;
	sub_82284688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cc78
	if (ctx.cr6.eq) goto loc_8210CC78;
	// bl 0x822ef118
	ctx.lr = 0x8210CBB8;
	sub_822EF118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340840
	ctx.lr = 0x8210CBC4;
	sub_82340840(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8210bf40
	ctx.lr = 0x8210CBCC;
	sub_8210BF40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210cbdc
	if (ctx.cr6.eq) goto loc_8210CBDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210c078
	ctx.lr = 0x8210CBDC;
	sub_8210C078(ctx, base);
loc_8210CBDC:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210cb3c
	if (ctx.cr6.lt) goto loc_8210CB3C;
loc_8210CBF0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8210cd58
	if (ctx.cr6.eq) goto loc_8210CD58;
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cd58
	if (!ctx.cr6.gt) goto loc_8210CD58;
	// addi r27,r22,12
	ctx.r27.s64 = ctx.r22.s64 + 12;
loc_8210CC0C:
	// lhz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284688
	ctx.lr = 0x8210CC18;
	sub_82284688(ctx, base);
	// srawi r29,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r31.s32 >> 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bge cr6,0x8210cc50
	if (!ctx.cr6.lt) goto loc_8210CC50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e46a0
	ctx.lr = 0x8210CC30;
	sub_821E46A0(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,11340
	ctx.r10.s64 = ctx.r25.s64 + 11340;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210CC50;
	sub_823DE1F0(ctx, base);
loc_8210CC50:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bne cr6,0x8210cc98
	if (!ctx.cr6.eq) goto loc_8210CC98;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r31,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// andc r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// b 0x8210cd44
	goto loc_8210CD44;
loc_8210CC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284770
	ctx.lr = 0x8210CC80;
	sub_82284770(ctx, base);
	// addi r11,r23,256
	ctx.r11.s64 = ctx.r23.s64 + 256;
	// lwzx r9,r29,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r8,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// b 0x8210cbdc
	goto loc_8210CBDC;
loc_8210CC98:
	// rlwinm r30,r31,2,25,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210cd00
	if (ctx.cr6.eq) goto loc_8210CD00;
	// addi r7,r23,256
	ctx.r7.s64 = ctx.r23.s64 + 256;
	// andc r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x8210cce0
	if (!ctx.cr6.eq) goto loc_8210CCE0;
	// bl 0x82284650
	ctx.lr = 0x8210CCDC;
	sub_82284650(ctx, base);
	// b 0x8210cce4
	goto loc_8210CCE4;
loc_8210CCE0:
	// bl 0x82284708
	ctx.lr = 0x8210CCE4;
	sub_82284708(ctx, base);
loc_8210CCE4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cd44
	if (ctx.cr6.eq) goto loc_8210CD44;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f4268
	ctx.lr = 0x8210CCFC;
	sub_822F4268(ctx, base);
	// b 0x8210cd44
	goto loc_8210CD44;
loc_8210CD00:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822ef118
	ctx.lr = 0x8210CD08;
	sub_822EF118(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340840
	ctx.lr = 0x8210CD14;
	sub_82340840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8210bf40
	ctx.lr = 0x8210CD1C;
	sub_8210BF40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210cd44
	if (ctx.cr6.eq) goto loc_8210CD44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284770
	ctx.lr = 0x8210CD2C;
	sub_82284770(ctx, base);
	// addi r10,r23,256
	ctx.r10.s64 = ctx.r23.s64 + 256;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_8210CD44:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210cc0c
	if (ctx.cr6.lt) goto loc_8210CC0C;
loc_8210CD58:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8210cdc8
	if (ctx.cr6.eq) goto loc_8210CDC8;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8210cdc8
	if (ctx.cr6.eq) goto loc_8210CDC8;
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210cdc8
	if (!ctx.cr6.gt) goto loc_8210CDC8;
	// addi r9,r21,12
	ctx.r9.s64 = ctx.r21.s64 + 12;
loc_8210CD7C:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r5,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r26.u32);
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 & ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cdb4
	if (ctx.cr6.eq) goto loc_8210CDB4;
	// lwzx r6,r11,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// or r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwx r5,r11,r23
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, ctx.r5.u32);
loc_8210CDB4:
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210cd7c
	if (ctx.cr6.lt) goto loc_8210CD7C;
loc_8210CDC8:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210CA80) {
	__imp__sub_8210CA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210CDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210CDD4) {
	__imp__sub_8210CDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210CDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8210CDE0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r30,r30,22900
	ctx.r30.s64 = ctx.r30.s64 + 22900;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210ce24
	if (ctx.cr6.eq) goto loc_8210CE24;
	// bl 0x8210c648
	ctx.lr = 0x8210CE24;
	sub_8210C648(ctx, base);
loc_8210CE24:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r29,r11,6968
	ctx.r29.s64 = ctx.r11.s64 + 6968;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r28,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r28.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// beq cr6,0x8210ce7c
	if (ctx.cr6.eq) goto loc_8210CE7C;
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// addi r9,r29,11340
	ctx.r9.s64 = ctx.r29.s64 + 11340;
	// addi r8,r29,11484
	ctx.r8.s64 = ctx.r29.s64 + 11484;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210CE7C;
	sub_823DE1F0(ctx, base);
loc_8210CE7C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8210cee8
	if (ctx.cr6.eq) goto loc_8210CEE8;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lis r10,0
	ctx.r10.s64 = 0;
	// subf r9,r28,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r28.s64;
	// ori r8,r10,44196
	ctx.r8.u64 = ctx.r10.u64 | 44196;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8211faf8
	ctx.lr = 0x8210CEB4;
	sub_8211FAF8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r3,256(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// bl 0x821e46a0
	ctx.lr = 0x8210CEC0;
	sub_821E46A0(ctx, base);
	// lwz r11,256(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r29,11340
	ctx.r10.s64 = ctx.r29.s64 + 11340;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r5,72
	ctx.r5.s64 = 72;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8210CEE4;
	sub_823DE1F0(ctx, base);
	// b 0x8210ceec
	goto loc_8210CEEC;
loc_8210CEE8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8210CEEC:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8210cf5c
	if (ctx.cr6.eq) goto loc_8210CF5C;
	// lwz r31,256(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284740
	ctx.lr = 0x8210CF0C;
	sub_82284740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210cf5c
	if (ctx.cr6.eq) goto loc_8210CF5C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x8210CF24;
	sub_82284650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284688
	ctx.lr = 0x8210CF2C;
	sub_82284688(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210cf54
	if (ctx.cr6.eq) goto loc_8210CF54;
	// bl 0x822ef118
	ctx.lr = 0x8210CF38;
	sub_822EF118(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340840
	ctx.lr = 0x8210CF44;
	sub_82340840(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8210bf40
	ctx.lr = 0x8210CF4C;
	sub_8210BF40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210cf5c
	if (ctx.cr6.eq) goto loc_8210CF5C;
loc_8210CF54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210c078
	ctx.lr = 0x8210CF5C;
	sub_8210C078(ctx, base);
loc_8210CF5C:
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r10,-12160
	ctx.r29.s64 = ctx.r10.s64 + -12160;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
	// beq cr6,0x8210d020
	if (ctx.cr6.eq) goto loc_8210D020;
	// lwz r31,256(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284688
	ctx.lr = 0x8210CF80;
	sub_82284688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210cf94
	if (!ctx.cr6.eq) goto loc_8210CF94;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x8210d020
	goto loc_8210D020;
loc_8210CF94:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8210cff4
	if (ctx.cr6.eq) goto loc_8210CFF4;
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// addi r10,r29,256
	ctx.r10.s64 = ctx.r29.s64 + 256;
	// rlwinm r9,r31,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r9,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8210cfd4
	if (!ctx.cr6.eq) goto loc_8210CFD4;
	// bl 0x82284650
	ctx.lr = 0x8210CFD0;
	sub_82284650(ctx, base);
	// b 0x8210cfd8
	goto loc_8210CFD8;
loc_8210CFD4:
	// bl 0x82284708
	ctx.lr = 0x8210CFD8;
	sub_82284708(ctx, base);
loc_8210CFD8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210d020
	if (ctx.cr6.eq) goto loc_8210D020;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f4268
	ctx.lr = 0x8210CFF0;
	sub_822F4268(ctx, base);
	// b 0x8210d020
	goto loc_8210D020;
loc_8210CFF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ef118
	ctx.lr = 0x8210CFFC;
	sub_822EF118(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340840
	ctx.lr = 0x8210D008;
	sub_82340840(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8210bf40
	ctx.lr = 0x8210D010;
	sub_8210BF40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210d020
	if (ctx.cr6.eq) goto loc_8210D020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210c078
	ctx.lr = 0x8210D020;
	sub_8210C078(ctx, base);
loc_8210D020:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8210d058
	if (ctx.cr6.eq) goto loc_8210D058;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8210d058
	if (ctx.cr6.eq) goto loc_8210D058;
	// lwz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 256);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x8210d058
	if (ctx.cr6.eq) goto loc_8210D058;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwzx r7,r11,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r6,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r6.u32);
loc_8210D058:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210CDD8) {
	__imp__sub_8210CDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D064) {
	__imp__sub_8210D064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D068) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210ca80
	ctx.lr = 0x8210D084;
	sub_8210CA80(ctx, base);
	// bl 0x8210bd68
	ctx.lr = 0x8210D088;
	sub_8210BD68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210D068) {
	__imp__sub_8210D068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D098) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8210cdd8
	ctx.lr = 0x8210D0BC;
	sub_8210CDD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210be58
	ctx.lr = 0x8210D0C4;
	sub_8210BE58(ctx, base);
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

PPC_WEAK_FUNC(sub_8210D098) {
	__imp__sub_8210D098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D0D8) {
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf. r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x8210d134
	if (ctx.cr0.lt) goto loc_8210D134;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf. r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x8210d1a4
	if (ctx.cr0.lt) goto loc_8210D1A4;
loc_8210D134:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// ori r8,r10,22908
	ctx.r8.u64 = ctx.r10.u64 | 22908;
	// addi r7,r9,6968
	ctx.r7.s64 = ctx.r9.s64 + 6968;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,11320(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11320);
	// lfs f0,5804(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// subf r3,r11,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r11.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8210ca80
	ctx.lr = 0x8210D17C;
	sub_8210CA80(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210cdd8
	ctx.lr = 0x8210D18C;
	sub_8210CDD8(ctx, base);
	// bl 0x8210c0d0
	ctx.lr = 0x8210D190;
	sub_8210C0D0(ctx, base);
	// bl 0x8210c7d0
	ctx.lr = 0x8210D194;
	sub_8210C7D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210c648
	ctx.lr = 0x8210D19C;
	sub_8210C648(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210c860
	ctx.lr = 0x8210D1A4;
	sub_8210C860(ctx, base);
loc_8210D1A4:
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

PPC_WEAK_FUNC(sub_8210D0D8) {
	__imp__sub_8210D0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D1BC) {
	__imp__sub_8210D1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210D1C8;
	__savegprlr_29(ctx, base);
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// addi r8,r8,22912
	ctx.r8.s64 = ctx.r8.s64 + 22912;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,11308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// addi r7,r7,22916
	ctx.r7.s64 = ctx.r7.s64 + 22916;
	// lwz r11,11324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11324);
	// ori r4,r6,22908
	ctx.r4.u64 = ctx.r6.u64 | 22908;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// subf r10,r11,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// stw r5,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r5.u32);
	// stwx r10,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u32);
	// beq cr6,0x8210d25c
	if (ctx.cr6.eq) goto loc_8210D25C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22900
	ctx.r10.u64 = ctx.r11.u64 | 22900;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8210d264
	if (ctx.cr6.eq) goto loc_8210D264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210c648
	ctx.lr = 0x8210D250;
	sub_8210C648(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210c860
	ctx.lr = 0x8210D258;
	sub_8210C860(ctx, base);
	// b 0x8210d264
	goto loc_8210D264;
loc_8210D25C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210d0d8
	ctx.lr = 0x8210D264;
	sub_8210D0D8(ctx, base);
loc_8210D264:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,11316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,22904
	ctx.r10.u64 = ctx.r11.u64 | 22904;
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210D1C0) {
	__imp__sub_8210D1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D27C) {
	__imp__sub_8210D27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210D288;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210d2cc
	if (!ctx.cr6.eq) goto loc_8210D2CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-24384
	ctx.r3.s64 = ctx.r11.s64 + -24384;
	// bl 0x822dd930
	ctx.lr = 0x8210D2B0;
	sub_822DD930(ctx, base);
	// li r10,31
	ctx.r10.s64 = 31;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210D2BC:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8210d2bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210D2BC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8210D2CC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-24396
	ctx.r4.s64 = ctx.r11.s64 + -24396;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x8210D2E0;
	sub_823DF2B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd930
	ctx.lr = 0x8210D2E8;
	sub_822DD930(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r26,r29,24
	ctx.r26.u64 = ctx.r29.u32 & 0xFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-24404
	ctx.r29.s64 = ctx.r11.s64 + -24404;
loc_8210D2FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8210d334
	if (ctx.cr6.eq) goto loc_8210D334;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ec0a0
	ctx.lr = 0x8210D30C;
	sub_822EC0A0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x8210D320;
	sub_823DF2B0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd930
	ctx.lr = 0x8210D328;
	sub_822DD930(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210d338
	if (!ctx.cr6.eq) goto loc_8210D338;
loc_8210D334:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_8210D338:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r30,31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 31, ctx.xer);
	// blt cr6,0x8210d2fc
	if (ctx.cr6.lt) goto loc_8210D2FC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210D280) {
	__imp__sub_8210D280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8210D358;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8210d3a4
	if (!ctx.cr6.gt) goto loc_8210D3A4;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_8210D37C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x822e8058
	ctx.lr = 0x8210D388;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210d3f8
	if (ctx.cr6.eq) goto loc_8210D3F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210d37c
	if (ctx.cr6.lt) goto loc_8210D37C;
loc_8210D3A4:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lbz r5,41(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 41);
	// addi r10,r8,-22896
	ctx.r10.s64 = ctx.r8.s64 + -22896;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mulli r11,r9,124
	ctx.r11.s64 = ctx.r9.s64 * 124;
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// addi r10,r10,3592
	ctx.r10.s64 = ctx.r10.s64 + 3592;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8210d280
	ctx.lr = 0x8210D3CC;
	sub_8210D280(ctx, base);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210D3E4;
	sub_822E7E98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8210D3F8:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210D350) {
	__imp__sub_8210D350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D404) {
	__imp__sub_8210D404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6928(r1)
	ea = -6928 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822db158
	ctx.lr = 0x8210D438;
	sub_822DB158(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8210d464
	if (!ctx.cr6.gt) goto loc_8210D464;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8210D44C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// bl 0x8210d350
	ctx.lr = 0x8210D45C;
	sub_8210D350(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8210d44c
	if (!ctx.cr0.eq) goto loc_8210D44C;
loc_8210D464:
	// addi r1,r1,6928
	ctx.r1.s64 = ctx.r1.s64 + 6928;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210D408) {
	__imp__sub_8210D408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D47C) {
	__imp__sub_8210D47C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D480) {
	PPC_FUNC_PROLOGUE();
	// b 0x8210d408
	sub_8210D408(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210D480) {
	__imp__sub_8210D480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210D484) {
	__imp__sub_8210D484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D488) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-23552
	ctx.r3.s64 = ctx.r11.s64 + -23552;
	// bl 0x822dd930
	ctx.lr = 0x8210D4A4;
	sub_822DD930(ctx, base);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r31,r10,-22896
	ctx.r31.s64 = ctx.r10.s64 + -22896;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r9,-23568
	ctx.r3.s64 = ctx.r9.s64 + -23568;
	// addi r4,r31,904
	ctx.r4.s64 = ctx.r31.s64 + 904;
	// stw r11,900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 900, ctx.r11.u32);
	// bl 0x8210d280
	ctx.lr = 0x8210D4C8;
	sub_8210D280(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r8,-23584
	ctx.r3.s64 = ctx.r8.s64 + -23584;
	// addi r4,r31,1028
	ctx.r4.s64 = ctx.r31.s64 + 1028;
	// bl 0x8210d280
	ctx.lr = 0x8210D4DC;
	sub_8210D280(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r7,-23600
	ctx.r3.s64 = ctx.r7.s64 + -23600;
	// addi r4,r31,1152
	ctx.r4.s64 = ctx.r31.s64 + 1152;
	// bl 0x8210d280
	ctx.lr = 0x8210D4F0;
	sub_8210D280(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-23616
	ctx.r3.s64 = ctx.r6.s64 + -23616;
	// bl 0x822dd930
	ctx.lr = 0x8210D4FC;
	sub_822DD930(ctx, base);
	// stw r3,1276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1276, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r4,-23632
	ctx.r3.s64 = ctx.r4.s64 + -23632;
	// addi r4,r31,1280
	ctx.r4.s64 = ctx.r31.s64 + 1280;
	// bl 0x8210d280
	ctx.lr = 0x8210D514;
	sub_8210D280(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,-23648
	ctx.r3.s64 = ctx.r3.s64 + -23648;
	// addi r4,r31,1404
	ctx.r4.s64 = ctx.r31.s64 + 1404;
	// bl 0x8210d280
	ctx.lr = 0x8210D528;
	sub_8210D280(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-23660
	ctx.r3.s64 = ctx.r11.s64 + -23660;
	// addi r4,r31,1528
	ctx.r4.s64 = ctx.r31.s64 + 1528;
	// bl 0x8210d280
	ctx.lr = 0x8210D53C;
	sub_8210D280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-23680
	ctx.r3.s64 = ctx.r10.s64 + -23680;
	// addi r4,r31,1652
	ctx.r4.s64 = ctx.r31.s64 + 1652;
	// bl 0x8210d280
	ctx.lr = 0x8210D550;
	sub_8210D280(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r9,-23700
	ctx.r3.s64 = ctx.r9.s64 + -23700;
	// addi r4,r31,1776
	ctx.r4.s64 = ctx.r31.s64 + 1776;
	// bl 0x8210d280
	ctx.lr = 0x8210D564;
	sub_8210D280(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r8,-23720
	ctx.r3.s64 = ctx.r8.s64 + -23720;
	// addi r4,r31,1900
	ctx.r4.s64 = ctx.r31.s64 + 1900;
	// bl 0x8210d280
	ctx.lr = 0x8210D578;
	sub_8210D280(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r7,-23736
	ctx.r3.s64 = ctx.r7.s64 + -23736;
	// addi r4,r31,2024
	ctx.r4.s64 = ctx.r31.s64 + 2024;
	// bl 0x8210d280
	ctx.lr = 0x8210D58C;
	sub_8210D280(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r6,-23760
	ctx.r3.s64 = ctx.r6.s64 + -23760;
	// addi r4,r31,2148
	ctx.r4.s64 = ctx.r31.s64 + 2148;
	// bl 0x8210d280
	ctx.lr = 0x8210D5A0;
	sub_8210D280(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r4,-23772
	ctx.r3.s64 = ctx.r4.s64 + -23772;
	// addi r4,r31,2272
	ctx.r4.s64 = ctx.r31.s64 + 2272;
	// bl 0x8210d280
	ctx.lr = 0x8210D5B4;
	sub_8210D280(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,-23788
	ctx.r3.s64 = ctx.r3.s64 + -23788;
	// addi r4,r31,2396
	ctx.r4.s64 = ctx.r31.s64 + 2396;
	// bl 0x8210d280
	ctx.lr = 0x8210D5C8;
	sub_8210D280(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,-23800
	ctx.r3.s64 = ctx.r11.s64 + -23800;
	// addi r4,r31,2520
	ctx.r4.s64 = ctx.r31.s64 + 2520;
	// bl 0x8210d280
	ctx.lr = 0x8210D5DC;
	sub_8210D280(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-23816
	ctx.r3.s64 = ctx.r10.s64 + -23816;
	// addi r4,r31,2644
	ctx.r4.s64 = ctx.r31.s64 + 2644;
	// bl 0x8210d280
	ctx.lr = 0x8210D5F0;
	sub_8210D280(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r9,-23828
	ctx.r3.s64 = ctx.r9.s64 + -23828;
	// addi r4,r31,2768
	ctx.r4.s64 = ctx.r31.s64 + 2768;
	// bl 0x8210d280
	ctx.lr = 0x8210D604;
	sub_8210D280(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r8,-23844
	ctx.r3.s64 = ctx.r8.s64 + -23844;
	// addi r4,r31,2892
	ctx.r4.s64 = ctx.r31.s64 + 2892;
	// bl 0x8210d280
	ctx.lr = 0x8210D618;
	sub_8210D280(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r7,-23856
	ctx.r3.s64 = ctx.r7.s64 + -23856;
	// addi r4,r31,3016
	ctx.r4.s64 = ctx.r31.s64 + 3016;
	// bl 0x8210d280
	ctx.lr = 0x8210D62C;
	sub_8210D280(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r6,-23872
	ctx.r3.s64 = ctx.r6.s64 + -23872;
	// addi r4,r31,3140
	ctx.r4.s64 = ctx.r31.s64 + 3140;
	// bl 0x8210d280
	ctx.lr = 0x8210D640;
	sub_8210D280(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r4,-23880
	ctx.r3.s64 = ctx.r4.s64 + -23880;
	// addi r4,r31,3264
	ctx.r4.s64 = ctx.r31.s64 + 3264;
	// bl 0x8210d280
	ctx.lr = 0x8210D654;
	sub_8210D280(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,-23892
	ctx.r3.s64 = ctx.r3.s64 + -23892;
	// addi r4,r31,3388
	ctx.r4.s64 = ctx.r31.s64 + 3388;
	// bl 0x8210d280
	ctx.lr = 0x8210D668;
	sub_8210D280(ctx, base);
	// bl 0x8210d408
	ctx.lr = 0x8210D66C;
	sub_8210D408(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-23912
	ctx.r3.s64 = ctx.r11.s64 + -23912;
	// bl 0x822dd930
	ctx.lr = 0x8210D678;
	sub_822DD930(ctx, base);
	// stw r3,3512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3512, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-23936
	ctx.r3.s64 = ctx.r10.s64 + -23936;
	// bl 0x822dd930
	ctx.lr = 0x8210D688;
	sub_822DD930(ctx, base);
	// stw r3,3516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3516, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-23952
	ctx.r3.s64 = ctx.r9.s64 + -23952;
	// bl 0x822dd930
	ctx.lr = 0x8210D698;
	sub_822DD930(ctx, base);
	// stw r3,3520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3520, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-23972
	ctx.r3.s64 = ctx.r8.s64 + -23972;
	// bl 0x822dd930
	ctx.lr = 0x8210D6A8;
	sub_822DD930(ctx, base);
	// stw r3,3524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3524, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-23992
	ctx.r3.s64 = ctx.r7.s64 + -23992;
	// bl 0x822dd930
	ctx.lr = 0x8210D6B8;
	sub_822DD930(ctx, base);
	// stw r3,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-24016
	ctx.r3.s64 = ctx.r6.s64 + -24016;
	// bl 0x822dd930
	ctx.lr = 0x8210D6C8;
	sub_822DD930(ctx, base);
	// stw r3,3532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3532, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-24036
	ctx.r3.s64 = ctx.r5.s64 + -24036;
	// bl 0x822dd930
	ctx.lr = 0x8210D6D8;
	sub_822DD930(ctx, base);
	// stw r3,3536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3536, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-24044
	ctx.r3.s64 = ctx.r4.s64 + -24044;
	// bl 0x822dd930
	ctx.lr = 0x8210D6E8;
	sub_822DD930(ctx, base);
	// stw r3,3540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3540, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-24056
	ctx.r3.s64 = ctx.r11.s64 + -24056;
	// bl 0x822dd930
	ctx.lr = 0x8210D6F8;
	sub_822DD930(ctx, base);
	// stw r3,3544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3544, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-24072
	ctx.r3.s64 = ctx.r10.s64 + -24072;
	// bl 0x822dd930
	ctx.lr = 0x8210D708;
	sub_822DD930(ctx, base);
	// stw r3,3548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3548, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-24096
	ctx.r3.s64 = ctx.r9.s64 + -24096;
	// bl 0x822dd930
	ctx.lr = 0x8210D718;
	sub_822DD930(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,3552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3552, ctx.r3.u32);
	// addi r3,r8,-24120
	ctx.r3.s64 = ctx.r8.s64 + -24120;
	// bl 0x822dd930
	ctx.lr = 0x8210D728;
	sub_822DD930(ctx, base);
	// stw r3,3556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3556, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-24144
	ctx.r3.s64 = ctx.r7.s64 + -24144;
	// bl 0x822dd930
	ctx.lr = 0x8210D738;
	sub_822DD930(ctx, base);
	// stw r3,3560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3560, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-24164
	ctx.r3.s64 = ctx.r6.s64 + -24164;
	// bl 0x822dd930
	ctx.lr = 0x8210D748;
	sub_822DD930(ctx, base);
	// stw r3,3564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3564, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-24188
	ctx.r3.s64 = ctx.r5.s64 + -24188;
	// bl 0x822dd930
	ctx.lr = 0x8210D758;
	sub_822DD930(ctx, base);
	// stw r3,3568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3568, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r3,r4,-24212
	ctx.r3.s64 = ctx.r4.s64 + -24212;
	// bl 0x822dd930
	ctx.lr = 0x8210D768;
	sub_822DD930(ctx, base);
	// stw r3,3572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3572, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-24236
	ctx.r3.s64 = ctx.r11.s64 + -24236;
	// bl 0x822dd930
	ctx.lr = 0x8210D778;
	sub_822DD930(ctx, base);
	// stw r3,3576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3576, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-24260
	ctx.r3.s64 = ctx.r10.s64 + -24260;
	// bl 0x822dd930
	ctx.lr = 0x8210D788;
	sub_822DD930(ctx, base);
	// stw r3,3580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3580, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r9,-24284
	ctx.r3.s64 = ctx.r9.s64 + -24284;
	// bl 0x822dd930
	ctx.lr = 0x8210D798;
	sub_822DD930(ctx, base);
	// stw r3,3584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3584, ctx.r3.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r8,-24304
	ctx.r3.s64 = ctx.r8.s64 + -24304;
	// bl 0x822dd930
	ctx.lr = 0x8210D7A8;
	sub_822DD930(ctx, base);
	// stw r3,3588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3588, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-24324
	ctx.r3.s64 = ctx.r7.s64 + -24324;
	// bl 0x822dd930
	ctx.lr = 0x8210D7B8;
	sub_822DD930(ctx, base);
	// stw r3,15992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15992, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r6,-24344
	ctx.r3.s64 = ctx.r6.s64 + -24344;
	// bl 0x822dd930
	ctx.lr = 0x8210D7C8;
	sub_822DD930(ctx, base);
	// stw r3,15996(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15996, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r5,-24364
	ctx.r3.s64 = ctx.r5.s64 + -24364;
	// bl 0x822dd930
	ctx.lr = 0x8210D7D8;
	sub_822DD930(ctx, base);
	// stw r3,16000(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16000, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8210D488) {
	__imp__sub_8210D488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210D7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210D7F8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x8210D800;
	__savefpr_28(ctx, base);
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
	// addi r3,r7,-22296
	ctx.r3.s64 = ctx.r7.s64 + -22296;
	// lfs f31,20560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20560);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-22368
	ctx.r8.s64 = ctx.r8.s64 + -22368;
	// lfs f28,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8210D840;
	sub_822E1660(ctx, base);
	// lis r31,-32167
	ctx.r31.s64 = -2108096512;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r31,-11644
	ctx.r30.s64 = ctx.r31.s64 + -11644;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-22440
	ctx.r8.s64 = ctx.r5.s64 + -22440;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6044(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6044);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// addi r3,r4,-22484
	ctx.r3.s64 = ctx.r4.s64 + -22484;
	// bl 0x822e1660
	ctx.lr = 0x8210D874;
	sub_822E1660(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r7,-22532
	ctx.r3.s64 = ctx.r7.s64 + -22532;
	// lfs f29,-22488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22488);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,-22632
	ctx.r8.s64 = ctx.r9.s64 + -22632;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8210D8A8;
	sub_822E1660(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-22736
	ctx.r8.s64 = ctx.r5.s64 + -22736;
	// addi r3,r4,-22784
	ctx.r3.s64 = ctx.r4.s64 + -22784;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8210D8D4;
	sub_822E1660(ctx, base);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,-22856
	ctx.r8.s64 = ctx.r11.s64 + -22856;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r10,-22872
	ctx.r3.s64 = ctx.r10.s64 + -22872;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x8210D8FC;
	sub_822E1660(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r9,-22952
	ctx.r6.s64 = ctx.r9.s64 + -22952;
	// addi r3,r8,-22988
	ctx.r3.s64 = ctx.r8.s64 + -22988;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x8210D91C;
	sub_822E15D0(ctx, base);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r7,-23040
	ctx.r8.s64 = ctx.r7.s64 + -23040;
	// addi r3,r5,-23060
	ctx.r3.s64 = ctx.r5.s64 + -23060;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,5808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8210D948;
	sub_822E1660(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r29,r4,-23136
	ctx.r29.s64 = ctx.r4.s64 + -23136;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r3,r10,-23176
	ctx.r3.s64 = ctx.r10.s64 + -23176;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x8210D97C;
	sub_822E1660(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r9,-23216
	ctx.r3.s64 = ctx.r9.s64 + -23216;
	// bl 0x822e1660
	ctx.lr = 0x8210D9A0;
	sub_822E1660(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r3,r7,-23256
	ctx.r3.s64 = ctx.r7.s64 + -23256;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x8210D9C4;
	sub_822E1660(ctx, base);
	// stw r3,-11644(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11644, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r6,-23296
	ctx.r3.s64 = ctx.r6.s64 + -23296;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x8210D9E8;
	sub_822E1660(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r3,-23340
	ctx.r8.s64 = ctx.r3.s64 + -23340;
	// lfs f31,-23300(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -23300);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r11,-23376
	ctx.r3.s64 = ctx.r11.s64 + -23376;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,13872(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13872);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8210DA1C;
	sub_822E1660(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r7,-23404
	ctx.r3.s64 = ctx.r7.s64 + -23404;
	// addi r8,r9,-23460
	ctx.r8.s64 = ctx.r9.s64 + -23460;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,9868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8210DA48;
	sub_822E1660(ctx, base);
	// stw r3,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-23512
	ctx.r8.s64 = ctx.r5.s64 + -23512;
	// addi r3,r4,-23540
	ctx.r3.s64 = ctx.r4.s64 + -23540;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-23464(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23464);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8210DA74;
	sub_822E1660(ctx, base);
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8210DA84;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210D7F0) {
	__imp__sub_8210D7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210DA88) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82141160
	ctx.lr = 0x8210DAA0;
	sub_82141160(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lfs f0,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r8,r11,-11644
	ctx.r8.s64 = ctx.r11.s64 + -11644;
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r7,r10,28832
	ctx.r7.s64 = ctx.r10.s64 + 28832;
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r9,-11644(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11644);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f12,4376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4376);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,20(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// fmuls f7,f13,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fadds f8,f5,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// lfs f10,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f7,f12
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8210db10
	if (!ctx.cr6.lt) goto loc_8210DB10;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8210DB10:
	// fcmpu cr6,f8,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bge cr6,0x8210db1c
	if (!ctx.cr6.lt) goto loc_8210DB1C;
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
loc_8210DB1C:
	// lfs f0,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x8210db2c
	if (!ctx.cr6.lt) goto loc_8210DB2C;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
loc_8210DB2C:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8210db38
	if (!ctx.cr6.lt) goto loc_8210DB38;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
loc_8210DB38:
	// fsubs f12,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,3212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fsubs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8210db6c
	if (!ctx.cr6.lt) goto loc_8210DB6C;
	// fdivs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8210db7c
	goto loc_8210DB7C;
loc_8210DB6C:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x8210db90
	if (!ctx.cr6.gt) goto loc_8210DB90;
	// fdivs f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// li r3,3
	ctx.r3.s64 = 3;
loc_8210DB7C:
	// lfs f12,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8210DB90:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8210dba8
	if (!ctx.cr6.lt) goto loc_8210DBA8;
	// fdivs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f0.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8210dbb8
	goto loc_8210DBB8;
loc_8210DBA8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8210dbcc
	if (!ctx.cr6.gt) goto loc_8210DBCC;
	// fdivs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// li r3,2
	ctx.r3.s64 = 2;
loc_8210DBB8:
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8210DBCC:
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

PPC_WEAK_FUNC(sub_8210DA88) {
	__imp__sub_8210DA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210DBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8210DBE8;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de010
	ctx.lr = 0x8210DBF0;
	__savefpr_22(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
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
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f28,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lfs f24,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f24.f64 = double(temp.f32);
	// addis r19,r27,1
	ctx.r19.s64 = ctx.r27.s64 + 65536;
	// lfs f25,5188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5188);
	ctx.f25.f64 = double(temp.f32);
	// addis r31,r27,3
	ctx.r31.s64 = ctx.r27.s64 + 196608;
	// lfs f26,14160(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14160);
	ctx.f26.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f29,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lfs f27,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r19,r19,22924
	ctx.r19.s64 = ctx.r19.s64 + 22924;
	// addi r31,r31,-8292
	ctx.r31.s64 = ctx.r31.s64 + -8292;
	// ori r25,r5,2116
	ctx.r25.u64 = ctx.r5.u64 | 2116;
	// lis r21,-32167
	ctx.r21.s64 = -2108096512;
	// addi r23,r11,-5696
	ctx.r23.s64 = ctx.r11.s64 + -5696;
loc_8210DC74:
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8210dea8
	if (ctx.cr6.eq) goto loc_8210DEA8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210dca4
	if (ctx.cr6.eq) goto loc_8210DCA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82115758
	ctx.lr = 0x8210DC98;
	sub_82115758(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210dea8
	if (ctx.cr6.eq) goto loc_8210DEA8;
loc_8210DCA4:
	// lwz r11,256(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210dcc0
	if (!ctx.cr6.eq) goto loc_8210DCC0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210deb8
	if (!ctx.cr6.eq) goto loc_8210DEB8;
loc_8210DCC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8210dcd8
	if (!ctx.cr6.eq) goto loc_8210DCD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8210deb8
	if (!ctx.cr6.eq) goto loc_8210DEB8;
loc_8210DCD8:
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// addi r11,r23,28
	ctx.r11.s64 = ctx.r23.s64 + 28;
	// lfs f0,-20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r27,r25
	ctx.r9.u64 = ctx.r27.u64 + ctx.r25.u64;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// lfs f13,-16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r27,r25
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f13,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fadds f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fsubs f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// stfs f2,144(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fsubs f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fsubs f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820eb840
	ctx.lr = 0x8210DD44;
	sub_820EB840(ctx, base);
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x8210dd58
	if (!ctx.cr6.eq) goto loc_8210DD58;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x8210dd7c
	goto loc_8210DD7C;
loc_8210DD58:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210da88
	ctx.lr = 0x8210DD64;
	sub_8210DA88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210dd7c
	if (ctx.cr6.eq) goto loc_8210DD7C;
	// lwz r4,-4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8210dd88
	if (!ctx.cr6.eq) goto loc_8210DD88;
loc_8210DD7C:
	// lwz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8210ddb4
	if (ctx.cr6.eq) goto loc_8210DDB4;
loc_8210DD88:
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fdbf8
	ctx.lr = 0x8210DD98;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210ddb4
	if (ctx.cr6.eq) goto loc_8210DDB4;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8238bd98
	ctx.lr = 0x8210DDAC;
	sub_8238BD98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8210ddb8
	goto loc_8210DDB8;
loc_8210DDB4:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_8210DDB8:
	// lwz r11,-11612(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + -11612);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// beq cr6,0x8210de54
	if (ctx.cr6.eq) goto loc_8210DE54;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8210de54
	if (ctx.cr6.eq) goto loc_8210DE54;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// beq cr6,0x8210de04
	if (ctx.cr6.eq) goto loc_8210DE04;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8210ddfc
	if (ctx.cr6.eq) goto loc_8210DDFC;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8210de08
	if (!ctx.cr6.eq) goto loc_8210DE08;
	// fmr f30,f26
	ctx.f30.f64 = ctx.f26.f64;
	// b 0x8210de08
	goto loc_8210DE08;
loc_8210DDFC:
	// fmr f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f25.f64;
	// b 0x8210de08
	goto loc_8210DE08;
loc_8210DE04:
	// fmr f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f24.f64;
loc_8210DE08:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lbz r28,17(r26)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// lbz r18,16(r26)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// fsubs f23,f13,f0
	ctx.f23.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f22,f12,f0
	ctx.f22.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x8210DE28;
	sub_82141160(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x820ea370
	ctx.lr = 0x8210DE50;
	sub_820EA370(ctx, base);
	// b 0x8210dea8
	goto loc_8210DEA8;
loc_8210DE54:
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lbz r28,17(r26)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// lbz r18,16(r26)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// fsubs f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f23,f12,f0
	ctx.f23.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x8210DE74;
	sub_82141160(ctx, base);
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// bl 0x821204a0
	ctx.lr = 0x8210DEA8;
	sub_821204A0(ctx, base);
loc_8210DEA8:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmpwi cr6,r22,32
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 32, ctx.xer);
	// blt cr6,0x8210dc74
	if (ctx.cr6.lt) goto loc_8210DC74;
loc_8210DEB8:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de05c
	ctx.lr = 0x8210DEC4;
	__restfpr_22(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210DBE0) {
	__imp__sub_8210DBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210DEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210DED0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x8210DED8;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f7dc8
	ctx.lr = 0x8210DF08;
	sub_820F7DC8(ctx, base);
	// lwz r8,1028(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1028);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210e0d8
	if (ctx.cr6.eq) goto loc_8210E0D8;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// lwz r10,1032(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1032);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-8288
	ctx.r11.s64 = ctx.r11.s64 + -8288;
loc_8210DF28:
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210df80
	if (ctx.cr6.eq) goto loc_8210DF80;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210df6c
	if (ctx.cr6.eq) goto loc_8210DF6C;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210df74
	if (ctx.cr6.eq) goto loc_8210DF74;
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8210df7c
	if (ctx.cr6.eq) goto loc_8210DF7C;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 + 112;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x8210df28
	if (ctx.cr6.lt) goto loc_8210DF28;
	// b 0x8210df80
	goto loc_8210DF80;
loc_8210DF6C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x8210df80
	goto loc_8210DF80;
loc_8210DF74:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x8210df80
	goto loc_8210DF80;
loc_8210DF7C:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_8210DF80:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x8210e0d8
	if (ctx.cr6.eq) goto loc_8210E0D8;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r8,-5696
	ctx.r9.s64 = ctx.r8.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// addi r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 + 28;
	// addis r6,r7,3
	ctx.r6.s64 = ctx.r7.s64 + 196608;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r6,-8312
	ctx.r6.s64 = ctx.r6.s64 + -8312;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,2116
	ctx.r10.s64 = ctx.r10.s64 + 2116;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// stfs f2,128(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f1,132(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f0,f6,f3
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x820eb840
	ctx.lr = 0x8210E00C;
	sub_820EB840(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210da88
	ctx.lr = 0x8210E018;
	sub_8210DA88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8210e0d8
	if (!ctx.cr6.eq) goto loc_8210E0D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r30,17(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8210E034;
	sub_82141160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f2,14056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14056);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f29,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f29.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// lfs f4,4376(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4376);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// bl 0x821204a0
	ctx.lr = 0x8210E088;
	sub_821204A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,17(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lfs f28,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f28.f64 = double(temp.f32);
	// lbz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x8210E09C;
	sub_82141160(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f1,14060(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14060);
	ctx.f1.f64 = double(temp.f32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lfs f3,4452(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4452);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// bl 0x821204a0
	ctx.lr = 0x8210E0D8;
	sub_821204A0(ctx, base);
loc_8210E0D8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8210E0E4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210DEC8) {
	__imp__sub_8210DEC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8210E0F0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de028
	ctx.lr = 0x8210E0F8;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
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
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// addis r25,r26,1
	ctx.r25.s64 = ctx.r26.s64 + 65536;
	// addi r11,r8,-5696
	ctx.r11.s64 = ctx.r8.s64 + -5696;
	// addi r25,r25,22924
	ctx.r25.s64 = ctx.r25.s64 + 22924;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lwz r7,364(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 364);
	// mulli r10,r7,404
	ctx.r10.s64 = ctx.r7.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x8210E148;
	sub_82284650(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// bl 0x82332af8
	ctx.lr = 0x8210E154;
	sub_82332AF8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8210e3d8
	if (ctx.cr6.eq) goto loc_8210E3D8;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-11616
	ctx.r30.s64 = ctx.r11.s64 + -11616;
	// lfs f28,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x8210e190
	if (!ctx.cr6.eq) goto loc_8210E190;
	// lwz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210e3d8
	if (ctx.cr6.eq) goto loc_8210E3D8;
loc_8210E190:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,388(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 388);
	// bl 0x820ee078
	ctx.lr = 0x8210E1B0;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210e3d8
	if (ctx.cr6.eq) goto loc_8210E3D8;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820eb840
	ctx.lr = 0x8210E1C8;
	sub_820EB840(ctx, base);
	// lwz r9,1028(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1028);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfs f13,128(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f0,f0
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f0.f64));
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// ori r10,r11,22904
	ctx.r10.u64 = ctx.r11.u64 | 22904;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfs f2,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f13,f13
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f13.f64));
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f12,f12
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f12.f64));
	// lfsx f4,r26,r10
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f11,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r31,124
	ctx.r11.s64 = ctx.r31.s64 + 124;
	// fmuls f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmuls f8,f6,f11
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f7,f10,f6
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmadds f6,f5,f4,f0
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f5,f3,f4,f13
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f4,f1,f4,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f12.f64));
	// fadds f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,160(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfs f2,164(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f1,168(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x820eb840
	ctx.lr = 0x8210E260;
	sub_820EB840(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e3d8
	if (ctx.cr6.eq) goto loc_8210E3D8;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x8210E294;
	sub_822D4AC8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x82141160
	ctx.lr = 0x8210E2A0;
	sub_82141160(ctx, base);
	// lwz r10,-16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// lwz r8,-12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r7,-22896
	ctx.r29.s64 = ctx.r7.s64 + -22896;
	// lfs f8,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f31,f8,f0
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f30,f7,f0
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f6,f30,f31
	ctx.f6.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fcmpu cr6,f29,f4
	ctx.cr6.compare(ctx.f29.f64, ctx.f4.f64);
	// ble cr6,0x8210e344
	if (!ctx.cr6.gt) goto loc_8210E344;
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// lwz r8,16116(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16116);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,17(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f1,f0,f12,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f2,f13,f12,f9
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f3,f11,f0,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f4,f13,f11,f7
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f7.f64));
	// bl 0x820ea6c0
	ctx.lr = 0x8210E340;
	sub_820EA6C0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
loc_8210E344:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,16108(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16108);
	// lfs f3,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lbz r9,17(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lfs f13,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lbz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// lfs f29,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fsubs f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fsubs f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// bl 0x821204a0
	ctx.lr = 0x8210E390;
	sub_821204A0(ctx, base);
	// lwz r10,16112(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16112);
	// lfs f12,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r9,17(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// lbz r8,16(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f12,f31
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// fsubs f1,f11,f31
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// bl 0x821204a0
	ctx.lr = 0x8210E3D8;
	sub_821204A0(ctx, base);
loc_8210E3D8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de074
	ctx.lr = 0x8210E3E4;
	__restfpr_28(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210E0E8) {
	__imp__sub_8210E0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E3E8) {
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 196608;
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// ori r7,r8,58212
	ctx.r7.u64 = ctx.r8.u64 | 58212;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r5,-7348
	ctx.r5.s64 = ctx.r5.s64 + -7348;
	// addi r4,r4,-7340
	ctx.r4.s64 = ctx.r4.s64 + -7340;
	// li r3,2047
	ctx.r3.s64 = 2047;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stwx r3,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210E3E8) {
	__imp__sub_8210E3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210E43C) {
	__imp__sub_8210E43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E440) {
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
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r6,58212
	ctx.r9.u64 = ctx.r6.u64 | 58212;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// ori r7,r3,58204
	ctx.r7.u64 = ctx.r3.u64 | 58204;
	// ori r6,r10,58208
	ctx.r6.u64 = ctx.r10.u64 | 58208;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// stwx r5,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210E440) {
	__imp__sub_8210E440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210E48C) {
	__imp__sub_8210E48C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E490) {
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
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 196608;
	// addi r10,r10,-8316
	ctx.r10.s64 = ctx.r10.s64 + -8316;
loc_8210E4B4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8210e4d8
	if (ctx.cr6.eq) goto loc_8210E4D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x8210e4b4
	if (ctx.cr6.lt) goto loc_8210E4B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210E4D8:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// mulli r11,r4,404
	ctx.r11.s64 = ctx.r4.s64 * 404;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addis r8,r9,3
	ctx.r8.s64 = ctx.r9.s64 + 196608;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r8,-8312
	ctx.r8.s64 = ctx.r8.s64 + -8312;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210E490) {
	__imp__sub_8210E490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210E534) {
	__imp__sub_8210E534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8210E540;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de020
	ctx.lr = 0x8210E548;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r27,r11,-11620
	ctx.r27.s64 = ctx.r11.s64 + -11620;
	// addi r10,r8,-15680
	ctx.r10.s64 = ctx.r8.s64 + -15680;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r6,r7,58212
	ctx.r6.u64 = ctx.r7.u64 | 58212;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r4,r30,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lfs f28,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r4,2047
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2047, ctx.xer);
	// beq cr6,0x8210e6e8
	if (ctx.cr6.eq) goto loc_8210E6E8;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8210e490
	ctx.lr = 0x8210E5A4;
	sub_8210E490(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210e5d4
	if (!ctx.cr6.eq) goto loc_8210E5D4;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8210e5e0
	goto loc_8210E5E0;
loc_8210E5D4:
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
loc_8210E5E0:
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f7,148(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f6,152(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820eb840
	ctx.lr = 0x8210E61C;
	sub_820EB840(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// ori r9,r10,58208
	ctx.r9.u64 = ctx.r10.u64 | 58208;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210e698
	if (ctx.cr6.eq) goto loc_8210E698;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,58204
	ctx.r8.u64 = ctx.r10.u64 | 58204;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// lwzx r5,r30,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// fsubs f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f28.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f28,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f28.f64 : ctx.f8.f64;
	// fsel f0,f6,f29,f5
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f29.f64 : ctx.f5.f64;
	// b 0x8210e69c
	goto loc_8210E69C;
loc_8210E698:
	// fmr f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f28.f64;
loc_8210E69C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fnmsubs f31,f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f31.f64)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r10,-5936
	ctx.r9.s64 = ctx.r10.s64 + -5936;
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,-5936(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -5936);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f7,f10,f28
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f28.f64));
	// fneg f6,f10
	ctx.f6.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f28,f10
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f28.f64 : ctx.f10.f64;
	// fsel f4,f6,f29,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f29.f64 : ctx.f5.f64;
	// fmadds f0,f9,f4,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f13,f8,f4,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// b 0x8210e6fc
	goto loc_8210E6FC;
loc_8210E6E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmr f0,f29
	ctx.f0.f64 = ctx.f29.f64;
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
loc_8210E6FC:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// bne cr6,0x8210e718
	if (!ctx.cr6.eq) goto loc_8210E718;
	// addis r31,r30,3
	ctx.r31.s64 = ctx.r30.s64 + 196608;
	// addi r31,r31,-7348
	ctx.r31.s64 = ctx.r31.s64 + -7348;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x8210e8ac
	goto loc_8210E8AC;
loc_8210E718:
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// addi r29,r29,-7340
	ctx.r29.s64 = ctx.r29.s64 + -7340;
	// lfs f12,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// bne cr6,0x8210e744
	if (!ctx.cr6.eq) goto loc_8210E744;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,58200
	ctx.r10.u64 = ctx.r11.u64 | 58200;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfsx f12,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// beq cr6,0x8210e748
	if (ctx.cr6.eq) goto loc_8210E748;
loc_8210E744:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210E748:
	// addis r31,r30,3
	ctx.r31.s64 = ctx.r30.s64 + 196608;
	// fmuls f12,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r31,r31,-7348
	ctx.r31.s64 = ctx.r31.s64 + -7348;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmuls f9,f31,f31
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f8,f30,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f12
	ctx.cr6.compare(ctx.f8.f64, ctx.f12.f64);
	// bgt cr6,0x8210e780
	if (ctx.cr6.gt) goto loc_8210E780;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8210E780:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210e798
	if (!ctx.cr6.eq) goto loc_8210E798;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210e860
	if (ctx.cr6.eq) goto loc_8210E860;
loc_8210E798:
	// bl 0x822d3ea0
	ctx.lr = 0x8210E79C;
	sub_822D3EA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de720
	ctx.lr = 0x8210E7BC;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de800
	ctx.lr = 0x8210E7C8;
	sub_823DE800(ctx, base);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f11,f26
	ctx.f11.f64 = ctx.f26.f64;
	// stfs f26,0(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f26
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f5,f31,f9
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f9.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fneg f12,f7
	ctx.f12.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f0,f30,f7,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmuls f4,f31,f12
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmadds f11,f30,f9,f4
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8210e824
	if (!ctx.cr6.lt) goto loc_8210E824;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_8210E824:
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmadds f11,f30,f12,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8210e844
	if (!ctx.cr6.lt) goto loc_8210E844;
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// stfs f12,4(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_8210E844:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmadds f10,f30,f13,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x8210e860
	if (!ctx.cr6.lt) goto loc_8210E860;
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_8210E860:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// ori r9,r11,22908
	ctx.r9.u64 = ctx.r11.u64 | 22908;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f13,f8,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_8210E8AC:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lbz r29,17(r26)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// ori r7,r9,58192
	ctx.r7.u64 = ctx.r9.u64 | 58192;
	// lbz r27,16(r26)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// addi r6,r8,-22896
	ctx.r6.s64 = ctx.r8.s64 + -22896;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f30,f0
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfsx f0,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r31,16120(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16120);
	// fsubs f26,f0,f27
	ctx.f26.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// bl 0x82141160
	ctx.lr = 0x8210E8F0;
	sub_82141160(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fsubs f1,f31,f27
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// bl 0x821204a0
	ctx.lr = 0x8210E924;
	sub_821204A0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x8210E930;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210E538) {
	__imp__sub_8210E538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210E934) {
	__imp__sub_8210E934(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E938) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210E940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8210e9e8
	if (ctx.cr6.eq) goto loc_8210E9E8;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8210e9e8
	if (ctx.cr6.eq) goto loc_8210E9E8;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210e9e8
	if (ctx.cr6.eq) goto loc_8210E9E8;
	// bl 0x82332af8
	ctx.lr = 0x8210E9AC;
	sub_82332AF8(ctx, base);
	// lwz r11,308(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8210e9d8
	if (ctx.cr6.eq) goto loc_8210E9D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8210e9e8
	if (!ctx.cr6.eq) goto loc_8210E9E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210e538
	ctx.lr = 0x8210E9D0;
	sub_8210E538(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210E9D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210e0e8
	ctx.lr = 0x8210E9E8;
	sub_8210E0E8(ctx, base);
loc_8210E9E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210E938) {
	__imp__sub_8210E938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210E9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210E9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821201a0
	ctx.lr = 0x8210EA0C;
	sub_821201A0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lbz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r30,r9
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// addis r9,r8,3
	ctx.r9.s64 = ctx.r8.s64 + 196608;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-10556
	ctx.r11.s64 = ctx.r9.s64 + -10556;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8210ea54
	if (!ctx.cr6.eq) goto loc_8210EA54;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210EA54:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22228
	ctx.r4.s64 = ctx.r11.s64 + -22228;
	// bl 0x822e8678
	ctx.lr = 0x8210EA64;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8210ea7c
	if (!ctx.cr6.eq) goto loc_8210EA7C;
	// li r11,2047
	ctx.r11.s64 = 2047;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8210ea84
	goto loc_8210EA84;
loc_8210EA7C:
	// bl 0x823deaf8
	ctx.lr = 0x8210EA80;
	sub_823DEAF8(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_8210EA84:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22236
	ctx.r4.s64 = ctx.r11.s64 + -22236;
	// bl 0x822e8678
	ctx.lr = 0x8210EA94;
	sub_822E8678(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210eacc
	if (ctx.cr6.eq) goto loc_8210EACC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r30,12
	ctx.r7.s64 = ctx.r30.s64 + 12;
	// addi r4,r11,-27936
	ctx.r4.s64 = ctx.r11.s64 + -27936;
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// bl 0x823deeb8
	ctx.lr = 0x8210EACC;
	sub_823DEEB8(ctx, base);
loc_8210EACC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22240
	ctx.r4.s64 = ctx.r11.s64 + -22240;
	// bl 0x822e8678
	ctx.lr = 0x8210EADC;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210eaf0
	if (ctx.cr6.eq) goto loc_8210EAF0;
	// bl 0x823deaf8
	ctx.lr = 0x8210EAEC;
	sub_823DEAF8(ctx, base);
	// b 0x8210eaf4
	goto loc_8210EAF4;
loc_8210EAF0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8210EAF4:
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22248
	ctx.r4.s64 = ctx.r11.s64 + -22248;
	// bl 0x822e8678
	ctx.lr = 0x8210EB08;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210eb1c
	if (ctx.cr6.eq) goto loc_8210EB1C;
	// bl 0x823deaf8
	ctx.lr = 0x8210EB18;
	sub_823DEAF8(ctx, base);
	// b 0x8210eb20
	goto loc_8210EB20;
loc_8210EB1C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8210EB20:
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-22256
	ctx.r4.s64 = ctx.r11.s64 + -22256;
	// bl 0x822e8678
	ctx.lr = 0x8210EB34;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210eb50
	if (ctx.cr6.eq) goto loc_8210EB50;
	// bl 0x823deaf8
	ctx.lr = 0x8210EB44;
	sub_823DEAF8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210EB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210E9F0) {
	__imp__sub_8210E9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210EB68;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x8210EB70;
	__savefpr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8210ec5c
	if (ctx.cr6.eq) goto loc_8210EC5C;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8210ec5c
	if (ctx.cr6.eq) goto loc_8210EC5C;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234de90
	ctx.lr = 0x8210EBE4;
	sub_8234DE90(ctx, base);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r8,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210ec5c
	if (ctx.cr6.eq) goto loc_8210EC5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r11,-22204
	ctx.r4.s64 = ctx.r11.s64 + -22204;
	// addi r3,r10,-22224
	ctx.r3.s64 = ctx.r10.s64 + -22224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x8210EC0C;
	sub_822B7268(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f28,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x8210EC20;
	sub_82141160(ctx, base);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fadds f1,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// fadds f2,f28,f29
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stb r7,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r7.u8);
	// bl 0x822c9d98
	ctx.lr = 0x8210EC5C;
	sub_822C9D98(ctx, base);
loc_8210EC5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x8210EC68;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210EB60) {
	__imp__sub_8210EB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210EC6C) {
	__imp__sub_8210EC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8210EC78;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x8210EC80;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r7,172(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r6,r7,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8210ee4c
	if (ctx.cr6.eq) goto loc_8210EE4C;
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8210ee4c
	if (ctx.cr6.eq) goto loc_8210EE4C;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234de90
	ctx.lr = 0x8210ECF4;
	sub_8234DE90(ctx, base);
	// bl 0x8234d4a8
	ctx.lr = 0x8210ECF8;
	sub_8234D4A8(ctx, base);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x8210ee4c
	if (!ctx.cr6.eq) goto loc_8210EE4C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c1c70
	ctx.lr = 0x8210ED10;
	sub_822C1C70(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,660(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x8210ED38;
	sub_82141160(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f11,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fadds f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// addi r25,r9,-22204
	ctx.r25.s64 = ctx.r9.s64 + -22204;
	// addi r7,r8,-22148
	ctx.r7.s64 = ctx.r8.s64 + -22148;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x822b7268
	ctx.lr = 0x8210ED64;
	sub_822B7268(ctx, base);
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fadds f1,f30,f10
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f10.f64));
	// bl 0x822c9d98
	ctx.lr = 0x8210EDA8;
	sub_822C9D98(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// fadds f29,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// addi r3,r3,-22168
	ctx.r3.s64 = ctx.r3.s64 + -22168;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x8210EDC0;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f9,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fadds f1,f30,f9
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f9.f64));
	// bl 0x822c9d98
	ctx.lr = 0x8210EDFC;
	sub_822C9D98(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r10,-22188
	ctx.r3.s64 = ctx.r10.s64 + -22188;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x8210EE10;
	sub_822B7268(ctx, base);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lfs f8,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stb r26,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// fadds f2,f29,f28
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fadds f1,f30,f8
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f8.f64));
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c9d98
	ctx.lr = 0x8210EE4C;
	sub_822C9D98(ctx, base);
loc_8210EE4C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x8210EE58;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210EC70) {
	__imp__sub_8210EC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EE5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210EE5C) {
	__imp__sub_8210EE5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EE60) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 * 84;
	// addi r11,r11,-11448
	ctx.r11.s64 = ctx.r11.s64 + -11448;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82198070
	ctx.lr = 0x8210EE90;
	sub_82198070(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r8,6968
	ctx.r5.s64 = ctx.r8.s64 + 6968;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r31,64
	ctx.r6.s64 = ctx.r31.s64 + 64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r30,11308(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11308);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x821a2a50
	ctx.lr = 0x8210EEE8;
	sub_821A2A50(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
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

PPC_WEAK_FUNC(sub_8210EE60) {
	__imp__sub_8210EE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210EF04) {
	__imp__sub_8210EF04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EF08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 * 84;
	// addi r11,r11,-11448
	ctx.r11.s64 = ctx.r11.s64 + -11448;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r8,r9,6968
	ctx.r8.s64 = ctx.r9.s64 + 6968;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// b 0x8210ee60
	sub_8210EE60(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210EF08) {
	__imp__sub_8210EF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EF44) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210EF44) {
	__imp__sub_8210EF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210EF48) {
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
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r4,r6,61924
	ctx.r4.u64 = ctx.r6.u64 | 61924;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq cr6,0x8210f020
	if (ctx.cr6.eq) goto loc_8210F020;
	// addis r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 131072;
	// addis r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 131072;
	// addi r8,r8,2128
	ctx.r8.s64 = ctx.r8.s64 + 2128;
	// addi r7,r7,2116
	ctx.r7.s64 = ctx.r7.s64 + 2116;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r5,-22116
	ctx.r4.s64 = ctx.r5.s64 + -22116;
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mulli r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 * 84;
	// lfs f0,-14540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f13,f0,f12
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f6,f11,f0,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f5,f9,f0,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// stfd f6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f6.u64);
	// stfd f5,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f5.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f7,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f7.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r11,r9,-11448
	ctx.r11.s64 = ctx.r9.s64 + -11448;
	// li r3,21
	ctx.r3.s64 = 21;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// addi r10,r11,64
	ctx.r10.s64 = ctx.r11.s64 + 64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// stfs f7,64(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// stfs f6,68(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f5,72(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// bl 0x82280900
	ctx.lr = 0x8210F020;
	sub_82280900(ctx, base);
loc_8210F020:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210EF48) {
	__imp__sub_8210EF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210F038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r10,-15680
	ctx.r9.s64 = ctx.r10.s64 + -15680;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r29,r10,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// beq cr6,0x8210f174
	if (ctx.cr6.eq) goto loc_8210F174;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bge cr6,0x8210f08c
	if (!ctx.cr6.lt) goto loc_8210F08C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r11,-21996
	ctx.r4.s64 = ctx.r11.s64 + -21996;
	// bl 0x82280900
	ctx.lr = 0x8210F088;
	sub_82280900(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8210F08C:
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// mulli r9,r29,84
	ctx.r9.s64 = ctx.r29.s64 * 84;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r10,r8,-11448
	ctx.r10.s64 = ctx.r8.s64 + -11448;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x8210f0c0
	if (!ctx.cr6.gt) goto loc_8210F0C0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x8210f0c8
	goto loc_8210F0C8;
loc_8210F0C0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
loc_8210F0C8:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7e98
	ctx.lr = 0x8210F0D4;
	sub_822E7E98(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-22000
	ctx.r4.s64 = ctx.r11.s64 + -22000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e7f80
	ctx.lr = 0x8210F0E8;
	sub_822E7F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bne cr6,0x8210f10c
	if (!ctx.cr6.eq) goto loc_8210F10C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-22040
	ctx.r4.s64 = ctx.r11.s64 + -22040;
	// bl 0x82280b08
	ctx.lr = 0x8210F104;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210F10C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,21
	ctx.r3.s64 = 21;
	// addi r4,r11,-22056
	ctx.r4.s64 = ctx.r11.s64 + -22056;
	// bl 0x82280900
	ctx.lr = 0x8210F11C;
	sub_82280900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210ee60
	ctx.lr = 0x8210F124;
	sub_8210EE60(ctx, base);
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
	// bne cr6,0x8210f16c
	if (!ctx.cr6.eq) goto loc_8210F16C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x823dec00
	ctx.lr = 0x8210F14C;
	sub_823DEC00(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r7,80
	ctx.r7.s64 = 80;
	// lfd f0,-22064(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -22064);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r30,r7
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.f13.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210F16C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_8210F174:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210F030) {
	__imp__sub_8210F030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210F17C) {
	__imp__sub_8210F17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F180) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f3,-21332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21332);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,5188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5188);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r6,-21380
	ctx.r10.s64 = ctx.r6.s64 + -21380;
	// lfs f30,7036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7036);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r5,-21412
	ctx.r3.s64 = ctx.r5.s64 + -21412;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f1,-23144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e16f0
	ctx.lr = 0x8210F1E4;
	sub_822E16F0(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r3,-11576(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11576, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f3,-14540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14540);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r7,-21456
	ctx.r10.s64 = ctx.r7.s64 + -21456;
	// lfs f30,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r6,-21488
	ctx.r3.s64 = ctx.r6.s64 + -21488;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f1,-21416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21416);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x822e16f0
	ctx.lr = 0x8210F228;
	sub_822E16F0(ctx, base);
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,-11468(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11468, ctx.r3.u32);
	// addi r3,r8,-21524
	ctx.r3.s64 = ctx.r8.s64 + -21524;
	// addi r9,r10,-21592
	ctx.r9.s64 = ctx.r10.s64 + -21592;
	// lfs f2,4672(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4672);
	ctx.f2.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f1,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16a8
	ctx.lr = 0x8210F260;
	sub_822E16A8(ctx, base);
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f5,f29
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f29.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,-11496(r7)
	PPC_STORE_U32(ctx.r7.u32 + -11496, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f3,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r3,-21684
	ctx.r10.s64 = ctx.r3.s64 + -21684;
	// lfs f2,8116(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8116);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,-21628
	ctx.r3.s64 = ctx.r11.s64 + -21628;
	// lfs f1,-21596(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -21596);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x8210F2A0;
	sub_822E16F0(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f5,f30
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// stw r3,-11456(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11456, ctx.r3.u32);
	// addi r10,r7,-21740
	ctx.r10.s64 = ctx.r7.s64 + -21740;
	// lfs f3,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r6,-21768
	ctx.r3.s64 = ctx.r6.s64 + -21768;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f1,-21688(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -21688);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x8210F2DC;
	sub_822E16F0(ctx, base);
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,-11532(r5)
	PPC_STORE_U32(ctx.r5.u32 + -11532, ctx.r3.u32);
	// addi r3,r8,-21804
	ctx.r3.s64 = ctx.r8.s64 + -21804;
	// addi r9,r10,-21880
	ctx.r9.s64 = ctx.r10.s64 + -21880;
	// lfs f2,17968(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17968);
	ctx.f2.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f1,26980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26980);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16a8
	ctx.lr = 0x8210F314;
	sub_822E16A8(ctx, base);
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,-11552(r7)
	PPC_STORE_U32(ctx.r7.u32 + -11552, ctx.r3.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f3,3628(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3628);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r3,-21932
	ctx.r8.s64 = ctx.r3.s64 + -21932;
	// lfs f2,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,-21900
	ctx.r3.s64 = ctx.r11.s64 + -21900;
	// lfs f1,7932(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8210F34C;
	sub_822E1660(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// stw r3,-11504(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11504, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8210F180) {
	__imp__sub_8210F180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F370) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
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
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// ori r10,r9,2092
	ctx.r10.u64 = ctx.r9.u64 | 2092;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// ori r9,r8,2096
	ctx.r9.u64 = ctx.r8.u64 | 2096;
	// ori r8,r7,2100
	ctx.r8.u64 = ctx.r7.u64 | 2100;
	// ori r7,r31,2104
	ctx.r7.u64 = ctx.r31.u64 | 2104;
	// ori r31,r30,18304
	ctx.r31.u64 = ctx.r30.u64 | 18304;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// stwx r4,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r4.u32);
	// stwx r3,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r3.u32);
	// stbx r30,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210F370) {
	__imp__sub_8210F370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210F404) {
	__imp__sub_8210F404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,61108
	ctx.r9.u64 = ctx.r11.u64 | 61108;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,61104
	ctx.r9.u64 = ctx.r11.u64 | 61104;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r6,r3,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// subf. r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,-30184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30184);
	// lfs f0,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8210f480
	if (ctx.cr6.lt) goto loc_8210F480;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8210f4ac
	goto loc_8210F4AC;
loc_8210F480:
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
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
loc_8210F4AC:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,2124
	ctx.r11.s64 = ctx.r11.s64 + 2124;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f12,f13
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210F408) {
	__imp__sub_8210F408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8210F4D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c00
	ctx.lr = 0x8210F4E8;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c20
	ctx.lr = 0x8210F4F4;
	sub_82332C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332b10
	ctx.lr = 0x8210F4FC;
	sub_82332B10(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22908
	ctx.r10.u64 = ctx.r11.u64 | 22908;
	// lwzx r8,r31,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8210f684
	if (!ctx.cr6.gt) goto loc_8210F684;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f4,-21320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21320);
	ctx.f4.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,-21324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21324);
	ctx.f5.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f8,-21328(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -21328);
	ctx.f8.f64 = double(temp.f32);
	// addis r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 131072;
	// lfs f2,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f6,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r7,19928
	ctx.r7.s64 = ctx.r7.s64 + 19928;
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// ori r9,r9,23628
	ctx.r9.u64 = ctx.r9.u64 | 23628;
	// lfs f3,5804(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5804);
	ctx.f3.f64 = double(temp.f32);
loc_8210F568:
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// li r11,5
	ctx.r11.s64 = 5;
	// bgt cr6,0x8210f578
	if (ctx.cr6.gt) goto loc_8210F578;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8210F578:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r10,3
	ctx.r10.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
loc_8210F59C:
	// lfs f11,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bne cr6,0x8210f5b8
	if (!ctx.cr6.eq) goto loc_8210F5B8;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8210f674
	if (ctx.cr6.eq) goto loc_8210F674;
	// b 0x8210f5c0
	goto loc_8210F5C0;
loc_8210F5B8:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x8210f60c
	if (ctx.cr6.eq) goto loc_8210F60C;
loc_8210F5C0:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8210f5d0
	if (!ctx.cr6.gt) goto loc_8210F5D0;
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x8210f5d4
	goto loc_8210F5D4;
loc_8210F5D0:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
loc_8210F5D4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8210f600
	if (ctx.cr6.eq) goto loc_8210F600;
	// lfsx f1,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x8210f5f4
	if (!ctx.cr6.gt) goto loc_8210F5F4;
	// lfs f1,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8210f604
	goto loc_8210F604;
loc_8210F5F4:
	// lfs f1,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8210f604
	goto loc_8210F604;
loc_8210F600:
	// fmuls f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
loc_8210F604:
	// fmadds f0,f0,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
loc_8210F60C:
	// lfs f0,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x8210f624
	if (!ctx.cr6.lt) goto loc_8210F624;
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
loc_8210F624:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x8210f66c
	if (ctx.cr6.lt) goto loc_8210F66C;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x8210f670
	if (ctx.cr6.eq) goto loc_8210F670;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// ble cr6,0x8210f674
	if (!ctx.cr6.gt) goto loc_8210F674;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8210f660
	if (!ctx.cr6.gt) goto loc_8210F660;
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f0,f9
	ctx.f0.f64 = ctx.f9.f64;
	// b 0x8210f670
	goto loc_8210F670;
loc_8210F660:
	// stfs f4,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// b 0x8210f670
	goto loc_8210F670;
loc_8210F66C:
	// stfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8210F670:
	// stfs f12,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
loc_8210F674:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8210f59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210F59C;
	// addic. r8,r8,-5
	ctx.xer.ca = ctx.r8.u32 > 4;
	ctx.r8.s64 = ctx.r8.s64 + -5;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x8210f568
	if (ctx.cr0.gt) goto loc_8210F568;
loc_8210F684:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210F4C8) {
	__imp__sub_8210F4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210F68C) {
	__imp__sub_8210F68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r4,1
	ctx.r3.s64 = ctx.r4.s64 + 65536;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r3,23328
	ctx.r3.s64 = ctx.r3.s64 + 23328;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8210f6d8
	if (!ctx.cr6.eq) goto loc_8210F6D8;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8210f6d8
	if (!ctx.cr6.eq) goto loc_8210F6D8;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8210f708
	if (ctx.cr6.eq) goto loc_8210F708;
loc_8210F6D8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x8210F6E0;
	sub_822DA650(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x8210F6EC;
	sub_822DA650(ctx, base);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d5c30
	ctx.lr = 0x8210F6FC;
	sub_822D5C30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7c78
	ctx.lr = 0x8210F708;
	sub_822D7C78(ctx, base);
loc_8210F708:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210F690) {
	__imp__sub_8210F690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210F71C) {
	__imp__sub_8210F71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210F720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210F728;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,23096
	ctx.r10.u64 = ctx.r11.u64 | 23096;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8210fae4
	if (!ctx.cr6.eq) goto loc_8210FAE4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 131072;
	// ori r3,r10,22908
	ctx.r3.u64 = ctx.r10.u64 | 22908;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r8,19904
	ctx.r10.u64 = ctx.r8.u64 | 19904;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwzx r8,r31,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r5,r11,23204
	ctx.r5.u64 = ctx.r11.u64 | 23204;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// lfsx f11,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r9,19876
	ctx.r11.u64 = ctx.r9.u64 | 19876;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ori r9,r7,19908
	ctx.r9.u64 = ctx.r7.u64 | 19908;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lfsx f13,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,2116
	ctx.r30.s64 = ctx.r30.s64 + 2116;
	// addi r26,r26,22912
	ctx.r26.s64 = ctx.r26.s64 + 22912;
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// ori r7,r6,2032
	ctx.r7.u64 = ctx.r6.u64 | 2032;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r28,r28,19912
	ctx.r28.s64 = ctx.r28.s64 + 19912;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ori r5,r4,22928
	ctx.r5.u64 = ctx.r4.u64 | 22928;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// lfsx f8,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r27,r27,22924
	ctx.r27.s64 = ctx.r27.s64 + 22924;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,19892
	ctx.r9.s64 = ctx.r9.s64 + 19892;
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// beq cr6,0x8210fae4
	if (ctx.cr6.eq) goto loc_8210FAE4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8210fae4
	if (ctx.cr6.eq) goto loc_8210FAE4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8210f898
	if (!ctx.cr6.eq) goto loc_8210F898;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,23260
	ctx.r9.u64 = ctx.r11.u64 | 23260;
	// ori r3,r10,18324
	ctx.r3.u64 = ctx.r10.u64 | 18324;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// ori r11,r8,18316
	ctx.r11.u64 = ctx.r8.u64 | 18316;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// ori r9,r7,18320
	ctx.r9.u64 = ctx.r7.u64 | 18320;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,3844(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-21304(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -21304);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfsx f0,r31,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// stfsx f13,r31,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// stfsx f11,r31,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8210F898:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8210fae4
	if (ctx.cr6.eq) goto loc_8210FAE4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82336be8
	ctx.lr = 0x8210F8AC;
	sub_82336BE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f4c8
	ctx.lr = 0x8210F8B4;
	sub_8210F4C8(ctx, base);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,19928
	ctx.r11.s64 = ctx.r11.s64 + 19928;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r29,18316
	ctx.r29.s64 = ctx.r29.s64 + 18316;
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r8,r10,22948
	ctx.r8.u64 = ctx.r10.u64 | 22948;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f9
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f8,f7
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,-22120(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-22124(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -22124);
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f1,8(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f12,f11,f10
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82336390
	ctx.lr = 0x8210F95C;
	sub_82336390(ctx, base);
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823364c8
	ctx.lr = 0x8210F97C;
	sub_823364C8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822da518
	ctx.lr = 0x8210F994;
	sub_822DA518(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lfs f8,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// ori r11,r3,2084
	ctx.r11.u64 = ctx.r3.u64 | 2084;
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f31,f8
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f8.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f4,f31,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmadds f0,f2,f31,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r28,r5,2124
	ctx.r28.u64 = ctx.r5.u64 | 2124;
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8210fa7c
	if (!ctx.cr6.gt) goto loc_8210FA7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-21308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21308);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8210fa3c
	if (!ctx.cr6.lt) goto loc_8210FA3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfsx f12,r31,r28
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,2080
	ctx.r9.u64 = ctx.r10.u64 | 2080;
	// lfs f13,-29576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29576);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfsx f10,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfsx f9,r31,r28
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// b 0x8210fa7c
	goto loc_8210FA7C;
loc_8210FA3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,-21312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21312);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8210fa7c
	if (!ctx.cr6.lt) goto loc_8210FA7C;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f11,r31,r28
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,2080
	ctx.r8.u64 = ctx.r9.u64 | 2080;
	// lfs f0,-21316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f10,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f12,f0,f13
	ctx.f9.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fmadds f8,f9,f10,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfsx f8,r31,r28
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
loc_8210FA7C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r11,23012
	ctx.r7.u64 = ctx.r11.u64 | 23012;
	// ori r6,r10,18320
	ctx.r6.u64 = ctx.r10.u64 | 18320;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,5996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,6056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e97d8
	ctx.lr = 0x8210FAAC;
	sub_822E97D8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8210f690
	ctx.lr = 0x8210FAB8;
	sub_8210F690(ctx, base);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfsx f12,r31,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// ori r3,r5,22960
	ctx.r3.u64 = ctx.r5.u64 | 22960;
	// add r11,r31,r28
	ctx.r11.u64 = ctx.r31.u64 + ctx.r28.u64;
	// lfs f0,6016(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8210fae4
	if (!ctx.cr6.lt) goto loc_8210FAE4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8210FAE4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210F720) {
	__imp__sub_8210F720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,-3712
	ctx.r6.s64 = ctx.r11.s64 + -3712;
	// lbzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r6.u32);
	// addic r4,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r4.s64 = ctx.r5.s64 + -1;
	// subfe r3,r4,r5
	temp.u8 = (~ctx.r4.u32 + ctx.r5.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FAF0) {
	__imp__sub_8210FAF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FB1C) {
	__imp__sub_8210FB1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FB20) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,61840
	ctx.r7.u64 = ctx.r8.u64 | 61840;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11492);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FB20) {
	__imp__sub_8210FB20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FB74) {
	__imp__sub_8210FB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FB78) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r9,r7,61840
	ctx.r9.u64 = ctx.r7.u64 | 61840;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32167
	ctx.r5.s64 = -2108096512;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lwz r8,-11492(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -11492);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8210fbd4
	if (!ctx.cr6.gt) goto loc_8210FBD4;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8210fbd4
	if (ctx.cr6.gt) goto loc_8210FBD4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8210FBD4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210fc5c
	if (ctx.cr6.eq) goto loc_8210FC5C;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,-11548(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11548);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// beq cr6,0x8210fc5c
	if (ctx.cr6.eq) goto loc_8210FC5C;
	// lfsx f13,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8210fc20
	if (ctx.cr6.gt) goto loc_8210FC20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210FC20:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-11508(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11508);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fsubs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// beq cr6,0x8210fc5c
	if (ctx.cr6.eq) goto loc_8210FC5C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17872);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x8210FC58;
	sub_823DE720(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_8210FC5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FB78) {
	__imp__sub_8210FB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FC6C) {
	__imp__sub_8210FC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FC70) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FC70) {
	__imp__sub_8210FC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FC78) {
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
	// rlwinm r3,r5,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FC78) {
	__imp__sub_8210FC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r6,r11,23628
	ctx.r6.s64 = ctx.r11.s64 + 23628;
	// lfsx f1,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FCA0) {
	__imp__sub_8210FCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FCC4) {
	__imp__sub_8210FCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11484);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FCC8) {
	__imp__sub_8210FCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8210FCE0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x8210FD18;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c20
	ctx.lr = 0x8210FD24;
	sub_82332C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x8210FD2C;
	sub_82332AF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x8210FD38;
	sub_82332B10(ctx, base);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210fd5c
	if (ctx.cr6.eq) goto loc_8210FD5C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8210fd5c
	if (ctx.cr6.eq) goto loc_8210FD5C;
	// lfs f31,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8210fdcc
	goto loc_8210FDCC;
loc_8210FD5C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61824
	ctx.r10.u64 = ctx.r11.u64 | 61824;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8210fd80
	if (ctx.cr6.eq) goto loc_8210FD80;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11504(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11504);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8210fdcc
	goto loc_8210FDCC;
loc_8210FD80:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,-29936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29936);
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82333508
	ctx.lr = 0x8210FD98;
	sub_82333508(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210fdcc
	if (ctx.cr6.eq) goto loc_8210FDCC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f30,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211ba68
	ctx.lr = 0x8210FDB0;
	sub_8211BA68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fsel f11,f13,f31,f30
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f30.f64;
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f31,f11,f1,f10
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f10.f64));
loc_8210FDCC:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210fde8
	if (ctx.cr6.eq) goto loc_8210FDE8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61844
	ctx.r10.u64 = ctx.r11.u64 | 61844;
	// lfsx f31,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f31.f64 = double(temp.f32);
loc_8210FDE8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,-30256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30256);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x820d81a8
	ctx.lr = 0x8210FE00;
	sub_820D81A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210fe14
	if (ctx.cr6.eq) goto loc_8210FE14;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30076);
	// b 0x8210fe1c
	goto loc_8210FE1C;
loc_8210FE14:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-15688(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15688);
loc_8210FE1C:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x8234c700
	ctx.lr = 0x8210FE2C;
	sub_8234C700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210fe48
	if (ctx.cr6.eq) goto loc_8210FE48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234d260
	ctx.lr = 0x8210FE44;
	sub_8234D260(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8210FE48:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,6212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6212);
	// lfs f0,-21300(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fsel f11,f12,f13,f31
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f1,f10,f11,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210FCD8) {
	__imp__sub_8210FCD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FE7C) {
	__imp__sub_8210FE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FE80) {
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
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-11276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210feac
	if (ctx.cr6.eq) goto loc_8210FEAC;
	// twi 31,r0,22
loc_8210FEAC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r9,-16984
	ctx.r10.s64 = ctx.r9.s64 + -16984;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// rlwinm r3,r6,7,0,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// addi r6,r6,2112
	ctx.r6.s64 = ctx.r6.s64 + 2112;
	// addi r5,r5,2108
	ctx.r5.s64 = ctx.r5.s64 + 2108;
	// lfsx f2,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822da1d8
	ctx.lr = 0x8210FEF8;
	sub_822DA1D8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x8210FF14;
	sub_823DDE60(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r8,18464
	ctx.r7.u64 = ctx.r8.u64 | 18464;
	// lfs f0,-21296(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21296);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f11,r31,r7
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FE80) {
	__imp__sub_8210FE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FF48) {
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
	// bl 0x8210fcd8
	ctx.lr = 0x8210FF60;
	sub_8210FCD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fe80
	ctx.lr = 0x8210FF68;
	sub_8210FE80(ctx, base);
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

PPC_WEAK_FUNC(sub_8210FF48) {
	__imp__sub_8210FF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210FF7C) {
	__imp__sub_8210FF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// lwz r11,-30256(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30256);
	// addi r5,r10,2112
	ctx.r5.s64 = ctx.r10.s64 + 2112;
	// mullw r4,r3,r6
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f0,-21292(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -21292);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8210FF80) {
	__imp__sub_8210FF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210FFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 65536;
	// addis r7,r3,2
	ctx.r7.s64 = ctx.r3.s64 + 131072;
	// addi r8,r8,22924
	ctx.r8.s64 = ctx.r8.s64 + 22924;
	// addi r7,r7,2116
	ctx.r7.s64 = ctx.r7.s64 + 2116;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,2124
	ctx.r10.s64 = ctx.r10.s64 + 2124;
	// lfs f0,28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addis r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 131072;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f12,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f11,280(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8239ec30
	sub_8239EC30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8210FFC0) {
	__imp__sub_8210FFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82110020;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 65536;
	// addi r27,r27,22924
	ctx.r27.s64 = ctx.r27.s64 + 22924;
	// lwz r8,172(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 172);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82110148
	if (ctx.cr6.eq) goto loc_82110148;
	// lwz r10,364(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 364);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82110074;
	sub_82284650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110148
	if (ctx.cr6.eq) goto loc_82110148;
	// bl 0x822f2388
	ctx.lr = 0x82110084;
	sub_822F2388(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822eeda0
	ctx.lr = 0x8211008C;
	sub_822EEDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f23e0
	ctx.lr = 0x82110094;
	sub_822F23E0(ctx, base);
	// addis r29,r28,2
	ctx.r29.s64 = ctx.r28.s64 + 131072;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r29,r29,18316
	ctx.r29.s64 = ctx.r29.s64 + 18316;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r29,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r29.u32);
	// addis r6,r28,2
	ctx.r6.s64 = ctx.r28.s64 + 131072;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// addi r6,r6,2116
	ctx.r6.s64 = ctx.r6.s64 + 2116;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,222(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 222);
	// bl 0x820ee1e0
	ctx.lr = 0x821100C8;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821100e0
	if (!ctx.cr6.eq) goto loc_821100E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21288
	ctx.r4.s64 = ctx.r11.s64 + -21288;
	// bl 0x822830e8
	ctx.lr = 0x821100E0;
	sub_822830E8(ctx, base);
loc_821100E0:
	// lwz r11,360(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82110148
	if (!ctx.cr6.eq) goto loc_82110148;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82110148
	if (!ctx.cr6.eq) goto loc_82110148;
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// bl 0x82332af8
	ctx.lr = 0x82110108;
	sub_82332AF8(ctx, base);
	// addi r31,r3,1404
	ctx.r31.s64 = ctx.r3.s64 + 1404;
	// bl 0x822d3ee0
	ctx.lr = 0x82110110;
	sub_822D3EE0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lhz r3,332(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 332);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x82332af8
	ctx.lr = 0x82110128;
	sub_82332AF8(ctx, base);
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// addi r31,r3,1400
	ctx.r31.s64 = ctx.r3.s64 + 1400;
	// addi r30,r30,18320
	ctx.r30.s64 = ctx.r30.s64 + 18320;
	// bl 0x822d3ee0
	ctx.lr = 0x82110138;
	sub_822D3EE0(ctx, base);
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f1,f11,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82110148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82110018) {
	__imp__sub_82110018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82110158;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addis r20,r30,1
	ctx.r20.s64 = ctx.r30.s64 + 65536;
	// addi r20,r20,22924
	ctx.r20.s64 = ctx.r20.s64 + 22924;
	// lwz r8,172(r20)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r20.u32 + 172);
	// rlwinm r7,r8,0,11,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r7,r7,0,20,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82110308
	if (!ctx.cr6.eq) goto loc_82110308;
	// lwz r11,4(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82110308
	if (ctx.cr6.eq) goto loc_82110308;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82110308
	if (ctx.cr6.eq) goto loc_82110308;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82332c00
	ctx.lr = 0x821101B0;
	sub_82332C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82110308
	if (!ctx.cr6.gt) goto loc_82110308;
	// addis r28,r30,2
	ctx.r28.s64 = ctx.r30.s64 + 131072;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r28,r28,2128
	ctx.r28.s64 = ctx.r28.s64 + 2128;
	// addi r11,r11,19960
	ctx.r11.s64 = ctx.r11.s64 + 19960;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// addis r9,r30,2
	ctx.r9.s64 = ctx.r30.s64 + 131072;
	// addi r10,r10,2140
	ctx.r10.s64 = ctx.r10.s64 + 2140;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,19972
	ctx.r9.s64 = ctx.r9.s64 + 19972;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addis r8,r30,2
	ctx.r8.s64 = ctx.r30.s64 + 131072;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addis r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 131072;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r8,r8,2152
	ctx.r8.s64 = ctx.r8.s64 + 2152;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r7,19984
	ctx.r7.s64 = ctx.r7.s64 + 19984;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addis r25,r30,2
	ctx.r25.s64 = ctx.r30.s64 + 131072;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addis r6,r30,2
	ctx.r6.s64 = ctx.r30.s64 + 131072;
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r25,r25,2116
	ctx.r25.s64 = ctx.r25.s64 + 2116;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r6,19996
	ctx.r6.s64 = ctx.r6.s64 + 19996;
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r26,0
	ctx.r26.s64 = 0;
	// stfs f9,8(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f5,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f4,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f3,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// bl 0x823340d8
	ctx.lr = 0x82110264;
	sub_823340D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82110308
	if (ctx.cr6.lt) goto loc_82110308;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// rlwinm r22,r23,1,0,30
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r27,r9,58216
	ctx.r27.u64 = ctx.r9.u64 | 58216;
	// ori r21,r8,18316
	ctx.r21.u64 = ctx.r8.u64 | 18316;
	// addi r29,r11,-30176
	ctx.r29.s64 = ctx.r11.s64 + -30176;
	// addi r24,r10,-25976
	ctx.r24.s64 = ctx.r10.s64 + -25976;
loc_82110290:
	// add r11,r22,r26
	ctx.r11.u64 = ctx.r22.u64 + ctx.r26.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110308
	if (ctx.cr6.eq) goto loc_82110308;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82118900
	ctx.lr = 0x821102B4;
	sub_82118900(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lhz r5,224(r24)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r24.u32 + 224);
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// bl 0x820ee078
	ctx.lr = 0x821102CC;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82110308
	if (ctx.cr6.eq) goto loc_82110308;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r30,r21
	ctx.r4.u64 = ctx.r30.u64 + ctx.r21.u64;
	// bl 0x822d7c78
	ctx.lr = 0x821102E0;
	sub_822D7C78(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821102f4
	if (!ctx.cr6.eq) goto loc_821102F4;
	// lwz r11,504(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82110308
	if (!ctx.cr6.eq) goto loc_82110308;
loc_821102F4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bl 0x823340d8
	ctx.lr = 0x82110300;
	sub_823340D8(ctx, base);
	// cmpw cr6,r26,r3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82110290
	if (!ctx.cr6.gt) goto loc_82110290;
loc_82110308:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82110150) {
	__imp__sub_82110150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82110318;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r11,r8,-5696
	ctx.r11.s64 = ctx.r8.s64 + -5696;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r7,364(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// mulli r10,r7,404
	ctx.r10.s64 = ctx.r7.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82110368;
	sub_82284650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110804
	if (ctx.cr6.eq) goto loc_82110804;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,388(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 388);
	// bl 0x820ee078
	ctx.lr = 0x82110394;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82110804
	if (ctx.cr6.eq) goto loc_82110804;
	// addi r7,r1,452
	ctx.r7.s64 = ctx.r1.s64 + 452;
	// lhz r5,222(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 222);
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee078
	ctx.lr = 0x821103B4;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82110804
	if (ctx.cr6.eq) goto loc_82110804;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lfs f0,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f9,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,452(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,456(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,460(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f9,132(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f7,140(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f5,148(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f4,152(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// beq cr6,0x821107e8
	if (ctx.cr6.eq) goto loc_821107E8;
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821107e8
	if (ctx.cr6.eq) goto loc_821107E8;
	// addis r27,r29,2
	ctx.r27.s64 = ctx.r29.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r27,r27,18468
	ctx.r27.s64 = ctx.r27.s64 + 18468;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r28,r11,18472
	ctx.r28.u64 = ctx.r11.u64 | 18472;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82110468
	if (ctx.cr6.eq) goto loc_82110468;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x822d6378
	ctx.lr = 0x82110464;
	sub_822D6378(ctx, base);
	// stw r26,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r26.u32);
loc_82110468:
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x822d5c30
	ctx.lr = 0x8211047C;
	sub_822D5C30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6378
	ctx.lr = 0x82110488;
	sub_822D6378(ctx, base);
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x821106c8
	if (!ctx.cr6.eq) goto loc_821106C8;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821106bc
	if (ctx.cr6.eq) goto loc_821106BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d7c78
	ctx.lr = 0x821104B0;
	sub_822D7C78(ctx, base);
	// addis r26,r29,2
	ctx.r26.s64 = ctx.r29.s64 + 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r26,r26,18508
	ctx.r26.s64 = ctx.r26.s64 + 18508;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r27,r11,18512
	ctx.r27.u64 = ctx.r11.u64 | 18512;
	// ori r28,r10,18516
	ctx.r28.u64 = ctx.r10.u64 | 18516;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821104fc
	if (!ctx.cr6.eq) goto loc_821104FC;
	// lfs f1,264(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x821104E0;
	sub_820D52C0(ctx, base);
	// stfsx f1,r29,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r27.u32, temp.u32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x821104F0;
	sub_820D52C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfsx f1,r29,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, temp.u32);
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_821104FC:
	// lfs f2,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x82110508;
	sub_820D52C0(ctx, base);
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lfs f9,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f8,164(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfs f0,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x822d6770
	ctx.lr = 0x82110554;
	sub_822D6770(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r6,-32188
	ctx.r6.s64 = -2109472768;
	// lfs f3,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// ori r7,r10,22908
	ctx.r7.u64 = ctx.r10.u64 | 22908;
	// lfs f5,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfsx f2,r29,r27
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32188
	ctx.r3.s64 = -2109472768;
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lwz r11,-19396(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19396);
	// lfs f0,5804(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,6244(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6244);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f8,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lwzx r7,r29,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// lwz r10,-1240(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -1240);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r9,18808(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 18808);
	// lwz r11,-30272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30272);
	// std r6,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r6.u64);
	// lfd f12,208(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f1,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f1,f5
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f13,f7,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fnmsubs f30,f8,f5,f6
	ctx.f30.f64 = double(float(-(ctx.f8.f64 * ctx.f5.f64 - ctx.f6.f64)));
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// bl 0x822d4508
	ctx.lr = 0x821105EC;
	sub_822D4508(ctx, base);
	// stfsx f1,r29,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r27.u32, temp.u32);
	// lwz r11,-30272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30272);
	// lfsx f2,r29,r28
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822d4508
	ctx.lr = 0x82110608;
	sub_822D4508(ctx, base);
	// lfsx f12,r29,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r30,264
	ctx.r31.s64 = ctx.r30.s64 + 264;
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfsx f1,r29,r28
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r28.u32, temp.u32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f10,264(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfsx f8,r29,r28
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,268(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 268, temp.u32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f6,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// lfs f3,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f13,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f10,f3
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fsubs f12,f7,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120788
	ctx.lr = 0x8211066C;
	sub_82120788(ctx, base);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6378
	ctx.lr = 0x82110678;
	sub_822D6378(ctx, base);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x82110684;
	sub_822DA650(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d5c30
	ctx.lr = 0x82110694;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d7c78
	ctx.lr = 0x821106A0;
	sub_822D7C78(ctx, base);
	// lfs f11,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,272(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821106BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18508
	ctx.r10.u64 = ctx.r11.u64 | 18508;
	// stbx r26,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r26.u8);
loc_821106C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x822d9618
	ctx.lr = 0x821106F4;
	sub_822D9618(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,-17060(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17060);
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d97a8
	ctx.lr = 0x82110710;
	sub_822D97A8(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d6a38
	ctx.lr = 0x8211071C;
	sub_822D6A38(ctx, base);
	// addi r31,r30,264
	ctx.r31.s64 = ctx.r30.s64 + 264;
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822da650
	ctx.lr = 0x8211072C;
	sub_822DA650(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d5c30
	ctx.lr = 0x8211073C;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d7c78
	ctx.lr = 0x82110748;
	sub_822D7C78(ctx, base);
	// lwz r8,400(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 264, temp.u32);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x8211076c
	if (ctx.cr6.eq) goto loc_8211076C;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82110774
	if (ctx.cr6.eq) goto loc_82110774;
loc_8211076C:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,268(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 268, temp.u32);
loc_82110774:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120788
	ctx.lr = 0x821107B0;
	sub_82120788(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// bl 0x822d5c30
	ctx.lr = 0x821107C0;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d7c78
	ctx.lr = 0x821107CC;
	sub_822D7C78(ctx, base);
	// lfs f5,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f4,272(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 272, temp.u32);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821107E8:
	// lwz r11,400(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82110804
	if (ctx.cr6.eq) goto loc_82110804;
	// addis r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 131072;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r4,18472
	ctx.r4.s64 = ctx.r4.s64 + 18472;
	// bl 0x822d6378
	ctx.lr = 0x82110804;
	sub_822D6378(ctx, base);
loc_82110804:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82110310) {
	__imp__sub_82110310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82110814) {
	__imp__sub_82110814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110818) {
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
	// bl 0x823de028
	ctx.lr = 0x82110830;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,-11500
	ctx.r31.s64 = ctx.r11.s64 + -11500;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x82110a4c
	if (ctx.cr6.eq) goto loc_82110A4C;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r10,28832
	ctx.r30.s64 = ctx.r10.s64 + 28832;
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,404(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lwz r7,400(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f28,f10
	ctx.f28.f64 = double(float(ctx.f10.f64));
	// frsp f29,f9
	ctx.f29.f64 = double(float(ctx.f9.f64));
	// bge cr6,0x821108f0
	if (!ctx.cr6.lt) goto loc_821108F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fnmsubs f12,f13,f0,f31
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmsubs f2,f13,f29,f31
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 - ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmadds f4,f12,f29,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f0.f64));
	// bl 0x823915b0
	ctx.lr = 0x821108EC;
	sub_823915B0(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
loc_821108F0:
	// lwz r10,-28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8211093c
	if (!ctx.cr6.gt) goto loc_8211093C;
	// lwz r10,440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmuls f4,f13,f29
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmadds f3,f0,f28,f31
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f31.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823915b0
	ctx.lr = 0x82110938;
	sub_823915B0(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
loc_8211093C:
	// lwz r10,-60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8211098c
	if (!ctx.cr6.gt) goto loc_8211098C;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmuls f4,f13,f29
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmadds f3,f0,f28,f31
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f31.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f2,f12,f29
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x823915b0
	ctx.lr = 0x82110988;
	sub_823915B0(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
loc_8211098C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,-28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x821109f0
	if (!ctx.cr6.lt) goto loc_821109F0;
	// lwz r10,440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmsubs f1,f12,f28,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f31.f64));
	// fmadds f3,f10,f28,f31
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823915b0
	ctx.lr = 0x821109E8;
	sub_823915B0(ctx, base);
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_821109F0:
	// lwz r9,-60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -60);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x82110a4c
	if (!ctx.cr6.lt) goto loc_82110A4C;
	// lwz r10,440(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fsubs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmsubs f1,f12,f28,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f31.f64));
	// fmuls f2,f10,f29
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f3,f9,f28,f31
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823915b0
	ctx.lr = 0x82110A4C;
	sub_823915B0(ctx, base);
loc_82110A4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x82110A58;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82110818) {
	__imp__sub_82110818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82110A6C) {
	__imp__sub_82110A6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110A70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82110A78;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x82110A80;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,-19676
	ctx.r3.s64 = ctx.r7.s64 + -19676;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,-19716
	ctx.r8.s64 = ctx.r8.s64 + -19716;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 728);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r31,r11,728
	ctx.r31.s64 = ctx.r11.s64 + 728;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x82110AC0;
	sub_822E1660(ctx, base);
	// lis r30,-32167
	ctx.r30.s64 = -2108096512;
	// lfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r29,r30,-11584
	ctx.r29.s64 = ctx.r30.s64 + -11584;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-19756
	ctx.r8.s64 = ctx.r6.s64 + -19756;
	// addi r3,r5,-19784
	ctx.r3.s64 = ctx.r5.s64 + -19784;
	// stw r11,56(r29)
	PPC_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110AF4;
	sub_822E1660(ctx, base);
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r4,-19824
	ctx.r8.s64 = ctx.r4.s64 + -19824;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r3,-19852
	ctx.r3.s64 = ctx.r3.s64 + -19852;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110B1C;
	sub_822E1660(ctx, base);
	// stw r3,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-19892
	ctx.r8.s64 = ctx.r10.s64 + -19892;
	// addi r3,r9,-19924
	ctx.r3.s64 = ctx.r9.s64 + -19924;
	// lfs f29,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x82110B4C;
	sub_822E1660(ctx, base);
	// stw r3,60(r29)
	PPC_STORE_U32(ctx.r29.u32 + 60, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-19984
	ctx.r8.s64 = ctx.r6.s64 + -19984;
	// addi r3,r5,-20012
	ctx.r3.s64 = ctx.r5.s64 + -20012;
	// lfs f28,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f28.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x82110B7C;
	sub_822E1660(ctx, base);
	// stw r3,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r3.u32);
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r3,-32191
	ctx.r3.s64 = -2109669376;
	// addi r31,r4,-28736
	ctx.r31.s64 = ctx.r4.s64 + -28736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r3,32448
	ctx.r4.s64 = ctx.r3.s64 + 32448;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r3,r11,-20040
	ctx.r3.s64 = ctx.r11.s64 + -20040;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,22
	ctx.r5.s64 = 22;
	// bl 0x822e1828
	ctx.lr = 0x82110BA8;
	sub_822E1828(ctx, base);
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-11452(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11452, ctx.r3.u32);
	// addi r3,r7,-20068
	ctx.r3.s64 = ctx.r7.s64 + -20068;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82110BD4;
	sub_822E1660(ctx, base);
	// lis r6,-32167
	ctx.r6.s64 = -2108096512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r5,-20096
	ctx.r3.s64 = ctx.r5.s64 + -20096;
	// stw r11,-11580(r6)
	PPC_STORE_U32(ctx.r6.u32 + -11580, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x82110C00;
	sub_822E1660(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-11556(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11556, ctx.r3.u32);
	// addi r3,r9,-20112
	ctx.r3.s64 = ctx.r9.s64 + -20112;
	// lfs f29,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,8664(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x82110C34;
	sub_822E1660(ctx, base);
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r3,-11548(r7)
	PPC_STORE_U32(ctx.r7.u32 + -11548, ctx.r3.u32);
	// addi r3,r5,-20128
	ctx.r3.s64 = ctx.r5.s64 + -20128;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,12240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82110C60;
	sub_822E1660(ctx, base);
	// lis r4,-32167
	ctx.r4.s64 = -2108096512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r3,-20148
	ctx.r3.s64 = ctx.r3.s64 + -20148;
	// stw r11,-11492(r4)
	PPC_STORE_U32(ctx.r4.u32 + -11492, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82110C84;
	sub_822E15D0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-20224
	ctx.r8.s64 = ctx.r10.s64 + -20224;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,-11508(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11508, ctx.r3.u32);
	// addi r3,r9,-20252
	ctx.r3.s64 = ctx.r9.s64 + -20252;
	// li r6,10000
	ctx.r6.s64 = 10000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// bl 0x822e1618
	ctx.lr = 0x82110CB0;
	sub_822E1618(ctx, base);
	// stw r3,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,-20280
	ctx.r3.s64 = ctx.r7.s64 + -20280;
	// addi r8,r8,-20368
	ctx.r8.s64 = ctx.r8.s64 + -20368;
	// li r7,68
	ctx.r7.s64 = 68;
	// li r6,10000
	ctx.r6.s64 = 10000;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,250
	ctx.r4.s64 = 250;
	// bl 0x822e1618
	ctx.lr = 0x82110CD8;
	sub_822E1618(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,304(r29)
	PPC_STORE_U32(ctx.r29.u32 + 304, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,3740(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 3740);
	ctx.f27.f64 = double(temp.f32);
	// addi r8,r3,-20396
	ctx.r8.s64 = ctx.r3.s64 + -20396;
	// lfs f26,6020(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6020);
	ctx.f26.f64 = double(temp.f32);
	// addi r3,r11,-20408
	ctx.r3.s64 = ctx.r11.s64 + -20408;
	// lfs f1,5100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5100);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x82110D14;
	sub_822E1660(ctx, base);
	// stw r3,-11584(r30)
	PPC_STORE_U32(ctx.r30.u32 + -11584, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// addi r3,r7,-20428
	ctx.r3.s64 = ctx.r7.s64 + -20428;
	// addi r8,r9,-20460
	ctx.r8.s64 = ctx.r9.s64 + -20460;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,-20412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20412);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82110D40;
	sub_822E1660(ctx, base);
	// stw r3,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r3,r5,-20480
	ctx.r3.s64 = ctx.r5.s64 + -20480;
	// addi r6,r6,-20536
	ctx.r6.s64 = ctx.r6.s64 + -20536;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x82110D60;
	sub_822E15D0(ctx, base);
	// stw r3,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r4,-20560
	ctx.r3.s64 = ctx.r4.s64 + -20560;
	// addi r6,r11,-20596
	ctx.r6.s64 = ctx.r11.s64 + -20596;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82110D80;
	sub_822E15D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// addi r7,r9,-20636
	ctx.r7.s64 = ctx.r9.s64 + -20636;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,-20600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20600);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r8,-20676
	ctx.r3.s64 = ctx.r8.s64 + -20676;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x822e1790
	ctx.lr = 0x82110DC0;
	sub_822E1790(ctx, base);
	// stw r3,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f1,-20680(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -20680);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r5,-20704
	ctx.r8.s64 = ctx.r5.s64 + -20704;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r4,-20732
	ctx.r3.s64 = ctx.r4.s64 + -20732;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110DEC;
	sub_822E1660(ctx, base);
	// stw r3,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r7,-20760
	ctx.r3.s64 = ctx.r7.s64 + -20760;
	// addi r8,r9,-20808
	ctx.r8.s64 = ctx.r9.s64 + -20808;
	// lfs f3,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-20736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20736);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82110E1C;
	sub_822E1660(ctx, base);
	// stw r3,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-20844
	ctx.r8.s64 = ctx.r5.s64 + -20844;
	// addi r3,r4,-20872
	ctx.r3.s64 = ctx.r4.s64 + -20872;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f3,7540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7540);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x82110E48;
	sub_822E1660(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r3,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-20912
	ctx.r8.s64 = ctx.r11.s64 + -20912;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r10,-20940
	ctx.r3.s64 = ctx.r10.s64 + -20940;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110E70;
	sub_822E1660(ctx, base);
	// stw r3,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r7,-20972
	ctx.r3.s64 = ctx.r7.s64 + -20972;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r9,-21032
	ctx.r8.s64 = ctx.r9.s64 + -21032;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110E98;
	sub_822E1660(ctx, base);
	// stw r3,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r10,r5,-21076
	ctx.r10.s64 = ctx.r5.s64 + -21076;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r4,-21104
	ctx.r3.s64 = ctx.r4.s64 + -21104;
	// lfs f28,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// bl 0x822e16f0
	ctx.lr = 0x82110ED0;
	sub_822E16F0(ctx, base);
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r10,r10,-21180
	ctx.r10.s64 = ctx.r10.s64 + -21180;
	// addi r3,r8,-21136
	ctx.r3.s64 = ctx.r8.s64 + -21136;
	// lfs f1,-21108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x82110F04;
	sub_822E16F0(ctx, base);
	// stw r3,40(r29)
	PPC_STORE_U32(ctx.r29.u32 + 40, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r8,r6,-21212
	ctx.r8.s64 = ctx.r6.s64 + -21212;
	// addi r3,r5,-21244
	ctx.r3.s64 = ctx.r5.s64 + -21244;
	// lfs f3,7932(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7932);
	ctx.f3.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x82110F30;
	sub_822E1660(ctx, base);
	// stw r3,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r3.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// addi r3,r3,-21256
	ctx.r3.s64 = ctx.r3.s64 + -21256;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r9,8193
	ctx.r9.s64 = 8193;
	// lfs f4,6688(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6688);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x82110F60;
	sub_822E16F0(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// stw r3,-11488(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11488, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x82110F74;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82110A70) {
	__imp__sub_82110A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110F78) {
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
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82110fbc
	if (ctx.cr6.eq) goto loc_82110FBC;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x82110fbc
	if (ctx.cr6.eq) goto loc_82110FBC;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82110FBC:
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFC00;
	// rlwinm r9,r9,0,20,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addi r4,r11,264
	ctx.r4.s64 = ctx.r11.s64 + 264;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// b 0x82321140
	sub_82321140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82110F78) {
	__imp__sub_82110F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82110FDC) {
	__imp__sub_82110FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82110FE0) {
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
	// bl 0x823de01c
	ctx.lr = 0x82110FF8;
	__savefpr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r5,208(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// beq cr6,0x82111020
	if (ctx.cr6.eq) goto loc_82111020;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-19648
	ctx.r4.s64 = ctx.r11.s64 + -19648;
	// bl 0x82280c30
	ctx.lr = 0x82111020;
	sub_82280C30(ctx, base);
loc_82111020:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r8,-32167
	ctx.r8.s64 = -2108096512;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r9,-11496(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11496);
	// lwz r11,-11576(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11576);
	// lwz r10,-11468(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11468);
	// lfs f10,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f29.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x8211106c
	if (!ctx.cr6.lt) goto loc_8211106C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8211106C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// bgt cr6,0x82111080
	if (ctx.cr6.gt) goto loc_82111080;
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
loc_82111080:
	// lfs f12,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f7,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsqrts f12,f4
	ctx.f12.f64 = double(float(sqrt(ctx.f4.f64)));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821110ac
	if (!ctx.cr6.lt) goto loc_821110AC;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// b 0x821110b8
	goto loc_821110B8;
loc_821110AC:
	// fcmpu cr6,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x821110b8
	if (!ctx.cr6.gt) goto loc_821110B8;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_821110B8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fdivs f12,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,2180
	ctx.r9.u64 = ctx.r11.u64 | 2180;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lfs f13,5816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5816);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fsel f4,f8,f11,f12
	ctx.f4.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fneg f3,f12
	ctx.f3.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fsel f26,f3,f10,f4
	ctx.f26.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// fmuls f25,f2,f13
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f1,f25,f9
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f9.f64));
	// bl 0x823de720
	ctx.lr = 0x8211110C;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addis r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 131072;
	// fmuls f1,f25,f28
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// addi r5,r5,18316
	ctx.r5.s64 = ctx.r5.s64 + 18316;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmadds f11,f12,f31,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bl 0x823de720
	ctx.lr = 0x82111130;
	sub_823DE720(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// addis r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 131072;
	// fmuls f1,f25,f27
	ctx.f1.f64 = double(float(ctx.f25.f64 * ctx.f27.f64));
	// addi r4,r4,18320
	ctx.r4.s64 = ctx.r4.s64 + 18320;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f26
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmadds f7,f8,f30,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// bl 0x823de720
	ctx.lr = 0x82111154;
	sub_823DE720(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// addis r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 131072;
	// addi r3,r3,18324
	ctx.r3.s64 = ctx.r3.s64 + 18324;
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f26
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// fmadds f3,f4,f29,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f5.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x8211117C;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82110FE0) {
	__imp__sub_82110FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82111198;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// addis r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 65536;
	// addi r11,r8,-5696
	ctx.r11.s64 = ctx.r8.s64 + -5696;
	// addi r27,r27,22924
	ctx.r27.s64 = ctx.r27.s64 + 22924;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,392(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,380(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82111204
	if (!ctx.cr6.eq) goto loc_82111204;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r11,-19504
	ctx.r4.s64 = ctx.r11.s64 + -19504;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x821111F8;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82111204:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82111210;
	sub_82284650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82111240
	if (!ctx.cr6.eq) goto loc_82111240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,392(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 392);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-19564
	ctx.r4.s64 = ctx.r11.s64 + -19564;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x82111234;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82111240:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addis r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 131072;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// addi r29,r29,2116
	ctx.r29.s64 = ctx.r29.s64 + 2116;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,222(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 222);
	// bl 0x820ee1e0
	ctx.lr = 0x82111264;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82111284
	if (!ctx.cr6.eq) goto loc_82111284;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lhz r5,218(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 218);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee078
	ctx.lr = 0x82111284;
	sub_820EE078(ctx, base);
loc_82111284:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82111190) {
	__imp__sub_82111190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82111294) {
	__imp__sub_82111294(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821112A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82111324
	if (ctx.cr6.eq) goto loc_82111324;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x821112F0;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111324
	if (ctx.cr6.eq) goto loc_82111324;
	// lwz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// addi r3,r11,2952
	ctx.r3.s64 = ctx.r11.s64 + 2952;
	// bl 0x821201a0
	ctx.lr = 0x82111308;
	sub_821201A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82111330
	if (!ctx.cr6.eq) goto loc_82111330;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-19272
	ctx.r4.s64 = ctx.r11.s64 + -19272;
	// bl 0x82280c30
	ctx.lr = 0x82111324;
	sub_82280C30(ctx, base);
loc_82111324:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82111330:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a1810
	ctx.lr = 0x82111338;
	sub_822A1810(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82111364
	if (!ctx.cr6.eq) goto loc_82111364;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-19352
	ctx.r4.s64 = ctx.r11.s64 + -19352;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x82111358;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82111364:
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r28,r28,2116
	ctx.r28.s64 = ctx.r28.s64 + 2116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ee078
	ctx.lr = 0x82111380;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821113c8
	if (!ctx.cr6.eq) goto loc_821113C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lhz r6,334(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-19432
	ctx.r4.s64 = ctx.r11.s64 + -19432;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x821113A0;
	sub_82280C30(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r5,218(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 218);
	// bl 0x820ee078
	ctx.lr = 0x821113C0;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82111324
	if (ctx.cr6.eq) goto loc_82111324;
loc_821113C8:
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r28,r28,-3711
	ctx.r28.s64 = ctx.r28.s64 + -3711;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r29,r11,61828
	ctx.r29.u64 = ctx.r11.u64 | 61828;
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821113f8
	if (!ctx.cr6.eq) goto loc_821113F8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r29
	ctx.r4.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x822d7c78
	ctx.lr = 0x821113F4;
	sub_822D7C78(ctx, base);
	// stb r27,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r27.u8);
loc_821113F8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8211fa80
	ctx.lr = 0x82111400;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x8211f9e8
	ctx.lr = 0x82111410;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82111430
	if (ctx.cr6.eq) goto loc_82111430;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r10,r11,22908
	ctx.r10.u64 = ctx.r11.u64 | 22908;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lwzx r5,r31,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82321f30
	ctx.lr = 0x82111430;
	sub_82321F30(ctx, base);
loc_82111430:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfsx f0,r31,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lbz r9,208(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// addi r11,r11,18316
	ctx.r11.s64 = ctx.r11.s64 + 18316;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bne cr6,0x82111478
	if (!ctx.cr6.eq) goto loc_82111478;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110fe0
	ctx.lr = 0x8211146C;
	sub_82110FE0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61824
	ctx.r10.u64 = ctx.r11.u64 | 61824;
	// stbx r27,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
loc_82111478:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82111298) {
	__imp__sub_82111298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82111484) {
	__imp__sub_82111484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111488) {
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821114e4
	if (ctx.cr6.eq) goto loc_821114E4;
	// bl 0x82111190
	ctx.lr = 0x821114C8;
	sub_82111190(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821114E4:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82111514
	if (ctx.cr6.eq) goto loc_82111514;
	// bl 0x82111298
	ctx.lr = 0x821114F8;
	sub_82111298(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82111514:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111488) {
	__imp__sub_82111488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82111544
	if (!ctx.cr6.eq) goto loc_82111544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82111544:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111528) {
	__imp__sub_82111528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211154C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211154C) {
	__imp__sub_8211154C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8211159c
	if (!ctx.cr6.eq) goto loc_8211159C;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211159c
	if (!ctx.cr6.eq) goto loc_8211159C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82111594
	if (!ctx.cr6.eq) goto loc_82111594;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82111594:
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8211159C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111550) {
	__imp__sub_82111550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821115A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821115B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821115e0
	if (!ctx.cr6.eq) goto loc_821115E0;
loc_821115D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821115E0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821115fc
	if (ctx.cr6.eq) goto loc_821115FC;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821115d0
	if (ctx.cr6.eq) goto loc_821115D0;
loc_821115FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211fa80
	ctx.lr = 0x82111604;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8211f9e8
	ctx.lr = 0x82111614;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821119e0
	if (ctx.cr6.eq) goto loc_821119E0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// ori r3,r8,61924
	ctx.r3.u64 = ctx.r8.u64 | 61924;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// lfs f0,-29228(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29228);
	ctx.f0.f64 = double(temp.f32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// mullw r10,r31,r3
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f7,f0
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r8,r8,23020
	ctx.r8.s64 = ctx.r8.s64 + 23020;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// addi r30,r11,-11260
	ctx.r30.s64 = ctx.r11.s64 + -11260;
	// lis r26,-32167
	ctx.r26.s64 = -2108096512;
	// lfs f4,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r28,-32167
	ctx.r28.s64 = -2108096512;
	// lfs f3,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lfs f2,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lwz r9,-11264(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11264);
	// fadds f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f13.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f12.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// beq cr6,0x821116fc
	if (ctx.cr6.eq) goto loc_821116FC;
	// stw r11,-11264(r10)
	PPC_STORE_U32(ctx.r10.u32 + -11264, ctx.r11.u32);
	// bl 0x82310110
	ctx.lr = 0x821116F0;
	sub_82310110(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,-11272(r28)
	PPC_STORE_U32(ctx.r28.u32 + -11272, ctx.r3.u32);
	// stw r11,-11268(r26)
	PPC_STORE_U32(ctx.r26.u32 + -11268, ctx.r11.u32);
loc_821116FC:
	// bl 0x82310110
	ctx.lr = 0x82111700;
	sub_82310110(ctx, base);
	// lwz r11,-11272(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11272);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// stw r3,-11272(r28)
	PPC_STORE_U32(ctx.r28.u32 + -11272, ctx.r3.u32);
	// addi r29,r29,18316
	ctx.r29.s64 = ctx.r29.s64 + 18316;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r11,28804(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28804);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r28,r28,2128
	ctx.r28.s64 = ctx.r28.s64 + 2128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,-23144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f31,f7,f0
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// bl 0x822da650
	ctx.lr = 0x82111774;
	sub_822DA650(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f6,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lbz r3,123(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 123);
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// lbz r6,125(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 125);
	// ori r10,r4,22952
	ctx.r10.u64 = ctx.r4.u64 | 22952;
	// lfs f0,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 124);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lbz r8,122(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f13,f6,f3
	ctx.f13.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// fmsubs f11,f2,f0,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fsubs f12,f3,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f7,f12,f0,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f10.f64));
	// fsubs f9,f13,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsubs f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// bne cr6,0x82111804
	if (!ctx.cr6.eq) goto loc_82111804;
	// extsb r9,r8
	ctx.r9.s64 = ctx.r8.s8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82111804
	if (!ctx.cr6.eq) goto loc_82111804;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82111804
	if (!ctx.cr6.eq) goto loc_82111804;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82111804
	if (!ctx.cr6.eq) goto loc_82111804;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-11268(r26)
	PPC_STORE_U32(ctx.r26.u32 + -11268, ctx.r11.u32);
	// b 0x82111984
	goto loc_82111984;
loc_82111804:
	// lwz r9,-11268(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -11268);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82111818
	if (!ctx.cr6.eq) goto loc_82111818;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r27,-11268(r26)
	PPC_STORE_U32(ctx.r26.u32 + -11268, ctx.r27.u32);
loc_82111818:
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f10,6040(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6040);
	ctx.f10.f64 = double(temp.f32);
	// beq cr6,0x82111870
	if (ctx.cr6.eq) goto loc_82111870;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfsx f6,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// add r5,r31,r10
	ctx.r5.u64 = ctx.r31.u64 + ctx.r10.u64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmadds f12,f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfsx f12,r31,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f13,f1,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f11,f1,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f3,8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
loc_82111870:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821118c0
	if (ctx.cr6.eq) goto loc_821118C0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f4,f9,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfsx f3,r31,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f2,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f8,f4,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f2.f64));
	// stfs f1,4(r8)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f7,f4,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f13.f64));
	// stfs f12,8(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_821118C0:
	// subf r11,r9,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r9.s64;
	// cmpwi cr6,r11,250
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 250, ctx.xer);
	// bge cr6,0x821118d8
	if (!ctx.cr6.lt) goto loc_821118D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
loc_821118D8:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211192c
	if (ctx.cr6.eq) goto loc_8211192C;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfsx f5,r31,r10
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f2,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_8211192C:
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111984
	if (ctx.cr6.eq) goto loc_82111984;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lfsx f13,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfsx f5,r31,r10
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f4,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f2,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,8(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_82111984:
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfsx f11,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// ori r7,r9,23204
	ctx.r7.u64 = ctx.r9.u64 | 23204;
	// addi r8,r8,2124
	ctx.r8.s64 = ctx.r8.s64 + 2124;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,0(r8)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_821119E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821115A8) {
	__imp__sub_821115A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821119F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// ori r7,r10,22952
	ctx.r7.u64 = ctx.r10.u64 | 22952;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// ori r5,r9,22956
	ctx.r5.u64 = ctx.r9.u64 | 22956;
	// ori r4,r6,22960
	ctx.r4.u64 = ctx.r6.u64 | 22960;
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821119F0) {
	__imp__sub_821119F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// ori r6,r10,18316
	ctx.r6.u64 = ctx.r10.u64 | 18316;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r5,r8,18320
	ctx.r5.u64 = ctx.r8.u64 | 18320;
	// ori r4,r7,18324
	ctx.r4.u64 = ctx.r7.u64 | 18324;
	// lfsx f0,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r3,23020
	ctx.r8.u64 = ctx.r3.u64 | 23020;
	// lfsx f13,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfsx f0,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// ori r6,r11,23024
	ctx.r6.u64 = ctx.r11.u64 | 23024;
	// ori r4,r10,23028
	ctx.r4.u64 = ctx.r10.u64 | 23028;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfsx f0,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r11,r7,23020
	ctx.r11.u64 = ctx.r7.u64 | 23020;
	// lfsx f13,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// ori r10,r5,23024
	ctx.r10.u64 = ctx.r5.u64 | 23024;
	// lfsx f12,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// ori r8,r3,23028
	ctx.r8.u64 = ctx.r3.u64 | 23028;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f12,r9,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111A40) {
	__imp__sub_82111A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82111AF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82111b40
	if (ctx.cr6.eq) goto loc_82111B40;
loc_82111B18:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82284650
	ctx.lr = 0x82111B24;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111b34
	if (ctx.cr6.eq) goto loc_82111B34;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ecb60
	ctx.lr = 0x82111B34;
	sub_820ECB60(ctx, base);
loc_82111B34:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x82111b18
	if (!ctx.cr0.eq) goto loc_82111B18;
loc_82111B40:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r30,r28,16
	ctx.r30.s64 = ctx.r28.s64 + 16;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
loc_82111B58:
	// lbz r10,29088(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82111b84
	if (!ctx.cr6.eq) goto loc_82111B84;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// subfc r9,r11,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r31.s64 - ctx.r11.s64;
	// eqv r8,r11,r31
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r31.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// b 0x82111b94
	goto loc_82111B94;
loc_82111B84:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_82111B94:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82111bbc
	if (ctx.cr6.eq) goto loc_82111BBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x82111BAC;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82111bbc
	if (ctx.cr6.eq) goto loc_82111BBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820ecb60
	ctx.lr = 0x82111BBC;
	sub_820ECB60(ctx, base);
loc_82111BBC:
	// addi r30,r30,9780
	ctx.r30.s64 = ctx.r30.s64 + 9780;
	// addi r11,r28,19576
	ctx.r11.s64 = ctx.r28.s64 + 19576;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82111b58
	if (ctx.cr6.lt) goto loc_82111B58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82111AF0) {
	__imp__sub_82111AF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111BD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82141490
	ctx.lr = 0x82111BF0;
	sub_82141490(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82141398
	ctx.lr = 0x82111BF8;
	sub_82141398(ctx, base);
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// bl 0x82141398
	ctx.lr = 0x82111C00;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82111c20
	if (!ctx.cr6.eq) goto loc_82111C20;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82111c38
	goto loc_82111C38;
loc_82111C20:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r10,664
	ctx.r10.s64 = ctx.r10.s64 + 664;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82111C38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111BD8) {
	__imp__sub_82111BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addis r5,r3,2
	ctx.r5.s64 = ctx.r3.s64 + 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,18468
	ctx.r5.s64 = ctx.r5.s64 + 18468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82111C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,36
	ctx.r4.s64 = 36;
	// addi r5,r5,18472
	ctx.r5.s64 = ctx.r5.s64 + 18472;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82111CA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r5,18508
	ctx.r5.s64 = ctx.r5.s64 + 18508;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82111CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r5,18512
	ctx.r5.s64 = ctx.r5.s64 + 18512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82111CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111C50) {
	__imp__sub_82111C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82111CF4) {
	__imp__sub_82111CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82111D00;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,664
	ctx.r11.s64 = ctx.r11.s64 + 664;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82111dbc
	if (!ctx.cr6.eq) goto loc_82111DBC;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// bne cr6,0x82111d80
	if (!ctx.cr6.eq) goto loc_82111D80;
	// addi r9,r11,-11560
	ctx.r9.s64 = ctx.r11.s64 + -11560;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,60(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82111dbc
	goto loc_82111DBC;
loc_82111D80:
	// addi r8,r11,-11560
	ctx.r8.s64 = ctx.r11.s64 + -11560;
	// lwz r10,-11560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11560);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82111DBC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8211f990
	ctx.lr = 0x82111DCC;
	sub_8211F990(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// fdivs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r9,-16984
	ctx.r11.s64 = ctx.r9.s64 + -16984;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmadds f9,f12,f2,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f8,f10,f2,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f1,f13,f4,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmadds f13,f11,f4,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fmuls f11,f3,f6
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// fctiwz f5,f9
	ctx.f5.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// fctiwz f4,f8
	ctx.f4.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// fctiwz f7,f1
	ctx.f7.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfiwx f7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f7.u32);
	// fctiwz f6,f13
	ctx.f6.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// li r12,4
	ctx.r12.s64 = 4;
	// stfiwx f5,r30,r12
	PPC_STORE_U32(ctx.r30.u32 + ctx.r12.u32, ctx.f5.u32);
	// li r12,8
	ctx.r12.s64 = 8;
	// stfiwx f6,r30,r12
	PPC_STORE_U32(ctx.r30.u32 + ctx.r12.u32, ctx.f6.u32);
	// li r12,12
	ctx.r12.s64 = 12;
	// stfiwx f4,r30,r12
	PPC_STORE_U32(ctx.r30.u32 + ctx.r12.u32, ctx.f4.u32);
	// beq cr6,0x82111e88
	if (ctx.cr6.eq) goto loc_82111E88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82111E88:
	// bl 0x82387988
	ctx.lr = 0x82111E8C;
	sub_82387988(ctx, base);
	// lis r11,-32153
	ctx.r11.s64 = -2107179008;
	// mulli r10,r29,108
	ctx.r10.s64 = ctx.r29.s64 * 108;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-17240
	ctx.r11.s64 = ctx.r11.s64 + -17240;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82140378
	ctx.lr = 0x82111EB0;
	sub_82140378(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82111CF8) {
	__imp__sub_82111CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111EB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r31,22952
	ctx.r31.s64 = ctx.r31.s64 + 22952;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,-19192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r10,-27184
	ctx.r6.s64 = ctx.r10.s64 + -27184;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x8211ecc0
	ctx.lr = 0x82111F1C;
	sub_8211ECC0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82111f48
	if (ctx.cr6.lt) goto loc_82111F48;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,2088
	ctx.r9.u64 = ctx.r11.u64 | 2088;
	// lfs f0,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r30,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, temp.u32);
	// b 0x82111f74
	goto loc_82111F74;
loc_82111F48:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// ori r9,r11,22960
	ctx.r9.u64 = ctx.r11.u64 | 22960;
	// ori r8,r10,2088
	ctx.r8.u64 = ctx.r10.u64 | 2088;
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f13,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// stfsx f8,r30,r8
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
loc_82111F74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111EB8) {
	__imp__sub_82111EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82111F8C) {
	__imp__sub_82111F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82111F90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lwz r11,-30032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30032);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82112014
	if (ctx.cr6.lt) goto loc_82112014;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82112014
	if (!ctx.cr6.eq) goto loc_82112014;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82111fe4
	if (!ctx.cr6.eq) goto loc_82111FE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211ba40
	ctx.lr = 0x82111FE0;
	sub_8211BA40(ctx, base);
	// b 0x82112014
	goto loc_82112014;
loc_82111FE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82284650
	ctx.lr = 0x82111FEC;
	sub_82284650(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112014
	if (ctx.cr6.eq) goto loc_82112014;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-19188
	ctx.r3.s64 = ctx.r11.s64 + -19188;
	// bl 0x822e84f0
	ctx.lr = 0x82112008;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f7138
	ctx.lr = 0x82112014;
	sub_822F7138(ctx, base);
loc_82112014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82111F90) {
	__imp__sub_82111F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211202C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211202C) {
	__imp__sub_8211202C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112030) {
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
	// lwz r3,-30200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30200);
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82112074
	if (ctx.cr6.lt) goto loc_82112074;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1f80
	ctx.lr = 0x8211205C;
	sub_822E1F80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82284650
	ctx.lr = 0x82112068;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112074
	if (ctx.cr6.eq) goto loc_82112074;
	// bl 0x822f0510
	ctx.lr = 0x82112074;
	sub_822F0510(ctx, base);
loc_82112074:
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

PPC_WEAK_FUNC(sub_82112030) {
	__imp__sub_82112030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112088) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8211bbf0
	ctx.lr = 0x821120A0;
	sub_8211BBF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821120c4
	if (ctx.cr6.eq) goto loc_821120C4;
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
loc_821120C4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23096
	ctx.r10.u64 = ctx.r11.u64 | 23096;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821120f4
	if (ctx.cr6.eq) goto loc_821120F4;
loc_821120DC:
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
loc_821120F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7018
	ctx.lr = 0x82112100;
	sub_820E7018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821120dc
	if (ctx.cr6.eq) goto loc_821120DC;
	// addis r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x8211211C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x82112128;
	sub_82332C28(ctx, base);
	// lbz r11,1659(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1659);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82112088) {
	__imp__sub_82112088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112148) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r7,r9,22940
	ctx.r7.s64 = ctx.r9.s64 + 22940;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r5,r6,22,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82112198
	if (ctx.cr6.eq) goto loc_82112198;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82112198:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22940
	ctx.r10.u64 = ctx.r11.u64 | 22940;
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821121c4
	if (ctx.cr6.eq) goto loc_821121C4;
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
loc_821121C4:
	// bl 0x82112088
	ctx.lr = 0x821121C8;
	sub_82112088(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82112148) {
	__imp__sub_82112148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821121E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821121E4) {
	__imp__sub_821121E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821121E8) {
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82112088
	ctx.lr = 0x82112218;
	sub_82112088(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82112248
	if (ctx.cr6.eq) goto loc_82112248;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// addi r10,r11,-11280
	ctx.r10.s64 = ctx.r11.s64 + -11280;
	// lwz r11,-232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -232);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
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
loc_82112248:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22940
	ctx.r10.u64 = ctx.r11.u64 | 22940;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82112280
	if (ctx.cr6.eq) goto loc_82112280;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11280(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11280);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
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
loc_82112280:
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

PPC_WEAK_FUNC(sub_821121E8) {
	__imp__sub_821121E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821122A0;
	__savegprlr_29(ctx, base);
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
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addis r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 196608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r29,-3672
	ctx.r29.s64 = ctx.r29.s64 + -3672;
	// lwz r10,-19416(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19416);
	// lbz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821122e8
	if (!ctx.cr6.eq) goto loc_821122E8;
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82112368
	if (ctx.cr6.eq) goto loc_82112368;
loc_821122E8:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// ori r7,r9,58116
	ctx.r7.u64 = ctx.r9.u64 | 58116;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r31,16(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// beq cr6,0x82112338
	if (ctx.cr6.eq) goto loc_82112338;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210abe0
	ctx.lr = 0x8211230C;
	sub_8210ABE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82112338
	if (!ctx.cr6.gt) goto loc_82112338;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x8211232c
	if (!ctx.cr6.eq) goto loc_8211232C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210ae30
	ctx.lr = 0x82112324;
	sub_8210AE30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8211232C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// beq cr6,0x8211233c
	if (ctx.cr6.eq) goto loc_8211233C;
loc_82112338:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8211233C:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211235c
	if (ctx.cr6.eq) goto loc_8211235C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821121e8
	ctx.lr = 0x82112350;
	sub_821121E8(ctx, base);
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x8211235c
	if (!ctx.cr6.gt) goto loc_8211235C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8211235C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210ace8
	ctx.lr = 0x82112368;
	sub_8210ACE8(ctx, base);
loc_82112368:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82112298) {
	__imp__sub_82112298(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112370) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stw r3,-19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19420, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82112370) {
	__imp__sub_82112370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211237C) {
	__imp__sub_8211237C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82112388;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8211bb50
	ctx.lr = 0x8211239C;
	sub_8211BB50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821123f8
	if (!ctx.cr6.eq) goto loc_821123F8;
loc_821123A8:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-11584
	ctx.r9.s64 = ctx.r11.s64 + -11584;
	// ori r8,r10,23628
	ctx.r8.u64 = ctx.r10.u64 | 23628;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,-11584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11584);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// ori r5,r6,61844
	ctx.r5.u64 = ctx.r6.u64 | 61844;
	// lfsx f13,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmadds f8,f12,f11,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfsx f8,r31,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821123F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8211baf0
	ctx.lr = 0x82112400;
	sub_8211BAF0(ctx, base);
	// bl 0x82332af8
	ctx.lr = 0x82112404;
	sub_82332AF8(ctx, base);
	// lwz r11,796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 796);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821123a8
	if (!ctx.cr6.eq) goto loc_821123A8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8211fa80
	ctx.lr = 0x8211241C;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8211f9e8
	ctx.lr = 0x8211242C;
	sub_8211F9E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lbz r7,122(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 122);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,22908
	ctx.r9.u64 = ctx.r11.u64 | 22908;
	// lfs f10,1476(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1476);
	ctx.f10.f64 = double(temp.f32);
	// extsb r3,r7
	ctx.r3.s64 = ctx.r7.s8;
	// lfs f0,1480(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1480);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r6,r31,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// addi r29,r29,-3692
	ctx.r29.s64 = ctx.r29.s64 + -3692;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lfs f12,-19176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -19176);
	ctx.f12.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f31,f1,f10,f11
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x821124ac
	if (ctx.cr6.lt) goto loc_821124AC;
	// lfs f0,1484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x821124b0
	if (!ctx.cr6.gt) goto loc_821124B0;
loc_821124AC:
	// fmr f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f0.f64;
loc_821124B0:
	// fsubs f13,f31,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x821124dc
	if (!ctx.cr6.gt) goto loc_821124DC;
	// lwz r4,132(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821124dc
	if (ctx.cr6.eq) goto loc_821124DC;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820f9aa8
	ctx.lr = 0x821124DC;
	sub_820F9AA8(ctx, base);
loc_821124DC:
	// stfs f31,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82112380) {
	__imp__sub_82112380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821124EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821124EC) {
	__imp__sub_821124EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821124F0) {
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r7,r7,22924
	ctx.r7.s64 = ctx.r7.s64 + 22924;
	// ori r5,r8,2196
	ctx.r5.u64 = ctx.r8.u64 | 2196;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r3,r6,2200
	ctx.r3.u64 = ctx.r6.u64 | 2200;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r4,2204
	ctx.r9.u64 = ctx.r4.u64 | 2204;
	// lfs f0,1144(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stfsx f0,r11,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// ori r6,r10,2208
	ctx.r6.u64 = ctx.r10.u64 | 2208;
	// lfs f13,1148(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1148);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// stfsx f13,r11,r3
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// ori r4,r8,2212
	ctx.r4.u64 = ctx.r8.u64 | 2212;
	// lfs f12,1152(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1152);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// ori r3,r5,2216
	ctx.r3.u64 = ctx.r5.u64 | 2216;
	// lfs f11,1156(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1156);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r11,r6
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lfs f10,1160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1160);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r11,r4
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lfs f9,1164(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 1164);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r3
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821124F0) {
	__imp__sub_821124F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82112574) {
	__imp__sub_82112574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112578) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// addi r10,r10,2412
	ctx.r10.s64 = ctx.r10.s64 + 2412;
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r9,r11,2408
	ctx.r9.u64 = ctx.r11.u64 | 2408;
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// ori r6,r8,2400
	ctx.r6.u64 = ctx.r8.u64 | 2400;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r5,2404
	ctx.r4.u64 = ctx.r5.u64 | 2404;
	// lwzx r9,r3,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// lwzx r8,r3,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// stwx r9,r3,r4
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r8,r9,2413
	ctx.r8.u64 = ctx.r9.u64 | 2413;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stbx r11,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82112578) {
	__imp__sub_82112578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821125F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821125F4) {
	__imp__sub_821125F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821125F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82112600;
	__savegprlr_28(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// lis r7,-32167
	ctx.r7.s64 = -2108096512;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addi r5,r7,-11480
	ctx.r5.s64 = ctx.r7.s64 + -11480;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-11480(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11480);
	// ori r6,r8,22912
	ctx.r6.u64 = ctx.r8.u64 | 22912;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r9,-92(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + -92);
	// ori r30,r8,2413
	ctx.r30.u64 = ctx.r8.u64 | 2413;
	// lwz r8,-40(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + -40);
	// ori r3,r3,2412
	ctx.r3.u64 = ctx.r3.u64 | 2412;
	// lwzx r6,r11,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// ori r5,r7,2400
	ctx.r5.u64 = ctx.r7.u64 | 2400;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// ori r31,r31,2380
	ctx.r31.u64 = ctx.r31.u64 | 2380;
	// stbx r7,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u8);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// stbx r7,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u8);
	// ori r29,r29,2384
	ctx.r29.u64 = ctx.r29.u64 | 2384;
	// stwx r6,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r6.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r28,2368
	ctx.r6.u64 = ctx.r28.u64 | 2368;
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r3,2372
	ctx.r3.u64 = ctx.r3.u64 | 2372;
	// stfsx f13,r11,r29
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// ori r9,r7,2376
	ctx.r9.u64 = ctx.r7.u64 | 2376;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r11,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f11,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,6032(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f11,r11,r3
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// blt cr6,0x821126cc
	if (ctx.cr6.lt) goto loc_821126CC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,2408
	ctx.r9.u64 = ctx.r10.u64 | 2408;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821126CC:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r10,3000
	ctx.r10.s64 = 3000;
	// ori r8,r9,2408
	ctx.r8.u64 = ctx.r9.u64 | 2408;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821125F8) {
	__imp__sub_821125F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821126E0) {
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
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r3,r8,2412
	ctx.r3.u64 = ctx.r8.u64 | 2412;
	// ori r9,r7,2413
	ctx.r9.u64 = ctx.r7.u64 | 2413;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r8,r6,2408
	ctx.r8.u64 = ctx.r6.u64 | 2408;
	// ori r7,r5,2380
	ctx.r7.u64 = ctx.r5.u64 | 2380;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,5484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821126E0) {
	__imp__sub_821126E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112738) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// stw r3,11308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11308, ctx.r3.u32);
	// stw r4,11324(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11324, ctx.r4.u32);
	// stw r5,11320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11320, ctx.r5.u32);
	// bl 0x8210ca18
	ctx.lr = 0x82112764;
	sub_8210CA18(ctx, base);
	// bl 0x82389660
	ctx.lr = 0x82112768;
	sub_82389660(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820dce30
	ctx.lr = 0x82112770;
	sub_820DCE30(ctx, base);
	// bl 0x820f5bf0
	ctx.lr = 0x82112774;
	sub_820F5BF0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82198e80
	ctx.lr = 0x82112780;
	sub_82198E80(ctx, base);
	// bl 0x82141398
	ctx.lr = 0x82112784;
	sub_82141398(ctx, base);
	// bl 0x821a0340
	ctx.lr = 0x82112788;
	sub_821A0340(ctx, base);
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

PPC_WEAK_FUNC(sub_82112738) {
	__imp__sub_82112738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211279C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211279C) {
	__imp__sub_8211279C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821127A0) {
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
	// bl 0x82102e60
	ctx.lr = 0x821127B8;
	sub_82102E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d1c0
	ctx.lr = 0x821127C0;
	sub_8210D1C0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r31,r9
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820e67e0
	ctx.lr = 0x821127DC;
	sub_820E67E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82102f28
	ctx.lr = 0x821127E4;
	sub_82102F28(ctx, base);
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

PPC_WEAK_FUNC(sub_821127A0) {
	__imp__sub_821127A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821127F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r3,3
	ctx.r3.s64 = 3;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r4,r5,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82112830
	if (!ctx.cr6.eq) goto loc_82112830;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823669e8
	sub_823669E8(ctx, base);
	return;
loc_82112830:
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,-11452(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11452);
	// addi r6,r8,32448
	ctx.r6.s64 = ctx.r8.s64 + 32448;
	// lwz r10,-11556(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11556);
	// lwz r9,-11580(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11580);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f2,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// b 0x823668c0
	sub_823668C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821127F8) {
	__imp__sub_821127F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211286C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211286C) {
	__imp__sub_8211286C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112870) {
	PPC_FUNC_PROLOGUE();
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
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,18306
	ctx.r6.s64 = ctx.r11.s64 + 18306;
	// stbx r4,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82112870) {
	__imp__sub_82112870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82112894) {
	__imp__sub_82112894(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
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
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r8,r11,18340
	ctx.r8.s64 = ctx.r11.s64 + 18340;
	// li r9,7
	ctx.r9.s64 = 7;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821128C8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821128c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821128C8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82112898) {
	__imp__sub_82112898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821128D8) {
	PPC_FUNC_PROLOGUE();
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
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,18307
	ctx.r6.s64 = ctx.r11.s64 + 18307;
	// stbx r4,r7,r6
	PPC_STORE_U8(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821128D8) {
	__imp__sub_821128D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821128FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821128FC) {
	__imp__sub_821128FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 196608;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// addi r9,r9,-3688
	ctx.r9.s64 = ctx.r9.s64 + -3688;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lwz r8,-19408(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19408);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r5,-32181
	ctx.r5.s64 = -2109014016;
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r11,r5,-5696
	ctx.r11.s64 = ctx.r5.s64 + -5696;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82112968
	if (!ctx.cr6.eq) goto loc_82112968;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x822e1f80
	sub_822E1F80(ctx, base);
	return;
loc_82112968:
	// addis r5,r3,3
	ctx.r5.s64 = ctx.r3.s64 + 196608;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// addi r5,r5,-3684
	ctx.r5.s64 = ctx.r5.s64 + -3684;
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,12(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwz r11,-19408(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19408);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// stfs f6,8(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82112900) {
	__imp__sub_82112900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821129F8) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// ori r10,r11,23360
	ctx.r10.u64 = ctx.r11.u64 | 23360;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r9,r4,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82112a4c
	if (ctx.cr6.eq) goto loc_82112A4C;
	// bl 0x8212fa08
	ctx.lr = 0x82112A30;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112a9c
	if (!ctx.cr6.eq) goto loc_82112A9C;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212fa30
	ctx.lr = 0x82112A48;
	sub_8212FA30(ctx, base);
	// b 0x82112a68
	goto loc_82112A68;
loc_82112A4C:
	// bl 0x8212fa08
	ctx.lr = 0x82112A50;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82112a68
	if (ctx.cr6.eq) goto loc_82112A68;
	// li r4,-9
	ctx.r4.s64 = -9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8212fa50
	ctx.lr = 0x82112A68;
	sub_8212FA50(ctx, base);
loc_82112A68:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r4,r9,20024
	ctx.r4.u64 = ctx.r9.u64 | 20024;
	// ori r5,r10,20020
	ctx.r5.u64 = ctx.r10.u64 | 20020;
	// ori r6,r11,20016
	ctx.r6.u64 = ctx.r11.u64 | 20016;
	// lfs f13,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f13,r31,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
loc_82112A9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821129F8) {
	__imp__sub_821129F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82112AB4) {
	__imp__sub_82112AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112AB8) {
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
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r31,r31,18316
	ctx.r31.s64 = ctx.r31.s64 + 18316;
	// addi r11,r11,18328
	ctx.r11.s64 = ctx.r11.s64 + 18328;
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82112b58
	if (ctx.cr6.eq) goto loc_82112B58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82112b58
	if (ctx.cr6.eq) goto loc_82112B58;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82112b58
	if (!ctx.cr6.eq) goto loc_82112B58;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,2112
	ctx.r9.u64 = ctx.r10.u64 | 2112;
	// lwz r11,-11484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11484);
	// lfsx f0,r3,r9
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x823de8e0
	ctx.lr = 0x82112B3C;
	sub_823DE8E0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82112B58:
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

PPC_WEAK_FUNC(sub_82112AB8) {
	__imp__sub_82112AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82112B6C) {
	__imp__sub_82112B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82112B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82112B78;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r25,22924
	ctx.r25.s64 = ctx.r25.s64 + 22924;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lwz r7,16(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r6,r7,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82112bf0
	if (!ctx.cr6.eq) goto loc_82112BF0;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82112bf0
	if (!ctx.cr6.eq) goto loc_82112BF0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30004);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112be8
	if (!ctx.cr6.eq) goto loc_82112BE8;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82112bf8
	goto loc_82112BF8;
loc_82112BE8:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82112bf8
	goto loc_82112BF8;
loc_82112BF0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
loc_82112BF8:
	// addis r22,r31,1
	ctx.r22.s64 = ctx.r31.s64 + 65536;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r22,r22,22912
	ctx.r22.s64 = ctx.r22.s64 + 22912;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,2164
	ctx.r8.u64 = ctx.r11.u64 | 2164;
	// ori r6,r10,2180
	ctx.r6.u64 = ctx.r10.u64 | 2180;
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// ori r5,r9,18312
	ctx.r5.u64 = ctx.r9.u64 | 18312;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfsx f0,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stwx r7,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r18,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r18.u32);
	// bl 0x820dc7c0
	ctx.lr = 0x82112C34;
	sub_820DC7C0(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,-29968(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -29968);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82112c58
	if (ctx.cr6.eq) goto loc_82112C58;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82135698
	ctx.lr = 0x82112C54;
	sub_82135698(ctx, base);
	// b 0x82112c5c
	goto loc_82112C5C;
loc_82112C58:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
loc_82112C5C:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// mulli r10,r26,3712
	ctx.r10.s64 = ctx.r26.s64 * 3712;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// addis r23,r31,3
	ctx.r23.s64 = ctx.r31.s64 + 196608;
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r23,r23,-4436
	ctx.r23.s64 = ctx.r23.s64 + -4436;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfsx f13,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// ori r3,r7,2184
	ctx.r3.u64 = ctx.r7.u64 | 2184;
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lbz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// ori r11,r6,61824
	ctx.r11.u64 = ctx.r6.u64 | 61824;
	// ori r10,r5,18308
	ctx.r10.u64 = ctx.r5.u64 | 18308;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r18,r31,r11
	PPC_STORE_U8(ctx.r31.u32 + ctx.r11.u32, ctx.r18.u8);
	// stbx r4,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r4.u8);
	// fmadds f11,f31,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// stfsx f10,r31,r3
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, temp.u32);
	// beq cr6,0x82112d18
	if (ctx.cr6.eq) goto loc_82112D18;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,28(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// addi r10,r10,2124
	ctx.r10.s64 = ctx.r10.s64 + 2124;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,36(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f11,280(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// bl 0x8239ec30
	ctx.lr = 0x82112D08;
	sub_8239EC30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_82112D18:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8210f370
	ctx.lr = 0x82112D20;
	sub_8210F370(ctx, base);
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// addis r24,r31,2
	ctx.r24.s64 = ctx.r31.s64 + 131072;
	// addi r27,r27,18368
	ctx.r27.s64 = ctx.r27.s64 + 18368;
	// addi r24,r24,18380
	ctx.r24.s64 = ctx.r24.s64 + 18380;
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r28,r28,18392
	ctx.r28.s64 = ctx.r28.s64 + 18392;
	// addi r30,r25,28
	ctx.r30.s64 = ctx.r25.s64 + 28;
	// addi r29,r25,264
	ctx.r29.s64 = ctx.r25.s64 + 264;
	// lfs f0,28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f12,36(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f11,28(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r24)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f10,32(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r24)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f9,36(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// lfs f8,264(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f7,268(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 268);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,4(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f6,272(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 272);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,8(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// bl 0x82327da8
	ctx.lr = 0x82112D94;
	sub_82327DA8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r10,r11,19912
	ctx.r10.u64 = ctx.r11.u64 | 19912;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// stfsx f1,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x821115a8
	ctx.lr = 0x82112DAC;
	sub_821115A8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r21,r8,2116
	ctx.r21.u64 = ctx.r8.u64 | 2116;
	// ori r20,r7,18316
	ctx.r20.u64 = ctx.r7.u64 | 18316;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82112fd0
	if (!ctx.cr6.eq) goto loc_82112FD0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8234c700
	ctx.lr = 0x82112DD0;
	sub_8234C700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112de4
	if (!ctx.cr6.eq) goto loc_82112DE4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82110310
	ctx.lr = 0x82112DE4;
	sub_82110310(ctx, base);
loc_82112DE4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82110f78
	ctx.lr = 0x82112DEC;
	sub_82110F78(ctx, base);
	// add r5,r31,r21
	ctx.r5.u64 = ctx.r31.u64 + ctx.r21.u64;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r21
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r21.u32, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112e40
	if (!ctx.cr6.eq) goto loc_82112E40;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22928
	ctx.r10.u64 = ctx.r11.u64 | 22928;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82112e38
	if (ctx.cr6.eq) goto loc_82112E38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82112e38
	if (ctx.cr6.eq) goto loc_82112E38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82112e40
	if (!ctx.cr6.eq) goto loc_82112E40;
loc_82112E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210f408
	ctx.lr = 0x82112E40;
	sub_8210F408(ctx, base);
loc_82112E40:
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r20
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82112f68
	if (ctx.cr6.eq) goto loc_82112F68;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82112f68
	if (ctx.cr6.eq) goto loc_82112F68;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30020);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82112f68
	if (!ctx.cr6.gt) goto loc_82112F68;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,2064
	ctx.r11.s64 = ctx.r11.s64 + 2064;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x82112f64
	if (!ctx.cr6.gt) goto loc_82112F64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82112f64
	if (!ctx.cr6.lt) goto loc_82112F64;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r11,r11,2068
	ctx.r11.s64 = ctx.r11.s64 + 2068;
	// lwz r10,-29940(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29940);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f1,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f1,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f9,4(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f1,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f6,8(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82112f68
	if (ctx.cr6.eq) goto loc_82112F68;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f13,f1
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f2,f12,f1
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// li r3,17
	ctx.r3.s64 = 17;
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// addi r4,r10,-19172
	ctx.r4.s64 = ctx.r10.s64 + -19172;
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x82112F60;
	sub_82280900(ctx, base);
	// b 0x82112f68
	goto loc_82112F68;
loc_82112F64:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_82112F68:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82110018
	ctx.lr = 0x82112F70;
	sub_82110018(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82112f90
	if (!ctx.cr6.eq) goto loc_82112F90;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82112f9c
	if (ctx.cr6.eq) goto loc_82112F9C;
loc_82112F90:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82111488
	ctx.lr = 0x82112F98;
	sub_82111488(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_82112F9C:
	// clrlwi r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82112fc4
	if (!ctx.cr6.eq) goto loc_82112FC4;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,61825
	ctx.r10.u64 = ctx.r11.u64 | 61825;
	// stbx r18,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r18.u8);
	// bl 0x8210f720
	ctx.lr = 0x82112FBC;
	sub_8210F720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112ab8
	ctx.lr = 0x82112FC4;
	sub_82112AB8(ctx, base);
loc_82112FC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820dcbd8
	ctx.lr = 0x82112FCC;
	sub_820DCBD8(ctx, base);
	// b 0x82112fd8
	goto loc_82112FD8;
loc_82112FD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112ab8
	ctx.lr = 0x82112FD8;
	sub_82112AB8(ctx, base);
loc_82112FD8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8234c700
	ctx.lr = 0x82112FE0;
	sub_8234C700(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82113000
	if (ctx.cr6.eq) goto loc_82113000;
	// add r6,r31,r20
	ctx.r6.u64 = ctx.r31.u64 + ctx.r20.u64;
	// add r5,r31,r21
	ctx.r5.u64 = ctx.r31.u64 + ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8234cc48
	ctx.lr = 0x82113000;
	sub_8234CC48(ctx, base);
loc_82113000:
	// lfsx f0,r31,r21
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r31,r21
	ctx.r30.u64 = ctx.r31.u64 + ctx.r21.u64;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addis r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,18328
	ctx.r11.s64 = ctx.r11.s64 + 18328;
	// addi r4,r4,2128
	ctx.r4.s64 = ctx.r4.s64 + 2128;
	// add r3,r31,r20
	ctx.r3.u64 = ctx.r31.u64 + ctx.r20.u64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x8211304C;
	sub_822DA650(ctx, base);
	// clrlwi r10,r19,24
	ctx.r10.u64 = ctx.r19.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82113068
	if (!ctx.cr6.eq) goto loc_82113068;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82110150
	ctx.lr = 0x82113060;
	sub_82110150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210aa48
	ctx.lr = 0x82113068;
	sub_8210AA48(ctx, base);
loc_82113068:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// bl 0x821149b0
	ctx.lr = 0x82113088;
	sub_821149B0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8210fcd8
	ctx.lr = 0x82113090;
	sub_8210FCD8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8210fe80
	ctx.lr = 0x82113098;
	sub_8210FE80(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82112B70) {
	__imp__sub_82112B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821130A8) {
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
	// bl 0x8239b2a8
	ctx.lr = 0x821130C0;
	sub_8239B2A8(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,-19420(r11)
	PPC_STORE_U32(ctx.r11.u32 + -19420, ctx.r31.u32);
	// bl 0x82102e10
	ctx.lr = 0x821130D0;
	sub_82102E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82102f28
	ctx.lr = 0x821130D8;
	sub_82102F28(ctx, base);
	// bl 0x821317a8
	ctx.lr = 0x821130DC;
	sub_821317A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103940
	ctx.lr = 0x821130E4;
	sub_82103940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82119210
	ctx.lr = 0x821130EC;
	sub_82119210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fcd8
	ctx.lr = 0x821130F4;
	sub_8210FCD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210fe80
	ctx.lr = 0x821130FC;
	sub_8210FE80(ctx, base);
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

PPC_WEAK_FUNC(sub_821130A8) {
	__imp__sub_821130A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82113118;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82389770
	ctx.lr = 0x82113130;
	sub_82389770(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a6a88
	ctx.lr = 0x82113138;
	sub_821A6A88(ctx, base);
	// bl 0x821410c8
	ctx.lr = 0x8211313C;
	sub_821410C8(ctx, base);
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r30,-19420(r8)
	PPC_STORE_U32(ctx.r8.u32 + -19420, ctx.r30.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// bl 0x821317b0
	ctx.lr = 0x82113168;
	sub_821317B0(ctx, base);
	// lis r24,-32155
	ctx.r24.s64 = -2107310080;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r27,r7,2116
	ctx.r27.u64 = ctx.r7.u64 | 2116;
	// lwz r11,-30052(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30052);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x821131a8
	if (!ctx.cr6.eq) goto loc_821131A8;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// add r10,r31,r27
	ctx.r10.u64 = ctx.r31.u64 + ctx.r27.u64;
	// addi r11,r11,2168
	ctx.r11.s64 = ctx.r11.s64 + 2168;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_821131A8:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r28,r28,22912
	ctx.r28.s64 = ctx.r28.s64 + 22912;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,2180
	ctx.r8.u64 = ctx.r11.u64 | 2180;
	// ori r6,r10,61840
	ctx.r6.u64 = ctx.r10.u64 | 61840;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// stwx r7,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x82114c00
	ctx.lr = 0x821131DC;
	sub_82114C00(ctx, base);
	// addis r26,r31,2
	ctx.r26.s64 = ctx.r31.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r26,r26,2092
	ctx.r26.s64 = ctx.r26.s64 + 2092;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82389ec8
	ctx.lr = 0x821131F0;
	sub_82389EC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fbc48
	ctx.lr = 0x821131F8;
	sub_820FBC48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a7070
	ctx.lr = 0x82113204;
	sub_821A7070(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r23,r11,6968
	ctx.r23.s64 = ctx.r11.s64 + 6968;
	// bne cr6,0x8211322c
	if (!ctx.cr6.eq) goto loc_8211322C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,11308(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11308);
	// bl 0x821a7018
	ctx.lr = 0x82113220;
	sub_821A7018(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394940
	ctx.lr = 0x82113228;
	sub_82394940(ctx, base);
	// bl 0x82111af0
	ctx.lr = 0x8211322C;
	sub_82111AF0(ctx, base);
loc_8211322C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,24056
	ctx.r10.u64 = ctx.r11.u64 | 24056;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82113254
	if (!ctx.cr6.eq) goto loc_82113254;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,58160
	ctx.r9.u64 = ctx.r11.u64 | 58160;
	// ori r8,r10,58156
	ctx.r8.u64 = ctx.r10.u64 | 58156;
	// b 0x82113264
	goto loc_82113264;
loc_82113254:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,24064
	ctx.r9.u64 = ctx.r11.u64 | 24064;
	// ori r8,r10,24060
	ctx.r8.u64 = ctx.r10.u64 | 24060;
loc_82113264:
	// lwzx r29,r31,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r25,r31,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x82321c38
	ctx.lr = 0x82113270;
	sub_82321C38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b7f8
	ctx.lr = 0x82113284;
	sub_8210B7F8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,58124
	ctx.r8.u64 = ctx.r11.u64 | 58124;
	// ori r7,r10,58120
	ctx.r7.u64 = ctx.r10.u64 | 58120;
	// ori r4,r9,58116
	ctx.r4.u64 = ctx.r9.u64 | 58116;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// bl 0x8210b778
	ctx.lr = 0x821132B0;
	sub_8210B778(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r10,r3,20012
	ctx.r10.u64 = ctx.r3.u64 | 20012;
	// li r29,2047
	ctx.r29.s64 = 2047;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bne cr6,0x821132ec
	if (!ctx.cr6.eq) goto loc_821132EC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820ee570
	ctx.lr = 0x821132D8;
	sub_820EE570(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82101098
	ctx.lr = 0x821132E0;
	sub_82101098(ctx, base);
	// bl 0x8228b8a8
	ctx.lr = 0x821132E4;
	sub_8228B8A8(ctx, base);
	// bl 0x82386ab8
	ctx.lr = 0x821132E8;
	sub_82386AB8(ctx, base);
	// b 0x82113300
	goto loc_82113300;
loc_821132EC:
	// li r3,2047
	ctx.r3.s64 = 2047;
	// bl 0x82386a68
	ctx.lr = 0x821132F4;
	sub_82386A68(ctx, base);
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x82386a68
	ctx.lr = 0x821132FC;
	sub_82386A68(ctx, base);
	// bl 0x82386b30
	ctx.lr = 0x82113300;
	sub_82386B30(ctx, base);
loc_82113300:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d81a8
	ctx.lr = 0x82113308;
	sub_820D81A8(ctx, base);
	// bl 0x82386d20
	ctx.lr = 0x8211330C;
	sub_82386D20(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82104510
	ctx.lr = 0x82113314;
	sub_82104510(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8211334c
	if (!ctx.cr6.eq) goto loc_8211334C;
	// bl 0x82389858
	ctx.lr = 0x82113320;
	sub_82389858(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821335e8
	ctx.lr = 0x82113328;
	sub_821335E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8217a6e8
	ctx.lr = 0x82113330;
	sub_8217A6E8(ctx, base);
	// bl 0x82391320
	ctx.lr = 0x82113334;
	sub_82391320(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,18340
	ctx.r3.s64 = ctx.r3.s64 + 18340;
	// bl 0x823a1e90
	ctx.lr = 0x82113340;
	sub_823A1E90(ctx, base);
	// bl 0x8212cc70
	ctx.lr = 0x82113344;
	sub_8212CC70(ctx, base);
	// bl 0x821039d8
	ctx.lr = 0x82113348;
	sub_821039D8(ctx, base);
	// b 0x82113360
	goto loc_82113360;
loc_8211334C:
	// bl 0x822576c8
	ctx.lr = 0x82113350;
	sub_822576C8(ctx, base);
	// bl 0x82391320
	ctx.lr = 0x82113354;
	sub_82391320(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,18340
	ctx.r3.s64 = ctx.r3.s64 + 18340;
	// bl 0x823a1e90
	ctx.lr = 0x82113360;
	sub_823A1E90(ctx, base);
loc_82113360:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// ori r25,r11,22924
	ctx.r25.u64 = ctx.r11.u64 | 22924;
	// addi r5,r5,-4404
	ctx.r5.s64 = ctx.r5.s64 + -4404;
	// add r22,r31,r25
	ctx.r22.u64 = ctx.r31.u64 + ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821017e0
	ctx.lr = 0x82113380;
	sub_821017E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82100ff8
	ctx.lr = 0x82113388;
	sub_82100FF8(ctx, base);
	// cmpwi cr6,r29,2047
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2047, ctx.xer);
	// beq cr6,0x821133c0
	if (ctx.cr6.eq) goto loc_821133C0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ee310
	ctx.lr = 0x82113398;
	sub_820EE310(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30096(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821133c0
	if (ctx.cr6.eq) goto loc_821133C0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r29,404
	ctx.r10.s64 = ctx.r29.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f1658
	ctx.lr = 0x821133C0;
	sub_820F1658(ctx, base);
loc_821133C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821133d4
	if (!ctx.cr6.eq) goto loc_821133D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82394988
	ctx.lr = 0x821133D0;
	sub_82394988(ctx, base);
	// bl 0x8217ed98
	ctx.lr = 0x821133D4;
	sub_8217ED98(ctx, base);
loc_821133D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141e70
	ctx.lr = 0x821133DC;
	sub_82141E70(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821133f4
	if (ctx.cr6.eq) goto loc_821133F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82257698
	ctx.lr = 0x821133F4;
	sub_82257698(ctx, base);
loc_821133F4:
	// bl 0x823873b0
	ctx.lr = 0x821133F8;
	sub_823873B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112148
	ctx.lr = 0x82113400;
	sub_82112148(ctx, base);
	// addis r28,r31,3
	ctx.r28.s64 = ctx.r31.s64 + 196608;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r28,r28,-3672
	ctx.r28.s64 = ctx.r28.s64 + -3672;
	// ori r10,r11,61920
	ctx.r10.u64 = ctx.r11.u64 | 61920;
	// stb r3,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r3.u8);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82389fb0
	ctx.lr = 0x8211341C;
	sub_82389FB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821127f8
	ctx.lr = 0x82113424;
	sub_821127F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821129f8
	ctx.lr = 0x82113430;
	sub_821129F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112900
	ctx.lr = 0x82113438;
	sub_82112900(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82112380
	ctx.lr = 0x82113440;
	sub_82112380(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82119210
	ctx.lr = 0x82113448;
	sub_82119210(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82112b70
	ctx.lr = 0x82113450;
	sub_82112B70(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfsx f1,r31,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f1.f64 = double(temp.f32);
	// lis r9,-32167
	ctx.r9.s64 = -2108096512;
	// ori r6,r8,2124
	ctx.r6.u64 = ctx.r8.u64 | 2124;
	// ori r5,r7,2120
	ctx.r5.u64 = ctx.r7.u64 | 2120;
	// add r29,r31,r27
	ctx.r29.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r3,-11488(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11488);
	// lfsx f3,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822e1f98
	ctx.lr = 0x8211347C;
	sub_822E1F98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211b2b0
	ctx.lr = 0x82113484;
	sub_8211B2B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82119450
	ctx.lr = 0x8211348C;
	sub_82119450(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e4858
	ctx.lr = 0x82113494;
	sub_820E4858(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r3,r4,61824
	ctx.r3.u64 = ctx.r4.u64 | 61824;
	// lbzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821134b4
	if (!ctx.cr6.eq) goto loc_821134B4;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821134b8
	if (ctx.cr6.eq) goto loc_821134B8;
loc_821134B4:
	// bl 0x82387360
	ctx.lr = 0x821134B8;
	sub_82387360(ctx, base);
loc_821134B8:
	// lwz r11,-30052(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821134d4
	if (ctx.cr6.eq) goto loc_821134D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82389ec8
	ctx.lr = 0x821134D4;
	sub_82389EC8(ctx, base);
loc_821134D4:
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// lbz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r27,r27,2108
	ctx.r27.s64 = ctx.r27.s64 + 2108;
	// bl 0x8239b8e0
	ctx.lr = 0x821134E4;
	sub_8239B8E0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x821a6db0
	ctx.lr = 0x821134F8;
	sub_821A6DB0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821a7fc8
	ctx.lr = 0x82113500;
	sub_821A7FC8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82187b90
	ctx.lr = 0x82113508;
	sub_82187B90(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// addi r28,r28,23180
	ctx.r28.s64 = ctx.r28.s64 + 23180;
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// addi r7,r7,22964
	ctx.r7.s64 = ctx.r7.s64 + 22964;
	// addi r6,r6,2128
	ctx.r6.s64 = ctx.r6.s64 + 2128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82362970
	ctx.lr = 0x82113530;
	sub_82362970(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82104e50
	ctx.lr = 0x82113540;
	sub_82104E50(ctx, base);
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// mulli r10,r30,84
	ctx.r10.s64 = ctx.r30.s64 * 84;
	// addi r11,r11,-11448
	ctx.r11.s64 = ctx.r11.s64 + -11448;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82113578
	if (ctx.cr6.lt) goto loc_82113578;
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r11,11308(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 11308);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82113578
	if (!ctx.cr6.gt) goto loc_82113578;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210ee60
	ctx.lr = 0x82113578;
	sub_8210EE60(ctx, base);
loc_82113578:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82111eb8
	ctx.lr = 0x82113580;
	sub_82111EB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82111f90
	ctx.lr = 0x82113588;
	sub_82111F90(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r3,-30200(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30200);
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821135bc
	if (ctx.cr6.lt) goto loc_821135BC;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x822e1f80
	ctx.lr = 0x821135A4;
	sub_822E1F80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82284650
	ctx.lr = 0x821135B0;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821135bc
	if (ctx.cr6.eq) goto loc_821135BC;
	// bl 0x822f0510
	ctx.lr = 0x821135BC;
	sub_822F0510(ctx, base);
loc_821135BC:
	// bl 0x82386a40
	ctx.lr = 0x821135C0;
	sub_82386A40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa180
	ctx.lr = 0x821135C8;
	sub_820FA180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821135dc
	if (ctx.cr6.eq) goto loc_821135DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fb580
	ctx.lr = 0x821135DC;
	sub_820FB580(ctx, base);
loc_821135DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f5c58
	ctx.lr = 0x821135E4;
	sub_820F5C58(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82394978
	ctx.lr = 0x821135EC;
	sub_82394978(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// lfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// ori r10,r11,2112
	ctx.r10.u64 = ctx.r11.u64 | 2112;
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// addis r4,r31,2
	ctx.r4.s64 = ctx.r31.s64 + 131072;
	// addi r6,r6,18392
	ctx.r6.s64 = ctx.r6.s64 + 18392;
	// addi r5,r5,18380
	ctx.r5.s64 = ctx.r5.s64 + 18380;
	// addi r4,r4,18368
	ctx.r4.s64 = ctx.r4.s64 + 18368;
	// lfsx f2,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d6538
	ctx.lr = 0x8211361C;
	sub_820D6538(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r8,r31,r25
	ctx.r8.u64 = ctx.r31.u64 + ctx.r25.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,2196
	ctx.r6.u64 = ctx.r9.u64 | 2196;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r7,2200
	ctx.r4.u64 = ctx.r7.u64 | 2200;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lfs f0,1144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r5,2204
	ctx.r11.u64 = ctx.r5.u64 | 2204;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f0,r31,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// ori r9,r3,2208
	ctx.r9.u64 = ctx.r3.u64 | 2208;
	// lfs f13,1148(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1148);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stfsx f13,r31,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// ori r5,r10,2212
	ctx.r5.u64 = ctx.r10.u64 | 2212;
	// lfs f12,1152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1152);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r31,r11
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// ori r10,r7,2216
	ctx.r10.u64 = ctx.r7.u64 | 2216;
	// lfs f11,1156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1156);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f11,r31,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// lfs f10,1160(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1160);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r31,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// lfs f9,1164(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 1164);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r31,r10
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x82112578
	ctx.lr = 0x82113688;
	sub_82112578(ctx, base);
	// addis r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 131072;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r28,18632
	ctx.r28.s64 = ctx.r28.s64 + 18632;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821136d4
	if (ctx.cr6.eq) goto loc_821136D4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821136A8;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821136d4
	if (!ctx.cr6.eq) goto loc_821136D4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,23616
	ctx.r10.u64 = ctx.r11.u64 | 23616;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x8211b8e0
	ctx.lr = 0x821136C4;
	sub_8211B8E0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821136d4
	if (!ctx.cr6.eq) goto loc_821136D4;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_821136D4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8238d670
	ctx.lr = 0x821136EC;
	sub_8238D670(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// lfs f9,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// ori r6,r8,23204
	ctx.r6.u64 = ctx.r8.u64 | 23204;
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r7,22952
	ctx.r7.s64 = ctx.r7.s64 + 22952;
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// fmr f4,f8
	ctx.f4.f64 = ctx.f8.f64;
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lfsx f0,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,30208
	ctx.r11.s64 = ctx.r11.s64 + 30208;
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fsubs f5,f12,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f11,-19124(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -19124);
	ctx.f11.f64 = double(temp.f32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fsubs f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stbx r8,r30,r3
	PPC_STORE_U8(ctx.r30.u32 + ctx.r3.u32, ctx.r8.u8);
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f9,f7,f7,f10
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f8,f5,f5,f9
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// ble cr6,0x821137a0
	if (!ctx.cr6.gt) goto loc_821137A0;
	// addi r10,r11,56
	ctx.r10.s64 = ctx.r11.s64 + 56;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stfsx f13,r9,r10
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stbx r8,r30,r7
	PPC_STORE_U8(ctx.r30.u32 + ctx.r7.u32, ctx.r8.u8);
loc_821137A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e4be8
	ctx.lr = 0x821137A8;
	sub_820E4BE8(ctx, base);
	// bl 0x8236a588
	ctx.lr = 0x821137AC;
	sub_8236A588(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61100
	ctx.r10.u64 = ctx.r11.u64 | 61100;
	// stbx r27,r31,r10
	PPC_STORE_U8(ctx.r31.u32 + ctx.r10.u32, ctx.r27.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113110) {
	__imp__sub_82113110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821137C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// addi r3,r7,-18448
	ctx.r3.s64 = ctx.r7.s64 + -18448;
	// lfs f31,20560(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20560);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-18536
	ctx.r8.s64 = ctx.r8.s64 + -18536;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x82113814;
	sub_822E1660(ctx, base);
	// lis r31,-32167
	ctx.r31.s64 = -2108096512;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r30,r31,-11248
	ctx.r30.s64 = ctx.r31.s64 + -11248;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,-18616
	ctx.r8.s64 = ctx.r5.s64 + -18616;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,6032(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r3,r4,-18644
	ctx.r3.s64 = ctx.r4.s64 + -18644;
	// bl 0x822e1660
	ctx.lr = 0x82113848;
	sub_822E1660(ctx, base);
	// stw r3,-11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11248, ctx.r3.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-28736
	ctx.r6.s64 = ctx.r11.s64 + -28736;
	// addi r3,r10,-18672
	ctx.r3.s64 = ctx.r10.s64 + -18672;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x82113868;
	sub_822E15D0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_821137C0) {
	__imp__sub_821137C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211388C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211388C) {
	__imp__sub_8211388C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82113898;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x821138BC;
	sub_822E8368(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227ff50
	ctx.lr = 0x821138CC;
	sub_8227FF50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82113930
	if (!ctx.cr6.eq) goto loc_82113930;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18340
	ctx.r4.s64 = ctx.r11.s64 + -18340;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280b08
	ctx.lr = 0x821138E8;
	sub_82280B08(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r6,r10,-18348
	ctx.r6.s64 = ctx.r10.s64 + -18348;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e8368
	ctx.lr = 0x82113900;
	sub_822E8368(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227ff50
	ctx.lr = 0x82113910;
	sub_8227FF50(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82113930
	if (!ctx.cr6.eq) goto loc_82113930;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18416
	ctx.r4.s64 = ctx.r11.s64 + -18416;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280b08
	ctx.lr = 0x8211392C;
	sub_82280B08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82113930:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113890) {
	__imp__sub_82113890(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,760
	ctx.r11.s64 = ctx.r9.s64 + 760;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r10,r5
	ctx.r31.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821139e0
	if (ctx.cr6.lt) goto loc_821139E0;
	// beq cr6,0x821139bc
	if (ctx.cr6.eq) goto loc_821139BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-27936
	ctx.r4.s64 = ctx.r11.s64 + -27936;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x823deeb8
	ctx.lr = 0x82113998;
	sub_823DEEB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821139f8
	if (!ctx.cr6.eq) goto loc_821139F8;
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
	// b 0x82113a20
	goto loc_82113A20;
loc_821139BC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18316
	ctx.r4.s64 = ctx.r11.s64 + -18316;
	// bl 0x823deeb8
	ctx.lr = 0x821139CC;
	sub_823DEEB8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821139f8
	if (!ctx.cr6.eq) goto loc_821139F8;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82113a20
	goto loc_82113A20;
loc_821139E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r11,13712
	ctx.r4.s64 = ctx.r11.s64 + 13712;
	// bl 0x823deeb8
	ctx.lr = 0x821139F0;
	sub_823DEEB8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82113a10
	if (ctx.cr6.eq) goto loc_82113A10;
loc_821139F8:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82113A10:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
loc_82113A20:
	// li r3,1
	ctx.r3.s64 = 1;
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

PPC_WEAK_FUNC(sub_82113938) {
	__imp__sub_82113938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82113A40;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stb r25,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r25.u8);
	// bl 0x822e5ed0
	ctx.lr = 0x82113A78;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x822e6d10
	ctx.lr = 0x82113A80;
	sub_822E6D10(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82113b24
	if (ctx.cr6.eq) goto loc_82113B24;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r23,r10,-18268
	ctx.r23.s64 = ctx.r10.s64 + -18268;
	// addi r22,r9,-18312
	ctx.r22.s64 = ctx.r9.s64 + -18312;
	// addi r26,r11,760
	ctx.r26.s64 = ctx.r11.s64 + 760;
loc_82113AAC:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82113AB8:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r31,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82113adc
	if (!ctx.cr6.eq) goto loc_82113ADC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x82113AD4;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82113b34
	if (ctx.cr6.eq) goto loc_82113B34;
loc_82113ADC:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r29,252
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 252, ctx.xer);
	// blt cr6,0x82113ab8
	if (ctx.cr6.lt) goto loc_82113AB8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_82113AF8:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x82113B04;
	sub_82280C30(ctx, base);
loc_82113B04:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x822e6fd0
	ctx.lr = 0x82113B0C;
	sub_822E6FD0(ctx, base);
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x822e6d10
	ctx.lr = 0x82113B14;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82113aac
	if (!ctx.cr6.eq) goto loc_82113AAC;
loc_82113B24:
	// bl 0x822e5fb0
	ctx.lr = 0x82113B28;
	sub_822E5FB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_82113B34:
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// bl 0x822e6d78
	ctx.lr = 0x82113B3C;
	sub_822E6D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113938
	ctx.lr = 0x82113B50;
	sub_82113938(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82113b68
	if (!ctx.cr6.eq) goto loc_82113B68;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82113af8
	goto loc_82113AF8;
loc_82113B68:
	// stbx r21,r31,r28
	PPC_STORE_U8(ctx.r31.u32 + ctx.r28.u32, ctx.r21.u8);
	// b 0x82113b04
	goto loc_82113B04;
}

PPC_WEAK_FUNC(sub_82113A38) {
	__imp__sub_82113A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82113B78;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x822db808
	ctx.lr = 0x82113B98;
	sub_822DB808(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8f0
	ctx.lr = 0x82113BA0;
	sub_822DB8F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r28,r11,-18220
	ctx.r28.s64 = ctx.r11.s64 + -18220;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 32768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82113890
	ctx.lr = 0x82113BC0;
	sub_82113890(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82113be4
	if (!ctx.cr6.eq) goto loc_82113BE4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x82113BD4;
	sub_822DB8D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82113BE4:
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x82113BF4;
	sub_823DE090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,-18224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18224);
	ctx.f31.f64 = double(temp.f32);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x822e8368
	ctx.lr = 0x82113C2C;
	sub_822E8368(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82113a38
	ctx.lr = 0x82113C3C;
	sub_82113A38(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82113c54
	if (!ctx.cr6.eq) goto loc_82113C54;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_82113C54:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82113ca4
	if (!ctx.cr6.eq) goto loc_82113CA4;
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f6,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82113CA4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822db8d8
	ctx.lr = 0x82113CAC;
	sub_822DB8D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113B70) {
	__imp__sub_82113B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82113CBC) {
	__imp__sub_82113CBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82113CC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82113cec
	if (!ctx.cr6.eq) goto loc_82113CEC;
loc_82113CE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82113CEC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// ori r27,r7,58840
	ctx.r27.u64 = ctx.r7.u64 | 58840;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// add r28,r29,r27
	ctx.r28.u64 = ctx.r29.u64 + ctx.r27.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82113D18:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822e8058
	ctx.lr = 0x82113D24;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82113d3c
	if (ctx.cr6.eq) goto loc_82113D3C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82113d18
	if (ctx.cr6.lt) goto loc_82113D18;
loc_82113D3C:
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x82113d6c
	if (ctx.cr6.eq) goto loc_82113D6C;
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r5,108
	ctx.r5.s64 = 108;
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r4,-7128
	ctx.r4.s64 = ctx.r4.s64 + -7128;
	// bl 0x823de1f0
	ctx.lr = 0x82113D60;
	sub_823DE1F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82113D6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82113D74:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82113d90
	if (ctx.cr6.eq) goto loc_82113D90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82113d74
	if (ctx.cr6.lt) goto loc_82113D74;
loc_82113D90:
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// mulli r11,r31,108
	ctx.r11.s64 = ctx.r31.s64 * 108;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r30,r7,3
	ctx.r30.s64 = ctx.r7.s64 + 196608;
	// addi r30,r30,-7128
	ctx.r30.s64 = ctx.r30.s64 + -7128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82113b70
	ctx.lr = 0x82113DBC;
	sub_82113B70(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82113ce0
	if (ctx.cr6.eq) goto loc_82113CE0;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82113DD8;
	sub_823DE1F0(ctx, base);
	// rlwinm r11,r31,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// li r5,64
	ctx.r5.s64 = 64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82113DF0;
	sub_822E7E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113CC0) {
	__imp__sub_82113CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82113DFC) {
	__imp__sub_82113DFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82113e20
	if (ctx.cr6.lt) goto loc_82113E20;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x82113e20
	if (ctx.cr6.gt) goto loc_82113E20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82113E20:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82113E00) {
	__imp__sub_82113E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// beq cr6,0x82113ec4
	if (ctx.cr6.eq) goto loc_82113EC4;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x82113eb0
	if (ctx.cr6.eq) goto loc_82113EB0;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bne cr6,0x82113e70
	if (!ctx.cr6.eq) goto loc_82113E70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17872);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82113E6C;
	sub_823DE720(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
loc_82113E70:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82113e98
	if (!ctx.cr6.lt) goto loc_82113E98;
	// fsubs f13,f30,f31
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmadds f1,f12,f0,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f31.f64));
	// b 0x82113ecc
	goto loc_82113ECC;
loc_82113E98:
	// fsubs f13,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f30
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f1,f11,f0,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f30.f64));
	// b 0x82113ecc
	goto loc_82113ECC;
loc_82113EB0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,17872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17872);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x82113EC0;
	sub_823DE720(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
loc_82113EC4:
	// fsubs f0,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fmadds f1,f0,f3,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f31.f64));
loc_82113ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82113E28) {
	__imp__sub_82113E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82113EE4) {
	__imp__sub_82113EE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82113EF0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f2,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82113e28
	ctx.lr = 0x82113F1C;
	sub_82113E28(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82113e28
	ctx.lr = 0x82113F34;
	sub_82113E28(ctx, base);
	// stfs f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82113e28
	ctx.lr = 0x82113F4C;
	sub_82113E28(ctx, base);
	// stfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113EE8) {
	__imp__sub_82113EE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82113F5C) {
	__imp__sub_82113F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82113F60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82113F68;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82113fb8
	if (!ctx.cr6.eq) goto loc_82113FB8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd768
	ctx.lr = 0x82113FA8;
	sub_822DD768(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82113FB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82113fe8
	if (!ctx.cr6.eq) goto loc_82113FE8;
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822dd768
	ctx.lr = 0x82113FD8;
	sub_822DD768(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82113FE8:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r25,21
	ctx.r25.s64 = 21;
	// addi r11,r11,760
	ctx.r11.s64 = ctx.r11.s64 + 760;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
loc_82114000:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8211404c
	if (ctx.cr6.lt) goto loc_8211404C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// beq cr6,0x82114034
	if (ctx.cr6.eq) goto loc_82114034;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82113ee8
	ctx.lr = 0x82114030;
	sub_82113EE8(ctx, base);
	// b 0x82114074
	goto loc_82114074;
loc_82114034:
	// lfs f2,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82113e28
	ctx.lr = 0x82114044;
	sub_82113E28(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82114074
	goto loc_82114074;
loc_8211404C:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8211406c
	if (ctx.cr6.lt) goto loc_8211406C;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 5, ctx.xer);
	// bgt cr6,0x8211406c
	if (ctx.cr6.gt) goto loc_8211406C;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8211406c
	if (ctx.cr6.lt) goto loc_8211406C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x82114070
	goto loc_82114070;
loc_8211406C:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
loc_82114070:
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82114074:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82114000
	if (!ctx.cr0.eq) goto loc_82114000;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82113F60) {
	__imp__sub_82113F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114090) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8211416c
	if (ctx.cr6.eq) goto loc_8211416C;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x8211416c
	if (ctx.cr6.eq) goto loc_8211416C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82114114
	if (!ctx.cr6.lt) goto loc_82114114;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x821140e8
	if (ctx.cr6.lt) goto loc_821140E8;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// ble cr6,0x821140ec
	if (!ctx.cr6.gt) goto loc_821140EC;
loc_821140E8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_821140EC:
	// li r5,108
	ctx.r5.s64 = 108;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821140F8;
	sub_823DE1F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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
loc_82114114:
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f0,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsel f1,f6,f13,f5
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// bl 0x82113f60
	ctx.lr = 0x8211416C;
	sub_82113F60(ctx, base);
loc_8211416C:
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

PPC_WEAK_FUNC(sub_82114090) {
	__imp__sub_82114090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mulli r9,r4,108
	ctx.r9.s64 = ctx.r4.s64 * 108;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addis r5,r8,3
	ctx.r5.s64 = ctx.r8.s64 + 196608;
	// addi r5,r5,-5360
	ctx.r5.s64 = ctx.r5.s64 + -5360;
	// bl 0x82113cc0
	ctx.lr = 0x821141C8;
	sub_82113CC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821141dc
	if (!ctx.cr6.eq) goto loc_821141DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821141f8
	goto loc_821141F8;
loc_821141DC:
	// addi r11,r31,15983
	ctx.r11.s64 = ctx.r31.s64 + 15983;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r30
	PPC_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r9.u32);
loc_821141F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114180) {
	__imp__sub_82114180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82114218;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ble cr6,0x821142f0
	if (!ctx.cr6.gt) goto loc_821142F0;
	// addi r11,r4,15983
	ctx.r11.s64 = ctx.r4.s64 + 15983;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r27,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821142f0
	if (ctx.cr6.eq) goto loc_821142F0;
	// mulli r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 * 108;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addis r5,r29,3
	ctx.r5.s64 = ctx.r29.s64 + 196608;
	// addi r5,r5,-5900
	ctx.r5.s64 = ctx.r5.s64 + -5900;
	// bl 0x82113cc0
	ctx.lr = 0x8211427C;
	sub_82113CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114294
	if (!ctx.cr6.eq) goto loc_82114294;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82114294:
	// addis r4,r29,3
	ctx.r4.s64 = ctx.r29.s64 + 196608;
	// addis r3,r29,3
	ctx.r3.s64 = ctx.r29.s64 + 196608;
	// addi r4,r4,-5360
	ctx.r4.s64 = ctx.r4.s64 + -5360;
	// addi r3,r3,-6440
	ctx.r3.s64 = ctx.r3.s64 + -6440;
	// li r5,108
	ctx.r5.s64 = 108;
	// bl 0x823de1f0
	ctx.lr = 0x821142AC;
	sub_823DE1F0(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwx r26,r27,r31
	PPC_STORE_U32(ctx.r27.u32 + ctx.r31.u32, ctx.r26.u32);
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// ori r6,r10,60720
	ctx.r6.u64 = ctx.r10.u64 | 60720;
	// ori r5,r8,22912
	ctx.r5.u64 = ctx.r8.u64 | 22912;
	// ori r4,r7,60716
	ctx.r4.u64 = ctx.r7.u64 | 60716;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r28,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r28.u32);
	// lwzx r10,r31,r5
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stwx r10,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821142F0:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82114180
	ctx.lr = 0x821142FC;
	sub_82114180(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82114210) {
	__imp__sub_82114210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82114304) {
	__imp__sub_82114304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addis r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 196608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,-4760
	ctx.r30.s64 = ctx.r30.s64 + -4760;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1012(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1012);
	// bl 0x822e7e98
	ctx.lr = 0x82114354;
	sub_822E7E98(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82114180
	ctx.lr = 0x82114364;
	sub_82114180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114308) {
	__imp__sub_82114308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211437C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211437C) {
	__imp__sub_8211437C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x82114388;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// addi r21,r11,-30024
	ctx.r21.s64 = ctx.r11.s64 + -30024;
	// addi r28,r10,-15680
	ctx.r28.s64 = ctx.r10.s64 + -15680;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// addi r24,r21,12
	ctx.r24.s64 = ctx.r21.s64 + 12;
	// ori r18,r11,58840
	ctx.r18.u64 = ctx.r11.u64 | 58840;
	// ori r19,r10,58808
	ctx.r19.u64 = ctx.r10.u64 | 58808;
	// ori r23,r9,60776
	ctx.r23.u64 = ctx.r9.u64 | 60776;
	// ori r26,r8,60176
	ctx.r26.u64 = ctx.r8.u64 | 60176;
	// li r20,1
	ctx.r20.s64 = 1;
	// ori r25,r7,60784
	ctx.r25.u64 = ctx.r7.u64 | 60784;
	// ori r22,r6,61924
	ctx.r22.u64 = ctx.r6.u64 | 61924;
loc_821143DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821413c8
	ctx.lr = 0x821143E4;
	sub_821413C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114478
	if (ctx.cr6.eq) goto loc_82114478;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82114478
	if (!ctx.cr6.gt) goto loc_82114478;
	// add r11,r28,r18
	ctx.r11.u64 = ctx.r28.u64 + ctx.r18.u64;
	// subf r10,r19,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r19.s64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114478
	if (ctx.cr6.eq) goto loc_82114478;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-64
	ctx.r11.s64 = ctx.r11.s64 + -64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8211441C:
	// stbu r17,64(r11)
	ea = 64 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r17.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8211441c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211441C;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// ori r30,r30,60724
	ctx.r30.u64 = ctx.r30.u64 | 60724;
	// add r31,r28,r23
	ctx.r31.u64 = ctx.r28.u64 + ctx.r23.u64;
loc_82114434:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114464
	if (ctx.cr6.eq) goto loc_82114464;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82113cc0
	ctx.lr = 0x82114454;
	sub_82113CC0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114464
	if (ctx.cr6.eq) goto loc_82114464;
	// stwx r20,r28,r30
	PPC_STORE_U32(ctx.r28.u32 + ctx.r30.u32, ctx.r20.u32);
loc_82114464:
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// addi r29,r29,108
	ctx.r29.s64 = ctx.r29.s64 + 108;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82114434
	if (ctx.cr6.lt) goto loc_82114434;
loc_82114478:
	// addi r24,r24,32
	ctx.r24.s64 = ctx.r24.s64 + 32;
	// addi r11,r21,76
	ctx.r11.s64 = ctx.r21.s64 + 76;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r28,r22
	ctx.r28.u64 = ctx.r28.u64 + ctx.r22.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821143dc
	if (ctx.cr6.lt) goto loc_821143DC;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82114380) {
	__imp__sub_82114380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114498) {
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
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x821144D0;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x821144DC;
	sub_82332C28(ctx, base);
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x82114520
	if (!ctx.cr6.eq) goto loc_82114520;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// ble cr6,0x82114544
	if (!ctx.cr6.gt) goto loc_82114544;
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82114544
	if (ctx.cr6.gt) goto loc_82114544;
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
loc_82114520:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x82114544
	if (!ctx.cr6.eq) goto loc_82114544;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r9,720(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82114548
	if (!ctx.cr6.lt) goto loc_82114548;
loc_82114544:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82114548:
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

PPC_WEAK_FUNC(sub_82114498) {
	__imp__sub_82114498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8211455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8211455C) {
	__imp__sub_8211455C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// blt cr6,0x82114668
	if (ctx.cr6.lt) goto loc_82114668;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// lwz r11,-11244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11244);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82114668
	if (!ctx.cr6.eq) goto loc_82114668;
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x821145CC;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x821145D8;
	sub_82332C28(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r8,61864
	ctx.r7.u64 = ctx.r8.u64 | 61864;
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82114668
	if (!ctx.cr6.eq) goto loc_82114668;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61824
	ctx.r10.u64 = ctx.r11.u64 | 61824;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82114668
	if (!ctx.cr6.eq) goto loc_82114668;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x8211462c
	if (!ctx.cr6.eq) goto loc_8211462C;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r9,712(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82114668
	if (ctx.cr6.lt) goto loc_82114668;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211466c
	goto loc_8211466C;
loc_8211462C:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x82114654
	if (!ctx.cr6.eq) goto loc_82114654;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r9,720(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82114668
	if (ctx.cr6.gt) goto loc_82114668;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211466c
	goto loc_8211466C;
loc_82114654:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8211466c
	if (!ctx.cr6.eq) goto loc_8211466C;
loc_82114668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8211466C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114560) {
	__imp__sub_82114560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82114684) {
	__imp__sub_82114684(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114688) {
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x821146C4;
	sub_82332C00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82332c28
	ctx.lr = 0x821146D4;
	sub_82332C28(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82114854
	if (ctx.cr6.eq) goto loc_82114854;
	// lwz r11,504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 504);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x821147cc
	if (!ctx.cr6.eq) goto loc_821147CC;
	// lwz r11,704(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 704);
	// lwz r9,492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r10,708(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8211475c
	if (ctx.cr6.gt) goto loc_8211475C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r8,r10,-11248
	ctx.r8.s64 = ctx.r10.s64 + -11248;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f0,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f8,f0,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f1,f7,f13,f6
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// b 0x8211485c
	goto loc_8211485C;
loc_8211475C:
	// lwz r10,712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821147c0
	if (ctx.cr6.lt) goto loc_821147C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,-11248(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11248);
	// lfs f13,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f4,f6,f0,f7
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fsel f1,f5,f13,f4
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// b 0x8211485c
	goto loc_8211485C;
loc_821147C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8211485c
	goto loc_8211485C;
loc_821147CC:
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x82114854
	if (!ctx.cr6.eq) goto loc_82114854;
	// lwz r11,716(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// lwz r9,720(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 720);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82114854
	if (ctx.cr6.lt) goto loc_82114854;
	// lwz r10,724(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821147c0
	if (ctx.cr6.lt) goto loc_821147C0;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// addi r8,r10,-11248
	ctx.r8.s64 = ctx.r10.s64 + -11248;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f13,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f0,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsel f1,f6,f12,f5
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f12.f64 : ctx.f5.f64;
	// b 0x8211485c
	goto loc_8211485C;
loc_82114854:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
loc_8211485C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114688) {
	__imp__sub_82114688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82114874) {
	__imp__sub_82114874(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823ddff0
	ctx.lr = 0x82114888;
	__savefpr_14(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,192(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f0,f1
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	ctx.f25.f64 = double(temp.f32);
	// lfs f7,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f24,f8,f0
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f29,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f8,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f27,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f8,f0
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f23,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f8,f0
	ctx.f22.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f21,f8,f0
	ctx.f21.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f20,f8,f0
	ctx.f20.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f19,f8,f0
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f18,f8,f0
	ctx.f18.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f17,f8,f0
	ctx.f17.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f16,f8,f0
	ctx.f16.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f15,f8,f0
	ctx.f15.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f14,f8,f0
	ctx.f14.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmadds f9,f1,f9,f24
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f24.f64));
	// stfs f9,140(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// fmadds f13,f1,f13,f8
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// fmsubs f11,f11,f1,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 - ctx.f8.f64));
	// stfs f11,132(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f12,f12,f1,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f28.f64));
	// stfs f12,196(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// fmadds f10,f10,f1,f26
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f26.f64));
	// stfs f10,136(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// fmadds f9,f25,f1,f8
	ctx.f9.f64 = double(float(ctx.f25.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f9,208(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// fmadds f7,f7,f1,f22
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f22.f64));
	// stfs f7,144(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// fmadds f6,f6,f1,f21
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f21.f64));
	// stfs f6,152(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fmadds f5,f5,f1,f20
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f20.f64));
	// stfs f5,156(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// fmadds f4,f1,f4,f19
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f19.f64));
	// stfs f4,160(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// fmadds f3,f3,f1,f18
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f18.f64));
	// stfs f3,164(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// fmadds f2,f2,f1,f17
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f17.f64));
	// stfs f2,168(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// fmadds f13,f31,f1,f16
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 + ctx.f16.f64));
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// fmadds f12,f1,f30,f15
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64 + ctx.f15.f64));
	// stfs f12,176(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fmadds f11,f29,f1,f14
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f14.f64));
	// stfs f11,180(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// fmadds f10,f27,f1,f0
	ctx.f10.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f10,184(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// fmadds f8,f1,f23,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f23.f64 + ctx.f8.f64));
	// stfs f8,212(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 212, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de03c
	ctx.lr = 0x821149A4;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114878) {
	__imp__sub_82114878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821149B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821149B8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,61864
	ctx.r7.u64 = ctx.r8.u64 | 61864;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addis r27,r31,2
	ctx.r27.s64 = ctx.r31.s64 + 131072;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r7.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r30,2220
	ctx.r30.s64 = ctx.r30.s64 + 2220;
	// addi r29,r29,2280
	ctx.r29.s64 = ctx.r29.s64 + 2280;
	// addi r27,r27,2300
	ctx.r27.s64 = ctx.r27.s64 + 2300;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82114a14
	if (ctx.cr6.eq) goto loc_82114A14;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82114a8c
	goto loc_82114A8C;
loc_82114A14:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61824
	ctx.r10.u64 = ctx.r11.u64 | 61824;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114a30
	if (ctx.cr6.eq) goto loc_82114A30;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82114a8c
	goto loc_82114A8C;
loc_82114A30:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82114560
	ctx.lr = 0x82114A38;
	sub_82114560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114a4c
	if (ctx.cr6.eq) goto loc_82114A4C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82114a8c
	goto loc_82114A8C;
loc_82114A4C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,58180
	ctx.r10.u64 = ctx.r11.u64 | 58180;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82114a88
	if (ctx.cr6.eq) goto loc_82114A88;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r11,4
	ctx.r11.s64 = 4;
	// ori r9,r10,60772
	ctx.r9.u64 = ctx.r10.u64 | 60772;
	// lwzx r8,r31,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82114a8c
	if (!ctx.cr6.eq) goto loc_82114A8C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-18200
	ctx.r4.s64 = ctx.r11.s64 + -18200;
	// bl 0x82280c30
	ctx.lr = 0x82114A88;
	sub_82280C30(ctx, base);
loc_82114A88:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82114A8C:
	// addi r10,r11,15983
	ctx.r10.s64 = ctx.r11.s64 + 15983;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82114acc
	if (!ctx.cr6.eq) goto loc_82114ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stb r28,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r28.u8);
	// stb r28,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r28.u8);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82114ACC:
	// mulli r9,r11,108
	ctx.r9.s64 = ctx.r11.s64 * 108;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// ori r10,r10,60176
	ctx.r10.u64 = ctx.r10.u64 | 60176;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x82114b08
	if (!ctx.cr6.eq) goto loc_82114B08;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r6,3
	ctx.r6.s64 = 3;
	// ori r9,r11,58184
	ctx.r9.u64 = ctx.r11.u64 | 58184;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r31,r10
	ctx.r3.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lfsx f1,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82113f60
	ctx.lr = 0x82114B04;
	sub_82113F60(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_82114B08:
	// lbz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f12,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f11,52(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lbz r9,56(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stb r9,20(r30)
	PPC_STORE_U8(ctx.r30.u32 + 20, ctx.r9.u8);
	// lfs f10,84(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,24(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f9,88(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f8,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,32(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f7,72(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,36(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f6,76(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,40(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f5,80(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,44(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f4,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,48(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f3,64(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,52(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f2,68(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,56(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r8,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r8.u8);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,4(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lbz r7,96(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 96);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82114bc8
	if (ctx.cr6.eq) goto loc_82114BC8;
	// lfs f0,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// b 0x82114bd0
	goto loc_82114BD0;
loc_82114BC8:
	// stfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
loc_82114BD0:
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 16, temp.u32);
	// bl 0x82114688
	ctx.lr = 0x82114BE0;
	sub_82114688(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82114bf4
	if (ctx.cr6.eq) goto loc_82114BF4;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// bl 0x82114878
	ctx.lr = 0x82114BF4;
	sub_82114878(ctx, base);
loc_82114BF4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821149B0) {
	__imp__sub_821149B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114C00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82114C08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r8,60776
	ctx.r7.u64 = ctx.r8.u64 | 60776;
	// lbzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82114c3c
	if (!ctx.cr6.eq) goto loc_82114C3C;
	// bl 0x82114308
	ctx.lr = 0x82114C3C;
	sub_82114308(ctx, base);
loc_82114C3C:
	// addis r28,r30,1
	ctx.r28.s64 = ctx.r30.s64 + 65536;
	// addis r31,r30,3
	ctx.r31.s64 = ctx.r30.s64 + 196608;
	// addis r29,r30,3
	ctx.r29.s64 = ctx.r30.s64 + 196608;
	// addi r28,r28,22912
	ctx.r28.s64 = ctx.r28.s64 + 22912;
	// addi r31,r31,-5900
	ctx.r31.s64 = ctx.r31.s64 + -5900;
	// addi r29,r29,-4820
	ctx.r29.s64 = ctx.r29.s64 + -4820;
	// li r30,5
	ctx.r30.s64 = 5;
loc_82114C58:
	// addi r7,r31,540
	ctx.r7.s64 = ctx.r31.s64 + 540;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,-540
	ctx.r4.s64 = ctx.r31.s64 + -540;
	// bl 0x82114090
	ctx.lr = 0x82114C70;
	sub_82114090(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// bne 0x82114c58
	if (!ctx.cr0.eq) goto loc_82114C58;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82114C00) {
	__imp__sub_82114C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114C88) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82114560
	ctx.lr = 0x82114CA4;
	sub_82114560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// addi r4,r11,-4696
	ctx.r4.s64 = ctx.r11.s64 + -4696;
	// bne cr6,0x82114cc4
	if (!ctx.cr6.eq) goto loc_82114CC4;
	// addi r4,r11,-4760
	ctx.r4.s64 = ctx.r11.s64 + -4760;
loc_82114CC4:
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114ce8
	if (!ctx.cr6.eq) goto loc_82114CE8;
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
loc_82114CE8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82113cc0
	ctx.lr = 0x82114CF4;
	sub_82113CC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82114C88) {
	__imp__sub_82114C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82114D14) {
	__imp__sub_82114D14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82114c88
	ctx.lr = 0x82114D2C;
	sub_82114C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114d58
	if (!ctx.cr6.eq) goto loc_82114D58;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-17888
	ctx.r4.s64 = ctx.r11.s64 + -17888;
	// bl 0x82280c30
	ctx.lr = 0x82114D48;
	sub_82280C30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114D58:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r3,r11,-17908
	ctx.r3.s64 = ctx.r11.s64 + -17908;
	// bl 0x822e20d0
	ctx.lr = 0x82114D68;
	sub_822E20D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r10,-17928
	ctx.r3.s64 = ctx.r10.s64 + -17928;
	// bl 0x822e2210
	ctx.lr = 0x82114D78;
	sub_822E2210(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r9,-17948
	ctx.r3.s64 = ctx.r9.s64 + -17948;
	// bl 0x822e2210
	ctx.lr = 0x82114D88;
	sub_822E2210(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r8,-17980
	ctx.r3.s64 = ctx.r8.s64 + -17980;
	// bl 0x822e2210
	ctx.lr = 0x82114D98;
	sub_822E2210(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f1,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r7,-18012
	ctx.r3.s64 = ctx.r7.s64 + -18012;
	// bl 0x822e2210
	ctx.lr = 0x82114DA8;
	sub_822E2210(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r6,-18040
	ctx.r3.s64 = ctx.r6.s64 + -18040;
	// bl 0x822e2210
	ctx.lr = 0x82114DB8;
	sub_822E2210(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-18068
	ctx.r3.s64 = ctx.r5.s64 + -18068;
	// bl 0x822e2210
	ctx.lr = 0x82114DC8;
	sub_822E2210(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r4,-18092
	ctx.r3.s64 = ctx.r4.s64 + -18092;
	// bl 0x822e2210
	ctx.lr = 0x82114DD8;
	sub_822E2210(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r3,-18124
	ctx.r3.s64 = ctx.r3.s64 + -18124;
	// bl 0x822e2210
	ctx.lr = 0x82114DE8;
	sub_822E2210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114D18) {
	__imp__sub_82114D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114DF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82114c88
	ctx.lr = 0x82114E0C;
	sub_82114C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114e38
	if (!ctx.cr6.eq) goto loc_82114E38;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-17592
	ctx.r4.s64 = ctx.r11.s64 + -17592;
	// bl 0x82280c30
	ctx.lr = 0x82114E28;
	sub_82280C30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114E38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 116);
	// addi r3,r11,-17616
	ctx.r3.s64 = ctx.r11.s64 + -17616;
	// bl 0x822e20d0
	ctx.lr = 0x82114E48;
	sub_822E20D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r10,-17636
	ctx.r3.s64 = ctx.r10.s64 + -17636;
	// bl 0x822e2210
	ctx.lr = 0x82114E58;
	sub_822E2210(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r9,-17660
	ctx.r3.s64 = ctx.r9.s64 + -17660;
	// bl 0x822e2210
	ctx.lr = 0x82114E68;
	sub_822E2210(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r8,-17684
	ctx.r3.s64 = ctx.r8.s64 + -17684;
	// bl 0x822e2210
	ctx.lr = 0x82114E78;
	sub_822E2210(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f1,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r7,-17712
	ctx.r3.s64 = ctx.r7.s64 + -17712;
	// bl 0x822e2210
	ctx.lr = 0x82114E88;
	sub_822E2210(ctx, base);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lbz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 136);
	// addi r3,r6,-17732
	ctx.r3.s64 = ctx.r6.s64 + -17732;
	// bl 0x822e20d0
	ctx.lr = 0x82114E98;
	sub_822E20D0(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f3,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r5,-17756
	ctx.r3.s64 = ctx.r5.s64 + -17756;
	// lfs f2,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e2368
	ctx.lr = 0x82114EB0;
	sub_822E2368(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f3,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,-17780
	ctx.r3.s64 = ctx.r4.s64 + -17780;
	// lfs f2,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e2368
	ctx.lr = 0x82114EC8;
	sub_822E2368(ctx, base);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lfs f3,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r3,-17800
	ctx.r3.s64 = ctx.r3.s64 + -17800;
	// lfs f2,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e2368
	ctx.lr = 0x82114EE0;
	sub_822E2368(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114DF8) {
	__imp__sub_82114DF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82114c88
	ctx.lr = 0x82114F04;
	sub_82114C88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82114f30
	if (!ctx.cr6.eq) goto loc_82114F30;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-17504
	ctx.r4.s64 = ctx.r11.s64 + -17504;
	// bl 0x82280c30
	ctx.lr = 0x82114F20;
	sub_82280C30(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82114F30:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lbz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 176);
	// addi r3,r11,-19048
	ctx.r3.s64 = ctx.r11.s64 + -19048;
	// bl 0x822e20d0
	ctx.lr = 0x82114F40;
	sub_822E20D0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r10,-19084
	ctx.r3.s64 = ctx.r10.s64 + -19084;
	// bl 0x822e2210
	ctx.lr = 0x82114F50;
	sub_822E2210(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f1,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r9,-19120
	ctx.r3.s64 = ctx.r9.s64 + -19120;
	// bl 0x822e2210
	ctx.lr = 0x82114F60;
	sub_822E2210(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114EF0) {
	__imp__sub_82114EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x82114F94;
	sub_82332AF8(ctx, base);
	// lbz r11,1639(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1639);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114fb8
	if (ctx.cr6.eq) goto loc_82114FB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332008
	ctx.lr = 0x82114FAC;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82114fbc
	if (ctx.cr6.eq) goto loc_82114FBC;
loc_82114FB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82114FBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82114F70) {
	__imp__sub_82114F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82114FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82114FD4) {
	__imp__sub_82114FD4(ctx, base);
}

