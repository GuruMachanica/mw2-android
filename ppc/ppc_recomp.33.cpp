#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82178124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82178124) {
	__imp__sub_82178124(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82178130;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x822db158
	ctx.lr = 0x82178150;
	sub_822DB158(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-12416
	ctx.r31.s64 = ctx.r11.s64 + -12416;
	// lfs f31,14892(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14892);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821783ac
	if (ctx.cr6.eq) goto loc_821783AC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// lwz r9,632(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821781bc
	if (ctx.cr6.eq) goto loc_821781BC;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r30,r9,28
	ctx.r30.s64 = ctx.r9.s64 + 28;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r27,r11,-18560
	ctx.r27.s64 = ctx.r11.s64 + -18560;
loc_82178194:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821781b0
	if (ctx.cr6.eq) goto loc_821781B0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821742a0
	ctx.lr = 0x821781A8;
	sub_821742A0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
loc_821781B0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x82178194
	if (!ctx.cr0.eq) goto loc_82178194;
loc_821781BC:
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,628(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 628);
	// lwz r9,624(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178358
	if (ctx.cr6.eq) goto loc_82178358;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_821781DC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r31,16384
	ctx.r8.s64 = ctx.r31.s64 + 16384;
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// rldicl r6,r7,34,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r5,r6,20
	ctx.r5.u64 = ctx.r6.u32 & 0xFFF;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x821782e4
	if (ctx.cr6.lt) goto loc_821782E4;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
	// addi r7,r31,16384
	ctx.r7.s64 = ctx.r31.s64 + 16384;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,25
	ctx.r11.s64 = ctx.r4.s64 + 25;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8217822C:
	// lbz r29,1(r11)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lhz r7,2(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rotlwi r8,r7,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// std r29,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfsx f9,r8,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lfsx f5,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f6
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// stfsx f3,r8,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// lhz r8,6(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfsx f13,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f11,r8,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lbzu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lhzu r7,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r8,r7,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// lfsx f7,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsel f5,f6,f7,f8
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f8.f64;
	// stfsx f5,r8,r31
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217822c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217822C;
loc_821782E4:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82178348
	if (!ctx.cr6.lt) goto loc_82178348;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r9,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r10,r31,16384
	ctx.r10.s64 = ctx.r31.s64 + 16384;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r4,26
	ctx.r8.s64 = ctx.r4.s64 + 26;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82178314:
	// lbzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// std r6,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r6.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x82178314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178314;
loc_82178348:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// bne 0x821781dc
	if (!ctx.cr0.eq) goto loc_821781DC;
loc_82178358:
	// lwz r29,656(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 656);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821783ac
	if (ctx.cr6.eq) goto loc_821783AC;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// addi r27,r10,-3456
	ctx.r27.s64 = ctx.r10.s64 + -3456;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_82178380:
	// lwz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821742a0
	ctx.lr = 0x82178388;
	sub_821742A0(ctx, base);
	// addis r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 196608;
	// lwz r11,172(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 172);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,22784
	ctx.r8.s64 = ctx.r10.s64 + 22784;
	// addi r30,r30,92
	ctx.r30.s64 = ctx.r30.s64 + 92;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfsx f31,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// bne 0x82178380
	if (!ctx.cr0.eq) goto loc_82178380;
loc_821783AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x822db158
	ctx.lr = 0x821783BC;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82178448
	if (ctx.cr6.eq) goto loc_82178448;
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,14900(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14900);
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x82178448
	if (ctx.cr6.eq) goto loc_82178448;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r11,-16
	ctx.r30.s64 = ctx.r11.s64 + -16;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_821783F4:
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// fmuls f29,f0,f31
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x821741d8
	ctx.lr = 0x82178404;
	sub_821741D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f29
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f29.f64;
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// lfs f10,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lwzu r3,44(r30)
	ea = 44 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// fmuls f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x821741d8
	ctx.lr = 0x8217842C;
	sub_821741D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lfsx f8,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f29
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f29.f64;
	// stfsx f6,r11,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bne 0x821783f4
	if (!ctx.cr0.eq) goto loc_821783F4;
loc_82178448:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82178128) {
	__imp__sub_82178128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217845C) {
	__imp__sub_8217845C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178460) {
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
	// bl 0x82178030
	ctx.lr = 0x82178474;
	sub_82178030(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r31,r11,-3456
	ctx.r31.s64 = ctx.r11.s64 + -3456;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217cba0
	ctx.lr = 0x82178484;
	sub_8217CBA0(ctx, base);
	// lis r8,7
	ctx.r8.s64 = 458752;
	// lwz r10,0(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r7,r8,33560
	ctx.r7.u64 = ctx.r8.u64 | 33560;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// bne 0x821784bc
	if (!ctx.cr0.eq) goto loc_821784BC;
	// lwsync 
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-7808(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7808, ctx.r10.u32);
loc_821784BC:
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

PPC_WEAK_FUNC(sub_82178460) {
	__imp__sub_82178460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821784D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// stw r3,-7712(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7712, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821784D0) {
	__imp__sub_821784D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821784DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821784DC) {
	__imp__sub_821784DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821784E0) {
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
	// bl 0x8228b9f8
	ctx.lr = 0x821784F8;
	sub_8228B9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178620
	if (ctx.cr6.eq) goto loc_82178620;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// lwz r10,8320(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8320);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82178620
	if (!ctx.cr6.eq) goto loc_82178620;
	// lwz r10,8456(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8456);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,7
	ctx.r8.s64 = 458752;
	// addi r6,r9,-3456
	ctx.r6.s64 = ctx.r9.s64 + -3456;
	// addi r31,r11,-7808
	ctx.r31.s64 = ctx.r11.s64 + -7808;
	// ori r5,r8,33544
	ctx.r5.u64 = ctx.r8.u64 | 33544;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// lis r7,7
	ctx.r7.s64 = 458752;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r4,r7,33560
	ctx.r4.u64 = ctx.r7.u64 | 33560;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r3,r3,13536
	ctx.r3.s64 = ctx.r3.s64 + 13536;
	// lwzx r8,r6,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// lis r30,-31779
	ctx.r30.s64 = -2082668544;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lwzx r7,r6,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r4.u32);
	// lis r6,-31775
	ctx.r6.s64 = -2082406400;
	// lis r4,-32076
	ctx.r4.s64 = -2102132736;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r8,r6,-12416
	ctx.r8.s64 = ctx.r6.s64 + -12416;
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// lfs f0,936(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r5,-18560
	ctx.r6.s64 = ctx.r5.s64 + -18560;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r4,30208
	ctx.r5.s64 = ctx.r4.s64 + 30208;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r3,r30,23168
	ctx.r3.s64 = ctx.r30.s64 + 23168;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r4,r9,-4312
	ctx.r4.s64 = ctx.r9.s64 + -4312;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// beq cr6,0x821785dc
	if (ctx.cr6.eq) goto loc_821785DC;
	// lwz r9,300(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 300);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwz r8,296(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// lwz r6,72(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
loc_821785DC:
	// lbz r10,105(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 105);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r10.u8);
	// beq cr6,0x821785fc
	if (ctx.cr6.eq) goto loc_821785FC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_821785FC:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r11,14900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14900);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// bl 0x823b7ac8
	ctx.lr = 0x82178618;
	sub_823B7AC8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82178620:
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

PPC_WEAK_FUNC(sub_821784E0) {
	__imp__sub_821784E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178638) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82178640;
	__savegprlr_27(ctx, base);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lis r9,-31776
	ctx.r9.s64 = -2082471936;
	// lis r10,-31779
	ctx.r10.s64 = -2082668544;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r6,r8,17280
	ctx.r6.s64 = ctx.r8.s64 + 17280;
	// addi r29,r9,-9216
	ctx.r29.s64 = ctx.r9.s64 + -9216;
	// addi r30,r10,23168
	ctx.r30.s64 = ctx.r10.s64 + 23168;
	// addi r5,r11,-3456
	ctx.r5.s64 = ctx.r11.s64 + -3456;
loc_82178668:
	// addis r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-26368
	ctx.r11.s64 = ctx.r11.s64 + -26368;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,-2048(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2048);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// andc r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8217870c
	if (!ctx.cr6.lt) goto loc_8217870C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82178694:
	// lwzx r7,r10,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addis r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 65536;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821786fc
	if (ctx.cr6.eq) goto loc_821786FC;
loc_821786C4:
	// lhz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r27,r28,29,3,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r28,r28,2,25,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7C;
	// lwzx r27,r27,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// lwzx r28,r28,r6
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// and r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 & ctx.r28.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821786f8
	if (ctx.cr6.eq) goto loc_821786F8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821786c4
	if (ctx.cr6.lt) goto loc_821786C4;
	// b 0x821786fc
	goto loc_821786FC;
loc_821786F8:
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
loc_821786FC:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82178694
	if (ctx.cr6.lt) goto loc_82178694;
loc_8217870C:
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r4,4096
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4096, ctx.xer);
	// blt cr6,0x82178668
	if (ctx.cr6.lt) goto loc_82178668;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82178638) {
	__imp__sub_82178638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82178724) {
	__imp__sub_82178724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178728) {
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
	// bl 0x821741d8
	ctx.lr = 0x82178738;
	sub_821741D8(ctx, base);
	// lis r11,-31776
	ctx.r11.s64 = -2082471936;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r7,r3,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r9,r11,-9216
	ctx.r9.s64 = ctx.r11.s64 + -9216;
	// addi r8,r10,17280
	ctx.r8.s64 = ctx.r10.s64 + 17280;
	// lwzx r5,r7,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
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

PPC_WEAK_FUNC(sub_82178728) {
	__imp__sub_82178728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82178774) {
	__imp__sub_82178774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178778) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-3460
	ctx.r30.s64 = ctx.r11.s64 + -3460;
	// lwz r11,-3460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3460);
	// lwz r10,-4344(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4344);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x821787b4
	if (!ctx.cr6.eq) goto loc_821787B4;
loc_821787AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8217881c
	goto loc_8217881C;
loc_821787B4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,3584
	ctx.r10.s64 = 3584;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// divwu r6,r31,r10
	ctx.r6.u32 = ctx.r31.u32 / ctx.r10.u32;
	// ori r4,r8,40948
	ctx.r4.u64 = ctx.r8.u64 | 40948;
	// addi r5,r9,-3456
	ctx.r5.s64 = ctx.r9.s64 + -3456;
	// rlwinm r3,r7,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r6,r4
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// addis r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 327680;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r10,r10,-8448
	ctx.r10.s64 = ctx.r10.s64 + -8448;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821450f8
	ctx.lr = 0x821787F8;
	sub_821450F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821787ac
	if (!ctx.cr6.eq) goto loc_821787AC;
	// lwz r11,-4344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4344);
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// rlwinm r9,r11,3,21,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// addi r8,r10,30528
	ctx.r8.s64 = ctx.r10.s64 + 30528;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-4344(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4344, ctx.r11.u32);
	// stwx r31,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u32);
loc_8217881C:
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

PPC_WEAK_FUNC(sub_82178778) {
	__imp__sub_82178778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82178834) {
	__imp__sub_82178834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82178840;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// bl 0x82145008
	ctx.lr = 0x82178854;
	sub_82145008(ctx, base);
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// lis r7,-31779
	ctx.r7.s64 = -2082668544;
	// lis r6,-32083
	ctx.r6.s64 = -2102591488;
	// addi r16,r10,30528
	ctx.r16.s64 = ctx.r10.s64 + 30528;
	// addi r3,r9,17280
	ctx.r3.s64 = ctx.r9.s64 + 17280;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r10,r8,-7680
	ctx.r10.s64 = ctx.r8.s64 + -7680;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r9,r7,23168
	ctx.r9.s64 = ctx.r7.s64 + 23168;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r15,r6,-3456
	ctx.r15.s64 = ctx.r6.s64 + -3456;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// li r18,64
	ctx.r18.s64 = 64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r19,80
	ctx.r19.s64 = 80;
	// stw r15,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r15.u32);
	// li r20,96
	ctx.r20.s64 = 96;
	// li r21,112
	ctx.r21.s64 = 112;
	// li r22,128
	ctx.r22.s64 = 128;
	// li r23,144
	ctx.r23.s64 = 144;
	// li r24,160
	ctx.r24.s64 = 160;
	// li r25,176
	ctx.r25.s64 = 176;
	// li r26,192
	ctx.r26.s64 = 192;
	// li r27,208
	ctx.r27.s64 = 208;
	// addi r17,r11,-7708
	ctx.r17.s64 = ctx.r11.s64 + -7708;
	// b 0x821788e4
	goto loc_821788E4;
loc_821788D8:
	// lwz r15,104(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r16,100(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r14,308(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
loc_821788E4:
	// lwz r10,-8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8);
	// lwz r11,4248(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8217891c
	if (!ctx.cr6.eq) goto loc_8217891C;
	// bl 0x821450c0
	ctx.lr = 0x821788F8;
	sub_821450C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178908
	if (ctx.cr6.eq) goto loc_82178908;
	// bl 0x82145220
	ctx.lr = 0x82178904;
	sub_82145220(ctx, base);
	// stw r3,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r3.u32);
loc_82178908:
	// lwz r10,-96(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + -96);
	// lwz r11,4248(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r10,-8(r17)
	PPC_STORE_U32(ctx.r17.u32 + -8, ctx.r10.u32);
	// beq cr6,0x82178d90
	if (ctx.cr6.eq) goto loc_82178D90;
loc_8217891C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82178948
	if (ctx.cr6.eq) goto loc_82178948;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lwz r11,-7696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178a2c
	if (!ctx.cr6.eq) goto loc_82178A2C;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r9,r11,33548
	ctx.r9.u64 = ctx.r11.u64 | 33548;
	// lwzx r8,r15,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82178a2c
	if (!ctx.cr6.eq) goto loc_82178A2C;
loc_82178948:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
loc_8217894C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82178a78
	if (ctx.cr6.eq) goto loc_82178A78;
	// rlwinm r10,r11,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7F8;
	// lwz r9,4248(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// li r8,3584
	ctx.r8.s64 = 3584;
	// add r28,r10,r16
	ctx.r28.u64 = ctx.r10.u64 + ctx.r16.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwzx r29,r10,r16
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// divwu r31,r29,r8
	ctx.r31.u32 = ctx.r29.u32 / ctx.r8.u32;
	// mulli r7,r31,3584
	ctx.r7.s64 = ctx.r31.s64 * 3584;
	// subf r30,r7,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r7.s64;
	// beq cr6,0x821789ac
	if (ctx.cr6.eq) goto loc_821789AC;
	// bl 0x82145220
	ctx.lr = 0x82178980;
	sub_82145220(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r15,5
	ctx.r10.s64 = ctx.r15.s64 + 327680;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r10,-8448
	ctx.r9.s64 = ctx.r10.s64 + -8448;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 262144;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82178a78
	if (!ctx.cr6.lt) goto loc_82178A78;
loc_821789AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82174288
	ctx.lr = 0x821789B4;
	sub_82174288(ctx, base);
	// addi r11,r31,10
	ctx.r11.s64 = ctx.r31.s64 + 10;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// clrlwi r3,r9,6
	ctx.r3.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// beq cr6,0x821789e0
	if (ctx.cr6.eq) goto loc_821789E0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1792
	ctx.r9.s64 = ctx.r11.s64 + 1792;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x821789e4
	goto loc_821789E4;
loc_821789E0:
	// lis r31,-32
	ctx.r31.s64 = -2097152;
loc_821789E4:
	// addi r5,r28,4
	ctx.r5.s64 = ctx.r28.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823a6308
	ctx.lr = 0x821789F0;
	sub_823A6308(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82178a5c
	if (!ctx.cr6.eq) goto loc_82178A5C;
	// cmpwi cr6,r31,8192
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8192, ctx.xer);
	// bgt cr6,0x82178a10
	if (ctx.cr6.gt) goto loc_82178A10;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-7692(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7692, ctx.r10.u32);
loc_82178A10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178a2c
	if (!ctx.cr6.eq) goto loc_82178A2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x82178A24;
	sub_823A5548(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x8228b0d8
	ctx.lr = 0x82178A2C;
	sub_8228B0D8(ctx, base);
loc_82178A2C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r9,4248(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r11,-8(r17)
	PPC_STORE_U32(ctx.r17.u32 + -8, ctx.r11.u32);
	// stw r11,-96(r17)
	PPC_STORE_U32(ctx.r17.u32 + -96, ctx.r11.u32);
	// beq cr6,0x82178d9c
	if (ctx.cr6.eq) goto loc_82178D9C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// b 0x8217894c
	goto loc_8217894C;
loc_82178A5C:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + -8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// b 0x8217894c
	goto loc_8217894C;
loc_82178A78:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82178a90
	if (!ctx.cr6.eq) goto loc_82178A90;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82145060
	ctx.lr = 0x82178A90;
	sub_82145060(ctx, base);
loc_82178A90:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178aa4
	if (ctx.cr6.eq) goto loc_82178AA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x82178AA4;
	sub_823A5548(ctx, base);
loc_82178AA4:
	// lwz r10,4248(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// li r8,3584
	ctx.r8.s64 = 3584;
	// addis r9,r15,5
	ctx.r9.s64 = ctx.r15.s64 + 327680;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r31,r10,r16
	ctx.r31.u64 = ctx.r10.u64 + ctx.r16.u64;
	// stw r11,4248(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4248, ctx.r11.u32);
	// addi r9,r9,-8448
	ctx.r9.s64 = ctx.r9.s64 + -8448;
	// lwzx r28,r10,r16
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// divwu r29,r28,r8
	ctx.r29.u32 = ctx.r28.u32 / ctx.r8.u32;
	// mulli r7,r29,3584
	ctx.r7.s64 = ctx.r29.s64 * 3584;
	// subf r3,r7,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r7.s64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r15,r11,r9
	ctx.r15.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82174288
	ctx.lr = 0x82178AF4;
	sub_82174288(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x821454d0
	ctx.lr = 0x82178AFC;
	sub_821454D0(ctx, base);
	// lwz r11,8(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 8);
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// subf. r4,r11,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82178b14
	if (ctx.cr0.eq) goto loc_82178B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82145538
	ctx.lr = 0x82178B14;
	sub_82145538(ctx, base);
loc_82178B14:
	// addi r11,r29,10
	ctx.r11.s64 = ctx.r29.s64 + 10;
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwzx r10,r11,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// clrlwi r30,r10,6
	ctx.r30.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// beq cr6,0x82178b4c
	if (ctx.cr6.eq) goto loc_82178B4C;
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r16
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// clrlwi r8,r9,6
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFF;
	// subf r30,r8,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r8.s64;
loc_82178B4C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178b64
	if (ctx.cr6.eq) goto loc_82178B64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823a5718
	ctx.lr = 0x82178B64;
	sub_823A5718(ctx, base);
loc_82178B64:
	// li r14,0
	ctx.r14.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82178c6c
	if (ctx.cr6.eq) goto loc_82178C6C;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// rlwinm r11,r11,20,12,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82178B80:
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145608
	ctx.lr = 0x82178B94;
	sub_82145608(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,32
	ctx.r8.s64 = 32;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// li r10,-16
	ctx.r10.s64 = -16;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r7,48
	ctx.r7.s64 = 48;
loc_82178BB0:
	// li r6,-32
	ctx.r6.s64 = -32;
	// lvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,224
	ctx.r5.s64 = 224;
	// lvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,240
	ctx.r4.s64 = 240;
	// lvx128 v61,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r11,r18
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r11,r19
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r11,r20
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r21
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r11,r22
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r11,r23
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r11,r24
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r11,r25
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r11,r26
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r11,r27
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// stvx128 v48,r0,r31
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r31,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r31,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r31,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r31,r18
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r18.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r31,r19
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r19.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r20
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r20.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r21
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r21.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r22
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r22.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r23
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r23.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r24
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r31,r25
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v52,r31,r26
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r31,r27
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v50,r31,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r31,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r31,256
	ctx.r31.s64 = ctx.r31.s64 + 256;
	// bdnz 0x82178bb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178BB0;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplwi cr6,r14,8
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 8, ctx.xer);
	// bne cr6,0x82178c5c
	if (!ctx.cr6.eq) goto loc_82178C5C;
	// bl 0x8228bd80
	ctx.lr = 0x82178C58;
	sub_8228BD80(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
loc_82178C5C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bne 0x82178b80
	if (!ctx.cr0.eq) goto loc_82178B80;
loc_82178C6C:
	// bl 0x82145250
	ctx.lr = 0x82178C70;
	sub_82145250(ctx, base);
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// lwz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subf r31,r3,r9
	ctx.r31.s64 = ctx.r9.s64 - ctx.r3.s64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82178c8c
	if (ctx.cr6.lt) goto loc_82178C8C;
	// bl 0x82144f48
	ctx.lr = 0x82178C8C;
	sub_82144F48(ctx, base);
loc_82178C8C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82178ca0
	if (ctx.cr6.eq) goto loc_82178CA0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82145538
	ctx.lr = 0x82178CA0;
	sub_82145538(ctx, base);
loc_82178CA0:
	// lwz r11,4(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 4);
	// stw r11,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r11.u32);
	// bl 0x82144f38
	ctx.lr = 0x82178CAC;
	sub_82144F38(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82178d08
	if (ctx.cr6.eq) goto loc_82178D08;
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lbz r9,70(r16)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r16.u32 + 70);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r7,r10,r16
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// lwzx r11,r8,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// clrlwi r10,r7,6
	ctx.r10.u64 = ctx.r7.u32 & 0x3FFFFFF;
	// rlwinm r6,r11,6,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82178cec
	if (ctx.cr6.eq) goto loc_82178CEC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r4,r3,r10
	ctx.r4.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bl 0x823a4b38
	ctx.lr = 0x82178CE8;
	sub_823A4B38(ctx, base);
	// b 0x82178d68
	goto loc_82178D68;
loc_82178CEC:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r11,6
	ctx.r8.u64 = ctx.r11.u32 & 0x3FFFFFF;
	// lwz r5,60(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 60);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r4,72(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 72);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823a5780
	ctx.lr = 0x82178D08;
	sub_823A5780(ctx, base);
loc_82178D08:
	// lwz r11,72(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178d20
	if (ctx.cr6.eq) goto loc_82178D20;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823a4e30
	ctx.lr = 0x82178D20;
	sub_823A4E30(ctx, base);
loc_82178D20:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x823a5008
	ctx.lr = 0x82178D34;
	sub_823A5008(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r28,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82178D40:
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r11,r28,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r28,r28,-3584
	ctx.r28.s64 = ctx.r28.s64 + -3584;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r10,r28,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x7C;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// bdnz 0x82178d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82178D40;
loc_82178D68:
	// bl 0x82145240
	ctx.lr = 0x82178D6C;
	sub_82145240(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821788d8
	if (!ctx.cr6.eq) goto loc_821788D8;
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178d90
	if (ctx.cr6.eq) goto loc_82178D90;
	// lwz r11,-96(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -96);
	// lwz r10,4248(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4248);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821788d8
	if (!ctx.cr6.eq) goto loc_821788D8;
loc_82178D90:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82178D9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82178838) {
	__imp__sub_82178838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82178DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r27,r11,-3456
	ctx.r27.s64 = ctx.r11.s64 + -3456;
	// ori r9,r10,33540
	ctx.r9.u64 = ctx.r10.u64 | 33540;
	// lwzx r3,r27,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82178de4
	if (!ctx.cr6.eq) goto loc_82178DE4;
	// bl 0x823a5548
	ctx.lr = 0x82178DD4;
	sub_823A5548(ctx, base);
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x8228b0d8
	ctx.lr = 0x82178DDC;
	sub_8228B0D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82178DE4:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,33536
	ctx.r10.u64 = ctx.r11.u64 | 33536;
	// lwzx r28,r27,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// bl 0x82145160
	ctx.lr = 0x82178DF4;
	sub_82145160(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82178e50
	if (ctx.cr6.eq) goto loc_82178E50;
	// addis r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 458752;
	// addi r31,r11,32512
	ctx.r31.s64 = ctx.r11.s64 + 32512;
loc_82178E08:
	// lhz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82178778
	ctx.lr = 0x82178E14;
	sub_82178778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178e40
	if (ctx.cr6.eq) goto loc_82178E40;
loc_82178E1C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82178838
	ctx.lr = 0x82178E28;
	sub_82178838(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82178e5c
	if (ctx.cr6.eq) goto loc_82178E5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82178778
	ctx.lr = 0x82178E38;
	sub_82178778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82178e1c
	if (!ctx.cr6.eq) goto loc_82178E1C;
loc_82178E40:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82178e08
	if (ctx.cr6.lt) goto loc_82178E08;
loc_82178E50:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82178838
	ctx.lr = 0x82178E5C;
	sub_82178838(ctx, base);
loc_82178E5C:
	// bl 0x821451b0
	ctx.lr = 0x82178E60;
	sub_821451B0(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// lis r10,-32
	ctx.r10.s64 = -2097152;
	// ori r9,r11,33552
	ctx.r9.u64 = ctx.r11.u64 | 33552;
	// stwx r10,r27,r9
	PPC_STORE_U32(ctx.r27.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82178DA8) {
	__imp__sub_82178DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178E78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lwz r10,-3464(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82178ea8
	if (ctx.cr6.eq) goto loc_82178EA8;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lwz r9,-7696(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -7696);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82178ea0
	if (!ctx.cr6.eq) goto loc_82178EA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82178EA0:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-3464(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3464, ctx.r10.u32);
loc_82178EA8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82178E78) {
	__imp__sub_82178E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82178EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82178EB8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r25,r11,-3464
	ctx.r25.s64 = ctx.r11.s64 + -3464;
	// lwz r11,-3464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821790fc
	if (ctx.cr6.eq) goto loc_821790FC;
	// lis r31,-32083
	ctx.r31.s64 = -2102591488;
	// lwz r11,-7696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178ef0
	if (ctx.cr6.eq) goto loc_82178EF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82178EF0:
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x822ec4e8
	ctx.lr = 0x82178EF8;
	sub_822EC4E8(ctx, base);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821790f4
	if (ctx.cr6.eq) goto loc_821790F4;
	// lwz r11,-7696(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178f28
	if (ctx.cr6.eq) goto loc_82178F28;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,29
	ctx.r3.s64 = 29;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x82178F20;
	sub_822EC500(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82178F28:
	// lwz r29,0(r13)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r28,4
	ctx.r28.s64 = 4;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r11,-7808
	ctx.r24.s64 = ctx.r11.s64 + -7808;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82178fa0
	if (!ctx.cr6.eq) goto loc_82178FA0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82178F50:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x82178f74
	if (!ctx.cr6.eq) goto loc_82178F74;
	// stwcx. r9,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82178f50
	if (!ctx.cr0.eq) goto loc_82178F50;
	// b 0x82178f7c
	goto loc_82178F7C;
loc_82178F74:
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82178F7C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82178fa0
	if (ctx.cr6.eq) goto loc_82178FA0;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x822ec500
	ctx.lr = 0x82178F90;
	sub_822EC500(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x82178F98;
	sub_8228B0D8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82178FA0:
	// lwsync 
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stwx r7,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r7.u32);
loc_82178FB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82178fb4
	if (!ctx.cr0.eq) goto loc_82178FB4;
	// li r9,448
	ctx.r9.s64 = 448;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// addi r27,r10,-3456
	ctx.r27.s64 = ctx.r10.s64 + -3456;
	// addi r26,r11,23168
	ctx.r26.s64 = ctx.r11.s64 + 23168;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r27,32
	ctx.r11.s64 = ctx.r27.s64 + 32;
	// addi r10,r26,1824
	ctx.r10.s64 = ctx.r26.s64 + 1824;
	// li r4,-32
	ctx.r4.s64 = -32;
	// li r3,-32
	ctx.r3.s64 = -32;
	// li r31,-16
	ctx.r31.s64 = -16;
	// li r30,-16
	ctx.r30.s64 = -16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r9,80
	ctx.r9.s64 = 80;
loc_82179014:
	// lvx128 v63,r11,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v61,v63,14
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v61.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_set1_ps(16384))));
	// lvx128 v60,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v59,v62,14
	simde_mm_store_si128((simde__m128i*)ctx.v59.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_set1_ps(16384))));
	// lvx128 v58,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v57,v60,14
	simde_mm_store_si128((simde__m128i*)ctx.v57.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_set1_ps(16384))));
	// lvx128 v56,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v55,v58,14
	simde_mm_store_si128((simde__m128i*)ctx.v55.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_set1_ps(16384))));
	// lvx128 v54,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v53,v56,14
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_set1_ps(16384))));
	// lvx128 v52,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v51,v54,14
	simde_mm_store_si128((simde__m128i*)ctx.v51.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_set1_ps(16384))));
	// lvx128 v50,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcfpsxws128 v49,v52,14
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_set1_ps(16384))));
	// vcfpsxws128 v48,v50,14
	simde_mm_store_si128((simde__m128i*)ctx.v48.s32, simde_mm_vctsxs(simde_mm_mul_ps(simde_mm_load_ps(ctx.v50.f32), simde_mm_set1_ps(16384))));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// stvx128 v61,r10,r3
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v59,r10,r30
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v53,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v51,r10,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v49,r10,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v48,r10,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// bdnz 0x82179014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179014;
	// lwzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r11.u32);
	// bne 0x82179098
	if (!ctx.cr0.eq) goto loc_82179098;
	// lwsync 
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_82179098:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r10,-32150
	ctx.r10.s64 = -2106982400;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r9,-32150
	ctx.r9.s64 = -2106982400;
	// ori r8,r11,33560
	ctx.r8.u64 = ctx.r11.u64 | 33560;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,24576(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24576);
	// lwz r6,24592(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24592);
	// lwzx r11,r27,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8217b7c0
	ctx.lr = 0x821790D0;
	sub_8217B7C0(ctx, base);
	// bl 0x82178da8
	ctx.lr = 0x821790D4;
	sub_82178DA8(ctx, base);
	// lwsync 
loc_821790D8:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r5,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stwcx. r5,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821790d8
	if (!ctx.cr0.eq) goto loc_821790D8;
loc_821790F4:
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x822ec500
	ctx.lr = 0x821790FC;
	sub_822EC500(ctx, base);
loc_821790FC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82178EB0) {
	__imp__sub_82178EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179104) {
	__imp__sub_82179104(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179108) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// mulli r11,r3,3584
	ctx.r11.s64 = ctx.r3.s64 * 3584;
	// addi r9,r10,-3456
	ctx.r9.s64 = ctx.r10.s64 + -3456;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addis r9,r9,5
	ctx.r9.s64 = ctx.r9.s64 + 327680;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,-10240
	ctx.r9.s64 = ctx.r9.s64 + -10240;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// rlwinm r6,r11,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179108) {
	__imp__sub_82179108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179144) {
	__imp__sub_82179144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179148) {
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
	// bl 0x821741d8
	ctx.lr = 0x82179158;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-28416
	ctx.r11.s64 = ctx.r11.s64 + -28416;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179148) {
	__imp__sub_82179148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179198) {
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
	// bl 0x821741d8
	ctx.lr = 0x821791A8;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-27904
	ctx.r11.s64 = ctx.r11.s64 + -27904;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179198) {
	__imp__sub_82179198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821791E8) {
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
	// bl 0x821741d8
	ctx.lr = 0x821791F8;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-27392
	ctx.r11.s64 = ctx.r11.s64 + -27392;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821791E8) {
	__imp__sub_821791E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179238) {
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
	// bl 0x821741d8
	ctx.lr = 0x82179248;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addis r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-26880
	ctx.r11.s64 = ctx.r11.s64 + -26880;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179238) {
	__imp__sub_82179238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82179290;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821741d8
	ctx.lr = 0x8217929C;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r30,r11,-3456
	ctx.r30.s64 = ctx.r11.s64 + -3456;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r11,r11,-28416
	ctx.r11.s64 = ctx.r11.s64 + -28416;
	// addi r29,r9,17280
	ctx.r29.s64 = ctx.r9.s64 + 17280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// bl 0x821741d8
	ctx.lr = 0x821792D4;
	sub_821741D8(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-27904
	ctx.r11.s64 = ctx.r11.s64 + -27904;
	// rlwinm r4,r3,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r4,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// bl 0x821741d8
	ctx.lr = 0x821792FC;
	sub_821741D8(ctx, base);
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-27392
	ctx.r10.s64 = ctx.r10.s64 + -27392;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r6,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x821741d8
	ctx.lr = 0x82179324;
	sub_821741D8(ctx, base);
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-26880
	ctx.r10.s64 = ctx.r10.s64 + -26880;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r6,r8,r29
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179288) {
	__imp__sub_82179288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217934C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217934C) {
	__imp__sub_8217934C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82179358;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,177(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 177);
	// lwz r31,188(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179398
	if (ctx.cr6.eq) goto loc_82179398;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82179370:
	// li r30,2
	ctx.r30.s64 = 2;
loc_82179374:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82179384
	if (ctx.cr6.eq) goto loc_82179384;
	// bl 0x82179288
	ctx.lr = 0x82179384;
	sub_82179288(ctx, base);
loc_82179384:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82179374
	if (!ctx.cr0.eq) goto loc_82179374;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82179370
	if (!ctx.cr0.eq) goto loc_82179370;
loc_82179398:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179350) {
	__imp__sub_82179350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821793A0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82179288
	sub_82179288(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821793A0) {
	__imp__sub_821793A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821793B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821793B4) {
	__imp__sub_821793B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821793B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821793C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82179498
	if (ctx.cr0.eq) goto loc_82179498;
	// addi r28,r9,188
	ctx.r28.s64 = ctx.r9.s64 + 188;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_821793E8:
	// lbz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -12);
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x82179434
	if (!ctx.cr6.eq) goto loc_82179434;
	// lbz r11,-11(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -11);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217948c
	if (ctx.cr6.eq) goto loc_8217948C;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82179408:
	// li r30,2
	ctx.r30.s64 = 2;
loc_8217940C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217941c
	if (ctx.cr6.eq) goto loc_8217941C;
	// bl 0x82179288
	ctx.lr = 0x8217941C;
	sub_82179288(ctx, base);
loc_8217941C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8217940c
	if (!ctx.cr0.eq) goto loc_8217940C;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82179408
	if (!ctx.cr0.eq) goto loc_82179408;
	// b 0x8217948c
	goto loc_8217948C;
loc_82179434:
	// lbz r30,-11(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + -11);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bgt cr6,0x8217945c
	if (ctx.cr6.gt) goto loc_8217945C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217948c
	if (ctx.cr6.eq) goto loc_8217948C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x8217948c
	if (!ctx.cr6.lt) goto loc_8217948C;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82179288
	ctx.lr = 0x82179458;
	sub_82179288(ctx, base);
	// b 0x8217948c
	goto loc_8217948C;
loc_8217945C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217948c
	if (ctx.cr6.eq) goto loc_8217948C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82179468:
	// lbz r11,-12(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -12);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x82179480
	if (!ctx.cr6.lt) goto loc_82179480;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82179288
	ctx.lr = 0x82179480;
	sub_82179288(ctx, base);
loc_82179480:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82179468
	if (!ctx.cr0.eq) goto loc_82179468;
loc_8217948C:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,252
	ctx.r28.s64 = ctx.r28.s64 + 252;
	// bne 0x821793e8
	if (!ctx.cr0.eq) goto loc_821793E8;
loc_82179498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821793B8) {
	__imp__sub_821793B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821794A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82179288
	sub_82179288(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821794A0) {
	__imp__sub_821794A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821794A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,17280
	ctx.r7.s64 = ctx.r10.s64 + 17280;
	// addi r5,r11,-3456
	ctx.r5.s64 = ctx.r11.s64 + -3456;
loc_821794C0:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82179540
	if (!ctx.cr6.lt) goto loc_82179540;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821794D4:
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r31,r10,r7
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addis r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 196608;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-24576
	ctx.r10.s64 = ctx.r10.s64 + -24576;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// andc r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82179530
	if (ctx.cr6.eq) goto loc_82179530;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82179510:
	// lhzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r31,r10,r4
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stwx r11,r10,r4
	PPC_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r11.u32);
	// bdnz 0x82179510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179510;
loc_82179530:
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x821794d4
	if (ctx.cr6.lt) goto loc_821794D4;
loc_82179540:
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r6,1536
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1536, ctx.xer);
	// blt cr6,0x821794c0
	if (ctx.cr6.lt) goto loc_821794C0;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821794A8) {
	__imp__sub_821794A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82179560;
	__savegprlr_29(ctx, base);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r10,17280
	ctx.r6.s64 = ctx.r10.s64 + 17280;
	// addi r5,r11,-3456
	ctx.r5.s64 = ctx.r11.s64 + -3456;
loc_82179574:
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x821795fc
	if (!ctx.cr6.lt) goto loc_821795FC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82179588:
	// lwzx r9,r10,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addis r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 65536;
	// mulli r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 * 28;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// andc r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 & ~ctx.r9.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821795ec
	if (ctx.cr6.eq) goto loc_821795EC;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mulli r7,r4,3584
	ctx.r7.s64 = ctx.r4.s64 * 3584;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
loc_821795C0:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// addis r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 327680;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r10,-10240
	ctx.r9.s64 = ctx.r10.s64 + -10240;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bdnz 0x821795c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821795C0;
loc_821795EC:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82179588
	if (ctx.cr6.lt) goto loc_82179588;
loc_821795FC:
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// blt cr6,0x82179574
	if (ctx.cr6.lt) goto loc_82179574;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179558) {
	__imp__sub_82179558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179610) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r5,1792
	ctx.r5.s64 = 1792;
	// addi r30,r11,-3456
	ctx.r30.s64 = ctx.r11.s64 + -3456;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// bl 0x823de090
	ctx.lr = 0x82179640;
	sub_823DE090(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// bl 0x823de090
	ctx.lr = 0x82179654;
	sub_823DE090(ctx, base);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r31,r10,-31360
	ctx.r31.s64 = ctx.r10.s64 + -31360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-3840
	ctx.r3.s64 = ctx.r31.s64 + -3840;
	// bl 0x823de090
	ctx.lr = 0x8217966C;
	sub_823DE090(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// bl 0x823de090
	ctx.lr = 0x82179680;
	sub_823DE090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1792
	ctx.r5.s64 = 1792;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x82179690;
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

PPC_WEAK_FUNC(sub_82179610) {
	__imp__sub_82179610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821796A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x821796B0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4288
	ctx.r5.s64 = 4288;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822db158
	ctx.lr = 0x821796C8;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217981c
	if (ctx.cr6.eq) goto loc_8217981C;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-31779
	ctx.r9.s64 = -2082668544;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r26,r10,17280
	ctx.r26.s64 = ctx.r10.s64 + 17280;
	// addi r24,r9,23168
	ctx.r24.s64 = ctx.r9.s64 + 23168;
	// addi r21,r8,14896
	ctx.r21.s64 = ctx.r8.s64 + 14896;
	// addi r28,r11,-3456
	ctx.r28.s64 = ctx.r11.s64 + -3456;
loc_821796F8:
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821741d8
	ctx.lr = 0x82179704;
	sub_821741D8(ctx, base);
	// addis r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 65536;
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82179810
	if (ctx.cr6.eq) goto loc_82179810;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// rlwinm r23,r11,28,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8217974c
	if (ctx.cr6.eq) goto loc_8217974C;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x823e01e0
	ctx.lr = 0x82179740;
	sub_823E01E0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r3.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r9,r23
	ctx.r23.u64 = ctx.r9.u64 & ctx.r23.u64;
loc_8217974C:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82179810
	if (ctx.cr6.eq) goto loc_82179810;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8217975C:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82179764:
	// lhz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82174288
	ctx.lr = 0x82179770;
	sub_82174288(ctx, base);
	// lbz r11,71(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82179798
	if (!ctx.cr6.eq) goto loc_82179798;
	// rlwinm r11,r31,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r31,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// lwzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r7.u32);
	// b 0x821797d0
	goto loc_821797D0;
loc_82179798:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x821797a8
	if (!ctx.cr6.eq) goto loc_821797A8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821797d0
	if (!ctx.cr6.eq) goto loc_821797D0;
loc_821797A8:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r10,r28,5
	ctx.r10.s64 = ctx.r28.s64 + 327680;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r10,-8440
	ctx.r9.s64 = ctx.r10.s64 + -8440;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821797f4
	if (!ctx.cr6.eq) goto loc_821797F4;
loc_821797D0:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addis r9,r28,5
	ctx.r9.s64 = ctx.r28.s64 + 327680;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,-10240
	ctx.r9.s64 = ctx.r9.s64 + -10240;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r7,r11,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r6.u32);
loc_821797F4:
	// addi r29,r29,3584
	ctx.r29.s64 = ctx.r29.s64 + 3584;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r29,14336
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 14336, ctx.xer);
	// blt cr6,0x82179764
	if (ctx.cr6.lt) goto loc_82179764;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// bne 0x8217975c
	if (!ctx.cr0.eq) goto loc_8217975C;
loc_82179810:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bne 0x821796f8
	if (!ctx.cr0.eq) goto loc_821796F8;
loc_8217981C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821796A8) {
	__imp__sub_821796A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179824) {
	__imp__sub_82179824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82179830;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4288
	ctx.r5.s64 = 4288;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x822db158
	ctx.lr = 0x8217984C;
	sub_822DB158(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
	// lfs f31,-23300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23300);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r10,-3456
	ctx.r28.s64 = ctx.r10.s64 + -3456;
	// beq cr6,0x821798ec
	if (ctx.cr6.eq) goto loc_821798EC;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82179874:
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,624(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 624);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821798bc
	if (ctx.cr6.eq) goto loc_821798BC;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
loc_8217988C:
	// lwzu r3,24(r30)
	ea = 24 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x821741d8
	ctx.lr = 0x82179894;
	sub_821741D8(ctx, base);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-28416
	ctx.r11.s64 = ctx.r11.s64 + -28416;
	// rlwinm r9,r3,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r7,r9,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u32);
	// bne 0x8217988c
	if (!ctx.cr0.eq) goto loc_8217988C;
loc_821798BC:
	// lwz r11,296(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821798e0
	if (ctx.cr6.eq) goto loc_821798E0;
	// addis r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 196608;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,14588
	ctx.r11.s64 = ctx.r10.s64 + 14588;
loc_821798D4:
	// stfs f31,-8188(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8188, temp.u32);
	// stfsu f31,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821798d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821798D4;
loc_821798E0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82179874
	if (!ctx.cr0.eq) goto loc_82179874;
loc_821798EC:
	// li r5,4288
	ctx.r5.s64 = 4288;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822db158
	ctx.lr = 0x821798FC;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217991c
	if (ctx.cr6.eq) goto loc_8217991C;
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8217990C:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x821793b8
	ctx.lr = 0x82179914;
	sub_821793B8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8217990c
	if (!ctx.cr0.eq) goto loc_8217990C;
loc_8217991C:
	// li r5,4288
	ctx.r5.s64 = 4288;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,38
	ctx.r3.s64 = 38;
	// bl 0x822db158
	ctx.lr = 0x8217992C;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82179950
	if (ctx.cr6.eq) goto loc_82179950;
	// addi r30,r24,-4
	ctx.r30.s64 = ctx.r24.s64 + -4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8217993C:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82179288
	ctx.lr = 0x82179948;
	sub_82179288(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8217993c
	if (!ctx.cr0.eq) goto loc_8217993C;
loc_82179950:
	// li r5,4288
	ctx.r5.s64 = 4288;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x822db158
	ctx.lr = 0x82179960;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821799e8
	if (ctx.cr6.eq) goto loc_821799E8;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821799e8
	if (ctx.cr6.eq) goto loc_821799E8;
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// addi r31,r10,-16
	ctx.r31.s64 = ctx.r10.s64 + -16;
	// addi r29,r11,-29444
	ctx.r29.s64 = ctx.r11.s64 + -29444;
loc_82179988:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x821741d8
	ctx.lr = 0x82179990;
	sub_821741D8(ctx, base);
	// addis r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 262144;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-28416
	ctx.r10.s64 = ctx.r10.s64 + -28416;
	// rlwinm r9,r3,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwzu r3,44(r31)
	ea = 44 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x821741d8
	ctx.lr = 0x821799B8;
	sub_821741D8(ctx, base);
	// addis r10,r28,4
	ctx.r10.s64 = ctx.r28.s64 + 262144;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-28416
	ctx.r10.s64 = ctx.r10.s64 + -28416;
	// rlwinm r5,r3,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r5,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
	// or r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 | ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stfs f31,-1020(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + -1020, temp.u32);
	// stfsu f31,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bne 0x82179988
	if (!ctx.cr0.eq) goto loc_82179988;
loc_821799E8:
	// li r5,4288
	ctx.r5.s64 = 4288;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822db158
	ctx.lr = 0x821799F8;
	sub_822DB158(ctx, base);
	// lis r11,-32076
	ctx.r11.s64 = -2102132736;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,30336
	ctx.r30.s64 = ctx.r11.s64 + 30336;
	// beq cr6,0x82179a5c
	if (ctx.cr6.eq) goto loc_82179A5C;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82179A10:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821742a0
	ctx.lr = 0x82179A18;
	sub_821742A0(ctx, base);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r11,r28,3
	ctx.r11.s64 = ctx.r28.s64 + 196608;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r11,r11,-24568
	ctx.r11.s64 = ctx.r11.s64 + -24568;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82179a50
	if (!ctx.cr6.eq) goto loc_82179A50;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r3,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r8,r10,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
loc_82179A50:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82179a10
	if (!ctx.cr0.eq) goto loc_82179A10;
loc_82179A5C:
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-28416
	ctx.r4.s64 = ctx.r11.s64 + -28416;
	// bl 0x821794a8
	ctx.lr = 0x82179A6C;
	sub_821794A8(ctx, base);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// bl 0x82179558
	ctx.lr = 0x82179A7C;
	sub_82179558(ctx, base);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-27904
	ctx.r3.s64 = ctx.r11.s64 + -27904;
	// bl 0x82179558
	ctx.lr = 0x82179A8C;
	sub_82179558(ctx, base);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r11,-27392
	ctx.r3.s64 = ctx.r11.s64 + -27392;
	// bl 0x82179558
	ctx.lr = 0x82179A9C;
	sub_82179558(ctx, base);
	// addis r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 262144;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-26880
	ctx.r3.s64 = ctx.r11.s64 + -26880;
	// bl 0x82179558
	ctx.lr = 0x82179AAC;
	sub_82179558(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179828) {
	__imp__sub_82179828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179AB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
	// rlwinm r7,r3,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addis r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 327680;
	// addi r10,r10,17280
	ctx.r10.s64 = ctx.r10.s64 + 17280;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r5,r9,-10240
	ctx.r5.s64 = ctx.r9.s64 + -10240;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r4,r6,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwzx r9,r7,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82179af4
	if (ctx.cr6.eq) goto loc_82179AF4;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82179AF4:
	// addi r9,r3,3584
	ctx.r9.s64 = ctx.r3.s64 + 3584;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// rlwinm r7,r9,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r11,-10240
	ctx.r6.s64 = ctx.r11.s64 + -10240;
	// rlwinm r5,r9,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwzx r3,r5,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179b20
	if (ctx.cr6.eq) goto loc_82179B20;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
loc_82179B20:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,7072
	ctx.r10.s64 = ctx.r11.s64 + 7072;
	// lbzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179AB8) {
	__imp__sub_82179AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179B30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// addi r11,r3,7168
	ctx.r11.s64 = ctx.r3.s64 + 7168;
	// addi r10,r10,-3456
	ctx.r10.s64 = ctx.r10.s64 + -3456;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addis r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 327680;
	// addi r9,r9,17280
	ctx.r9.s64 = ctx.r9.s64 + 17280;
	// addi r7,r8,-10240
	ctx.r7.s64 = ctx.r8.s64 + -10240;
	// rlwinm r6,r11,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r5,r11,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// and r7,r4,r3
	ctx.r7.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82179b70
	if (ctx.cr6.eq) goto loc_82179B70;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82179B70:
	// addi r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 + 3584;
	// addis r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 327680;
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r5,r11,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// addi r6,r10,-10240
	ctx.r6.s64 = ctx.r10.s64 + -10240;
	// lwzx r3,r5,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179b9c
	if (ctx.cr6.eq) goto loc_82179B9C;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
loc_82179B9C:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,7072
	ctx.r10.s64 = ctx.r11.s64 + 7072;
	// lbzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179B30) {
	__imp__sub_82179B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179BAC) {
	__imp__sub_82179BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82179BB8;
	__savegprlr_28(ctx, base);
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,23168
	ctx.r11.s64 = ctx.r11.s64 + 23168;
	// ori r9,r10,22272
	ctx.r9.u64 = ctx.r10.u64 | 22272;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82179c54
	if (ctx.cr6.eq) goto loc_82179C54;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r5,r10,-6402
	ctx.r5.s64 = ctx.r10.s64 + -6402;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r9,r9,-6400
	ctx.r9.s64 = ctx.r9.s64 + -6400;
	// addi r4,r10,17280
	ctx.r4.s64 = ctx.r10.s64 + 17280;
	// addi r8,r8,-3456
	ctx.r8.s64 = ctx.r8.s64 + -3456;
loc_82179BFC:
	// lhz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addis r10,r8,5
	ctx.r10.s64 = ctx.r8.s64 + 327680;
	// rlwinm r30,r31,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r29,r10,-10240
	ctx.r29.s64 = ctx.r10.s64 + -10240;
	// rlwinm r28,r31,2,25,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x7C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r30,r30,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwzx r29,r28,r4
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// orc r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 | ~ctx.r31.u64;
	// and r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 & ctx.r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82179c44
	if (!ctx.cr6.eq) goto loc_82179C44;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// sthu r10,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r5.u32 = ea;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// ori r7,r7,22272
	ctx.r7.u64 = ctx.r7.u64 | 22272;
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
loc_82179C44:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82179bfc
	if (ctx.cr6.lt) goto loc_82179BFC;
loc_82179C54:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22272
	ctx.r9.u64 = ctx.r10.u64 | 22272;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179BB0) {
	__imp__sub_82179BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179C64) {
	__imp__sub_82179C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179C68) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82179C70;
	__savegprlr_19(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,-31779
	ctx.r10.s64 = -2082668544;
	// addi r22,r11,-3456
	ctx.r22.s64 = ctx.r11.s64 + -3456;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 262144;
	// addi r5,r10,23168
	ctx.r5.s64 = ctx.r10.s64 + 23168;
	// ori r8,r9,22272
	ctx.r8.u64 = ctx.r9.u64 | 22272;
	// addi r24,r11,-28416
	ctx.r24.s64 = ctx.r11.s64 + -28416;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// li r23,0
	ctx.r23.s64 = 0;
	// stwx r6,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// li r21,128
	ctx.r21.s64 = 128;
	// addi r4,r11,-31360
	ctx.r4.s64 = ctx.r11.s64 + -31360;
	// addi r30,r10,17280
	ctx.r30.s64 = ctx.r10.s64 + 17280;
loc_82179CB0:
	// lwz r26,2048(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 2048);
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82179da4
	if (!ctx.cr6.lt) goto loc_82179DA4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82179CC4:
	// lwzx r27,r10,r30
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// addis r10,r22,1
	ctx.r10.s64 = ctx.r22.s64 + 65536;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// andc r26,r26,r27
	ctx.r26.u64 = ctx.r26.u64 & ~ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
loc_82179CF0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 & ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82179d80
	if (!ctx.cr6.eq) goto loc_82179D80;
	// lhz r10,10(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// beq cr6,0x82179d80
	if (ctx.cr6.eq) goto loc_82179D80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82179D20:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r11,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r8,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// and r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82179d78
	if (!ctx.cr6.eq) goto loc_82179D78;
	// addis r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 65536;
	// lis r20,1
	ctx.r20.s64 = 65536;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r7,-6400
	ctx.r7.s64 = ctx.r7.s64 + -6400;
	// ori r20,r20,22272
	ctx.r20.u64 = ctx.r20.u64 | 22272;
	// lis r19,1
	ctx.r19.s64 = 65536;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r19,r19,22272
	ctx.r19.u64 = ctx.r19.u64 | 22272;
	// sthx r11,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u16);
	// lwzx r11,r5,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r20.u32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stwx r10,r8,r4
	PPC_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r10.u32);
	// stwx r6,r5,r19
	PPC_STORE_U32(ctx.r5.u32 + ctx.r19.u32, ctx.r6.u32);
loc_82179D78:
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// bdnz 0x82179d20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82179D20;
loc_82179D80:
	// addi r31,r31,3584
	ctx.r31.s64 = ctx.r31.s64 + 3584;
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplwi cr6,r31,14336
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 14336, ctx.xer);
	// blt cr6,0x82179cf0
	if (ctx.cr6.lt) goto loc_82179CF0;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82179cc4
	if (ctx.cr6.lt) goto loc_82179CC4;
loc_82179DA4:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x82179cb0
	if (!ctx.cr0.eq) goto loc_82179CB0;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179C68) {
	__imp__sub_82179C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r9,r11,-3456
	ctx.r9.s64 = ctx.r11.s64 + -3456;
	// ori r8,r10,33560
	ctx.r8.u64 = ctx.r10.u64 | 33560;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-7688(r10)
	PPC_STORE_U32(ctx.r10.u32 + -7688, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179DB8) {
	__imp__sub_82179DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179DE4) {
	__imp__sub_82179DE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179DE8) {
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
	// bl 0x82390b00
	ctx.lr = 0x82179E00;
	sub_82390B00(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-7696
	ctx.r30.s64 = ctx.r11.s64 + -7696;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_82179E10:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82179e10
	if (!ctx.cr0.eq) goto loc_82179E10;
	// li r3,29
	ctx.r3.s64 = 29;
	// bl 0x822ec4e8
	ctx.lr = 0x82179E34;
	sub_822EC4E8(ctx, base);
loc_82179E34:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stwcx. r7,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82179e34
	if (!ctx.cr0.eq) goto loc_82179E34;
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

PPC_WEAK_FUNC(sub_82179DE8) {
	__imp__sub_82179DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82179E6C) {
	__imp__sub_82179E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179E70) {
	PPC_FUNC_PROLOGUE();
	// li r3,29
	ctx.r3.s64 = 29;
	// b 0x822ec500
	sub_822EC500(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179E70) {
	__imp__sub_82179E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179E78) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82179E78) {
	__imp__sub_82179E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82179E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82179E88;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de024
	ctx.lr = 0x82179E90;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821825e8
	ctx.lr = 0x82179EA4;
	sub_821825E8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82182600
	ctx.lr = 0x82179EB0;
	sub_82182600(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r25,r11,23040
	ctx.r25.s64 = ctx.r11.s64 + 23040;
	// lfs f30,20476(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20476);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r10,-3456
	ctx.r27.s64 = ctx.r10.s64 + -3456;
	// beq cr6,0x82179f58
	if (ctx.cr6.eq) goto loc_82179F58;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r3,-8
	ctx.r30.s64 = ctx.r3.s64 + -8;
loc_82179ED8:
	// lwz r11,172(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 172);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f0,32(r30)
	ea = 32 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// fsubs f28,f11,f13
	ctx.f28.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f27,f10,f0
	ctx.f27.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821742a0
	ctx.lr = 0x82179F10;
	sub_821742A0(ctx, base);
	// fmuls f9,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// lfs f8,244(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 244);
	ctx.f8.f64 = double(temp.f32);
	// addis r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 196608;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22784
	ctx.r11.s64 = ctx.r11.s64 + 22784;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,92
	ctx.r28.s64 = ctx.r28.s64 + 92;
	// lfsx f7,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f27,f27,f9
	ctx.f6.f64 = double(float(ctx.f27.f64 * ctx.f27.f64 + ctx.f9.f64));
	// fmadds f5,f29,f29,f6
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fadds f2,f3,f30
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f30.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fsubs f0,f1,f7
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f7.f64));
	// fsel f13,f0,f7,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f7.f64 : ctx.f1.f64;
	// stfsx f13,r10,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bne 0x82179ed8
	if (!ctx.cr0.eq) goto loc_82179ED8;
loc_82179F58:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821825e8
	ctx.lr = 0x82179F60;
	sub_821825E8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82182600
	ctx.lr = 0x82179F6C;
	sub_82182600(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8217a014
	if (ctx.cr6.eq) goto loc_8217A014;
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r3,24
	ctx.r30.s64 = ctx.r3.s64 + 24;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
loc_82179F84:
	// lhz r28,36(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823862b0
	ctx.lr = 0x82179F90;
	sub_823862B0(ctx, base);
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179ffc
	if (ctx.cr6.eq) goto loc_82179FFC;
	// lfs f0,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r27,3
	ctx.r11.s64 = ctx.r27.s64 + 196608;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,6400
	ctx.r11.s64 = ctx.r11.s64 + 6400;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f4.f64));
	// fsel f9,f10,f4,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f4.f64 : ctx.f11.f64;
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
loc_82179FFC:
	// lwz r11,176(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 176);
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bne 0x82179f84
	if (!ctx.cr0.eq) goto loc_82179F84;
loc_8217A014:
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// lbz r10,105(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 105);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a104
	if (ctx.cr6.eq) goto loc_8217A104;
	// lwz r28,20(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r5,56(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// beq cr6,0x8217a104
	if (ctx.cr6.eq) goto loc_8217A104;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r3,r11,17280
	ctx.r3.s64 = ctx.r11.s64 + 17280;
loc_8217A050:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bge cr6,0x8217a0f4
	if (!ctx.cr6.lt) goto loc_8217A0F4;
	// rlwinm r6,r30,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8217A068:
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addis r8,r27,4
	ctx.r8.s64 = ctx.r27.s64 + 262144;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r8,-29440
	ctx.r8.s64 = ctx.r8.s64 + -29440;
	// lwzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r26,r10,r4
	ctx.r26.u64 = ctx.r10.u64 + ctx.r4.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// cntlzw r10,r9
	ctx.r10.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lbz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfsx f3,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f8,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fsqrts f0,f1
	ctx.f0.f64 = double(float(sqrt(ctx.f1.f64)));
	// fsubs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsubs f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fsel f9,f10,f3,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f3.f64 : ctx.f11.f64;
	// stfsx f9,r11,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x8217a068
	if (ctx.cr6.lt) goto loc_8217A068;
loc_8217A0F4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8217a050
	if (ctx.cr6.lt) goto loc_8217A050;
loc_8217A104:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x8217A110;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82179E80) {
	__imp__sub_82179E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217A114) {
	__imp__sub_8217A114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8217A120;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// stw r3,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r3.u32);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// bl 0x822f19f0
	ctx.lr = 0x8217A13C;
	sub_822F19F0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r20,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r20.u32);
	// stw r20,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r20.u32);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r20,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r20.u32);
	// stw r20,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r20.u32);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// beq cr6,0x8217a3fc
	if (ctx.cr6.eq) goto loc_8217A3FC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-31776
	ctx.r10.s64 = -2082471936;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r8,-32083
	ctx.r8.s64 = -2102591488;
	// addi r6,r10,-9216
	ctx.r6.s64 = ctx.r10.s64 + -9216;
	// lfs f31,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r9,-12416
	ctx.r5.s64 = ctx.r9.s64 + -12416;
	// addi r19,r11,17280
	ctx.r19.s64 = ctx.r11.s64 + 17280;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// addi r18,r8,-3456
	ctx.r18.s64 = ctx.r8.s64 + -3456;
loc_8217A198:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822f1eb8
	ctx.lr = 0x8217A1A4;
	sub_822F1EB8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82300ae0
	ctx.lr = 0x8217A1B0;
	sub_82300AE0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821742a0
	ctx.lr = 0x8217A1BC;
	sub_821742A0(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r18,3
	ctx.r10.s64 = ctx.r18.s64 + 196608;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r10,-24576
	ctx.r10.s64 = ctx.r10.s64 + -24576;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r14,r11,r10
	ctx.r14.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r14,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r14.u32);
	// bl 0x82300b38
	ctx.lr = 0x8217A1E0;
	sub_82300B38(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300a68
	ctx.lr = 0x8217A1F4;
	sub_82300A68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r30,r16,27
	ctx.r30.u64 = ctx.r16.u32 & 0x1F;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r31,r16,27,5,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 27) & 0x7FFFFFF;
	// subfic r28,r30,32
	ctx.xer.ca = ctx.r30.u32 <= 32;
	ctx.r28.s64 = 32 - ctx.r30.s64;
	// bl 0x822f2368
	ctx.lr = 0x8217A210;
	sub_822F2368(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8217a3e0
	if (ctx.cr6.eq) goto loc_8217A3E0;
	// neg r11,r31
	ctx.r11.s64 = -ctx.r31.s64;
	// addi r21,r1,180
	ctx.r21.s64 = ctx.r1.s64 + 180;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r1,184
	ctx.r22.s64 = ctx.r1.s64 + 184;
	// addi r23,r1,188
	ctx.r23.s64 = ctx.r1.s64 + 188;
	// addi r24,r1,192
	ctx.r24.s64 = ctx.r1.s64 + 192;
	// addi r25,r1,196
	ctx.r25.s64 = ctx.r1.s64 + 196;
	// addi r26,r1,200
	ctx.r26.s64 = ctx.r1.s64 + 200;
loc_8217A238:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r11,r20,r11
	ctx.r11.u64 = ctx.r20.u64 + ctx.r11.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// lwz r9,104(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// lwz r8,108(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r6,116(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r5,120(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// stw r7,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r7.u32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lwzx r10,r31,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// lwzx r9,r31,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// beq cr6,0x8217a2fc
	if (ctx.cr6.eq) goto loc_8217A2FC;
	// srw r6,r10,r30
	ctx.r6.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r7,r31,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// slw r10,r10,r28
	ctx.r10.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r28.u8 & 0x3F));
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r31.u64);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// slw r8,r11,r28
	ctx.r8.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r28.u8 & 0x3F));
	// srw r4,r9,r30
	ctx.r4.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r5,r31,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// srw r15,r7,r30
	ctx.r15.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r30.u8 & 0x3F));
	// lwzx r3,r31,r26
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// slw r9,r9,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r28.u8 & 0x3F));
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// srw r31,r5,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r30.u8 & 0x3F));
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// slw r7,r7,r28
	ctx.r7.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r14,88(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srw r3,r3,r30
	ctx.r3.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r30.u8 & 0x3F));
	// slw r5,r5,r28
	ctx.r5.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r15,388(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// or r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 | ctx.r4.u64;
	// or r7,r31,r7
	ctx.r7.u64 = ctx.r31.u64 | ctx.r7.u64;
	// ld r31,120(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// or r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 | ctx.r5.u64;
	// b 0x8217a308
	goto loc_8217A308;
loc_8217A2FC:
	// lwzx r8,r31,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r7,r31,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// lwzx r6,r31,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
loc_8217A308:
	// lwz r5,148(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// and r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 & ctx.r6.u64;
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// and r5,r4,r7
	ctx.r5.u64 = ctx.r4.u64 & ctx.r7.u64;
	// lwz r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// and r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 & ctx.r8.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// or r7,r6,r5
	ctx.r7.u64 = ctx.r6.u64 | ctx.r5.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// and r5,r4,r9
	ctx.r5.u64 = ctx.r4.u64 & ctx.r9.u64;
	// or r4,r7,r3
	ctx.r4.u64 = ctx.r7.u64 | ctx.r3.u64;
	// and r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ctx.r10.u64;
	// or r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 | ctx.r5.u64;
	// and r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ctx.r11.u64;
	// or r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 | ctx.r3.u64;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8217a3c8
	if (!ctx.cr6.eq) goto loc_8217A3C8;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x821741d8
	ctx.lr = 0x8217A35C;
	sub_821741D8(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217a398
	if (ctx.cr6.eq) goto loc_8217A398;
	// addis r10,r18,4
	ctx.r10.s64 = ctx.r18.s64 + 262144;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-11520
	ctx.r10.s64 = ctx.r10.s64 + -11520;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addis r9,r18,4
	ctx.r9.s64 = ctx.r18.s64 + 262144;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,-11008
	ctx.r6.s64 = ctx.r9.s64 + -11008;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r8,r19
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r19.u32);
	// or r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stfsx f31,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
loc_8217A398:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r3,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r9,r19
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// stfsx f31,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r11,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 | ctx.r17.u64;
loc_8217A3C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r20,r20,124
	ctx.r20.s64 = ctx.r20.s64 + 124;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x8217a238
	if (!ctx.cr0.eq) goto loc_8217A238;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r20,0
	ctx.r20.s64 = 0;
loc_8217A3E0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r16,r10,r16
	ctx.r16.u64 = ctx.r10.u64 + ctx.r16.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217a198
	if (ctx.cr6.lt) goto loc_8217A198;
loc_8217A3FC:
	// cntlzw r11,r17
	ctx.r11.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217A118) {
	__imp__sub_8217A118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A410) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r11,r11,-3464
	ctx.r11.s64 = ctx.r11.s64 + -3464;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8217a450
	if (ctx.cr6.gt) goto loc_8217A450;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8217A434:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217a434
	if (!ctx.cr0.eq) goto loc_8217A434;
loc_8217A450:
	// bl 0x8228bae8
	ctx.lr = 0x8217A454;
	sub_8228BAE8(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r11,-640
	ctx.r10.s64 = ctx.r11.s64 + -640;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
	// lfs f0,-23300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23300);
	ctx.f0.f64 = double(temp.f32);
	// lbz r7,105(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 105);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8217a4bc
	if (ctx.cr6.eq) goto loc_8217A4BC;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// ori r9,r9,33564
	ctx.r9.u64 = ctx.r9.u64 | 33564;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8217a4bc
	if (ctx.cr6.eq) goto loc_8217A4BC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a4bc
	if (ctx.cr6.eq) goto loc_8217A4BC;
	// addis r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 262144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-30468
	ctx.r10.s64 = ctx.r9.s64 + -30468;
loc_8217A4AC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,1028(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 1028, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217a4ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A4AC;
loc_8217A4BC:
	// li r9,1536
	ctx.r9.s64 = 1536;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,28924
	ctx.r10.s64 = ctx.r10.s64 + 28924;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217A4CC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-6140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6140);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f10,-6140(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + -6140, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217a4cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A4CC;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// addis r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 196608;
	// addi r10,r10,14588
	ctx.r10.s64 = ctx.r10.s64 + 14588;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217A4F8:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-8188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8188);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfs f10,-8188(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8188, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217a4f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A4F8;
	// li r10,48
	ctx.r10.s64 = 48;
	// addis r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 327680;
	// addi r11,r11,-10500
	ctx.r11.s64 = ctx.r11.s64 + -10500;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217A524:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-252(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -252);
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r7,-252(r11)
	PPC_STORE_U32(ctx.r11.u32 + -252, ctx.r7.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217a524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A524;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217A410) {
	__imp__sub_8217A410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217A54C) {
	__imp__sub_8217A54C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A550) {
	PPC_FUNC_PROLOGUE();
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
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r31,r10,-3456
	ctx.r31.s64 = ctx.r10.s64 + -3456;
	// ori r8,r9,33556
	ctx.r8.u64 = ctx.r9.u64 | 33556;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,-7688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -7688);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
	// beq cr6,0x8217a5a8
	if (ctx.cr6.eq) goto loc_8217A5A8;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,33560
	ctx.r8.u64 = ctx.r9.u64 | 33560;
	// stw r10,-7688(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7688, ctx.r10.u32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8217a5a8
	if (ctx.cr6.eq) goto loc_8217A5A8;
	// bl 0x82178128
	ctx.lr = 0x8217A5A8;
	sub_82178128(ctx, base);
loc_8217A5A8:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217A5B8:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8217a5b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217A5B8;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r8,r9,33560
	ctx.r8.u64 = ctx.r9.u64 | 33560;
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// bl 0x8217dbb8
	ctx.lr = 0x8217A5DC;
	sub_8217DBB8(ctx, base);
	// lis r6,7
	ctx.r6.s64 = 458752;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r5,r6,33556
	ctx.r5.u64 = ctx.r6.u64 | 33556;
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8217a410
	ctx.lr = 0x8217A5F0;
	sub_8217A410(ctx, base);
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

PPC_WEAK_FUNC(sub_8217A550) {
	__imp__sub_8217A550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217A604) {
	__imp__sub_8217A604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A608) {
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
	// bl 0x8228b9f8
	ctx.lr = 0x8217A618;
	sub_8228B9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217a638
	if (ctx.cr6.eq) goto loc_8217A638;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8320(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217a638
	if (!ctx.cr6.eq) goto loc_8217A638;
	// bl 0x8217a550
	ctx.lr = 0x8217A638;
	sub_8217A550(ctx, base);
loc_8217A638:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217A608) {
	__imp__sub_8217A608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217A650;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r30,-32083
	ctx.r30.s64 = -2102591488;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,4608
	ctx.r31.s64 = ctx.r11.s64 + 4608;
loc_8217A664:
	// bl 0x82178030
	ctx.lr = 0x8217A668;
	sub_82178030(ctx, base);
	// bl 0x8228b9f8
	ctx.lr = 0x8217A66C;
	sub_8228B9F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217a680
	if (ctx.cr6.eq) goto loc_8217A680;
	// lwz r11,8320(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8320);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217a6b4
	if (ctx.cr6.eq) goto loc_8217A6B4;
loc_8217A680:
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x8217a6a0
	if (!ctx.cr0.eq) goto loc_8217A6A0;
	// lwsync 
	// stw r29,-7808(r30)
	PPC_STORE_U32(ctx.r30.u32 + -7808, ctx.r29.u32);
loc_8217A6A0:
	// bl 0x82393cc8
	ctx.lr = 0x8217A6A4;
	sub_82393CC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8228b0d8
	ctx.lr = 0x8217A6AC;
	sub_8228B0D8(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8217A6B0;
	sub_82393D48(ctx, base);
	// b 0x8217a664
	goto loc_8217A664;
loc_8217A6B4:
	// bl 0x8217a550
	ctx.lr = 0x8217A6B8;
	sub_8217A550(ctx, base);
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x8217a6d8
	if (!ctx.cr0.eq) goto loc_8217A6D8;
	// lwsync 
	// stw r29,-7808(r30)
	PPC_STORE_U32(ctx.r30.u32 + -7808, ctx.r29.u32);
loc_8217A6D8:
	// bl 0x82177a90
	ctx.lr = 0x8217A6DC;
	sub_82177A90(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217A648) {
	__imp__sub_8217A648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217A6E4) {
	__imp__sub_8217A6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A6E8) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// addi r11,r11,-3464
	ctx.r11.s64 = ctx.r11.s64 + -3464;
	// lwz r10,-4240(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4240);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8217a778
	if (!ctx.cr6.eq) goto loc_8217A778;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217a750
	if (ctx.cr6.eq) goto loc_8217A750;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x8217a73c
	if (ctx.cr6.gt) goto loc_8217A73C;
	// li r10,2
	ctx.r10.s64 = 2;
loc_8217A720:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8217a720
	if (!ctx.cr0.eq) goto loc_8217A720;
loc_8217A73C:
	// bl 0x8228bae8
	ctx.lr = 0x8217A740;
	sub_8228BAE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8217A750:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r9,r11,-3456
	ctx.r9.s64 = ctx.r11.s64 + -3456;
	// ori r8,r10,33560
	ctx.r8.u64 = ctx.r10.u64 | 33560;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8217A778:
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lis r9,7
	ctx.r9.s64 = 458752;
	// addi r8,r10,-3456
	ctx.r8.s64 = ctx.r10.s64 + -3456;
	// ori r7,r9,33560
	ctx.r7.u64 = ctx.r9.u64 | 33560;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-4240(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4240, ctx.r10.u32);
	// li r3,25
	ctx.r3.s64 = 25;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bl 0x823b7e40
	ctx.lr = 0x8217A7A0;
	sub_823B7E40(ctx, base);
	// bl 0x8217a410
	ctx.lr = 0x8217A7A4;
	sub_8217A410(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217A6E8) {
	__imp__sub_8217A6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217A7B4) {
	__imp__sub_8217A7B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217A7B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x8217A7C0;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de028
	ctx.lr = 0x8217A7C8;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,4288
	ctx.r5.s64 = 4288;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822db158
	ctx.lr = 0x8217A7E0;
	sub_822DB158(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217aa90
	if (ctx.cr6.eq) goto loc_8217AA90;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// lfs f29,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// lfs f28,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lfs f30,6912(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r28,r11,17280
	ctx.r28.s64 = ctx.r11.s64 + 17280;
	// addi r29,r10,-3456
	ctx.r29.s64 = ctx.r10.s64 + -3456;
loc_8217A81C:
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// bl 0x821741d8
	ctx.lr = 0x8217A824;
	sub_821741D8(ctx, base);
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r26,8(r25)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8217aa84
	if (ctx.cr6.eq) goto loc_8217AA84;
	// lwz r27,20(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r5,r27
	ctx.r22.u64 = ctx.r5.u64 + ctx.r27.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823de1f0
	ctx.lr = 0x8217A85C;
	sub_823DE1F0(ctx, base);
	// subf r11,r27,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r27.s64;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r6,r10,-20752
	ctx.r6.s64 = ctx.r10.s64 + -20752;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217b660
	ctx.lr = 0x8217A878;
	sub_8217B660(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r6,r9,-20672
	ctx.r6.s64 = ctx.r9.s64 + -20672;
	// subf r8,r22,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r22.s64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// bl 0x8217b660
	ctx.lr = 0x8217A898;
	sub_8217B660(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8217a918
	if (ctx.cr6.eq) goto loc_8217A918;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8217A8AC:
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82174288
	ctx.lr = 0x8217A8B4;
	sub_82174288(ctx, base);
	// lbz r10,71(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217a904
	if (ctx.cr6.eq) goto loc_8217A904;
	// lhz r11,78(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 78);
	// lhz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 76);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f8,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fsubs f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fsel f31,f5,f31,f6
	ctx.f31.f64 = ctx.f5.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
loc_8217A904:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bne 0x8217a8ac
	if (!ctx.cr0.eq) goto loc_8217A8AC;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x8217a920
	if (!ctx.cr6.eq) goto loc_8217A920;
loc_8217A918:
	// stfs f28,24(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r25.u32 + 24, temp.u32);
	// b 0x8217aa84
	goto loc_8217AA84;
loc_8217A920:
	// fdivs f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f31.f64));
	// stfs f0,24(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 24, temp.u32);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_8217A938:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_8217A944:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addis r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 327680;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r9,-10240
	ctx.r9.s64 = ctx.r9.s64 + -10240;
	// rlwinm r6,r11,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r6,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// and r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 & ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217aaa0
	if (ctx.cr6.eq) goto loc_8217AAA0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217a944
	if (ctx.cr6.lt) goto loc_8217A944;
loc_8217A980:
	// rlwinm r11,r24,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 27) & 0x7FFFFFF;
	// sth r23,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r23.u16);
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// sth r23,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r23.u16);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r24,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x7C;
	// addi r11,r10,-28416
	ctx.r11.s64 = ctx.r10.s64 + -28416;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_8217A9B0:
	// addi r7,r7,3584
	ctx.r7.s64 = ctx.r7.s64 + 3584;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r7,3584
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3584, ctx.xer);
	// ble cr6,0x8217a938
	if (!ctx.cr6.gt) goto loc_8217A938;
	// li r3,256
	ctx.r3.s64 = 256;
	// li r7,7168
	ctx.r7.s64 = 7168;
	// addi r5,r25,4
	ctx.r5.s64 = ctx.r25.s64 + 4;
loc_8217A9D0:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8217A9DC:
	// addis r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 327680;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r11,-10240
	ctx.r6.s64 = ctx.r11.s64 + -10240;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// lwzx r6,r11,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// and r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 & ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ab14
	if (ctx.cr6.eq) goto loc_8217AB14;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217a9dc
	if (ctx.cr6.lt) goto loc_8217A9DC;
loc_8217AA18:
	// sth r23,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r23.u16);
	// rlwinm r10,r24,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 27) & 0x7FFFFFF;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// sth r23,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r23.u16);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r24,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x7C;
	// addi r10,r11,-28416
	ctx.r10.s64 = ctx.r11.s64 + -28416;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r6,r4
	ctx.r9.u64 = ctx.r6.u64 | ctx.r4.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8217AA48:
	// addi r7,r7,3584
	ctx.r7.s64 = ctx.r7.s64 + 3584;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// cmplwi cr6,r7,10752
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 10752, ctx.xer);
	// ble cr6,0x8217a9d0
	if (!ctx.cr6.gt) goto loc_8217A9D0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8217aa84
	if (ctx.cr6.eq) goto loc_8217AA84;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// rlwinm r11,r24,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-26368
	ctx.r10.s64 = ctx.r10.s64 + -26368;
	// rlwinm r9,r24,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0x7C;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r7,r9,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
loc_8217AA84:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// bne 0x8217a81c
	if (!ctx.cr0.eq) goto loc_8217A81C;
loc_8217AA90:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de074
	ctx.lr = 0x8217AA9C;
	__restfpr_28(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_8217AAA0:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8217a980
	if (!ctx.cr6.lt) goto loc_8217A980;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8217AAB4:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addis r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 327680;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r9,-10240
	ctx.r9.s64 = ctx.r9.s64 + -10240;
	// rlwinm r30,r11,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r30,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217aaf8
	if (!ctx.cr6.eq) goto loc_8217AAF8;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217aab4
	if (ctx.cr6.lt) goto loc_8217AAB4;
loc_8217AAF8:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8217a980
	if (!ctx.cr6.gt) goto loc_8217A980;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// sth r6,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r6.u16);
	// li r31,1
	ctx.r31.s64 = 1;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// b 0x8217a9b0
	goto loc_8217A9B0;
loc_8217AB14:
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8217aa18
	if (!ctx.cr6.lt) goto loc_8217AA18;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_8217AB28:
	// addis r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 327680;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r30,r11,-10240
	ctx.r30.s64 = ctx.r11.s64 + -10240;
	// add r11,r9,r7
	ctx.r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217ab6c
	if (!ctx.cr6.eq) goto loc_8217AB6C;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8217ab28
	if (ctx.cr6.lt) goto loc_8217AB28;
loc_8217AB6C:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8217aa18
	if (!ctx.cr6.gt) goto loc_8217AA18;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// add r10,r6,r26
	ctx.r10.u64 = ctx.r6.u64 + ctx.r26.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// li r31,1
	ctx.r31.s64 = 1;
	// sth r10,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r10.u16);
	// b 0x8217aa48
	goto loc_8217AA48;
}

PPC_WEAK_FUNC(sub_8217A7B8) {
	__imp__sub_8217A7B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217AB8C) {
	__imp__sub_8217AB8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AB90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8217AB98;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82179bb0
	ctx.lr = 0x8217ABA0;
	sub_82179BB0(ctx, base);
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// addi r7,r9,-3456
	ctx.r7.s64 = ctx.r9.s64 + -3456;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r26,r11,23168
	ctx.r26.s64 = ctx.r11.s64 + 23168;
	// addis r11,r7,5
	ctx.r11.s64 = ctx.r7.s64 + 327680;
	// ori r8,r10,22272
	ctx.r8.u64 = ctx.r10.u64 | 22272;
	// addi r25,r11,-10240
	ctx.r25.s64 = ctx.r11.s64 + -10240;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,448
	ctx.r24.s64 = 448;
	// addi r23,r11,17280
	ctx.r23.s64 = ctx.r11.s64 + 17280;
	// lwzx r29,r26,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
loc_8217ABD4:
	// lwz r30,0(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x8217ac34
	if (!ctx.cr6.lt) goto loc_8217AC34;
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,-6402
	ctx.r9.s64 = ctx.r10.s64 + -6402;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8217ABF8:
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r11,r10,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// andc r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// bl 0x8217b780
	ctx.lr = 0x8217AC10;
	sub_8217B780(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217ac24
	if (ctx.cr6.eq) goto loc_8217AC24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// sthu r31,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r28.u32 = ea;
loc_8217AC24:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x8217abf8
	if (ctx.cr6.lt) goto loc_8217ABF8;
loc_8217AC34:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// bne 0x8217abd4
	if (!ctx.cr0.eq) goto loc_8217ABD4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r10,r26,1
	ctx.r10.s64 = ctx.r26.s64 + 65536;
	// ori r7,r11,22272
	ctx.r7.u64 = ctx.r11.u64 | 22272;
	// addis r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 65536;
	// addi r8,r10,-6400
	ctx.r8.s64 = ctx.r10.s64 + -6400;
	// addi r10,r11,-6400
	ctx.r10.s64 = ctx.r11.s64 + -6400;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r26,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,-20872
	ctx.r6.s64 = ctx.r6.s64 + -20872;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r5,r3,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// bl 0x8217b660
	ctx.lr = 0x8217AC84;
	sub_8217B660(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r3,r4,22272
	ctx.r3.u64 = ctx.r4.u64 | 22272;
	// lwzx r11,r26,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8217ad6c
	if (!ctx.cr6.lt) goto loc_8217AD6C;
	// addis r9,r26,1
	ctx.r9.s64 = ctx.r26.s64 + 65536;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-6400
	ctx.r9.s64 = ctx.r9.s64 + -6400;
	// subf r25,r11,r29
	ctx.r25.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8217ACB0:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwzx r8,r10,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// lwzx r7,r9,r23
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8217ad48
	if (!ctx.cr6.eq) goto loc_8217AD48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8217b780
	ctx.lr = 0x8217ACE0;
	sub_8217B780(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8217ACE4:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r9,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8217ad0c
	if (ctx.cr6.eq) goto loc_8217AD0C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82178778
	ctx.lr = 0x8217AD04;
	sub_82178778(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217ad48
	if (ctx.cr6.eq) goto loc_8217AD48;
loc_8217AD0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217ad24
	if (ctx.cr6.eq) goto loc_8217AD24;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82178838
	ctx.lr = 0x8217AD24;
	sub_82178838(ctx, base);
loc_8217AD24:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x8217ace4
	if (!ctx.cr6.eq) goto loc_8217ACE4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217ad38
	if (ctx.cr6.eq) goto loc_8217AD38;
	// bl 0x821451b0
	ctx.lr = 0x8217AD38;
	sub_821451B0(ctx, base);
loc_8217AD38:
	// lwz r30,8(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145160
	ctx.lr = 0x8217AD44;
	sub_82145160(ctx, base);
	// b 0x8217ace4
	goto loc_8217ACE4;
loc_8217AD48:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x8217acb0
	if (!ctx.cr0.eq) goto loc_8217ACB0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217ad6c
	if (ctx.cr6.eq) goto loc_8217AD6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82178838
	ctx.lr = 0x8217AD68;
	sub_82178838(ctx, base);
	// bl 0x821451b0
	ctx.lr = 0x8217AD6C;
	sub_821451B0(ctx, base);
loc_8217AD6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a5548
	ctx.lr = 0x8217AD74;
	sub_823A5548(ctx, base);
	// bl 0x82179c68
	ctx.lr = 0x8217AD78;
	sub_82179C68(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217AB90) {
	__imp__sub_8217AB90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AD80) {
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
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17264(r1)
	ea = -17264 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82178030
	ctx.lr = 0x8217ADA8;
	sub_82178030(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r5,1792
	ctx.r5.s64 = 1792;
	// addi r30,r11,-3456
	ctx.r30.s64 = ctx.r11.s64 + -3456;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 327680;
	// addi r3,r11,-10240
	ctx.r3.s64 = ctx.r11.s64 + -10240;
	// bl 0x823de090
	ctx.lr = 0x8217ADC4;
	sub_823DE090(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// bl 0x823de090
	ctx.lr = 0x8217ADD8;
	sub_823DE090(ctx, base);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// li r5,192
	ctx.r5.s64 = 192;
	// addi r31,r10,-31360
	ctx.r31.s64 = ctx.r10.s64 + -31360;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-3840
	ctx.r3.s64 = ctx.r31.s64 + -3840;
	// bl 0x823de090
	ctx.lr = 0x8217ADF0;
	sub_823DE090(ctx, base);
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-26368
	ctx.r3.s64 = ctx.r11.s64 + -26368;
	// bl 0x823de090
	ctx.lr = 0x8217AE04;
	sub_823DE090(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,1792
	ctx.r5.s64 = 1792;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8217AE14;
	sub_823DE090(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821796a8
	ctx.lr = 0x8217AE1C;
	sub_821796A8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82179828
	ctx.lr = 0x8217AE24;
	sub_82179828(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217a7b8
	ctx.lr = 0x8217AE2C;
	sub_8217A7B8(ctx, base);
	// bl 0x82178638
	ctx.lr = 0x8217AE30;
	sub_82178638(ctx, base);
	// lwz r9,0(r13)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-7808
	ctx.r8.s64 = ctx.r11.s64 + -7808;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,4344(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4344, ctx.r7.u32);
	// stwx r11,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// bne 0x8217ae60
	if (!ctx.cr0.eq) goto loc_8217AE60;
	// lwsync 
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
loc_8217AE60:
	// addi r1,r1,17264
	ctx.r1.s64 = ctx.r1.s64 + 17264;
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

PPC_WEAK_FUNC(sub_8217AD80) {
	__imp__sub_8217AD80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AE78) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8217b780
	ctx.lr = 0x8217AE98;
	sub_8217B780(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217b780
	ctx.lr = 0x8217AEA8;
	sub_8217B780(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217aec0
	if (ctx.cr0.eq) goto loc_8217AEC0;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x8217aed4
	goto loc_8217AED4;
loc_8217AEC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
loc_8217AED4:
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

PPC_WEAK_FUNC(sub_8217AE78) {
	__imp__sub_8217AE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217AEEC) {
	__imp__sub_8217AEEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AEF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217AEF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82179ab8
	ctx.lr = 0x8217AF08;
	sub_82179AB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179ab8
	ctx.lr = 0x8217AF14;
	sub_82179AB8(ctx, base);
	// subf. r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217af28
	if (ctx.cr0.eq) goto loc_8217AF28;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8217AF28:
	// subfc r11,r30,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217AEF0) {
	__imp__sub_8217AEF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217AF3C) {
	__imp__sub_8217AF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217AF48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82179b30
	ctx.lr = 0x8217AF58;
	sub_82179B30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82179b30
	ctx.lr = 0x8217AF64;
	sub_82179B30(ctx, base);
	// subf. r11,r3,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217af78
	if (ctx.cr0.eq) goto loc_8217AF78;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8217AF78:
	// subfc r11,r30,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217AF40) {
	__imp__sub_8217AF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217AF8C) {
	__imp__sub_8217AF8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217AF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8217AF98;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r29,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r29.s64 = temp.s64;
	// bge cr6,0x8217b008
	if (!ctx.cr6.lt) goto loc_8217B008;
	// clrlwi r25,r6,16
	ctx.r25.u64 = ctx.r6.u32 & 0xFFFF;
loc_8217AFC8:
	// rlwinm r28,r29,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lhzx r3,r28,r30
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
	// bctrl 
	ctx.lr = 0x8217AFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b008
	if (ctx.cr6.eq) goto loc_8217B008;
	// lhzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r30.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r29.s32, ctx.xer);
	// sthx r11,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u16);
	// addze r29,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r29.s64 = temp.s64;
	// blt cr6,0x8217afc8
	if (ctx.cr6.lt) goto loc_8217AFC8;
loc_8217B008:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r24,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217AF90) {
	__imp__sub_8217AF90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8217B020;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b064
	if (ctx.cr6.eq) goto loc_8217B064;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8217b064
	if (ctx.cr6.eq) goto loc_8217B064;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_8217B064:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b094
	if (ctx.cr6.eq) goto loc_8217B094;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217b094
	if (ctx.cr6.eq) goto loc_8217B094;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_8217B094:
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B0A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b0c4
	if (ctx.cr6.eq) goto loc_8217B0C4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8217b0c4
	if (ctx.cr6.eq) goto loc_8217B0C4;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_8217B0C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B018) {
	__imp__sub_8217B018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B0CC) {
	__imp__sub_8217B0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B0D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8217B0D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8217b14c
	if (!ctx.cr6.lt) goto loc_8217B14C;
loc_8217B104:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r4,-2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b128
	if (ctx.cr6.eq) goto loc_8217B128;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8217B128:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// lhzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// sthx r9,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r9.u16);
	// blt cr6,0x8217b104
	if (ctx.cr6.lt) goto loc_8217B104;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_8217B14C:
	// bne cr6,0x8217b168
	if (!ctx.cr6.eq) goto loc_8217B168;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
	// lhz r8,-2(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sthx r8,r10,r30
	PPC_STORE_U16(ctx.r10.u32 + ctx.r30.u32, ctx.r8.u16);
loc_8217B168:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217af90
	ctx.lr = 0x8217B180;
	sub_8217AF90(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B0D0) {
	__imp__sub_8217B0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217B190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8217b21c
	if (!ctx.cr6.gt) goto loc_8217B21C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8217b018
	ctx.lr = 0x8217B1D4;
	sub_8217B018(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x8217b018
	ctx.lr = 0x8217B1E8;
	sub_8217B018(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x8217b018
	ctx.lr = 0x8217B200;
	sub_8217B018(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217b018
	ctx.lr = 0x8217B214;
	sub_8217B018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8217B21C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217b018
	ctx.lr = 0x8217B228;
	sub_8217B018(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B188) {
	__imp__sub_8217B188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8217B238;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srawi r28,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 1;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r10,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8217b284
	if (!ctx.cr0.gt) goto loc_8217B284;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8217B260:
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// lhzu r6,-2(r30)
	ea = -2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217b0d0
	ctx.lr = 0x8217B27C;
	sub_8217B0D0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8217b260
	if (ctx.cr6.gt) goto loc_8217B260;
loc_8217B284:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B230) {
	__imp__sub_8217B230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B28C) {
	__imp__sub_8217B28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8217B298;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8217b364
	if (ctx.cr6.eq) goto loc_8217B364;
	// addi r30,r3,2
	ctx.r30.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8217b364
	if (ctx.cr6.eq) goto loc_8217B364;
	// subfic r24,r3,2
	ctx.xer.ca = ctx.r3.u32 <= 2;
	ctx.r24.s64 = 2 - ctx.r3.s64;
loc_8217B2C0:
	// lhz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lhz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8217B2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b314
	if (ctx.cr6.eq) goto loc_8217B314;
	// add r11,r24,r30
	ctx.r11.u64 = ctx.r24.u64 + ctx.r30.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8217b30c
	if (!ctx.cr0.gt) goto loc_8217B30C;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// subf r11,r4,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r4.s64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x823e0230
	ctx.lr = 0x8217B30C;
	sub_823E0230(ctx, base);
loc_8217B30C:
	// sth r25,0(r26)
	PPC_STORE_U16(ctx.r26.u32 + 0, ctx.r25.u16);
	// b 0x8217b358
	goto loc_8217B358;
loc_8217B314:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,-2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + -2);
	// addi r31,r30,-2
	ctx.r31.s64 = ctx.r30.s64 + -2;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x8217B328;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217b354
	if (ctx.cr6.eq) goto loc_8217B354;
loc_8217B330:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lhzu r4,-2(r31)
	ea = -2 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// bctrl 
	ctx.lr = 0x8217B34C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b330
	if (!ctx.cr6.eq) goto loc_8217B330;
loc_8217B354:
	// sth r25,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r25.u16);
loc_8217B358:
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8217b2c0
	if (!ctx.cr6.eq) goto loc_8217B2C0;
loc_8217B364:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B290) {
	__imp__sub_8217B290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B36C) {
	__imp__sub_8217B36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8217B378;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r5,-2
	ctx.r5.s64 = ctx.r5.s64 + -2;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8217b188
	ctx.lr = 0x8217B3B4;
	sub_8217B188(ctx, base);
	// addi r28,r31,2
	ctx.r28.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8217b400
	if (!ctx.cr6.lt) goto loc_8217B400;
loc_8217B3C0:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r30,r31,-2
	ctx.r30.s64 = ctx.r31.s64 + -2;
	// lhz r3,-2(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8217B3D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b400
	if (!ctx.cr6.eq) goto loc_8217B400;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b400
	if (!ctx.cr6.eq) goto loc_8217B400;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8217b3c0
	if (ctx.cr6.lt) goto loc_8217B3C0;
loc_8217B400:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8217b444
	if (!ctx.cr6.lt) goto loc_8217B444;
loc_8217B408:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b444
	if (!ctx.cr6.eq) goto loc_8217B444;
	// lhz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B430;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b444
	if (!ctx.cr6.eq) goto loc_8217B444;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8217b408
	if (ctx.cr6.lt) goto loc_8217B408;
loc_8217B444:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8217B44C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8217b4b0
	if (!ctx.cr6.lt) goto loc_8217B4B0;
loc_8217B454:
	// lhz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b4a4
	if (!ctx.cr6.eq) goto loc_8217B4A4;
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b4b0
	if (!ctx.cr6.eq) goto loc_8217B4B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8217b4a4
	if (ctx.cr6.eq) goto loc_8217B4A4;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// sth r9,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r9.u16);
loc_8217B4A4:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8217b454
	if (ctx.cr6.lt) goto loc_8217B454;
loc_8217B4B0:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8217b51c
	if (!ctx.cr6.gt) goto loc_8217B51C;
	// addi r30,r27,-2
	ctx.r30.s64 = ctx.r27.s64 + -2;
loc_8217B4BC:
	// lhz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B4CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b508
	if (!ctx.cr6.eq) goto loc_8217B508;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bctrl 
	ctx.lr = 0x8217B4E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217b518
	if (!ctx.cr6.eq) goto loc_8217B518;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8217b508
	if (ctx.cr6.eq) goto loc_8217B508;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r10.u16);
loc_8217B508:
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// addi r30,r30,-2
	ctx.r30.s64 = ctx.r30.s64 + -2;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8217b4bc
	if (ctx.cr6.lt) goto loc_8217B4BC;
loc_8217B518:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8217B51C:
	// bne cr6,0x8217b578
	if (!ctx.cr6.eq) goto loc_8217B578;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8217b5e0
	if (ctx.cr6.eq) goto loc_8217B5E0;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8217b548
	if (ctx.cr6.eq) goto loc_8217B548;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8217b548
	if (ctx.cr6.eq) goto loc_8217B548;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
loc_8217B548:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8217b44c
	if (ctx.cr6.eq) goto loc_8217B44C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// b 0x8217b44c
	goto loc_8217B44C;
loc_8217B578:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-2
	ctx.r27.s64 = ctx.r27.s64 + -2;
	// bne cr6,0x8217b5c0
	if (!ctx.cr6.eq) goto loc_8217B5C0;
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8217b5a0
	if (ctx.cr6.eq) goto loc_8217B5A0;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// sth r11,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r11.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_8217B5A0:
	// addi r28,r28,-2
	ctx.r28.s64 = ctx.r28.s64 + -2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8217b44c
	if (ctx.cr6.eq) goto loc_8217B44C;
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r10.u16);
	// b 0x8217b44c
	goto loc_8217B44C;
loc_8217B5C0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8217b5d8
	if (ctx.cr6.eq) goto loc_8217B5D8;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// sth r10,0(r27)
	PPC_STORE_U16(ctx.r27.u32 + 0, ctx.r10.u16);
loc_8217B5D8:
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// b 0x8217b44c
	goto loc_8217B44C;
loc_8217B5E0:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B370) {
	__imp__sub_8217B370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B5F4) {
	__imp__sub_8217B5F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8217B600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8217b654
	if (!ctx.cr6.gt) goto loc_8217B654;
	// addi r29,r3,-2
	ctx.r29.s64 = ctx.r3.s64 + -2;
loc_8217B620:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// lhzx r6,r29,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r31.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sthx r11,r29,r31
	PPC_STORE_U16(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u16);
	// bl 0x8217b0d0
	ctx.lr = 0x8217B644;
	sub_8217B0D0(ctx, base);
	// addi r31,r31,-2
	ctx.r31.s64 = ctx.r31.s64 + -2;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8217b620
	if (ctx.cr6.gt) goto loc_8217B620;
loc_8217B654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B5F8) {
	__imp__sub_8217B5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B65C) {
	__imp__sub_8217B65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217B668;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8217b718
	if (!ctx.cr6.gt) goto loc_8217B718;
loc_8217B68C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8217b73c
	if (!ctx.cr6.gt) goto loc_8217B73C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217b370
	ctx.lr = 0x8217B6A8;
	sub_8217B370(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r27,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r27.s64;
	// subf r8,r30,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r30.s64;
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x8217b6f8
	if (!ctx.cr6.lt) goto loc_8217B6F8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217b660
	ctx.lr = 0x8217B6F0;
	sub_8217B660(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8217b708
	goto loc_8217B708;
loc_8217B6F8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217b660
	ctx.lr = 0x8217B704;
	sub_8217B660(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8217B708:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8217b68c
	if (ctx.cr6.gt) goto loc_8217B68C;
loc_8217B718:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8217b734
	if (!ctx.cr6.gt) goto loc_8217B734;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217b290
	ctx.lr = 0x8217B734;
	sub_8217B290(ctx, base);
loc_8217B734:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8217B73C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8217b718
	if (!ctx.cr6.gt) goto loc_8217B718;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8217b764
	if (!ctx.cr6.gt) goto loc_8217B764;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217b230
	ctx.lr = 0x8217B764;
	sub_8217B230(ctx, base);
loc_8217B764:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217b5f8
	ctx.lr = 0x8217B774;
	sub_8217B5F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B660) {
	__imp__sub_8217B660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217B77C) {
	__imp__sub_8217B77C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B780) {
	PPC_FUNC_PROLOGUE();
	// li r10,3584
	ctx.r10.s64 = 3584;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r7,r3,r10
	ctx.r7.u32 = ctx.r3.u32 / ctx.r10.u32;
	// lis r9,-32083
	ctx.r9.s64 = -2102591488;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r5,r9,-3456
	ctx.r5.s64 = ctx.r9.s64 + -3456;
	// ori r4,r8,40948
	ctx.r4.u64 = ctx.r8.u64 | 40948;
	// rlwinm r3,r6,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r11,r7,r4
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// addis r10,r5,5
	ctx.r10.s64 = ctx.r5.s64 + 327680;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r10,r10,-8448
	ctx.r10.s64 = ctx.r10.s64 + -8448;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217B780) {
	__imp__sub_8217B780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217B7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x8217B7C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-3312(r1)
	ea = -3312 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// lwz r16,0(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r30,r11,23168
	ctx.r30.s64 = ctx.r11.s64 + 23168;
	// lwz r24,12(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// ori r8,r10,22272
	ctx.r8.u64 = ctx.r10.u64 | 22272;
	// lwz r23,16(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// addi r10,r11,-6400
	ctx.r10.s64 = ctx.r11.s64 + -6400;
	// addi r7,r9,-6400
	ctx.r7.s64 = ctx.r9.s64 + -6400;
	// lwzx r11,r30,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// lis r6,-32232
	ctx.r6.s64 = -2112356352;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r6,-17064
	ctx.r6.s64 = ctx.r6.s64 + -17064;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r9,-6400
	ctx.r3.s64 = ctx.r9.s64 + -6400;
	// subf r5,r7,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r7.s64;
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// bl 0x8217b660
	ctx.lr = 0x8217B824;
	sub_8217B660(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r17,r11,-29568
	ctx.r17.s64 = ctx.r11.s64 + -29568;
	// beq cr6,0x8217b930
	if (ctx.cr6.eq) goto loc_8217B930;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// ori r10,r11,22272
	ctx.r10.u64 = ctx.r11.u64 | 22272;
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217b880
	if (ctx.cr6.eq) goto loc_8217B880;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-6400
	ctx.r11.s64 = ctx.r11.s64 + -6400;
loc_8217B858:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r30,1792
	ctx.r8.s64 = ctx.r30.s64 + 1792;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,8192
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8192, ctx.xer);
	// bge cr6,0x8217b880
	if (!ctx.cr6.lt) goto loc_8217B880;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8217b858
	if (ctx.cr6.lt) goto loc_8217B858;
loc_8217B880:
	// stw r24,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r24.u32);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-6400
	ctx.r11.s64 = ctx.r11.s64 + -6400;
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r9,-6400
	ctx.r10.s64 = ctx.r9.s64 + -6400;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// subf r9,r10,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r10.s64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// addi r6,r8,-17000
	ctx.r6.s64 = ctx.r8.s64 + -17000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
	// bl 0x8217b660
	ctx.lr = 0x8217B8BC;
	sub_8217B660(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// ori r5,r6,22272
	ctx.r5.u64 = ctx.r6.u64 | 22272;
	// lwzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8217b8fc
	if (!ctx.cr6.lt) goto loc_8217B8FC;
loc_8217B8D4:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r9,r30,1792
	ctx.r9.s64 = ctx.r30.s64 + 1792;
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r6,16384
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16384, ctx.xer);
	// bge cr6,0x8217b8fc
	if (!ctx.cr6.lt) goto loc_8217B8FC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8217b8d4
	if (ctx.cr6.lt) goto loc_8217B8D4;
loc_8217B8FC:
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// addi r8,r11,-6400
	ctx.r8.s64 = ctx.r11.s64 + -6400;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-6400
	ctx.r10.s64 = ctx.r10.s64 + -6400;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r6,r11,-17000
	ctx.r6.s64 = ctx.r11.s64 + -17000;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// bl 0x8217b660
	ctx.lr = 0x8217B930;
	sub_8217B660(ctx, base);
loc_8217B930:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r11,22272
	ctx.r8.u64 = ctx.r11.u64 | 22272;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// ori r25,r7,40948
	ctx.r25.u64 = ctx.r7.u64 | 40948;
	// lwzx r6,r30,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r22,3584
	ctx.r22.s64 = 3584;
	// lis r21,8
	ctx.r21.s64 = 524288;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r20,r10,17280
	ctx.r20.s64 = ctx.r10.s64 + 17280;
	// addi r27,r11,-3456
	ctx.r27.s64 = ctx.r11.s64 + -3456;
	// beq cr6,0x8217bae4
	if (ctx.cr6.eq) goto loc_8217BAE4;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// lis r31,32
	ctx.r31.s64 = 2097152;
	// addi r3,r11,-6400
	ctx.r3.s64 = ctx.r11.s64 + -6400;
loc_8217B988:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwzx r11,r10,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r10,r8,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r20.u32);
	// and r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217bad4
	if (!ctx.cr6.eq) goto loc_8217BAD4;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r10,r9,r22
	ctx.r10.u32 = ctx.r9.u32 / ctx.r22.u32;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r11,r10,r25
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r27,5
	ctx.r10.s64 = ctx.r27.s64 + 327680;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r10,r10,-8448
	ctx.r10.s64 = ctx.r10.s64 + -8448;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r30,1792
	ctx.r11.s64 = ctx.r30.s64 + 1792;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bne cr6,0x8217ba20
	if (!ctx.cr6.eq) goto loc_8217BA20;
	// mr r21,r11
	ctx.r21.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// ble cr6,0x8217b9fc
	if (!ctx.cr6.gt) goto loc_8217B9FC;
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
loc_8217B9FC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8217ba20
	if (ctx.cr6.eq) goto loc_8217BA20;
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// bgt cr6,0x8217ba1c
	if (ctx.cr6.gt) goto loc_8217BA1C;
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// ble cr6,0x8217ba20
	if (!ctx.cr6.gt) goto loc_8217BA20;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// b 0x8217ba20
	goto loc_8217BA20;
loc_8217BA1C:
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
loc_8217BA20:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bgt cr6,0x8217bae4
	if (ctx.cr6.gt) goto loc_8217BAE4;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8217ba84
	if (!ctx.cr6.eq) goto loc_8217BA84;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8217ba9c
	if (!ctx.cr6.eq) goto loc_8217BA9C;
	// subf r10,r23,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r23.s64;
	// subf r29,r23,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r23.s64;
	// srawi r15,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r15.s64 = ctx.r10.s32 >> 31;
	// srawi r14,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r14.s64 = ctx.r29.s32 >> 31;
	// xor r10,r10,r15
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r15.u64;
	// xor r29,r29,r14
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r14.u64;
	// subf r10,r15,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r15.s64;
	// subf r29,r14,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r14.s64;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8217ba9c
	if (ctx.cr6.lt) goto loc_8217BA9C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8217bad4
	if (!ctx.cr6.lt) goto loc_8217BAD4;
	// cmplw cr6,r7,r23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x8217bad4
	if (!ctx.cr6.lt) goto loc_8217BAD4;
	// subf r10,r11,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8217ba9c
	if (ctx.cr6.lt) goto loc_8217BA9C;
	// b 0x8217bad4
	goto loc_8217BAD4;
loc_8217BA84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8217ba9c
	if (ctx.cr6.eq) goto loc_8217BA9C;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8217bad4
	if (!ctx.cr6.eq) goto loc_8217BAD4;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8217bad4
	if (!ctx.cr6.gt) goto loc_8217BAD4;
loc_8217BA9C:
	// addic. r10,r9,-3584
	ctx.xer.ca = ctx.r9.u32 > 3583;
	ctx.r10.s64 = ctx.r9.s64 + -3584;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x8217bac0
	if (ctx.cr0.lt) goto loc_8217BAC0;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r10,r10,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r10,r10,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217bad4
	if (ctx.cr6.eq) goto loc_8217BAD4;
loc_8217BAC0:
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8217bae4
	if (!ctx.cr6.eq) goto loc_8217BAE4;
loc_8217BAD4:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8217b988
	if (ctx.cr6.lt) goto loc_8217B988;
loc_8217BAE4:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// ori r10,r11,33540
	ctx.r10.u64 = ctx.r11.u64 | 33540;
	// stwx r26,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r26.u32);
	// beq cr6,0x8217bd28
	if (ctx.cr6.eq) goto loc_8217BD28;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,33548
	ctx.r10.u64 = ctx.r11.u64 | 33548;
	// stwx r18,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r18.u32);
	// lwsync 
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8217bb78
	if (!ctx.cr6.eq) goto loc_8217BB78;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// blt cr6,0x8217bb70
	if (ctx.cr6.lt) goto loc_8217BB70;
	// beq cr6,0x8217bb60
	if (ctx.cr6.eq) goto loc_8217BB60;
	// addi r11,r21,-4096
	ctx.r11.s64 = ctx.r21.s64 + -4096;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x8217bb2c
	if (!ctx.cr6.lt) goto loc_8217BB2C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8217BB2C:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// cmpwi cr6,r21,16384
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 16384, ctx.xer);
	// ori r9,r10,33552
	ctx.r9.u64 = ctx.r10.u64 | 33552;
	// stwx r11,r16,r9
	PPC_STORE_U32(ctx.r16.u32 + ctx.r9.u32, ctx.r11.u32);
	// bgt cr6,0x8217bb50
	if (ctx.cr6.gt) goto loc_8217BB50;
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// ble cr6,0x8217bb78
	if (!ctx.cr6.gt) goto loc_8217BB78;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// b 0x8217bb7c
	goto loc_8217BB7C;
loc_8217BB50:
	// srawi r11,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x8217bb7c
	goto loc_8217BB7C;
loc_8217BB60:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,33552
	ctx.r10.u64 = ctx.r11.u64 | 33552;
	// stwx r18,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r18.u32);
	// b 0x8217bb7c
	goto loc_8217BB7C;
loc_8217BB70:
	// li r21,-1
	ctx.r21.s64 = -1;
	// b 0x8217bb7c
	goto loc_8217BB7C;
loc_8217BB78:
	// li r21,16384
	ctx.r21.s64 = 16384;
loc_8217BB7C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// ori r10,r11,22272
	ctx.r10.u64 = ctx.r11.u64 | 22272;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwzx r28,r30,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8217bcb4
	if (ctx.cr6.eq) goto loc_8217BCB4;
	// addi r10,r1,1104
	ctx.r10.s64 = ctx.r1.s64 + 1104;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r4,r11,-6400
	ctx.r4.s64 = ctx.r11.s64 + -6400;
	// lis r29,40
	ctx.r29.s64 = 2621440;
loc_8217BBB0:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r11,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r8,r10,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r7,r9,r20
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	// and r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217bca4
	if (!ctx.cr6.eq) goto loc_8217BCA4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,1792
	ctx.r9.s64 = ctx.r30.s64 + 1792;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x8217bcb4
	if (ctx.cr6.gt) goto loc_8217BCB4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// divwu r9,r11,r22
	ctx.r9.u32 = ctx.r11.u32 / ctx.r22.u32;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mullw r7,r9,r25
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r9,r27,5
	ctx.r9.s64 = ctx.r27.s64 + 327680;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r9,r9,-8448
	ctx.r9.s64 = ctx.r9.s64 + -8448;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8217bca4
	if (!ctx.cr6.eq) goto loc_8217BCA4;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r19,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r19.s64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8217bca4
	if (!ctx.cr6.lt) goto loc_8217BCA4;
	// addic. r8,r11,-3584
	ctx.xer.ca = ctx.r11.u32 > 3583;
	ctx.r8.s64 = ctx.r11.s64 + -3584;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x8217bc78
	if (ctx.cr0.lt) goto loc_8217BC78;
	// rlwinm r10,r8,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r9,r8,2,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r9,r9,r20
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217bc78
	if (!ctx.cr6.eq) goto loc_8217BC78;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217bca4
	if (ctx.cr6.eq) goto loc_8217BCA4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8217BC58:
	// lhz r24,0(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r24,r8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8217bc78
	if (ctx.cr6.eq) goto loc_8217BC78;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8217bc58
	if (ctx.cr6.lt) goto loc_8217BC58;
	// b 0x8217bca4
	goto loc_8217BCA4;
loc_8217BC78:
	// addis r10,r27,7
	ctx.r10.s64 = ctx.r27.s64 + 458752;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,32512
	ctx.r8.s64 = ctx.r10.s64 + 32512;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sthx r11,r6,r9
	PPC_STORE_U16(ctx.r6.u32 + ctx.r9.u32, ctx.r11.u16);
	// sthx r7,r6,r8
	PPC_STORE_U16(ctx.r6.u32 + ctx.r8.u32, ctx.r7.u16);
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r6,1024
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1024, ctx.xer);
	// bge cr6,0x8217bcb4
	if (!ctx.cr6.lt) goto loc_8217BCB4;
loc_8217BCA4:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8217bbb0
	if (ctx.cr6.lt) goto loc_8217BBB0;
loc_8217BCB4:
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// addis r9,r27,7
	ctx.r9.s64 = ctx.r27.s64 + 458752;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,32512
	ctx.r9.s64 = ctx.r9.s64 + 32512;
	// addis r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 458752;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,32512
	ctx.r10.s64 = ctx.r11.s64 + 32512;
	// addis r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 458752;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// addi r6,r8,-17104
	ctx.r6.s64 = ctx.r8.s64 + -17104;
	// addi r3,r11,32512
	ctx.r3.s64 = ctx.r11.s64 + 32512;
	// bl 0x8217b660
	ctx.lr = 0x8217BCF0;
	sub_8217B660(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217bd1c
	if (ctx.cr6.eq) goto loc_8217BD1C;
	// addis r11,r27,7
	ctx.r11.s64 = ctx.r27.s64 + 458752;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,32510
	ctx.r11.s64 = ctx.r11.s64 + 32510;
loc_8217BD08:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// sthu r7,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8217bd08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217BD08;
loc_8217BD1C:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,33536
	ctx.r10.u64 = ctx.r11.u64 | 33536;
	// stwx r31,r16,r10
	PPC_STORE_U32(ctx.r16.u32 + ctx.r10.u32, ctx.r31.u32);
loc_8217BD28:
	// addi r1,r1,3312
	ctx.r1.s64 = ctx.r1.s64 + 3312;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217B7C0) {
	__imp__sub_8217B7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-29568(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29568);
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// subfc r5,r6,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r6.u32;
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r3,31
	ctx.r3.u64 = ctx.r3.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217BD30) {
	__imp__sub_8217BD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BD58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23168
	ctx.r11.s64 = ctx.r11.s64 + 23168;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1792
	ctx.r8.s64 = ctx.r11.s64 + 1792;
	// addi r7,r11,1792
	ctx.r7.s64 = ctx.r11.s64 + 1792;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r9,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// subf. r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217bd88
	if (ctx.cr0.eq) goto loc_8217BD88;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
loc_8217BD88:
	// subfc r11,r4,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r4.u32;
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r9,31
	ctx.r3.u64 = ctx.r9.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217BD58) {
	__imp__sub_8217BD58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BD98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,3584
	ctx.r8.s64 = 3584;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addi r6,r11,-3456
	ctx.r6.s64 = ctx.r11.s64 + -3456;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r11,r7,40948
	ctx.r11.u64 = ctx.r7.u64 | 40948;
	// divwu r4,r4,r8
	ctx.r4.u32 = ctx.r4.u32 / ctx.r8.u32;
	// divwu r7,r3,r8
	ctx.r7.u32 = ctx.r3.u32 / ctx.r8.u32;
	// add r5,r3,r10
	ctx.r5.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mullw r3,r4,r11
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r7,r11
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addis r10,r6,5
	ctx.r10.s64 = ctx.r6.s64 + 327680;
	// addis r9,r6,5
	ctx.r9.s64 = ctx.r6.s64 + 327680;
	// addi r8,r10,-8448
	ctx.r8.s64 = ctx.r10.s64 + -8448;
	// addi r9,r9,-8448
	ctx.r9.s64 = ctx.r9.s64 + -8448;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r3,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r3.s64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf. r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8217be34
	if (ctx.cr0.eq) goto loc_8217BE34;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,-29564(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29564);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8217be1c
	if (!ctx.cr6.eq) goto loc_8217BE1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8217BE1C:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8217be2c
	if (!ctx.cr6.eq) goto loc_8217BE2C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217BE2C:
	// rlwinm r3,r7,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// blr 
	return;
loc_8217BE34:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217BD98) {
	__imp__sub_8217BD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217BE4C) {
	__imp__sub_8217BE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BE50) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217BE50) {
	__imp__sub_8217BE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BE58) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217BE58) {
	__imp__sub_8217BE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BE60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8217BE68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821741d8
	ctx.lr = 0x8217BE78;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
	// beq cr6,0x8217bf1c
	if (ctx.cr6.eq) goto loc_8217BF1C;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// addis r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 262144;
	// addi r5,r7,17280
	ctx.r5.s64 = ctx.r7.s64 + 17280;
	// rlwinm r4,r3,2,25,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// rlwinm r9,r3,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-11520
	ctx.r10.s64 = ctx.r10.s64 + -11520;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lwzx r4,r4,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// add r31,r3,r8
	ctx.r31.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addis r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 262144;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addis r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 262144;
	// addis r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 262144;
	// lfs f0,6056(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lis r29,-31775
	ctx.r29.s64 = -2082406400;
	// lfs f13,13904(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13904);
	ctx.f13.f64 = double(temp.f32);
	// addis r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 262144;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,5376
	ctx.r7.s64 = ctx.r7.s64 + 5376;
	// addi r8,r8,5380
	ctx.r8.s64 = ctx.r8.s64 + 5380;
	// addi r6,r6,5384
	ctx.r6.s64 = ctx.r6.s64 + 5384;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lfs f12,7324(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 7324);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,-12416
	ctx.r29.s64 = ctx.r29.s64 + -12416;
	// addi r5,r5,-11008
	ctx.r5.s64 = ctx.r5.s64 + -11008;
	// andc r4,r30,r4
	ctx.r4.u64 = ctx.r30.u64 & ~ctx.r4.u64;
	// lfs f11,7652(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 7652);
	ctx.f11.f64 = double(temp.f32);
	// stwx r4,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r4.u32);
	// stfsx f0,r31,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// stfsx f13,r31,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, temp.u32);
	// stfsx f12,r31,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, temp.u32);
	// stfsx f11,r27,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r29.u32, temp.u32);
	// stfsx f0,r27,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r5.u32, temp.u32);
loc_8217BF1C:
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// lbz r31,57(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 57);
	// mulli r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 * 28;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8217bf9c
	if (ctx.cr6.eq) goto loc_8217BF9C;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82171b40
	ctx.lr = 0x8217BF44;
	sub_82171B40(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217bf9c
	if (ctx.cr6.eq) goto loc_8217BF9C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,-2
	ctx.r29.s64 = ctx.r3.s64 + -2;
loc_8217BF5C:
	// lwz r11,68(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lbz r10,7(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 7);
	// cmplwi cr6,r10,11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 11, ctx.xer);
	// beq cr6,0x8217bf80
	if (ctx.cr6.eq) goto loc_8217BF80;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82174268
	ctx.lr = 0x8217BF78;
	sub_82174268(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// sthu r3,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r29.u32 = ea;
loc_8217BF80:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8217bf5c
	if (!ctx.cr0.eq) goto loc_8217BF5C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8217bf9c
	if (ctx.cr6.eq) goto loc_8217BF9C;
	// stw r27,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r27.u32);
	// sth r28,8(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8, ctx.r28.u16);
loc_8217BF9C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217BE60) {
	__imp__sub_8217BE60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217BFA4) {
	__imp__sub_8217BFA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217BFA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217BFB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821741d8
	ctx.lr = 0x8217BFC0;
	sub_821741D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821741d8
	ctx.lr = 0x8217BFCC;
	sub_821741D8(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// bne cr6,0x8217c060
	if (!ctx.cr6.eq) goto loc_8217C060;
	// addi r11,r11,-3456
	ctx.r11.s64 = ctx.r11.s64 + -3456;
	// li r9,7
	ctx.r9.s64 = 7;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// mulli r7,r3,28
	ctx.r7.s64 = ctx.r3.s64 * 28;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,-8192
	ctx.r10.s64 = ctx.r10.s64 + -8192;
	// addi r8,r1,76
	ctx.r8.s64 = ctx.r1.s64 + 76;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
loc_8217BFFC:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8217bffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217BFFC;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r8,-8192
	ctx.r8.s64 = ctx.r8.s64 + -8192;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_8217C028:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x8217c028
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217C028;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217C048:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217c048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217C048;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8217C060:
	// addi r7,r11,-3456
	ctx.r7.s64 = ctx.r11.s64 + -3456;
	// mulli r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 * 28;
	// addis r8,r7,1
	ctx.r8.s64 = ctx.r7.s64 + 65536;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// addi r7,r8,-8192
	ctx.r7.s64 = ctx.r8.s64 + -8192;
	// addi r8,r11,-8192
	ctx.r8.s64 = ctx.r11.s64 + -8192;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8217C094:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217c094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217C094;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217BFA8) {
	__imp__sub_8217BFA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C0AC) {
	__imp__sub_8217C0AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C0B0) {
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
	// bl 0x821741d8
	ctx.lr = 0x8217C0C0;
	sub_821741D8(ctx, base);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r9,r10,-3456
	ctx.r9.s64 = ctx.r10.s64 + -3456;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-8192
	ctx.r9.s64 = ctx.r9.s64 + -8192;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_8217C0E8:
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8217c0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217C0E8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C0B0) {
	__imp__sub_8217C0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C100) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C100) {
	__imp__sub_8217C100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8217C118;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// bl 0x821742a0
	ctx.lr = 0x8217C12C;
	sub_821742A0(ctx, base);
	// lbz r11,225(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 225);
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r30,r10,-3456
	ctx.r30.s64 = ctx.r10.s64 + -3456;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// lfs f31,-23300(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23300);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8217c18c
	if (!ctx.cr6.lt) goto loc_8217C18C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// b 0x8217c194
	goto loc_8217C194;
loc_8217C18C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_8217C194:
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// stfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r24,r23,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5888
	ctx.r11.s64 = ctx.r11.s64 + -5888;
	// stfsx f0,r24,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// lbz r25,6(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r4,4
	ctx.r4.s64 = 4;
	// rotlwi r3,r25,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r25.u32, 2);
	// bl 0x82171b40
	ctx.lr = 0x8217C1BC;
	sub_82171B40(ctx, base);
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8217c20c
	if (ctx.cr6.eq) goto loc_8217C20C;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_8217C1D4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x821741d8
	ctx.lr = 0x8217C1E0;
	sub_821741D8(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// sthx r3,r29,r10
	PPC_STORE_U16(ctx.r29.u32 + ctx.r10.u32, ctx.r3.u16);
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lhzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// sth r6,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r6.u16);
	// bne 0x8217c1d4
	if (!ctx.cr0.eq) goto loc_8217C1D4;
loc_8217C20C:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-16128
	ctx.r6.s64 = ctx.r11.s64 + -16128;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x823def18
	ctx.lr = 0x8217C224;
	sub_823DEF18(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8217c27c
	if (ctx.cr6.eq) goto loc_8217C27C;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8217C23C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8217c270
	if (ctx.cr6.eq) goto loc_8217C270;
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// sthx r4,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
loc_8217C270:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x8217c23c
	if (!ctx.cr0.eq) goto loc_8217C23C;
loc_8217C27C:
	// stw r5,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8217c29c
	if (!ctx.cr6.eq) goto loc_8217C29C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8217C29C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8217c33c
	if (ctx.cr6.eq) goto loc_8217C33C;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addis r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 196608;
	// rlwinm r11,r23,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r9,17280
	ctx.r7.s64 = ctx.r9.s64 + 17280;
	// addi r10,r10,-6144
	ctx.r10.s64 = ctx.r10.s64 + -6144;
	// rlwinm r6,r23,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0x7C;
	// addis r8,r30,5
	ctx.r8.s64 = ctx.r30.s64 + 327680;
	// addis r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 327680;
	// addi r8,r8,-10752
	ctx.r8.s64 = ctx.r8.s64 + -10752;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,-10496
	ctx.r9.s64 = ctx.r9.s64 + -10496;
	// lwzx r4,r6,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addis r7,r30,5
	ctx.r7.s64 = ctx.r30.s64 + 327680;
	// lis r3,-31775
	ctx.r3.s64 = -2082406400;
	// or r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 | ctx.r5.u64;
	// not r5,r4
	ctx.r5.u64 = ~ctx.r4.u64;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r10,r7,-11008
	ctx.r10.s64 = ctx.r7.s64 + -11008;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// and r7,r4,r5
	ctx.r7.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// addis r7,r30,3
	ctx.r7.s64 = ctx.r30.s64 + 196608;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// addis r8,r30,3
	ctx.r8.s64 = ctx.r30.s64 + 196608;
	// addis r9,r30,3
	ctx.r9.s64 = ctx.r30.s64 + 196608;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r4,r7,22784
	ctx.r4.s64 = ctx.r7.s64 + 22784;
	// and r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	// addi r8,r8,28928
	ctx.r8.s64 = ctx.r8.s64 + 28928;
	// stwx r6,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// addi r7,r3,-18560
	ctx.r7.s64 = ctx.r3.s64 + -18560;
	// stfsx f31,r24,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r4.u32, temp.u32);
	// addi r5,r9,256
	ctx.r5.s64 = ctx.r9.s64 + 256;
	// stfsx f31,r24,r8
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r8.u32, temp.u32);
	// stfsx f31,r24,r7
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r7.u32, temp.u32);
	// stfsx f31,r24,r5
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r5.u32, temp.u32);
loc_8217C33C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217C110) {
	__imp__sub_8217C110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C348) {
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
	// bl 0x821742a0
	ctx.lr = 0x8217C358;
	sub_821742A0(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r10,r11,-3456
	ctx.r10.s64 = ctx.r11.s64 + -3456;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// addis r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 196608;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-6144
	ctx.r11.s64 = ctx.r11.s64 + -6144;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C348) {
	__imp__sub_8217C348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8217C3A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821742a0
	ctx.lr = 0x8217C3B0;
	sub_821742A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821742a0
	ctx.lr = 0x8217C3BC;
	sub_821742A0(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x8217c460
	if (!ctx.cr6.eq) goto loc_8217C460;
	// lis r10,-32083
	ctx.r10.s64 = -2102591488;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r10,-3456
	ctx.r7.s64 = ctx.r10.s64 + -3456;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addis r10,r7,3
	ctx.r10.s64 = ctx.r7.s64 + 196608;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-24576
	ctx.r10.s64 = ctx.r10.s64 + -24576;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 196608;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-24576
	ctx.r11.s64 = ctx.r11.s64 + -24576;
	// addis r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 196608;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addis r5,r7,3
	ctx.r5.s64 = ctx.r7.s64 + 196608;
	// addi r6,r8,-5888
	ctx.r6.s64 = ctx.r8.s64 + -5888;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r5,-5888
	ctx.r8.s64 = ctx.r5.s64 + -5888;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r7,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8217C460:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,-3456
	ctx.r5.s64 = ctx.r11.s64 + -3456;
	// lis r4,-32191
	ctx.r4.s64 = -2109669376;
	// addis r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 196608;
	// rlwinm r8,r3,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r31,r9
	ctx.r7.u64 = ctx.r31.u64 + ctx.r9.u64;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-6144
	ctx.r10.s64 = ctx.r10.s64 + -6144;
	// rlwinm r30,r3,2,25,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r4,r4,17280
	ctx.r4.s64 = ctx.r4.s64 + 17280;
	// add r29,r3,r8
	ctx.r29.u64 = ctx.r3.u64 + ctx.r8.u64;
	// addis r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 196608;
	// addis r8,r5,3
	ctx.r8.s64 = ctx.r5.s64 + 196608;
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r6,r9,-24576
	ctx.r6.s64 = ctx.r9.s64 + -24576;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r30,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// addi r8,r8,-24576
	ctx.r8.s64 = ctx.r8.s64 + -24576;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 | ctx.r28.u64;
	// add r30,r7,r6
	ctx.r30.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// addis r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 196608;
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addis r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 + 196608;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r6,r9,-5888
	ctx.r6.s64 = ctx.r9.s64 + -5888;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-5888
	ctx.r11.s64 = ctx.r11.s64 + -5888;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r5.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r4,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r11.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217C398) {
	__imp__sub_8217C398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C504) {
	__imp__sub_8217C504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C508) {
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
	// bl 0x821742a0
	ctx.lr = 0x8217C524;
	sub_821742A0(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// addi r30,r11,-3456
	ctx.r30.s64 = ctx.r11.s64 + -3456;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r11,r11,-6144
	ctx.r11.s64 = ctx.r11.s64 + -6144;
	// addi r8,r9,17280
	ctx.r8.s64 = ctx.r9.s64 + 17280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r5,r7,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// andc r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// bl 0x821742a0
	ctx.lr = 0x8217C55C;
	sub_821742A0(ctx, base);
	// rlwinm r9,r3,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 196608;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// addi r10,r11,-24576
	ctx.r10.s64 = ctx.r11.s64 + -24576;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_8217C508) {
	__imp__sub_8217C508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C598) {
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
	// bl 0x821742a0
	ctx.lr = 0x8217C5A8;
	sub_821742A0(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// addi r8,r11,-3456
	ctx.r8.s64 = ctx.r11.s64 + -3456;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addis r10,r8,5
	ctx.r10.s64 = ctx.r8.s64 + 327680;
	// addi r6,r7,17280
	ctx.r6.s64 = ctx.r7.s64 + 17280;
	// rlwinm r5,r3,2,25,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// addis r9,r8,5
	ctx.r9.s64 = ctx.r8.s64 + 327680;
	// addis r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 196608;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwzx r6,r5,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// addi r9,r9,-10752
	ctx.r9.s64 = ctx.r9.s64 + -10752;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r8,22784
	ctx.r3.s64 = ctx.r8.s64 + 22784;
	// or r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// or r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stwx r6,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r6.u32);
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C598) {
	__imp__sub_8217C598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C614) {
	__imp__sub_8217C614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C618) {
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
	// bl 0x821742a0
	ctx.lr = 0x8217C628;
	sub_821742A0(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addi r9,r11,-3456
	ctx.r9.s64 = ctx.r11.s64 + -3456;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addis r11,r9,5
	ctx.r11.s64 = ctx.r9.s64 + 327680;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// addi r11,r11,-10752
	ctx.r11.s64 = ctx.r11.s64 + -10752;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addis r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 196608;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,22784
	ctx.r9.s64 = ctx.r9.s64 + 22784;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// or r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 | ctx.r4.u64;
	// lfs f0,15040(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 15040);
	ctx.f0.f64 = double(temp.f32);
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lfsx f13,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f11,r8,r9
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C618) {
	__imp__sub_8217C618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C68C) {
	__imp__sub_8217C68C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C690) {
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
	// bl 0x821741d8
	ctx.lr = 0x8217C6A0;
	sub_821741D8(ctx, base);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addi r9,r11,-3456
	ctx.r9.s64 = ctx.r11.s64 + -3456;
	// rlwinm r6,r3,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addis r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 262144;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r11,r11,-11520
	ctx.r11.s64 = ctx.r11.s64 + -11520;
	// lis r5,-31775
	ctx.r5.s64 = -2082406400;
	// addis r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 262144;
	// lwzx r7,r6,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r6,r5,-12416
	ctx.r6.s64 = ctx.r5.s64 + -12416;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r9,-11008
	ctx.r5.s64 = ctx.r9.s64 + -11008;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// stfsx f0,r3,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// stfsx f0,r3,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C690) {
	__imp__sub_8217C690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C704) {
	__imp__sub_8217C704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C708) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,30208
	ctx.r10.s64 = ctx.r10.s64 + 30208;
loc_8217C714:
	// lbzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217c754
	if (!ctx.cr6.eq) goto loc_8217C754;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8217c714
	if (ctx.cr6.lt) goto loc_8217C714;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8217C730:
	// addi r9,r10,80
	ctx.r9.s64 = ctx.r10.s64 + 80;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217c754
	if (!ctx.cr6.eq) goto loc_8217C754;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8217c730
	if (ctx.cr6.lt) goto loc_8217C730;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8217C754:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217C708) {
	__imp__sub_8217C708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217C75C) {
	__imp__sub_8217C75C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217C768;
	__savegprlr_26(ctx, base);
	// li r9,448
	ctx.r9.s64 = 448;
	// stw r3,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r3.u32);
	// addi r8,r1,-96
	ctx.r8.s64 = ctx.r1.s64 + -96;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r10,r5,80
	ctx.r10.s64 = ctx.r5.s64 + 80;
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// addi r9,r9,-29424
	ctx.r9.s64 = ctx.r9.s64 + -29424;
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r8,r8,-29456
	ctx.r8.s64 = ctx.r8.s64 + -29456;
	// lvx128 v53,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r28,-32075
	ctx.r28.s64 = -2102067200;
	// vcsxwfp128 v63,v61,14
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lis r7,-32075
	ctx.r7.s64 = -2102067200;
	// lis r5,-32075
	ctx.r5.s64 = -2102067200;
	// lis r4,-32075
	ctx.r4.s64 = -2102067200;
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// lvx128 v54,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32075
	ctx.r27.s64 = -2102067200;
	// lis r26,-31852
	ctx.r26.s64 = -2087452672;
	// addi r9,r28,-29440
	ctx.r9.s64 = ctx.r28.s64 + -29440;
	// addi r7,r7,-29520
	ctx.r7.s64 = ctx.r7.s64 + -29520;
	// addi r5,r5,-29472
	ctx.r5.s64 = ctx.r5.s64 + -29472;
	// addi r4,r4,-29488
	ctx.r4.s64 = ctx.r4.s64 + -29488;
	// addi r29,r29,-29536
	ctx.r29.s64 = ctx.r29.s64 + -29536;
	// addi r8,r27,-29504
	ctx.r8.s64 = ctx.r27.s64 + -29504;
	// lvx128 v59,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r26,-30848
	ctx.r28.s64 = ctx.r26.s64 + -30848;
	// lvx128 v55,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v57,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v58,r0,r29
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,-16
	ctx.r4.s64 = -16;
	// lvx128 v60,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r5,-32
	ctx.r5.s64 = -32;
	// lvx128 v61,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,-48
	ctx.r7.s64 = -48;
	// li r8,-64
	ctx.r8.s64 = -64;
	// li r9,-80
	ctx.r9.s64 = -80;
	// li r28,-96
	ctx.r28.s64 = -96;
	// li r29,32
	ctx.r29.s64 = 32;
loc_8217C824:
	// lvx128 v52,r11,r28
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v51,v52,14
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v52.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvx128 v50,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v49,v50,14
	simde_mm_store_ps(ctx.v49.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvx128 v48,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v47,v48,14
	simde_mm_store_ps(ctx.v47.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v48.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvx128 v46,r10,r9
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v43,v45,14
	simde_mm_store_ps(ctx.v43.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v45.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// vcmpgtfp128 v44,v63,v46
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v46.f32)));
	// lvx128 v41,r11,r5
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r10,r8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcsxwfp128 v38,v41,14
	simde_mm_store_ps(ctx.v38.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v41.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvrx128 v39,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vcmpgtfp128 v40,v63,v42
	simde_mm_store_ps(ctx.v40.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v42.f32)));
	// lvlx128 v37,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lvx128 v34,r11,r4
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vcsxwfp128 v32,v34,14
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v34.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvx128 v36,r10,r7
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v33,v63,v36
	simde_mm_store_ps(ctx.v33.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vcsxwfp128 v36,v50,14
	simde_mm_store_ps(ctx.v36.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v50.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lvx128 v52,r10,r5
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v46,v63,v51
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v51.f32)));
	// vandc128 v45,v61,v35
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vcmpgtfp128 v42,v63,v49
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v49.f32)));
	// lvx128 v35,r0,r10
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v39,v63,v47
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v47.f32)));
	// lvx128 v41,r10,r4
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v34,v63,v43
	simde_mm_store_ps(ctx.v34.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v43.f32)));
	// lvx128 v37,r11,r30
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v43,v63,v35
	simde_mm_store_ps(ctx.v43.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v35.f32)));
	// lvx128 v47,r10,r29
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v48,v63,v52
	simde_mm_store_ps(ctx.v48.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// vspltw128 v52,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// vcmpgtfp128 v49,v63,v38
	simde_mm_store_ps(ctx.v49.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v50,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v51,v63,v41
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v41.f32)));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// vcsxwfp128 v45,v37,14
	simde_mm_store_ps(ctx.v45.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v37.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// vcmpgtfp128 v38,v63,v32
	simde_mm_store_ps(ctx.v38.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v32.f32)));
	// vcmpgtfp128 v37,v63,v47
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v47.f32)));
	// vcmpgtfp128 v41,v63,v50
	simde_mm_store_ps(ctx.v41.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v50.f32)));
	// vandc128 v35,v44,v46
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vcmpgtfp128 v47,v63,v36
	simde_mm_store_ps(ctx.v47.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v36.f32)));
	// vandc128 v32,v40,v42
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vandc128 v50,v33,v39
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v46,v35,v60
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v44,v32,v59
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vandc128 v42,v48,v34
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v40,v50,v58
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v36,v46,v52
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vcmpgtfp128 v39,v63,v45
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vand128 v35,v44,v52
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vandc128 v34,v51,v49
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// vand128 v33,v42,v57
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v32,v62,v36
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// vand128 v62,v40,v52
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vandc128 v51,v43,v38
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v50,v34,v56
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vor128 v49,v32,v35
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vand128 v48,v33,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vandc128 v47,v41,v47
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vand128 v46,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v45,v49,v62
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vand128 v44,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vandc128 v43,v37,v39
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vand128 v42,v47,v54
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vor128 v41,v45,v48
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v40,v46,v52
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vand128 v39,v43,v53
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vand128 v38,v42,v52
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v37,v41,v44
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vand128 v36,v39,v52
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// vor128 v35,v37,v40
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vor128 v34,v35,v38
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// vor128 v62,v34,v36
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// bdnz 0x8217c824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217C824;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r9,-80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r8,-68(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// lwz r7,-72(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217C760) {
	__imp__sub_8217C760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217C998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8217C9A0;
	__savegprlr_27(ctx, base);
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// stw r3,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, ctx.r3.u32);
	// li r8,448
	ctx.r8.s64 = 448;
	// vspltisw128 v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r11,r4,96
	ctx.r11.s64 = ctx.r4.s64 + 96;
	// lis r30,-32075
	ctx.r30.s64 = -2102067200;
	// lis r6,-32075
	ctx.r6.s64 = -2102067200;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r7,-32075
	ctx.r7.s64 = -2102067200;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// addi r7,r7,-29456
	ctx.r7.s64 = ctx.r7.s64 + -29456;
	// vspltw128 v61,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r8,r8,-29424
	ctx.r8.s64 = ctx.r8.s64 + -29424;
	// lvx128 v54,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r4,-32075
	ctx.r4.s64 = -2102067200;
	// vcsxwfp128 v63,v61,14
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v61.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38800000)))));
	// lis r3,-32075
	ctx.r3.s64 = -2102067200;
	// lis r29,-32075
	ctx.r29.s64 = -2102067200;
	// lis r31,-32075
	ctx.r31.s64 = -2102067200;
	// lis r28,-31852
	ctx.r28.s64 = -2087452672;
	// lvx128 v53,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r30,-29440
	ctx.r8.s64 = ctx.r30.s64 + -29440;
	// addi r6,r6,-29520
	ctx.r6.s64 = ctx.r6.s64 + -29520;
	// addi r4,r4,-29472
	ctx.r4.s64 = ctx.r4.s64 + -29472;
	// addi r3,r3,-29488
	ctx.r3.s64 = ctx.r3.s64 + -29488;
	// addi r7,r29,-29504
	ctx.r7.s64 = ctx.r29.s64 + -29504;
	// addi r27,r31,-29536
	ctx.r27.s64 = ctx.r31.s64 + -29536;
	// lvx128 v59,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r28,-30848
	ctx.r30.s64 = ctx.r28.s64 + -30848;
	// lvx128 v55,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v57,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v60,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,-96
	ctx.r31.s64 = -96;
	// lvx128 v58,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,-80
	ctx.r3.s64 = -80;
	// lvx128 v61,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r4,-64
	ctx.r4.s64 = -64;
	// li r6,-48
	ctx.r6.s64 = -48;
	// li r7,-32
	ctx.r7.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_8217CA50:
	// lvx128 v52,r11,r31
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v51,v63,v52
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v51.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v52.f32)));
	// lvrx128 v50,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v49,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lvx128 v48,r11,r3
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v47,v49,v50
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vcmpgtfp128 v46,v63,v48
	simde_mm_store_ps(ctx.v46.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v48.f32)));
	// lvx128 v45,r11,r4
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v44,v63,v45
	simde_mm_store_ps(ctx.v44.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
	// lvx128 v43,r11,r6
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v42,v63,v43
	simde_mm_store_ps(ctx.v42.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v43.f32)));
	// lvx128 v41,r11,r7
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v40,v61,v47
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vcmpgtfp128 v39,v63,v41
	simde_mm_store_ps(ctx.v39.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v41.f32)));
	// lvx128 v38,r11,r8
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v37,v63,v38
	simde_mm_store_ps(ctx.v37.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v38.f32)));
	// lvx128 v34,r11,r9
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r0,r11
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vcmpgtfp128 v32,v63,v34
	simde_mm_store_ps(ctx.v32.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v34.f32)));
	// vspltw128 v33,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vcmpgtfp128 v35,v63,v36
	simde_mm_store_ps(ctx.v35.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v36.f32)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// vand128 v52,v51,v60
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v51,v46,v59
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vand128 v50,v52,v33
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v49,v44,v58
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v48,v42,v57
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vand128 v47,v51,v33
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v46,v62,v50
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vand128 v45,v49,v33
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v44,v39,v56
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vand128 v43,v48,v33
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v42,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// vand128 v41,v37,v55
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vand128 v40,v44,v33
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v36,v32,v53
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v38,v42,v45
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vand128 v37,v41,v33
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v39,v35,v54
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vor128 v34,v38,v43
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vand128 v35,v39,v33
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vand128 v33,v36,v33
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v32,v34,v40
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// vor128 v62,v32,v37
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8)));
	// vor128 v52,v62,v35
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// vor128 v62,v52,v33
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// bdnz 0x8217ca50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CA50;
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// stvx128 v62,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,-60(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -60);
	// lwz r9,-64(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// lwz r8,-52(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -52);
	// lwz r7,-56(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// addic r3,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r3.s64 = ctx.r4.s64 + -1;
	// subfe r3,r3,r4
	temp.u8 = (~ctx.r3.u32 + ctx.r4.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217C998) {
	__imp__sub_8217C998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217CB48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821742a0
	ctx.lr = 0x8217CB5C;
	sub_821742A0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r11,17280
	ctx.r9.s64 = ctx.r11.s64 + 17280;
	// rlwinm r8,r3,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r4,r10,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r5,r3
	ctx.r11.u64 = ctx.r5.u64 | ctx.r3.u64;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// or r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 | ctx.r3.u64;
	// stfsx f0,r6,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// stwx r9,r10,r29
	PPC_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217CB40) {
	__imp__sub_8217CB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,448
	ctx.r8.s64 = 448;
	// addi r7,r11,3096
	ctx.r7.s64 = ctx.r11.s64 + 3096;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r10,-32
	ctx.r10.s64 = -32;
	// li r9,-16
	ctx.r9.s64 = -16;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx128 v63,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,32
	ctx.r7.s64 = 32;
	// vspltw128 v63,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r4,48
	ctx.r4.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
loc_8217CBD8:
	// stvx128 v63,r11,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r9
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r8
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r7
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r11,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8217cbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217CBD8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217CBA0) {
	__imp__sub_8217CBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217CC04) {
	__imp__sub_8217CC04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CC08) {
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
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r31,r11,-3456
	ctx.r31.s64 = ctx.r11.s64 + -3456;
	// ori r9,r10,33552
	ctx.r9.u64 = ctx.r10.u64 | 33552;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8217cc64
	if (ctx.cr6.lt) goto loc_8217CC64;
	// lis r10,-31779
	ctx.r10.s64 = -2082668544;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r10,23168
	ctx.r6.s64 = ctx.r10.s64 + 23168;
	// addi r4,r6,1792
	ctx.r4.s64 = ctx.r6.s64 + 1792;
	// bl 0x8217c760
	ctx.lr = 0x8217CC4C;
	sub_8217C760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217cc64
	if (ctx.cr6.eq) goto loc_8217CC64;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,33548
	ctx.r9.u64 = ctx.r11.u64 | 33548;
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8217CC64:
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

PPC_WEAK_FUNC(sub_8217CC08) {
	__imp__sub_8217CC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CC78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8217CC80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32152
	ctx.r11.s64 = -2107113472;
	// lwz r11,-16468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16468);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8217cd28
	if (ctx.cr6.eq) goto loc_8217CD28;
	// bl 0x82393cc8
	ctx.lr = 0x8217CC98;
	sub_82393CC8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x8217CC9C;
	sub_82310110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8217CCB0;
	sub_82280900(ctx, base);
	// lis r29,-32083
	ctx.r29.s64 = -2102591488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-7692(r29)
	PPC_STORE_U32(ctx.r29.u32 + -7692, ctx.r10.u32);
	// bl 0x82144c50
	ctx.lr = 0x8217CCC0;
	sub_82144C50(ctx, base);
	// lwz r9,-7692(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7692);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8217cd0c
	if (!ctx.cr6.eq) goto loc_8217CD0C;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,-31779
	ctx.r10.s64 = -2082668544;
	// addi r31,r11,-3456
	ctx.r31.s64 = ctx.r11.s64 + -3456;
	// addi r30,r10,23168
	ctx.r30.s64 = ctx.r10.s64 + 23168;
loc_8217CCDC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x8217c998
	ctx.lr = 0x8217CCEC;
	sub_8217C998(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217cd0c
	if (ctx.cr6.eq) goto loc_8217CD0C;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x8228b0d8
	ctx.lr = 0x8217CCFC;
	sub_8228B0D8(ctx, base);
	// bl 0x82144c50
	ctx.lr = 0x8217CD00;
	sub_82144C50(ctx, base);
	// lwz r11,-7692(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -7692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8217ccdc
	if (ctx.cr6.eq) goto loc_8217CCDC;
loc_8217CD0C:
	// bl 0x82310110
	ctx.lr = 0x8217CD10;
	sub_82310110(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// subf r5,r28,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r28.s64;
	// addi r4,r11,15044
	ctx.r4.s64 = ctx.r11.s64 + 15044;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x8217CD24;
	sub_82280900(ctx, base);
	// bl 0x82393d48
	ctx.lr = 0x8217CD28;
	sub_82393D48(ctx, base);
loc_8217CD28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217CC78) {
	__imp__sub_8217CC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217CD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8217CD38;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de020
	ctx.lr = 0x8217CD40;
	__savefpr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16848(r1)
	ea = -16848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// addi r9,r11,-3456
	ctx.r9.s64 = ctx.r11.s64 + -3456;
	// ori r8,r10,33556
	ctx.r8.u64 = ctx.r10.u64 | 33556;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217cd84
	if (!ctx.cr6.eq) goto loc_8217CD84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// b 0x8217cd8c
	goto loc_8217CD8C;
loc_8217CD84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
loc_8217CD8C:
	// addi r11,r1,8512
	ctx.r11.s64 = ctx.r1.s64 + 8512;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f1,f1
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stfs f1,180(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stfs f11,184(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stfs f13,172(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f12,176(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x823b8590
	ctx.lr = 0x8217CDC8;
	sub_823B8590(ctx, base);
	// lis r27,-31799
	ctx.r27.s64 = -2083979264;
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f10,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f31,f10,f31
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// lwz r11,13412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13412);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,31
	ctx.r9.s64 = ctx.r10.s64 + 31;
	// rlwinm r8,r9,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r26,88(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r24,8(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r25,12(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r23,16(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r21,20(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8217ce28
	if (ctx.cr6.eq) goto loc_8217CE28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8217CE28:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,20476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20476);
	ctx.f30.f64 = double(temp.f32);
loc_8217CE30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e4c8
	ctx.lr = 0x8217CE38;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217cec4
	if (ctx.cr6.eq) goto loc_8217CEC4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbzx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r25.u32);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217ce30
	if (!ctx.cr6.eq) goto loc_8217CE30;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f28,f12,f11
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f27,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f26,f10,f9
	ctx.f26.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// bl 0x821742a0
	ctx.lr = 0x8217CE88;
	sub_821742A0(ctx, base);
	// fmuls f8,f28,f28
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f28.f64));
	// fres f7,f27
	ctx.f7.f64 = float(1.0 / ctx.f27.f64);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r11,r24
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f26,f26,f8
	ctx.f4.f64 = double(float(ctx.f26.f64 * ctx.f26.f64 + ctx.f8.f64));
	// fmadds f3,f29,f29,f4
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmsubs f1,f2,f7,f6
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 - ctx.f6.f64));
	// fadds f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fsubs f12,f13,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsel f11,f12,f5,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f5.f64 : ctx.f13.f64;
	// stfsx f11,r11,r29
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// b 0x8217ce30
	goto loc_8217CE30;
loc_8217CEC4:
	// lwz r11,13412(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 13412);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,15092(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15092);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,72(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r8,r10,31
	ctx.r8.s64 = ctx.r10.s64 + 31;
	// lwz r26,84(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r25,92(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// rlwinm r30,r8,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823de090
	ctx.lr = 0x8217CEFC;
	sub_823DE090(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// beq cr6,0x8217cf20
	if (ctx.cr6.eq) goto loc_8217CF20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8217CF20:
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
loc_8217CF28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e4c8
	ctx.lr = 0x8217CF30;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// beq cr6,0x8217cf70
	if (ctx.cr6.eq) goto loc_8217CF70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r8,r9,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x7C;
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// lbzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r23.u32);
	// lwzx r7,r8,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 & ctx.r7.u64;
	// or r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 | ctx.r5.u64;
	// stwx r3,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x8217cf28
	goto loc_8217CF28;
loc_8217CF70:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// beq cr6,0x8217cf90
	if (ctx.cr6.eq) goto loc_8217CF90;
	// lwz r11,320(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8217CF90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8217e4c8
	ctx.lr = 0x8217CF98;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217d174
	if (ctx.cr6.eq) goto loc_8217D174;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// ldx r10,r11,r25
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r25.u32);
	// lhz r7,24(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 24);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// rldicl r5,r10,34,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f6,144(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fsubs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// clrlwi r11,r5,20
	ctx.r11.u64 = ctx.r5.u32 & 0xFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r21
	ctx.r30.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lhzx r3,r11,r21
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r21.u32);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fcfid f0,f6
	ctx.f0.f64 = double(ctx.f6.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fadds f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// fmuls f0,f11,f31
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// blt cr6,0x8217d11c
	if (ctx.cr6.lt) goto loc_8217D11C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// addi r11,r9,25
	ctx.r11.s64 = ctx.r9.s64 + 25;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8217D050:
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r4,1(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lhz r29,2(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f13,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// rotlwi r7,r29,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// lhz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r24,6(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r6,r27,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r27.u32, 2);
	// lhzu r4,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r5,r24,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r24.u32, 2);
	// lfsx f5,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// rotlwi r4,r4,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsel f11,f1,f5,f4
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f5.f64 : ctx.f4.f64;
	// stfsx f11,r7,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lfsx f10,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fsel f6,f8,f10,f13
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// stfsx f6,r6,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// lfsx f5,r5,r31
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsel f2,f4,f5,f12
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// stfsx f2,r5,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// lfsx f1,r4,r31
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsel f11,f12,f1,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// stfsx f11,r4,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D050;
loc_8217D11C:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8217cf90
	if (!ctx.cr6.lt) goto loc_8217CF90;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,26
	ctx.r9.s64 = ctx.r9.s64 + 26;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8217D138:
	// lbzx r6,r9,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f10,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsel f7,f8,f10,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D138;
	// b 0x8217cf90
	goto loc_8217CF90;
loc_8217D174:
	// addi r1,r1,16848
	ctx.r1.s64 = ctx.r1.s64 + 16848;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de06c
	ctx.lr = 0x8217D180;
	__restfpr_26(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217CD30) {
	__imp__sub_8217CD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217D184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217D184) {
	__imp__sub_8217D184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217D188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x8217D190;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823ddff0
	ctx.lr = 0x8217D198;
	__savefpr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217d1c4
	if (!ctx.cr6.eq) goto loc_8217D1C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8217cba0
	ctx.lr = 0x8217D1C4;
	sub_8217CBA0(ctx, base);
loc_8217D1C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// ori r7,r9,39168
	ctx.r7.u64 = ctx.r9.u64 | 39168;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r30,r11,-3456
	ctx.r30.s64 = ctx.r11.s64 + -3456;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// li r8,128
	ctx.r8.s64 = 128;
	// addi r7,r10,-26368
	ctx.r7.s64 = ctx.r10.s64 + -26368;
	// lfs f13,15120(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 15120);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r3,r5,13536
	ctx.r3.s64 = ctx.r5.s64 + 13536;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmuls f21,f12,f13
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,15116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15116);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,15112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 15112);
	ctx.f29.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,936(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f30,15108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15108);
	ctx.f30.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f16,15104(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15104);
	ctx.f16.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmuls f28,f0,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f22,7324(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7324);
	ctx.f22.f64 = double(temp.f32);
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// lfs f17,15100(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15100);
	ctx.f17.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f23,13904(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 13904);
	ctx.f23.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f14,f12,f13
	ctx.f14.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f18,5880(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5880);
	ctx.f18.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f25,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f25.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f15,7652(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7652);
	ctx.f15.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f26,2416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r22,-32768
	ctx.r22.s64 = -2147483648;
	// lfs f19,15096(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 15096);
	ctx.f19.f64 = double(temp.f32);
	// lfs f20,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f20.f64 = double(temp.f32);
	// lfs f24,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f24.f64 = double(temp.f32);
	// lfs f27,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
loc_8217D2B4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217e4c8
	ctx.lr = 0x8217D2BC;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217db98
	if (ctx.cr6.eq) goto loc_8217DB98;
	// lwz r29,96(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// rlwinm r27,r29,29,3,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,-28416
	ctx.r9.s64 = ctx.r9.s64 + -28416;
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// lwzx r8,r27,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// clrlwi r7,r29,27
	ctx.r7.u64 = ctx.r29.u32 & 0x1F;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srw r26,r22,r7
	ctx.r26.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r22.u32 >> (ctx.r7.u8 & 0x3F));
	// and r6,r8,r26
	ctx.r6.u64 = ctx.r8.u64 & ctx.r26.u64;
	// lwz r25,20(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8217d4c8
	if (!ctx.cr6.eq) goto loc_8217D4C8;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,10(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 10);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r27,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lhz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// add r5,r29,r10
	ctx.r5.u64 = ctx.r29.u64 + ctx.r10.u64;
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// lfsx f0,r11,r23
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fsel f0,f0,f0,f27
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f0.f64 : ctx.f27.f64;
	// addi r10,r10,5376
	ctx.r10.s64 = ctx.r10.s64 + 5376;
	// and r4,r7,r26
	ctx.r4.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r5,r8,r25
	ctx.r5.u64 = ctx.r8.u64 + ctx.r25.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfsx f13,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f14
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f14.f64));
	// fadds f11,f0,f24
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f9,f10,f12,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fsubs f8,f20,f9
	ctx.f8.f64 = double(float(ctx.f20.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f20
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f20.f64;
	// stfsx f7,r9,r10
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f7,r11,r23
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// beq cr6,0x8217d3f0
	if (ctx.cr6.eq) goto loc_8217D3F0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8217d3c0
	if (ctx.cr6.lt) goto loc_8217D3C0;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D38C:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r4,r10,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r3,r8,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r8,r7,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// rotlwi r7,r10,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stfsx f19,r4,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, temp.u32);
	// stfsx f19,r3,r31
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// stfsx f19,r8,r31
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// stfsx f19,r7,r31
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d38c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D38C;
loc_8217D3C0:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8217d4c8
	if (!ctx.cr6.lt) goto loc_8217D4C8;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D3DC:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stfsx f19,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d3dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D3DC;
	// b 0x8217d4c8
	goto loc_8217D4C8;
loc_8217D3F0:
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x8217d484
	if (ctx.cr6.lt) goto loc_8217D484;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fsel f13,f13,f27,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f27.f64 : ctx.f12.f64;
loc_8217D420:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhzu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f12,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfsx f10,r10,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lfsx f9,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f13
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stfsx f7,r9,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f6,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fsel f4,f5,f6,f13
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f13.f64;
	// stfsx f4,r8,r31
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f3,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsel f1,f2,f3,f13
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f13.f64;
	// stfsx f1,r7,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D420;
loc_8217D484:
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8217d4c8
	if (!ctx.cr6.lt) goto loc_8217D4C8;
	// fsubs f13,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f12,f0,f26
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// subf r9,r4,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r4.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fsel f13,f13,f27,f12
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f27.f64 : ctx.f12.f64;
loc_8217D4AC:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f12,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f13
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d4ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D4AC;
loc_8217D4C8:
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-27904
	ctx.r10.s64 = ctx.r10.s64 + -27904;
	// lfsx f13,r11,r21
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// stfsx f15,r11,r21
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r21.u32, temp.u32);
	// fsel f12,f13,f13,f27
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f27.f64;
	// and r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 & ctx.r26.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8217d744
	if (!ctx.cr6.eq) goto loc_8217D744;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f13,f12,f18
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f18.f64));
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 12);
	// addi r11,r10,5380
	ctx.r11.s64 = ctx.r10.s64 + 5380;
	// lwzx r7,r27,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,2(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r6,r7,r26
	ctx.r6.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r3,r9,r25
	ctx.r3.u64 = ctx.r9.u64 + ctx.r25.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f8,f10,f21
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f21.f64));
	// fsel f7,f9,f13,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsel f0,f6,f11,f7
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fadds f5,f0,f24
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsel f3,f4,f8,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fsubs f2,f23,f3
	ctx.f2.f64 = double(float(ctx.f23.f64 - ctx.f3.f64));
	// fsel f1,f2,f3,f23
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f23.f64;
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8217d5f8
	if (ctx.cr6.eq) goto loc_8217D5F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8217d5c4
	if (ctx.cr6.lt) goto loc_8217D5C4;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D580:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r9,3584
	ctx.r4.s64 = ctx.r9.s64 + 3584;
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r8,3584
	ctx.r9.s64 = ctx.r8.s64 + 3584;
	// addi r8,r7,3584
	ctx.r8.s64 = ctx.r7.s64 + 3584;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,3584
	ctx.r4.s64 = ctx.r10.s64 + 3584;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f17,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfsx f17,r10,r31
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f17,r9,r31
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// stfsx f17,r8,r31
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D580;
loc_8217D5C4:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8217d744
	if (!ctx.cr6.lt) goto loc_8217D744;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D5E0:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,3584
	ctx.r10.s64 = ctx.r10.s64 + 3584;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f17,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D5E0;
	// b 0x8217d744
	goto loc_8217D744;
loc_8217D5F8:
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// fmuls f13,f11,f26
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// blt cr6,0x8217d6f4
	if (ctx.cr6.lt) goto loc_8217D6F4;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D628:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addis r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 262144;
	// addi r6,r10,-25856
	ctx.r6.s64 = ctx.r10.s64 + -25856;
	// lhz r20,6(r11)
	ctx.r20.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r19,r9,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,3584
	ctx.r9.s64 = ctx.r9.s64 + 3584;
	// addi r18,r8,-25856
	ctx.r18.s64 = ctx.r8.s64 + -25856;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r17,r7,2
	ctx.r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f11,r19,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addis r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 262144;
	// addi r8,r8,3584
	ctx.r8.s64 = ctx.r8.s64 + 3584;
	// lfsx f8,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r19,r7,-25856
	ctx.r19.s64 = ctx.r7.s64 + -25856;
	// lfsx f9,r17,r18
	temp.u32 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r18.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// rotlwi r18,r20,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r20.u32, 2);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// addis r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 262144;
	// addi r7,r7,3584
	ctx.r7.s64 = ctx.r7.s64 + 3584;
	// rotlwi r20,r10,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f5,r18,r19
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// addi r6,r6,-25856
	ctx.r6.s64 = ctx.r6.s64 + -25856;
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// addi r10,r10,3584
	ctx.r10.s64 = ctx.r10.s64 + 3584;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r20,r6
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsel f1,f6,f8,f10
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// stfsx f1,r9,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f11,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f7
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// stfsx f9,r8,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f8,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f4
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// stfsx f6,r7,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lfsx f5,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f2
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f2.f64;
	// stfsx f3,r10,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D628;
loc_8217D6F4:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8217d744
	if (!ctx.cr6.lt) goto loc_8217D744;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217D710:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,-25856
	ctx.r7.s64 = ctx.r9.s64 + -25856;
	// addi r11,r11,3584
	ctx.r11.s64 = ctx.r11.s64 + 3584;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f9,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d710
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D710;
loc_8217D744:
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r11,r11,-27392
	ctx.r11.s64 = ctx.r11.s64 + -27392;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// and r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 & ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217d9ac
	if (!ctx.cr6.eq) goto loc_8217D9AC;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f13,f12,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lhz r8,14(r28)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r28.u32 + 14);
	// addi r11,r10,5384
	ctx.r11.s64 = ctx.r10.s64 + 5384;
	// lwzx r7,r27,r24
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r24.u32);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// rotlwi r9,r8,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// and r6,r7,r26
	ctx.r6.u64 = ctx.r7.u64 & ctx.r26.u64;
	// add r3,r9,r25
	ctx.r3.u64 = ctx.r9.u64 + ctx.r25.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfsx f10,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fadds f8,f10,f21
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f21.f64));
	// fsel f7,f9,f13,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f13.f64 : ctx.f10.f64;
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fsel f0,f6,f11,f7
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// fadds f5,f0,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// fsel f3,f4,f8,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fsubs f2,f22,f3
	ctx.f2.f64 = double(float(ctx.f22.f64 - ctx.f3.f64));
	// fsel f1,f2,f3,f22
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f22.f64;
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// beq cr6,0x8217d864
	if (ctx.cr6.eq) goto loc_8217D864;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8217d830
	if (ctx.cr6.lt) goto loc_8217D830;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D7EC:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r9,7168
	ctx.r4.s64 = ctx.r9.s64 + 7168;
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r8,7168
	ctx.r9.s64 = ctx.r8.s64 + 7168;
	// addi r8,r7,7168
	ctx.r8.s64 = ctx.r7.s64 + 7168;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,7168
	ctx.r4.s64 = ctx.r10.s64 + 7168;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f16,r7,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// stfsx f16,r10,r31
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// stfsx f16,r9,r31
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// stfsx f16,r8,r31
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d7ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D7EC;
loc_8217D830:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8217d9ac
	if (!ctx.cr6.lt) goto loc_8217D9AC;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D84C:
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,7168
	ctx.r10.s64 = ctx.r10.s64 + 7168;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f16,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d84c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D84C;
	// b 0x8217d9ac
	goto loc_8217D9AC;
loc_8217D864:
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8217d95c
	if (ctx.cr6.lt) goto loc_8217D95C;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217D890:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addis r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 262144;
	// addi r6,r10,-25856
	ctx.r6.s64 = ctx.r10.s64 + -25856;
	// lhz r29,6(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rotlwi r20,r9,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,7168
	ctx.r9.s64 = ctx.r9.s64 + 7168;
	// addi r19,r8,-25856
	ctx.r19.s64 = ctx.r8.s64 + -25856;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r18,r7,2
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f11,r20,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addis r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 262144;
	// addi r8,r8,7168
	ctx.r8.s64 = ctx.r8.s64 + 7168;
	// lfsx f8,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r20,r7,-25856
	ctx.r20.s64 = ctx.r7.s64 + -25856;
	// lfsx f9,r18,r19
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r19.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// rotlwi r19,r29,2
	ctx.r19.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addis r6,r30,4
	ctx.r6.s64 = ctx.r30.s64 + 262144;
	// addi r7,r7,7168
	ctx.r7.s64 = ctx.r7.s64 + 7168;
	// rotlwi r29,r10,2
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lfsx f5,r19,r20
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r20.u32);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// addi r6,r6,-25856
	ctx.r6.s64 = ctx.r6.s64 + -25856;
	// fmuls f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// addi r10,r10,7168
	ctx.r10.s64 = ctx.r10.s64 + 7168;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fsel f1,f6,f8,f10
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// stfsx f1,r9,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f11,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f7,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsel f9,f10,f11,f7
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f7.f64;
	// stfsx f9,r8,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f8,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f4
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// stfsx f6,r7,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lfsx f5,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f5.f64));
	// fsel f3,f4,f5,f2
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f2.f64;
	// stfsx f3,r10,r31
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D890;
loc_8217D95C:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8217d9ac
	if (!ctx.cr6.lt) goto loc_8217D9AC;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217D978:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,-25856
	ctx.r7.s64 = ctx.r9.s64 + -25856;
	// addi r11,r11,7168
	ctx.r11.s64 = ctx.r11.s64 + 7168;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f9,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f10
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f10.f64;
	// stfsx f7,r11,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217d978
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217D978;
loc_8217D9AC:
	// addis r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 262144;
	// addi r11,r11,-26880
	ctx.r11.s64 = ctx.r11.s64 + -26880;
	// lwzx r10,r27,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// and r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 & ctx.r26.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8217d2b4
	if (!ctx.cr6.eq) goto loc_8217D2B4;
	// fadds f0,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lhz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// lhz r5,6(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lfs f13,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f10,f11,f0,f12
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fmuls f0,f10,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// blt cr6,0x8217db30
	if (ctx.cr6.lt) goto loc_8217DB30;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217DA0C:
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addis r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 262144;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// rotlwi r27,r7,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lhz r28,6(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r29,r10,-25856
	ctx.r29.s64 = ctx.r10.s64 + -25856;
	// lhzu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addis r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 262144;
	// addi r26,r9,-25856
	ctx.r26.s64 = ctx.r9.s64 + -25856;
	// rotlwi r25,r6,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r8,r8,-25856
	ctx.r8.s64 = ctx.r8.s64 + -25856;
	// lfsx f13,r27,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r20,r28,2
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r28.u32, 2);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addis r7,r30,4
	ctx.r7.s64 = ctx.r30.s64 + 262144;
	// lfsx f11,r25,r26
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r26.u32);
	ctx.f11.f64 = double(temp.f32);
	// rotlwi r27,r10,2
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r29,r7,-25856
	ctx.r29.s64 = ctx.r7.s64 + -25856;
	// lfsx f9,r20,r8
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,10752
	ctx.r9.s64 = ctx.r9.s64 + 10752;
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,10752
	ctx.r8.s64 = ctx.r8.s64 + 10752;
	// lfsx f7,r27,r29
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	ctx.f7.f64 = double(temp.f32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f6,f31,f12
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// addi r10,r28,10752
	ctx.r10.s64 = ctx.r28.s64 + 10752;
	// fmuls f4,f12,f30
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfsx f5,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f3,f12,f29
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f2,f31,f10
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmuls f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// addi r7,r6,10752
	ctx.r7.s64 = ctx.r6.s64 + 10752;
	// fsubs f13,f10,f29
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fsubs f12,f31,f8
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f11,f8,f30
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fsubs f10,f8,f29
	ctx.f10.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// fsel f8,f6,f4,f3
	ctx.f8.f64 = ctx.f6.f64 >= 0.0 ? ctx.f4.f64 : ctx.f3.f64;
	// fsubs f4,f31,f9
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fsel f7,f2,f1,f13
	ctx.f7.f64 = ctx.f2.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// fsubs f2,f9,f29
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsel f6,f12,f11,f10
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fadds f1,f8,f28
	ctx.f1.f64 = double(float(ctx.f8.f64 + ctx.f28.f64));
	// fadds f13,f7,f28
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// fsel f11,f4,f3,f2
	ctx.f11.f64 = ctx.f4.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// fadds f12,f6,f28
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// fsubs f10,f1,f5
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fadds f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// fsel f8,f10,f5,f1
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f5.f64 : ctx.f1.f64;
	// stfsx f8,r9,r31
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f7,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fsel f5,f6,f7,f13
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// stfsx f5,r8,r31
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f4,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fsel f2,f3,f4,f12
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f12.f64;
	// stfsx f2,r10,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lfsx f1,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f9,f1
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsel f12,f13,f1,f9
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f9.f64;
	// stfsx f12,r7,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217da0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217DA0C;
loc_8217DB30:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8217d2b4
	if (!ctx.cr6.lt) goto loc_8217D2B4;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r4,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217DB4C:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addis r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 262144;
	// rotlwi r8,r11,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r7,r9,-25856
	ctx.r7.s64 = ctx.r9.s64 + -25856;
	// addi r11,r11,10752
	ctx.r11.s64 = ctx.r11.s64 + 10752;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fsubs f8,f12,f29
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fsel f7,f10,f9,f8
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// fadds f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fsel f4,f5,f11,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f11.f64 : ctx.f6.f64;
	// stfsx f4,r11,r31
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217db4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217DB4C;
	// b 0x8217d2b4
	goto loc_8217D2B4;
loc_8217DB98:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823de090
	ctx.lr = 0x8217DBA8;
	sub_823DE090(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de03c
	ctx.lr = 0x8217DBB4;
	__restfpr_14(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217D188) {
	__imp__sub_8217D188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217DBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x8217DBC0;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de028
	ctx.lr = 0x8217DBC8;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r11,4608
	ctx.r8.s64 = ctx.r11.s64 + 4608;
	// addi r7,r9,13536
	ctx.r7.s64 = ctx.r9.s64 + 13536;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r21,8456(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lfs f0,936(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x8217dc08
	if (ctx.cr6.eq) goto loc_8217DC08;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f30,15128(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15128);
	ctx.f30.f64 = double(temp.f32);
	// b 0x8217dc0c
	goto loc_8217DC0C;
loc_8217DC08:
	// fmr f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f28.f64;
loc_8217DC0C:
	// lis r11,-32083
	ctx.r11.s64 = -2102591488;
	// lis r10,-32076
	ctx.r10.s64 = -2102132736;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lis r22,-31799
	ctx.r22.s64 = -2083979264;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r29,r11,-3456
	ctx.r29.s64 = ctx.r11.s64 + -3456;
	// addi r25,r10,30208
	ctx.r25.s64 = ctx.r10.s64 + 30208;
	// addi r31,r9,-12416
	ctx.r31.s64 = ctx.r9.s64 + -12416;
	// addi r23,r8,-18560
	ctx.r23.s64 = ctx.r8.s64 + -18560;
	// beq cr6,0x8217dd20
	if (ctx.cr6.eq) goto loc_8217DD20;
	// lwz r11,13412(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13412);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// stfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r8,r31,16384
	ctx.r8.s64 = ctx.r31.s64 + 16384;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// addi r7,r10,-5888
	ctx.r7.s64 = ctx.r10.s64 + -5888;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f0,-19192(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// fadds f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// addi r11,r25,8
	ctx.r11.s64 = ctx.r25.s64 + 8;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
loc_8217DC88:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8217DC90:
	// lbzx r11,r28,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217dcbc
	if (ctx.cr6.eq) goto loc_8217DCBC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8217dca8
	if (ctx.cr6.eq) goto loc_8217DCA8;
	// stbx r20,r28,r30
	PPC_STORE_U8(ctx.r28.u32 + ctx.r30.u32, ctx.r20.u8);
loc_8217DCA8:
	// lwsync 
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8217cd30
	ctx.lr = 0x8217DCBC;
	sub_8217CD30(ctx, base);
loc_8217DCBC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x8217dc90
	if (ctx.cr6.lt) goto loc_8217DC90;
	// addi r26,r26,24
	ctx.r26.s64 = ctx.r26.s64 + 24;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplwi cr6,r26,72
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 72, ctx.xer);
	// blt cr6,0x8217dc88
	if (ctx.cr6.lt) goto loc_8217DC88;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// addi r27,r25,84
	ctx.r27.s64 = ctx.r25.s64 + 84;
loc_8217DCEC:
	// addi r11,r25,80
	ctx.r11.s64 = ctx.r25.s64 + 80;
	// lbzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217dd10
	if (ctx.cr6.eq) goto loc_8217DD10;
	// lwsync 
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8217cd30
	ctx.lr = 0x8217DD10;
	sub_8217CD30(ctx, base);
loc_8217DD10:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne 0x8217dcec
	if (!ctx.cr0.eq) goto loc_8217DCEC;
loc_8217DD20:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// addis r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 196608;
	// ori r9,r10,59392
	ctx.r9.u64 = ctx.r10.u64 | 59392;
	// addi r8,r11,-6144
	ctx.r8.s64 = ctx.r11.s64 + -6144;
	// li r7,48
	ctx.r7.s64 = 48;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// addi r26,r25,112
	ctx.r26.s64 = ctx.r25.s64 + 112;
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r27,r25,108
	ctx.r27.s64 = ctx.r25.s64 + 108;
	// li r30,2
	ctx.r30.s64 = 2;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r24,r11,17280
	ctx.r24.s64 = ctx.r11.s64 + 17280;
loc_8217DD60:
	// addi r11,r25,80
	ctx.r11.s64 = ctx.r25.s64 + 80;
	// lbzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217de2c
	if (ctx.cr6.eq) goto loc_8217DE2C;
	// lhz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ddd8
	if (ctx.cr6.eq) goto loc_8217DDD8;
	// bl 0x82332af8
	ctx.lr = 0x8217DD80;
	sub_82332AF8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ddd8
	if (ctx.cr6.eq) goto loc_8217DDD8;
	// bl 0x821742a0
	ctx.lr = 0x8217DD94;
	sub_821742A0(ctx, base);
	// addis r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 327680;
	// addis r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 327680;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// addi r9,r9,-10752
	ctx.r9.s64 = ctx.r9.s64 + -10752;
	// addis r8,r29,3
	ctx.r8.s64 = ctx.r29.s64 + 196608;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,22784
	ctx.r4.s64 = ctx.r8.s64 + 22784;
	// lwzx r8,r7,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// or r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 | ctx.r8.u64;
	// or r5,r3,r8
	ctx.r5.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stfsx f28,r6,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_8217DDD8:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217de2c
	if (ctx.cr6.eq) goto loc_8217DE2C;
	// bl 0x821742a0
	ctx.lr = 0x8217DDE8;
	sub_821742A0(ctx, base);
	// addis r10,r29,5
	ctx.r10.s64 = ctx.r29.s64 + 327680;
	// addis r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 327680;
	// rlwinm r11,r3,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r7,r3,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x7C;
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// addi r9,r9,-10752
	ctx.r9.s64 = ctx.r9.s64 + -10752;
	// addis r8,r29,3
	ctx.r8.s64 = ctx.r29.s64 + 196608;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r8,22784
	ctx.r4.s64 = ctx.r8.s64 + 22784;
	// lwzx r8,r7,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r24.u32);
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// or r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 | ctx.r5.u64;
	// or r5,r8,r3
	ctx.r5.u64 = ctx.r8.u64 | ctx.r3.u64;
	// stfsx f28,r6,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, temp.u32);
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
loc_8217DE2C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x8217dd60
	if (!ctx.cr0.eq) goto loc_8217DD60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f31,15124(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15124);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,-23300(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23300);
	ctx.f29.f64 = double(temp.f32);
loc_8217DE50:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8217e4c8
	ctx.lr = 0x8217DE58;
	sub_8217E4C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217e1a0
	if (ctx.cr6.eq) goto loc_8217E1A0;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addis r9,r29,3
	ctx.r9.s64 = ctx.r29.s64 + 196608;
	// addis r7,r29,3
	ctx.r7.s64 = ctx.r29.s64 + 196608;
	// addi r8,r9,256
	ctx.r8.s64 = ctx.r9.s64 + 256;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,22784
	ctx.r7.s64 = ctx.r7.s64 + 22784;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// addis r9,r29,3
	ctx.r9.s64 = ctx.r29.s64 + 196608;
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfsx f11,r11,r23
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r9,-24576
	ctx.r9.s64 = ctx.r9.s64 + -24576;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r27,0(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fsel f10,f12,f13,f0
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsel f13,f9,f10,f11
	ctx.f13.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fcmpu cr6,f13,f29
	ctx.cr6.compare(ctx.f13.f64, ctx.f29.f64);
	// beq cr6,0x8217de50
	if (ctx.cr6.eq) goto loc_8217DE50;
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfsx f29,r11,r7
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// stfsx f29,r11,r8
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// stfsx f29,r11,r23
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8217e060
	if (ctx.cr6.eq) goto loc_8217E060;
	// addis r8,r29,5
	ctx.r8.s64 = ctx.r29.s64 + 327680;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r8,-10752
	ctx.r8.s64 = ctx.r8.s64 + -10752;
	// rlwinm r10,r10,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r10,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// and r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8217df6c
	if (ctx.cr6.eq) goto loc_8217DF6C;
	// addis r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 327680;
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// rotlwi r6,r7,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r9,r9,-11008
	ctx.r9.s64 = ctx.r9.s64 + -11008;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// and r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 & ctx.r6.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r5,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r5.u32);
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217df78
	if (ctx.cr6.eq) goto loc_8217DF78;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// and r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 & ctx.r10.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x8217df78
	if (ctx.cr6.eq) goto loc_8217DF78;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8217DF40:
	// lhzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,-11520
	ctx.r10.s64 = ctx.r10.s64 + -11520;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r6,r11,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r5.u32);
	// bdnz 0x8217df40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217DF40;
	// b 0x8217df78
	goto loc_8217DF78;
loc_8217DF6C:
	// fsubs f0,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
loc_8217DF78:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x8217e020
	if (ctx.cr6.lt) goto loc_8217E020;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217DF9C:
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// lhz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// addis r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 262144;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// addi r10,r10,-11008
	ctx.r10.s64 = ctx.r10.s64 + -11008;
	// lhzu r4,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// addi r8,r8,-11008
	ctx.r8.s64 = ctx.r8.s64 + -11008;
	// addis r6,r29,4
	ctx.r6.s64 = ctx.r29.s64 + 262144;
	// rotlwi r5,r5,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lfsx f12,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r6,-11008
	ctx.r6.s64 = ctx.r6.s64 + -11008;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addis r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 262144;
	// rotlwi r3,r4,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// addi r4,r30,-11008
	ctx.r4.s64 = ctx.r30.s64 + -11008;
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfsx f10,r9,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lfsx f9,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsel f7,f8,f9,f0
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfsx f7,r7,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lfsx f6,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fsel f4,f5,f6,f0
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// stfsx f4,r5,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lfsx f3,r3,r4
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsel f1,f2,f3,f0
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f3.f64 : ctx.f0.f64;
	// stfsx f1,r3,r4
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r4.u32, temp.u32);
	// bdnz 0x8217df9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217DF9C;
loc_8217E020:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8217e060
	if (!ctx.cr6.lt) goto loc_8217E060;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217E03C:
	// lhzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addis r8,r29,4
	ctx.r8.s64 = ctx.r29.s64 + 262144;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r8,-11008
	ctx.r11.s64 = ctx.r8.s64 + -11008;
	// lfsx f12,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfsx f10,r10,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// bdnz 0x8217e03c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E03C;
loc_8217E060:
	// fmuls f0,f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x8217e14c
	if (ctx.cr6.lt) goto loc_8217E14C;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217E088:
	// lhz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lhz r5,10(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r10,r4,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// lhz r3,14(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhzu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rotlwi r7,r3,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfsx f5,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fcfid f7,f13
	ctx.f7.f64 = double(ctx.f13.s64);
	// rotlwi r8,r5,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// fcfid f6,f12
	ctx.f6.f64 = double(ctx.f12.s64);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fsubs f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsel f11,f1,f5,f4
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f5.f64 : ctx.f4.f64;
	// stfsx f11,r10,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// lfsx f10,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fsel f6,f8,f10,f13
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f13.f64;
	// stfsx f6,r9,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f5,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// fsel f2,f4,f5,f12
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// stfsx f2,r8,r31
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f1,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// fsel f11,f12,f1,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f1.f64 : ctx.f13.f64;
	// stfsx f11,r7,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217e088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E088;
loc_8217E14C:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8217de50
	if (!ctx.cr6.lt) goto loc_8217DE50;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r6,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r6.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8217E168:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f11,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsel f7,f8,f11,f9
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f9.f64;
	// stfsx f7,r10,r31
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217e168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E168;
	// b 0x8217de50
	goto loc_8217DE50;
loc_8217E1A0:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8217e3a0
	if (ctx.cr6.eq) goto loc_8217E3A0;
	// lwz r10,13412(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 13412);
	// lwz r11,296(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 296);
	// lwz r9,300(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r24,84(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r23,92(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// beq cr6,0x8217e3a0
	if (ctx.cr6.eq) goto loc_8217E3A0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addis r10,r29,3
	ctx.r10.s64 = ctx.r29.s64 + 196608;
	// addi r26,r9,54
	ctx.r26.s64 = ctx.r9.s64 + 54;
	// addi r25,r10,6400
	ctx.r25.s64 = ctx.r10.s64 + 6400;
	// lfs f13,15092(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 15092);
	ctx.f13.f64 = double(temp.f32);
loc_8217E1DC:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x8217e390
	if (ctx.cr6.eq) goto loc_8217E390;
	// lhz r9,-2(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + -2);
	// stfs f29,0(r25)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217e390
	if (ctx.cr6.eq) goto loc_8217E390;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r28,r10,r23
	ctx.r28.u64 = ctx.r10.u64 + ctx.r23.u64;
	// add r30,r11,r24
	ctx.r30.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
loc_8217E214:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r9,r31,16384
	ctx.r9.s64 = ctx.r31.s64 + 16384;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rldicl r10,r11,34,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u64, 34) & 0x3FFFFFFFF;
	// clrlwi r11,r10,20
	ctx.r11.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// blt cr6,0x8217e32c
	if (ctx.cr6.lt) goto loc_8217E32C;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// addi r11,r30,25
	ctx.r11.s64 = ctx.r30.s64 + 25;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8217E260:
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lhz r21,2(r10)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lhz r18,4(r10)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f1,88(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// rotlwi r9,r21,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r21.u32, 2);
	// rotlwi r8,r18,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r18.u32, 2);
	// lhz r17,6(r10)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhzu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r7,r17,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r17.u32, 2);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lfsx f6,r9,r31
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fsubs f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsel f11,f3,f6,f5
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// stfsx f11,r9,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// lfsx f10,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f2,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// fsel f5,f8,f10,f2
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f2.f64;
	// stfsx f5,r8,r31
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// lfsx f4,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f4.f64 = double(temp.f32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f1,f3,f4
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fsel f11,f1,f4,f3
	ctx.f11.f64 = ctx.f1.f64 >= 0.0 ? ctx.f4.f64 : ctx.f3.f64;
	// stfsx f11,r7,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, temp.u32);
	// lfsx f10,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f12
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f12.f64;
	// stfsx f8,r6,r31
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217e260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E260;
loc_8217E32C:
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8217e380
	if (!ctx.cr6.lt) goto loc_8217E380;
	// subf r8,r5,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r5.s64;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,26
	ctx.r9.s64 = ctx.r30.s64 + 26;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8217E348:
	// lbzx r7,r5,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsel f6,f7,f12,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
	// stfsx f6,r11,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x8217e348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217E348;
loc_8217E380:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// bne 0x8217e214
	if (!ctx.cr0.eq) goto loc_8217E214;
loc_8217E390:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r26,r26,56
	ctx.r26.s64 = ctx.r26.s64 + 56;
	// bne 0x8217e1dc
	if (!ctx.cr0.eq) goto loc_8217E1DC;
loc_8217E3A0:
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// lbz r10,105(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 105);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217e444
	if (ctx.cr6.eq) goto loc_8217E444;
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,14900(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14900);
	// lfs f30,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x8217e444
	if (ctx.cr6.eq) goto loc_8217E444;
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// addi r30,r10,24
	ctx.r30.s64 = ctx.r10.s64 + 24;
	// addi r27,r11,-29440
	ctx.r27.s64 = ctx.r11.s64 + -29440;
loc_8217E3DC:
	// lfs f31,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// beq cr6,0x8217e434
	if (ctx.cr6.eq) goto loc_8217E434;
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x821741d8
	ctx.lr = 0x8217E3F8;
	sub_821741D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f30.f64));
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfsx f11,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f28,f11
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fsel f9,f10,f11,f28
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f28.f64;
	// stfsx f9,r11,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// bl 0x821741d8
	ctx.lr = 0x8217E420;
	sub_821741D8(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// fsel f6,f7,f8,f31
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f31.f64;
	// stfsx f6,r11,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_8217E434:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// bne 0x8217e3dc
	if (!ctx.cr0.eq) goto loc_8217E3DC;
loc_8217E444:
	// addis r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 262144;
	// addis r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 262144;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r11,-11520
	ctx.r6.s64 = ctx.r11.s64 + -11520;
	// addi r5,r10,-11008
	ctx.r5.s64 = ctx.r10.s64 + -11008;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x8217d188
	ctx.lr = 0x8217E464;
	sub_8217D188(ctx, base);
	// lis r11,7
	ctx.r11.s64 = 458752;
	// ori r10,r11,33552
	ctx.r10.u64 = ctx.r11.u64 | 33552;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8217e4a4
	if (ctx.cr6.lt) goto loc_8217E4A4;
	// lis r11,-31779
	ctx.r11.s64 = -2082668544;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r6,r11,23168
	ctx.r6.s64 = ctx.r11.s64 + 23168;
	// addi r4,r6,1792
	ctx.r4.s64 = ctx.r6.s64 + 1792;
	// bl 0x8217c760
	ctx.lr = 0x8217E48C;
	sub_8217C760(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217e4a4
	if (ctx.cr6.eq) goto loc_8217E4A4;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,33548
	ctx.r9.u64 = ctx.r11.u64 | 33548;
	// stwx r10,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r10.u32);
loc_8217E4A4:
	// lwz r11,4(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217e4b8
	if (ctx.cr6.eq) goto loc_8217E4B8;
	// lwsync 
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_8217E4B8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de074
	ctx.lr = 0x8217E4C4;
	__restfpr_28(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217DBB8) {
	__imp__sub_8217DBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8217e50c
	if (!ctx.cr6.eq) goto loc_8217E50C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_8217E4E0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8217e544
	if (!ctx.cr6.lt) goto loc_8217E544;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// beq cr6,0x8217e4e0
	if (ctx.cr6.eq) goto loc_8217E4E0;
loc_8217E50C:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r6,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r7,17280
	ctx.r5.s64 = ctx.r7.s64 + 17280;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzx r9,r4,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// blr 
	return;
loc_8217E544:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217E4C8) {
	__imp__sub_8217E4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217E54C) {
	__imp__sub_8217E54C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E550) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32142
	ctx.r11.s64 = -2106458112;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// rotlwi r9,r10,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// lwz r11,26460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 26460);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// sth r7,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217E550) {
	__imp__sub_8217E550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E570) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x822a1928
	sub_822A1928(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217E570) {
	__imp__sub_8217E570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E584) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217E584) {
	__imp__sub_8217E584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E588) {
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
	ctx.lr = 0x8217E5A0;
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
	// addi r3,r7,16164
	ctx.r3.s64 = ctx.r7.s64 + 16164;
	// lfs f30,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,16132
	ctx.r8.s64 = ctx.r8.s64 + 16132;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1660
	ctx.lr = 0x8217E5DC;
	sub_822E1660(ctx, base);
	// lis r31,-32075
	ctx.r31.s64 = -2102067200;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r30,r31,-29404
	ctx.r30.s64 = ctx.r31.s64 + -29404;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,16092
	ctx.r8.s64 = ctx.r5.s64 + 16092;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,16128(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16128);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// addi r3,r4,16072
	ctx.r3.s64 = ctx.r4.s64 + 16072;
	// bl 0x822e1660
	ctx.lr = 0x8217E610;
	sub_822E1660(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r3,r7,16048
	ctx.r3.s64 = ctx.r7.s64 + 16048;
	// lfs f29,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,15988
	ctx.r8.s64 = ctx.r9.s64 + 15988;
	// lfs f28,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8217E648;
	sub_822E1660(ctx, base);
	// stw r3,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r3.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r8,r4,15912
	ctx.r8.s64 = ctx.r4.s64 + 15912;
	// lfs f27,-14540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14540);
	ctx.f27.f64 = double(temp.f32);
	// addi r3,r3,15884
	ctx.r3.s64 = ctx.r3.s64 + 15884;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,7544(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7544);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x8217E67C;
	sub_822E1660(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,15828
	ctx.r8.s64 = ctx.r10.s64 + 15828;
	// addi r3,r9,15804
	ctx.r3.s64 = ctx.r9.s64 + 15804;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,3844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8217E6A8;
	sub_822E1660(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,15780
	ctx.r3.s64 = ctx.r7.s64 + 15780;
	// addi r8,r8,15712
	ctx.r8.s64 = ctx.r8.s64 + 15712;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x822e1618
	ctx.lr = 0x8217E6D0;
	sub_822E1618(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,15672
	ctx.r8.s64 = ctx.r5.s64 + 15672;
	// lfs f1,12132(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12132);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r4,15644
	ctx.r3.s64 = ctx.r4.s64 + 15644;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8217E6FC;
	sub_822E1660(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r8,r11,15576
	ctx.r8.s64 = ctx.r11.s64 + 15576;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r10,15544
	ctx.r3.s64 = ctx.r10.s64 + 15544;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8217E724;
	sub_822E1660(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r3,r7,15512
	ctx.r3.s64 = ctx.r7.s64 + 15512;
	// addi r8,r8,15432
	ctx.r8.s64 = ctx.r8.s64 + 15432;
	// lfs f29,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8217E754;
	sub_822E1660(ctx, base);
	// stw r3,-29404(r31)
	PPC_STORE_U32(ctx.r31.u32 + -29404, ctx.r3.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r8,r5,15344
	ctx.r8.s64 = ctx.r5.s64 + 15344;
	// addi r3,r4,15308
	ctx.r3.s64 = ctx.r4.s64 + 15308;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,7324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8217E780;
	sub_822E1660(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,15232
	ctx.r8.s64 = ctx.r11.s64 + 15232;
	// addi r3,r10,15200
	ctx.r3.s64 = ctx.r10.s64 + 15200;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x822e1618
	ctx.lr = 0x8217E7A8;
	sub_822E1618(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r7,15180
	ctx.r3.s64 = ctx.r7.s64 + 15180;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r9,15132
	ctx.r8.s64 = ctx.r9.s64 + 15132;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8217E7D0;
	sub_822E1660(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x8217E7E0;
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

PPC_WEAK_FUNC(sub_8217E588) {
	__imp__sub_8217E588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217E7F4) {
	__imp__sub_8217E7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8217E800;
	__savegprlr_28(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823862b0
	ctx.lr = 0x8217E820;
	sub_823862B0(ctx, base);
	// addi r31,r3,24
	ctx.r31.s64 = ctx.r3.s64 + 24;
	// li r29,16
	ctx.r29.s64 = 16;
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvlx128 v62,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lvrx128 v63,r29,r31
	temp.u32 = ctx.r29.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v61,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v127,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v60,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v126,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// bl 0x822d6b00
	ctx.lr = 0x8217E854;
	sub_822D6B00(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vspltw128 v7,v127,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x55));
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
	// vspltw128 v58,v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xFF));
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// vspltw128 v6,v127,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xAA));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// vslw128 v57,v59,v59
	ctx.v57.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lis r4,-31852
	ctx.r4.s64 = -2087452672;
	// lvrx128 v54,r29,r8
	temp.u32 = ctx.r29.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v53,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r4,r4,-30336
	ctx.r4.s64 = ctx.r4.s64 + -30336;
	// lvrx128 v52,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v50,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// lvrx128 v49,r29,r6
	temp.u32 = ctx.r29.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v48,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// lvlx128 v47,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r31,r1,108
	ctx.r31.s64 = ctx.r1.s64 + 108;
	// vor128 v46,v47,v49
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvrx128 v45,r29,r3
	temp.u32 = ctx.r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vand128 v12,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vspltw128 v11,v126,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xAA));
	// vand128 v9,v48,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vspltw128 v5,v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xFF));
	// vand128 v0,v46,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v44,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v43,v44,v45
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8)));
	// vspltw128 v10,v126,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x55));
	// vandc128 v42,v12,v57
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// li r9,4
	ctx.r9.s64 = 4;
	// vslw128 v55,v59,v59
	ctx.v55.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// li r10,8
	ctx.r10.s64 = 8;
	// vmaddfp v9,v0,v7,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vandc128 v8,v0,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v13,v43,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// vmulfp128 v7,v58,v42
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vandc128 v0,v13,v55
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmaddfp v13,v6,v13,v9
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v11,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v5,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v10,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v41,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v40,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// vspltw128 v39,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// vspltw128 v38,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v37,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v36,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v41,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r30,r9
	ea = (ctx.r30.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f7,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f6,f12
	ctx.f6.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fadds f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fadds f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fadds f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f2,f4,f4
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f0,f3,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217E7F8) {
	__imp__sub_8217E7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217E99C) {
	__imp__sub_8217E99C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217E9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217E9A8;
	__savegprlr_26(ctx, base);
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mulli r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 * 92;
	// addi r10,r11,23040
	ctx.r10.s64 = ctx.r11.s64 + 23040;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r31,32(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff520
	ctx.lr = 0x8217E9EC;
	sub_822FF520(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ff528
	ctx.lr = 0x8217E9FC;
	sub_822FF528(ctx, base);
	// li r31,16
	ctx.r31.s64 = 16;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvrx128 v63,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v127,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v60,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v126,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// bl 0x822d6b00
	ctx.lr = 0x8217EA34;
	sub_822D6B00(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// vspltw128 v7,v127,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0x55));
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// vspltisw128 v59,-1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// vspltw128 v6,v127,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xAA));
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// vspltw128 v58,v126,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xFF));
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// vspltw128 v5,v127,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v127.u32), 0xFF));
	// addi r8,r10,-30336
	ctx.r8.s64 = ctx.r10.s64 + -30336;
	// lvrx128 v52,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v54,r31,r4
	temp.u32 = ctx.r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvlx128 v53,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
	// lvlx128 v50,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v53,v54
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vor128 v49,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// addi r7,r1,172
	ctx.r7.s64 = ctx.r1.s64 + 172;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslw128 v55,v59,v59
	ctx.v55.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v55.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v55.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v55.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lvrx128 v46,r31,r6
	temp.u32 = ctx.r31.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslw128 v57,v59,v59
	ctx.v57.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vand128 v0,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v45,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v9,v49,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v48,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v43,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v47,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v44,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vspltw128 v11,v126,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0xAA));
	// vslw128 v56,v59,v59
	ctx.v56.u32[0] = ctx.v59.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v56.u32[1] = ctx.v59.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v56.u32[2] = ctx.v59.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v56.u32[3] = ctx.v59.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vspltw128 v10,v126,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), 0x55));
	// vmaddfp v9,v0,v7,v9
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vandc128 v8,v0,v57
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vand128 v13,v43,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// vand128 v12,v44,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,108
	ctx.r27.s64 = ctx.r1.s64 + 108;
	// vandc128 v42,v13,v55
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r26,r1,108
	ctx.r26.s64 = ctx.r1.s64 + 108;
	// vandc128 v0,v12,v56
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vmulfp128 v7,v58,v42
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v42.f32)));
	// vmaddfp v12,v6,v12,v9
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v11,v0,v7
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v5,v13,v12
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v10,v8,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v8.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v41,v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xFF));
	// vspltw128 v40,v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v40.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0xAA));
	// li r10,4
	ctx.r10.s64 = 4;
	// vspltw128 v39,v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v13.u32), 0x55));
	// li r11,8
	ctx.r11.s64 = 8;
	// vspltw128 v38,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// vspltw128 v37,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// stvewx128 v41,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// vspltw128 v36,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvewx128 v40,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// li r3,0
	ctx.r3.s64 = 0;
	// stvewx128 v39,r28,r11
	ea = (ctx.r28.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v37,r26,r10
	ea = (ctx.r26.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v37.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821823d8
	ctx.lr = 0x8217EB7C;
	sub_821823D8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238a0d8
	ctx.lr = 0x8217EB8C;
	sub_8238A0D8(ctx, base);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217E9A0) {
	__imp__sub_8217E9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217EBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217EBA4) {
	__imp__sub_8217EBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217EBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8217EBB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mulli r9,r3,92
	ctx.r9.s64 = ctx.r3.s64 * 92;
	// addi r10,r11,23040
	ctx.r10.s64 = ctx.r11.s64 + 23040;
	// rlwinm r8,r3,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,176(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// lwz r10,184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r8,r10
	ctx.r30.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8217e7f8
	ctx.lr = 0x8217EBE4;
	sub_8217E7F8(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lhz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x8217EBF0;
	sub_823862B0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f5,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821823d8
	ctx.lr = 0x8217EC4C;
	sub_821823D8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8238a0d8
	ctx.lr = 0x8217EC5C;
	sub_8238A0D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217EBA8) {
	__imp__sub_8217EBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217EC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217EC64) {
	__imp__sub_8217EC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217EC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x8217EC70;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82141df8
	ctx.lr = 0x8217EC7C;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8217ed90
	if (!ctx.cr6.eq) goto loc_8217ED90;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// li r15,2
	ctx.r15.s64 = 2;
	// addi r19,r11,23040
	ctx.r19.s64 = ctx.r11.s64 + 23040;
loc_8217EC98:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82181570
	ctx.lr = 0x8217ECA0;
	sub_82181570(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821825e8
	ctx.lr = 0x8217ECA8;
	sub_821825E8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ed84
	if (ctx.cr6.eq) goto loc_8217ED84;
	// rlwinm r31,r18,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r19,172
	ctx.r21.s64 = ctx.r19.s64 + 172;
	// addi r22,r19,188
	ctx.r22.s64 = ctx.r19.s64 + 188;
	// addi r23,r19,196
	ctx.r23.s64 = ctx.r19.s64 + 196;
	// addi r24,r19,180
	ctx.r24.s64 = ctx.r19.s64 + 180;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_8217ECDC:
	// li r10,7
	ctx.r10.s64 = 7;
	// lwzx r11,r31,r21
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r21.u32);
	// lwzx r9,r31,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r7,r31,r22
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwzx r8,r31,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// add r9,r26,r9
	ctx.r9.u64 = ctx.r26.u64 + ctx.r9.u64;
	// add r30,r28,r7
	ctx.r30.u64 = ctx.r28.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r25,r8,r27
	ctx.r25.u64 = ctx.r8.u64 + ctx.r27.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8217ED0C:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8217ed0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217ED0C;
	// stw r17,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r17.u32);
	// sth r15,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r15.u16);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x8217ED30;
	sub_821825D0(ctx, base);
	// lbz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217ed48
	if (ctx.cr6.eq) goto loc_8217ED48;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
loc_8217ED48:
	// sth r17,2(r25)
	PPC_STORE_U16(ctx.r25.u32 + 2, ctx.r17.u16);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// sth r17,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r17.u16);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bne cr6,0x8217ed64
	if (!ctx.cr6.eq) goto loc_8217ED64;
	// bl 0x8217e9a0
	ctx.lr = 0x8217ED60;
	sub_8217E9A0(ctx, base);
	// b 0x8217ed68
	goto loc_8217ED68;
loc_8217ED64:
	// bl 0x8217eba8
	ctx.lr = 0x8217ED68;
	sub_8217EBA8(ctx, base);
loc_8217ED68:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// cmplw cr6,r20,r16
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8217ecdc
	if (ctx.cr6.lt) goto loc_8217ECDC;
loc_8217ED84:
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r18,2
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 2, ctx.xer);
	// blt cr6,0x8217ec98
	if (ctx.cr6.lt) goto loc_8217EC98;
loc_8217ED90:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217EC68) {
	__imp__sub_8217EC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217ED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8217EDA0;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821825e8
	ctx.lr = 0x8217EDB0;
	sub_821825E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// lfs f31,11804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r11,23040
	ctx.r26.s64 = ctx.r11.s64 + 23040;
	// beq cr6,0x8217ee90
	if (ctx.cr6.eq) goto loc_8217EE90;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8217EDDC:
	// lwz r11,188(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 188);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217ee7c
	if (ctx.cr6.eq) goto loc_8217EE7C;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8217ee7c
	if (ctx.cr6.eq) goto loc_8217EE7C;
	// lwz r11,180(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 180);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82257720
	ctx.lr = 0x8217EE18;
	sub_82257720(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822578d0
	ctx.lr = 0x8217EE20;
	sub_822578D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ee3c
	if (ctx.cr6.eq) goto loc_8217EE3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82259630
	ctx.lr = 0x8217EE38;
	sub_82259630(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_8217EE3C:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d47f0
	ctx.lr = 0x8217EE54;
	sub_822D47F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217ee7c
	if (!ctx.cr6.eq) goto loc_8217EE7C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
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
	// bl 0x8217e9a0
	ctx.lr = 0x8217EE7C;
	sub_8217E9A0(ctx, base);
loc_8217EE7C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8217eddc
	if (ctx.cr6.lt) goto loc_8217EDDC;
loc_8217EE90:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821825e8
	ctx.lr = 0x8217EE98;
	sub_821825E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ef64
	if (ctx.cr6.eq) goto loc_8217EF64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
loc_8217EEB0:
	// lwz r11,192(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 192);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217ef50
	if (ctx.cr6.eq) goto loc_8217EF50;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8217ef50
	if (ctx.cr6.eq) goto loc_8217EF50;
	// lwz r11,184(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 184);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r30,r29,r11
	ctx.r30.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82257720
	ctx.lr = 0x8217EEEC;
	sub_82257720(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822578d0
	ctx.lr = 0x8217EEF4;
	sub_822578D0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217ef10
	if (ctx.cr6.eq) goto loc_8217EF10;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82259630
	ctx.lr = 0x8217EF0C;
	sub_82259630(ctx, base);
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_8217EF10:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d47f0
	ctx.lr = 0x8217EF28;
	sub_822D47F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217ef50
	if (!ctx.cr6.eq) goto loc_8217EF50;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
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
	// bl 0x8217eba8
	ctx.lr = 0x8217EF50;
	sub_8217EBA8(ctx, base);
loc_8217EF50:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r29,r29,32
	ctx.r29.s64 = ctx.r29.s64 + 32;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8217eeb0
	if (ctx.cr6.lt) goto loc_8217EEB0;
loc_8217EF64:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217ED98) {
	__imp__sub_8217ED98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217EF70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8217EF78;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82141398
	ctx.lr = 0x8217EF84;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8217f064
	if (ctx.cr6.eq) goto loc_8217F064;
	// bl 0x82141df8
	ctx.lr = 0x8217EF90;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8217f064
	if (!ctx.cr6.eq) goto loc_8217F064;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821825e8
	ctx.lr = 0x8217EFA0;
	sub_821825E8(ctx, base);
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
	// beq cr6,0x8217f004
	if (ctx.cr6.eq) goto loc_8217F004;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8217EFBC:
	// lwz r11,188(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 188);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217eff8
	if (ctx.cr6.eq) goto loc_8217EFF8;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8217eff8
	if (ctx.cr6.eq) goto loc_8217EFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82259630
	ctx.lr = 0x8217EFE8;
	sub_82259630(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_8217EFF8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8217efbc
	if (!ctx.cr0.eq) goto loc_8217EFBC;
loc_8217F004:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821825e8
	ctx.lr = 0x8217F00C;
	sub_821825E8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f064
	if (ctx.cr6.eq) goto loc_8217F064;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8217F01C:
	// lwz r11,192(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 192);
	// add r31,r30,r11
	ctx.r31.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217f058
	if (ctx.cr6.eq) goto loc_8217F058;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8217f058
	if (ctx.cr6.eq) goto loc_8217F058;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82259630
	ctx.lr = 0x8217F048;
	sub_82259630(ctx, base);
	// lhz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r10,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r10.u16);
loc_8217F058:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x8217f01c
	if (!ctx.cr0.eq) goto loc_8217F01C;
loc_8217F064:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217EF70) {
	__imp__sub_8217EF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F06C) {
	__imp__sub_8217F06C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F070) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182180
	ctx.lr = 0x8217F098;
	sub_82182180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a138
	ctx.lr = 0x8217F0A4;
	sub_8238A138(ctx, base);
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

PPC_WEAK_FUNC(sub_8217F070) {
	__imp__sub_8217F070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F0BC) {
	__imp__sub_8217F0BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8217F0C8;
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
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,100(r4)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x8217f35c
	if (ctx.cr6.eq) goto loc_8217F35C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// addi r26,r11,23040
	ctx.r26.s64 = ctx.r11.s64 + 23040;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8217F128:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82181548
	ctx.lr = 0x8217F134;
	sub_82181548(ctx, base);
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217f35c
	if (ctx.cr6.eq) goto loc_8217F35C;
	// lhz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217f230
	if (ctx.cr6.eq) goto loc_8217F230;
	// rlwinm r30,r21,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r26,196
	ctx.r24.s64 = ctx.r26.s64 + 196;
	// addi r23,r26,188
	ctx.r23.s64 = ctx.r26.s64 + 188;
loc_8217F164:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r9,r30,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r24
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r5,-8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + -8);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f224
	if (ctx.cr6.eq) goto loc_8217F224;
	// addi r11,r26,172
	ctx.r11.s64 = ctx.r26.s64 + 172;
	// mulli r10,r31,92
	ctx.r10.s64 = ctx.r31.s64 * 92;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r29,r11,-92
	ctx.r29.s64 = ctx.r11.s64 + -92;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181a20
	ctx.lr = 0x8217F1B8;
	sub_82181A20(ctx, base);
	// and r10,r3,r19
	ctx.r10.u64 = ctx.r3.u64 & ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217f224
	if (ctx.cr6.eq) goto loc_8217F224;
	// addi r11,r26,180
	ctx.r11.s64 = ctx.r26.s64 + 180;
	// lfs f2,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,-32
	ctx.r31.s64 = ctx.r11.s64 + -32;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82279ee8
	ctx.lr = 0x8217F1EC;
	sub_82279EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217f224
	if (!ctx.cr6.eq) goto loc_8217F224;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x8217f214
	if (!ctx.cr6.eq) goto loc_8217F214;
	// bl 0x82181c80
	ctx.lr = 0x8217F210;
	sub_82181C80(ctx, base);
	// b 0x8217f218
	goto loc_8217F218;
loc_8217F214:
	// bl 0x82181da0
	ctx.lr = 0x8217F218;
	sub_82181DA0(ctx, base);
loc_8217F218:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8217f35c
	if (ctx.cr6.eq) goto loc_8217F35C;
loc_8217F224:
	// lhz r31,-18(r25)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r25.u32 + -18);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217f164
	if (!ctx.cr6.eq) goto loc_8217F164;
loc_8217F230:
	// lhz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r20
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r20.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// blt cr6,0x8217f284
	if (ctx.cr6.lt) goto loc_8217F284;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsel f10,f11,f30,f31
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r10,r11,5
	ctx.xer.ca = ctx.r11.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r11.s64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r9,r22
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r22.u32);
	// b 0x8217f354
	goto loc_8217F354;
loc_8217F284:
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// ble cr6,0x8217f35c
	if (!ctx.cr6.gt) goto loc_8217F35C;
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsel f7,f13,f30,f31
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// lfs f6,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lfs f5,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f10.f64));
	// lfs f3,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfs f1,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f3,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f6,f1,f12
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fdivs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fctiwz f3,f7
	ctx.f3.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fmadds f1,f4,f5,f11
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f11.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f2,f5,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f10.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f13,f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f12,f6,f5,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f12.f64));
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r10,r22
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// bl 0x8217f0c0
	ctx.lr = 0x8217F31C;
	sub_8217F0C0(ctx, base);
	// lfs f11,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// beq cr6,0x8217f35c
	if (ctx.cr6.eq) goto loc_8217F35C;
	// subfic r11,r31,5
	ctx.xer.ca = ctx.r31.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r31.s64;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lhzx r5,r10,r22
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r22.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8217F354:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8217f128
	if (!ctx.cr6.eq) goto loc_8217F128;
loc_8217F35C:
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

PPC_WEAK_FUNC(sub_8217F0C0) {
	__imp__sub_8217F0C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F36C) {
	__imp__sub_8217F36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F370) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8217f420
	if (ctx.cr6.eq) goto loc_8217F420;
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lfs f12,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f9,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f8,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8217f0c0
	ctx.lr = 0x8217F3F8;
	sub_8217F0C0(ctx, base);
	// lfs f7,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// beq cr6,0x8217f420
	if (ctx.cr6.eq) goto loc_8217F420;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8217f0c0
	ctx.lr = 0x8217F420;
	sub_8217F0C0(ctx, base);
loc_8217F420:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_8217F370) {
	__imp__sub_8217F370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F43C) {
	__imp__sub_8217F43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217F448;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// beq cr6,0x8217f6c8
	if (ctx.cr6.eq) goto loc_8217F6C8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// addi r31,r11,23040
	ctx.r31.s64 = ctx.r11.s64 + 23040;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8217F4A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82181548
	ctx.lr = 0x8217F4AC;
	sub_82181548(ctx, base);
	// lwz r11,152(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 152);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217f6c8
	if (ctx.cr6.eq) goto loc_8217F6C8;
	// lhz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f528
	if (ctx.cr6.eq) goto loc_8217F528;
loc_8217F4D0:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// rlwinm r7,r11,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r9,176(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r29,r6,r8
	ctx.r29.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// bl 0x82181e38
	ctx.lr = 0x8217F510;
	sub_82181E38(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8217f6c8
	if (ctx.cr6.eq) goto loc_8217F6C8;
	// lhz r11,-18(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + -18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f4d0
	if (!ctx.cr6.eq) goto loc_8217F4D0;
loc_8217F528:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r9,r27
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfsx f12,r7,r28
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fsel f10,f13,f0,f11
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x8217f56c
	if (ctx.cr6.lt) goto loc_8217F56C;
	// lhz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 8);
	// b 0x8217f6c0
	goto loc_8217F6C0;
loc_8217F56C:
	// fsubs f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f0,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fcmpu cr6,f8,f9
	ctx.cr6.compare(ctx.f8.f64, ctx.f9.f64);
	// bgt cr6,0x8217f588
	if (ctx.cr6.gt) goto loc_8217F588;
	// lhz r4,10(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 10);
	// b 0x8217f6c0
	goto loc_8217F6C0;
loc_8217F588:
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x8217f6c8
	if (!ctx.cr6.gt) goto loc_8217F6C8;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x8217f5d4
	if (ctx.cr6.eq) goto loc_8217F5D4;
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fsel f8,f13,f29,f31
	ctx.f8.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f31.f64;
	// fsel f7,f13,f11,f0
	ctx.f7.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fdivs f6,f29,f9
	ctx.f6.f64 = double(float(ctx.f29.f64 / ctx.f9.f64));
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f0,f4,f6
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmuls f30,f3,f6
	ctx.f30.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// b 0x8217f5e0
	goto loc_8217F5E0;
loc_8217F5D4:
	// fmr f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f29.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
loc_8217F5E0:
	// fsubs f9,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f5,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f3,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f1,f3,f10
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsel f0,f9,f0,f29
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fmadds f13,f6,f0,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f4,f0,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f11,f2,f0,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f10,f1,f0,f10
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lhzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// bl 0x8217f440
	ctx.lr = 0x8217F654;
	sub_8217F440(ctx, base);
	// lfs f9,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// beq cr6,0x8217f6c8
	if (ctx.cr6.eq) goto loc_8217F6C8;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsel f10,f30,f30,f31
	ctx.f10.f64 = ctx.f30.f64 >= 0.0 ? ctx.f30.f64 : ctx.f31.f64;
	// lfs f9,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// subfic r11,r29,5
	ctx.xer.ca = ctx.r29.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r29.s64;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f8,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmadds f1,f7,f10,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f6,f10,f11
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f11,f3,f10,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f10,f2,f10,f13
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lhzx r4,r10,r26
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
loc_8217F6C0:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217f4a4
	if (!ctx.cr6.eq) goto loc_8217F4A4;
loc_8217F6C8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217F440) {
	__imp__sub_8217F440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F6DC) {
	__imp__sub_8217F6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F6E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8217f74c
	if (ctx.cr6.eq) goto loc_8217F74C;
	// lfs f12,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f11,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f9,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x8217f440
	ctx.lr = 0x8217F74C;
	sub_8217F440(ctx, base);
loc_8217F74C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217F6E0) {
	__imp__sub_8217F6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F75C) {
	__imp__sub_8217F75C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8217F768;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f8e4
	if (ctx.cr6.eq) goto loc_8217F8E4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
loc_8217F78C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82181548
	ctx.lr = 0x8217F794;
	sub_82181548(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217f8e4
	if (ctx.cr6.eq) goto loc_8217F8E4;
	// lhz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217f870
	if (ctx.cr6.eq) goto loc_8217F870;
	// rlwinm r30,r22,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r28,196
	ctx.r26.s64 = ctx.r28.s64 + 196;
	// addi r25,r28,188
	ctx.r25.s64 = ctx.r28.s64 + 188;
loc_8217F7C4:
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r30,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,-8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + -8);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f864
	if (ctx.cr6.eq) goto loc_8217F864;
	// addi r11,r28,172
	ctx.r11.s64 = ctx.r28.s64 + 172;
	// addi r10,r28,180
	ctx.r10.s64 = ctx.r28.s64 + 180;
	// mulli r8,r31,92
	ctx.r8.s64 = ctx.r31.s64 * 92;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82181b98
	ctx.lr = 0x8217F82C;
	sub_82181B98(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217f864
	if (ctx.cr6.eq) goto loc_8217F864;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217f8d4
	if (ctx.cr6.eq) goto loc_8217F8D4;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r23
	ctx.r8.u64 = ctx.r31.u64 + ctx.r23.u64;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
loc_8217F864:
	// lhz r31,-18(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + -18);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217f7c4
	if (!ctx.cr6.eq) goto loc_8217F7C4;
loc_8217F870:
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f12,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bge cr6,0x8217f8b8
	if (!ctx.cr6.lt) goto loc_8217F8B8;
	// lhz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217f8c4
	if (!ctx.cr6.gt) goto loc_8217F8C4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r31,10(r24)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8217f760
	ctx.lr = 0x8217F8B0;
	sub_8217F760(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8217f8c4
	goto loc_8217F8C4;
loc_8217F8B8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217f8e4
	if (!ctx.cr6.gt) goto loc_8217F8E4;
	// lhz r4,10(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
loc_8217F8C4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217f78c
	if (!ctx.cr6.eq) goto loc_8217F78C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8217F8D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,16184
	ctx.r4.s64 = ctx.r11.s64 + 16184;
	// bl 0x82280c30
	ctx.lr = 0x8217F8E4;
	sub_82280C30(ctx, base);
loc_8217F8E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217F760) {
	__imp__sub_8217F760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217F8EC) {
	__imp__sub_8217F8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217F8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8217F8F8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217fa84
	if (ctx.cr6.eq) goto loc_8217FA84;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// ori r23,r10,65535
	ctx.r23.u64 = ctx.r10.u64 | 65535;
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
loc_8217F91C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82181548
	ctx.lr = 0x8217F924;
	sub_82181548(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8217fa84
	if (ctx.cr6.eq) goto loc_8217FA84;
	// lhz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8217fa00
	if (ctx.cr6.eq) goto loc_8217FA00;
	// rlwinm r30,r22,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r28,196
	ctx.r26.s64 = ctx.r28.s64 + 196;
	// addi r25,r28,188
	ctx.r25.s64 = ctx.r28.s64 + 188;
loc_8217F954:
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r30,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r7,r31,r11
	ctx.r7.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,-8(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + -8);
	// clrlwi r4,r5,31
	ctx.r4.u64 = ctx.r5.u32 & 0x1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217f9f4
	if (ctx.cr6.eq) goto loc_8217F9F4;
	// addi r11,r28,172
	ctx.r11.s64 = ctx.r28.s64 + 172;
	// addi r10,r28,180
	ctx.r10.s64 = ctx.r28.s64 + 180;
	// mulli r8,r31,92
	ctx.r8.s64 = ctx.r31.s64 * 92;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r30,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r9,r31,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r3,r11,-92
	ctx.r3.s64 = ctx.r11.s64 + -92;
	// addi r4,r10,-32
	ctx.r4.s64 = ctx.r10.s64 + -32;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82181c00
	ctx.lr = 0x8217F9BC;
	sub_82181C00(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8217f9f4
	if (ctx.cr6.eq) goto loc_8217F9F4;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8217fa74
	if (ctx.cr6.eq) goto loc_8217FA74;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r31,r23
	ctx.r8.u64 = ctx.r31.u64 + ctx.r23.u64;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r6.u32);
loc_8217F9F4:
	// lhz r31,-18(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + -18);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8217f954
	if (!ctx.cr6.eq) goto loc_8217F954;
loc_8217FA00:
	// lhz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8217fa34
	if (ctx.cr6.eq) goto loc_8217FA34;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f12,r11,r29
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bge cr6,0x8217fa58
	if (!ctx.cr6.lt) goto loc_8217FA58;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217fa50
	if (!ctx.cr6.gt) goto loc_8217FA50;
loc_8217FA34:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhz r31,10(r24)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lhz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// bl 0x8217f8f0
	ctx.lr = 0x8217FA48;
	sub_8217F8F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8217fa64
	goto loc_8217FA64;
loc_8217FA50:
	// lhz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 8);
	// b 0x8217fa64
	goto loc_8217FA64;
loc_8217FA58:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8217fa84
	if (!ctx.cr6.gt) goto loc_8217FA84;
	// lhz r4,10(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 10);
loc_8217FA64:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8217f91c
	if (!ctx.cr6.eq) goto loc_8217F91C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_8217FA74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,16228
	ctx.r4.s64 = ctx.r11.s64 + 16228;
	// bl 0x82280c30
	ctx.lr = 0x8217FA84;
	sub_82280C30(ctx, base);
loc_8217FA84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217F8F0) {
	__imp__sub_8217F8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217FA8C) {
	__imp__sub_8217FA8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FA90) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8217f760
	ctx.lr = 0x8217FAE0;
	sub_8217F760(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217FA90) {
	__imp__sub_8217FA90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217FAF4) {
	__imp__sub_8217FAF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FAF8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f1,f1
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8217f8f0
	ctx.lr = 0x8217FB48;
	sub_8217F8F0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8217FAF8) {
	__imp__sub_8217FAF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217FB5C) {
	__imp__sub_8217FB5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FB60) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,44(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r6,r11,-5928
	ctx.r6.s64 = ctx.r11.s64 + -5928;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82258b48
	ctx.lr = 0x8217FB94;
	sub_82258B48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8217fbb8
	if (!ctx.cr6.eq) goto loc_8217FBB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,16276
	ctx.r4.s64 = ctx.r11.s64 + 16276;
	// bl 0x82280c30
	ctx.lr = 0x8217FBB0;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217fbcc
	goto loc_8217FBCC;
loc_8217FBB8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82181f10
	ctx.lr = 0x8217FBC8;
	sub_82181F10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8217FBCC:
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

PPC_WEAK_FUNC(sub_8217FB60) {
	__imp__sub_8217FB60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FBE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217FBE4) {
	__imp__sub_8217FBE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FBE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// b 0x821a2a50
	sub_821A2A50(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217FBE8) {
	__imp__sub_8217FBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FC08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217FC10;
	__savegprlr_26(ctx, base);
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
	// srawi r9,r4,20
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 20;
	// addi r8,r11,332
	ctx.r8.s64 = ctx.r11.s64 + 332;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// clrlwi r31,r9,27
	ctx.r31.u64 = ctx.r9.u32 & 0x1F;
	// lhzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x82332b10
	ctx.lr = 0x8217FC40;
	sub_82332B10(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8217fce8
	if (ctx.cr6.gt) goto loc_8217FCE8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8217fc98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217FC98;
	// bdzf 4*cr6+eq,0x8217fcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217FCAC;
	// bdzf 4*cr6+eq,0x8217fcac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217FCAC;
	// bdzf 4*cr6+eq,0x8217fcc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8217FCC0;
	// bne cr6,0x8217fcc0
	if (!ctx.cr6.eq) goto loc_8217FCC0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,1280
	ctx.r9.s64 = ctx.r11.s64 + 1280;
	// lwz r11,16064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16064);
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r30,r8,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x8217fce8
	goto loc_8217FCE8;
loc_8217FC98:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r31,70
	ctx.r10.s64 = ctx.r31.s64 + 70;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r8,r11,1404
	ctx.r8.s64 = ctx.r11.s64 + 1404;
	// b 0x8217fcd0
	goto loc_8217FCD0;
loc_8217FCAC:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r31,280
	ctx.r10.s64 = ctx.r31.s64 + 280;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r8,r11,1528
	ctx.r8.s64 = ctx.r11.s64 + 1528;
	// b 0x8217fcd0
	goto loc_8217FCD0;
loc_8217FCC0:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r31,175
	ctx.r10.s64 = ctx.r31.s64 + 175;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r8,r11,1652
	ctx.r8.s64 = ctx.r11.s64 + 1652;
loc_8217FCD0:
	// lwz r11,16064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16064);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r29,r7,r8
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r30,r9,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
loc_8217FCE8:
	// rlwinm r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217fd6c
	if (!ctx.cr6.eq) goto loc_8217FD6C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8217fd6c
	if (ctx.cr6.eq) goto loc_8217FD6C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8217fd28
	if (!ctx.cr6.eq) goto loc_8217FD28;
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8217fd28
	if (!ctx.cr6.eq) goto loc_8217FD28;
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8217fd6c
	if (ctx.cr6.eq) goto loc_8217FD6C;
loc_8217FD28:
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8211a720
	ctx.lr = 0x8217FD4C;
	sub_8211A720(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x8217FD6C;
	sub_821A2A50(ctx, base);
loc_8217FD6C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8217fd84
	if (ctx.cr6.eq) goto loc_8217FD84;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// bl 0x820f9a68
	ctx.lr = 0x8217FD84;
	sub_820F9A68(ctx, base);
loc_8217FD84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217FC08) {
	__imp__sub_8217FC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8217FD8C) {
	__imp__sub_8217FD8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217FD98;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,-29372(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -29372);
	// addi r29,r10,23040
	ctx.r29.s64 = ctx.r10.s64 + 23040;
	// rlwinm r28,r4,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r29,188
	ctx.r8.s64 = ctx.r29.s64 + 188;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r6,r29,172
	ctx.r6.s64 = ctx.r29.s64 + 172;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwzx r8,r28,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// mulli r10,r3,92
	ctx.r10.s64 = ctx.r3.s64 * 92;
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lwzx r11,r28,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r6.u32);
	// add r30,r8,r9
	ctx.r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// bgt 0x8217fea0
	if (ctx.cr0.gt) goto loc_8217FEA0;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
	// beq cr6,0x8217fe40
	if (ctx.cr6.eq) goto loc_8217FE40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82259630
	ctx.lr = 0x8217FE38;
	sub_82259630(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8217FE40:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82182180
	ctx.lr = 0x8217FE4C;
	sub_82182180(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a138
	ctx.lr = 0x8217FE58;
	sub_8238A138(ctx, base);
	// lwz r11,40(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217fea0
	if (ctx.cr6.eq) goto loc_8217FEA0;
	// addi r11,r29,180
	ctx.r11.s64 = ctx.r29.s64 + 180;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6b00
	ctx.lr = 0x8217FE80;
	sub_822D6B00(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,40(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 40);
	// addi r9,r10,6968
	ctx.r9.s64 = ctx.r10.s64 + 6968;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x8217FEA0;
	sub_821A2A50(ctx, base);
loc_8217FEA0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217FD90) {
	__imp__sub_8217FD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FEA8) {
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
	// bl 0x8211a530
	ctx.lr = 0x8217FECC;
	sub_8211A530(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217ff04
	if (ctx.cr6.eq) goto loc_8217FF04;
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
	// mullw r7,r30,r8
	ctx.r7.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,23180
	ctx.r6.s64 = ctx.r11.s64 + 23180;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x8217ff14
	if (ctx.cr6.eq) goto loc_8217FF14;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8217ff18
	goto loc_8217FF18;
loc_8217FF04:
	// bl 0x82141df8
	ctx.lr = 0x8217FF08;
	sub_82141DF8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x8217ff18
	if (!ctx.cr6.eq) goto loc_8217FF18;
loc_8217FF14:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8217FF18:
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

PPC_WEAK_FUNC(sub_8217FEA8) {
	__imp__sub_8217FEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8217FF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8217FF38;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82180070
	if (!ctx.cr6.eq) goto loc_82180070;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8217fea8
	ctx.lr = 0x8217FF68;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180070
	if (ctx.cr6.eq) goto loc_82180070;
	// lhz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82180070
	if (ctx.cr6.eq) goto loc_82180070;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82180070
	if (ctx.cr6.eq) goto loc_82180070;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f11,f6
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x82180024
	if (ctx.cr6.eq) goto loc_82180024;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,3556(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3556);
	// bl 0x820f9a68
	ctx.lr = 0x82180020;
	sub_820F9A68(ctx, base);
	// b 0x82180038
	goto loc_82180038;
loc_82180024:
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217fc08
	ctx.lr = 0x82180038;
	sub_8217FC08(ctx, base);
loc_82180038:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,334(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82180044;
	sub_82284650(ctx, base);
	// bl 0x822ef020
	ctx.lr = 0x82180048;
	sub_822EF020(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-29364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29364);
	// lfs f2,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82255850
	ctx.lr = 0x82180070;
	sub_82255850(ctx, base);
loc_82180070:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8217FF30) {
	__imp__sub_8217FF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82180080;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// lis r7,640
	ctx.r7.s64 = 41943040;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// stw r11,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r11.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// ori r7,r7,59441
	ctx.r7.u64 = ctx.r7.u64 | 59441;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211ec28
	ctx.lr = 0x821800E0;
	sub_8211EC28(ctx, base);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82180148
	if (ctx.cr6.eq) goto loc_82180148;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8217ff30
	ctx.lr = 0x82180148;
	sub_8217FF30(ctx, base);
loc_82180148:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82180078) {
	__imp__sub_82180078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82180158;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8217fea8
	ctx.lr = 0x8218017C;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82180198
	if (!ctx.cr6.eq) goto loc_82180198;
loc_82180188:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82180198:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82180078
	ctx.lr = 0x821801B0;
	sub_82180078(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// std r29,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// std r29,32(r11)
	PPC_STORE_U64(ctx.r11.u32 + 32, ctx.r29.u64);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f11,256(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f10,260(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f9,264(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// bl 0x82279c28
	ctx.lr = 0x82180214;
	sub_82279C28(ctx, base);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r29.u32);
	// ori r7,r9,8211
	ctx.r7.u64 = ctx.r9.u64 | 8211;
	// stw r29,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// stw r8,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r7,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r7.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8217f370
	ctx.lr = 0x8218023C;
	sub_8217F370(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822760d8
	ctx.lr = 0x82180248;
	sub_822760D8(ctx, base);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// beq cr6,0x82180188
	if (ctx.cr6.eq) goto loc_82180188;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r7,r28,172
	ctx.r7.s64 = ctx.r28.s64 + 172;
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// addi r6,r28,188
	ctx.r6.s64 = ctx.r28.s64 + 188;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r5,r27,24
	ctx.r5.u64 = ctx.r27.u32 & 0xFF;
	// mulli r10,r29,92
	ctx.r10.s64 = ctx.r29.s64 * 92;
	// lwzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// fmadds f3,f11,f0,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lwzx r30,r8,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f1,f8,f0,f10
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// fmadds f12,f5,f0,f7
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f13,f5
	ctx.f13.f64 = ctx.f5.f64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fmadds f10,f8,f8,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f9,f5,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f1,f4,f5
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f0,f2,f5
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// beq cr6,0x82180330
	if (ctx.cr6.eq) goto loc_82180330;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,3556(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3556);
	// bl 0x820f9a68
	ctx.lr = 0x8218032C;
	sub_820F9A68(ctx, base);
	// b 0x82180344
	goto loc_82180344;
loc_82180330:
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8217fc08
	ctx.lr = 0x82180344;
	sub_8217FC08(ctx, base);
loc_82180344:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x8218034C;
	sub_821825D0(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821803b8
	if (ctx.cr6.eq) goto loc_821803B8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r28,180
	ctx.r9.s64 = ctx.r28.s64 + 180;
	// lwzx r8,r30,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r10,r7,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x82180390
	if (!ctx.cr6.eq) goto loc_82180390;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8217fb60
	ctx.lr = 0x82180384;
	sub_8217FB60(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821803b8
	if (ctx.cr6.eq) goto loc_821803B8;
loc_82180390:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r10,44(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwzx r4,r30,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-29364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29364);
	// lfs f2,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82255850
	ctx.lr = 0x821803B8;
	sub_82255850(ctx, base);
loc_821803B8:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x821803C0;
	sub_821825D0(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821803e4
	if (ctx.cr6.eq) goto loc_821803E4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x821803e4
	if (ctx.cr6.eq) goto loc_821803E4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217fd90
	ctx.lr = 0x821803E4;
	sub_8217FD90(ctx, base);
loc_821803E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82180150) {
	__imp__sub_82180150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821803F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821803F4) {
	__imp__sub_821803F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821803F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82180400;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8217fea8
	ctx.lr = 0x82180410;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218056c
	if (ctx.cr6.eq) goto loc_8218056C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r31,404
	ctx.r10.s64 = ctx.r31.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,332(r26)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r26.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218056c
	if (ctx.cr6.eq) goto loc_8218056C;
	// bl 0x82332af8
	ctx.lr = 0x8218043C;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r25,568(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// bl 0x8211a640
	ctx.lr = 0x82180454;
	sub_8211A640(ctx, base);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8211a5d0
	ctx.lr = 0x8218046C;
	sub_8211A5D0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218056c
	if (ctx.cr6.eq) goto loc_8218056C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r11,r11,16332
	ctx.r11.s64 = ctx.r11.s64 + 16332;
	// lis r30,-31834
	ctx.r30.s64 = -2086273024;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r29,-31834
	ctx.r29.s64 = -2086273024;
	// lis r28,-31834
	ctx.r28.s64 = -2086273024;
loc_82180494:
	// lwz r11,-6720(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6720);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-6484(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -6484);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,-16956(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16956);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f13,f9,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fmadds f13,f9,f11,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f7,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f8,f9,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f4.f64 = double(temp.f32);
	// lhz r4,334(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 334);
	// lfs f3,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f4,f5,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64));
	// lfs f2,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f13,f3,f5,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f12,f2,f5,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f12.f64));
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f10,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f0.f64));
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f10,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f4,f6,f10,f12
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82180150
	ctx.lr = 0x82180550;
	sub_82180150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218056c
	if (!ctx.cr6.eq) goto loc_8218056C;
	// addi r24,r24,8
	ctx.r24.s64 = ctx.r24.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r24,40
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 40, ctx.xer);
	// blt cr6,0x82180494
	if (ctx.cr6.lt) goto loc_82180494;
loc_8218056C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821803F8) {
	__imp__sub_821803F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82180574) {
	__imp__sub_82180574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82180590
	if (ctx.cr6.lt) goto loc_82180590;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82180590:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82180578) {
	__imp__sub_82180578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821805A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8217fea8
	ctx.lr = 0x821805B4;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180664
	if (ctx.cr6.eq) goto loc_82180664;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// rlwinm r27,r29,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,23040
	ctx.r30.s64 = ctx.r11.s64 + 23040;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,188
	ctx.r10.s64 = ctx.r30.s64 + 188;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r7,r30,172
	ctx.r7.s64 = ctx.r30.s64 + 172;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r31,92
	ctx.r9.s64 = ctx.r31.s64 * 92;
	// lwzx r8,r27,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r10,r27,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r28,r10,r9
	ctx.r28.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r5,r6,16
	ctx.r5.u64 = ctx.r6.u32 & 0xFFFF;
	// rlwinm r5,r5,0,31,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// bl 0x82182180
	ctx.lr = 0x82180610;
	sub_82182180(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8238a138
	ctx.lr = 0x8218061C;
	sub_8238A138(ctx, base);
	// addi r4,r30,180
	ctx.r4.s64 = ctx.r30.s64 + 180;
	// lwz r3,40(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r11,r27,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r4.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82180664
	if (ctx.cr6.eq) goto loc_82180664;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6b00
	ctx.lr = 0x82180644;
	sub_822D6B00(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,40(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,11308(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// bl 0x821a2a50
	ctx.lr = 0x82180664;
	sub_821A2A50(ctx, base);
loc_82180664:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82180598) {
	__imp__sub_82180598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218066C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218066C) {
	__imp__sub_8218066C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82180678;
	__savegprlr_23(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,32512
	ctx.r12.u64 = ctx.r12.u64 | 32512;
	// bl 0x823dedd4
	ctx.lr = 0x82180684;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// beq cr6,0x821806ac
	if (ctx.cr6.eq) goto loc_821806AC;
	// addi r10,r11,-29388
	ctx.r10.s64 = ctx.r11.s64 + -29388;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x821806b0
	goto loc_821806B0;
loc_821806AC:
	// lwz r11,-29388(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29388);
loc_821806B0:
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f1
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x821808d0
	if (!ctx.cr6.eq) goto loc_821808D0;
	// ori r10,r11,8211
	ctx.r10.u64 = ctx.r11.u64 | 8211;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r9,4096
	ctx.r9.s64 = 4096;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x8217f760
	ctx.lr = 0x82180714;
	sub_8217F760(ctx, base);
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ble cr6,0x821809b8
	if (!ctx.cr6.gt) goto loc_821809B8;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
	// blt cr6,0x8218084c
	if (ctx.cr6.lt) goto loc_8218084C;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r28,180
	ctx.r7.s64 = ctx.r28.s64 + 180;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82180768:
	// lhz r6,2(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r27,4(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r8,r6,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 5);
	// lhz r26,6(r10)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// rotlwi r7,r27,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r27.u32, 5);
	// lhzu r4,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r6,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r6.u16);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rotlwi r6,r26,5
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r26.u32, 5);
	// rotlwi r5,r4,5
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 5);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfs f11,20(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// lfs f6,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// sth r27,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r27.u16);
	// fmadds f4,f8,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f7.f64));
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f2,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f11,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f9,f1,f1
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f8,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// sth r26,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r26.u16);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmadds f6,f10,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f5,f7,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,16(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f4,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// lfs f2,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmuls f11,f3,f3
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// lfs f10,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// sth r4,36(r11)
	PPC_STORE_U16(ctx.r11.u32 + 36, ctx.r4.u16);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f8,f1,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fmadds f7,f9,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f2,f12,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fsubs f11,f0,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmadds f10,f2,f2,f1
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfsu f9,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82180768
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82180768;
loc_8218084C:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8218096c
	if (!ctx.cr6.lt) goto loc_8218096C;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r28,180
	ctx.r7.s64 = ctx.r28.s64 + 180;
	// subf r6,r30,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r25
	ctx.r10.u64 = ctx.r9.u64 + ctx.r25.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// lwzx r7,r8,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82180890:
	// lhzu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rotlwi r10,r8,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r8,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r8.u16);
	// lfs f11,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f6,f8,f8
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f5,f0,f10
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f4,f7,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f3,f5,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// stfsu f3,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82180890
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82180890;
	// b 0x8218096c
	goto loc_8218096C;
loc_821808D0:
	// ori r9,r11,8211
	ctx.r9.u64 = ctx.r11.u64 | 8211;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8217f8f0
	ctx.lr = 0x82180908;
	sub_8217F8F0(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r3,r24
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r24.u32, ctx.xer);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ble cr6,0x821809b8
	if (!ctx.cr6.gt) goto loc_821809B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218096c
	if (ctx.cr6.eq) goto loc_8218096C;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// rlwinm r26,r29,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,180
	ctx.r27.s64 = ctx.r11.s64 + 180;
	// addi r29,r10,-8
	ctx.r29.s64 = ctx.r10.s64 + -8;
	// addi r28,r25,-2
	ctx.r28.s64 = ctx.r25.s64 + -2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82180940:
	// lhzu r11,2(r28)
	ea = 2 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r28.u32 = ea;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r10,r26,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// rotlwi r9,r11,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r11.u16);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x822d4918
	ctx.lr = 0x82180960;
	sub_822D4918(ctx, base);
	// stfsu f1,8(r29)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r29.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82180940
	if (!ctx.cr0.eq) goto loc_82180940;
loc_8218096C:
	// rlwinm r10,r23,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r6,r8,1400
	ctx.r6.s64 = ctx.r8.s64 + 1400;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821b7458
	ctx.lr = 0x82180994;
	sub_821B7458(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821809b4
	if (ctx.cr6.eq) goto loc_821809B4;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// addi r10,r25,-2
	ctx.r10.s64 = ctx.r25.s64 + -2;
loc_821809A8:
	// lhzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821809a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821809A8;
loc_821809B4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_821809B8:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82180670) {
	__imp__sub_82180670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821809C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x821809C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de004
	ctx.lr = 0x821809D0;
	__savefpr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8592(r1)
	ea = -8592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// fmr f21,f3
	ctx.f21.f64 = ctx.f3.f64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// bl 0x8217fea8
	ctx.lr = 0x82180A00;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180d7c
	if (ctx.cr6.eq) goto loc_82180D7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f25,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f27,f25
	ctx.cr6.compare(ctx.f27.f64, ctx.f25.f64);
	// beq cr6,0x82180d7c
	if (ctx.cr6.eq) goto loc_82180D7C;
	// fmuls f0,f27,f27
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f22,f22
	ctx.f13.f64 = double(float(ctx.f22.f64 * ctx.f22.f64));
	// fmr f23,f25
	ctx.f23.f64 = ctx.f25.f64;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82180a40
	if (!ctx.cr6.gt) goto loc_82180A40;
	// fsubs f0,f22,f27
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f27.f64));
	// fdivs f23,f31,f0
	ctx.f23.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
loc_82180A40:
	// lwz r14,8684(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8684);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// addi r8,r11,-29404
	ctx.r8.s64 = ctx.r11.s64 + -29404;
	// beq cr6,0x82180a68
	if (ctx.cr6.eq) goto loc_82180A68;
	// lwz r9,-29404(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29404);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,36(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x82180a78
	goto loc_82180A78;
loc_82180A68:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r8,44(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
loc_82180A78:
	// lfs f24,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f26,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfs f20,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f20.f64 = double(temp.f32);
	// lwz r16,8676(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8676);
	// li r18,0
	ctx.r18.s64 = 0;
	// lfs f0,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// lfs f28,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f28.f64 = double(temp.f32);
	// li r24,0
	ctx.r24.s64 = 0;
	// fadds f19,f27,f0
	ctx.f19.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// addi r23,r11,23040
	ctx.r23.s64 = ctx.r11.s64 + 23040;
	// addi r22,r10,-5928
	ctx.r22.s64 = ctx.r10.s64 + -5928;
loc_82180AB8:
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// fmr f1,f19
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f19.f64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82180670
	ctx.lr = 0x82180AD4;
	sub_82180670(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82180d6c
	if (ctx.cr6.eq) goto loc_82180D6C;
	// addi r11,r23,180
	ctx.r11.s64 = ctx.r23.s64 + 180;
	// clrlwi r25,r17,24
	ctx.r25.u64 = ctx.r17.u32 & 0xFF;
	// add r26,r24,r11
	ctx.r26.u64 = ctx.r24.u64 + ctx.r11.u64;
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_82180AF0:
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r8,r8,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 5);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82180b2c
	if (!ctx.cr6.eq) goto loc_82180B2C;
	// bl 0x82181a48
	ctx.lr = 0x82180B28;
	sub_82181A48(ctx, base);
	// b 0x82180b30
	goto loc_82180B30;
loc_82180B2C:
	// bl 0x82181a98
	ctx.lr = 0x82180B30;
	sub_82181A98(ctx, base);
loc_82180B30:
	// fcmpu cr6,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// bge cr6,0x82180d60
	if (!ctx.cr6.lt) goto loc_82180D60;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fcmpu cr6,f1,f22
	ctx.cr6.compare(ctx.f1.f64, ctx.f22.f64);
	// ble cr6,0x82180b50
	if (!ctx.cr6.gt) goto loc_82180B50;
	// fsubs f0,f1,f27
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// fmuls f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// fsel f30,f13,f13,f25
	ctx.f30.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f25.f64;
loc_82180B50:
	// addi r9,r23,172
	ctx.r9.s64 = ctx.r23.s64 + 172;
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r8,92
	ctx.r10.s64 = ctx.r8.s64 * 92;
	// lfs f13,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwzx r11,r24,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r7,44(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lfs f0,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f12,f24
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmuls f11,f11,f21
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// bne cr6,0x82180c34
	if (!ctx.cr6.eq) goto loc_82180C34;
	// lfs f12,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82180c34
	if (!ctx.cr6.eq) goto loc_82180C34;
	// lfs f12,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82180c34
	if (!ctx.cr6.eq) goto loc_82180C34;
	// fcmpu cr6,f11,f20
	ctx.cr6.compare(ctx.f11.f64, ctx.f20.f64);
	// blt cr6,0x82180cfc
	if (ctx.cr6.lt) goto loc_82180CFC;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lfs f13,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f8,8(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f0,f9,f8
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// beq cr6,0x82180be0
	if (ctx.cr6.eq) goto loc_82180BE0;
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
loc_82180BE0:
	// fmuls f10,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f13,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f8,f0,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f5,f6,f31,f7
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f31.f64 : ctx.f7.f64;
	// fdivs f4,f31,f5
	ctx.f4.f64 = double(float(ctx.f31.f64 / ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f1,f4,f0,f26
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f26.f64));
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f0,f3,f3
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f13,f2,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fmadds f12,f1,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fsqrts f10,f12
	ctx.f10.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f9,f31,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fdivs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f8.f64));
	// fmuls f13,f7,f2
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f0,f7,f3
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// b 0x82180c3c
	goto loc_82180C3C;
loc_82180C34:
	// lfs f0,4(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_82180C3C:
	// fcmpu cr6,f11,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// ble cr6,0x82180cfc
	if (!ctx.cr6.gt) goto loc_82180CFC;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x82180C64;
	sub_821825D0(ctx, base);
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180cfc
	if (ctx.cr6.eq) goto loc_82180CFC;
	// lwzx r11,r27,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82180c94
	if (!ctx.cr6.eq) goto loc_82180C94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8217fb60
	ctx.lr = 0x82180C88;
	sub_8217FB60(ctx, base);
	// stwx r3,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82180cfc
	if (ctx.cr6.eq) goto loc_82180CFC;
loc_82180C94:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r27,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// bl 0x82255660
	ctx.lr = 0x82180CA0;
	sub_82255660(ctx, base);
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822d9488
	ctx.lr = 0x82180CAC;
	sub_822D9488(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmadds f13,f1,f29,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822d9488
	ctx.lr = 0x82180CC4;
	sub_822D9488(ctx, base);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f1,f29,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f12.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822d9488
	ctx.lr = 0x82180CDC;
	sub_822D9488(ctx, base);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f1,f29,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f10.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r4,r27,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82255708
	ctx.lr = 0x82180CFC;
	sub_82255708(ctx, base);
loc_82180CFC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x82180D04;
	sub_821825D0(ctx, base);
	// lbz r11,7(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 7);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180d60
	if (ctx.cr6.eq) goto loc_82180D60;
	// subf r11,r16,r15
	ctx.r11.s64 = ctx.r15.s64 - ctx.r16.s64;
	// extsw r10,r16
	ctx.r10.s64 = ctx.r16.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f8,f9,f30,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82180d60
	if (ctx.cr6.eq) goto loc_82180D60;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// bl 0x8217fd90
	ctx.lr = 0x82180D60;
	sub_8217FD90(ctx, base);
loc_82180D60:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x82180af0
	if (!ctx.cr0.eq) goto loc_82180AF0;
loc_82180D6C:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 8, ctx.xer);
	// blt cr6,0x82180ab8
	if (ctx.cr6.lt) goto loc_82180AB8;
loc_82180D7C:
	// addi r1,r1,8592
	ctx.r1.s64 = ctx.r1.s64 + 8592;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de050
	ctx.lr = 0x82180D88;
	__restfpr_19(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821809C0) {
	__imp__sub_821809C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82180D8C) {
	__imp__sub_82180D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82180D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82180D98;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de020
	ctx.lr = 0x82180DA0;
	__savefpr_26(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,24256
	ctx.r12.u64 = ctx.r12.u64 | 24256;
	// bl 0x823dedd4
	ctx.lr = 0x82180DAC;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// bl 0x8217fea8
	ctx.lr = 0x82180DCC;
	sub_8217FEA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218100c
	if (ctx.cr6.eq) goto loc_8218100C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// beq cr6,0x8218100c
	if (ctx.cr6.eq) goto loc_8218100C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r17,0
	ctx.r17.s64 = 0;
	// lis r8,128
	ctx.r8.s64 = 8388608;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// lfs f0,27440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fadds f31,f30,f0
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// lis r20,-32075
	ctx.r20.s64 = -2102067200;
	// ori r19,r8,8211
	ctx.r19.u64 = ctx.r8.u64 | 8211;
	// li r16,4096
	ctx.r16.s64 = 4096;
	// addi r15,r11,16276
	ctx.r15.s64 = ctx.r11.s64 + 16276;
	// addi r21,r10,-5928
	ctx.r21.s64 = ctx.r10.s64 + -5928;
	// addi r22,r9,23040
	ctx.r22.s64 = ctx.r9.s64 + 23040;
	// fmuls f29,f31,f31
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
loc_82180E2C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfs f29,92(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8217f8f0
	ctx.lr = 0x82180E70;
	sub_8217F8F0(ctx, base);
	// lwz r11,-29388(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29388);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82180f20
	if (!ctx.cr6.gt) goto loc_82180F20;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82180ed0
	if (ctx.cr6.eq) goto loc_82180ED0;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r28,r22,180
	ctx.r28.s64 = ctx.r22.s64 + 180;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// addi r29,r10,-2
	ctx.r29.s64 = ctx.r10.s64 + -2;
loc_82180EA4:
	// lhzu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r29.u32 = ea;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r10,r24,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r28.u32);
	// rotlwi r9,r11,5
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r11,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r11.u16);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x822d4918
	ctx.lr = 0x82180EC4;
	sub_822D4918(ctx, base);
	// stfsu f1,8(r30)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82180ea4
	if (!ctx.cr0.eq) goto loc_82180EA4;
loc_82180ED0:
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,8320
	ctx.r11.s64 = ctx.r1.s64 + 8320;
	// addi r9,r1,8320
	ctx.r9.s64 = ctx.r1.s64 + 8320;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// subf r7,r9,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r6,r8,1400
	ctx.r6.s64 = ctx.r8.s64 + 1400;
	// srawi r5,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 3;
	// addi r3,r1,8320
	ctx.r3.s64 = ctx.r1.s64 + 8320;
	// bl 0x821b7458
	ctx.lr = 0x82180EF8;
	sub_821B7458(ctx, base);
	// lwz r11,-29388(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -29388);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82180fe0
	if (ctx.cr6.eq) goto loc_82180FE0;
	// addi r10,r1,126
	ctx.r10.s64 = ctx.r1.s64 + 126;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r11,r1,8316
	ctx.r11.s64 = ctx.r1.s64 + 8316;
loc_82180F14:
	// lhzu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82180f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82180F14;
loc_82180F20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82180fe0
	if (ctx.cr6.eq) goto loc_82180FE0;
	// addi r11,r22,172
	ctx.r11.s64 = ctx.r22.s64 + 172;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// add r28,r24,r11
	ctx.r28.u64 = ctx.r24.u64 + ctx.r11.u64;
loc_82180F34:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r25,16(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mulli r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 * 92;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821825d0
	ctx.lr = 0x82180F60;
	sub_821825D0(ctx, base);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82180fd4
	if (ctx.cr6.eq) goto loc_82180FD4;
	// lwzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82180fd4
	if (!ctx.cr6.eq) goto loc_82180FD4;
	// addi r10,r22,180
	ctx.r10.s64 = ctx.r22.s64 + 180;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r11,r9,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r24,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// bl 0x82258b48
	ctx.lr = 0x82180FA0;
	sub_82258B48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82180fc0
	if (!ctx.cr6.eq) goto loc_82180FC0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x82180FB8;
	sub_82280C30(ctx, base);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// b 0x82180fd0
	goto loc_82180FD0;
loc_82180FC0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181f10
	ctx.lr = 0x82180FD0;
	sub_82181F10(ctx, base);
loc_82180FD0:
	// stwx r30,r26,r25
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, ctx.r30.u32);
loc_82180FD4:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x82180f34
	if (!ctx.cr0.eq) goto loc_82180F34;
loc_82180FE0:
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// cmplwi cr6,r24,8
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 8, ctx.xer);
	// blt cr6,0x82180e2c
	if (ctx.cr6.lt) goto loc_82180E2C;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f26.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82258078
	ctx.lr = 0x8218100C;
	sub_82258078(ctx, base);
loc_8218100C:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de06c
	ctx.lr = 0x82181018;
	__restfpr_26(ctx, base);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82180D90) {
	__imp__sub_82180D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218101C) {
	__imp__sub_8218101C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x82181028;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-16000(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16000);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82181198
	if (ctx.cr6.eq) goto loc_82181198;
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
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r10,-5928
	ctx.r23.s64 = ctx.r10.s64 + -5928;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r24,r9,23040
	ctx.r24.s64 = ctx.r9.s64 + 23040;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r21,r11,16276
	ctx.r21.s64 = ctx.r11.s64 + 16276;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_821810AC:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82180670
	ctx.lr = 0x821810C8;
	sub_82180670(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181188
	if (ctx.cr6.eq) goto loc_82181188;
	// addi r11,r24,188
	ctx.r11.s64 = ctx.r24.s64 + 188;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// add r28,r25,r11
	ctx.r28.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
loc_821810E0:
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r8,-16(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mulli r9,r11,92
	ctx.r9.s64 = ctx.r11.s64 * 92;
	// lwzx r3,r9,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r27,r7,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821825d0
	ctx.lr = 0x8218110C;
	sub_821825D0(ctx, base);
	// lbz r6,6(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8218117c
	if (ctx.cr6.eq) goto loc_8218117C;
	// lwzx r11,r27,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218117c
	if (!ctx.cr6.eq) goto loc_8218117C;
	// addi r10,r24,180
	ctx.r10.s64 = ctx.r24.s64 + 180;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r11,r9,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r10,r25,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r5,16
	ctx.r4.s64 = ctx.r5.s64 + 16;
	// bl 0x82258b48
	ctx.lr = 0x8218114C;
	sub_82258B48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181168
	if (!ctx.cr6.eq) goto loc_82181168;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82280c30
	ctx.lr = 0x82181164;
	sub_82280C30(ctx, base);
	// b 0x82181178
	goto loc_82181178;
loc_82181168:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181f10
	ctx.lr = 0x82181178;
	sub_82181F10(ctx, base);
loc_82181178:
	// stwx r30,r27,r26
	PPC_STORE_U32(ctx.r27.u32 + ctx.r26.u32, ctx.r30.u32);
loc_8218117C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x821810e0
	if (!ctx.cr0.eq) goto loc_821810E0;
loc_82181188:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 8, ctx.xer);
	// blt cr6,0x821810ac
	if (ctx.cr6.lt) goto loc_821810AC;
loc_82181198:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181020) {
	__imp__sub_82181020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821811A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821811A4) {
	__imp__sub_821811A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821811A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821811B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8218123c
	if (!ctx.cr6.gt) goto loc_8218123C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r26,r11,4,0,27
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821b71d8
	ctx.lr = 0x821811F4;
	sub_821B71D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x821b71d8
	ctx.lr = 0x82181208;
	sub_821B71D8(ctx, base);
	// subf r29,r29,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// subf r3,r26,r28
	ctx.r3.s64 = ctx.r28.s64 - ctx.r26.s64;
	// bl 0x821b71d8
	ctx.lr = 0x82181220;
	sub_821B71D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b71d8
	ctx.lr = 0x82181234;
	sub_821B71D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8218123C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b71d8
	ctx.lr = 0x82181248;
	sub_821B71D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821811A8) {
	__imp__sub_821811A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82181258;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821811a8
	ctx.lr = 0x82181294;
	sub_821811A8(ctx, base);
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821812e8
	if (!ctx.cr6.lt) goto loc_821812E8;
loc_821812A0:
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821812B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821812e8
	if (!ctx.cr6.eq) goto loc_821812E8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821812D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821812e8
	if (!ctx.cr6.eq) goto loc_821812E8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821812a0
	if (ctx.cr6.lt) goto loc_821812A0;
loc_821812E8:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82181334
	if (!ctx.cr6.lt) goto loc_82181334;
loc_821812F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82181300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82181334
	if (!ctx.cr6.eq) goto loc_82181334;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8218131C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82181334
	if (!ctx.cr6.eq) goto loc_82181334;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821812f0
	if (ctx.cr6.lt) goto loc_821812F0;
loc_82181334:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_8218133C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x821813b0
	if (!ctx.cr6.lt) goto loc_821813B0;
loc_82181344:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82181354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821813a4
	if (!ctx.cr6.eq) goto loc_821813A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82181370;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821813b0
	if (!ctx.cr6.eq) goto loc_821813B0;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821813a4
	if (ctx.cr6.eq) goto loc_821813A4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// std r9,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r9.u64);
loc_821813A4:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82181344
	if (ctx.cr6.lt) goto loc_82181344;
loc_821813B0:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8218142c
	if (!ctx.cr6.gt) goto loc_8218142C;
	// addi r30,r27,-8
	ctx.r30.s64 = ctx.r27.s64 + -8;
loc_821813BC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821813CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82181418
	if (!ctx.cr6.eq) goto loc_82181418;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821813E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82181428
	if (!ctx.cr6.eq) goto loc_82181428;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82181418
	if (ctx.cr6.eq) goto loc_82181418;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
loc_82181418:
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821813bc
	if (ctx.cr6.lt) goto loc_821813BC;
loc_82181428:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8218142C:
	// bne cr6,0x82181498
	if (!ctx.cr6.eq) goto loc_82181498;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82181518
	if (ctx.cr6.eq) goto loc_82181518;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82181460
	if (ctx.cr6.eq) goto loc_82181460;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82181460
	if (ctx.cr6.eq) goto loc_82181460;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
loc_82181460:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218133c
	if (ctx.cr6.eq) goto loc_8218133C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// std r8,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r8.u64);
	// b 0x8218133c
	goto loc_8218133C;
loc_82181498:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-8
	ctx.r27.s64 = ctx.r27.s64 + -8;
	// bne cr6,0x821814f0
	if (!ctx.cr6.eq) goto loc_821814F0;
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821814c8
	if (ctx.cr6.eq) goto loc_821814C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r27.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r9.u32);
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
loc_821814C8:
	// addi r28,r28,-8
	ctx.r28.s64 = ctx.r28.s64 + -8;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8218133c
	if (ctx.cr6.eq) goto loc_8218133C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// std r10,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r10.u64);
	// b 0x8218133c
	goto loc_8218133C;
loc_821814F0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82181510
	if (ctx.cr6.eq) goto loc_82181510;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// std r10,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r10.u64);
loc_82181510:
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// b 0x8218133c
	goto loc_8218133C;
loc_82181518:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181250) {
	__imp__sub_82181250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218152C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218152C) {
	__imp__sub_8218152C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mulli r10,r3,20508
	ctx.r10.s64 = ctx.r3.s64 * 20508;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181530) {
	__imp__sub_82181530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181544) {
	__imp__sub_82181544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181548) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r10,-29352
	ctx.r11.s64 = ctx.r10.s64 + -29352;
	// mulli r9,r3,20508
	ctx.r9.s64 = ctx.r3.s64 * 20508;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181548) {
	__imp__sub_82181548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181570) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mulli r10,r3,20508
	ctx.r10.s64 = ctx.r3.s64 * 20508;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// li r5,20508
	ctx.r5.s64 = 20508;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x821815A0;
	sub_823DE090(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82272e78
	ctx.lr = 0x821815AC;
	sub_82272E78(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
loc_821815B4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r11,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r11.u16);
	// blt cr6,0x821815b4
	if (ctx.cr6.lt) goto loc_821815B4;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821815f0
	if (!ctx.cr6.gt) goto loc_821815F0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821815F0:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
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
}

PPC_WEAK_FUNC(sub_82181570) {
	__imp__sub_82181570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218161C) {
	__imp__sub_8218161C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,-2072
	ctx.r31.s64 = ctx.r11.s64 + -2072;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820eaf18
	ctx.lr = 0x82181690;
	sub_820EAF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x820eaf18
	ctx.lr = 0x821816A8;
	sub_820EAF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x820eaf18
	ctx.lr = 0x821816C0;
	sub_820EAF18(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x820eaf18
	ctx.lr = 0x821816D8;
	sub_820EAF18(ctx, base);
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

PPC_WEAK_FUNC(sub_82181620) {
	__imp__sub_82181620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821816EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821816EC) {
	__imp__sub_821816EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821816F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821816F8;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x82181620
	ctx.lr = 0x82181724;
	sub_82181620(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821817b4
	if (ctx.cr6.eq) goto loc_821817B4;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfsx f12,r7,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fadds f4,f9,f31
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f31.f64));
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821816f0
	ctx.lr = 0x821817B4;
	sub_821816F0(ctx, base);
loc_821817B4:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218183c
	if (ctx.cr6.eq) goto loc_8218183C;
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r7,r9,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfsx f12,r7,r8
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// lfs f6,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f6.f64 = double(temp.f32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// fsubs f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821816f0
	ctx.lr = 0x8218183C;
	sub_821816F0(ctx, base);
loc_8218183C:
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

PPC_WEAK_FUNC(sub_821816F0) {
	__imp__sub_821816F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218184C) {
	__imp__sub_8218184C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181850) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mulli r10,r3,20508
	ctx.r10.s64 = ctx.r3.s64 * 20508;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r3,48
	ctx.r7.s64 = ctx.r3.s64 + 48;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821816f0
	ctx.lr = 0x821818B8;
	sub_821816F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181850) {
	__imp__sub_82181850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821818C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mulli r10,r3,20508
	ctx.r10.s64 = ctx.r3.s64 * 20508;
	// addi r11,r11,-29352
	ctx.r11.s64 = ctx.r11.s64 + -29352;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821818f0
	if (!ctx.cr6.eq) goto loc_821818F0;
loc_821818E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821818F0:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// stfs f13,-12(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82181920
	if (!ctx.cr6.gt) goto loc_82181920;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82181920:
	// rlwinm r9,r7,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7652(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7652);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821818e8
	if (!ctx.cr6.gt) goto loc_821818E8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lhz r8,34(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// sth r8,24(r10)
	PPC_STORE_U16(ctx.r10.u32 + 24, ctx.r8.u16);
	// sth r7,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r7.u16);
	// lfsx f13,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821818C8) {
	__imp__sub_821818C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218197C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218197C) {
	__imp__sub_8218197C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181980) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r11,r5,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFFC;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-29352
	ctx.r10.s64 = ctx.r10.s64 + -29352;
	// mulli r11,r3,20508
	ctx.r11.s64 = ctx.r3.s64 * 20508;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,23040
	ctx.r10.s64 = ctx.r9.s64 + 23040;
	// addi r6,r10,196
	ctx.r6.s64 = ctx.r10.s64 + 196;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r3,r4,r10
	ctx.r3.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bgt cr6,0x82181a04
	if (ctx.cr6.gt) goto loc_82181A04;
loc_821819DC:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x821819dc
	if (!ctx.cr6.gt) goto loc_821819DC;
loc_82181A04:
	// sth r5,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r5.u16);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181980) {
	__imp__sub_82181980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181A1C) {
	__imp__sub_82181A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181A20) {
	__imp__sub_82181A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A28) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181a3c
	if (ctx.cr6.eq) goto loc_82181A3C;
	// b 0x822ff528
	sub_822FF528(ctx, base);
	return;
loc_82181A3C:
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// b 0x82272e78
	sub_82272E78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181A28) {
	__imp__sub_82181A28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181A44) {
	__imp__sub_82181A44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fsubs f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// fsel f1,f13,f13,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181A48) {
	__imp__sub_82181A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181A94) {
	__imp__sub_82181A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181A98) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x822d48f0
	ctx.lr = 0x82181AB4;
	sub_822D48F0(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsel f1,f13,f13,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
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

PPC_WEAK_FUNC(sub_82181A98) {
	__imp__sub_82181A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181ADC) {
	__imp__sub_82181ADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82181b8c
	if (ctx.cr6.eq) goto loc_82181B8C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82181b8c
	if (ctx.cr6.eq) goto loc_82181B8C;
	// lfs f0,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,16376(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16376);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f11,f2
	ctx.f11.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// fsel f10,f11,f0,f2
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f0,f8,f12
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f13,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fmuls f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// blt cr6,0x82181b8c
	if (ctx.cr6.lt) goto loc_82181B8C;
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f13,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f6,f8,f12,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f1
	ctx.cr6.compare(ctx.f6.f64, ctx.f1.f64);
	// bgt cr6,0x82181b84
	if (ctx.cr6.gt) goto loc_82181B84;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82181B84:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_82181B8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181AE0) {
	__imp__sub_82181AE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181B94) {
	__imp__sub_82181B94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181B98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,20(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82181bb4
	if (!ctx.cr6.eq) goto loc_82181BB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82181BB4:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f5
	ctx.cr6.compare(ctx.f2.f64, ctx.f5.f64);
	// blt cr6,0x82181bf8
	if (ctx.cr6.lt) goto loc_82181BF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82181BF8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82181B98) {
	__imp__sub_82181B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181C00) {
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
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,20(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// and r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82181c44
	if (!ctx.cr6.eq) goto loc_82181C44;
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
loc_82181C44:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d4918
	ctx.lr = 0x82181C50;
	sub_822D4918(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82181c64
	if (ctx.cr6.lt) goto loc_82181C64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82181C64:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_82181C00) {
	__imp__sub_82181C00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181C7C) {
	__imp__sub_82181C7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82181C88;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,104(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82181d98
	if (ctx.cr6.eq) goto loc_82181D98;
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822d6b00
	ctx.lr = 0x82181CC8;
	sub_822D6B00(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// bl 0x822d6888
	ctx.lr = 0x82181CD8;
	sub_822D6888(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,80
	ctx.r3.s64 = ctx.r30.s64 + 80;
	// bl 0x822d6888
	ctx.lr = 0x82181CE8;
	sub_822D6888(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r7,100(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x822ff550
	ctx.lr = 0x82181D00;
	sub_822FF550(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181d98
	if (!ctx.cr6.eq) goto loc_82181D98;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f7,f6,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// fmadds f12,f7,f5,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f9.f64));
	// fmadds f11,f7,f4,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f8.f64));
	// fmadds f10,f3,f2,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f9,f3,f1,f12
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f8,f3,f0,f11
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x82181D74;
	sub_822D4B08(ctx, base);
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r9,r11,23040
	ctx.r9.s64 = ctx.r11.s64 + 23040;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// subf r7,r11,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r11.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// sth r6,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
loc_82181D98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181C80) {
	__imp__sub_82181C80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82181DA8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lfs f31,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822d6b00
	ctx.lr = 0x82181DD0;
	sub_822D6B00(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,100(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lhz r7,36(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 36);
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r30,64
	ctx.r4.s64 = ctx.r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278318
	ctx.lr = 0x82181DF8;
	sub_82278318(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82181e28
	if (!ctx.cr6.lt) goto loc_82181E28;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r9,r11,23040
	ctx.r9.s64 = ctx.r11.s64 + 23040;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// subf r7,r11,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r11.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// sth r6,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r6.u16);
loc_82181E28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181DA0) {
	__imp__sub_82181DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181E34) {
	__imp__sub_82181E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82181E40;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,152(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 152);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// and r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82181f04
	if (ctx.cr6.eq) goto loc_82181F04;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821825d0
	ctx.lr = 0x82181E74;
	sub_821825D0(ctx, base);
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181f04
	if (ctx.cr6.eq) goto loc_82181F04;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// lfs f2,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lfs f1,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82279ee8
	ctx.lr = 0x82181E98;
	sub_82279EE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82181f04
	if (!ctx.cr6.eq) goto loc_82181F04;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d6b00
	ctx.lr = 0x82181EB0;
	sub_822D6B00(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lhz r7,36(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 36);
	// addi r5,r31,128
	ctx.r5.s64 = ctx.r31.s64 + 128;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82278318
	ctx.lr = 0x82181ED4;
	sub_82278318(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82181f04
	if (!ctx.cr6.lt) goto loc_82181F04;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r10,92
	ctx.r10.s64 = 92;
	// addi r9,r11,23040
	ctx.r9.s64 = ctx.r11.s64 + 23040;
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r11,176(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 176);
	// stw r8,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r8.u32);
	// subf r7,r11,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r11.s64;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// sth r6,32(r30)
	PPC_STORE_U16(ctx.r30.u32 + 32, ctx.r6.u16);
loc_82181F04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181E38) {
	__imp__sub_82181E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82181F18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82181f58
	if (ctx.cr6.eq) goto loc_82181F58;
	// lwz r11,284(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82181f58
	if (ctx.cr6.eq) goto loc_82181F58;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822593c0
	ctx.lr = 0x82181F50;
	sub_822593C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82181F58:
	// lhz r5,38(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82181f80
	if (ctx.cr6.eq) goto loc_82181F80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82258f20
	ctx.lr = 0x82181F78;
	sub_82258F20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82181F80:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82181f94
	if (ctx.cr6.eq) goto loc_82181F94;
	// bl 0x822ff528
	ctx.lr = 0x82181F90;
	sub_822FF528(ctx, base);
	// b 0x82181f9c
	goto loc_82181F9C;
loc_82181F94:
	// lhz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// bl 0x82272e78
	ctx.lr = 0x82181F9C;
	sub_82272E78(ctx, base);
loc_82181F9C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82181fc8
	if (ctx.cr6.eq) goto loc_82181FC8;
	// bl 0x82259098
	ctx.lr = 0x82181FC0;
	sub_82259098(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82181FC8:
	// bl 0x82258da8
	ctx.lr = 0x82181FCC;
	sub_82258DA8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181F10) {
	__imp__sub_82181F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82181FD4) {
	__imp__sub_82181FD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82181FD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82181FE0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r11,r4,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-29352
	ctx.r9.s64 = ctx.r9.s64 + -29352;
	// mulli r8,r3,20508
	ctx.r8.s64 = ctx.r3.s64 * 20508;
	// add r27,r8,r9
	ctx.r27.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r25,r11,28
	ctx.r25.s64 = ctx.r11.s64 + 28;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// lhz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lhz r14,32(r11)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// li r22,0
	ctx.r22.s64 = 0;
	// clrlwi r10,r3,31
	ctx.r10.u64 = ctx.r3.u32 & 0x1;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82182178
	if (ctx.cr6.eq) goto loc_82182178;
	// lis r9,-31938
	ctx.r9.s64 = -2093088768;
	// rlwinm r18,r10,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,23040
	ctx.r10.s64 = ctx.r9.s64 + 23040;
	// addi r8,r14,1
	ctx.r8.s64 = ctx.r14.s64 + 1;
	// rlwinm r20,r3,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r17,r10,172
	ctx.r17.s64 = ctx.r10.s64 + 172;
	// addi r19,r10,196
	ctx.r19.s64 = ctx.r10.s64 + 196;
	// rlwinm r21,r8,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_8218205C:
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// lwzx r9,r18,r17
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r17.u32);
	// lwzx r10,r20,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r19.u32);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r30,92
	ctx.r11.s64 = ctx.r30.s64 * 92;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r24,r11,r9
	ctx.r24.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfsx f0,r21,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x821820c0
	if (!ctx.cr6.gt) goto loc_821820C0;
	// lhz r3,8(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82182118
	if (!ctx.cr6.eq) goto loc_82182118;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821818c8
	ctx.lr = 0x821820AC;
	sub_821818C8(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82182164
	if (ctx.cr6.eq) goto loc_82182164;
	// sth r3,8(r25)
	PPC_STORE_U16(ctx.r25.u32 + 8, ctx.r3.u16);
	// b 0x82182104
	goto loc_82182104;
loc_821820C0:
	// addi r11,r14,3
	ctx.r11.s64 = ctx.r14.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x82182164
	if (!ctx.cr6.lt) goto loc_82182164;
	// lhz r3,10(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82182118
	if (!ctx.cr6.eq) goto loc_82182118;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821818c8
	ctx.lr = 0x821820F4;
	sub_821818C8(ctx, base);
	// clrlwi r31,r3,16
	ctx.r31.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82182164
	if (ctx.cr6.eq) goto loc_82182164;
	// sth r3,10(r25)
	PPC_STORE_U16(ctx.r25.u32 + 10, ctx.r3.u16);
loc_82182104:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// sth r23,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r23.u16);
loc_82182118:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r29,2(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82181980
	ctx.lr = 0x8218212C;
	sub_82181980(ctx, base);
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,88(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 88);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r8,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r8.u32);
	// bne cr6,0x8218215c
	if (!ctx.cr6.eq) goto loc_8218215C;
	// sth r29,16(r25)
	PPC_STORE_U16(ctx.r25.u32 + 16, ctx.r29.u16);
	// b 0x8218216c
	goto loc_8218216C;
loc_8218215C:
	// sth r29,2(r22)
	PPC_STORE_U16(ctx.r22.u32 + 2, ctx.r29.u16);
	// b 0x8218216c
	goto loc_8218216C;
loc_82182164:
	// lhz r29,2(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mr r22,r28
	ctx.r22.u64 = ctx.r28.u64;
loc_8218216C:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218205c
	if (!ctx.cr6.eq) goto loc_8218205C;
loc_82182178:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82181FD8) {
	__imp__sub_82181FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182180) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82182188;
	__savegprlr_27(ctx, base);
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,23040
	ctx.r27.s64 = ctx.r11.s64 + 23040;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r27,196
	ctx.r28.s64 = ctx.r27.s64 + 196;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r3,20508
	ctx.r11.s64 = ctx.r3.s64 * 20508;
	// lwzx r9,r29,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r8,-29352
	ctx.r9.s64 = ctx.r8.s64 + -29352;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821823d4
	if (ctx.cr6.eq) goto loc_821823D4;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// lhz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 44);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82182200
	if (!ctx.cr6.eq) goto loc_82182200;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r11.u16);
	// b 0x82182268
	goto loc_82182268;
loc_82182200:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r29,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// rotlwi r7,r11,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82182260
	if (ctx.cr6.eq) goto loc_82182260;
loc_8218223C:
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r6,r11,2
	ctx.r6.s64 = ctx.r11.s64 + 2;
	// rotlwi r11,r7,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218223c
	if (!ctx.cr6.eq) goto loc_8218223C;
loc_82182260:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
loc_82182268:
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821822e4
	if (!ctx.cr6.eq) goto loc_821822E4;
loc_82182274:
	// lhz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821822e4
	if (!ctx.cr6.eq) goto loc_821822E4;
	// lhz r11,10(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821822e4
	if (!ctx.cr6.eq) goto loc_821822E4;
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// stw r30,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821822e4
	if (ctx.cr6.eq) goto loc_821822E4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 24);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r8,6(r9)
	PPC_STORE_U16(ctx.r9.u32 + 6, ctx.r8.u16);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// sth r5,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r5.u16);
	// addi r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 + 28;
	// lhz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821822d0
	if (!ctx.cr6.eq) goto loc_821822D0;
	// sth r30,8(r9)
	PPC_STORE_U16(ctx.r9.u32 + 8, ctx.r30.u16);
	// b 0x821822d4
	goto loc_821822D4;
loc_821822D0:
	// sth r30,10(r9)
	PPC_STORE_U16(ctx.r9.u32 + 10, ctx.r30.u16);
loc_821822D4:
	// lhz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82182274
	if (ctx.cr6.eq) goto loc_82182274;
loc_821822E4:
	// rlwinm r3,r3,2,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// addi r11,r27,172
	ctx.r11.s64 = ctx.r27.s64 + 172;
	// mulli r10,r4,92
	ctx.r10.s64 = ctx.r4.s64 * 92;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_821822F8:
	// lhz r10,10(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 10);
	// lhz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r7,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// beq cr6,0x82182380
	if (ctx.cr6.eq) goto loc_82182380;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r29,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// lwz r7,88(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r11,-18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182380
	if (ctx.cr6.eq) goto loc_82182380;
loc_82182360:
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lhz r11,-18(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -18);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82182360
	if (!ctx.cr6.eq) goto loc_82182360;
loc_82182380:
	// lhz r11,6(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 6);
	// stw r10,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821823a8
	if (ctx.cr6.eq) goto loc_821823A8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// b 0x821822f8
	goto loc_821822F8;
loc_821823A8:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,188
	ctx.r9.s64 = ctx.r27.s64 + 188;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r3,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// clrlwi r6,r7,16
	ctx.r6.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r6,r6,0,30,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
loc_821823D4:
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182180) {
	__imp__sub_82182180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821823D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821823E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// rlwinm r21,r3,2,29,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// addi r23,r11,23040
	ctx.r23.s64 = ctx.r11.s64 + 23040;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r7,r23,172
	ctx.r7.s64 = ctx.r23.s64 + 172;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mulli r9,r28,92
	ctx.r9.s64 = ctx.r28.s64 * 92;
	// lwzx r10,r21,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r7.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// addi r4,r23,196
	ctx.r4.s64 = ctx.r23.s64 + 196;
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r8,-29352
	ctx.r8.s64 = ctx.r8.s64 + -29352;
	// mulli r7,r25,20508
	ctx.r7.s64 = ctx.r25.s64 * 20508;
	// lwzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lwz r27,88(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// add r10,r28,r6
	ctx.r10.u64 = ctx.r28.u64 + ctx.r6.u64;
	// add r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r30,12
	ctx.r24.s64 = ctx.r30.s64 + 12;
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82182444:
	// lfs f12,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f11,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82182480:
	// rlwinm r11,r31,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// or r7,r27,r8
	ctx.r7.u64 = ctx.r27.u64 | ctx.r8.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lfsx f13,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821824d8
	if (!ctx.cr6.gt) goto loc_821824D8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x8218250c
	if (ctx.cr6.eq) goto loc_8218250C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82182480
	goto loc_82182480;
loc_821824D8:
	// lfsx f13,r10,r22
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82182500
	if (!ctx.cr6.lt) goto loc_82182500;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r11,10(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x8218250c
	if (ctx.cr6.eq) goto loc_8218250C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82182480
	goto loc_82182480;
loc_82182500:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82182530
	if (ctx.cr6.eq) goto loc_82182530;
loc_8218250C:
	// lhz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182558
	if (ctx.cr6.eq) goto loc_82182558;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82182568
	if (ctx.cr6.eq) goto loc_82182568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82182180
	ctx.lr = 0x8218252C;
	sub_82182180(ctx, base);
	// b 0x82182444
	goto loc_82182444;
loc_82182530:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// lfs f12,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// lfs f11,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82182558:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82181980
	ctx.lr = 0x82182568;
	sub_82181980(ctx, base);
loc_82182568:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f13,8(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f12,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// lfs f11,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 16, temp.u32);
	// bl 0x82181fd8
	ctx.lr = 0x8218259C;
	sub_82181FD8(ctx, base);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r23,188
	ctx.r9.s64 = ctx.r23.s64 + 188;
	// add r8,r28,r11
	ctx.r8.u64 = ctx.r28.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r21,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// ori r6,r7,4
	ctx.r6.u64 = ctx.r7.u64 | 4;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821823D8) {
	__imp__sub_821823D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821825CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821825CC) {
	__imp__sub_821825CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821825D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,16412
	ctx.r11.s64 = ctx.r11.s64 + 16412;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821825D0) {
	__imp__sub_821825D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821825E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821825E4) {
	__imp__sub_821825E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821825E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// addi r9,r11,168
	ctx.r9.s64 = ctx.r11.s64 + 168;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821825E8) {
	__imp__sub_821825E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// addi r9,r11,180
	ctx.r9.s64 = ctx.r11.s64 + 180;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82182600) {
	__imp__sub_82182600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// addi r10,r11,23040
	ctx.r10.s64 = ctx.r11.s64 + 23040;
	// lwz r3,180(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82182618) {
	__imp__sub_82182618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// addi r10,r11,23040
	ctx.r10.s64 = ctx.r11.s64 + 23040;
	// lhz r3,168(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 168);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82182628) {
	__imp__sub_82182628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182638) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82182640;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// li r26,2
	ctx.r26.s64 = 2;
	// addi r29,r11,168
	ctx.r29.s64 = ctx.r11.s64 + 168;
	// addi r30,r11,188
	ctx.r30.s64 = ctx.r11.s64 + 188;
loc_8218265C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8218266C;
	sub_822E40F0(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218270c
	if (ctx.cr6.eq) goto loc_8218270C;
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r5,-8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182688;
	sub_822E40F0(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e40f0
	ctx.lr = 0x821826A4;
	sub_822E40F0(ctx, base);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218270c
	if (ctx.cr6.eq) goto loc_8218270C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821826B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r8,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r8,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r8.u8);
	// bl 0x822e40f0
	ctx.lr = 0x821826DC;
	sub_822E40F0(ctx, base);
	// lbz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821826f8
	if (ctx.cr6.eq) goto loc_821826F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82257900
	ctx.lr = 0x821826F8;
	sub_82257900(ctx, base);
loc_821826F8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821826b8
	if (ctx.cr6.lt) goto loc_821826B8;
loc_8218270C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// bne 0x8218265c
	if (!ctx.cr0.eq) goto loc_8218265C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182638) {
	__imp__sub_82182638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182724) {
	__imp__sub_82182724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82182730;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r24,r11,23040
	ctx.r24.s64 = ctx.r11.s64 + 23040;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r27,r24,168
	ctx.r27.s64 = ctx.r24.s64 + 168;
loc_82182750:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x82182760;
	sub_822E4480(ctx, base);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218284c
	if (ctx.cr6.eq) goto loc_8218284C;
	// addi r11,r24,188
	ctx.r11.s64 = ctx.r24.s64 + 188;
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r25,r11
	ctx.r31.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,-8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// bl 0x822e4480
	ctx.lr = 0x82182784;
	sub_822E4480(ctx, base);
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e4480
	ctx.lr = 0x821827A0;
	sub_822E4480(ctx, base);
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8218284c
	if (ctx.cr6.eq) goto loc_8218284C;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_821827B8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e4480
	ctx.lr = 0x821827C8;
	sub_822E4480(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182808
	if (ctx.cr6.eq) goto loc_82182808;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82257940
	ctx.lr = 0x821827E0;
	sub_82257940(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r24,172
	ctx.r10.s64 = ctx.r24.s64 + 172;
	// li r5,1
	ctx.r5.s64 = 1;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// bl 0x82181f10
	ctx.lr = 0x82182804;
	sub_82181F10(ctx, base);
	// b 0x82182810
	goto loc_82182810;
loc_82182808:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwx r23,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r23.u32);
loc_82182810:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lhz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82182834
	if (!ctx.cr6.eq) goto loc_82182834;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8217f070
	ctx.lr = 0x82182834;
	sub_8217F070(ctx, base);
loc_82182834:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,92
	ctx.r29.s64 = ctx.r29.s64 + 92;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821827b8
	if (ctx.cr6.lt) goto loc_821827B8;
loc_8218284C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// cmplwi cr6,r22,2
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 2, ctx.xer);
	// blt cr6,0x82182750
	if (ctx.cr6.lt) goto loc_82182750;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182728) {
	__imp__sub_82182728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182868) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822e40f0
	sub_822E40F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182868) {
	__imp__sub_82182868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182878) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x822e4480
	sub_822E4480(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182878) {
	__imp__sub_82182878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182888) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821828b8
	if (!ctx.cr6.gt) goto loc_821828B8;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
loc_8218289C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821828c0
	if (ctx.cr6.eq) goto loc_821828C0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8218289c
	if (ctx.cr6.lt) goto loc_8218289C;
loc_821828B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821828C0:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82182888) {
	__imp__sub_82182888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821828CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821828CC) {
	__imp__sub_821828CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821828D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r5,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821828D0) {
	__imp__sub_821828D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182900) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e42f8
	ctx.lr = 0x82182928;
	sub_822E42F8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8218293C;
	sub_822E40F0(ctx, base);
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

PPC_WEAK_FUNC(sub_82182900) {
	__imp__sub_82182900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182954) {
	__imp__sub_82182954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182958) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e42f8
	ctx.lr = 0x82182980;
	sub_822E42F8(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182994;
	sub_822E40F0(ctx, base);
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

PPC_WEAK_FUNC(sub_82182958) {
	__imp__sub_82182958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821829AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821829AC) {
	__imp__sub_821829AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821829B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,10584
	ctx.r4.s64 = ctx.r11.s64 + 10584;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x822db160
	sub_822DB160(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821829B0) {
	__imp__sub_821829B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821829C8) {
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
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,10584
	ctx.r4.s64 = ctx.r11.s64 + 10584;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x822db160
	ctx.lr = 0x821829F4;
	sub_822DB160(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// bl 0x822e42f8
	ctx.lr = 0x82182A04;
	sub_822E42F8(ctx, base);
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

PPC_WEAK_FUNC(sub_821829C8) {
	__imp__sub_821829C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82182A20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x822e4998
	ctx.lr = 0x82182A38;
	sub_822E4998(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82182aac
	if (ctx.cr6.eq) goto loc_82182AAC;
loc_82182A48:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82182A58;
	sub_822E4480(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82198070
	ctx.lr = 0x82182A60;
	sub_82198070(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r9,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// bl 0x822e4998
	ctx.lr = 0x82182A9C;
	sub_822E4998(ctx, base);
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82182a48
	if (!ctx.cr6.eq) goto loc_82182A48;
loc_82182AAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182A18) {
	__imp__sub_82182A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182AB4) {
	__imp__sub_82182AB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182AB8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// lwz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82182b38
	if (ctx.cr6.eq) goto loc_82182B38;
loc_82182ACC:
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r10,r10,22
	ctx.r10.u64 = ctx.r10.u32 & 0x3FF;
	// addi r9,r10,430
	ctx.r9.s64 = ctx.r10.s64 + 430;
	// lwz r6,736(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// rotlwi r7,r5,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// ble cr6,0x82182b20
	if (!ctx.cr6.gt) goto loc_82182B20;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
loc_82182B04:
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82182b40
	if (ctx.cr6.eq) goto loc_82182B40;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82182b04
	if (ctx.cr6.lt) goto loc_82182B04;
loc_82182B20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82182B24:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82182acc
	if (!ctx.cr6.eq) goto loc_82182ACC;
loc_82182B38:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82182B40:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r10,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// b 0x82182b24
	goto loc_82182B24;
}

PPC_WEAK_FUNC(sub_82182AB8) {
	__imp__sub_82182AB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182B4C) {
	__imp__sub_82182B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182B50) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,384
	ctx.r4.s64 = 384;
	// bl 0x822e4480
	ctx.lr = 0x82182B7C;
	sub_822E4480(ctx, base);
	// addis r5,r31,6
	ctx.r5.s64 = ctx.r31.s64 + 393216;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r5,r5,-22016
	ctx.r5.s64 = ctx.r5.s64 + -22016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4480
	ctx.lr = 0x82182B90;
	sub_822E4480(ctx, base);
	// li r9,96
	ctx.r9.s64 = 96;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addis r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 393216;
	// addi r10,r10,-25088
	ctx.r10.s64 = ctx.r10.s64 + -25088;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82182BA4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,7168(r10)
	ea = 7168 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82182ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182BA4;
	// li r10,64
	ctx.r10.s64 = 64;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// addi r11,r11,-22076
	ctx.r11.s64 = ctx.r11.s64 + -22076;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82182BC4:
	// stbu r10,64(r11)
	ea = 64 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82182bc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182BC4;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82182B50) {
	__imp__sub_82182B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182BE4) {
	__imp__sub_82182BE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182BE8) {
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
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addis r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 393216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25088
	ctx.r11.s64 = ctx.r11.s64 + -25088;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82182C1C:
	// lwzu r9,7168(r11)
	ea = 7168 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82182c1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182C1C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,384
	ctx.r4.s64 = 384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182C38;
	sub_822E40F0(ctx, base);
	// addis r5,r31,6
	ctx.r5.s64 = ctx.r31.s64 + 393216;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r5,r5,-22016
	ctx.r5.s64 = ctx.r5.s64 + -22016;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182C4C;
	sub_822E40F0(ctx, base);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
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

PPC_WEAK_FUNC(sub_82182BE8) {
	__imp__sub_82182BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182C64) {
	__imp__sub_82182C64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82182C70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,848(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82182d5c
	if (ctx.cr6.eq) goto loc_82182D5C;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82182C94:
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addi r9,r11,430
	ctx.r9.s64 = ctx.r11.s64 + 430;
	// lwz r10,736(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 736);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r30.u32);
	// rotlwi r11,r7,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82182d4c
	if (ctx.cr6.eq) goto loc_82182D4C;
loc_82182CC4:
	// lwz r10,740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lhz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mulli r11,r8,252
	ctx.r11.s64 = ctx.r8.s64 * 252;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,176(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x82182d28
	if (!ctx.cr6.eq) goto loc_82182D28;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82182d28
	if (ctx.cr6.eq) goto loc_82182D28;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182D18;
	sub_822E40F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82257900
	ctx.lr = 0x82182D24;
	sub_82257900(ctx, base);
	// b 0x82182d3c
	goto loc_82182D3C;
loc_82182D28:
	// stb r24,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r24.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82182D3C;
	sub_822E40F0(ctx, base);
loc_82182D3C:
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82182cc4
	if (!ctx.cr6.eq) goto loc_82182CC4;
loc_82182D4C:
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82182c94
	if (!ctx.cr6.eq) goto loc_82182C94;
loc_82182D5C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182C68) {
	__imp__sub_82182C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182D64) {
	__imp__sub_82182D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x82182D70;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,848(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 848);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,852(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 852);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82182f2c
	if (ctx.cr6.eq) goto loc_82182F2C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,4515
	ctx.r8.s64 = 295895040;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r28,r8,411
	ctx.r28.u64 = ctx.r8.u64 | 411;
	// addi r23,r10,22216
	ctx.r23.s64 = ctx.r10.s64 + 22216;
	// addi r20,r9,16672
	ctx.r20.s64 = ctx.r9.s64 + 16672;
	// addi r19,r11,16440
	ctx.r19.s64 = ctx.r11.s64 + 16440;
loc_82182DAC:
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addi r9,r11,430
	ctx.r9.s64 = ctx.r11.s64 + 430;
	// lwz r10,736(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 736);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r26
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r26.u32);
	// rotlwi r11,r7,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82182f1c
	if (ctx.cr6.eq) goto loc_82182F1C;
loc_82182DDC:
	// lwz r10,740(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 740);
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lbz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lhz r25,4(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// mulli r11,r8,252
	ctx.r11.s64 = ctx.r8.s64 * 252;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822e4480
	ctx.lr = 0x82182E10;
	sub_822E4480(ctx, base);
	// lbz r7,176(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 176);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r7,7
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 7, ctx.xer);
	// bne cr6,0x82182edc
	if (!ctx.cr6.eq) goto loc_82182EDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82182edc
	if (ctx.cr6.eq) goto loc_82182EDC;
	// lbz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82182ee8
	if (ctx.cr6.eq) goto loc_82182EE8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82257940
	ctx.lr = 0x82182E48;
	sub_82257940(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lbz r7,177(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 177);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x82182e74
	if (!ctx.cr6.eq) goto loc_82182E74;
	// lwz r11,188(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822593c0
	ctx.lr = 0x82182E70;
	sub_822593C0(ctx, base);
	// b 0x82182eec
	goto loc_82182EEC;
loc_82182E74:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r6,r23,86
	ctx.r6.s64 = ctx.r23.s64 + 86;
	// lhz r8,22(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// mulli r11,r11,296
	ctx.r11.s64 = ctx.r11.s64 * 296;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,188(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulhwu r10,r11,r28
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r28.u32)) >> 32;
	// subf r4,r10,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r4,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r10,r3,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// mulli r8,r10,479
	ctx.r8.s64 = ctx.r10.s64 * 479;
	// subf r4,r8,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r3,r4,2,14,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFFC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lhzx r11,r3,r6
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// srawi r8,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 16;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822593c0
	ctx.lr = 0x82182ED8;
	sub_822593C0(ctx, base);
	// b 0x82182eec
	goto loc_82182EEC;
loc_82182EDC:
	// lbz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82182eec
	if (ctx.cr6.eq) goto loc_82182EEC;
loc_82182EE8:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82182EEC:
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82182f0c
	if (ctx.cr6.eq) goto loc_82182F0C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bne cr6,0x82182f08
	if (!ctx.cr6.eq) goto loc_82182F08;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_82182F08:
	// bl 0x8230d720
	ctx.lr = 0x82182F0C;
	sub_8230D720(ctx, base);
loc_82182F0C:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82182ddc
	if (!ctx.cr6.eq) goto loc_82182DDC;
loc_82182F1C:
	// lwz r11,852(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 852);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82182dac
	if (!ctx.cr6.eq) goto loc_82182DAC;
loc_82182F2C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182D68) {
	__imp__sub_82182D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82182F34) {
	__imp__sub_82182F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82182F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82182F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r31,r11,16384
	ctx.r31.u64 = ctx.r11.u64 | 16384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82182F64;
	sub_822E4480(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x822e4480
	ctx.lr = 0x82182F78;
	sub_822E4480(ctx, base);
	// addis r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// bl 0x822e4480
	ctx.lr = 0x82182F8C;
	sub_822E4480(ctx, base);
	// addis r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-30720
	ctx.r5.s64 = ctx.r5.s64 + -30720;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x822e4480
	ctx.lr = 0x82182FA0;
	sub_822E4480(ctx, base);
	// addis r5,r30,5
	ctx.r5.s64 = ctx.r30.s64 + 327680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-30720
	ctx.r5.s64 = ctx.r5.s64 + -30720;
	// li r4,8160
	ctx.r4.s64 = 8160;
	// bl 0x822e4480
	ctx.lr = 0x82182FB4;
	sub_822E4480(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addis r5,r30,5
	ctx.r5.s64 = ctx.r30.s64 + 327680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-22528
	ctx.r5.s64 = ctx.r5.s64 + -22528;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
	// bl 0x822e4480
	ctx.lr = 0x82182FCC;
	sub_822E4480(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182b50
	ctx.lr = 0x82182FD8;
	sub_82182B50(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,14848
	ctx.r5.s64 = ctx.r5.s64 + 14848;
	// li r4,8224
	ctx.r4.s64 = 8224;
	// bl 0x822e4480
	ctx.lr = 0x82182FEC;
	sub_822E4480(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,23168
	ctx.r5.s64 = ctx.r5.s64 + 23168;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822e4480
	ctx.lr = 0x82183000;
	sub_822E4480(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r5,r5,27264
	ctx.r5.s64 = ctx.r5.s64 + 27264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4480
	ctx.lr = 0x82183014;
	sub_822E4480(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82182F38) {
	__imp__sub_82182F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8218301C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8218301C) {
	__imp__sub_8218301C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82183020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82183028;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r31,r11,16384
	ctx.r31.u64 = ctx.r11.u64 | 16384;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x8218304C;
	sub_822E40F0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x822e40f0
	ctx.lr = 0x82183060;
	sub_822E40F0(ctx, base);
	// addis r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-32768
	ctx.r5.s64 = ctx.r5.s64 + -32768;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// bl 0x822e40f0
	ctx.lr = 0x82183074;
	sub_822E40F0(ctx, base);
	// addis r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 262144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-30720
	ctx.r5.s64 = ctx.r5.s64 + -30720;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// bl 0x822e40f0
	ctx.lr = 0x82183088;
	sub_822E40F0(ctx, base);
	// addis r5,r30,5
	ctx.r5.s64 = ctx.r30.s64 + 327680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-30720
	ctx.r5.s64 = ctx.r5.s64 + -30720;
	// li r4,8160
	ctx.r4.s64 = 8160;
	// bl 0x822e40f0
	ctx.lr = 0x8218309C;
	sub_822E40F0(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addis r5,r30,5
	ctx.r5.s64 = ctx.r30.s64 + 327680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,-22528
	ctx.r5.s64 = ctx.r5.s64 + -22528;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
	// bl 0x822e40f0
	ctx.lr = 0x821830B4;
	sub_822E40F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82182be8
	ctx.lr = 0x821830C0;
	sub_82182BE8(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,14848
	ctx.r5.s64 = ctx.r5.s64 + 14848;
	// li r4,8224
	ctx.r4.s64 = 8224;
	// bl 0x822e40f0
	ctx.lr = 0x821830D4;
	sub_822E40F0(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r5,23168
	ctx.r5.s64 = ctx.r5.s64 + 23168;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// bl 0x822e40f0
	ctx.lr = 0x821830E8;
	sub_822E40F0(ctx, base);
	// addis r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 1048576;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// addi r5,r5,27264
	ctx.r5.s64 = ctx.r5.s64 + 27264;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e40f0
	ctx.lr = 0x821830FC;
	sub_822E40F0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82183020) {
	__imp__sub_82183020(ctx, base);
}

