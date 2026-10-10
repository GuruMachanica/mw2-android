#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_820E44DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E44DC) {
	__imp__sub_820E44DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E44E0) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820e4388
	sub_820E4388(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E44E0) {
	__imp__sub_820E44E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E44E8) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x821201a0
	ctx.lr = 0x820E44FC;
	sub_821201A0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e4530
	if (ctx.cr6.eq) goto loc_820E4530;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4530
	if (ctx.cr6.eq) goto loc_820E4530;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,13348
	ctx.r4.s64 = ctx.r11.s64 + 13348;
	// bl 0x822b7268
	ctx.lr = 0x820E4520;
	sub_822B7268(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E4530:
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

PPC_WEAK_FUNC(sub_820E44E8) {
	__imp__sub_820E44E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4544) {
	__imp__sub_820E4544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x820E4550;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,27512(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27512);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4744
	if (ctx.cr6.eq) goto loc_820E4744;
	// bl 0x8210b820
	ctx.lr = 0x820E4578;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e4744
	if (!ctx.cr6.eq) goto loc_820E4744;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8212fa08
	ctx.lr = 0x820E458C;
	sub_8212FA08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4744
	if (!ctx.cr6.eq) goto loc_820E4744;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r26,r9
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r9.s32);
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r28,r22,2
	ctx.r28.s64 = ctx.r22.s64 + 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// lfs f30,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r28,r28,20100
	ctx.r28.s64 = ctx.r28.s64 + 20100;
	// ori r27,r7,2116
	ctx.r27.u64 = ctx.r7.u64 | 2116;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// addi r21,r11,13348
	ctx.r21.s64 = ctx.r11.s64 + 13348;
	// addi r20,r10,13364
	ctx.r20.s64 = ctx.r10.s64 + 13364;
	// addi r19,r9,-22896
	ctx.r19.s64 = ctx.r9.s64 + -22896;
loc_820E45E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e4734
	if (!ctx.cr6.eq) goto loc_820E4734;
	// li r23,0
	ctx.r23.s64 = 0;
loc_820E45F8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820e4388
	ctx.lr = 0x820E4610;
	sub_820E4388(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820e4634
	if (!ctx.cr6.eq) goto loc_820E4634;
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820e4634
	if (!ctx.cr6.eq) goto loc_820E4634;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x820e4728
	if (ctx.cr6.eq) goto loc_820E4728;
loc_820E4634:
	// lwz r3,1132(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1132);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e4648
	if (!ctx.cr6.eq) goto loc_820E4648;
	// lwz r29,872(r19)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r19.u32 + 872);
	// b 0x820e4654
	goto loc_820E4654;
loc_820E4648:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820fdca0
	ctx.lr = 0x820E4650;
	sub_820FDCA0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_820E4654:
	// lfsx f0,r22,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r22,r27
	ctx.r11.u64 = ctx.r22.u64 + ctx.r27.u64;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r25,48
	ctx.r3.s64 = ctx.r25.s64 + 48;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,7672(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 7672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f31,f2,f0
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bl 0x821201a0
	ctx.lr = 0x820E469C;
	sub_821201A0(ctx, base);
	// lbz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e46d8
	if (ctx.cr6.eq) goto loc_820E46D8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e46d8
	if (ctx.cr6.eq) goto loc_820E46D8;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x820E46C0;
	sub_822B7268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e46d8
	if (ctx.cr6.eq) goto loc_820E46D8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4708
	if (!ctx.cr6.eq) goto loc_820E4708;
loc_820E46D8:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e46f4
	if (ctx.cr6.eq) goto loc_820E46F4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822c4080
	ctx.lr = 0x820E46EC;
	sub_822C4080(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x820e4708
	goto loc_820E4708;
loc_820E46F4:
	// li r5,16
	ctx.r5.s64 = 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// bl 0x820e0048
	ctx.lr = 0x820E4708;
	sub_820E0048(ctx, base);
loc_820E4708:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820e4278
	ctx.lr = 0x820E4728;
	sub_820E4278(ctx, base);
loc_820E4728:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,8
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 8, ctx.xer);
	// blt cr6,0x820e45f8
	if (ctx.cr6.lt) goto loc_820E45F8;
loc_820E4734:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,1160
	ctx.r28.s64 = ctx.r28.s64 + 1160;
	// cmpwi cr6,r25,32
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 32, ctx.xer);
	// blt cr6,0x820e45e8
	if (ctx.cr6.lt) goto loc_820E45E8;
loc_820E4744:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4548) {
	__imp__sub_820E4548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4754) {
	__imp__sub_820E4754(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E4760;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233b730
	ctx.lr = 0x820E4774;
	sub_8233B730(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x820e4840
	if (ctx.cr6.eq) goto loc_820E4840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141160
	ctx.lr = 0x820E4790;
	sub_82141160(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r31,-32191
	ctx.r31.s64 = -2109669376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,536(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 536);
	// lfs f1,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c2068
	ctx.lr = 0x820E47A8;
	sub_822C2068(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r10,13400
	ctx.r3.s64 = ctx.r10.s64 + 13400;
	// bl 0x822c4080
	ctx.lr = 0x820E47B8;
	sub_822C4080(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r8,r9,-2072
	ctx.r8.s64 = ctx.r9.s64 + -2072;
	// lfs f1,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f0,-2072(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822c1bf8
	ctx.lr = 0x820E47F0;
	sub_822C1BF8(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f3,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f3.f64 = double(temp.f32);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// bl 0x822c1ce8
	ctx.lr = 0x820E4840;
	sub_822C1CE8(ctx, base);
loc_820E4840:
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

PPC_WEAK_FUNC(sub_820E4758) {
	__imp__sub_820E4758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4850) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E4850) {
	__imp__sub_820E4850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4854) {
	__imp__sub_820E4854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4858) {
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
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,58148
	ctx.r6.u64 = ctx.r8.u64 | 58148;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwx r7,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r7.u32);
	// bne cr6,0x820e4904
	if (!ctx.cr6.eq) goto loc_820E4904;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17048);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4904
	if (ctx.cr6.eq) goto loc_820E4904;
	// bl 0x820e41a8
	ctx.lr = 0x820E48B8;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4904
	if (ctx.cr6.eq) goto loc_820E4904;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22928
	ctx.r10.u64 = ctx.r11.u64 | 22928;
	// lwzx r9,r5,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// bge cr6,0x820e4904
	if (!ctx.cr6.lt) goto loc_820E4904;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,6224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6224);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e48fc
	if (ctx.cr6.eq) goto loc_820E48FC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e2a18
	ctx.lr = 0x820E48F0;
	sub_820E2A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4904
	if (!ctx.cr6.eq) goto loc_820E4904;
loc_820E48FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e85a0
	ctx.lr = 0x820E4904;
	sub_820E85A0(ctx, base);
loc_820E4904:
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

PPC_WEAK_FUNC(sub_820E4858) {
	__imp__sub_820E4858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E4920;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e40c8
	ctx.lr = 0x820E494C;
	sub_820E40C8(ctx, base);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820e4bd8
	if (!ctx.cr6.eq) goto loc_820E4BD8;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17048);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e49b8
	if (!ctx.cr6.eq) goto loc_820E49B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e41a8
	ctx.lr = 0x820E4974;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4988
	if (ctx.cr6.eq) goto loc_820E4988;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5098
	ctx.lr = 0x820E4988;
	sub_820F5098(ctx, base);
loc_820E4988:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e41a8
	ctx.lr = 0x820E4990;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e49a4
	if (ctx.cr6.eq) goto loc_820E49A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5098
	ctx.lr = 0x820E49A4;
	sub_820F5098(ctx, base);
loc_820E49A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2b98
	ctx.lr = 0x820E49AC;
	sub_820E2B98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E49B8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61824
	ctx.r10.u64 = ctx.r11.u64 | 61824;
	// lbzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e49d4
	if (ctx.cr6.eq) goto loc_820E49D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211c0f8
	ctx.lr = 0x820E49D4;
	sub_8211C0F8(ctx, base);
loc_820E49D4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22940
	ctx.r10.u64 = ctx.r11.u64 | 22940;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820e49f4
	if (ctx.cr6.eq) goto loc_820E49F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211c0f0
	ctx.lr = 0x820E49F4;
	sub_8211C0F0(ctx, base);
loc_820E49F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7238
	ctx.lr = 0x820E49FC;
	sub_820E7238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc7d8
	ctx.lr = 0x820E4A04;
	sub_820DC7D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e6090
	ctx.lr = 0x820E4A0C;
	sub_820E6090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e41a8
	ctx.lr = 0x820E4A14;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4a28
	if (ctx.cr6.eq) goto loc_820E4A28;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5098
	ctx.lr = 0x820E4A28;
	sub_820F5098(ctx, base);
loc_820E4A28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e41a8
	ctx.lr = 0x820E4A30;
	sub_820E41A8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ori r29,r11,22928
	ctx.r29.u64 = ctx.r11.u64 | 22928;
	// beq cr6,0x820e4a7c
	if (ctx.cr6.eq) goto loc_820E4A7C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-15692(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15692);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4a5c
	if (ctx.cr6.eq) goto loc_820E4A5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e62b8
	ctx.lr = 0x820E4A5C;
	sub_820E62B8(ctx, base);
loc_820E4A5C:
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x820e4a70
	if (!ctx.cr6.lt) goto loc_820E4A70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e37a0
	ctx.lr = 0x820E4A70;
	sub_820E37A0(ctx, base);
loc_820E4A70:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5098
	ctx.lr = 0x820E4A7C;
	sub_820F5098(ctx, base);
loc_820E4A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4548
	ctx.lr = 0x820E4A84;
	sub_820E4548(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3aa8
	ctx.lr = 0x820E4A8C;
	sub_820E3AA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3d98
	ctx.lr = 0x820E4A94;
	sub_820E3D98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e41a8
	ctx.lr = 0x820E4A9C;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e4ae8
	if (ctx.cr6.eq) goto loc_820E4AE8;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x820e4ae8
	if (!ctx.cr6.lt) goto loc_820E4AE8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,6224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6224);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4ad8
	if (ctx.cr6.eq) goto loc_820E4AD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e2a18
	ctx.lr = 0x820E4ACC;
	sub_820E2A18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e4ae0
	if (!ctx.cr6.eq) goto loc_820E4AE0;
loc_820E4AD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e86b0
	ctx.lr = 0x820E4AE0;
	sub_820E86B0(ctx, base);
loc_820E4AE0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6ae8
	ctx.lr = 0x820E4AE8;
	sub_820E6AE8(ctx, base);
loc_820E4AE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e39c8
	ctx.lr = 0x820E4AF0;
	sub_820E39C8(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r31,3712
	ctx.r10.s64 = ctx.r31.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d1530
	ctx.lr = 0x820E4B04;
	sub_822D1530(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5098
	ctx.lr = 0x820E4B10;
	sub_820F5098(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e4758
	ctx.lr = 0x820E4B18;
	sub_820E4758(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5c98
	ctx.lr = 0x820E4B20;
	sub_820E5C98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5ef8
	ctx.lr = 0x820E4B28;
	sub_820E5EF8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,18524
	ctx.r8.u64 = ctx.r10.u64 | 18524;
	// lfs f31,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwzx r7,r30,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820e4b6c
	if (!ctx.cr6.eq) goto loc_820E4B6C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-16988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16988);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4b6c
	if (ctx.cr6.eq) goto loc_820E4B6C;
	// li r5,4
	ctx.r5.s64 = 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821271c8
	ctx.lr = 0x820E4B6C;
	sub_821271C8(ctx, base);
loc_820E4B6C:
	// li r5,300
	ctx.r5.s64 = 300;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82127348
	ctx.lr = 0x820E4B80;
	sub_82127348(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2b98
	ctx.lr = 0x820E4B88;
	sub_820E2B98(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,-29968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29968);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e4bc4
	if (ctx.cr6.eq) goto loc_820E4BC4;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4bc4
	if (ctx.cr6.eq) goto loc_820E4BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82107030
	ctx.lr = 0x820E4BB8;
	sub_82107030(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E4BC4:
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e4bd8
	if (ctx.cr6.eq) goto loc_820E4BD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106fd0
	ctx.lr = 0x820E4BD8;
	sub_82106FD0(ctx, base);
loc_820E4BD8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4918) {
	__imp__sub_820E4918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4BE4) {
	__imp__sub_820E4BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E4BF0;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r6,r8,58128
	ctx.r6.u64 = ctx.r8.u64 | 58128;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r4,r7,18464
	ctx.r4.u64 = ctx.r7.u64 | 18464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfsx f0,r31,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f1,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e4c3c
	if (ctx.cr6.eq) goto loc_820E4C3C;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_820E4C3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211fbd8
	ctx.lr = 0x820E4C44;
	sub_8211FBD8(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,19056
	ctx.r9.u64 = ctx.r11.u64 | 19056;
	// ori r8,r10,18632
	ctx.r8.u64 = ctx.r10.u64 | 18632;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r5,r31,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r4,r31,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x8211fb60
	ctx.lr = 0x820E4C64;
	sub_8211FB60(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r11,r7,19956
	ctx.r11.u64 = ctx.r7.u64 | 19956;
	// ori r7,r3,19940
	ctx.r7.u64 = ctx.r3.u64 | 19940;
	// ori r10,r6,19952
	ctx.r10.u64 = ctx.r6.u64 | 19952;
	// ori r9,r5,19948
	ctx.r9.u64 = ctx.r5.u64 | 19948;
	// ori r8,r4,19944
	ctx.r8.u64 = ctx.r4.u64 | 19944;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfsx f5,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f1,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f4,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8211fba8
	ctx.lr = 0x820E4CA8;
	sub_8211FBA8(ctx, base);
	// addis r29,r31,3
	ctx.r29.s64 = ctx.r31.s64 + 196608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r29,-4440
	ctx.r29.s64 = ctx.r29.s64 + -4440;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x8211fbf8
	ctx.lr = 0x820E4CBC;
	sub_8211FBF8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// bl 0x82128470
	ctx.lr = 0x820E4CC8;
	sub_82128470(ctx, base);
	// bl 0x82128420
	ctx.lr = 0x820E4CCC;
	sub_82128420(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// bl 0x82120218
	ctx.lr = 0x820E4CD8;
	sub_82120218(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4BE8) {
	__imp__sub_820E4BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4CE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,-19420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// b 0x820f6038
	sub_820F6038(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4CE0) {
	__imp__sub_820E4CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4CEC) {
	__imp__sub_820E4CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r3,-19420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// b 0x820f5310
	sub_820F5310(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4CF0) {
	__imp__sub_820E4CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4CFC) {
	__imp__sub_820E4CFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E4D08;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822a2ab0
	ctx.lr = 0x820E4D1C;
	sub_822A2AB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a2a90
	ctx.lr = 0x820E4D24;
	sub_822A2A90(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13544
	ctx.r3.s64 = ctx.r11.s64 + 13544;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E4D38;
	sub_822E84F0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r29,r10,-2072
	ctx.r29.s64 = ctx.r10.s64 + -2072;
	// lfs f2,5188(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5188);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lfs f31,13540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13540);
	ctx.f31.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f30,7640(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7640);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E4D80;
	sub_820EA8B8(ctx, base);
	// bl 0x822a2ac0
	ctx.lr = 0x820E4D84;
	sub_822A2AC0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a2a98
	ctx.lr = 0x820E4D8C;
	sub_822A2A98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13516
	ctx.r3.s64 = ctx.r11.s64 + 13516;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E4DA0;
	sub_822E84F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,13512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13512);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E4DCC;
	sub_820EA8B8(ctx, base);
	// bl 0x822a2ad0
	ctx.lr = 0x820E4DD0;
	sub_822A2AD0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a2aa0
	ctx.lr = 0x820E4DD8;
	sub_822A2AA0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,13488
	ctx.r3.s64 = ctx.r9.s64 + 13488;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E4DEC;
	sub_822E84F0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,13484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13484);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E4E18;
	sub_820EA8B8(ctx, base);
	// bl 0x822a2ad8
	ctx.lr = 0x820E4E1C;
	sub_822A2AD8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822a2aa8
	ctx.lr = 0x820E4E24;
	sub_822A2AA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,13460
	ctx.r3.s64 = ctx.r11.s64 + 13460;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E4E38;
	sub_822E84F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f2,13456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13456);
	ctx.f2.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E4E64;
	sub_820EA8B8(ctx, base);
	// bl 0x822aabe0
	ctx.lr = 0x820E4E68;
	sub_822AABE0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r9,13440
	ctx.r3.s64 = ctx.r9.s64 + 13440;
	// bl 0x822e84f0
	ctx.lr = 0x820E4E78;
	sub_822E84F0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f2,13436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 13436);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E4EA4;
	sub_820EA8B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4D00) {
	__imp__sub_820E4D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4EB4) {
	__imp__sub_820E4EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4EB8) {
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
	// bl 0x82310110
	ctx.lr = 0x820E4EC8;
	sub_82310110(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// addi r8,r11,32232
	ctx.r8.s64 = ctx.r11.s64 + 32232;
	// lwz r10,32228(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32228);
	// lwz r11,128(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 128);
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// stw r3,32228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32228, ctx.r3.u32);
	// srawi r6,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 5;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r5,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r3,r4,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stwx r7,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E4EB8) {
	__imp__sub_820E4EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4F14) {
	__imp__sub_820E4F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E4F20;
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r11,-29972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29972);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,13432
	ctx.r31.s64 = ctx.r11.s64 + 13432;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// beq cr6,0x820e4fc4
	if (ctx.cr6.eq) goto loc_820E4FC4;
	// addi r29,r10,-22896
	ctx.r29.s64 = ctx.r10.s64 + -22896;
	// fsubs f30,f1,f3
	ctx.f30.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// li r10,6
	ctx.r10.s64 = 6;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r11,892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 892);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820E4F80;
	sub_820EA978(ctx, base);
	// lwz r11,892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 892);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f4,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r9,r9,-1976
	ctx.r9.s64 = ctx.r9.s64 + -1976;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ea978
	ctx.lr = 0x820E4FB4;
	sub_820EA978(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820e4fdc
	if (ctx.cr6.lt) goto loc_820E4FDC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x820e4fdc
	goto loc_820E4FDC;
loc_820E4FC4:
	// addi r6,r10,-22896
	ctx.r6.s64 = ctx.r10.s64 + -22896;
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,892(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 892);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820E4FDC;
	sub_820EA978(ctx, base);
loc_820E4FDC:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4F18) {
	__imp__sub_820E4F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5008) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r11,-29972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29972);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r31,r11,13432
	ctx.r31.s64 = ctx.r11.s64 + 13432;
	// addi r6,r10,-22896
	ctx.r6.s64 = ctx.r10.s64 + -22896;
	// lfs f4,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,892(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 892);
	// beq cr6,0x820e5064
	if (ctx.cr6.eq) goto loc_820E5064;
	// li r10,7
	ctx.r10.s64 = 7;
	// fsubs f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x820ea978
	ctx.lr = 0x820E5060;
	sub_820EA978(ctx, base);
	// b 0x820e5074
	goto loc_820E5074;
loc_820E5064:
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x820ea978
	ctx.lr = 0x820E5074;
	sub_820EA978(ctx, base);
loc_820E5074:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
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

PPC_WEAK_FUNC(sub_820E5008) {
	__imp__sub_820E5008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E50A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E50A4) {
	__imp__sub_820E50A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E50A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,-29956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29956);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E50A8) {
	__imp__sub_820E50A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E50C8) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r5,892(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 892);
	// bl 0x8238b5a8
	ctx.lr = 0x820E50E8;
	sub_8238B5A8(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,13432(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13432);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-30044(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30044);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f1,f11,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E50C8) {
	__imp__sub_820E50C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x820E5130;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de018
	ctx.lr = 0x820E5138;
	__savefpr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r19,r11,32232
	ctx.r19.s64 = ctx.r11.s64 + 32232;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,128(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bge cr6,0x820e516c
	if (!ctx.cr6.lt) goto loc_820E516C;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x820E5168;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_820E516C:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// li r11,16
	ctx.r11.s64 = 16;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r25,32767
	ctx.r25.s64 = 2147418112;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r25,r25,65535
	ctx.r25.u64 = ctx.r25.u64 | 65535;
	// lwz r10,-29956(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29956);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f28,f12,f11
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
loc_820E51A8:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820e51bc
	if (!ctx.cr6.gt) goto loc_820E51BC;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_820E51BC:
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e51c8
	if (!ctx.cr6.lt) goto loc_820E51C8;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_820E51C8:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820e51dc
	if (!ctx.cr6.gt) goto loc_820E51DC;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_820E51DC:
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820e51e8
	if (!ctx.cr6.lt) goto loc_820E51E8;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
loc_820E51E8:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x820e51a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E51A8;
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// li r10,8
	ctx.r10.s64 = 8;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f26,13772(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13772);
	ctx.f26.f64 = double(temp.f32);
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// fmr f10,f30
	ctx.f10.f64 = ctx.f30.f64;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmr f12,f30
	ctx.f12.f64 = ctx.f30.f64;
	// fmuls f0,f9,f26
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
loc_820E5238:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwzu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f6,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r4,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r4.u64);
	// lfd f8,104(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f3,f9
	ctx.f3.f64 = double(ctx.f9.s64);
	// fcfid f2,f8
	ctx.f2.f64 = double(ctx.f8.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// fsubs f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fabs f9,f4
	ctx.f9.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f8,f3
	ctx.f8.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fabs f2,f6
	ctx.f2.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fabs f1,f5
	ctx.f1.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fadds f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fadds f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f13.f64));
	// fadds f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// bdnz 0x820e5238
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E5238;
	// fadds f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// fadds f12,f0,f10
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f10.f64));
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f24,f11,f26
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// bne cr6,0x820e52e8
	if (!ctx.cr6.eq) goto loc_820E52E8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820E52E8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bgt cr6,0x820e52f4
	if (ctx.cr6.gt) goto loc_820E52F4;
	// li r25,1
	ctx.r25.s64 = 1;
loc_820E52F4:
	// extsw r11,r21
	ctx.r11.s64 = ctx.r21.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fadds f1,f11,f29
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E5324;
	sub_823DDE20(ctx, base);
	// extsw r8,r25
	ctx.r8.s64 = ctx.r25.s32;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fctiwz f6,f10
	ctx.f6.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f6.u64);
	// lwz r24,132(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fdivs f5,f31,f7
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f7.f64));
	// fadds f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E5354;
	sub_823DDE20(ctx, base);
	// extsw r7,r31
	ctx.r7.s64 = ctx.r31.s32;
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f3,128(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f27,f2
	ctx.f27.f64 = double(float(ctx.f2.f64));
	// lfs f0,13768(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13768);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f1,f4
	ctx.f1.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f1,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f1.u64);
	// lwz r23,132(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fdivs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f27.f64));
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E538C;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r10,-22896
	ctx.r22.s64 = ctx.r10.s64 + -22896;
	// addi r30,r11,13752
	ctx.r30.s64 = ctx.r11.s64 + 13752;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,892(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 892);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f12.u64);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x8238b5a8
	ctx.lr = 0x820E53BC;
	sub_8238B5A8(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f11,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r20,-32188
	ctx.r20.s64 = -2109472768;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lfs f0,13432(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13432);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2072
	ctx.r31.s64 = ctx.r11.s64 + -2072;
	// lwz r11,6240(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 6240);
	// lwz r10,-30044(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + -30044);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmuls f31,f7,f8
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// blt cr6,0x820e54a8
	if (ctx.cr6.lt) goto loc_820E54A8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r27,r9
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r4,r8,2124
	ctx.r4.u64 = ctx.r8.u64 | 2124;
	// ori r3,r7,2116
	ctx.r3.u64 = ctx.r7.u64 | 2116;
	// ori r10,r6,18320
	ctx.r10.u64 = ctx.r6.u64 | 18320;
	// ori r9,r5,2120
	ctx.r9.u64 = ctx.r5.u64 | 2120;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f3,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f1,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r8,13728
	ctx.r3.s64 = ctx.r8.s64 + 13728;
	// lfsx f4,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f2,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x820E547C;
	sub_822E84F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// addi r8,r6,13716
	ctx.r8.s64 = ctx.r6.s64 + 13716;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E54A0;
	sub_820E4F18(ctx, base);
	// lwz r11,6240(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 6240);
	// fadds f25,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
loc_820E54A8:
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lfs f7,6024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6024);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,5876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5876);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r5,-2280
	ctx.r4.s64 = ctx.r5.s64 + -2280;
	// lfs f5,6020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6020);
	ctx.f5.f64 = double(temp.f32);
	// addi r27,r10,13712
	ctx.r27.s64 = ctx.r10.s64 + 13712;
	// lfs f10,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfs f0,-2280(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -2280);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fadds f6,f2,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fsubs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f10,f4,f10,f5
	ctx.f10.f64 = ctx.f4.f64 >= 0.0 ? ctx.f10.f64 : ctx.f5.f64;
	// fsel f9,f2,f30,f10
	ctx.f9.f64 = ctx.f2.f64 >= 0.0 ? ctx.f30.f64 : ctx.f10.f64;
	// fmadds f8,f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f6,f3,f9,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f0.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f5,f1,f9,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,116(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f4,f7,f9,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x820e5604
	if (ctx.cr6.lt) goto loc_820E5604;
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E556C;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r3,r11,13696
	ctx.r3.s64 = ctx.r11.s64 + 13696;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f13.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x822e84f0
	ctx.lr = 0x820E5594;
	sub_822E84F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// addi r8,r10,13688
	ctx.r8.s64 = ctx.r10.s64 + 13688;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E55B8;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// fmuls f1,f27,f26
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// addi r3,r9,13672
	ctx.r3.s64 = ctx.r9.s64 + 13672;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E55DC;
	sub_822E84F0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820e4f18
	ctx.lr = 0x820E55FC;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// b 0x820e5638
	goto loc_820E5638;
loc_820E5604:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E5610;
	sub_822E84F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r11,13688
	ctx.r8.s64 = ctx.r11.s64 + 13688;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E5634;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
loc_820E5638:
	// lwz r11,6240(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 6240);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x820e586c
	if (ctx.cr6.lt) goto loc_820E586C;
	// addi r3,r19,132
	ctx.r3.s64 = ctx.r19.s64 + 132;
	// bl 0x8238eb98
	ctx.lr = 0x820E5650;
	sub_8238EB98(ctx, base);
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f4,13432(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13432);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r26,r10,-1960
	ctx.r26.s64 = ctx.r10.s64 + -1960;
	// lwz r11,-29972(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -29972);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,892(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 892);
	// beq cr6,0x820e56a0
	if (ctx.cr6.eq) goto loc_820E56A0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r10,13664
	ctx.r8.s64 = ctx.r10.s64 + 13664;
	// li r10,7
	ctx.r10.s64 = 7;
	// bl 0x820ea978
	ctx.lr = 0x820E569C;
	sub_820EA978(ctx, base);
	// b 0x820e56bc
	goto loc_820E56BC;
loc_820E56A0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r8,r9,13664
	ctx.r8.s64 = ctx.r9.s64 + 13664;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// bl 0x820ea978
	ctx.lr = 0x820E56BC;
	sub_820EA978(ctx, base);
loc_820E56BC:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,140(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 140);
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f0,13432(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13432);
	ctx.f0.f64 = double(temp.f32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// divw r4,r11,r30
	ctx.r4.s32 = ctx.r11.s32 / ctx.r30.s32;
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f30,f11,f0,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f30.f64));
	// bl 0x822e84f0
	ctx.lr = 0x820E56EC;
	sub_822E84F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r8,r8,13652
	ctx.r8.s64 = ctx.r8.s64 + 13652;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E5710;
	sub_820E4F18(ctx, base);
	// lwz r11,144(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 144);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e5754
	if (ctx.cr6.eq) goto loc_820E5754;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// divw r4,r11,r30
	ctx.r4.s32 = ctx.r11.s32 / ctx.r30.s32;
	// bl 0x822e84f0
	ctx.lr = 0x820E572C;
	sub_822E84F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,13636
	ctx.r8.s64 = ctx.r11.s64 + 13636;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E5750;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
loc_820E5754:
	// lwz r11,132(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 132);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// divw r4,r11,r30
	ctx.r4.s32 = ctx.r11.s32 / ctx.r30.s32;
	// bl 0x822e84f0
	ctx.lr = 0x820E5764;
	sub_822E84F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r11,13620
	ctx.r8.s64 = ctx.r11.s64 + 13620;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E5788;
	sub_820E4F18(ctx, base);
	// lwz r11,136(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// divw r4,r11,r30
	ctx.r4.s32 = ctx.r11.s32 / ctx.r30.s32;
	// bl 0x822e84f0
	ctx.lr = 0x820E579C;
	sub_822E84F0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r10,13604
	ctx.r8.s64 = ctx.r10.s64 + 13604;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E57C0;
	sub_820E4F18(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,148(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 148);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// bl 0x822e84f0
	ctx.lr = 0x820E57D0;
	sub_822E84F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r8,13596
	ctx.r8.s64 = ctx.r8.s64 + 13596;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E57F4;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lwz r11,-29972(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -29972);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,13432(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13432);
	ctx.f4.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// addi r8,r10,13588
	ctx.r8.s64 = ctx.r10.s64 + 13588;
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lwz r11,892(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 892);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// beq cr6,0x820e583c
	if (ctx.cr6.eq) goto loc_820E583C;
	// li r10,7
	ctx.r10.s64 = 7;
	// fsubs f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820E5838;
	sub_820EA978(ctx, base);
	// b 0x820e584c
	goto loc_820E584C;
loc_820E583C:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820ea978
	ctx.lr = 0x820E584C;
	sub_820EA978(ctx, base);
loc_820E584C:
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f0,13432(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 13432);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,6240(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 6240);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f30,f11,f0,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f30.f64));
loc_820E586C:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820e58c4
	if (ctx.cr6.lt) goto loc_820E58C4;
	// bl 0x82284638
	ctx.lr = 0x820E587C;
	sub_82284638(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82284648
	ctx.lr = 0x820E5884;
	sub_82284648(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r10,13580
	ctx.r3.s64 = ctx.r10.s64 + 13580;
	// subf r4,r30,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r30.s64;
	// bl 0x822e84f0
	ctx.lr = 0x820E589C;
	sub_822E84F0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r8,13568
	ctx.r8.s64 = ctx.r8.s64 + 13568;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E58C0;
	sub_820E4F18(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
loc_820E58C4:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de064
	ctx.lr = 0x820E58D4;
	__restfpr_24(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E5128) {
	__imp__sub_820E5128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E58D8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,48(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r10,-22896
	ctx.r8.s64 = ctx.r10.s64 + -22896;
	// lwz r11,-29956(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29956);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,892(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 892);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// bl 0x8238b5a8
	ctx.lr = 0x820E5940;
	sub_8238B5A8(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// ori r5,r7,61924
	ctx.r5.u64 = ctx.r7.u64 | 61924;
	// ori r7,r4,2124
	ctx.r7.u64 = ctx.r4.u64 | 2124;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// addi r11,r6,-15680
	ctx.r11.s64 = ctx.r6.s64 + -15680;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r6,r9,2120
	ctx.r6.u64 = ctx.r9.u64 | 2120;
	// ori r5,r8,2116
	ctx.r5.u64 = ctx.r8.u64 | 2116;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfsx f3,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfsx f2,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r11,r5
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
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
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r11,-30044(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30044);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,13432(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13432);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r9,13776
	ctx.r3.s64 = ctx.r9.s64 + 13776;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f29,f7,f6
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// bl 0x822e84f0
	ctx.lr = 0x820E59D0;
	sub_822E84F0(ctx, base);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// addi r9,r8,-2072
	ctx.r9.s64 = ctx.r8.s64 + -2072;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e4f18
	ctx.lr = 0x820E59F4;
	sub_820E4F18(ctx, base);
	// fadds f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_820E58D8) {
	__imp__sub_820E58D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5A1C) {
	__imp__sub_820E5A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A20) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E5A20) {
	__imp__sub_820E5A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5A24) {
	__imp__sub_820E5A24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E5A28) {
	__imp__sub_820E5A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5A34) {
	__imp__sub_820E5A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A38) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E5A38) {
	__imp__sub_820E5A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5A3C) {
	__imp__sub_820E5A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5A40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E5A48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32188
	ctx.r31.s64 = -2109472768;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,6240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6240);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bge cr6,0x820e5a74
	if (!ctx.cr6.lt) goto loc_820E5A74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8238eb98
	ctx.lr = 0x820E5A70;
	sub_8238EB98(ctx, base);
	// lwz r11,6240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6240);
loc_820E5A74:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,-29956(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29956);
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// beq cr6,0x820e5a98
	if (ctx.cr6.eq) goto loc_820E5A98;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5128
	ctx.lr = 0x820E5A98;
	sub_820E5128(ctx, base);
loc_820E5A98:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,-1224(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1224);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e5ab8
	if (ctx.cr6.eq) goto loc_820E5AB8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e58d8
	ctx.lr = 0x820E5AB8;
	sub_820E58D8(ctx, base);
loc_820E5AB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E5A40) {
	__imp__sub_820E5A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820E5AC8;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17616(r1)
	ea = -17616 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,-30056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30056);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369cf8
	ctx.lr = 0x820E5B0C;
	sub_82369CF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820e5c80
	if (!ctx.cr6.gt) goto loc_820E5C80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13944
	ctx.r3.s64 = ctx.r11.s64 + 13944;
	// bl 0x822e03a0
	ctx.lr = 0x820E5B24;
	sub_822E03A0(ctx, base);
	// lwz r11,-30056(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -30056);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,13908
	ctx.r8.s64 = ctx.r10.s64 + 13908;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// bl 0x822e84f0
	ctx.lr = 0x820E5B48;
	sub_822E84F0(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r29,r11,-2072
	ctx.r29.s64 = ctx.r11.s64 + -2072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfs f29,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lfs f31,13904(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 13904);
	ctx.f31.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x820ea8b8
	ctx.lr = 0x820E5B8C;
	sub_820EA8B8(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r3,r3,13876
	ctx.r3.s64 = ctx.r3.s64 + 13876;
	// bl 0x822e84f0
	ctx.lr = 0x820E5BA0;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820ea8b8
	ctx.lr = 0x820E5BC8;
	sub_820EA8B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lfs f30,13872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13872);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x820e5c80
	if (!ctx.cr6.gt) goto loc_820E5C80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r1,376
	ctx.r31.s64 = ctx.r1.s64 + 376;
	// addi r25,r11,13800
	ctx.r25.s64 = ctx.r11.s64 + 13800;
	// addi r24,r10,12264
	ctx.r24.s64 = ctx.r10.s64 + 12264;
loc_820E5BF0:
	// lbz r11,-264(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -264);
	// addi r7,r31,-264
	ctx.r7.s64 = ctx.r31.s64 + -264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e5c10
	if (!ctx.cr6.eq) goto loc_820E5C10;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820E5C0C;
	sub_822E84F0(ctx, base);
	// b 0x820e5c44
	goto loc_820E5C44;
loc_820E5C10:
	// lfs f2,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f1,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r31,-136
	ctx.r6.s64 = ctx.r31.s64 + -136;
	// stfd f2,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f2.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f1,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// addi r5,r31,-72
	ctx.r5.s64 = ctx.r31.s64 + -72;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// bl 0x822e84f0
	ctx.lr = 0x820E5C44;
	sub_822E84F0(ctx, base);
loc_820E5C44:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ea8b8
	ctx.lr = 0x820E5C6C;
	sub_820EA8B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fadds f30,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// addi r31,r31,272
	ctx.r31.s64 = ctx.r31.s64 + 272;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x820e5bf0
	if (ctx.cr6.lt) goto loc_820E5BF0;
loc_820E5C80:
	// addi r1,r1,17616
	ctx.r1.s64 = ctx.r1.s64 + 17616;
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

PPC_WEAK_FUNC(sub_820E5AC0) {
	__imp__sub_820E5AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5C94) {
	__imp__sub_820E5C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E5CA0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de020
	ctx.lr = 0x820E5CA8;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82310110
	ctx.lr = 0x820E5CB4;
	sub_82310110(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8228b068
	ctx.lr = 0x820E5CC4;
	sub_8228B068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141160
	ctx.lr = 0x820E5CCC;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f27,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f27.f64 = double(temp.f32);
	// lfs f30,13960(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13960);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// ble cr6,0x820e5d7c
	if (!ctx.cr6.gt) goto loc_820E5D7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f26,13956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13956);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,13952(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13952);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,6044(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6044);
	ctx.f29.f64 = double(temp.f32);
loc_820E5D10:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x820e5d50
	if (ctx.cr6.lt) goto loc_820E5D50;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b7f70
	ctx.lr = 0x820E5D50;
	sub_822B7F70(ctx, base);
loc_820E5D50:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fadds f0,f31,f29
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x820e5d68
	if (!ctx.cr6.gt) goto loc_820E5D68;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// fadds f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
loc_820E5D68:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e5d10
	if (ctx.cr6.lt) goto loc_820E5D10;
loc_820E5D7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x820E5D88;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E5C98) {
	__imp__sub_820E5C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5D8C) {
	__imp__sub_820E5D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E5D98;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ori r31,r11,49169
	ctx.r31.u64 = ctx.r11.u64 | 49169;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// ori r7,r10,59441
	ctx.r7.u64 = ctx.r10.u64 | 59441;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// bl 0x8228bcc0
	ctx.lr = 0x820E5DE0;
	sub_8228BCC0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820e5ee8
	if (ctx.cr6.eq) goto loc_820E5EE8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// ori r6,r8,61924
	ctx.r6.u64 = ctx.r8.u64 | 61924;
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mullw r10,r30,r6
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r3,r4,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addis r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 131072;
	// addic r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// addis r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 131072;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r9,r1,4256
	ctx.r9.s64 = ctx.r1.s64 + 4256;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r6,2128
	ctx.r6.s64 = ctx.r6.s64 + 2128;
	// addi r5,r5,2116
	ctx.r5.s64 = ctx.r5.s64 + 2116;
	// subfe r3,r31,r3
	temp.u8 = (~ctx.r31.u32 + ctx.r3.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r31.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8238fec0
	ctx.lr = 0x820E5E40;
	sub_8238FEC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e5ee8
	if (ctx.cr6.eq) goto loc_820E5EE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141160
	ctx.lr = 0x820E5E50;
	sub_82141160(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r11,-2072
	ctx.r30.s64 = ctx.r11.s64 + -2072;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f30,3212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	ctx.f30.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f31,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x820eab40
	ctx.lr = 0x820E5E84;
	sub_820EAB40(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r8,5
	ctx.r8.s64 = 5;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fadds f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x820eab40
	ctx.lr = 0x820E5EB8;
	sub_820EAB40(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r8,5
	ctx.r8.s64 = 5;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// addi r6,r1,4256
	ctx.r6.s64 = ctx.r1.s64 + 4256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fadds f2,f9,f30
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// bl 0x820eab40
	ctx.lr = 0x820E5EE8;
	sub_820EAB40(ctx, base);
loc_820E5EE8:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E5D90) {
	__imp__sub_820E5D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5EF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30060);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820e5f10
	if (ctx.cr6.eq) goto loc_820E5F10;
	// b 0x820e5d90
	sub_820E5D90(ctx, base);
	return;
loc_820E5F10:
	// b 0x820d7f40
	sub_820D7F40(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E5EF8) {
	__imp__sub_820E5EF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E5F14) {
	__imp__sub_820E5F14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E5F18) {
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
	// bl 0x82141160
	ctx.lr = 0x820E5F34;
	sub_82141160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5c98
	ctx.lr = 0x820E5F40;
	sub_820E5C98(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30056(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30056);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e5f60
	if (ctx.cr6.eq) goto loc_820E5F60;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e5ac0
	ctx.lr = 0x820E5F5C;
	sub_820E5AC0(ctx, base);
	// b 0x820e5fec
	goto loc_820E5FEC;
loc_820E5F60:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30208);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e5f80
	if (ctx.cr6.eq) goto loc_820E5F80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e4d00
	ctx.lr = 0x820E5F7C;
	sub_820E4D00(ctx, base);
	// b 0x820e5fec
	goto loc_820E5FEC;
loc_820E5F80:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30060(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30060);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820e5fa0
	if (ctx.cr6.eq) goto loc_820E5FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5d90
	ctx.lr = 0x820E5F9C;
	sub_820E5D90(ctx, base);
	// b 0x820e5fec
	goto loc_820E5FEC;
loc_820E5FA0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-15856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15856);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e5fbc
	if (ctx.cr6.eq) goto loc_820E5FBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82256330
	ctx.lr = 0x820E5FBC;
	sub_82256330(ctx, base);
loc_820E5FBC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228cb80
	ctx.lr = 0x820E5FC4;
	sub_8228CB80(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14984);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e5fdc
	if (ctx.cr6.eq) goto loc_820E5FDC;
	// bl 0x820f1f90
	ctx.lr = 0x820E5FDC;
	sub_820F1F90(ctx, base);
loc_820E5FDC:
	// bl 0x8233b6a8
	ctx.lr = 0x820E5FE0;
	sub_8233B6A8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e5a40
	ctx.lr = 0x820E5FEC;
	sub_820E5A40(ctx, base);
loc_820E5FEC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E5F18) {
	__imp__sub_820E5F18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E6004) {
	__imp__sub_820E6004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6008) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823de720
	ctx.lr = 0x820E6030;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x820E6040;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E6008) {
	__imp__sub_820E6008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E6064) {
	__imp__sub_820E6064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e6088
	if (ctx.cr6.eq) goto loc_820E6088;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e6088
	if (ctx.cr6.eq) goto loc_820E6088;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E6088:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E6068) {
	__imp__sub_820E6068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6090) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e61fc
	if (ctx.cr6.eq) goto loc_820E61FC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,19896
	ctx.r9.u64 = ctx.r11.u64 | 19896;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwzx r9,r3,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lwzx r11,r3,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// ori r10,r5,19904
	ctx.r10.u64 = ctx.r5.u64 | 19904;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,13988(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13988);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820e6124
	if (!ctx.cr6.gt) goto loc_820E6124;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r8,-29984(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29984);
	// lbz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e6124
	if (ctx.cr6.eq) goto loc_820E6124;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfsx f13,r3,r10
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fabs f13,f6
	ctx.f13.u64 = ctx.f6.u64 & ~0x8000000000000000;
loc_820E6124:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r9,19900
	ctx.r8.u64 = ctx.r9.u64 | 19900;
	// lwzx r9,r3,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820e6160
	if (!ctx.cr6.gt) goto loc_820E6160;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lfsx f11,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fabs f11,f6
	ctx.f11.u64 = ctx.f6.u64 & ~0x8000000000000000;
loc_820E6160:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820e6178
	if (!ctx.cr6.eq) goto loc_820E6178;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x820e61fc
	if (ctx.cr6.eq) goto loc_820E61FC;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820e6188
	if (ctx.cr6.eq) goto loc_820E6188;
loc_820E6178:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// addi r11,r11,13976
	ctx.r11.s64 = ctx.r11.s64 + 13976;
	// b 0x820e6194
	goto loc_820E6194;
loc_820E6188:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// addi r11,r11,13964
	ctx.r11.s64 = ctx.r11.s64 + 13964;
loc_820E6194:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e61a8
	if (!ctx.cr6.gt) goto loc_820E61A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E61A8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,7036(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820E61E4;
	sub_82141160(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f4,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822b8090
	ctx.lr = 0x820E61FC;
	sub_822B8090(ctx, base);
loc_820E61FC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E6090) {
	__imp__sub_820E6090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E620C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E620C) {
	__imp__sub_820E620C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6210) {
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
	// lwz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e6248
	if (!ctx.cr6.eq) goto loc_820E6248;
loc_820E6230:
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
loc_820E6248:
	// bl 0x8210b820
	ctx.lr = 0x820E624C;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e6230
	if (!ctx.cr6.eq) goto loc_820E6230;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22944
	ctx.r10.u64 = ctx.r11.u64 | 22944;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820e6230
	if (!ctx.cr6.eq) goto loc_820E6230;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7018
	ctx.lr = 0x820E6278;
	sub_820E7018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e629c
	if (ctx.cr6.eq) goto loc_820E629C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-30188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30188);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e62a0
	if (ctx.cr6.eq) goto loc_820E62A0;
loc_820E629C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820E62A0:
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

PPC_WEAK_FUNC(sub_820E6210) {
	__imp__sub_820E6210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E62B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E62B4) {
	__imp__sub_820E62B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E62B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820E62C0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820e6210
	ctx.lr = 0x820E62F0;
	sub_820E6210(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e6504
	if (ctx.cr6.eq) goto loc_820E6504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141160
	ctx.lr = 0x820E6304;
	sub_82141160(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e7018
	ctx.lr = 0x820E6314;
	sub_820E7018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e634c
	if (ctx.cr6.eq) goto loc_820E634C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e6ed0
	ctx.lr = 0x820E6330;
	sub_820E6ED0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82140648
	ctx.lr = 0x820E6340;
	sub_82140648(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e636c
	goto loc_820E636C;
loc_820E634C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82140648
	ctx.lr = 0x820E6364;
	sub_82140648(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
loc_820E636C:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82140788
	ctx.lr = 0x820E6378;
	sub_82140788(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f9,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f8,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lwz r11,-17076(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17076);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r6,-2072
	ctx.r5.s64 = ctx.r6.s64 + -2072;
	// lwz r10,-19424(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19424);
	// addis r23,r27,1
	ctx.r23.s64 = ctx.r27.s64 + 65536;
	// lwz r9,-19452(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19452);
	// addis r31,r27,2
	ctx.r31.s64 = ctx.r27.s64 + 131072;
	// lfs f13,-2072(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -2072);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f10,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f0,f3,f8
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r23,r23,22912
	ctx.r23.s64 = ctx.r23.s64 + 22912;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r31,r31,19060
	ctx.r31.s64 = ctx.r31.s64 + 19060;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r24,12
	ctx.r24.s64 = 12;
	// lfs f31,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// ori r25,r8,2128
	ctx.r25.u64 = ctx.r8.u64 | 2128;
	// fmuls f12,f1,f10
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r22,r11,-22896
	ctx.r22.s64 = ctx.r11.s64 + -22896;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_820E6458:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf. r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x820e64f8
	if (!ctx.cr0.gt) goto loc_820E64F8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x820e64f8
	if (!ctx.cr6.lt) goto loc_820E64F8;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e6488
	if (ctx.cr6.eq) goto loc_820E6488;
	// lwz r29,884(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 884);
	// b 0x820e648c
	goto loc_820E648C;
loc_820E6488:
	// lwz r29,880(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 880);
loc_820E648C:
	// add r3,r27,r25
	ctx.r3.u64 = ctx.r27.u64 + ctx.r25.u64;
	// bl 0x822d4ed0
	ctx.lr = 0x820E6494;
	sub_822D4ED0(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fsubs f3,f1,f0
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fsubs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// fsubs f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fsel f0,f4,f30,f5
	ctx.f0.f64 = ctx.f4.f64 >= 0.0 ? ctx.f30.f64 : ctx.f5.f64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820ea3f0
	ctx.lr = 0x820E64F8;
	sub_820EA3F0(ctx, base);
loc_820E64F8:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// bne 0x820e6458
	if (!ctx.cr0.eq) goto loc_820E6458;
loc_820E6504:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E62B8) {
	__imp__sub_820E62B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E6514) {
	__imp__sub_820E6514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E6520;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de010
	ctx.lr = 0x820E6528;
	__savefpr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82141160
	ctx.lr = 0x820E6544;
	sub_82141160(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,-30080(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30080);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-22900(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22900);
	// lwz r9,-29920(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29920);
	// lwz r8,-17012(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -17012);
	// lfs f29,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// lfs f25,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x822d4ed0
	ctx.lr = 0x820E6584;
	sub_822D4ED0(ctx, base);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addi r4,r6,-15680
	ctx.r4.s64 = ctx.r6.s64 + -15680;
	// ori r3,r5,61924
	ctx.r3.u64 = ctx.r5.u64 | 61924;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// mullw r10,r31,r3
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r3.s32);
	// addi r9,r11,23192
	ctx.r9.s64 = ctx.r11.s64 + 23192;
	// lfsx f0,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820E65AC;
	sub_822D77C0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f1.f64;
	// lfs f0,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f1,f0
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x823de720
	ctx.lr = 0x820E65C4;
	sub_823DE720(ctx, base);
	// frsp f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f1.f64));
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x823de800
	ctx.lr = 0x820E65D0;
	sub_823DE800(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r7,-32153
	ctx.r7.s64 = -2107179008;
	// fneg f13,f26
	ctx.f13.u64 = ctx.f26.u64 ^ 0x8000000000000000;
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f29,f26
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f26.f64));
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f25
	ctx.f8.u64 = ctx.f25.u64 ^ 0x8000000000000000;
	// lis r6,-32181
	ctx.r6.s64 = -2109014016;
	// fsubs f7,f28,f25
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f25.f64));
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f0,-16788(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f22,f27
	ctx.f6.f64 = double(float(ctx.f22.f64 * ctx.f27.f64));
	// addi r5,r6,-22896
	ctx.r5.s64 = ctx.r6.s64 + -22896;
	// fneg f3,f24
	ctx.f3.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f4,f12,f27
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r9,16056(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16056);
	// fmuls f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f8,f0
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f8,f6,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f7,f4,f0
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f6,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f0,f2,f6
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fnmsubs f1,f8,f11,f31
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f11.f64 - ctx.f31.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f2,f7,f9,f30
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f9.f64 - ctx.f30.f64)));
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f10,f4
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820ea3f0
	ctx.lr = 0x820E6678;
	sub_820EA3F0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de05c
	ctx.lr = 0x820E6684;
	__restfpr_22(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E6518) {
	__imp__sub_820E6518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820E6690;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de01c
	ctx.lr = 0x820E6698;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82141160
	ctx.lr = 0x820E66B8;
	sub_82141160(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,-19456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19456);
	// lwz r10,-30092(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30092);
	// lwz r9,-17012(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17012);
	// lfs f29,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x822d4ed0
	ctx.lr = 0x820E66E8;
	sub_822D4ED0(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r6,r8,-15680
	ctx.r6.s64 = ctx.r8.s64 + -15680;
	// ori r5,r7,61924
	ctx.r5.u64 = ctx.r7.u64 | 61924;
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// mullw r4,r31,r5
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// addi r3,r11,23192
	ctx.r3.s64 = ctx.r11.s64 + 23192;
	// lfsx f0,r4,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820E6710;
	sub_822D77C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f1,f0
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x823de720
	ctx.lr = 0x820E6724;
	sub_823DE720(ctx, base);
	// frsp f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x823de800
	ctx.lr = 0x820E6730;
	sub_823DE800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fmuls f11,f25,f27
	ctx.f11.f64 = double(float(ctx.f25.f64 * ctx.f27.f64));
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f29,f13
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f13.f64));
	// lfs f0,-16788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f28,f13
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f13.f64));
	// fmuls f7,f12,f27
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fneg f6,f9
	ctx.f6.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fneg f5,f8
	ctx.f5.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsubs f4,f9,f11
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsubs f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fmuls f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f12,f3,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f0,f11,f10,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f31.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f13,f8,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f31.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f0,f9,f7,f30
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f30.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f6,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f12,f6,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f30.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x820E67CC;
	sub_82392A10(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de068
	ctx.lr = 0x820E67D8;
	__restfpr_25(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E6688) {
	__imp__sub_820E6688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E67DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E67DC) {
	__imp__sub_820E67DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E67E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,61820
	ctx.r11.u64 = ctx.r11.u64 | 61820;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E67E0) {
	__imp__sub_820E67E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E67F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E67F4) {
	__imp__sub_820E67F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E67F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// lfs f13,32(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,1060(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1060);
	// addi r10,r10,22952
	ctx.r10.s64 = ctx.r10.s64 + 22952;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f9,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f10
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f11,f0,f11
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f13,f12,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// beq cr6,0x820e6850
	if (ctx.cr6.eq) goto loc_820E6850;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820e6850
	if (ctx.cr6.eq) goto loc_820E6850;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30220);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e6898
	goto loc_820E6898;
loc_820E6850:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,6232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6232);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// beq cr6,0x820e6894
	if (ctx.cr6.eq) goto loc_820E6894;
	// lwz r11,1000(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1000);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// lfs f12,13992(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13992);
	ctx.f12.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// fsel f5,f6,f0,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fadds f0,f5,f12
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// b 0x820e6898
	goto loc_820E6898;
loc_820E6894:
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
loc_820E6898:
	// fmuls f12,f11,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f8,f13,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f8,f11
	ctx.cr6.compare(ctx.f8.f64, ctx.f11.f64);
	// bgt cr6,0x820e68d0
	if (ctx.cr6.gt) goto loc_820E68D0;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x820e68d8
	if (!ctx.cr6.lt) goto loc_820E68D8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30228);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820e6930
	if (!ctx.cr6.lt) goto loc_820E6930;
loc_820E68D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E68D8:
	// lwz r11,1080(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 1080);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e6930
	if (ctx.cr6.eq) goto loc_820E6930;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e6930
	if (ctx.cr6.eq) goto loc_820E6930;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e6930
	if (ctx.cr6.eq) goto loc_820E6930;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,23204
	ctx.r8.u64 = ctx.r10.u64 | 23204;
	// ori r7,r9,2088
	ctx.r7.u64 = ctx.r9.u64 | 2088;
	// lwz r11,-30228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30228);
	// lfsx f0,r3,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_820E6930:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E67F8) {
	__imp__sub_820E67F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6938) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r3,332(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 332);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x820E695C;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e6acc
	if (!ctx.cr6.eq) goto loc_820E6ACC;
	// lwz r6,1060(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1060);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e6988
	if (ctx.cr6.eq) goto loc_820E6988;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x820e6988
	if (ctx.cr6.eq) goto loc_820E6988;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bne cr6,0x820e6acc
	if (!ctx.cr6.eq) goto loc_820E6ACC;
loc_820E6988:
	// lbz r11,1655(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1655);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6acc
	if (ctx.cr6.eq) goto loc_820E6ACC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e67f8
	ctx.lr = 0x820E69A0;
	sub_820E67F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6acc
	if (ctx.cr6.eq) goto loc_820E6ACC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e69c8
	if (ctx.cr6.eq) goto loc_820E69C8;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x820e69c8
	if (ctx.cr6.eq) goto loc_820E69C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e69d8
	goto loc_820E69D8;
loc_820E69C8:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-16960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16960);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_820E69D8:
	// lfs f13,252(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,256(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgt cr6,0x820e6acc
	if (ctx.cr6.gt) goto loc_820E6ACC;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// addi r11,r11,-3716
	ctx.r11.s64 = ctx.r11.s64 + -3716;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// bge cr6,0x820e6acc
	if (!ctx.cr6.lt) goto loc_820E6ACC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e6a40
	if (ctx.cr6.eq) goto loc_820E6A40;
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x820e6a40
	if (ctx.cr6.eq) goto loc_820E6A40;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lwz r10,-1248(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -1248);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e6acc
	if (ctx.cr6.eq) goto loc_820E6ACC;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// lwz r9,16048(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16048);
	// b 0x820e6a80
	goto loc_820E6A80;
loc_820E6A40:
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// lwz r9,416(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 416);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// blt cr6,0x820e6a74
	if (ctx.cr6.lt) goto loc_820E6A74;
	// lhz r9,334(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// lwz r7,424(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 424);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820e6a74
	if (!ctx.cr6.eq) goto loc_820E6A74;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// lwz r9,16052(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16052);
	// b 0x820e6a80
	goto loc_820E6A80;
loc_820E6A74:
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r9,r10,-22896
	ctx.r9.s64 = ctx.r10.s64 + -22896;
	// lwz r9,16044(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16044);
loc_820E6A80:
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// ori r6,r8,61320
	ctx.r6.u64 = ctx.r8.u64 | 61320;
	// addis r5,r7,3
	ctx.r5.s64 = ctx.r7.s64 + 196608;
	// addi r5,r5,-4228
	ctx.r5.s64 = ctx.r5.s64 + -4228;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stwx r9,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820E6ACC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E6938) {
	__imp__sub_820E6938(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E6AE4) {
	__imp__sub_820E6AE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820E6AF0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de020
	ctx.lr = 0x820E6AF8;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e6d44
	if (ctx.cr6.eq) goto loc_820E6D44;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22940
	ctx.r10.u64 = ctx.r11.u64 | 22940;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820e6d44
	if (!ctx.cr6.eq) goto loc_820E6D44;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22944
	ctx.r10.u64 = ctx.r11.u64 | 22944;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820e6d44
	if (!ctx.cr6.eq) goto loc_820E6D44;
	// addis r22,r31,3
	ctx.r22.s64 = ctx.r31.s64 + 196608;
	// addi r22,r22,-3716
	ctx.r22.s64 = ctx.r22.s64 + -3716;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e6d44
	if (ctx.cr6.eq) goto loc_820E6D44;
	// bl 0x82141160
	ctx.lr = 0x820E6B6C;
	sub_82141160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7018
	ctx.lr = 0x820E6B7C;
	sub_820E7018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f28,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x820e6bd0
	if (ctx.cr6.eq) goto loc_820E6BD0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30264(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30264);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e6d44
	if (ctx.cr6.eq) goto loc_820E6D44;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e6ed0
	ctx.lr = 0x820E6BB4;
	sub_820E6ED0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82140648
	ctx.lr = 0x820E6BC4;
	sub_82140648(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820e6be8
	goto loc_820E6BE8;
loc_820E6BD0:
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82140648
	ctx.lr = 0x820E6BE0;
	sub_82140648(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
loc_820E6BE8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82140788
	ctx.lr = 0x820E6BF4;
	sub_82140788(ctx, base);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820e6d44
	if (!ctx.cr6.gt) goto loc_820E6D44;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addis r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 196608;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f29,7568(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7568);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r29,22952
	ctx.r29.s64 = ctx.r29.s64 + 22952;
	// addi r23,r23,22912
	ctx.r23.s64 = ctx.r23.s64 + 22912;
	// addi r31,r31,-4232
	ctx.r31.s64 = ctx.r31.s64 + -4232;
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lis r24,-32188
	ctx.r24.s64 = -2109472768;
	// addi r30,r11,-2072
	ctx.r30.s64 = ctx.r11.s64 + -2072;
loc_820E6C4C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,-16996(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -16996);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,-30000(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30000);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,-1236(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1236);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fcfid f0,f9
	ctx.f0.f64 = double(ctx.f9.s64);
	// fmuls f27,f1,f30
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fadds f26,f3,f27
	ctx.f26.f64 = double(float(ctx.f3.f64 + ctx.f27.f64));
	// fmuls f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bl 0x823de720
	ctx.lr = 0x820E6CE4;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f10,f11,f27,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f26.f64));
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f31,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsel f6,f8,f28,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f28.f64 : ctx.f7.f64;
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e6518
	ctx.lr = 0x820E6D18;
	sub_820E6518(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzu r8,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e6688
	ctx.lr = 0x820E6D34;
	sub_820E6688(ctx, base);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820e6c4c
	if (ctx.cr6.lt) goto loc_820E6C4C;
loc_820E6D44:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de06c
	ctx.lr = 0x820E6D50;
	__restfpr_26(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E6AE8) {
	__imp__sub_820E6AE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E6D54) {
	__imp__sub_820E6D54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6D58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E6D60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8211fa80
	ctx.lr = 0x820E6D88;
	sub_8211FA80(ctx, base);
	// addi r4,r3,-63
	ctx.r4.s64 = ctx.r3.s64 + -63;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x820E6D98;
	sub_8211F9E8(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// ori r7,r8,22924
	ctx.r7.u64 = ctx.r8.u64 | 22924;
	// lwzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x820e6ec4
	if (!ctx.cr6.gt) goto loc_820E6EC4;
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addi r30,r30,22912
	ctx.r30.s64 = ctx.r30.s64 + 22912;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x820e6ec4
	if (ctx.cr6.gt) goto loc_820E6EC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141160
	ctx.lr = 0x820E6DCC;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,14028
	ctx.r3.s64 = ctx.r11.s64 + 14028;
	// bl 0x822c4080
	ctx.lr = 0x820E6DDC;
	sub_822C4080(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f31,14024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14024);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x820E6DF8;
	sub_822C2068(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c1bf8
	ctx.lr = 0x820E6E10;
	sub_822C1BF8(ctx, base);
	// subfic r9,r3,640
	ctx.xer.ca = ctx.r3.u32 <= 640;
	ctx.r9.s64 = 640 - ctx.r3.s64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfs f2,-14540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14540);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r11,r6,-2072
	ctx.r11.s64 = ctx.r6.s64 + -2072;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820E6E70;
	sub_822C1CE8(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r7,r8,0,22,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820e6ec4
	if (!ctx.cr6.eq) goto loc_820E6EC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r11,14008
	ctx.r3.s64 = ctx.r11.s64 + 14008;
	// bl 0x8238bd98
	ctx.lr = 0x820E6E90;
	sub_8238BD98(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f4,14004(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14004);
	ctx.f4.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,14000(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14000);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,13996(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13996);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820E6EC4;
	sub_822B7F70(ctx, base);
loc_820E6EC4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E6D58) {
	__imp__sub_820E6D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E6ED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E6ED8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r11,19940
	ctx.r8.u64 = ctx.r11.u64 | 19940;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r7,r10,19944
	ctx.r7.u64 = ctx.r10.u64 | 19944;
	// ori r11,r9,18324
	ctx.r11.u64 = ctx.r9.u64 | 18324;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfsx f0,r3,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfsx f13,r3,r7
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfsx f12,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x820E6F2C;
	sub_822DA518(ctx, base);
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,2128
	ctx.r10.s64 = ctx.r10.s64 + 2128;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f11,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f6,f10,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e7008
	if (!ctx.cr6.gt) goto loc_820E7008;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,2108
	ctx.r10.u64 = ctx.r11.u64 | 2108;
	// lfsx f9,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x820e7008
	if (!ctx.cr6.gt) goto loc_820E7008;
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// ble cr6,0x820e7008
	if (!ctx.cr6.gt) goto loc_820E7008;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,2140
	ctx.r11.s64 = ctx.r11.s64 + 2140;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r9,r9,2152
	ctx.r9.s64 = ctx.r9.s64 + 2152;
	// lfs f13,14060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14060);
	ctx.f13.f64 = double(temp.f32);
	// ori r6,r8,2112
	ctx.r6.u64 = ctx.r8.u64 | 2112;
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f6,f7,f12
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,14056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14056);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f5,f11,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f2,f4,f10,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fdivs f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f8.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmadds f3,f8,f11,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f1,f7,f10,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f3.f64));
	// fdivs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// fmuls f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E7008:
	// stfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E6ED0) {
	__imp__sub_820E6ED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E7020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E703C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E7048;
	sub_82332C28(ctx, base);
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e7084
	if (!ctx.cr6.eq) goto loc_820E7084;
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e7084
	if (!ctx.cr6.eq) goto loc_820E7084;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e7078
	if (ctx.cr6.eq) goto loc_820E7078;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E7078:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E7084:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211ba68
	ctx.lr = 0x820E708C;
	sub_8211BA68(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e7098
	if (ctx.cr6.eq) goto loc_820E7098;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E7098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x820e70b0
	if (ctx.cr6.gt) goto loc_820E70B0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E70B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7018) {
	__imp__sub_820E7018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E70BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E70BC) {
	__imp__sub_820E70BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E70C0) {
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
	// bl 0x823de018
	ctx.lr = 0x820E70D8;
	__savefpr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// fmr f24,f4
	ctx.f24.f64 = ctx.f4.f64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x8211f990
	ctx.lr = 0x820E7104;
	sub_8211F990(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f28,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// frsp f27,f11
	ctx.f27.f64 = double(float(ctx.f11.f64));
	// frsp f26,f12
	ctx.f26.f64 = double(float(ctx.f12.f64));
	// ble cr6,0x820e7178
	if (!ctx.cr6.gt) goto loc_820E7178;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821202c8
	ctx.lr = 0x820E7178;
	sub_821202C8(ctx, base);
loc_820E7178:
	// fcmpu cr6,f29,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f26.f64);
	// bge cr6,0x820e71ac
	if (!ctx.cr6.lt) goto loc_820E71AC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// fsubs f3,f26,f29
	ctx.f3.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821202c8
	ctx.lr = 0x820E71AC;
	sub_821202C8(ctx, base);
loc_820E71AC:
	// fcmpu cr6,f25,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f31.f64);
	// ble cr6,0x820e71e0
	if (!ctx.cr6.gt) goto loc_820E71E0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fsubs f3,f29,f30
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821202c8
	ctx.lr = 0x820E71E0;
	sub_821202C8(ctx, base);
loc_820E71E0:
	// fcmpu cr6,f24,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f24.f64, ctx.f27.f64);
	// bge cr6,0x820e7214
	if (!ctx.cr6.lt) goto loc_820E7214;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fsubs f4,f27,f24
	ctx.f4.f64 = double(float(ctx.f27.f64 - ctx.f24.f64));
	// fsubs f3,f29,f30
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821202c8
	ctx.lr = 0x820E7214;
	sub_821202C8(ctx, base);
loc_820E7214:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de064
	ctx.lr = 0x820E7220;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E70C0) {
	__imp__sub_820E70C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E7234) {
	__imp__sub_820E7234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7238) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82114560
	ctx.lr = 0x820E7254;
	sub_82114560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e72dc
	if (ctx.cr6.eq) goto loc_820E72DC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r31,16128(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16128);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820e7288
	if (!ctx.cr6.eq) goto loc_820E7288;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,14064
	ctx.r4.s64 = ctx.r11.s64 + 14064;
	// bl 0x82280c30
	ctx.lr = 0x820E7284;
	sub_82280C30(ctx, base);
	// b 0x820e72dc
	goto loc_820E72DC;
loc_820E7288:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141160
	ctx.lr = 0x820E7290;
	sub_82141160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f3,4452(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4452);
	ctx.f3.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f4,4376(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4376);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r7,-2072
	ctx.r6.s64 = ctx.r7.s64 + -2072;
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lfs f8,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820E72DC;
	sub_82120408(ctx, base);
loc_820E72DC:
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

PPC_WEAK_FUNC(sub_820E7238) {
	__imp__sub_820E7238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E72F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E72F4) {
	__imp__sub_820E72F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E72F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e7314
	if (!ctx.cr6.gt) goto loc_820E7314;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E7314:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E72F8) {
	__imp__sub_820E72F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E731C) {
	__imp__sub_820E731C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r3,16196
	ctx.r11.s64 = ctx.r3.s64 + 16196;
	// stb r9,16212(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16212, ctx.r9.u8);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,16196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16196, ctx.r8.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r10,16196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16196);
	// stw r7,16200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16200, ctx.r7.u32);
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// li r12,8
	ctx.r12.s64 = 8;
	// stfiwx f9,r11,r12
	PPC_STORE_U32(ctx.r11.u32 + ctx.r12.u32, ctx.f9.u32);
	// lwz r8,16204(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16204);
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// stw r9,16208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16208, ctx.r9.u32);
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820e73b4
	if (ctx.cr6.lt) goto loc_820E73B4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_820E73B4:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e73c0
	if (!ctx.cr6.lt) goto loc_820E73C0;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_820E73C0:
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e73dc
	if (!ctx.cr6.lt) goto loc_820E73DC;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_820E73DC:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bge cr6,0x820e73ec
	if (!ctx.cr6.lt) goto loc_820E73EC;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_820E73EC:
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e7408
	if (!ctx.cr6.lt) goto loc_820E7408;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_820E7408:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e7414
	if (!ctx.cr6.lt) goto loc_820E7414;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_820E7414:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e742c
	if (!ctx.cr6.lt) goto loc_820E742C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_820E742C:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820e7438
	if (!ctx.cr6.lt) goto loc_820E7438;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_820E7438:
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r9,r5,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r5.s64;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E7320) {
	__imp__sub_820E7320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E744C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E744C) {
	__imp__sub_820E744C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E7458;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,4376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4376);
	ctx.f31.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820e7484
	if (!ctx.cr6.gt) goto loc_820E7484;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E7484:
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8210fc78
	ctx.lr = 0x820E748C;
	sub_8210FC78(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e74cc
	if (ctx.cr6.eq) goto loc_820E74CC;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e74cc
	if (ctx.cr6.eq) goto loc_820E74CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,812(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 812);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,14152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x820e74cc
	if (ctx.cr6.lt) goto loc_820E74CC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E74CC:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e750c
	if (ctx.cr6.eq) goto loc_820E750C;
	// lwz r3,784(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 784);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e750c
	if (ctx.cr6.eq) goto loc_820E750C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7528
	if (ctx.cr6.eq) goto loc_820E7528;
	// lwz r11,788(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7528
	if (ctx.cr6.eq) goto loc_820E7528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E750C:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7524
	if (ctx.cr6.eq) goto loc_820E7524;
	// lwz r3,780(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 780);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e7528
	if (!ctx.cr6.eq) goto loc_820E7528;
loc_820E7524:
	// lwz r3,776(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
loc_820E7528:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7450) {
	__imp__sub_820E7450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E7534) {
	__imp__sub_820E7534(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820E7540;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82141160
	ctx.lr = 0x820E7560;
	sub_82141160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e7450
	ctx.lr = 0x820E7574;
	sub_820E7450(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7810
	if (ctx.cr6.eq) goto loc_820E7810;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e75a0
	if (ctx.cr6.eq) goto loc_820E75A0;
	// lfs f3,808(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 808);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,812(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 812);
	ctx.f4.f64 = double(temp.f32);
	// b 0x820e75a8
	goto loc_820E75A8;
loc_820E75A0:
	// lfs f3,800(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 800);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,804(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 804);
	ctx.f4.f64 = double(temp.f32);
loc_820E75A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f4,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,14000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x820e7758
	if (ctx.cr6.gt) goto loc_820E7758;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x820e7758
	if (ctx.cr6.gt) goto loc_820E7758;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// fsubs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// li r8,2
	ctx.r8.s64 = 2;
	// fsubs f2,f13,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x820E7620;
	sub_82120408(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// bl 0x82120408
	ctx.lr = 0x820E7668;
	sub_82120408(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// bl 0x82120408
	ctx.lr = 0x820E76B0;
	sub_82120408(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// bl 0x82120408
	ctx.lr = 0x820E76F0;
	sub_82120408(ctx, base);
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsubs f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f5,132(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x82140bc8
	ctx.lr = 0x820E7730;
	sub_82140BC8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f4,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// lfs f0,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f4,f0,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fmadds f4,f12,f0,f13
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x820e7804
	goto loc_820E7804;
loc_820E7758:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r31,-32168
	ctx.r31.s64 = -2108162048;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-30052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30052);
	// fnmsubs f1,f3,f0,f13
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fnmsubs f2,f4,f0,f12
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e77bc
	if (!ctx.cr6.eq) goto loc_820E77BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// bl 0x82120408
	ctx.lr = 0x820E77BC;
	sub_82120408(ctx, base);
loc_820E77BC:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,140
	ctx.r7.s64 = ctx.r1.s64 + 140;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82140bc8
	ctx.lr = 0x820E77DC;
	sub_82140BC8(ctx, base);
	// lwz r11,-30052(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -30052);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e7810
	if (!ctx.cr6.eq) goto loc_820E7810;
	// lfs f3,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
loc_820E7804:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x820e70c0
	ctx.lr = 0x820E7810;
	sub_820E70C0(ctx, base);
loc_820E7810:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7538) {
	__imp__sub_820E7538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E7828;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7018
	ctx.lr = 0x820E785C;
	sub_820E7018(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e7880
	if (!ctx.cr6.eq) goto loc_820E7880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E7880:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E7890;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E789C;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x820e6ed0
	ctx.lr = 0x820E78CC;
	sub_820E6ED0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e7538
	ctx.lr = 0x820E78E0;
	sub_820E7538(ctx, base);
	// fsubs f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7820) {
	__imp__sub_820E7820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E78F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E78F4) {
	__imp__sub_820E78F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E78F8) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x820E7940;
	sub_82332AF8(ctx, base);
	// lbz r7,1627(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1627);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e79c8
	if (ctx.cr6.eq) goto loc_820E79C8;
	// lwz r11,700(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 700);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e7978
	if (ctx.cr6.eq) goto loc_820E7978;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x820e79e4
	goto loc_820E79E4;
loc_820E7978:
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e79b4
	if (ctx.cr6.eq) goto loc_820E79B4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30248);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e79b4
	if (ctx.cr6.eq) goto loc_820E79B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x820e79e4
	goto loc_820E79E4;
loc_820E79B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x820e79e4
	goto loc_820E79E4;
loc_820E79C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r10,r11,-2072
	ctx.r10.s64 = ctx.r11.s64 + -2072;
	// lfs f0,-2072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_820E79E4:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,-17040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E78F8) {
	__imp__sub_820E78F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E7A20;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x820E7A28;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-19428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19428);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e7b90
	if (ctx.cr6.eq) goto loc_820E7B90;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e7a6c
	if (ctx.cr6.eq) goto loc_820E7A6C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e7b90
	if (!ctx.cr6.eq) goto loc_820E7B90;
loc_820E7A6C:
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
	// mullw r10,r30,r8
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r7,-5696
	ctx.r9.s64 = ctx.r7.s64 + -5696;
	// addi r6,r9,332
	ctx.r6.s64 = ctx.r9.s64 + 332;
	// lwz r5,364(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// mulli r4,r5,404
	ctx.r4.s64 = ctx.r5.s64 * 404;
	// lhzx r3,r4,r6
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e7b90
	if (ctx.cr6.eq) goto loc_820E7B90;
	// bl 0x82332af8
	ctx.lr = 0x820E7AB0;
	sub_82332AF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7b90
	if (ctx.cr6.eq) goto loc_820E7B90;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-17040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	// lfs f0,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e7b90
	if (ctx.cr6.lt) goto loc_820E7B90;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820e78f8
	ctx.lr = 0x820E7AF4;
	sub_820E78F8(ctx, base);
	// lwz r10,296(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// bl 0x82141ca8
	ctx.lr = 0x820E7B10;
	sub_82141CA8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e7b28
	if (ctx.cr6.eq) goto loc_820E7B28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_820E7B28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,6004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x8210fcc8
	ctx.lr = 0x820E7B3C;
	sub_8210FCC8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r31,288(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,3212(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f28,f1,f0,f29
	ctx.f28.f64 = double(float(-(ctx.f1.f64 * ctx.f0.f64 - ctx.f29.f64)));
	// bl 0x82141160
	ctx.lr = 0x820E7B54;
	sub_82141160(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// lfs f6,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x820E7B90;
	sub_82120408(ctx, base);
loc_820E7B90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x820E7B9C;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7A18) {
	__imp__sub_820E7A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7BA0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23288
	ctx.r6.s64 = ctx.r11.s64 + 23288;
	// lis r5,-32181
	ctx.r5.s64 = -2109014016;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r5,-5696
	ctx.r11.s64 = ctx.r5.s64 + -5696;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,332(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e7cb4
	if (ctx.cr6.eq) goto loc_820E7CB4;
	// bl 0x82332af8
	ctx.lr = 0x820E7C04;
	sub_82332AF8(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e7cb4
	if (ctx.cr6.eq) goto loc_820E7CB4;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-17040(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17040);
	// lfs f0,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e7cb4
	if (ctx.cr6.lt) goto loc_820E7CB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e78f8
	ctx.lr = 0x820E7C48;
	sub_820E78F8(ctx, base);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// lwz r31,288(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	// fmuls f29,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x820E7C78;
	sub_82141160(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lfs f6,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// bl 0x82120408
	ctx.lr = 0x820E7CB4;
	sub_82120408(ctx, base);
loc_820E7CB4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_820E7BA0) {
	__imp__sub_820E7BA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,8668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8668);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E7CD8) {
	__imp__sub_820E7CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e7d18
	if (ctx.cr6.eq) goto loc_820E7D18;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e7d7c
	if (!ctx.cr6.eq) goto loc_820E7D7C;
loc_820E7D18:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,8668(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8668);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17032);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e7d7c
	if (!ctx.cr6.eq) goto loc_820E7D7C;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820e7d84
	if (!ctx.cr6.eq) goto loc_820E7D84;
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e7d7c
	if (!ctx.cr6.eq) goto loc_820E7D7C;
	// lwz r11,532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820e7dac
	if (!ctx.cr6.eq) goto loc_820E7DAC;
loc_820E7D7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820E7D84:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820e7d7c
	if (ctx.cr6.eq) goto loc_820E7D7C;
loc_820E7DAC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E7CF0) {
	__imp__sub_820E7CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E7DB4) {
	__imp__sub_820E7DB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7DB8) {
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
	// bl 0x823de024
	ctx.lr = 0x820E7DD0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-17016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17016);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e7e80
	if (!ctx.cr6.eq) goto loc_820E7E80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// bge cr6,0x820e7e80
	if (!ctx.cr6.lt) goto loc_820E7E80;
	// lwz r31,288(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820e7e80
	if (ctx.cr6.eq) goto loc_820E7E80;
	// lwz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f3
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f29,f11,f12
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fsubs f27,f2,f28
	ctx.f27.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// bl 0x82141160
	ctx.lr = 0x820E7E48;
	sub_82141160(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fsubs f1,f30,f28
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f6,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x82120408
	ctx.lr = 0x820E7E80;
	sub_82120408(ctx, base);
loc_820E7E80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x820E7E8C;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E7DB8) {
	__imp__sub_820E7DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7EA0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,1988
	ctx.r10.u64 = ctx.r11.u64 | 1988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x820e7ef0
	if (ctx.cr6.eq) goto loc_820E7EF0;
	// lfs f13,1144(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1144);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e7ef4
	goto loc_820E7EF4;
loc_820E7EF0:
	// lfs f13,1148(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1148);
	ctx.f13.f64 = double(temp.f32);
loc_820E7EF4:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f12,f1,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820e7f54
	if (!ctx.cr6.gt) goto loc_820E7F54;
	// fdivs f31,f12,f13
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f31,f13,f0
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,5524(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1140(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 1140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823dde60
	ctx.lr = 0x820E7F2C;
	sub_823DDE60(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r9,2112
	ctx.r7.u64 = ctx.r9.u64 | 2112;
	// lfs f0,3212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E7F54:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E7EA0) {
	__imp__sub_820E7EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E7F70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E7F78;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x820E7F80;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,288(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 288);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e80ac
	if (ctx.cr6.eq) goto loc_820E80AC;
	// lwz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// bne cr6,0x820e8038
	if (!ctx.cr6.eq) goto loc_820E8038;
	// lbz r11,1634(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1634);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8038
	if (ctx.cr6.eq) goto loc_820E8038;
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
	// addi r6,r11,22976
	ctx.r6.s64 = ctx.r11.s64 + 22976;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e8038
	if (ctx.cr6.eq) goto loc_820E8038;
	// lis r10,4194
	ctx.r10.s64 = 274857984;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,19923
	ctx.r8.u64 = ctx.r10.u64 | 19923;
	// mulhw r7,r11,r8
	ctx.r7.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32)) >> 32;
	// lfs f13,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// srawi r10,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 6;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r5,r6,1000
	ctx.r5.s64 = ctx.r6.s64 * 1000;
	// subf r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_820E8038:
	// fmuls f31,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// bl 0x82141ca8
	ctx.lr = 0x820E8040;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8058
	if (ctx.cr6.eq) goto loc_820E8058;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_820E8058:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f31,f0
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsubs f29,f29,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// bl 0x82141160
	ctx.lr = 0x820E8070;
	sub_82141160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f1,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f28.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f8,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820E80AC;
	sub_82120408(ctx, base);
loc_820E80AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x820E80B8;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E7F70) {
	__imp__sub_820E7F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E80BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E80BC) {
	__imp__sub_820E80BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E80C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E80C8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82333c60
	ctx.lr = 0x820E80F8;
	sub_82333C60(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// ori r9,r11,23632
	ctx.r9.u64 = ctx.r11.u64 | 23632;
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r28,r9
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f12,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f9,f8,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// bl 0x823dde60
	ctx.lr = 0x820E8134;
	sub_823DDE60(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r6,304(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r4,r7,2112
	ctx.r4.u64 = ctx.r7.u64 | 2112;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f4,88(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// lfs f0,3212(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f2,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f2.f64 = double(temp.f32);
	// frsp f13,f3
	ctx.f13.f64 = double(float(ctx.f3.f64));
	// fdivs f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 / ctx.f2.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e8178
	if (!ctx.cr6.lt) goto loc_820E8178;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E8178:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f13,f12,f0
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f0.f64)));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,872(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f10,f9,f0
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f9.f64 - ctx.f0.f64)));
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E80C0) {
	__imp__sub_820E80C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E81A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E81A4) {
	__imp__sub_820E81A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E81A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lis r5,-32181
	ctx.r5.s64 = -2109014016;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-17040(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -17040);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r10,-5704(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + -5704);
	// lfs f0,6232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f2,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f2.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f8,12(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E81A8) {
	__imp__sub_820E81A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8208) {
	__imp__sub_820E8208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E822C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E822C) {
	__imp__sub_820E822C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820E8238;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de014
	ctx.lr = 0x820E8240;
	__savefpr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,292(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 292);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// beq cr6,0x820e846c
	if (ctx.cr6.eq) goto loc_820E846C;
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
	// bl 0x820e7820
	ctx.lr = 0x820E8288;
	sub_820E7820(ctx, base);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// ori r6,r8,23632
	ctx.r6.u64 = ctx.r8.u64 | 23632;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r3,-32181
	ctx.r3.s64 = -2109014016;
	// lfs f0,6232(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f11,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f10,f11,f0,f13
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// lwz r11,-17040(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -17040);
	// lwz r10,-5704(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + -5704);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f0,f8,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e82f4
	if (!ctx.cr6.lt) goto loc_820E82F4;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E82F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820e846c
	if (ctx.cr6.lt) goto loc_820E846C;
	// lwz r11,300(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f31,f12,f30
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820e80c0
	ctx.lr = 0x820E8340;
	sub_820E80C0(ctx, base);
	// bl 0x82141ca8
	ctx.lr = 0x820E8344;
	sub_82141CA8(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e835c
	if (ctx.cr6.eq) goto loc_820E835C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_820E835C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82141160
	ctx.lr = 0x820E8364;
	sub_82141160(ctx, base);
	// fsubs f13,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f27,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,14156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14156);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f25,f31,f0
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fnmsubs f24,f31,f30,f29
	ctx.f24.f64 = double(float(-(ctx.f31.f64 * ctx.f30.f64 - ctx.f29.f64)));
	// lfs f5,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f5.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// fmuls f23,f31,f0
	ctx.f23.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsubs f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// fsubs f2,f12,f25
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f25.f64));
	// bl 0x820ea2f0
	ctx.lr = 0x820E83C0;
	sub_820EA2F0(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fnmsubs f30,f31,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(-(ctx.f31.f64 * ctx.f30.f64 - ctx.f28.f64)));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f26,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f5,5188(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5188);
	ctx.f5.f64 = double(temp.f32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x820ea2f0
	ctx.lr = 0x820E83FC;
	sub_820EA2F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f1,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fadds f2,f27,f28
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f5,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f5.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x820ea2f0
	ctx.lr = 0x820E8430;
	sub_820EA2F0(ctx, base);
	// fsubs f11,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f2,f30,f25
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f25.f64));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f5,14160(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14160);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f26.f64));
	// fsubs f1,f10,f23
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f23.f64));
	// bl 0x820ea2f0
	ctx.lr = 0x820E846C;
	sub_820EA2F0(ctx, base);
loc_820E846C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de060
	ctx.lr = 0x820E8478;
	__restfpr_23(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E8230) {
	__imp__sub_820E8230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E847C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E847C) {
	__imp__sub_820E847C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E8488;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82141160
	ctx.lr = 0x820E849C;
	sub_82141160(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7450
	ctx.lr = 0x820E84B0;
	sub_820E7450(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e8598
	if (ctx.cr6.eq) goto loc_820E8598;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,58140
	ctx.r7.u64 = ctx.r8.u64 | 58140;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820e8598
	if (!ctx.cr6.eq) goto loc_820E8598;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r10,58148
	ctx.r8.u64 = ctx.r10.u64 | 58148;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// stwx r9,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r9.u32);
	// lbz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e8514
	if (ctx.cr6.eq) goto loc_820E8514;
	// lfs f13,808(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 808);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,812(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	ctx.f12.f64 = double(temp.f32);
	// b 0x820e851c
	goto loc_820E851C;
loc_820E8514:
	// lfs f13,800(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 800);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,804(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 804);
	ctx.f12.f64 = double(temp.f32);
loc_820E851C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,14000(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e8544
	if (ctx.cr6.gt) goto loc_820E8544;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,3212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3212);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x820e8598
	if (!ctx.cr6.gt) goto loc_820E8598;
loc_820E8544:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// fnmsubs f9,f13,f0,f11
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f8,f12,f0,f10
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82140bc8
	ctx.lr = 0x820E8584;
	sub_82140BC8(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r3,2092
	ctx.r3.s64 = ctx.r3.s64 + 2092;
	// bl 0x820e7320
	ctx.lr = 0x820E8598;
	sub_820E7320(ctx, base);
loc_820E8598:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E8480) {
	__imp__sub_820E8480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E85A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E85A8;
	__savegprlr_29(ctx, base);
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r8,r11,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820e860c
	if (ctx.cr6.eq) goto loc_820E860C;
	// bl 0x8211baf0
	ctx.lr = 0x820E85E4;
	sub_8211BAF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e86a4
	if (ctx.cr6.eq) goto loc_820E86A4;
	// bl 0x82332af8
	ctx.lr = 0x820E85F0;
	sub_82332AF8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r11,-5936
	ctx.r5.s64 = ctx.r11.s64 + -5936;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8480
	ctx.lr = 0x820E8604;
	sub_820E8480(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E860C:
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e8624
	if (ctx.cr6.eq) goto loc_820E8624;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e86a4
	if (ctx.cr6.eq) goto loc_820E86A4;
loc_820E8624:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E862C;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e86a4
	if (ctx.cr6.eq) goto loc_820E86A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E8640;
	sub_82332C28(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e7018
	ctx.lr = 0x820E864C;
	sub_820E7018(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e86a4
	if (ctx.cr6.eq) goto loc_820E86A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,14164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e86a4
	if (ctx.cr6.lt) goto loc_820E86A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E8674;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E8680;
	sub_82332C28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e6ed0
	ctx.lr = 0x820E8694;
	sub_820E6ED0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8480
	ctx.lr = 0x820E86A4;
	sub_820E8480(ctx, base);
loc_820E86A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E85A0) {
	__imp__sub_820E85A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E86AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E86AC) {
	__imp__sub_820E86AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E86B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820E86B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x820E86C0;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// bl 0x8210fc78
	ctx.lr = 0x820E86EC;
	sub_8210FC78(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f31,704(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f31.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r5,r11,0,20,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// lwz r10,6964(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6964);
	// lfs f26,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lfs f28,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// stfs f26,80(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r27,r3,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// beq cr6,0x820e87d8
	if (ctx.cr6.eq) goto loc_820E87D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211baf0
	ctx.lr = 0x820E873C;
	sub_8211BAF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e8798
	if (ctx.cr6.eq) goto loc_820E8798;
	// bl 0x82332af8
	ctx.lr = 0x820E8748;
	sub_82332AF8(ctx, base);
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e8770
	if (!ctx.cr6.eq) goto loc_820E8770;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8798
	if (ctx.cr6.eq) goto loc_820E8798;
	// lwz r11,784(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8798
	if (ctx.cr6.eq) goto loc_820E8798;
loc_820E8770:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r6,r11,-5936
	ctx.r6.s64 = ctx.r11.s64 + -5936;
	// addi r5,r10,-2072
	ctx.r5.s64 = ctx.r10.s64 + -2072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7538
	ctx.lr = 0x820E8788;
	sub_820E7538(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x820E8794;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820E8798:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210b820
	ctx.lr = 0x820E87A0;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e897c
	if (!ctx.cr6.eq) goto loc_820E897C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
	// lwz r11,364(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7a18
	ctx.lr = 0x820E87C8;
	sub_820E7A18(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x820E87D4;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820E87D8:
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e8808
	if (ctx.cr6.eq) goto loc_820E8808;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e8808
	if (!ctx.cr6.eq) goto loc_820E8808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7ba0
	ctx.lr = 0x820E87F8;
	sub_820E7BA0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x820E8804;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820E8808:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E8810;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E8824;
	sub_82332C28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e7820
	ctx.lr = 0x820E8830;
	sub_820E7820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8210b820
	ctx.lr = 0x820E883C;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e897c
	if (!ctx.cr6.eq) goto loc_820E897C;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e78f8
	ctx.lr = 0x820E8860;
	sub_820E78F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x820e897c
	if (ctx.cr6.lt) goto loc_820E897C;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bne cr6,0x820e8890
	if (!ctx.cr6.eq) goto loc_820E8890;
	// lwz r11,-17016(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17016);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e897c
	if (!ctx.cr6.eq) goto loc_820E897C;
loc_820E8890:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e7cf0
	ctx.lr = 0x820E8898;
	sub_820E7CF0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e6ed0
	ctx.lr = 0x820E88B4;
	sub_820E6ED0(ctx, base);
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820e88fc
	if (ctx.cr6.eq) goto loc_820E88FC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e7ea0
	ctx.lr = 0x820E88DC;
	sub_820E7EA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// bl 0x820e7db8
	ctx.lr = 0x820E88FC;
	sub_820E7DB8(ctx, base);
loc_820E88FC:
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bne cr6,0x820e8914
	if (!ctx.cr6.eq) goto loc_820E8914;
	// lwz r11,-17016(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -17016);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e897c
	if (ctx.cr6.eq) goto loc_820E897C;
loc_820E8914:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30192(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30192);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e8940
	if (!ctx.cr6.eq) goto loc_820E8940;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
	// bl 0x8210fcc8
	ctx.lr = 0x820E8934;
	sub_8210FCC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,14056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14056);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_820E8940:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820e7f70
	ctx.lr = 0x820E895C;
	sub_820E7F70(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820e8230
	ctx.lr = 0x820E897C;
	sub_820E8230(ctx, base);
loc_820E897C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x820E8988;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E86B0) {
	__imp__sub_820E86B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E898C) {
	__imp__sub_820E898C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8990) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8990) {
	__imp__sub_820E8990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8998) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8998) {
	__imp__sub_820E8998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E89A0) {
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
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// bl 0x82141160
	ctx.lr = 0x820E89BC;
	sub_82141160(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r11,40964
	ctx.r6.u64 = ctx.r11.u64 | 40964;
	// ori r5,r10,40968
	ctx.r5.u64 = ctx.r10.u64 | 40968;
	// ori r4,r9,40972
	ctx.r4.u64 = ctx.r9.u64 | 40972;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r7,40976
	ctx.r10.u64 = ctx.r7.u64 | 40976;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,40980
	ctx.r8.u64 = ctx.r11.u64 | 40980;
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stbx r9,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r9.u8);
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// lfs f13,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r31,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
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

PPC_WEAK_FUNC(sub_820E89A0) {
	__imp__sub_820E89A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x820E8A28;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de000
	ctx.lr = 0x820E8A30;
	__savefpr_18(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r18,r3,1
	ctx.r18.s64 = ctx.r3.s64 + 65536;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r18,r18,-24572
	ctx.r18.s64 = ctx.r18.s64 + -24572;
	// lbz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e8bb4
	if (!ctx.cr6.eq) goto loc_820E8BB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f25,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f23,14180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14180);
	ctx.f23.f64 = double(temp.f32);
	// addis r28,r3,1
	ctx.r28.s64 = ctx.r3.s64 + 65536;
	// lfs f29,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// lfs f21,14176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14176);
	ctx.f21.f64 = double(temp.f32);
	// addis r26,r3,1
	ctx.r26.s64 = ctx.r3.s64 + 65536;
	// lfs f26,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// addis r25,r3,1
	ctx.r25.s64 = ctx.r3.s64 + 65536;
	// lfs f22,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f22.f64 = double(temp.f32);
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// lfs f19,6004(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6004);
	ctx.f19.f64 = double(temp.f32);
	// li r20,0
	ctx.r20.s64 = 0;
	// fmr f20,f25
	ctx.f20.f64 = ctx.f25.f64;
	// addi r28,r28,-24556
	ctx.r28.s64 = ctx.r28.s64 + -24556;
	// addi r27,r27,-24564
	ctx.r27.s64 = ctx.r27.s64 + -24564;
	// addi r26,r26,-24560
	ctx.r26.s64 = ctx.r26.s64 + -24560;
	// addi r25,r25,-24568
	ctx.r25.s64 = ctx.r25.s64 + -24568;
	// addi r22,r3,12808
	ctx.r22.s64 = ctx.r3.s64 + 12808;
	// addi r23,r23,-29692
	ctx.r23.s64 = ctx.r23.s64 + -29692;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
loc_820E8AC0:
	// clrlwi r11,r20,31
	ctx.r11.u64 = ctx.r20.u32 & 0x1;
	// lfs f0,14168(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 14168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f20,f0
	ctx.f30.f64 = double(float(ctx.f20.f64 * ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8adc
	if (ctx.cr6.eq) goto loc_820E8ADC;
	// fmr f24,f19
	ctx.f24.f64 = ctx.f19.f64;
	// b 0x820e8ae0
	goto loc_820E8AE0;
loc_820E8ADC:
	// fmr f24,f25
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f25.f64;
loc_820E8AE0:
	// fsubs f0,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// addi r30,r23,-8
	ctx.r30.s64 = ctx.r23.s64 + -8;
	// addi r31,r22,-12
	ctx.r31.s64 = ctx.r22.s64 + -12;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// li r29,32
	ctx.r29.s64 = 32;
	// addi r23,r23,256
	ctx.r23.s64 = ctx.r23.s64 + 256;
	// addi r22,r22,512
	ctx.r22.s64 = ctx.r22.s64 + 512;
	// fmuls f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f21.f64));
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// fmuls f27,f0,f0
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
loc_820E8B08:
	// fadds f13,f31,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f24.f64));
	// lfs f0,14172(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 14172);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f30,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// lfs f8,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f25,12(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f6,f10,f7,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f5,f7,f26
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// stfsu f29,16(r31)
	ea = 16 + ctx.r31.u32;
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfs f7,-5116(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + -5116, temp.u32);
	// stfs f30,-5112(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + -5112, temp.u32);
	// fmuls f18,f5,f23
	ctx.f18.f64 = double(float(ctx.f5.f64 * ctx.f23.f64));
	// fmr f1,f18
	ctx.f1.f64 = ctx.f18.f64;
	// bl 0x823de9c8
	ctx.lr = 0x820E8B58;
	sub_823DE9C8(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fmadds f3,f18,f18,f27
	ctx.f3.f64 = double(float(ctx.f18.f64 * ctx.f18.f64 + ctx.f27.f64));
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fadds f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// fmuls f2,f4,f22
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// stfs f2,4(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fsqrts f1,f3
	ctx.f1.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfsu f1,8(r30)
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// bne 0x820e8b08
	if (!ctx.cr0.eq) goto loc_820E8B08;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// fadds f20,f20,f29
	ctx.f20.f64 = double(float(ctx.f20.f64 + ctx.f29.f64));
	// cmplwi cr6,r20,20
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 20, ctx.xer);
	// bne cr6,0x820e8ac0
	if (!ctx.cr6.eq) goto loc_820E8AC0;
	// li r5,10240
	ctx.r5.s64 = 10240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823de090
	ctx.lr = 0x820E8B9C;
	sub_823DE090(ctx, base);
	// li r5,7680
	ctx.r5.s64 = 7680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r21,23040
	ctx.r3.s64 = ctx.r21.s64 + 23040;
	// bl 0x823de090
	ctx.lr = 0x820E8BAC;
	sub_823DE090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r18)
	PPC_STORE_U8(ctx.r18.u32 + 0, ctx.r11.u8);
loc_820E8BB4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de04c
	ctx.lr = 0x820E8BC0;
	__restfpr_18(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E8A20) {
	__imp__sub_820E8A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E8BC4) {
	__imp__sub_820E8BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40964
	ctx.r11.u64 = ctx.r11.u64 | 40964;
	// lbzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8BC8) {
	__imp__sub_820E8BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8BD8) {
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
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,1920
	ctx.r9.s64 = ctx.r10.s64 + 1920;
	// addi r3,r10,2560
	ctx.r3.s64 = ctx.r10.s64 + 2560;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r10,3840
	ctx.r6.s64 = ctx.r10.s64 + 3840;
	// lis r31,0
	ctx.r31.s64 = 0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r30,r10,800
	ctx.r30.s64 = ctx.r10.s64 + 800;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r3,r31,40960
	ctx.r3.u64 = ctx.r31.u64 | 40960;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r30,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82393ba8
	ctx.lr = 0x820E8C48;
	sub_82393BA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8BD8) {
	__imp__sub_820E8BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8C60) {
	__imp__sub_820E8C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8C70) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x820e8a20
	ctx.lr = 0x820E8C90;
	sub_820E8A20(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// li r9,20
	ctx.r9.s64 = 20;
loc_820E8C98:
	// li r10,32
	ctx.r10.s64 = 32;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E8CA0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x820e8ca0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E8CA0;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820e8c98
	if (!ctx.cr0.eq) goto loc_820E8C98;
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

PPC_WEAK_FUNC(sub_820E8C70) {
	__imp__sub_820E8C70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E8CD4) {
	__imp__sub_820E8CD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8CD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e8cec
	if (!ctx.cr6.lt) goto loc_820E8CEC;
	// fdivs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// blr 
	return;
loc_820E8CEC:
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e8d04
	if (!ctx.cr6.lt) goto loc_820E8D04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820E8D04:
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e8d30
	if (!ctx.cr6.lt) goto loc_820E8D30;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f1,f0,f10
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// blr 
	return;
loc_820E8D30:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8CD8) {
	__imp__sub_820E8CD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E8D3C) {
	__imp__sub_820E8D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E8D48;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de018
	ctx.lr = 0x820E8D50;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// fmr f28,f2
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f2.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lis r29,-32189
	ctx.r29.s64 = -2109538304;
	// lwz r11,32392(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32392);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e8d90
	if (!ctx.cr6.eq) goto loc_820E8D90;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,32392(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32392, ctx.r11.u32);
	// lfs f0,14188(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32388(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32388, temp.u32);
loc_820E8D90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x820e8db8
	if (!ctx.cr6.lt) goto loc_820E8DB8;
	// fdivs f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// b 0x820e8df8
	goto loc_820E8DF8;
loc_820E8DB8:
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e8dd8
	if (!ctx.cr6.lt) goto loc_820E8DD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x820e8e00
	goto loc_820E8E00;
loc_820E8DD8:
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e8f34
	if (!ctx.cr6.lt) goto loc_820E8F34;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f29,f31,f10
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
loc_820E8DF8:
	// fcmpu cr6,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x820e8f34
	if (!ctx.cr6.gt) goto loc_820E8F34;
loc_820E8E00:
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6032(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// lfs f13,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820e8f34
	if (ctx.cr6.lt) goto loc_820E8F34;
	// fsubs f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x820e8f34
	if (ctx.cr6.gt) goto loc_820E8F34;
	// fadds f12,f27,f0
	ctx.f12.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x820e8f34
	if (ctx.cr6.lt) goto loc_820E8F34;
	// fsubs f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820e8f34
	if (ctx.cr6.gt) goto loc_820E8F34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e8a20
	ctx.lr = 0x820E8E48;
	sub_820E8A20(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,32388(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32388);
	ctx.f9.f64 = double(temp.f32);
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f6,6032(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 6032);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f3,14184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14184);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f2,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f2.f64 = double(temp.f32);
	// lfs f11,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f12,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,14172(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14172);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,14168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14168);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,6020(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	ctx.f8.f64 = double(temp.f32);
loc_820E8E98:
	// fmsubs f0,f4,f5,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fmsubs f0,f0,f11,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f27.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x820e8f20
	if (ctx.cr6.gt) goto loc_820E8F20;
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x820e8f20
	if (ctx.cr6.lt) goto loc_820E8F20;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e8ec8
	if (ctx.cr6.eq) goto loc_820E8EC8;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// b 0x820e8ecc
	goto loc_820E8ECC;
loc_820E8EC8:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_820E8ECC:
	// li r10,32
	ctx.r10.s64 = 32;
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
	// addi r11,r9,-16
	ctx.r11.s64 = ctx.r9.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E8EDC:
	// fadds f1,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f26,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fmsubs f1,f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 - ctx.f12.f64));
	// fmsubs f1,f1,f11,f28
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 - ctx.f28.f64));
	// fmadds f1,f1,f1,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f10.f64));
	// fsqrts f1,f1
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f1,f1,f8
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fsubs f25,f1,f31
	ctx.f25.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// fneg f24,f1
	ctx.f24.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f1,f25,f31,f1
	ctx.f1.f64 = ctx.f25.f64 >= 0.0 ? ctx.f31.f64 : ctx.f1.f64;
	// fsel f1,f24,f30,f1
	ctx.f1.f64 = ctx.f24.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// fsubs f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f1,f1,f29,f26
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f26.f64));
	// stfsu f1,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820e8edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E8EDC;
loc_820E8F20:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fadds f4,f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f31.f64));
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// bne cr6,0x820e8e98
	if (!ctx.cr6.eq) goto loc_820E8E98;
loc_820E8F34:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de064
	ctx.lr = 0x820E8F40;
	__restfpr_24(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E8D40) {
	__imp__sub_820E8D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E8F44) {
	__imp__sub_820E8F44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8F48) {
	PPC_FUNC_PROLOGUE();
	// li r8,160
	ctx.r8.s64 = 160;
	// addi r10,r3,10240
	ctx.r10.s64 = ctx.r3.s64 + 10240;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r7,-32
	ctx.r7.s64 = -32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_820E8F64:
	// lvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v61,v63,8
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_set1_ps(256))));
	// lvx128 v60,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v62,8
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_set1_ps(256))));
	// lvx128 v58,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v60,8
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_set1_ps(256))));
	// vcfpsxws128 v56,v58,8
	simde_mm_store_si128((simde__m128i*)ctx.v56.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_set1_ps(256))));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// vpkswss128 v55,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.s32), simde_mm_load_si128((simde__m128i*)ctx.v59.s32)));
	// vpkswss128 v54,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packs_epi32(simde_mm_load_si128((simde__m128i*)ctx.v57.s32), simde_mm_load_si128((simde__m128i*)ctx.v56.s32)));
	// vpkshus128 v53,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v55.s16), simde_mm_load_si128((simde__m128i*)ctx.v54.s16)));
	// stvx128 v53,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x820e8f64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E8F64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E8F48) {
	__imp__sub_820E8F48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E8FA4) {
	__imp__sub_820E8FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E8FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E8FB0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x820E8FB8;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bge cr6,0x820e8fec
	if (!ctx.cr6.lt) goto loc_820E8FEC;
	// fdivs f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// b 0x820e9028
	goto loc_820E9028;
loc_820E8FEC:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e9000
	if (!ctx.cr6.lt) goto loc_820E9000;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x820e9028
	goto loc_820E9028;
loc_820E9000:
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e9024
	if (!ctx.cr6.lt) goto loc_820E9024;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fdivs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f29,f31,f10
	ctx.f29.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// b 0x820e9028
	goto loc_820E9028;
loc_820E9024:
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
loc_820E9028:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f2,f0
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f27,f0
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E9044;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// lfs f28,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f27,f13,f28
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// beq cr6,0x820e9128
	if (ctx.cr6.eq) goto loc_820E9128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e8a20
	ctx.lr = 0x820E9068;
	sub_820E8A20(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// li r8,20
	ctx.r8.s64 = 20;
	// fdivs f0,f31,f11
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fdivs f13,f31,f9
	ctx.f13.f64 = double(float(ctx.f31.f64 / ctx.f9.f64));
loc_820E909C:
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820E90A4:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f11
	ctx.f4.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fsubs f2,f28,f4
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f4.f64));
	// fsubs f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fneg f12,f3
	ctx.f12.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsubs f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f4.f64));
	// fsel f9,f1,f31,f3
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// fsel f8,f11,f4,f2
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f4.f64 : ctx.f2.f64;
	// fsel f7,f12,f30,f9
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f12,f2,f31,f3
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f3.f64;
	// fsel f11,f1,f30,f12
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmadds f7,f8,f29,f5
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f5.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x820e90a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E90A4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820e909c
	if (!ctx.cr0.eq) goto loc_820E909C;
loc_820E9128:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x820E9134;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E8FA8) {
	__imp__sub_820E8FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9138) {
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
	// bl 0x823de018
	ctx.lr = 0x820E9150;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f0
	ctx.f7.f64 = ctx.f0.f64;
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// lfs f5,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f9,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// fmr f7,f4
	ctx.f7.f64 = ctx.f4.f64;
	// fmadds f13,f11,f10,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f4
	ctx.f10.f64 = ctx.f4.f64;
	// fmadds f29,f4,f2,f13
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f8,f12,f0,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f11,f3
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmadds f2,f4,f9,f8
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fnmadds f30,f4,f6,f5
	ctx.f30.f64 = double(float(-(ctx.f4.f64 * ctx.f6.f64 + ctx.f5.f64)));
	// bl 0x823de9c8
	ctx.lr = 0x820E91D8;
	sub_823DE9C8(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lfs f31,12336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f26,f4,f31
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// bl 0x823dedc8
	ctx.lr = 0x820E91F0;
	sub_823DEDC8(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fneg f2,f30
	ctx.f2.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lfs f30,14204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14204);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f3,f31
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// bl 0x823de9c8
	ctx.lr = 0x820E920C;
	sub_823DE9C8(ctx, base);
	// fsubs f2,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,14200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14200);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f29,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f29.f64 = double(temp.f32);
	// fsel f12,f2,f30,f28
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f30.f64 : ctx.f28.f64;
	// fmuls f30,f1,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fsel f11,f13,f0,f12
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f1,f11,f29
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// bl 0x823dde60
	ctx.lr = 0x820E923C;
	sub_823DDE60(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fsubs f8,f30,f26
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fabs f7,f28
	ctx.f7.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,2420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2420);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,14196(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14196);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8888(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8888);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,2416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,5488(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// lfs f9,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f25,f8,f13
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fmuls f4,f6,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fadds f1,f25,f10
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f10.f64));
	// fmuls f24,f5,f9
	ctx.f24.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fneg f2,f4
	ctx.f2.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f0,f3,f0,f4
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f4.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fsel f28,f2,f31,f0
	ctx.f28.f64 = ctx.f2.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// bl 0x823dde20
	ctx.lr = 0x820E92AC;
	sub_823DDE20(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fneg f11,f24
	ctx.f11.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f24,f0
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// lfs f13,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f25,f12
	ctx.f9.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// fsel f8,f10,f0,f24
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f24.f64;
	// fsel f7,f11,f31,f8
	ctx.f7.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmadds f0,f6,f13,f26
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f26.f64));
	// beq cr6,0x820e9324
	if (ctx.cr6.eq) goto loc_820E9324;
	// fmuls f31,f0,f29
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x820E92F4;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9304;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// bl 0x820e8d40
	ctx.lr = 0x820E9324;
	sub_820E8D40(ctx, base);
loc_820E9324:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x820e8fa8
	ctx.lr = 0x820E933C;
	sub_820E8FA8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de064
	ctx.lr = 0x820E9348;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E9138) {
	__imp__sub_820E9138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E935C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E935C) {
	__imp__sub_820E935C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E9368;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// ori r8,r11,22912
	ctx.r8.u64 = ctx.r11.u64 | 22912;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// subf. r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820e9404
	if (ctx.cr0.eq) goto loc_820E9404;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820e9404
	if (!ctx.cr6.lt) goto loc_820E9404;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// addi r4,r4,28
	ctx.r4.s64 = ctx.r4.s64 + 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f10,f9
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e9138
	ctx.lr = 0x820E93E8;
	sub_820E9138(ctx, base);
	// addis r4,r30,2
	ctx.r4.s64 = ctx.r30.s64 + 131072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r4,2128
	ctx.r4.s64 = ctx.r4.s64 + 2128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e9138
	ctx.lr = 0x820E9404;
	sub_820E9138(ctx, base);
loc_820E9404:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E9360) {
	__imp__sub_820E9360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E9418;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823ddff0
	ctx.lr = 0x820E9420;
	__savefpr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,14228(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14228);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,14224(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14224);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lfs f11,14220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14220);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f20,14216(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14216);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f21,14212(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14212);
	ctx.f21.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f22,14208(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14208);
	ctx.f22.f64 = double(temp.f32);
	// lfs f31,7544(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f23,13772(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 13772);
	ctx.f23.f64 = double(temp.f32);
	// lfs f28,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f19,f9,f13
	ctx.f19.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f13,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f18,f9,f12
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f17,f9,f11
	ctx.f17.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f16,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f16.f64 = double(temp.f32);
	// lfs f29,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
loc_820E94DC:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e94f0
	if (ctx.cr6.eq) goto loc_820E94F0;
	// lfs f24,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f24.f64 = double(temp.f32);
	// b 0x820e94f4
	goto loc_820E94F4;
loc_820E94F0:
	// fmr f24,f29
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = ctx.f29.f64;
loc_820E94F4:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f9,f10,f16,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f16.f64 - ctx.f29.f64));
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f27,f8,f0
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f26,f8,f29
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmuls f25,f8,f13
	ctx.f25.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
loc_820E9528:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f24
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// fmsubs f10,f11,f23,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f23.f64 - ctx.f29.f64));
	// fmuls f15,f10,f28
	ctx.f15.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f9,f15,f22
	ctx.f9.f64 = double(float(ctx.f15.f64 * ctx.f22.f64));
	// fmadds f8,f27,f31,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fsubs f1,f19,f8
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f8.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9558;
	sub_823DE800(ctx, base);
	// fadds f7,f26,f15
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f26.f64 + ctx.f15.f64));
	// frsp f14,f1
	ctx.f14.f64 = double(float(ctx.f1.f64));
	// fmsubs f1,f7,f31,f18
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 - ctx.f18.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9568;
	sub_823DE800(ctx, base);
	// fnmsubs f6,f15,f21,f25
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(-(ctx.f15.f64 * ctx.f21.f64 - ctx.f25.f64)));
	// frsp f15,f1
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmsubs f1,f6,f31,f17
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 - ctx.f17.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9578;
	sub_823DE800(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f30,-4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f4,f5,f15
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f15.f64));
	// fadds f3,f4,f14
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f14.f64));
	// fadds f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f31.f64));
	// fmuls f1,f2,f20
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f20.f64));
	// stfs f1,-8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x820e9528
	if (!ctx.cr6.eq) goto loc_820E9528;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bne cr6,0x820e94dc
	if (!ctx.cr6.eq) goto loc_820E94DC;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de03c
	ctx.lr = 0x820E95C4;
	__restfpr_14(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E9410) {
	__imp__sub_820E9410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E95C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E95D0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823ddff0
	ctx.lr = 0x820E95D8;
	__savefpr_14(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f12,4292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4292);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,2832(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2832);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,14264(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14264);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f0,14268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14268);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f22,5488(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5488);
	ctx.f22.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f23,14260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14260);
	ctx.f23.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f9,13772(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 13772);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f13,14256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14256);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f27,f8,f0
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f12,14252(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14252);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f8,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f11,6820(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6820);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f10,14248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14248);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f3,f8,f22
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f22.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f7,124(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f28,f8,f23
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// lfs f8,14244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14244);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f7,6040(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6040);
	ctx.f7.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f6,14212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14212);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f5,14220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14220);
	ctx.f5.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,14216(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14216);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,7544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,14240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14240);
	ctx.f29.f64 = double(temp.f32);
	// lfs f24,14236(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14236);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,6908(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6908);
	ctx.f25.f64 = double(temp.f32);
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f4,6048(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6048);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,14232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14232);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-23144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -23144);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lfs f26,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820E9744:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e975c
	if (ctx.cr6.eq) goto loc_820E975C;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x820e9760
	goto loc_820E9760;
loc_820E975C:
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_820E9760:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r11.u64);
	// lfd f12,184(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f9,f0,f26
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f26.f64));
	// fmuls f3,f4,f22
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f22.f64));
	// fmuls f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// stfs f1,148(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f2,f3,f25
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmuls f0,f3,f24
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f24.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f3,f23
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f23.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f12,f3,f10
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f12,164(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmuls f21,f3,f8
	ctx.f21.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f20,f3,f7
	ctx.f20.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f19,f3,f6
	ctx.f19.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmuls f18,f3,f5
	ctx.f18.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
loc_820E97D4:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f21,f31
	ctx.f12.f64 = double(float(ctx.f21.f64 * ctx.f31.f64));
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f11,192(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmsubs f7,f8,f13,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f26.f64));
	// fmuls f17,f7,f22
	ctx.f17.f64 = double(float(ctx.f7.f64 * ctx.f22.f64));
	// fmadds f6,f17,f29,f12
	ctx.f6.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fsubs f1,f6,f28
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f28.f64));
	// bl 0x823de800
	ctx.lr = 0x820E980C;
	sub_823DE800(ctx, base);
	// lfs f5,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// frsp f16,f1
	ctx.f16.f64 = double(float(ctx.f1.f64));
	// fnmsubs f4,f17,f5,f20
	ctx.f4.f64 = double(float(-(ctx.f17.f64 * ctx.f5.f64 - ctx.f20.f64)));
	// lfs f3,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f1,f4,f31,f3
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f3.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9824;
	sub_823DE800(ctx, base);
	// lfs f2,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// frsp f15,f1
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f17,f2
	ctx.f1.f64 = double(float(ctx.f17.f64 * ctx.f2.f64));
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f19,f31,f1
	ctx.f13.f64 = double(float(ctx.f19.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9840;
	sub_823DE800(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f11,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f17,f25,f18
	ctx.f10.f64 = double(float(ctx.f17.f64 * ctx.f25.f64 - ctx.f18.f64));
	// fadds f9,f12,f15
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f15.f64));
	// fmadds f1,f10,f31,f11
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f11.f64));
	// fadds f16,f9,f16
	ctx.f16.f64 = double(float(ctx.f9.f64 + ctx.f16.f64));
	// bl 0x823de800
	ctx.lr = 0x820E985C;
	sub_823DE800(ctx, base);
	// lfs f8,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f8.f64 = double(temp.f32);
	// frsp f15,f1
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f6,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f17,f6,f7
	ctx.f5.f64 = double(float(ctx.f17.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fsubs f1,f28,f5
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f5.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9878;
	sub_823DE800(ctx, base);
	// lfs f4,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f4.f64 = double(temp.f32);
	// frsp f14,f1
	ctx.f14.f64 = double(float(ctx.f1.f64));
	// fmsubs f3,f17,f23,f4
	ctx.f3.f64 = double(float(ctx.f17.f64 * ctx.f23.f64 - ctx.f4.f64));
	// fmsubs f1,f3,f31,f27
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 - ctx.f27.f64));
	// bl 0x823de800
	ctx.lr = 0x820E988C;
	sub_823DE800(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// fnmsubs f0,f17,f24,f1
	ctx.f0.f64 = double(float(-(ctx.f17.f64 * ctx.f24.f64 - ctx.f1.f64)));
	// fadds f13,f2,f14
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f14.f64));
	// fmsubs f1,f0,f31,f27
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f27.f64));
	// fadds f15,f13,f15
	ctx.f15.f64 = double(float(ctx.f13.f64 + ctx.f15.f64));
	// bl 0x823de800
	ctx.lr = 0x820E98A8;
	sub_823DE800(ctx, base);
	// lfs f12,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// frsp f14,f1
	ctx.f14.f64 = double(float(ctx.f1.f64));
	// fmsubs f11,f17,f29,f12
	ctx.f11.f64 = double(float(ctx.f17.f64 * ctx.f29.f64 - ctx.f12.f64));
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f1,f11,f31,f10
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 - ctx.f10.f64));
	// bl 0x823de800
	ctx.lr = 0x820E98C0;
	sub_823DE800(ctx, base);
	// lfs f9,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f16,f31
	ctx.f8.f64 = double(float(ctx.f16.f64 + ctx.f31.f64));
	// fmuls f7,f9,f31
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// lfs f6,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f15,f31
	ctx.f5.f64 = double(float(ctx.f15.f64 + ctx.f31.f64));
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// frsp f16,f1
	ctx.f16.f64 = double(float(ctx.f1.f64));
	// fmuls f15,f8,f30
	ctx.f15.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmadds f3,f17,f6,f7
	ctx.f3.f64 = double(float(ctx.f17.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmuls f17,f5,f30
	ctx.f17.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fadds f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// bl 0x823de800
	ctx.lr = 0x820E98F0;
	sub_823DE800(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f1,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,-8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// stfs f15,-4(r31)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f17,0(r31)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f0,f2,f16
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f16.f64));
	// fadds f13,f0,f14
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f14.f64));
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x820e97d4
	if (!ctx.cr6.eq) goto loc_820E97D4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bne cr6,0x820e9744
	if (!ctx.cr6.eq) goto loc_820E9744;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de03c
	ctx.lr = 0x820E9940;
	__restfpr_14(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E95C8) {
	__imp__sub_820E95C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E9944) {
	__imp__sub_820E9944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E9950;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823ddff0
	ctx.lr = 0x820E9958;
	__savefpr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,14224(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14224);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,14220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14220);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,14228(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 14228);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,6040(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6040);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f24,14272(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14272);
	ctx.f24.f64 = double(temp.f32);
	// lfs f18,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f18.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f19,7540(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7540);
	ctx.f19.f64 = double(temp.f32);
	// lfs f20,14212(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 14212);
	ctx.f20.f64 = double(temp.f32);
	// lfs f21,14208(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 14208);
	ctx.f21.f64 = double(temp.f32);
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f12,7036(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f11,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f17,f8,f13
	ctx.f17.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f13,14216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14216);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfd f5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f31,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f31.f64 = double(temp.f32);
	// lfs f22,13772(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13772);
	ctx.f22.f64 = double(temp.f32);
	// lfs f30,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f30.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820e9a44
	goto loc_820E9A44;
loc_820E9A40:
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
loc_820E9A44:
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e9a58
	if (ctx.cr6.eq) goto loc_820E9A58;
	// fmr f23,f0
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f0.f64;
	// b 0x820e9a5c
	goto loc_820E9A5C;
loc_820E9A58:
	// fmr f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f29.f64;
loc_820E9A5C:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmsubs f8,f9,f0,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 - ctx.f29.f64));
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f28,f7,f10
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f27,f7,f29
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f26,f7,f13
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f25,f7,f7
	ctx.f25.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
loc_820E9A94:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f11,f12,f23
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f23.f64));
	// fmsubs f10,f11,f22,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f22.f64 - ctx.f29.f64));
	// fmuls f16,f10,f30
	ctx.f16.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f9,f16,f21
	ctx.f9.f64 = double(float(ctx.f16.f64 * ctx.f21.f64));
	// fmadds f8,f28,f31,f9
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fsubs f1,f17,f8
	ctx.f1.f64 = double(float(ctx.f17.f64 - ctx.f8.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9AC4;
	sub_823DE800(ctx, base);
	// fadds f7,f27,f16
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f16.f64));
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// frsp f15,f1
	ctx.f15.f64 = double(float(ctx.f1.f64));
	// fmsubs f1,f7,f31,f6
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 - ctx.f6.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9AD8;
	sub_823DE800(ctx, base);
	// fnmsubs f5,f16,f20,f26
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(-(ctx.f16.f64 * ctx.f20.f64 - ctx.f26.f64)));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// frsp f14,f1
	ctx.f14.f64 = double(float(ctx.f1.f64));
	// fmsubs f1,f5,f31,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f4.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9AEC;
	sub_823DE800(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfd f1,128(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fadds f2,f3,f14
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f14.f64));
	// fadds f15,f2,f15
	ctx.f15.f64 = double(float(ctx.f2.f64 + ctx.f15.f64));
	// bl 0x823de800
	ctx.lr = 0x820E9B00;
	sub_823DE800(ctx, base);
	// fmadds f0,f16,f16,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f16.f64 * ctx.f16.f64 + ctx.f25.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmadds f13,f1,f19,f15
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f19.f64 + ctx.f15.f64));
	// fmadds f11,f12,f30,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fsubs f0,f11,f18
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f18.f64));
	// fcmpu cr6,f0,f24
	ctx.cr6.compare(ctx.f0.f64, ctx.f24.f64);
	// bge cr6,0x820e9b28
	if (!ctx.cr6.lt) goto loc_820E9B28;
	// fmr f0,f24
	ctx.f0.f64 = ctx.f24.f64;
	// b 0x820e9b34
	goto loc_820E9B34;
loc_820E9B28:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820e9b34
	if (!ctx.cr6.gt) goto loc_820E9B34;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
loc_820E9B34:
	// fadds f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,-8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne cr6,0x820e9a94
	if (!ctx.cr6.eq) goto loc_820E9A94;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 20, ctx.xer);
	// bne cr6,0x820e9a40
	if (!ctx.cr6.eq) goto loc_820E9A40;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de03c
	ctx.lr = 0x820E9B7C;
	__restfpr_14(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E9948) {
	__imp__sub_820E9948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820E9B88;
	__savegprlr_25(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r28,r11,40960
	ctx.r28.u64 = ctx.r11.u64 | 40960;
loc_820E9BA8:
	// clrlwi r25,r26,31
	ctx.r25.u64 = ctx.r26.u32 & 0x1;
	// li r27,0
	ctx.r27.s64 = 0;
loc_820E9BB0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// beq cr6,0x820e9be8
	if (ctx.cr6.eq) goto loc_820E9BE8;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r5,r11,33
	ctx.r5.s64 = ctx.r11.s64 + 33;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// b 0x820e9c08
	goto loc_820E9C08;
loc_820E9BE8:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,33
	ctx.r10.s64 = ctx.r11.s64 + 33;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r5,r11,32
	ctx.r5.s64 = ctx.r11.s64 + 32;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
loc_820E9C08:
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r30,r3,16
	ctx.r30.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r5,2560
	ctx.r5.s64 = ctx.r5.s64 + 2560;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820e9c64
	if (!ctx.cr6.eq) goto loc_820E9C64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r5,2560
	ctx.r5.s64 = ctx.r5.s64 + 2560;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820e9c64
	if (!ctx.cr6.eq) goto loc_820E9C64;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r5,2560
	ctx.r5.s64 = ctx.r5.s64 + 2560;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e9c74
	if (ctx.cr6.eq) goto loc_820E9C74;
loc_820E9C64:
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// sthu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r8.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_820E9C74:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820e9cc8
	if (!ctx.cr6.eq) goto loc_820E9CC8;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820e9cc8
	if (!ctx.cr6.eq) goto loc_820E9CC8;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2560
	ctx.r11.s64 = ctx.r11.s64 + 2560;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e9cd8
	if (ctx.cr6.eq) goto loc_820E9CD8;
loc_820E9CC8:
	// sth r31,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r31.u16);
	// sthu r10,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r8.u32 = ea;
	// sthu r4,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r8.u32 = ea;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
loc_820E9CD8:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// addi r9,r5,6
	ctx.r9.s64 = ctx.r5.s64 + 6;
	// cmplwi cr6,r9,1536
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1536, ctx.xer);
	// ble cr6,0x820e9d60
	if (!ctx.cr6.gt) goto loc_820E9D60;
	// addi r11,r30,1920
	ctx.r11.s64 = ctx.r30.s64 + 1920;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r9,r30,3840
	ctx.r9.s64 = ctx.r30.s64 + 3840;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r30,2560
	ctx.r4.s64 = ctx.r30.s64 + 2560;
	// addi r11,r30,800
	ctx.r11.s64 = ctx.r30.s64 + 800;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r7,r31,33
	ctx.r7.s64 = ctx.r31.s64 + 33;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82393ba8
	ctx.lr = 0x820E9D4C;
	sub_82393BA8(ctx, base);
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// clrlwi r3,r5,16
	ctx.r3.u64 = ctx.r5.u32 & 0xFFFF;
loc_820E9D60:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x820e9bb0
	if (!ctx.cr6.eq) goto loc_820E9BB0;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r31,r9,16
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x820e9ba8
	if (!ctx.cr6.eq) goto loc_820E9BA8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi. r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820e9e00
	if (ctx.cr0.eq) goto loc_820E9E00;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// addi r7,r31,33
	ctx.r7.s64 = ctx.r31.s64 + 33;
	// addi r10,r11,1920
	ctx.r10.s64 = ctx.r11.s64 + 1920;
	// addi r8,r11,3840
	ctx.r8.s64 = ctx.r11.s64 + 3840;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,2560
	ctx.r6.s64 = ctx.r11.s64 + 2560;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,800
	ctx.r11.s64 = ctx.r11.s64 + 800;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r8,r29
	ctx.r6.u64 = ctx.r8.u64 + ctx.r29.u64;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82393ba8
	ctx.lr = 0x820E9E00;
	sub_82393BA8(ctx, base);
loc_820E9E00:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E9B80) {
	__imp__sub_820E9B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E9E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x820E9E10;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,24272
	ctx.r12.u64 = ctx.r12.u64 | 24272;
	// bl 0x823dedd4
	ctx.lr = 0x820E9E20;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r10,r1,191
	ctx.r10.s64 = ctx.r1.s64 + 191;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r10,0,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r11,21480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21480);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ea134
	if (ctx.cr6.eq) goto loc_820EA134;
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
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820e89a0
	ctx.lr = 0x820E9E6C;
	sub_820E89A0(ctx, base);
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lwz r11,6216(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6216);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e9f40
	if (ctx.cr6.eq) goto loc_820E9F40;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820e9f40
	if (ctx.cr6.eq) goto loc_820E9F40;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820e9ec8
	if (!ctx.cr6.eq) goto loc_820E9EC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8a20
	ctx.lr = 0x820E9E98;
	sub_820E8A20(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-22896
	ctx.r9.s64 = ctx.r11.s64 + -22896;
	// ori r8,r10,40960
	ctx.r8.u64 = ctx.r10.u64 | 40960;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r6,r7,22912
	ctx.r6.u64 = ctx.r7.u64 | 22912;
	// lwzx r3,r28,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x820e9410
	ctx.lr = 0x820E9EC4;
	sub_820E9410(ctx, base);
	// b 0x820ea114
	goto loc_820EA114;
loc_820E9EC8:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x820e9f04
	if (!ctx.cr6.eq) goto loc_820E9F04;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8a20
	ctx.lr = 0x820E9ED8;
	sub_820E8A20(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,40960
	ctx.r8.u64 = ctx.r10.u64 | 40960;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r28,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lwz r11,-22896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x820e95c8
	ctx.lr = 0x820E9F00;
	sub_820E95C8(ctx, base);
	// b 0x820ea114
	goto loc_820EA114;
loc_820E9F04:
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x820ea134
	if (!ctx.cr6.eq) goto loc_820EA134;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8a20
	ctx.lr = 0x820E9F14;
	sub_820E8A20(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,40960
	ctx.r8.u64 = ctx.r10.u64 | 40960;
	// ori r7,r9,22912
	ctx.r7.u64 = ctx.r9.u64 | 22912;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r3,r28,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lwz r11,-22896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// stwx r11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// bl 0x820e9948
	ctx.lr = 0x820E9F3C;
	sub_820E9948(ctx, base);
	// b 0x820ea114
	goto loc_820EA114;
loc_820E9F40:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r7,-32188
	ctx.r7.s64 = -2109472768;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lwz r8,-30048(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30048);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r7,-1244(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -1244);
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// lwz r9,-30072(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30072);
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lwz r11,-17088(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -17088);
	// lis r24,-32168
	ctx.r24.s64 = -2108162048;
	// lis r4,-32188
	ctx.r4.s64 = -2109472768;
	// lis r27,-32168
	ctx.r27.s64 = -2108162048;
	// lfs f12,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,-15700(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -15700);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,-30036(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30036);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,-17064(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + -17064);
	// lwz r10,-30244(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -30244);
	// lis r30,-32187
	ctx.r30.s64 = -2109407232;
	// lwz r11,-29996(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -29996);
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lwz r8,-1220(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + -1220);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r5,6960(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 6960);
	// lis r27,-32181
	ctx.r27.s64 = -2109014016;
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r25,-32187
	ctx.r25.s64 = -2109407232;
	// lbz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lwz r9,-19444(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -19444);
	// li r30,0
	ctx.r30.s64 = 0;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lwz r4,-29944(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29944);
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lwz r8,-5700(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + -5700);
	// li r27,2
	ctx.r27.s64 = 2;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lis r24,-32168
	ctx.r24.s64 = -2108162048;
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lis r23,-32168
	ctx.r23.s64 = -2108162048;
	// stb r11,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, ctx.r11.u8);
	// lfs f8,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lwz r7,-30024(r26)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30024);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r6,-17028(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + -17028);
	// lfs f6,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,-30064(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30064);
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f5,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lwz r4,-30196(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + -30196);
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f2,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f3,112(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// bne cr6,0x820ea094
	if (!ctx.cr6.eq) goto loc_820EA094;
	// lwz r11,-22896(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
	// b 0x820ea09c
	goto loc_820EA09C;
loc_820EA094:
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_820EA09C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// ori r9,r10,40960
	ctx.r9.u64 = ctx.r10.u64 | 40960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x820e6210
	ctx.lr = 0x820EA0B4;
	sub_820E6210(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820ea0f0
	if (ctx.cr6.eq) goto loc_820EA0F0;
	// addis r30,r28,2
	ctx.r30.s64 = ctx.r28.s64 + 131072;
	// li r31,12
	ctx.r31.s64 = 12;
	// addi r30,r30,19060
	ctx.r30.s64 = ctx.r30.s64 + 19060;
loc_820EA0CC:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e9360
	ctx.lr = 0x820EA0E4;
	sub_820E9360(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,68
	ctx.r30.s64 = ctx.r30.s64 + 68;
	// bne 0x820ea0cc
	if (!ctx.cr0.eq) goto loc_820EA0CC;
loc_820EA0F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x820ea114
	if (ctx.cr6.eq) goto loc_820EA114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,6032(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x820e8c70
	ctx.lr = 0x820EA114;
	sub_820E8C70(ctx, base);
loc_820EA114:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,40964
	ctx.r10.u64 = ctx.r11.u64 | 40964;
	// lbzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ea134
	if (ctx.cr6.eq) goto loc_820EA134;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8f48
	ctx.lr = 0x820EA130;
	sub_820E8F48(ctx, base);
	// bl 0x820e9b80
	ctx.lr = 0x820EA134;
	sub_820E9B80(ctx, base);
loc_820EA134:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E9E08) {
	__imp__sub_820E9E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EA148;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x820EA150;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f5,f0
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de720
	ctx.lr = 0x820EA184;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de800
	ctx.lr = 0x820EA190;
	sub_823DE800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,-16788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f12,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmuls f5,f29,f12
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f13,2424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f28,f12
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f12.f64));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmuls f3,f6,f31
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f1,f4,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f12,f6,f30
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f6,f2,f11
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fmuls f5,f1,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmuls f4,f6,f26
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f26.f64));
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmadds f11,f3,f11,f6
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmuls f1,f5,f26
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f26.f64));
	// fmuls f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmadds f6,f12,f10,f5
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmuls f5,f4,f13
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f3,f2,f13
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fsubs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// fadds f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f6.f64));
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f9,f1
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f10,f10,f1
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// fadds f9,f2,f6
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// fadds f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f1,f5,f6
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f6,f3,f0
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f11,f7
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f4,f4,f8
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f3,120(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f2,f13,f7
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f2,124(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x8238c0b8
	ctx.lr = 0x820EA2BC;
	sub_8238C0B8(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82392af0
	ctx.lr = 0x820EA2DC;
	sub_82392AF0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x820EA2E8;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA140) {
	__imp__sub_820EA140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EA2EC) {
	__imp__sub_820EA2EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA2F0) {
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
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// bl 0x82140bc8
	ctx.lr = 0x820EA330;
	sub_82140BC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f4,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f3,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ea140
	ctx.lr = 0x820EA354;
	sub_820EA140(ctx, base);
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

PPC_WEAK_FUNC(sub_820EA2F0) {
	__imp__sub_820EA2F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EA36C) {
	__imp__sub_820EA36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA370) {
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
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// stfs f2,148(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r6,r1,156
	ctx.r6.s64 = ctx.r1.s64 + 156;
	// stfs f3,156(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// stfs f4,164(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f5
	ctx.f31.f64 = ctx.f5.f64;
	// bl 0x82140810
	ctx.lr = 0x820EA3B0;
	sub_82140810(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f4,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,196(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f3,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ea140
	ctx.lr = 0x820EA3D4;
	sub_820EA140(ctx, base);
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

PPC_WEAK_FUNC(sub_820EA370) {
	__imp__sub_820EA370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EA3EC) {
	__imp__sub_820EA3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EA3F8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823ddff8
	ctx.lr = 0x820EA400;
	__savefpr_16(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f3,f0
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de720
	ctx.lr = 0x820EA430;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823de800
	ctx.lr = 0x820EA43C;
	sub_823DE800(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f27,f12,f6
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f26,f10,f6
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f25,f6,f7
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f24,f8,f6
	ctx.f24.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f10,f10,f6
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f21,f6,f31
	ctx.f21.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f23,f6,f4
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f22,f6,f5
	ctx.f22.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmuls f26,f26,f3
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f3.f64));
	// fmuls f19,f6,f31
	ctx.f19.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f20,f6,f30
	ctx.f20.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f25,f25,f11
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f11.f64));
	// fmadds f10,f10,f9,f21
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f21.f64));
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f17,f6,f31
	ctx.f17.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f27,f27,f28
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f26,f26,f28
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f28.f64));
	// fmadds f8,f8,f9,f19
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f19.f64));
	// fmadds f12,f12,f9,f20
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f20.f64));
	// fmuls f18,f6,f30
	ctx.f18.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f24,f24,f3
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f3.f64));
	// fmuls f23,f23,f11
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f11.f64));
	// fmuls f16,f6,f30
	ctx.f16.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f22,f22,f3
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// fmuls f25,f25,f28
	ctx.f25.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// fmsubs f10,f10,f3,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 - ctx.f27.f64));
	// fmadds f5,f5,f9,f17
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f17.f64));
	// fmuls f27,f6,f2
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmadds f12,f12,f11,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f26.f64));
	// fmadds f7,f7,f9,f18
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f18.f64));
	// fmuls f24,f24,f28
	ctx.f24.f64 = double(float(ctx.f24.f64 * ctx.f28.f64));
	// fmuls f23,f23,f28
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f28.f64));
	// fmadds f4,f4,f9,f16
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f16.f64));
	// fmuls f22,f22,f28
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f28.f64));
	// fmsubs f8,f8,f3,f25
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 - ctx.f25.f64));
	// fmuls f26,f6,f1
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f27,f27,f11
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f11.f64));
	// fmadds f7,f7,f11,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f24.f64));
	// fmsubs f5,f5,f3,f23
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f23.f64));
	// fmadds f4,f4,f11,f22
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f22.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f6,f1
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f6,f2
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmuls f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// fmadds f31,f26,f9,f31
	ctx.f31.f64 = double(float(ctx.f26.f64 * ctx.f9.f64 + ctx.f31.f64));
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmuls f2,f27,f28
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f28.f64));
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f1,f1,f3
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f3.f64));
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f10,f9,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmsubs f10,f31,f3,f2
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f3.f64 - ctx.f2.f64));
	// fmuls f5,f5,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f5,112(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f4,f4,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f9,f1,f28
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f7,f12,f11,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// stfs f4,124(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8238c0b8
	ctx.lr = 0x820EA5DC;
	sub_8238C0B8(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82392af0
	ctx.lr = 0x820EA5FC;
	sub_82392AF0(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de044
	ctx.lr = 0x820EA608;
	__restfpr_16(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA3F0) {
	__imp__sub_820EA3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EA60C) {
	__imp__sub_820EA60C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA610) {
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
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// stfs f2,164(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// bl 0x82140bc8
	ctx.lr = 0x820EA648;
	sub_82140BC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f10,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f9,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f5,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f4,f7,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f3,f7,f11
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x820EA6AC;
	sub_82392A10(ctx, base);
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

PPC_WEAK_FUNC(sub_820EA610) {
	__imp__sub_820EA610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EA6C8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x820EA6D0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bne cr6,0x820ea700
	if (!ctx.cr6.eq) goto loc_820EA700;
	// fcmpu cr6,f2,f4
	ctx.cr6.compare(ctx.f2.f64, ctx.f4.f64);
	// beq cr6,0x820ea7e0
	if (ctx.cr6.eq) goto loc_820EA7E0;
loc_820EA700:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140530
	ctx.lr = 0x820EA70C;
	sub_82140530(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82140530
	ctx.lr = 0x820EA720;
	sub_82140530(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82140670
	ctx.lr = 0x820EA734;
	sub_82140670(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82140670
	ctx.lr = 0x820EA748;
	sub_82140670(ctx, base);
	// fsubs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// fsubs f13,f1,f30
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// bl 0x822d4b60
	ctx.lr = 0x820EA768;
	sub_822D4B60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f7,f0,f29
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f6,f29,f0
	ctx.f6.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// stfs f6,116(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f5,f30,f0
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f5,124(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f4,f13,f27
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f2,f31,f13
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f1,f27,f13
	ctx.f1.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x820EA7E0;
	sub_82392A10(ctx, base);
loc_820EA7E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x820EA7EC;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA6C0) {
	__imp__sub_820EA6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820EA7F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f1,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82140648
	ctx.lr = 0x820EA828;
	sub_82140648(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82140788
	ctx.lr = 0x820EA83C;
	sub_82140788(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140648
	ctx.lr = 0x820EA850;
	sub_82140648(ctx, base);
	// stfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140788
	ctx.lr = 0x820EA864;
	sub_82140788(ctx, base);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82140648
	ctx.lr = 0x820EA878;
	sub_82140648(ctx, base);
	// stfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82140788
	ctx.lr = 0x820EA88C;
	sub_82140788(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x82392a10
	ctx.lr = 0x820EA8B0;
	sub_82392A10(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA7F0) {
	__imp__sub_820EA7F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EA8C0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f0,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lfs f13,14276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14276);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fmadds f29,f3,f0,f2
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmuls f31,f3,f13
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// bne cr6,0x820ea90c
	if (!ctx.cr6.eq) goto loc_820EA90C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r11,-2072
	ctx.r31.s64 = ctx.r11.s64 + -2072;
loc_820EA90C:
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c2068
	ctx.lr = 0x820EA91C;
	sub_822C2068(ctx, base);
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r28.s64;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820EA960;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA8B8) {
	__imp__sub_820EA8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EA974) {
	__imp__sub_820EA974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EA978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EA980;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x820EA988;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r11,r31,30
	ctx.r11.u64 = ctx.r31.u32 & 0x3;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,-30044(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30044);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f27,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f0,f4
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f28,f0,f3
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// bne cr6,0x820ea9fc
	if (!ctx.cr6.eq) goto loc_820EA9FC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820EA9E0;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fnmsubs f30,f12,f28,f30
	ctx.f30.f64 = double(float(-(ctx.f12.f64 * ctx.f28.f64 - ctx.f30.f64)));
	// b 0x820eaa30
	goto loc_820EAA30;
loc_820EA9FC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820eaa30
	if (!ctx.cr6.eq) goto loc_820EAA30;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820EAA14;
	sub_8238B5A8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fnmsubs f30,f11,f27,f30
	ctx.f30.f64 = double(float(-(ctx.f11.f64 * ctx.f27.f64 - ctx.f30.f64)));
loc_820EAA30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238b698
	ctx.lr = 0x820EAA38;
	sub_8238B698(ctx, base);
	// rlwinm r11,r31,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820eaa64
	if (!ctx.cr6.eq) goto loc_820EAA64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f31,f12,f29,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f31.f64));
	// b 0x820eaa88
	goto loc_820EAA88;
loc_820EAA64:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x820eaa88
	if (!ctx.cr6.eq) goto loc_820EAA88;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmadds f31,f11,f27,f31
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f31.f64));
loc_820EAA88:
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821336a0
	ctx.lr = 0x820EAAC4;
	sub_821336A0(ctx, base);
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x820EAAF4;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EA978) {
	__imp__sub_820EA978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAAF8) {
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
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r8,-22896
	ctx.r7.s64 = ctx.r8.s64 + -22896;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r11,896(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 896);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820EAB30;
	sub_820EA978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EAAF8) {
	__imp__sub_820EAAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAB40) {
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
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addi r7,r8,-22896
	ctx.r7.s64 = ctx.r8.s64 + -22896;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f4,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// lwz r11,892(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 892);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820EAB78;
	sub_820EA978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EAB40) {
	__imp__sub_820EAB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAB88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x820eabd0
	if (!ctx.cr6.gt) goto loc_820EABD0;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820eabd0
	if (!ctx.cr6.lt) goto loc_820EABD0;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
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
loc_820EABD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EAB88) {
	__imp__sub_820EAB88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EABDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EABDC) {
	__imp__sub_820EABDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EABE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820eabf0
	if (!ctx.cr6.eq) goto loc_820EABF0;
loc_820EABE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820EABF0:
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x820eabe8
	if (!ctx.cr6.lt) goto loc_820EABE8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x820eac60
	if (!ctx.cr6.gt) goto loc_820EAC60;
	// subf r11,r11,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r11.s64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820eac60
	if (!ctx.cr6.lt) goto loc_820EAC60;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_820EAC60:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r3,r11,32400
	ctx.r3.s64 = ctx.r11.s64 + 32400;
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EABE0) {
	__imp__sub_820EABE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EAC7C) {
	__imp__sub_820EAC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAC80) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1202
	ctx.r3.s64 = 1202;
	// bl 0x821201a0
	ctx.lr = 0x820EACA4;
	sub_821201A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822e6d10
	ctx.lr = 0x820EACC8;
	sub_822E6D10(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8238bd98
	ctx.lr = 0x820EACD0;
	sub_8238BD98(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// ori r7,r8,20040
	ctx.r7.u64 = ctx.r8.u64 | 20040;
	// addi r30,r30,20044
	ctx.r30.s64 = ctx.r30.s64 + 20044;
	// stwx r3,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x820EACEC;
	sub_822E6D10(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x820EACF0;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x820EAD00;
	sub_822E6D10(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x820EAD04;
	sub_823DEC00(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r5,r6,20048
	ctx.r5.u64 = ctx.r6.u64 | 20048;
	// stfsx f13,r31,r5
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// bl 0x822e6d10
	ctx.lr = 0x820EAD1C;
	sub_822E6D10(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x820EAD20;
	sub_823DEC00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x822e6d10
	ctx.lr = 0x820EAD2C;
	sub_822E6D10(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x820EAD30;
	sub_823DEC00(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// ori r9,r4,20032
	ctx.r9.u64 = ctx.r4.u64 | 20032;
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// ori r8,r3,20036
	ctx.r8.u64 = ctx.r3.u64 | 20036;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f8,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,20052
	ctx.r11.s64 = ctx.r11.s64 + 20052;
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfsx f6,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// addi r10,r10,20056
	ctx.r10.s64 = ctx.r10.s64 + 20056;
	// fneg f4,f6
	ctx.f4.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12240(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12240);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmadds f1,f9,f6,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f0,f9,f7,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f2.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x820eada8
	if (!ctx.cr6.eq) goto loc_820EADA8;
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_820EADA8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820eadb4
	if (!ctx.cr6.eq) goto loc_820EADB4;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_820EADB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EAC80) {
	__imp__sub_820EAC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EADD0) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1201
	ctx.r3.s64 = 1201;
	// bl 0x821201a0
	ctx.lr = 0x820EADF4;
	sub_821201A0(ctx, base);
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
	// bl 0x823dec00
	ctx.lr = 0x820EAE10;
	sub_823DEC00(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r6,r7,20028
	ctx.r6.u64 = ctx.r7.u64 | 20028;
	// lfs f0,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f13,r31,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x820EAE34;
	sub_823DE720(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// ori r4,r5,20036
	ctx.r4.u64 = ctx.r5.u64 | 20036;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfsx f12,r31,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// bl 0x823de800
	ctx.lr = 0x820EAE4C;
	sub_823DE800(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r10,r11,20032
	ctx.r10.u64 = ctx.r11.u64 | 20032;
	// stfsx f11,r31,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// bl 0x820eac80
	ctx.lr = 0x820EAE64;
	sub_820EAC80(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EADD0) {
	__imp__sub_820EADD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAE80) {
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
	// li r3,1203
	ctx.r3.s64 = 1203;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821201a0
	ctx.lr = 0x820EAEB0;
	sub_821201A0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e6d10
	ctx.lr = 0x820EAEBC;
	sub_822E6D10(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820eaeec
	if (!ctx.cr6.eq) goto loc_820EAEEC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,61920
	ctx.r9.u64 = ctx.r11.u64 | 61920;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
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
loc_820EAEEC:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8238bd98
	ctx.lr = 0x820EAEF4;
	sub_8238BD98(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61920
	ctx.r10.u64 = ctx.r11.u64 | 61920;
	// stwx r3,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_820EAE80) {
	__imp__sub_820EAE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EAF14) {
	__imp__sub_820EAF14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAF18) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82127ea8
	sub_82127EA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EAF18) {
	__imp__sub_820EAF18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAF20) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82128080
	sub_82128080(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EAF20) {
	__imp__sub_820EAF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAF28) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82127f30
	sub_82127F30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EAF28) {
	__imp__sub_820EAF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EAF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EAF38;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x820EAF40;
	__savefpr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x820EAF6C;
	sub_823DE720(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x820EAF78;
	sub_823DE800(ctx, base);
	// lfs f10,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f4,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f12,f4,f5
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
	// fmuls f25,f9,f30
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f24,f9,f30
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f23,f0,f30
	ctx.f23.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f22,f0,f30
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f31,f6
	ctx.f31.f64 = ctx.f6.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fmuls f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmsubs f25,f6,f11,f25
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f25.f64));
	// fmsubs f31,f13,f11,f24
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f24.f64));
	// fadds f21,f2,f3
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f21,88(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmsubs f29,f6,f11,f23
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f23.f64));
	// fmsubs f28,f13,f11,f22
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f22.f64));
	// fadds f21,f2,f3
	ctx.f21.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f21,100(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f24,f2,f3
	ctx.f24.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f8,f6,f30,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f7,f13,f30,f7
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f5,f6,f30,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f5.f64));
	// fmr f4,f0
	ctx.f4.f64 = ctx.f0.f64;
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f3,f1,f25
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f3,f1,f31
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f3,f1,f28
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f27,f13
	ctx.f27.f64 = ctx.f13.f64;
	// fadds f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f10,f7
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f7,f1,f29
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f5,f10,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// stfs f5,108(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f31,f9,f30
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// li r30,12
	ctx.r30.s64 = 12;
	// fmadds f4,f13,f30,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f4.f64));
	// addi r11,r10,14280
	ctx.r11.s64 = ctx.r10.s64 + 14280;
	// fmsubs f5,f6,f11,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f5.f64));
	// fmadds f3,f6,f30,f3
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f3.f64));
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmsubs f8,f13,f11,f31
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64));
	// fmadds f7,f7,f30,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fadds f9,f2,f12
	ctx.f9.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f4,f10,f4
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f4,120(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f4,f0,f30
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f5,f1,f5
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f5,160(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f3,f2,f12
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// stfs f3,172(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fadds f8,f1,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// stfs f8,140(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fadds f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f7,144(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f12,f6,f30,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmsubs f2,f6,f11,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f4.f64));
	// fmsubs f11,f13,f11,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 - ctx.f31.f64));
	// fmadds f9,f13,f30,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f8,f1,f2
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fadds f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_820EB138:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82127ea8
	ctx.lr = 0x820EB17C;
	sub_82127EA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820eb138
	if (!ctx.cr0.eq) goto loc_820EB138;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x820EB190;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EAF30) {
	__imp__sub_820EAF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB194) {
	__imp__sub_820EB194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EB1A0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de00c
	ctx.lr = 0x820EB1A8;
	__savefpr_21(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,8
	ctx.r9.s64 = 8;
	// lfs f30,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f29,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f28,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f11,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f25,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
loc_820EB220:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eb234
	if (ctx.cr6.eq) goto loc_820EB234;
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x820eb238
	goto loc_820EB238;
loc_820EB234:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_820EB238:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// fmadds f0,f30,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eb254
	if (ctx.cr6.eq) goto loc_820EB254;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x820eb258
	goto loc_820EB258;
loc_820EB254:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_820EB258:
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// fmadds f0,f28,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f27.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820eb274
	if (ctx.cr6.eq) goto loc_820EB274;
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
	// b 0x820eb278
	goto loc_820EB278;
loc_820EB274:
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f25.f64;
loc_820EB278:
	// fmadds f0,f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f24,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f22,f23,f10
	ctx.f22.f64 = double(float(ctx.f23.f64 * ctx.f10.f64));
	// fmuls f21,f23,f7
	ctx.f21.f64 = double(float(ctx.f23.f64 * ctx.f7.f64));
	// fmuls f23,f23,f4
	ctx.f23.f64 = double(float(ctx.f23.f64 * ctx.f4.f64));
	// fmadds f22,f0,f9,f22
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f22.f64));
	// fmadds f21,f0,f6,f21
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f21.f64));
	// fmadds f0,f0,f3,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f23.f64));
	// fmadds f23,f24,f11,f22
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f22.f64));
	// stfs f23,4(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f23,f24,f8,f21
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f21.f64));
	// stfs f23,8(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f0,f24,f5,f0
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f5.f64 + ctx.f0.f64));
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820eb220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820EB220;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,12
	ctx.r30.s64 = 12;
	// addi r11,r11,14280
	ctx.r11.s64 = ctx.r11.s64 + 14280;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_820EB2F8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzu r11,8(r31)
	ea = 8 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bl 0x82127ea8
	ctx.lr = 0x820EB33C;
	sub_82127EA8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x820eb2f8
	if (!ctx.cr0.eq) goto loc_820EB2F8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de058
	ctx.lr = 0x820EB350;
	__restfpr_21(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB198) {
	__imp__sub_820EB198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB354) {
	__imp__sub_820EB354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820EB360;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x820EB368;
	__savefpr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x822d4b08
	ctx.lr = 0x820EB38C;
	sub_822D4B08(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d53f8
	ctx.lr = 0x820EB398;
	sub_822D53F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f27,14376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14376);
	ctx.f27.f64 = double(temp.f32);
	// fmsubs f30,f12,f10,f8
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fmsubs f29,f13,f9,f7
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fmsubs f28,f0,f11,f6
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f6.f64));
loc_820EB3DC:
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f26,f12,f27
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x823de720
	ctx.lr = 0x820EB3FC;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// fmuls f26,f11,f31
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x823de800
	ctx.lr = 0x820EB40C;
	sub_823DE800(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f30,f26,f9
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f9.f64));
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f29,f26,f8
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f26.f64 + ctx.f8.f64));
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f4,f28,f26,f6
	ctx.f4.f64 = double(float(ctx.f28.f64 * ctx.f26.f64 + ctx.f6.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f4,12(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f10,f31
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// fmadds f12,f3,f13,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f1,f13,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f13,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfsu f8,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// blt cr6,0x820eb3dc
	if (ctx.cr6.lt) goto loc_820EB3DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
loc_820EB47C:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r11,r31,1,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1E;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82127ea8
	ctx.lr = 0x820EB4B0;
	sub_82127EA8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x820eb47c
	if (ctx.cr6.lt) goto loc_820EB47C;
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x820EB4CC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB358) {
	__imp__sub_820EB358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820EB4D8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x820EB4E0;
	__savefpr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f13,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f0,14380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14380);
	ctx.f0.f64 = double(temp.f32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// bge cr6,0x820eb530
	if (!ctx.cr6.lt) goto loc_820EB530;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820EB530:
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f28.f64 = double(temp.f32);
loc_820EB544:
	// clrldi r11,r31,32
	ctx.r11.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmadds f11,f12,f30,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmuls f27,f11,f28
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de720
	ctx.lr = 0x820EB568;
	sub_823DE720(ctx, base);
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823de800
	ctx.lr = 0x820EB574;
	sub_823DE800(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fmadds f7,f26,f29,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 * ctx.f29.f64 + ctx.f8.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f7,8(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// fmadds f5,f10,f29,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f9.f64));
	// stfs f5,4(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfsu f6,12(r30)
	ea = 12 + ctx.r30.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x820eb544
	if (ctx.cr6.lt) goto loc_820EB544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r31,15
	ctx.r31.s64 = 15;
loc_820EB5AC:
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82127ea8
	ctx.lr = 0x820EB5C8;
	sub_82127EA8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne 0x820eb5ac
	if (!ctx.cr0.eq) goto loc_820EB5AC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x820EB5E0;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB4D0) {
	__imp__sub_820EB4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB5E4) {
	__imp__sub_820EB5E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EB5F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r6,r8,-15680
	ctx.r6.s64 = ctx.r8.s64 + -15680;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ori r5,r7,61924
	ctx.r5.u64 = ctx.r7.u64 | 61924;
	// addis r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 131072;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,2092
	ctx.r11.s64 = ctx.r11.s64 + 2092;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r29,36
	ctx.r4.s64 = ctx.r29.s64 + 36;
	// bl 0x822d6770
	ctx.lr = 0x820EB630;
	sub_822D6770(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x820eb738
	if (ctx.cr6.gt) goto loc_820EB738;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fneg f0,f11
	ctx.f0.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x820eb6a0
	if (!ctx.cr6.eq) goto loc_820EB6A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f0,f9,f8
	ctx.f7.f64 = ctx.f0.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EB6A0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// bne cr6,0x820eb6e0
	if (!ctx.cr6.eq) goto loc_820EB6E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsel f9,f13,f10,f11
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EB6E0:
	// lfs f12,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fdivs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsel f5,f6,f7,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f4,0(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,4(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f12,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f12,f3
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EB738:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f7,f11,f8,f0
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// fmuls f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 / ctx.f3.f64));
	// fnmsubs f1,f2,f8,f0
	ctx.f1.f64 = double(float(-(ctx.f2.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB5E8) {
	__imp__sub_820EB5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB798) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,2116
	ctx.r11.s64 = ctx.r11.s64 + 2116;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f13,f1
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f0,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f11,f5
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f7,f11
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820eb5e8
	ctx.lr = 0x820EB82C;
	sub_820EB5E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EB798) {
	__imp__sub_820EB798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB83C) {
	__imp__sub_820EB83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EB848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82141160
	ctx.lr = 0x820EB85C;
	sub_82141160(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eb5e8
	ctx.lr = 0x820EB874;
	sub_820EB5E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,32(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f10,f13,f0,f12
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f9,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f8,f9,f0,f11
	ctx.f8.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f8,4(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// lfs f6,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f4,0(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f3,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f2,4(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB840) {
	__imp__sub_820EB840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB8C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB8C4) {
	__imp__sub_820EB8C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// stfs f3,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r9,-22896
	ctx.r7.s64 = ctx.r9.s64 + -22896;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,896(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 896);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820EB910;
	sub_820EA978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EB8C8) {
	__imp__sub_820EB8C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// stfs f3,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r9,-22896
	ctx.r7.s64 = ctx.r9.s64 + -22896;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lfs f4,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,892(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 892);
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f4,100(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820ea978
	ctx.lr = 0x820EB968;
	sub_820EA978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EB920) {
	__imp__sub_820EB920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB978) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB978) {
	__imp__sub_820EB978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,29
	ctx.r3.s64 = 29;
	// addi r4,r11,-28736
	ctx.r4.s64 = ctx.r11.s64 + -28736;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EB988) {
	__imp__sub_820EB988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820eb9cc
	if (!ctx.cr6.eq) goto loc_820EB9CC;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x820eb9cc
	if (!ctx.cr6.eq) goto loc_820EB9CC;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820EB9CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EB998) {
	__imp__sub_820EB998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EB9D4) {
	__imp__sub_820EB9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EB9D8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822eee00
	ctx.lr = 0x820EBA00;
	sub_822EEE00(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x820EBA0C;
	sub_822DA650(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x820EBA34;
	sub_822D67F0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EB9D8) {
	__imp__sub_820EB9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EBA4C) {
	__imp__sub_820EBA4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EBA58;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ebad4
	if (ctx.cr6.eq) goto loc_820EBAD4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,392(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r3,392
	ctx.r30.s64 = ctx.r3.s64 + 392;
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820ebabc
	if (!ctx.cr6.eq) goto loc_820EBABC;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820ebabc
	if (!ctx.cr6.eq) goto loc_820EBABC;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820ebabc
	if (!ctx.cr6.eq) goto loc_820EBABC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x820eb9d8
	ctx.lr = 0x820EBABC;
	sub_820EB9D8(ctx, base);
loc_820EBABC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_820EBAD4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,392(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// bl 0x822eee00
	ctx.lr = 0x820EBAF4;
	sub_822EEE00(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x820EBB00;
	sub_822DA650(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,152(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x820EBB28;
	sub_822D67F0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EBA50) {
	__imp__sub_820EBA50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EBB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,208
	ctx.r30.s64 = ctx.r3.s64 + 208;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820EBB50;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ebb90
	if (ctx.cr6.eq) goto loc_820EBB90;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eba50
	ctx.lr = 0x820EBB6C;
	sub_820EBA50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r10,0,22,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82386568
	ctx.lr = 0x820EBB90;
	sub_82386568(ctx, base);
loc_820EBB90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EBB30) {
	__imp__sub_820EBB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EBBA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,340(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 340);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r7,r11,34079
	ctx.r7.u64 = ctx.r11.u64 | 34079;
	// addi r31,r3,208
	ctx.r31.s64 = ctx.r3.s64 + 208;
	// mulhw r5,r9,r7
	ctx.r5.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32)) >> 32;
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// li r8,200
	ctx.r8.s64 = 200;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// divw r6,r9,r8
	ctx.r6.s32 = ctx.r9.s32 / ctx.r8.s32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r29,r6,24
	ctx.r29.u64 = ctx.r6.u32 & 0xFF;
	// mulli r3,r4,200
	ctx.r3.s64 = ctx.r4.s64 * 200;
	// subf r28,r3,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x820EBBE4;
	sub_82332AF8(ctx, base);
	// lwz r11,472(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// rlwinm r10,r29,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3FC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ebc28
	if (!ctx.cr6.eq) goto loc_820EBC28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332b28
	ctx.lr = 0x820EBC00;
	sub_82332B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lhz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// addi r4,r11,14384
	ctx.r4.s64 = ctx.r11.s64 + 14384;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280b08
	ctx.lr = 0x820EBC20;
	sub_82280B08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820EBC28:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82284650
	ctx.lr = 0x820EBC34;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ebc80
	if (ctx.cr6.eq) goto loc_820EBC80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r6,r9,0,22,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0;
	// lfs f0,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82386568
	ctx.lr = 0x820EBC80;
	sub_82386568(ctx, base);
loc_820EBC80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EBB98) {
	__imp__sub_820EBB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBC88) {
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
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820ebd00
	if (!ctx.cr6.eq) goto loc_820EBD00;
	// lhz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 340);
	// bl 0x823862b0
	ctx.lr = 0x820EBCB8;
	sub_823862B0(ctx, base);
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 212);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821201a0
	ctx.lr = 0x820EBCF8;
	sub_821201A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x820ebd10
	goto loc_820EBD10;
loc_820EBD00:
	// lhz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 212);
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x820EBD0C;
	sub_821201A0(ctx, base);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
loc_820EBD10:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x820f8be8
	ctx.lr = 0x820EBD1C;
	sub_820F8BE8(ctx, base);
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

PPC_WEAK_FUNC(sub_820EBC88) {
	__imp__sub_820EBC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820EBD38;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de020
	ctx.lr = 0x820EBD40;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,334(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 334);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// rotlwi r9,r11,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r31,r10,6968
	ctx.r31.s64 = ctx.r10.s64 + 6968;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r31,11624
	ctx.r11.s64 = ctx.r31.s64 + 11624;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lfs f30,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// li r28,4
	ctx.r28.s64 = 4;
	// lfs f29,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
loc_820EBD88:
	// lfs f28,-140(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -140);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,-284(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -284);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f27,11316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11316);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f13,f31
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBDA4;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmadds f9,f10,f29,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f28,-136(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -136);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,-280(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -280);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f28.f64));
	// fmuls f26,f7,f31
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBDD0;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f27
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f27.f64));
	// fmadds f3,f4,f29,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f3,8(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f28,-132(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -132);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,-276(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -276);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fmuls f26,f1,f31
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBDFC;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f11,f12,f29,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfsu f11,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bne 0x820ebd88
	if (!ctx.cr0.eq) goto loc_820EBD88;
	// addi r11,r31,11388
	ctx.r11.s64 = ctx.r31.s64 + 11388;
	// lfs f28,11316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11316);
	ctx.f28.f64 = double(temp.f32);
	// addi r10,r31,11532
	ctx.r10.s64 = ctx.r31.s64 + 11532;
	// add r29,r30,r11
	ctx.r29.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r31,11676
	ctx.r11.s64 = ctx.r31.s64 + 11676;
	// add r28,r30,r10
	ctx.r28.u64 = ctx.r30.u64 + ctx.r10.u64;
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfsx f27,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f26,f13,f31
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBE4C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f9,0(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f27,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f26,f7,f31
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBE78;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmadds f3,f4,f29,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f3,4(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f27,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f27
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f31,f1,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBEA4;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r31,11544
	ctx.r11.s64 = ctx.r31.s64 + 11544;
	// addi r10,r31,11400
	ctx.r10.s64 = ctx.r31.s64 + 11400;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r9,r31,11688
	ctx.r9.s64 = ctx.r31.s64 + 11688;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r28,r8,31368
	ctx.r28.s64 = ctx.r8.s64 + 31368;
	// addi r26,r25,56
	ctx.r26.s64 = ctx.r25.s64 + 56;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmadds f11,f12,f29,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f11,8(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f0,11316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f0,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f0,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f12,f13,f0,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f12,8(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
loc_820EBF20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x822efc98
	ctx.lr = 0x820EBF34;
	sub_822EFC98(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r10,r28,16
	ctx.r10.s64 = ctx.r28.s64 + 16;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ebf20
	if (ctx.cr6.lt) goto loc_820EBF20;
	// addi r11,r31,11628
	ctx.r11.s64 = ctx.r31.s64 + 11628;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,52(r25)
	PPC_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de06c
	ctx.lr = 0x820EBF60;
	__restfpr_26(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EBD30) {
	__imp__sub_820EBD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EBF64) {
	__imp__sub_820EBF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EBF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EBF70;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x820EBF78;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// stb r11,64(r4)
	PPC_STORE_U8(ctx.r4.u32 + 64, ctx.r11.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ebfa4
	if (ctx.cr6.eq) goto loc_820EBFA4;
	// stb r11,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r11.u8);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
loc_820EBFA4:
	// lfs f27,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r28,r9,6968
	ctx.r28.s64 = ctx.r9.s64 + 6968;
	// addi r11,r31,208
	ctx.r11.s64 = ctx.r31.s64 + 208;
	// lfs f31,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r11,88
	ctx.r29.s64 = ctx.r11.s64 + 88;
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lfs f28,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f26,f13,f31
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EBFE0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f29,2412(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f27,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f27.f64 = double(temp.f32);
	// lfs f8,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f26,f7,f31
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// lfs f28,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f28.f64 = double(temp.f32);
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EC018;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmadds f3,f4,f29,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f28,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fmuls f27,f1,f31
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f31,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f31.f64 = double(temp.f32);
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820EC048;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,-32187
	ctx.r4.s64 = -2109407232;
	// ori r9,r5,61924
	ctx.r9.u64 = ctx.r5.u64 | 61924;
	// addi r10,r4,-15680
	ctx.r10.s64 = ctx.r4.s64 + -15680;
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f11,f12,f29,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lhz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 332);
	// lwz r11,-19420(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -19420);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82332af8
	ctx.lr = 0x820EC084;
	sub_82332AF8(ctx, base);
	// lbz r8,1661(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1661);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820ec0ec
	if (ctx.cr6.eq) goto loc_820EC0EC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r5,r28,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x8232fe18
	ctx.lr = 0x820EC0A8;
	sub_8232FE18(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfs f13,1512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// ori r7,r9,22908
	ctx.r7.u64 = ctx.r9.u64 | 22908;
	// lfs f0,14524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14524);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f1
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fmadds f1,f7,f0,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820EC0E8;
	sub_822D77C0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
loc_820EC0EC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r5,r31,65
	ctx.r5.s64 = ctx.r31.s64 + 65;
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,184(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 184);
	// bl 0x822efc98
	ctx.lr = 0x820EC104;
	sub_822EFC98(ctx, base);
	// addi r5,r31,66
	ctx.r5.s64 = ctx.r31.s64 + 66;
	// lhz r4,186(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 186);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EC114;
	sub_822EFC98(ctx, base);
	// addi r5,r31,67
	ctx.r5.s64 = ctx.r31.s64 + 67;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,188(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 188);
	// bl 0x822efc98
	ctx.lr = 0x820EC124;
	sub_822EFC98(ctx, base);
	// addi r5,r31,68
	ctx.r5.s64 = ctx.r31.s64 + 68;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,198(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 198);
	// bl 0x822efc98
	ctx.lr = 0x820EC134;
	sub_822EFC98(ctx, base);
	// lbz r10,69(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// addi r5,r31,69
	ctx.r5.s64 = ctx.r31.s64 + 69;
	// lhz r4,394(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 394);
	// addi r10,r10,-254
	ctx.r10.s64 = ctx.r10.s64 + -254;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822efc98
	ctx.lr = 0x820EC154;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x820ec18c
	if (ctx.cr6.eq) goto loc_820EC18C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820ec18c
	if (!ctx.cr6.eq) goto loc_820EC18C;
	// lbz r11,1661(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1661);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec18c
	if (ctx.cr6.eq) goto loc_820EC18C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ef030
	ctx.lr = 0x820EC178;
	sub_822EF030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,14456
	ctx.r4.s64 = ctx.r11.s64 + 14456;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280c30
	ctx.lr = 0x820EC18C;
	sub_82280C30(ctx, base);
loc_820EC18C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x820EC198;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EBF68) {
	__imp__sub_820EBF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EC19C) {
	__imp__sub_820EC19C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC1A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EC1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,208
	ctx.r30.s64 = ctx.r3.s64 + 208;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820EC1C0;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec2dc
	if (ctx.cr6.eq) goto loc_820EC2DC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ebf68
	ctx.lr = 0x820EC1D4;
	sub_820EBF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235dcd8
	ctx.lr = 0x820EC1E0;
	sub_8235DCD8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235df20
	ctx.lr = 0x820EC1EC;
	sub_8235DF20(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235dfc0
	ctx.lr = 0x820EC1F8;
	sub_8235DFC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211bb50
	ctx.lr = 0x820EC200;
	sub_8211BB50(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec22c
	if (ctx.cr6.eq) goto loc_820EC22C;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// ori r7,r9,23288
	ctx.r7.u64 = ctx.r9.u64 | 23288;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820ec2dc
	if (ctx.cr6.eq) goto loc_820EC2DC;
loc_820EC22C:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ec254
	if (!ctx.cr6.eq) goto loc_820EC254;
	// addi r6,r31,40
	ctx.r6.s64 = ctx.r31.s64 + 40;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8235eae0
	ctx.lr = 0x820EC254;
	sub_8235EAE0(ctx, base);
loc_820EC254:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822f1d08
	ctx.lr = 0x820EC284;
	sub_822F1D08(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// rlwimi r6,r10,2,28,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFFFFFFFC0F) | (ctx.r6.u64 & 0x3F0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82386568
	ctx.lr = 0x820EC2AC;
	sub_82386568(ctx, base);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r8,0,5,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FF8000;
	// rlwinm r7,r7,0,16,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFC00FFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820ec2d0
	if (!ctx.cr6.eq) goto loc_820EC2D0;
	// bl 0x820f5738
	ctx.lr = 0x820EC2C4;
	sub_820F5738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec2dc
	if (ctx.cr6.eq) goto loc_820EC2DC;
loc_820EC2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x820f5c00
	ctx.lr = 0x820EC2DC;
	sub_820F5C00(ctx, base);
loc_820EC2DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EC1A0) {
	__imp__sub_820EC1A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EC2E4) {
	__imp__sub_820EC2E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,1120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820ec2fc
	if (ctx.cr6.eq) goto loc_820EC2FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820EC2FC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,88(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r9,1128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1128);
	// addi r8,r11,6968
	ctx.r8.s64 = ctx.r11.s64 + 6968;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r4,r6,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r6.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// adde r3,r5,r7
	temp.u8 = (ctx.r5.u32 + ctx.r7.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EC2E8) {
	__imp__sub_820EC2E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820EC330;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,296(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r11,6968
	ctx.r27.s64 = ctx.r11.s64 + 6968;
	// addi r31,r3,208
	ctx.r31.s64 = ctx.r3.s64 + 208;
	// lwz r11,11308(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820ec5bc
	if (ctx.cr6.gt) goto loc_820EC5BC;
	// bl 0x82332c40
	ctx.lr = 0x820EC358;
	sub_82332C40(ctx, base);
	// lhz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x820ec36c
	if (ctx.cr6.lt) goto loc_820EC36C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
loc_820EC36C:
	// lhz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x820EC374;
	sub_82332AF8(ctx, base);
	// lbz r11,1662(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1662);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec390
	if (ctx.cr6.eq) goto loc_820EC390;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211c790
	ctx.lr = 0x820EC390;
	sub_8211C790(ctx, base);
loc_820EC390:
	// lwz r5,96(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ec3a8
	if (ctx.cr6.eq) goto loc_820EC3A8;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9a68
	ctx.lr = 0x820EC3A8;
	sub_820F9A68(ctx, base);
loc_820EC3A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82284650
	ctx.lr = 0x820EC3B4;
	sub_82284650(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec5bc
	if (ctx.cr6.eq) goto loc_820EC5BC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// rlwinm r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820ec448
	if (!ctx.cr6.eq) goto loc_820EC448;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ec448
	if (!ctx.cr6.eq) goto loc_820EC448;
	// lwz r10,1120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820ec3f8
	if (ctx.cr6.eq) goto loc_820EC3F8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x820ec418
	goto loc_820EC418;
loc_820EC3F8:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,11308(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// lwz r7,1128(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// rlwinm r4,r6,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// subfc r3,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r3.s64 = ctx.r7.s64 - ctx.r6.s64;
	// adde r10,r4,r5
	temp.u8 = (ctx.r4.u32 + ctx.r5.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820EC418:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ec448
	if (!ctx.cr6.eq) goto loc_820EC448;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r11.u32);
	// lwz r3,1100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec47c
	if (ctx.cr6.eq) goto loc_820EC47C;
	// lhz r5,210(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 210);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820ee908
	ctx.lr = 0x820EC444;
	sub_820EE908(ctx, base);
	// b 0x820ec47c
	goto loc_820EC47C;
loc_820EC448:
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ec47c
	if (ctx.cr6.eq) goto loc_820EC47C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ec47c
	if (ctx.cr6.eq) goto loc_820EC47C;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r11.u32);
	// lwz r3,1100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec47c
	if (ctx.cr6.eq) goto loc_820EC47C;
	// lhz r5,210(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 210);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820ee978
	ctx.lr = 0x820EC47C;
	sub_820EE978(ctx, base);
loc_820EC47C:
	// lwz r10,380(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ec504
	if (!ctx.cr6.eq) goto loc_820EC504;
	// lwz r11,1120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1120);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820ec4a0
	if (ctx.cr6.eq) goto loc_820EC4A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820ec4c0
	goto loc_820EC4C0;
loc_820EC4A0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,11308(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// lwz r8,1128(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1128);
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// subfc r4,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r4.s64 = ctx.r8.s64 - ctx.r7.s64;
	// adde r11,r5,r6
	temp.u8 = (ctx.r5.u32 + ctx.r6.u32 < ctx.r5.u32) | (ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820EC4C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ec504
	if (!ctx.cr6.eq) goto loc_820EC504;
	// ori r11,r10,64
	ctx.r11.u64 = ctx.r10.u64 | 64;
	// stw r11,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r11.u32);
	// lwz r3,1132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec4ec
	if (ctx.cr6.eq) goto loc_820EC4EC;
	// lhz r5,210(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 210);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820ee908
	ctx.lr = 0x820EC4EC;
	sub_820EE908(ctx, base);
loc_820EC4EC:
	// lwz r5,1136(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820ec504
	if (ctx.cr6.eq) goto loc_820EC504;
	// addi r4,r29,28
	ctx.r4.s64 = ctx.r29.s64 + 28;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f9a68
	ctx.lr = 0x820EC504;
	sub_820F9A68(ctx, base);
loc_820EC504:
	// lwz r11,380(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820ec534
	if (!ctx.cr6.eq) goto loc_820EC534;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,380(r29)
	PPC_STORE_U32(ctx.r29.u32 + 380, ctx.r11.u32);
	// lwz r3,1104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec534
	if (ctx.cr6.eq) goto loc_820EC534;
	// lhz r5,210(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 210);
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820ee908
	ctx.lr = 0x820EC534;
	sub_820EE908(ctx, base);
loc_820EC534:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r6,r9,0,22,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0;
	// lfs f0,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82386568
	ctx.lr = 0x820EC57C;
	sub_82386568(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82141398
	ctx.lr = 0x820EC584;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820ec5bc
	if (!ctx.cr6.gt) goto loc_820EC5BC;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r30,r11,-15680
	ctx.r30.s64 = ctx.r11.s64 + -15680;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r28,r11,61924
	ctx.r28.u64 = ctx.r11.u64 | 61924;
loc_820EC59C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e6938
	ctx.lr = 0x820EC5A8;
	sub_820E6938(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x82141398
	ctx.lr = 0x820EC5B4;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820ec59c
	if (ctx.cr6.lt) goto loc_820EC59C;
loc_820EC5BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EC328) {
	__imp__sub_820EC328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EC5C4) {
	__imp__sub_820EC5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC5C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820EC5D0;
	__savegprlr_22(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,340(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 340);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823862b0
	ctx.lr = 0x820EC5F4;
	sub_823862B0(ctx, base);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// lvrx128 v63,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v61,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v127,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v60,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v126,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// bl 0x822da650
	ctx.lr = 0x820EC628;
	sub_822DA650(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vspltw128 v7,v127,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x55));
	// addi r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 + 28;
	// vspltw128 v58,v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xFF));
	// lis r4,-31852
	ctx.r4.s64 = -2087452672;
	// vspltw128 v6,v127,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xAA));
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// vslw128 v57,v59,v59
	ctx.v57.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lvrx128 v54,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r10,r4,-30336
	ctx.r10.s64 = ctx.r4.s64 + -30336;
	// lvlx128 v53,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v51,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvlx128 v47,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// lvrx128 v52,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v46,v47,v49
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvlx128 v50,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// vor128 v48,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vspltw128 v11,v126,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xAA));
	// vand128 v9,v46,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v45,r31,r3
	temp.u32 = ctx.r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vspltw128 v5,v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xFF));
	// vand128 v12,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v44,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vandc128 v42,v0,v57
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltw128 v10,v126,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x55));
	// vor128 v43,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// vslw128 v55,v59,v59
	ctx.v55.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// li r9,4
	ctx.r9.s64 = 4;
	// vmaddfp v9,v12,v7,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vandc128 v8,v12,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmulfp128 v7,v58,v42
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v42.f32)));
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// vand128 v13,v43,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// addi r24,r1,92
	ctx.r24.s64 = ctx.r1.s64 + 92;
	// addi r23,r1,92
	ctx.r23.s64 = ctx.r1.s64 + 92;
	// vandc128 v12,v13,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r22,r1,92
	ctx.r22.s64 = ctx.r1.s64 + 92;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// vmaddfp v13,v6,v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v11,v12,v7
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v5,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v10,v8,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vspltw128 v41,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v40,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v39,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// vspltw128 v38,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v37,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw128 v36,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// stvewx128 v41,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r26,r9
	ea = (ctx.r26.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r23,r9
	ea = (ctx.r23.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r22,r10
	ea = (ctx.r22.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// bne cr6,0x820ec808
	if (!ctx.cr6.eq) goto loc_820EC808;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fabs f8,f12
	ctx.f8.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x820ec760
	if (ctx.cr6.gt) goto loc_820EC760;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EC760:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820ec7dc
	if (ctx.cr6.eq) goto loc_820EC7DC;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x820ec79c
	if (ctx.cr6.gt) goto loc_820EC79C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EC79C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820ec7dc
	if (ctx.cr6.eq) goto loc_820EC7DC;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f8,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fabs f6,f9
	ctx.f6.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x820ec7d0
	if (ctx.cr6.gt) goto loc_820EC7D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EC7D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820EC7DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ec834
	if (!ctx.cr6.eq) goto loc_820EC834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_820EC808:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820EC818:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x820ec818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820EC818;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r4,334(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 334);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8238a058
	ctx.lr = 0x820EC834;
	sub_8238A058(ctx, base);
loc_820EC834:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EC5C8) {
	__imp__sub_820EC5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EC84C) {
	__imp__sub_820EC84C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EC858;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// addi r31,r3,208
	ctx.r31.s64 = ctx.r3.s64 + 208;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820ec8fc
	if (ctx.cr6.eq) goto loc_820EC8FC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82284650
	ctx.lr = 0x820EC884;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ec91c
	if (ctx.cr6.eq) goto loc_820EC91C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eba50
	ctx.lr = 0x820EC8A0;
	sub_820EBA50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r10,0,22,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82386568
	ctx.lr = 0x820EC8C4;
	sub_82386568(ctx, base);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r8,r9,0,5,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FF8000;
	// rlwinm r8,r8,0,16,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFC00FFFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820ec8e8
	if (!ctx.cr6.eq) goto loc_820EC8E8;
	// bl 0x820f5738
	ctx.lr = 0x820EC8DC;
	sub_820F5738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ec91c
	if (ctx.cr6.eq) goto loc_820EC91C;
loc_820EC8E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r4,126(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x820f5c00
	ctx.lr = 0x820EC8F4;
	sub_820F5C00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820EC8FC:
	// lhz r29,126(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r28,r30,40
	ctx.r28.s64 = ctx.r30.s64 + 40;
	// lhz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// bl 0x823862b0
	ctx.lr = 0x820EC90C;
	sub_823862B0(ctx, base);
	// addi r4,r30,28
	ctx.r4.s64 = ctx.r30.s64 + 28;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x823862d0
	ctx.lr = 0x820EC91C;
	sub_823862D0(ctx, base);
loc_820EC91C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EC850) {
	__imp__sub_820EC850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EC924) {
	__imp__sub_820EC924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EC928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820EC930;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820ec964
	if (ctx.cr6.eq) goto loc_820EC964;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
loc_820EC964:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820eca60
	if (!ctx.cr6.gt) goto loc_820ECA60;
	// cmpwi cr6,r4,2046
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2046, ctx.xer);
	// bge cr6,0x820eca60
	if (!ctx.cr6.lt) goto loc_820ECA60;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 208);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x820eca60
	if (!ctx.cr6.eq) goto loc_820ECA60;
	// addi r29,r28,100
	ctx.r29.s64 = ctx.r28.s64 + 100;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8231f840
	ctx.lr = 0x820EC9A4;
	sub_8231F840(ctx, base);
	// addi r28,r28,136
	ctx.r28.s64 = ctx.r28.s64 + 136;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8231f840
	ctx.lr = 0x820EC9B8;
	sub_8231F840(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231f840
	ctx.lr = 0x820EC9C8;
	sub_8231F840(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8231f840
	ctx.lr = 0x820EC9D8;
	sub_8231F840(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fadds f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f7,4(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fsubs f12,f3,f11
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// beq cr6,0x820eca78
	if (ctx.cr6.eq) goto loc_820ECA78;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_820ECA60:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820ECA78:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EC928) {
	__imp__sub_820EC928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECA80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,6968
	ctx.r11.s64 = ctx.r11.s64 + 6968;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf. r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820ecab0
	if (!ctx.cr0.eq) goto loc_820ECAB0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11316, temp.u32);
	// blr 
	return;
loc_820ECAB0:
	// lwz r8,11308(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11308);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// subf r6,r10,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r10.s64;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// stfs f0,11316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11316, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f13,11316(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11316, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECA80) {
	__imp__sub_820ECA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECB00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14904(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820ecb54
	if (!ctx.cr6.eq) goto loc_820ECB54;
	// lbz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x820ecb54
	if (!ctx.cr6.eq) goto loc_820ECB54;
	// lbz r11,327(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 327);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ecb54
	if (ctx.cr6.eq) goto loc_820ECB54;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lhz r10,336(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 336);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// mullw r6,r3,r8
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820ECB54:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECB00) {
	__imp__sub_820ECB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ECB5C) {
	__imp__sub_820ECB5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECB60) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f0,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,11320(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11320);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x822f7e70
	ctx.lr = 0x820ECBA0;
	sub_822F7E70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECB60) {
	__imp__sub_820ECB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,2048
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2048, ctx.xer);
	// bge cr6,0x820ecbcc
	if (!ctx.cr6.lt) goto loc_820ECBCC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_820ECBCC:
	// addi r11,r4,-2048
	ctx.r11.s64 = ctx.r4.s64 + -2048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// lis r5,-32187
	ctx.r5.s64 = -2109407232;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// addi r9,r5,-15680
	ctx.r9.s64 = ctx.r5.s64 + -15680;
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf. r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addis r3,r10,3
	ctx.r3.s64 = ctx.r10.s64 + 196608;
	// bne 0x820ecc10
	if (!ctx.cr0.eq) goto loc_820ECC10;
	// addi r3,r3,-7320
	ctx.r3.s64 = ctx.r3.s64 + -7320;
	// blr 
	return;
loc_820ECC10:
	// addi r3,r3,-7224
	ctx.r3.s64 = ctx.r3.s64 + -7224;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECBB0) {
	__imp__sub_820ECBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820ECC20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r3,208
	ctx.r31.s64 = ctx.r3.s64 + 208;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eccbc
	if (ctx.cr6.eq) goto loc_820ECCBC;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820eccbc
	if (ctx.cr6.eq) goto loc_820ECCBC;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x820ECC4C;
	sub_821201A0(ctx, base);
	// bl 0x821201c0
	ctx.lr = 0x820ECC50;
	sub_821201C0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r11,1752
	ctx.r3.s64 = ctx.r11.s64 + 1752;
	// bl 0x821201a0
	ctx.lr = 0x820ECC60;
	sub_821201A0(ctx, base);
	// bl 0x821201c0
	ctx.lr = 0x820ECC64;
	sub_821201C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820eccbc
	if (ctx.cr6.eq) goto loc_820ECCBC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820eccbc
	if (ctx.cr6.eq) goto loc_820ECCBC;
	// lfs f13,176(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f12,172(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f11,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r11,6968
	ctx.r6.s64 = ctx.r11.s64 + 6968;
	// lfs f10,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r29,28
	ctx.r8.s64 = ctx.r29.s64 + 28;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,11316(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f13
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f1,f8,f0,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x82365090
	ctx.lr = 0x820ECCBC;
	sub_82365090(ctx, base);
loc_820ECCBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ECC18) {
	__imp__sub_820ECC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECCC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ECCC4) {
	__imp__sub_820ECCC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 + 28;
	// lfs f0,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f8,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f5,f13,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f12,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fsqrts f11,f11
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f10,f8
	ctx.f10.f64 = ctx.f8.f64;
	// fdivs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fmadds f7,f8,f12,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f0,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f13,f8,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECCC8) {
	__imp__sub_820ECCC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ECD44) {
	__imp__sub_820ECD44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f13,f9,f8,f7
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f3,f13,f13,f12
	ctx.f3.f64 = double(float(-(ctx.f13.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f5,f0,f0,f12
	ctx.f5.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// fmadds f12,f9,f10,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fmadds f11,f7,f10,f6
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fmadds f10,f4,f10,f2
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fdivs f9,f5,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 / ctx.f3.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f6,f11,f8
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f5,f10,f8,f13
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f5,0(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f0,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f0,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ECD48) {
	__imp__sub_820ECD48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ECDF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820ECE00;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r7,296(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 296);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f12,176(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lbz r5,297(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 297);
	// lbz r3,298(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 298);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// addi r30,r29,220
	ctx.r30.s64 = ctx.r29.s64 + 220;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 172);
	// fcfid f1,f11
	ctx.f1.f64 = double(ctx.f11.s64);
	// lbz r7,174(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 174);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r9,173(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 173);
	// lfs f6,300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f6.f64 = double(temp.f32);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f10
	ctx.f11.f64 = double(ctx.f10.s64);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// lis r5,-31936
	ctx.r5.s64 = -2092957696;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r4,r6,-15680
	ctx.r4.s64 = ctx.r6.s64 + -15680;
	// fcfid f2,f8
	ctx.f2.f64 = double(ctx.f8.s64);
	// addi r28,r11,6968
	ctx.r28.s64 = ctx.r11.s64 + 6968;
	// fcfid f10,f9
	ctx.f10.f64 = double(ctx.f9.s64);
	// addi r3,r5,-11984
	ctx.r3.s64 = ctx.r5.s64 + -11984;
	// frsp f7,f3
	ctx.f7.f64 = double(float(ctx.f3.f64));
	// lhz r10,340(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 340);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// rotlwi r8,r10,6
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// addi r9,r11,2416
	ctx.r9.s64 = ctx.r11.s64 + 2416;
	// lfs f13,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// frsp f2,f10
	ctx.f2.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f3,f0
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f11,f12
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f7,f6
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f4,f1,f12
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f2,f12,f10
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f1,f6,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f12,f5,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fsubs f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsubs f9,f12,f4
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fmadds f6,f10,f13,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f7,f11,f13,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f5,f9,f13,f4
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f4,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x820ecfa4
	if (!ctx.cr6.lt) goto loc_820ECFA4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,11308(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11308);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x8231f840
	ctx.lr = 0x820ECF4C;
	sub_8231F840(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822da518
	ctx.lr = 0x820ECF60;
	sub_822DA518(ctx, base);
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f7,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// ble cr6,0x820ecfa4
	if (!ctx.cr6.gt) goto loc_820ECFA4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ecd48
	ctx.lr = 0x820ECFA4;
	sub_820ECD48(ctx, base);
loc_820ECFA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,60(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820ecfd4
	if (!ctx.cr6.gt) goto loc_820ECFD4;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lwz r4,11308(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 11308);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8231f840
	ctx.lr = 0x820ECFC8;
	sub_8231F840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eccc8
	ctx.lr = 0x820ECFD4;
	sub_820ECCC8(ctx, base);
loc_820ECFD4:
	// lfs f13,180(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f0,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,184(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f0,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f0,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,188(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 188);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,92(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,48(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f0,11316(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 11316);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,175(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 175);
	// lbz r10,79(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 79);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f1,104(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ECDF8) {
	__imp__sub_820ECDF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED060) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f31,11316(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11316);
	ctx.f31.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x820ED09C;
	sub_8231F840(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x820ED0B0;
	sub_8231F840(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fmadds f5,f9,f31,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f4,f7,f31,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f4,32(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmadds f3,f6,f31,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED060) {
	__imp__sub_820ED060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED108) {
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
	ctx.lr = 0x820ED120;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f28,11316(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 11316);
	ctx.f28.f64 = double(temp.f32);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x820ED148;
	sub_8231F840(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x820ED15C;
	sub_8231F840(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// lfs f31,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f26,f12,f31
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820ED188;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f29,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f8,f26,f11
	ctx.f8.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// fmuls f26,f9,f31
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// fmadds f6,f7,f29,f27
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x820ED1C0;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f2,f26,f5
	ctx.f2.f64 = double(float(ctx.f26.f64 - ctx.f5.f64));
	// fmuls f31,f3,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmuls f0,f2,f28
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f28.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmadds f13,f0,f29,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f25.f64));
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x820ED1F0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x820ED210;
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

PPC_WEAK_FUNC(sub_820ED108) {
	__imp__sub_820ED108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED224) {
	__imp__sub_820ED224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820ED230;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822daa18
	ctx.lr = 0x820ED270;
	sub_822DAA18(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820ED27C;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822ef020
	ctx.lr = 0x820ED284;
	sub_822EF020(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ed2bc
	if (!ctx.cr6.eq) goto loc_820ED2BC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x822ef030
	ctx.lr = 0x820ED2A0;
	sub_822EF030(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r10,14572
	ctx.r4.s64 = ctx.r10.s64 + 14572;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x820ED2B4;
	sub_82280C30(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820ED2BC:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82258b48
	ctx.lr = 0x820ED2D4;
	sub_82258B48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x820ed30c
	if (!ctx.cr6.eq) goto loc_820ED30C;
	// bl 0x822ef030
	ctx.lr = 0x820ED2E8;
	sub_822EF030(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,14528
	ctx.r4.s64 = ctx.r11.s64 + 14528;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x820ED2FC;
	sub_82280C30(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820ED30C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82259478
	ctx.lr = 0x820ED31C;
	sub_82259478(ctx, base);
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r31,124
	ctx.r5.s64 = ctx.r31.s64 + 124;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fsqrts f1,f8
	ctx.f1.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f7,f1
	ctx.f7.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f0,f1
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// fmuls f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// stfs f2,120(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f2,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82255850
	ctx.lr = 0x820ED37C;
	sub_82255850(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ED228) {
	__imp__sub_820ED228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED388) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257688
	ctx.lr = 0x820ED3A4;
	sub_82257688(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257720
	ctx.lr = 0x820ED3B8;
	sub_82257720(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257690
	ctx.lr = 0x820ED3C0;
	sub_82257690(ctx, base);
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da350
	ctx.lr = 0x820ED3CC;
	sub_822DA350(ctx, base);
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

PPC_WEAK_FUNC(sub_820ED388) {
	__imp__sub_820ED388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed41c
	if (!ctx.cr6.eq) goto loc_820ED41C;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// addi r8,r9,6968
	ctx.r8.s64 = ctx.r9.s64 + 6968;
	// addi r7,r11,1000
	ctx.r7.s64 = ctx.r11.s64 + 1000;
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x820ed41c
	if (!ctx.cr6.gt) goto loc_820ED41C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_820ED41C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED3E0) {
	__imp__sub_820ED3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED424) {
	__imp__sub_820ED424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED428) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820ED448;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed504
	if (ctx.cr6.eq) goto loc_820ED504;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed488
	if (!ctx.cr6.eq) goto loc_820ED488;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// addi r8,r11,1000
	ctx.r8.s64 = ctx.r11.s64 + 1000;
	// lwz r11,11308(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x820ed488
	if (!ctx.cr6.gt) goto loc_820ED488;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// b 0x820ed48c
	goto loc_820ED48C;
loc_820ED488:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ED48C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ed504
	if (!ctx.cr6.eq) goto loc_820ED504;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed4ac
	if (!ctx.cr6.eq) goto loc_820ED4AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed228
	ctx.lr = 0x820ED4AC;
	sub_820ED228(ctx, base);
loc_820ED4AC:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ed4fc
	if (!ctx.cr6.eq) goto loc_820ED4FC;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,148(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f10,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f9,156(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,48(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
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
loc_820ED4FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed388
	ctx.lr = 0x820ED504;
	sub_820ED388(ctx, base);
loc_820ED504:
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

PPC_WEAK_FUNC(sub_820ED428) {
	__imp__sub_820ED428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820ED520;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820ED538;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ed55c
	if (ctx.cr6.eq) goto loc_820ED55C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ed55c
	if (ctx.cr6.eq) goto loc_820ED55C;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x820ed560
	if (!ctx.cr6.eq) goto loc_820ED560;
loc_820ED55C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ED560:
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x820ED574;
	sub_822E40F0(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ed5a0
	if (ctx.cr6.eq) goto loc_820ED5A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82257900
	ctx.lr = 0x820ED58C;
	sub_82257900(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ef030
	ctx.lr = 0x820ED594;
	sub_822EF030(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e42f8
	ctx.lr = 0x820ED5A0;
	sub_822E42F8(ctx, base);
loc_820ED5A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ED518) {
	__imp__sub_820ED518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED5A8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x820ED5DC;
	sub_8223E078(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ed620
	if (ctx.cr6.eq) goto loc_820ED620;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x820ED5F0;
	sub_8223C4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257940
	ctx.lr = 0x820ED5FC;
	sub_82257940(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x820ED608;
	sub_8223C4D8(ctx, base);
	// bl 0x822e4998
	ctx.lr = 0x820ED60C;
	sub_822E4998(ctx, base);
	// bl 0x82393fe8
	ctx.lr = 0x820ED610;
	sub_82393FE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822593c0
	ctx.lr = 0x820ED620;
	sub_822593C0(ctx, base);
loc_820ED620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED5A8) {
	__imp__sub_820ED5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED638) {
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
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x820ed670
	if (ctx.cr6.eq) goto loc_820ED670;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x820ed670
	if (ctx.cr6.eq) goto loc_820ED670;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-5928
	ctx.r9.s64 = ctx.r11.s64 + -5928;
	// b 0x820ed678
	goto loc_820ED678;
loc_820ED670:
	// lwz r8,304(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r9,r31,308
	ctx.r9.s64 = ctx.r31.s64 + 308;
loc_820ED678:
	// li r7,1
	ctx.r7.s64 = 1;
	// lhz r5,334(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8228d050
	ctx.lr = 0x820ED690;
	sub_8228D050(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_820ED638) {
	__imp__sub_820ED638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED6B0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,28
	ctx.r4.s64 = ctx.r3.s64 + 28;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x8228cd50
	sub_8228CD50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ED6B0) {
	__imp__sub_820ED6B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED6BC) {
	__imp__sub_820ED6BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED6C0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed6e4
	if (!ctx.cr6.eq) goto loc_820ED6E4;
	// bl 0x820ed638
	ctx.lr = 0x820ED6E4;
	sub_820ED638(ctx, base);
loc_820ED6E4:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ed6f8
	if (ctx.cr6.eq) goto loc_820ED6F8;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// bl 0x8228cd50
	ctx.lr = 0x820ED6F8;
	sub_8228CD50(ctx, base);
loc_820ED6F8:
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

PPC_WEAK_FUNC(sub_820ED6C0) {
	__imp__sub_820ED6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED70C) {
	__imp__sub_820ED70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820ED718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x820ed738
	if (!ctx.cr6.eq) goto loc_820ED738;
	// bl 0x820ed428
	ctx.lr = 0x820ED730;
	sub_820ED428(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820ED738:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x820ed750
	if (ctx.cr6.lt) goto loc_820ED750;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820ed754
	if (!ctx.cr6.gt) goto loc_820ED754;
loc_820ED750:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820ED754:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ed798
	if (ctx.cr6.eq) goto loc_820ED798;
	// bl 0x820ed060
	ctx.lr = 0x820ED768;
	sub_820ED060(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ed77c
	if (!ctx.cr6.eq) goto loc_820ED77C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed638
	ctx.lr = 0x820ED77C;
	sub_820ED638(ctx, base);
loc_820ED77C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ed81c
	if (ctx.cr6.eq) goto loc_820ED81C;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// bl 0x8228cd50
	ctx.lr = 0x820ED790;
	sub_8228CD50(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820ED798:
	// bl 0x820ed060
	ctx.lr = 0x820ED79C;
	sub_820ED060(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ed7f8
	if (ctx.cr6.eq) goto loc_820ED7F8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820ed7f8
	if (ctx.cr6.eq) goto loc_820ED7F8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lhz r4,338(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 338);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// addi r29,r11,6968
	ctx.r29.s64 = ctx.r11.s64 + 6968;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r6,11308(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11308);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x820ec928
	ctx.lr = 0x820ED7DC;
	sub_820EC928(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,11308(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 11308);
	// lhz r4,338(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 338);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8234dc18
	ctx.lr = 0x820ED7F8;
	sub_8234DC18(ctx, base);
loc_820ED7F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed108
	ctx.lr = 0x820ED800;
	sub_820ED108(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820ed81c
	if (!ctx.cr6.eq) goto loc_820ED81C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_820ED81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ED710) {
	__imp__sub_820ED710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED824) {
	__imp__sub_820ED824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED828) {
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
	// bl 0x820ed060
	ctx.lr = 0x820ED840;
	sub_820ED060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed108
	ctx.lr = 0x820ED848;
	sub_820ED108(ctx, base);
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

PPC_WEAK_FUNC(sub_820ED828) {
	__imp__sub_820ED828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED85C) {
	__imp__sub_820ED85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820ED868;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822f2388
	ctx.lr = 0x820ED880;
	sub_822F2388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120000
	ctx.lr = 0x820ED88C;
	sub_82120000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820ed8c4
	if (!ctx.cr6.eq) goto loc_820ED8C4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ee738
	ctx.lr = 0x820ED8A4;
	sub_822EE738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821022d0
	ctx.lr = 0x820ED8B4;
	sub_821022D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f13a0
	ctx.lr = 0x820ED8C0;
	sub_822F13A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820ED8C4:
	// bl 0x822f23e0
	ctx.lr = 0x820ED8C8;
	sub_822F23E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820ED860) {
	__imp__sub_820ED860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED8D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9996
	ctx.r12.s64 = ctx.r12.s64 + -9996;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820ED938;
	case 1:
		goto loc_820ED964;
	case 2:
		goto loc_820ED944;
	case 3:
		goto loc_820ED948;
	case 4:
		goto loc_820ED964;
	case 5:
		goto loc_820ED94C;
	case 6:
		goto loc_820ED95C;
	case 7:
		goto loc_820ED960;
	case 8:
		goto loc_820ED934;
	case 9:
		goto loc_820ED950;
	case 10:
		goto loc_820ED964;
	case 11:
		goto loc_820ED950;
	case 12:
		goto loc_820ED964;
	case 13:
		goto loc_820ED93C;
	case 14:
		goto loc_820ED940;
	case 15:
		goto loc_820ED93C;
	default:
		return;
	}
	// lwz r16,-9928(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9928);
	// lwz r16,-9884(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9884);
	// lwz r16,-9916(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9916);
	// lwz r16,-9912(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9912);
	// lwz r16,-9884(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9884);
	// lwz r16,-9908(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9908);
	// lwz r16,-9892(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9892);
	// lwz r16,-9888(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9888);
	// lwz r16,-9932(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9932);
	// lwz r16,-9904(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9904);
	// lwz r16,-9884(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9884);
	// lwz r16,-9904(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9904);
	// lwz r16,-9884(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9884);
	// lwz r16,-9924(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9924);
	// lwz r16,-9920(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9920);
	// lwz r16,-9924(r14)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r14.u32 + -9924);
loc_820ED934:
	// b 0x820ec1a0
	sub_820EC1A0(ctx, base);
	return;
loc_820ED938:
	// b 0x820ebb30
	sub_820EBB30(ctx, base);
	return;
loc_820ED93C:
	// b 0x820da310
	sub_820DA310(ctx, base);
	return;
loc_820ED940:
	// b 0x820da488
	sub_820DA488(ctx, base);
	return;
loc_820ED944:
	// b 0x820ebb98
	sub_820EBB98(ctx, base);
	return;
loc_820ED948:
	// b 0x820ec328
	sub_820EC328(ctx, base);
	return;
loc_820ED94C:
	// b 0x820ec850
	sub_820EC850(ctx, base);
	return;
loc_820ED950:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234e028
	sub_8234E028(ctx, base);
	return;
loc_820ED95C:
	// b 0x820ecc18
	sub_820ECC18(ctx, base);
	return;
loc_820ED960:
	// b 0x820ecdf8
	sub_820ECDF8(ctx, base);
	return;
loc_820ED964:
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED8D0) {
	__imp__sub_820ED8D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED968) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r31,388
	ctx.r5.s64 = ctx.r31.s64 + 388;
	// bl 0x822e40f0
	ctx.lr = 0x820ED9A0;
	sub_822E40F0(ctx, base);
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e40f0
	ctx.lr = 0x820ED9B0;
	sub_822E40F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed518
	ctx.lr = 0x820ED9BC;
	sub_820ED518(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED968) {
	__imp__sub_820ED968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820ED9D4) {
	__imp__sub_820ED9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820ED9D8) {
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
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x8223e078
	ctx.lr = 0x820EDA10;
	sub_8223E078(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8223e078
	ctx.lr = 0x820EDA20;
	sub_8223E078(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed5a8
	ctx.lr = 0x820EDA2C;
	sub_820ED5A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820ED9D8) {
	__imp__sub_820ED9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDA44) {
	__imp__sub_820EDA44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EDA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// addi r29,r9,-5696
	ctx.r29.s64 = ctx.r9.s64 + -5696;
loc_820EDA6C:
	// addi r9,r29,380
	ctx.r9.s64 = ctx.r29.s64 + 380;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820edacc
	if (ctx.cr6.eq) goto loc_820EDACC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x820EDA90;
	sub_822E40F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r31,388
	ctx.r5.s64 = ctx.r31.s64 + 388;
	// bl 0x822e40f0
	ctx.lr = 0x820EDAAC;
	sub_822E40F0(ctx, base);
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x820EDABC;
	sub_822E40F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed518
	ctx.lr = 0x820EDAC8;
	sub_820ED518(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_820EDACC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// mulli r10,r11,404
	ctx.r10.s64 = ctx.r11.s64 * 404;
	// blt cr6,0x820eda6c
	if (ctx.cr6.lt) goto loc_820EDA6C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x820EDAF8;
	sub_822E40F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EDA48) {
	__imp__sub_820EDA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDB00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820EDB08;
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
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x820EDB20;
	sub_8223E078(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x820edbf8
	if (ctx.cr6.lt) goto loc_820EDBF8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-5696
	ctx.r29.s64 = ctx.r11.s64 + -5696;
	// addi r27,r10,14636
	ctx.r27.s64 = ctx.r10.s64 + 14636;
loc_820EDB40:
	// cmpwi cr6,r5,2048
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2048, ctx.xer);
	// blt cr6,0x820edb5c
	if (ctx.cr6.lt) goto loc_820EDB5C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x820EDB58;
	sub_822830E8(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_820EDB5C:
	// mulli r11,r5,404
	ctx.r11.s64 = ctx.r5.s64 * 404;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,388
	ctx.r3.s64 = ctx.r31.s64 + 388;
	// bl 0x8223e078
	ctx.lr = 0x820EDB74;
	sub_8223E078(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x8223e078
	ctx.lr = 0x820EDB84;
	sub_8223E078(ctx, base);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8223e078
	ctx.lr = 0x820EDB98;
	sub_8223E078(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820edbdc
	if (ctx.cr6.eq) goto loc_820EDBDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x820EDBAC;
	sub_8223C4D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257940
	ctx.lr = 0x820EDBB8;
	sub_82257940(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x820EDBC4;
	sub_8223C4D8(ctx, base);
	// bl 0x822e4998
	ctx.lr = 0x820EDBC8;
	sub_822E4998(ctx, base);
	// bl 0x82393fe8
	ctx.lr = 0x820EDBCC;
	sub_82393FE8(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x822593c0
	ctx.lr = 0x820EDBDC;
	sub_822593C0(ctx, base);
loc_820EDBDC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x820EDBEC;
	sub_8223E078(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge cr6,0x820edb40
	if (!ctx.cr6.lt) goto loc_820EDB40;
loc_820EDBF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EDB00) {
	__imp__sub_820EDB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC00) {
	__imp__sub_820EDC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDC1C) {
	__imp__sub_820EDC1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC20) {
	__imp__sub_820EDC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDC3C) {
	__imp__sub_820EDC3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC40) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r4,404
	ctx.r11.s64 = ctx.r4.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC40) {
	__imp__sub_820EDC40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stwx r8,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC58) {
	__imp__sub_820EDC58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC78) {
	__imp__sub_820EDC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDC90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDC90) {
	__imp__sub_820EDC90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDCAC) {
	__imp__sub_820EDCAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDCB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r9,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r9.u8);
	// lwz r11,-30052(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30052);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x823949b8
	sub_823949B8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EDCB0) {
	__imp__sub_820EDCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDCEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDCEC) {
	__imp__sub_820EDCEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDCF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EDCF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822f2388
	ctx.lr = 0x820EDD10;
	sub_822F2388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120000
	ctx.lr = 0x820EDD1C;
	sub_82120000(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820edd54
	if (!ctx.cr6.eq) goto loc_820EDD54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822ee738
	ctx.lr = 0x820EDD34;
	sub_822EE738(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821022d0
	ctx.lr = 0x820EDD44;
	sub_821022D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f13a0
	ctx.lr = 0x820EDD50;
	sub_822F13A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820EDD54:
	// bl 0x822f23e0
	ctx.lr = 0x820EDD58;
	sub_822F23E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f19e8
	ctx.lr = 0x820EDD60;
	sub_822F19E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edd78
	if (ctx.cr6.eq) goto loc_820EDD78;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EDD78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EDCF0) {
	__imp__sub_820EDCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDD84) {
	__imp__sub_820EDD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDD88) {
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
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EDDBC;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820eddd4
	if (ctx.cr6.eq) goto loc_820EDDD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820edcf0
	ctx.lr = 0x820EDDD4;
	sub_820EDCF0(ctx, base);
loc_820EDDD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDD88) {
	__imp__sub_820EDD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EDDEC) {
	__imp__sub_820EDDEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDDF0) {
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x820edcf0
	ctx.lr = 0x820EDE10;
	sub_820EDCF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820edf18
	if (ctx.cr6.eq) goto loc_820EDF18;
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r9,-15680
	ctx.r8.s64 = ctx.r9.s64 + -15680;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// addi r9,r10,2168
	ctx.r9.s64 = ctx.r10.s64 + 2168;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f2,f11,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f8,f0,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,-19420(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19420);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_820EDF18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820EDDF0) {
	__imp__sub_820EDDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EDF30) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822f0278
	ctx.lr = 0x820EDF60;
	sub_822F0278(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 131072;
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// addi r10,r11,2168
	ctx.r10.s64 = ctx.r11.s64 + 2168;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f3,f9,f6
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f2,f11,f6
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f12,f10,f6
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// fmuls f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f0,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f5,f4
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fadds f3,f5,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f5,f1,f9
	ctx.f5.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f5,f8,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f1,f9,f1
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fsubs f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// stfs f10,16(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f4,4(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_820EDF30) {
	__imp__sub_820EDF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE074) {
	__imp__sub_820EE074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EE080;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,254
	ctx.r11.s64 = 254;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE0AC;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee0d0
	if (ctx.cr6.eq) goto loc_820EE0D0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820edcf0
	ctx.lr = 0x820EE0C4;
	sub_820EDCF0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ee0dc
	if (!ctx.cr6.eq) goto loc_820EE0DC;
loc_820EE0D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820EE0DC:
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r9,-15680
	ctx.r8.s64 = ctx.r9.s64 + -15680;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// addi r9,r10,2168
	ctx.r9.s64 = ctx.r10.s64 + 2168;
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f4,f11,f8
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f2,f11,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fmuls f9,f6,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f1,f13,f7
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f12,f6,f7
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// fadds f7,f5,f4
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f5,f4,f3
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f3.f64));
	// fsubs f3,f1,f9
	ctx.f3.f64 = double(float(ctx.f1.f64 - ctx.f9.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fadds f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f4,20(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fadds f13,f8,f2
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fsubs f10,f2,f8
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// stfs f10,12(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fadds f9,f9,f1
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fsubs f8,f0,f7
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fsubs f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fsubs f6,f11,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f6,28(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lwz r10,-19420(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -19420);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f10,8(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE078) {
	__imp__sub_820EE078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820EE1E8;
	__savegprlr_29(ctx, base);
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822efc98
	ctx.lr = 0x820EE210;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ee234
	if (ctx.cr6.eq) goto loc_820EE234;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820edcf0
	ctx.lr = 0x820EE228;
	sub_820EDCF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ee240
	if (!ctx.cr6.eq) goto loc_820EE240;
loc_820EE234:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820EE240:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r11,-15680
	ctx.r7.s64 = ctx.r11.s64 + -15680;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r9,r7,2
	ctx.r9.s64 = ctx.r7.s64 + 131072;
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// addi r9,r9,2168
	ctx.r9.s64 = ctx.r9.s64 + 2168;
	// li r3,1
	ctx.r3.s64 = 1;
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE1E0) {
	__imp__sub_820EE1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820EE2A4) {
	__imp__sub_820EE2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE2A8) {
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
	// lhz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 212);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ee2cc
	if (ctx.cr6.eq) goto loc_820EE2CC;
	// bl 0x820ebc88
	ctx.lr = 0x820EE2CC;
	sub_820EBC88(ctx, base);
loc_820EE2CC:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// beq cr6,0x820ee2fc
	if (ctx.cr6.eq) goto loc_820EE2FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ed8d0
	ctx.lr = 0x820EE2E4;
	sub_820ED8D0(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ee2fc
	if (ctx.cr6.eq) goto loc_820EE2FC;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x820e1410
	ctx.lr = 0x820EE2FC;
	sub_820E1410(ctx, base);
loc_820EE2FC:
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

PPC_WEAK_FUNC(sub_820EE2A8) {
	__imp__sub_820EE2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820EE318;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de020
	ctx.lr = 0x820EE320;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r31,r28,28
	ctx.r31.s64 = ctx.r28.s64 + 28;
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// lfs f31,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,48(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x820ed710
	ctx.lr = 0x820EE360;
	sub_820ED710(ctx, base);
	// lbz r10,208(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 208);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x820ee3ec
	if (!ctx.cr6.eq) goto loc_820EE3EC;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820ee3ec
	if (!ctx.cr6.eq) goto loc_820EE3EC;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ee3cc
	if (!ctx.cr6.eq) goto loc_820EE3CC;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820ee3cc
	if (!ctx.cr6.eq) goto loc_820EE3CC;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820ee3cc
	if (!ctx.cr6.eq) goto loc_820EE3CC;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x820ee3cc
	if (!ctx.cr6.eq) goto loc_820EE3CC;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x820ee3cc
	if (!ctx.cr6.eq) goto loc_820EE3CC;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x820ee3d0
	if (ctx.cr6.eq) goto loc_820EE3D0;
loc_820EE3CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820EE3D0:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ee4dc
	if (ctx.cr6.eq) goto loc_820EE4DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ec5c8
	ctx.lr = 0x820EE3E8;
	sub_820EC5C8(ctx, base);
	// b 0x820ee4dc
	goto loc_820EE4DC;
loc_820EE3EC:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ee438
	if (!ctx.cr6.eq) goto loc_820EE438;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820ee438
	if (!ctx.cr6.eq) goto loc_820EE438;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x820ee438
	if (!ctx.cr6.eq) goto loc_820EE438;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bne cr6,0x820ee438
	if (!ctx.cr6.eq) goto loc_820EE438;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x820ee438
	if (!ctx.cr6.eq) goto loc_820EE438;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// beq cr6,0x820ee43c
	if (ctx.cr6.eq) goto loc_820EE43C;
loc_820EE438:
	// li r9,1
	ctx.r9.s64 = 1;
loc_820EE43C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,21504
	ctx.r11.s64 = ctx.r10.s64 + 21504;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r30,r9,24
	ctx.r30.u64 = ctx.r9.u32 & 0xFF;
	// lfs f0,20476(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20476);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x820ee4dc
	if (!ctx.cr6.gt) goto loc_820EE4DC;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// bl 0x82284650
	ctx.lr = 0x820EE4B4;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ee4dc
	if (ctx.cr6.eq) goto loc_820EE4DC;
	// bl 0x822ef018
	ctx.lr = 0x820EE4C0;
	sub_822EF018(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,6056(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// bl 0x8238a010
	ctx.lr = 0x820EE4DC;
	sub_8238A010(ctx, base);
loc_820EE4DC:
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820ee51c
	if (!ctx.cr6.eq) goto loc_820EE51C;
	// bl 0x8211dd58
	ctx.lr = 0x820EE4F4;
	sub_8211DD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ee560
	if (ctx.cr6.eq) goto loc_820EE560;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211ddd0
	ctx.lr = 0x820EE50C;
	sub_8211DDD0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x820EE518;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820EE51C:
	// bl 0x8211dd58
	ctx.lr = 0x820EE520;
	sub_8211DD58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ee534
	if (ctx.cr6.eq) goto loc_820EE534;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// b 0x820ee544
	goto loc_820EE544;
loc_820EE534:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211dd88
	ctx.lr = 0x820EE540;
	sub_8211DD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
loc_820EE544:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ee558
	if (ctx.cr6.eq) goto loc_820EE558;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8211ddd8
	ctx.lr = 0x820EE558;
	sub_8211DDD8(ctx, base);
loc_820EE558:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ee2a8
	ctx.lr = 0x820EE560;
	sub_820EE2A8(ctx, base);
loc_820EE560:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x820EE56C;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE310) {
	__imp__sub_820EE310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820EE570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x820EE578;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r29,r11,6968
	ctx.r29.s64 = ctx.r11.s64 + 6968;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r27,r8,61924
	ctx.r27.u64 = ctx.r8.u64 | 61924;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r24,-32021
	ctx.r24.s64 = -2098528256;
	// li r23,2047
	ctx.r23.s64 = 2047;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r25,r9,-15680
	ctx.r25.s64 = ctx.r9.s64 + -15680;
	// addi r28,r10,-5696
	ctx.r28.s64 = ctx.r10.s64 + -5696;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x820ee634
	if (!ctx.cr6.gt) goto loc_820EE634;
	// li r31,12
	ctx.r31.s64 = 12;
loc_820EE5C0:
	// lhzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r9,208(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x820ee620
	if (!ctx.cr6.lt) goto loc_820EE620;
	// lwz r8,-14904(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14904);
	// lbz r7,12(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820ee618
	if (!ctx.cr6.eq) goto loc_820EE618;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// bne cr6,0x820ee618
	if (!ctx.cr6.eq) goto loc_820EE618;
	// lbz r9,327(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 327);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ee618
	if (ctx.cr6.eq) goto loc_820EE618;
	// mullw r9,r26,r27
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// lhz r8,336(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 336);
	// lwzx r7,r9,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820ee618
	if (!ctx.cr6.eq) goto loc_820EE618;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// b 0x820ee620
	goto loc_820EE620;
loc_820EE618:
	// bl 0x820ee310
	ctx.lr = 0x820EE61C;
	sub_820EE310(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_820EE620:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ee5c0
	if (ctx.cr6.lt) goto loc_820EE5C0;
loc_820EE634:
	// lwz r10,4108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4108);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ee668
	if (!ctx.cr6.gt) goto loc_820EE668;
	// li r30,4112
	ctx.r30.s64 = 4112;
loc_820EE648:
	// lhzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8235ef68
	ctx.lr = 0x820EE650;
	sub_8235EF68(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lwz r10,4108(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4108);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ee648
	if (ctx.cr6.lt) goto loc_820EE648;
loc_820EE668:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r10,-30096(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30096);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ee708
	if (ctx.cr6.eq) goto loc_820EE708;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820ee708
	if (!ctx.cr6.gt) goto loc_820EE708;
	// li r31,12
	ctx.r31.s64 = 12;
loc_820EE68C:
	// lwz r9,-14904(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + -14904);
	// lhzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r11.u32);
	// mulli r10,r8,404
	ctx.r10.s64 = ctx.r8.s64 * 404;
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bne cr6,0x820ee6d4
	if (!ctx.cr6.eq) goto loc_820EE6D4;
	// lbz r10,208(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x820ee6d4
	if (!ctx.cr6.eq) goto loc_820EE6D4;
	// lbz r10,327(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 327);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ee6d4
	if (ctx.cr6.eq) goto loc_820EE6D4;
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// lhz r9,336(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 336);
	// lwzx r8,r10,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820ee6f4
	if (ctx.cr6.eq) goto loc_820EE6F4;
loc_820EE6D4:
	// lbz r11,208(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x820ee6ec
	if (ctx.cr6.lt) goto loc_820EE6EC;
	// bl 0x820f15f0
	ctx.lr = 0x820EE6E8;
	sub_820F15F0(ctx, base);
	// b 0x820ee6f0
	goto loc_820EE6F0;
loc_820EE6EC:
	// bl 0x820f1658
	ctx.lr = 0x820EE6F0;
	sub_820F1658(ctx, base);
loc_820EE6F0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_820EE6F4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820ee68c
	if (ctx.cr6.lt) goto loc_820EE68C;
loc_820EE708:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820EE570) {
	__imp__sub_820EE570(ctx, base);
}

