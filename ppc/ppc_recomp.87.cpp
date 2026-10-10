#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82348FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82348FD8;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x821ff758
	ctx.lr = 0x82348FF4;
	sub_821FF758(ctx, base);
	// lfs f13,236(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,240(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r30,r27,232
	ctx.r30.s64 = ctx.r27.s64 + 232;
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,232(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f29,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lwz r11,13356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13356);
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f30,f2
	ctx.f30.f64 = double(float(sqrt(ctx.f2.f64)));
	// ble cr6,0x82349050
	if (!ctx.cr6.gt) goto loc_82349050;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x8234969c
	if (ctx.cr6.gt) goto loc_8234969C;
loc_82349050:
	// lis r25,-32032
	ctx.r25.s64 = -2099249152;
	// lwz r31,276(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 276);
	// lwz r11,-5920(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5920);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82349264
	if (ctx.cr6.eq) goto loc_82349264;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r27,244
	ctx.r3.s64 = ctx.r27.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x8234907C;
	sub_822DA518(ctx, base);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r11,-12
	ctx.r29.s64 = ctx.r11.s64 + -12;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r26,r11,-2072
	ctx.r26.s64 = ctx.r11.s64 + -2072;
	// lfs f31,7324(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f31.f64 = double(temp.f32);
loc_82349098:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfsu f0,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f4,f7
	ctx.f4.f64 = ctx.f7.f64;
	// fadds f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f0,f9,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f2,f8,f11
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f1,f7,f10
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f13,f8,f11
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x8234910C;
	sub_821F2D08(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82349098
	if (!ctx.cr0.eq) goto loc_82349098;
	// lfs f0,820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,816
	ctx.r11.s64 = ctx.r31.s64 + 816;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f29
	ctx.cr6.compare(ctx.f9.f64, ctx.f29.f64);
	// ble cr6,0x823491a4
	if (!ctx.cr6.gt) goto loc_823491A4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82349150
	if (!ctx.cr6.eq) goto loc_82349150;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r10,-2152
	ctx.r29.s64 = ctx.r10.s64 + -2152;
	// b 0x82349158
	goto loc_82349158;
loc_82349150:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r10,-2296
	ctx.r29.s64 = ctx.r10.s64 + -2296;
loc_82349158:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82349184;
	sub_821F2D08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,27440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f35e0
	ctx.lr = 0x823491A4;
	sub_821F35E0(ctx, base);
loc_823491A4:
	// lfs f0,308(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r11,-2232
	ctx.r5.s64 = ctx.r11.s64 + -2232;
	// lfs f10,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f7,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x823491EC;
	sub_821F2D08(ctx, base);
	// lfs f5,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmadds f3,f5,f31,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f4.f64));
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f3,80(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f31,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f2.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r10,-2280
	ctx.r5.s64 = ctx.r10.s64 + -2280;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f31,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2d08
	ctx.lr = 0x82349234;
	sub_821F2D08(ctx, base);
	// lhz r11,784(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349264
	if (ctx.cr6.eq) goto loc_82349264;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-392
	ctx.r4.s64 = ctx.r11.s64 + -392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f2d08
	ctx.lr = 0x82349264;
	sub_821F2D08(ctx, base);
loc_82349264:
	// lwz r11,-5920(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -5920);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bgt cr6,0x8234969c
	if (ctx.cr6.gt) goto loc_8234969C;
	// bl 0x821ff2d8
	ctx.lr = 0x82349278;
	sub_821FF2D8(ctx, base);
	// fmuls f12,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f11,216(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,208(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,212(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,-11988(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11988);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r8,-12020
	ctx.r3.s64 = ctx.r8.s64 + -12020;
	// lfs f13,13904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,9176(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9176);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f30,f31,f13
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fsubs f8,f11,f30
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f7,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f4
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f1,f7,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmuls f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x823492FC;
	sub_822E84F0(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r29,r11,-2056
	ctx.r29.s64 = ctx.r11.s64 + -2056;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821fe7d8
	ctx.lr = 0x82349318;
	sub_821FE7D8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f30
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lfs f9,732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f11,f29
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f9,f29
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// lfs f8,332(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lfs f7,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r7,-12064
	ctx.r3.s64 = ctx.r7.s64 + -12064;
	// fmadds f1,f7,f7,f4
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fsqrts f1,f1
	ctx.f1.f64 = double(float(sqrt(ctx.f1.f64)));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82349374;
	sub_822E84F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fe7d8
	ctx.lr = 0x82349388;
	sub_821FE7D8(ctx, base);
	// lfs f0,820(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f9,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,240(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// fmuls f6,f12,f12
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lfs f2,236(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	ctx.f2.f64 = double(temp.f32);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// addi r3,r5,-12104
	ctx.r3.s64 = ctx.r5.s64 + -12104;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// fmadds f13,f5,f5,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f4.f64));
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f30
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f30.f64));
	// stfd f7,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f7.u64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// fsqrts f4,f13
	ctx.f4.f64 = double(float(sqrt(ctx.f13.f64)));
	// stfd f4,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x822e84f0
	ctx.lr = 0x82349400;
	sub_822E84F0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821fe7d8
	ctx.lr = 0x82349414;
	sub_821FE7D8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r4,-12136
	ctx.r3.s64 = ctx.r4.s64 + -12136;
	// lfs f1,360(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82349444;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82349458;
	sub_821FE7D8(ctx, base);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f2.f64 = double(temp.f32);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// lfs f1,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r3,-12168
	ctx.r3.s64 = ctx.r3.s64 + -12168;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x82349488;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x8234949C;
	sub_821FE7D8(ctx, base);
	// lfs f8,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823494c0
	if (ctx.cr6.eq) goto loc_823494C0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r5,r11,-12180
	ctx.r5.s64 = ctx.r11.s64 + -12180;
	// b 0x823494c8
	goto loc_823494C8;
loc_823494C0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-28736
	ctx.r5.s64 = ctx.r11.s64 + -28736;
loc_823494C8:
	// lfs f1,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// addi r3,r11,-12204
	ctx.r3.s64 = ctx.r11.s64 + -12204;
	// bl 0x822e84f0
	ctx.lr = 0x823494E0;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x823494F4;
	sub_821FE7D8(ctx, base);
	// lwz r10,764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82349544
	if (ctx.cr6.eq) goto loc_82349544;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,-12236
	ctx.r3.s64 = ctx.r11.s64 + -12236;
	// lfs f1,812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x82349530;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82349544;
	sub_821FE7D8(ctx, base);
loc_82349544:
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349594
	if (ctx.cr6.eq) goto loc_82349594;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-12268
	ctx.r3.s64 = ctx.r11.s64 + -12268;
	// lfs f1,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// lfs f2,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x82349580;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x82349594;
	sub_821FE7D8(ctx, base);
loc_82349594:
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r11,-12304
	ctx.r3.s64 = ctx.r11.s64 + -12304;
	// lfs f2,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x823495C4;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x823495D8;
	sub_821FE7D8(ctx, base);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f2,380(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f1,376(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// addi r3,r10,-12340
	ctx.r3.s64 = ctx.r10.s64 + -12340;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82349608;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x8234961C;
	sub_821FE7D8(ctx, base);
	// lfs f10,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f30.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f3,680(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f1,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,676(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 676);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r9,-12388
	ctx.r3.s64 = ctx.r9.s64 + -12388;
	// stfd f2,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// stfd f3,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x82349658;
	sub_822E84F0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x8234966C;
	sub_821FE7D8(ctx, base);
	// lwz r8,772(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8234969c
	if (ctx.cr6.eq) goto loc_8234969C;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r6,r11,-12400
	ctx.r6.s64 = ctx.r11.s64 + -12400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821fe7d8
	ctx.lr = 0x8234969C;
	sub_821FE7D8(ctx, base);
loc_8234969C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82348FD0) {
	__imp__sub_82348FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823496B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823496B8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822846c0
	ctx.lr = 0x823496CC;
	sub_822846C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r28,r11,-5928
	ctx.r28.s64 = ctx.r11.s64 + -5928;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,896(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 896);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82349718
	if (ctx.cr6.lt) goto loc_82349718;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822efc48
	ctx.lr = 0x82349718;
	sub_822EFC48(ctx, base);
loc_82349718:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r5,900(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 900);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82349760
	if (ctx.cr6.lt) goto loc_82349760;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822efc48
	ctx.lr = 0x82349760;
	sub_822EFC48(ctx, base);
loc_82349760:
	// lwz r5,908(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82349780
	if (ctx.cr6.lt) goto loc_82349780;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822efc48
	ctx.lr = 0x82349780;
	sub_822EFC48(ctx, base);
loc_82349780:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823496B0) {
	__imp__sub_823496B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234978C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234978C) {
	__imp__sub_8234978C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82349798;
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
	// lwz r26,276(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r10,r11,-12608
	ctx.r10.s64 = ctx.r11.s64 + -12608;
	// addi r31,r26,216
	ctx.r31.s64 = ctx.r26.s64 + 216;
	// lwz r9,560(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 560);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r8,r10
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82349894
	if (ctx.cr6.eq) goto loc_82349894;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82349894
	if (ctx.cr6.eq) goto loc_82349894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r26,932
	ctx.r29.s64 = ctx.r26.s64 + 932;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_823497EC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8234982c
	if (ctx.cr6.lt) goto loc_8234982C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82343868
	ctx.lr = 0x82349808;
	sub_82343868(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f0,f13,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8234982c
	if (!ctx.cr6.gt) goto loc_8234982C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8234982C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x823497ec
	if (ctx.cr6.lt) goto loc_823497EC;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82349894
	if (!ctx.cr6.gt) goto loc_82349894;
	// fsqrts f13,f31
	ctx.f13.f64 = double(float(sqrt(ctx.f31.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// beq cr6,0x82349878
	if (ctx.cr6.eq) goto loc_82349878;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82349878
	if (ctx.cr6.eq) goto loc_82349878;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82349894
	if (!ctx.cr6.eq) goto loc_82349894;
	// stfs f30,76(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x8234987c
	goto loc_8234987C;
loc_82349878:
	// stfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_8234987C:
	// stfs f30,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// addi r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 + 68;
	// stfs f30,72(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
loc_82349894:
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// addi r29,r26,932
	ctx.r29.s64 = ctx.r26.s64 + 932;
	// li r28,6
	ctx.r28.s64 = 6;
loc_823498A0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x823498c0
	if (ctx.cr6.lt) goto loc_823498C0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222eee0
	ctx.lr = 0x823498B8;
	sub_8222EEE0(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_823498C0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823498a0
	if (!ctx.cr0.eq) goto loc_823498A0;
	// lwz r4,912(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 912);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8234993c
	if (ctx.cr6.lt) goto loc_8234993C;
	// lwz r11,908(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8234993c
	if (ctx.cr6.lt) goto loc_8234993C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222eee0
	ctx.lr = 0x823498F4;
	sub_8222EEE0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,908(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 908);
	// bl 0x8222eee0
	ctx.lr = 0x82349904;
	sub_8222EEE0(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,600(r26)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r26.u32 + 600, temp.u32);
loc_8234993C:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82349950
	if (ctx.cr6.eq) goto loc_82349950;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82349960
	if (!ctx.cr6.eq) goto loc_82349960;
loc_82349950:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82344ae0
	ctx.lr = 0x82349960;
	sub_82344AE0(ctx, base);
loc_82349960:
	// addi r6,r31,24
	ctx.r6.s64 = ctx.r31.s64 + 24;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82343958
	ctx.lr = 0x82349974;
	sub_82343958(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,40(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,44(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x82345f40
	ctx.lr = 0x823499AC;
	sub_82345F40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e32c0
	ctx.lr = 0x823499B4;
	sub_821E32C0(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// stb r10,291(r27)
	PPC_STORE_U8(ctx.r27.u32 + 291, ctx.r10.u8);
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// addi r8,r11,50
	ctx.r8.s64 = ctx.r11.s64 + 50;
	// stw r8,328(r27)
	PPC_STORE_U32(ctx.r27.u32 + 328, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_82349790) {
	__imp__sub_82349790(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823499E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r11,-11884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lwz r8,712(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// lhz r7,256(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 256);
	// mulli r10,r7,624
	ctx.r10.s64 = ctx.r7.s64 * 624;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,-360(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -360);
	// addis r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 65536;
	// addi r10,r10,-21336
	ctx.r10.s64 = ctx.r10.s64 + -21336;
	// bne cr6,0x82349a3c
	if (!ctx.cr6.eq) goto loc_82349A3C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// xori r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 ^ 1;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r9.u32);
loc_82349A3C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r11,0,17,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82349a94
	if (ctx.cr6.eq) goto loc_82349A94;
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r10.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82349a8c
	if (!ctx.cr6.eq) goto loc_82349A8C;
	// lhz r4,260(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 260);
	// b 0x82229da8
	sub_82229DA8(ctx, base);
	return;
loc_82349A8C:
	// lhz r4,74(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 74);
	// b 0x82229da8
	sub_82229DA8(ctx, base);
	return;
loc_82349A94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823499E0) {
	__imp__sub_823499E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349AA0) {
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
	ctx.lr = 0x82349AB8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r8,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// bne cr6,0x82349c70
	if (!ctx.cr6.eq) goto loc_82349C70;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82349b0c
	if (!ctx.cr6.eq) goto loc_82349B0C;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82349b1c
	goto loc_82349B1C;
loc_82349B0C:
	// lfs f13,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fsel f0,f11,f12,f31
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f31.f64;
loc_82349B1C:
	// lfs f13,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x82349b44
	if (!ctx.cr6.gt) goto loc_82349B44;
	// lfs f12,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f31
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
loc_82349B44:
	// lfs f13,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82349c1c
	if (!ctx.cr6.lt) goto loc_82349C1C;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82349b74
	if (!ctx.cr6.eq) goto loc_82349B74;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225ddd0
	ctx.lr = 0x82349B68;
	sub_8225DDD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82349c1c
	if (!ctx.cr6.eq) goto loc_82349C1C;
loc_82349B74:
	// bl 0x8222fe68
	ctx.lr = 0x82349B78;
	sub_8222FE68(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lfs f13,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f12.f64 = double(temp.f32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,-32008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32008);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f31
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fmadds f8,f9,f28,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f12.f64));
	// stfs f8,704(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x8225d778
	ctx.lr = 0x82349BB8;
	sub_8225D778(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225bb80
	ctx.lr = 0x82349BC4;
	sub_8225BB80(ctx, base);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225d7d0
	ctx.lr = 0x82349BCC;
	sub_8225D7D0(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lfs f6,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f5,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f4,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,-32012(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f3,f2,f6
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f12,f1,f2,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f11,f0,f2,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f4.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8225df70
	ctx.lr = 0x82349C18;
	sub_8225DF70(ctx, base);
	// b 0x82349c70
	goto loc_82349C70;
loc_82349C1C:
	// lfs f0,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82349c50
	if (ctx.cr6.eq) goto loc_82349C50;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,9176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x822acc78
	ctx.lr = 0x82349C38;
	sub_822ACC78(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,408(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 408);
	// bl 0x82229da8
	ctx.lr = 0x82349C50;
	sub_82229DA8(ctx, base);
loc_82349C50:
	// lfs f0,104(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,704(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8222fe20
	ctx.lr = 0x82349C64;
	sub_8222FE20(ctx, base);
	// lfs f12,100(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f1,f31,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f11,708(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
loc_82349C70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x82349C7C;
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

PPC_WEAK_FUNC(sub_82349AA0) {
	__imp__sub_82349AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349C90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r11,r10,216
	ctx.r11.s64 = ctx.r10.s64 + 216;
	// addi r6,r11,240
	ctx.r6.s64 = ctx.r11.s64 + 240;
	// lwz r3,528(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// addi r5,r11,216
	ctx.r5.s64 = ctx.r11.s64 + 216;
	// b 0x8225c378
	sub_8225C378(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82349C90) {
	__imp__sub_82349C90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349CA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,276(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 276);
	// lwz r3,528(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r5,528(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,476(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 476);
	// lwz r9,476(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r6,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r4,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8225ce18
	sub_8225CE18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82349CA8) {
	__imp__sub_82349CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349CE8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82349CE8) {
	__imp__sub_82349CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82349CEC) {
	__imp__sub_82349CEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82349CF8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r28,r11,-1312
	ctx.r28.s64 = ctx.r11.s64 + -1312;
	// li r26,64
	ctx.r26.s64 = 64;
loc_82349D14:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82349dd4
	if (ctx.cr6.eq) goto loc_82349DD4;
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,528(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82349dd4
	if (ctx.cr6.eq) goto loc_82349DD4;
	// cmplwi cr6,r27,64
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 64, ctx.xer);
	// bge cr6,0x82349d98
	if (!ctx.cr6.lt) goto loc_82349D98;
	// addi r30,r28,972
	ctx.r30.s64 = ctx.r28.s64 + 972;
	// subfic r29,r27,64
	ctx.xer.ca = ctx.r27.u32 <= 64;
	ctx.r29.s64 = 64 - ctx.r27.s64;
loc_82349D40:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349d8c
	if (ctx.cr6.eq) goto loc_82349D8C;
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r10,276(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r3,528(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82349d8c
	if (ctx.cr6.eq) goto loc_82349D8C;
	// lwz r5,528(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82349d8c
	if (ctx.cr6.eq) goto loc_82349D8C;
	// lwz r11,476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,476(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r6,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r4,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8225ce18
	ctx.lr = 0x82349D8C;
	sub_8225CE18(ctx, base);
loc_82349D8C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,972
	ctx.r30.s64 = ctx.r30.s64 + 972;
	// bne 0x82349d40
	if (!ctx.cr0.eq) goto loc_82349D40;
loc_82349D98:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r3,528(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// bl 0x8225e108
	ctx.lr = 0x82349DA4;
	sub_8225E108(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82349dd4
	if (ctx.cr6.eq) goto loc_82349DD4;
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r11,r10,216
	ctx.r11.s64 = ctx.r10.s64 + 216;
	// addi r6,r11,240
	ctx.r6.s64 = ctx.r11.s64 + 240;
	// addi r5,r11,216
	ctx.r5.s64 = ctx.r11.s64 + 216;
	// lwz r3,528(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 528);
	// bl 0x8225c378
	ctx.lr = 0x82349DC8;
	sub_8225C378(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82349aa0
	ctx.lr = 0x82349DD4;
	sub_82349AA0(ctx, base);
loc_82349DD4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,972
	ctx.r28.s64 = ctx.r28.s64 + 972;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82349d14
	if (!ctx.cr0.eq) goto loc_82349D14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82349CF0) {
	__imp__sub_82349CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82349DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82349DF8;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// addi r28,r31,216
	ctx.r28.s64 = ctx.r31.s64 + 216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,560(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// beq cr6,0x82349e48
	if (ctx.cr6.eq) goto loc_82349E48;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r26,r11,-624
	ctx.r26.s64 = ctx.r11.s64 + -624;
	// b 0x82349e4c
	goto loc_82349E4C;
loc_82349E48:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82349E4C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r7,r8,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a04c
	if (ctx.cr6.eq) goto loc_8234A04C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8225dc20
	ctx.lr = 0x82349E84;
	sub_8225DC20(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,476(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 476);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82349f00
	if (!ctx.cr6.eq) goto loc_82349F00;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82349eac
	if (ctx.cr6.eq) goto loc_82349EAC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x82349eb0
	if (!ctx.cr6.eq) goto loc_82349EB0;
loc_82349EAC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82349EB0:
	// addi r6,r28,92
	ctx.r6.s64 = ctx.r28.s64 + 92;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8225bac8
	ctx.lr = 0x82349EC4;
	sub_8225BAC8(ctx, base);
	// addi r4,r28,104
	ctx.r4.s64 = ctx.r28.s64 + 104;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225bbd8
	ctx.lr = 0x82349ED0;
	sub_8225BBD8(ctx, base);
	// addi r4,r28,128
	ctx.r4.s64 = ctx.r28.s64 + 128;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225bc18
	ctx.lr = 0x82349EDC;
	sub_8225BC18(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82349f00
	if (!ctx.cr6.eq) goto loc_82349F00;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82349f00
	if (!ctx.cr6.eq) goto loc_82349F00;
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,108(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 108, temp.u32);
loc_82349F00:
	// lfs f0,104(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// stfs f13,576(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lfs f0,-13272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13272);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82349f20
	if (!ctx.cr6.lt) goto loc_82349F20;
	// stfs f30,576(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
loc_82349F20:
	// lwz r11,560(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82349f74
	if (ctx.cr6.eq) goto loc_82349F74;
	// lfs f0,880(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82349f74
	if (!ctx.cr6.gt) goto loc_82349F74;
	// lfs f13,564(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// li r4,102
	ctx.r4.s64 = 102;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsel f9,f11,f31,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f12.f64;
	// fsel f8,f10,f30,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8222f978
	ctx.lr = 0x82349F74;
	sub_8222F978(ctx, base);
loc_82349F74:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225bc38
	ctx.lr = 0x82349F7C;
	sub_8225BC38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82349f94
	if (!ctx.cr6.eq) goto loc_82349F94;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82349F94:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8234a040
	if (!ctx.cr6.eq) goto loc_8234A040;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82349FB4;
	sub_823DE1F0(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// beq cr6,0x82349fe8
	if (ctx.cr6.eq) goto loc_82349FE8;
	// lwz r11,184(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82349fe8
	if (ctx.cr6.eq) goto loc_82349FE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225d778
	ctx.lr = 0x82349FD8;
	sub_8225D778(ctx, base);
	// lwz r6,204(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x82349ff0
	goto loc_82349FF0;
loc_82349FE8:
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_82349FF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823533e0
	ctx.lr = 0x82349FF8;
	sub_823533E0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82353620
	ctx.lr = 0x8234A014;
	sub_82353620(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353168
	ctx.lr = 0x8234A01C;
	sub_82353168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a040
	if (ctx.cr6.eq) goto loc_8234A040;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,364(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 364);
	// bl 0x82229da8
	ctx.lr = 0x8234A040;
	sub_82229DA8(ctx, base);
loc_8234A040:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225df58
	ctx.lr = 0x8234A048;
	sub_8225DF58(ctx, base);
	// b 0x8234a060
	goto loc_8234A060;
loc_8234A04C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234a060
	if (!ctx.cr6.eq) goto loc_8234A060;
	// lfs f0,580(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
loc_8234A060:
	// addi r30,r28,92
	ctx.r30.s64 = ctx.r28.s64 + 92;
	// addi r6,r28,24
	ctx.r6.s64 = ctx.r28.s64 + 24;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82343958
	ctx.lr = 0x8234A078;
	sub_82343958(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8234a0ac
	if (ctx.cr6.eq) goto loc_8234A0AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234a098
	if (ctx.cr6.eq) goto loc_8234A098;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8234a0ac
	if (!ctx.cr6.eq) goto loc_8234A0AC;
loc_8234A098:
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a0ac
	if (!ctx.cr6.eq) goto loc_8234A0AC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345438
	ctx.lr = 0x8234A0AC;
	sub_82345438(ctx, base);
loc_8234A0AC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8234a0cc
	if (!ctx.cr6.eq) goto loc_8234A0CC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8234a0cc
	if (!ctx.cr6.eq) goto loc_8234A0CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82344698
	ctx.lr = 0x8234A0CC;
	sub_82344698(ctx, base);
loc_8234A0CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8234a100
	if (ctx.cr6.eq) goto loc_8234A100;
	// lwz r11,264(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234a100
	if (!ctx.cr6.eq) goto loc_8234A100;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
loc_8234A100:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82345f40
	ctx.lr = 0x8234A108;
	sub_82345F40(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e32c0
	ctx.lr = 0x8234A110;
	sub_821E32C0(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234a16c
	if (ctx.cr6.eq) goto loc_8234A16C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfs f1,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82343668
	ctx.lr = 0x8234A140;
	sub_82343668(ctx, base);
	// lwz r10,444(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 444);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234a16c
	if (ctx.cr6.eq) goto loc_8234A16C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,448(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 448);
	ctx.f1.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f35e0
	ctx.lr = 0x8234A16C;
	sub_821F35E0(ctx, base);
loc_8234A16C:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// bl 0x82346eb0
	ctx.lr = 0x8234A17C;
	sub_82346EB0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823462c0
	ctx.lr = 0x8234A184;
	sub_823462C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82346a58
	ctx.lr = 0x8234A18C;
	sub_82346A58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82346ce8
	ctx.lr = 0x8234A194;
	sub_82346CE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82342fa8
	ctx.lr = 0x8234A19C;
	sub_82342FA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,360(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// li r8,136
	ctx.r8.s64 = 136;
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r29,r8
	PPC_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.f11.u32);
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// addi r6,r11,50
	ctx.r6.s64 = ctx.r11.s64 + 50;
	// stw r6,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r6.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82349DF0) {
	__imp__sub_82349DF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234A1DC) {
	__imp__sub_8234A1DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A1E0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234a248
	if (ctx.cr6.eq) goto loc_8234A248;
	// lhz r3,124(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a248
	if (ctx.cr6.eq) goto loc_8234A248;
	// bl 0x82332af8
	ctx.lr = 0x8234A214;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234a228
	if (ctx.cr6.eq) goto loc_8234A228;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234a248
	if (!ctx.cr6.eq) goto loc_8234A248;
loc_8234A228:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x82343ef0
	ctx.lr = 0x8234A248;
	sub_82343EF0(ctx, base);
loc_8234A248:
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

PPC_WEAK_FUNC(sub_8234A1E0) {
	__imp__sub_8234A1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8234A268;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,276(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r10,-12608
	ctx.r9.s64 = ctx.r10.s64 + -12608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r28,216
	ctx.r10.s64 = ctx.r28.s64 + 216;
	// lwz r8,560(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r7,r9
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// beq cr6,0x8234a2ac
	if (ctx.cr6.eq) goto loc_8234A2AC;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x8234a2ac
	if (ctx.cr6.eq) goto loc_8234A2AC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8234a4a0
	if (!ctx.cr6.eq) goto loc_8234A4A0;
loc_8234A2AC:
	// lbz r11,289(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a4a0
	if (ctx.cr6.eq) goto loc_8234A4A0;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234a4a0
	if (!ctx.cr6.eq) goto loc_8234A4A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,120(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234a4a0
	if (!ctx.cr6.gt) goto loc_8234A4A0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r10,92
	ctx.r3.s64 = ctx.r10.s64 + 92;
	// bl 0x822d4b08
	ctx.lr = 0x8234A2E4;
	sub_822D4B08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8234a4a0
	if (ctx.cr6.lt) goto loc_8234A4A0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x8234a348
	if (!ctx.cr6.eq) goto loc_8234A348;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ori r8,r8,16959
	ctx.r8.u64 = ctx.r8.u64 | 16959;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r31,232
	ctx.r7.s64 = ctx.r31.s64 + 232;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x8234A340;
	sub_821F1080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8234A348:
	// lhz r11,130(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 130);
	// lhz r10,126(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234a4a0
	if (ctx.cr6.eq) goto loc_8234A4A0;
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x8234a4a0
	if (ctx.cr6.eq) goto loc_8234A4A0;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a3c4
	if (ctx.cr6.eq) goto loc_8234A3C4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234a3c4
	if (ctx.cr6.eq) goto loc_8234A3C4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ori r8,r8,16959
	ctx.r8.u64 = ctx.r8.u64 | 16959;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r7,r31,232
	ctx.r7.s64 = ctx.r31.s64 + 232;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x8234A3BC;
	sub_821F1080(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8234A3C4:
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r31,232
	ctx.r29.s64 = ctx.r31.s64 + 232;
	// lfs f12,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x8234A3F0;
	sub_822D4AC8(ctx, base);
	// lfs f8,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// lfs f11,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f5,f4,f6
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x8234a4a0
	if (ctx.cr6.lt) goto loc_8234A4A0;
	// lfs f13,124(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,576(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234a438
	if (!ctx.cr6.gt) goto loc_8234A438;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8234A438:
	// fsubs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f11,120(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-11984(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11984);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f7.u64);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8234a4a0
	if (!ctx.cr6.gt) goto loc_8234A4A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x8234A4A0;
	sub_821F1080(ctx, base);
loc_8234A4A0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A260) {
	__imp__sub_8234A260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234a4c8
	if (ctx.cr6.eq) goto loc_8234A4C8;
	// b 0x82348210
	sub_82348210(ctx, base);
	return;
loc_8234A4C8:
	// b 0x82348048
	sub_82348048(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A4A8) {
	__imp__sub_8234A4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A4CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234A4CC) {
	__imp__sub_8234A4CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234A4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234a50c
	if (ctx.cr6.eq) goto loc_8234A50C;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x82348210
	ctx.lr = 0x8234A50C;
	sub_82348210(ctx, base);
loc_8234A50C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8234a558
	if (ctx.cr6.eq) goto loc_8234A558;
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234a558
	if (ctx.cr6.eq) goto loc_8234A558;
	// bl 0x82332af8
	ctx.lr = 0x8234A524;
	sub_82332AF8(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234a538
	if (ctx.cr6.eq) goto loc_8234A538;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234a558
	if (!ctx.cr6.eq) goto loc_8234A558;
loc_8234A538:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// bl 0x82343ef0
	ctx.lr = 0x8234A558;
	sub_82343EF0(ctx, base);
loc_8234A558:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A4D0) {
	__imp__sub_8234A4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A560) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-11980
	ctx.r3.s64 = ctx.r11.s64 + -11980;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822293c8
	ctx.lr = 0x8234A588;
	sub_822293C8(ctx, base);
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234a5b8
	if (ctx.cr6.eq) goto loc_8234A5B8;
	// bl 0x823583b0
	ctx.lr = 0x8234A5A4;
	sub_823583B0(ctx, base);
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
loc_8234A5B8:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82348750
	ctx.lr = 0x8234A5C4;
	sub_82348750(ctx, base);
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

PPC_WEAK_FUNC(sub_8234A560) {
	__imp__sub_8234A560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A5D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234A5D8) {
	__imp__sub_8234A5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234A5EC) {
	__imp__sub_8234A5EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8234A5F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// addi r26,r9,9624
	ctx.r26.s64 = ctx.r9.s64 + 9624;
	// addi r11,r11,-1312
	ctx.r11.s64 = ctx.r11.s64 + -1312;
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r11,r11,960
	ctx.r11.s64 = ctx.r11.s64 + 960;
	// addi r10,r10,-12608
	ctx.r10.s64 = ctx.r10.s64 + -12608;
loc_8234A624:
	// lwz r27,-960(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + -960);
	// addi r28,r11,-960
	ctx.r28.s64 = ctx.r11.s64 + -960;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8234a6e8
	if (ctx.cr6.eq) goto loc_8234A6E8;
	// lwz r7,-400(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -400);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r6,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r3,444(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 444);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234a6e8
	if (ctx.cr6.eq) goto loc_8234A6E8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8234a6e8
	if (ctx.cr6.eq) goto loc_8234A6E8;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8234a6e8
	if (ctx.cr6.lt) goto loc_8234A6E8;
	// lfs f0,428(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r27,232
	ctx.r31.s64 = ctx.r27.s64 + 232;
	// lfs f13,236(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,432(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,240(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,424(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,232(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,452(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// blt cr6,0x8234a6e8
	if (ctx.cr6.lt) goto loc_8234A6E8;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f13,448(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f13,f13
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f5
	ctx.cr6.compare(ctx.f2.f64, ctx.f5.f64);
	// ble cr6,0x8234a700
	if (!ctx.cr6.gt) goto loc_8234A700;
loc_8234A6E8:
	// addi r8,r8,972
	ctx.r8.s64 = ctx.r8.s64 + 972;
	// addi r11,r11,972
	ctx.r11.s64 = ctx.r11.s64 + 972;
	// cmplwi cr6,r8,62208
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 62208, ctx.xer);
	// blt cr6,0x8234a624
	if (ctx.cr6.lt) goto loc_8234A624;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8234A700:
	// lfs f8,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f6,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f5,f11,f11,f9
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f9,f0,f0,f5
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// ble cr6,0x8234a7c0
	if (!ctx.cr6.gt) goto loc_8234A7C0;
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f6.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f10,f2
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// lfs f8,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f5,f5
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f4,f3,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f7.f64));
	// fmadds f2,f5,f12,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f1,f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f4.f64));
	// fmadds f12,f3,f11,f2
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fnmsubs f13,f13,f13,f1
	ctx.f13.f64 = double(float(-(ctx.f13.f64 * ctx.f13.f64 - ctx.f1.f64)));
	// fmuls f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmsubs f13,f12,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 - ctx.f11.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// blt cr6,0x8234a7c0
	if (ctx.cr6.lt) goto loc_8234A7C0;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fdivs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f9.f64));
	// fmadds f6,f0,f7,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f6,232(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f2,f3,f7,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f5.f64));
	// stfs f2,236(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f12,f13,f7,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f12,240(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
loc_8234A7C0:
	// addi r4,r30,232
	ctx.r4.s64 = ctx.r30.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fb90
	ctx.lr = 0x8234A7CC;
	sub_8222FB90(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f9,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmadds f5,f6,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f8.f64));
	// lfs f12,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f4,f0,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f5.f64));
	// fsqrts f3,f4
	ctx.f3.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f2,f3
	ctx.f2.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f1,f2,f12,f3
	ctx.f1.f64 = ctx.f2.f64 >= 0.0 ? ctx.f12.f64 : ctx.f3.f64;
	// fdivs f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82202518
	ctx.lr = 0x8234A848;
	sub_82202518(ctx, base);
	// lwz r10,960(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 960);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,960(r28)
	PPC_STORE_U32(ctx.r28.u32 + 960, ctx.r8.u32);
	// lfs f8,460(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 460);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,-31048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31048);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r6,r7,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r6,964(r28)
	PPC_STORE_U32(ctx.r28.u32 + 964, ctx.r6.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A5F0) {
	__imp__sub_8234A5F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234A884) {
	__imp__sub_8234A884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234A890;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,216
	ctx.r30.s64 = ctx.r3.s64 + 216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e5e70
	ctx.lr = 0x8234A8A8;
	sub_821E5E70(ctx, base);
	// lfs f0,232(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,236(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// stfs f13,220(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// lfs f12,240(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,224(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// lfs f11,244(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,240(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f10,248(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,244(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f9,252(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,248(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// bl 0x823474b0
	ctx.lr = 0x8234A8E4;
	sub_823474B0(ctx, base);
	// addi r7,r30,140
	ctx.r7.s64 = ctx.r30.s64 + 140;
	// addi r6,r30,92
	ctx.r6.s64 = ctx.r30.s64 + 92;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8225ba60
	ctx.lr = 0x8234A8FC;
	sub_8225BA60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// lfs f8,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,536(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A888) {
	__imp__sub_8234A888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x8234a960
	if (!ctx.cr6.eq) goto loc_8234A960;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f4,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// b 0x8234a96c
	goto loc_8234A96C;
loc_8234A960:
	// lfs f2,724(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f4,876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 876);
	ctx.f4.f64 = double(temp.f32);
loc_8234A96C:
	// addi r4,r3,816
	ctx.r4.s64 = ctx.r3.s64 + 816;
	// b 0x82354560
	sub_82354560(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A928) {
	__imp__sub_8234A928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234A974) {
	__imp__sub_8234A974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234A978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234A980;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234aa48
	if (ctx.cr6.eq) goto loc_8234AA48;
	// bl 0x8225de20
	ctx.lr = 0x8234A9AC;
	sub_8225DE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234aa48
	if (!ctx.cr6.eq) goto loc_8234AA48;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x8234a9d4
	if (ctx.cr6.lt) goto loc_8234A9D4;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// ble cr6,0x8234a9cc
	if (!ctx.cr6.gt) goto loc_8234A9CC;
	// cmpwi cr6,r29,14
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 14, ctx.xer);
	// bne cr6,0x8234a9d4
	if (!ctx.cr6.eq) goto loc_8234A9D4;
loc_8234A9CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8234a9d8
	goto loc_8234A9D8;
loc_8234A9D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234A9D8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234aa48
	if (ctx.cr6.eq) goto loc_8234AA48;
	// lwz r11,560(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-15916(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15916);
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,176(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 176);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f6,f13,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8225df88
	ctx.lr = 0x8234AA48;
	sub_8225DF88(ctx, base);
loc_8234AA48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234A978) {
	__imp__sub_8234A978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234AA54) {
	__imp__sub_8234AA54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8234AA60;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de004
	ctx.lr = 0x8234AA68;
	__savefpr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// fmr f24,f2
	ctx.f24.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f21,f3
	ctx.f21.f64 = ctx.f3.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f19,f1,f1
	ctx.f19.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmuls f22,f2,f2
	ctx.f22.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r30,r11,-1312
	ctx.r30.s64 = ctx.r11.s64 + -1312;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lfs f25,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f25.f64 = double(temp.f32);
	// lfs f20,13872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13872);
	ctx.f20.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f28,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfs f27,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// li r29,64
	ctx.r29.s64 = 64;
	// lis r26,-31961
	ctx.r26.s64 = -2094596096;
	// addi r28,r11,-12608
	ctx.r28.s64 = ctx.r11.s64 + -12608;
loc_8234AAC4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ac58
	if (ctx.cr6.eq) goto loc_8234AC58;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234ac58
	if (ctx.cr6.eq) goto loc_8234AC58;
	// lfs f0,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// lfs f7,220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// lfs f4,224(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f10
	ctx.f2.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// fabs f1,f8
	ctx.f1.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fabs f0,f5
	ctx.f0.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f10,f2,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fsubs f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f4.f64));
	// fsubs f8,f0,f3
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fsel f7,f10,f10,f27
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f27.f64;
	// fsel f6,f9,f9,f27
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f27.f64;
	// fsel f5,f8,f8,f27
	ctx.f5.f64 = ctx.f8.f64 >= 0.0 ? ctx.f8.f64 : ctx.f27.f64;
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// bge cr6,0x8234ac58
	if (!ctx.cr6.lt) goto loc_8234AC58;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8234ab64
	if (ctx.cr6.eq) goto loc_8234AB64;
	// lfs f31,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// lfs f30,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// b 0x8234abf0
	goto loc_8234ABF0;
loc_8234AB64:
	// fcmpu cr6,f0,f19
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f19.f64);
	// bgt cr6,0x8234ab74
	if (ctx.cr6.gt) goto loc_8234AB74;
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// b 0x8234ab84
	goto loc_8234AB84;
loc_8234AB74:
	// fsqrts f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f10,f24,f23
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// fsubs f9,f24,f0
	ctx.f9.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// fdivs f26,f9,f10
	ctx.f26.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
loc_8234AB84:
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fsubs f0,f9,f11
	ctx.f0.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// beq cr6,0x8234abb0
	if (ctx.cr6.eq) goto loc_8234ABB0;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x8234abb4
	goto loc_8234ABB4;
loc_8234ABB0:
	// fadds f0,f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f20.f64));
loc_8234ABB4:
	// fmuls f11,f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f8,f25
	ctx.cr6.compare(ctx.f8.f64, ctx.f25.f64);
	// fsel f6,f7,f28,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f28.f64 : ctx.f8.f64;
	// fdivs f5,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 / ctx.f6.f64));
	// fmuls f31,f5,f13
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f30,f5,f12
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bge cr6,0x8234abf0
	if (!ctx.cr6.lt) goto loc_8234ABF0;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// fmr f29,f27
	ctx.f29.f64 = ctx.f27.f64;
loc_8234ABF0:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234ac58
	if (ctx.cr6.eq) goto loc_8234AC58;
	// bl 0x8225de20
	ctx.lr = 0x8234AC00;
	sub_8225DE20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234ac58
	if (!ctx.cr6.eq) goto loc_8234AC58;
	// lwz r10,560(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-15916(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -15916);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwz r7,176(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 176);
	// lfs f13,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// fmuls f10,f11,f21
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f21.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225df88
	ctx.lr = 0x8234AC58;
	sub_8225DF88(ctx, base);
loc_8234AC58:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,972
	ctx.r30.s64 = ctx.r30.s64 + 972;
	// bne 0x8234aac4
	if (!ctx.cr0.eq) goto loc_8234AAC4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de050
	ctx.lr = 0x8234AC70;
	__restfpr_19(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234AA58) {
	__imp__sub_8234AA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234AC74) {
	__imp__sub_8234AC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AC78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// addi r8,r10,-12608
	ctx.r8.s64 = ctx.r10.s64 + -12608;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-32232
	ctx.r11.s64 = ctx.r9.s64 + -32232;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r5,4(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234AC78) {
	__imp__sub_8234AC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234ACA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234ACA4) {
	__imp__sub_8234ACA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234ACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8234ACB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// addi r22,r11,-1312
	ctx.r22.s64 = ctx.r11.s64 + -1312;
	// lis r8,-32020
	ctx.r8.s64 = -2098462720;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r22,560
	ctx.r31.s64 = ctx.r22.s64 + 560;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r26,r9,-12608
	ctx.r26.s64 = ctx.r9.s64 + -12608;
	// addi r25,r8,9624
	ctx.r25.s64 = ctx.r8.s64 + 9624;
	// addi r24,r10,-17572
	ctx.r24.s64 = ctx.r10.s64 + -17572;
	// addi r23,r11,-18008
	ctx.r23.s64 = ctx.r11.s64 + -18008;
loc_8234ACE8:
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8223e078
	ctx.lr = 0x8234ACFC;
	sub_8223E078(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234add8
	if (ctx.cr6.eq) goto loc_8234ADD8;
	// addi r27,r31,-560
	ctx.r27.s64 = ctx.r31.s64 + -560;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,972
	ctx.r5.s64 = 972;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8223dd20
	ctx.lr = 0x8234AD20;
	sub_8223DD20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223c4d8
	ctx.lr = 0x8234AD28;
	sub_8223C4D8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8223cfb0
	ctx.lr = 0x8234AD38;
	sub_8223CFB0(ctx, base);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r6,36(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// li r4,1720
	ctx.r4.s64 = 1720;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8222de40
	ctx.lr = 0x8234AD50;
	sub_8222DE40(ctx, base);
	// rlwinm r28,r3,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234ad74
	if (!ctx.cr6.eq) goto loc_8234AD74;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823427b8
	ctx.lr = 0x8234AD70;
	sub_823427B8(ctx, base);
	// stwx r3,r28,r26
	PPC_STORE_U32(ctx.r28.u32 + ctx.r26.u32, ctx.r3.u32);
loc_8234AD74:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,-556(r31)
	PPC_STORE_U32(ctx.r31.u32 + -556, ctx.r11.u32);
	// bl 0x8223e078
	ctx.lr = 0x8234AD94;
	sub_8223E078(ctx, base);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234adc8
	if (ctx.cr6.eq) goto loc_8234ADC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r26,792
	ctx.r10.s64 = ctx.r26.s64 + 792;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 * 328;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,168
	ctx.r4.s64 = ctx.r9.s64 + 168;
	// bl 0x8225b8d0
	ctx.lr = 0x8234ADC4;
	sub_8225B8D0(ctx, base);
	// stw r3,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r3.u32);
loc_8234ADC8:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,15448
	ctx.r4.s64 = ctx.r11.s64 + 15448;
	// bl 0x82257f90
	ctx.lr = 0x8234ADD8;
	sub_82257F90(ctx, base);
loc_8234ADD8:
	// addis r11,r22,1
	ctx.r11.s64 = ctx.r22.s64 + 65536;
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// addi r11,r11,-2768
	ctx.r11.s64 = ctx.r11.s64 + -2768;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234ace8
	if (ctx.cr6.lt) goto loc_8234ACE8;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234ACA8) {
	__imp__sub_8234ACA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234ADF4) {
	__imp__sub_8234ADF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234ADF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8234AE00;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,324(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82348b58
	ctx.lr = 0x8234AE38;
	sub_82348B58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ae50
	if (ctx.cr6.eq) goto loc_8234AE50;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8234AE50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x8234ae84
	if (ctx.cr6.eq) goto loc_8234AE84;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4b08
	ctx.lr = 0x8234AE84;
	sub_822D4B08(ctx, base);
loc_8234AE84:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8234aea4
	if (ctx.cr6.eq) goto loc_8234AEA4;
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_8234AEA4:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x8234aeb0
	if (!ctx.cr6.lt) goto loc_8234AEB0;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8234AEB0:
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-14876(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14876);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234aee0
	if (ctx.cr6.eq) goto loc_8234AEE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,332(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r4,r11,-11968
	ctx.r4.s64 = ctx.r11.s64 + -11968;
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82280900
	ctx.lr = 0x8234AEE0;
	sub_82280900(ctx, base);
loc_8234AEE0:
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r30,340(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r29,332(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bl 0x82348cc8
	ctx.lr = 0x8234AF28;
	sub_82348CC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234ADF8) {
	__imp__sub_8234ADF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234AF34) {
	__imp__sub_8234AF34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234AF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8234AF40;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r11,-12608
	ctx.r28.s64 = ctx.r11.s64 + -12608;
	// li r5,188
	ctx.r5.s64 = 188;
	// addi r3,r28,192
	ctx.r3.s64 = ctx.r28.s64 + 192;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r29,216
	ctx.r26.s64 = ctx.r29.s64 + 216;
	// lwz r10,560(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r8,0,30,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lwzx r27,r9,r28
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,276(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stfs f0,228(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 228, temp.u32);
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// stfs f13,232(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,236(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// lfs f11,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,252(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 252, temp.u32);
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,256(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 256, temp.u32);
	// lfs f9,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,260(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 260, temp.u32);
	// bl 0x823de1f0
	ctx.lr = 0x8234AFB8;
	sub_823DE1F0(ctx, base);
	// addi r11,r28,192
	ctx.r11.s64 = ctx.r28.s64 + 192;
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// addi r3,r11,188
	ctx.r3.s64 = ctx.r11.s64 + 188;
	// li r5,312
	ctx.r5.s64 = 312;
	// bl 0x823de1f0
	ctx.lr = 0x8234AFCC;
	sub_823DE1F0(ctx, base);
	// addi r3,r28,128
	ctx.r3.s64 = ctx.r28.s64 + 128;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x8234AFDC;
	sub_823DE090(ctx, base);
	// lhz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b018
	if (ctx.cr6.eq) goto loc_8234B018;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// addi r9,r11,332
	ctx.r9.s64 = ctx.r11.s64 + 332;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r8,-624(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -624);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt cr6,0x8234b018
	if (ctx.cr6.gt) goto loc_8234B018;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// bl 0x82348210
	ctx.lr = 0x8234B018;
	sub_82348210(ctx, base);
loc_8234B018:
	// lwz r11,560(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-32232
	ctx.r10.s64 = ctx.r10.s64 + -32232;
	// lwzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r28.u32);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821fc6d0
	ctx.lr = 0x8234B03C;
	sub_821FC6D0(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8234b054
	if (ctx.cr6.eq) goto loc_8234B054;
	// lwz r11,168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234b17c
	if (!ctx.cr6.eq) goto loc_8234B17C;
loc_8234B054:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,476(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 476);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b078
	if (ctx.cr6.eq) goto loc_8234B078;
	// lwz r11,528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b078
	if (ctx.cr6.eq) goto loc_8234B078;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8234b088
	goto loc_8234B088;
loc_8234B078:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234b08c
	if (!ctx.cr6.eq) goto loc_8234B08C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234B088:
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8234B08C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8234b104
	if (ctx.cr6.gt) goto loc_8234B104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8234b0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234B0C0;
	// bdzf 4*cr6+eq,0x8234b0c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234B0C8;
	// bdzf 4*cr6+eq,0x8234b0d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234B0D0;
	// bdzf 4*cr6+eq,0x8234b0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234B0D8;
	// bne cr6,0x8234b0e0
	if (!ctx.cr6.eq) goto loc_8234B0E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8234b108
	goto loc_8234B108;
loc_8234B0C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8234b108
	goto loc_8234B108;
loc_8234B0C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8234b108
	goto loc_8234B108;
loc_8234B0D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x8234b108
	goto loc_8234B108;
loc_8234B0D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x8234b108
	goto loc_8234B108;
loc_8234B0E0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b0f8
	if (ctx.cr6.eq) goto loc_8234B0F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B0F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234B0F8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823499e0
	ctx.lr = 0x8234B100;
	sub_823499E0(ctx, base);
	// b 0x8234b11c
	goto loc_8234B11C;
loc_8234B104:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8234B108:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b11c
	if (ctx.cr6.eq) goto loc_8234B11C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234B11C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8234B11C:
	// lwz r11,528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b17c
	if (ctx.cr6.eq) goto loc_8234B17C;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r26,240
	ctx.r4.s64 = ctx.r26.s64 + 240;
	// addi r3,r26,264
	ctx.r3.s64 = ctx.r26.s64 + 264;
	// bl 0x822dd768
	ctx.lr = 0x8234B138;
	sub_822DD768(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,536(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,880(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 880, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8234b160
	if (ctx.cr6.eq) goto loc_8234B160;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8234B160:
	// lfs f13,548(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 548);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8234b17c
	if (ctx.cr6.eq) goto loc_8234B17C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,8
	ctx.r9.u64 = ctx.r10.u64 | 8;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8234B17C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234AF38) {
	__imp__sub_8234AF38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B184) {
	__imp__sub_8234B184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B188) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r11,-15888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15888);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b1c0
	if (ctx.cr6.eq) goto loc_8234B1C0;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
	// b 0x8234b1c4
	goto loc_8234B1C4;
loc_8234B1C0:
	// ori r4,r4,529
	ctx.r4.u64 = ctx.r4.u64 | 529;
loc_8234B1C4:
	// bl 0x822581e0
	ctx.lr = 0x8234B1C8;
	sub_822581E0(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// li r30,64
	ctx.r30.s64 = 64;
	// addi r31,r11,-1312
	ctx.r31.s64 = ctx.r11.s64 + -1312;
loc_8234B1D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b1e4
	if (ctx.cr6.eq) goto loc_8234B1E4;
	// bl 0x8234af38
	ctx.lr = 0x8234B1E4;
	sub_8234AF38(ctx, base);
loc_8234B1E4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,972
	ctx.r31.s64 = ctx.r31.s64 + 972;
	// bne 0x8234b1d4
	if (!ctx.cr0.eq) goto loc_8234B1D4;
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

PPC_WEAK_FUNC(sub_8234B188) {
	__imp__sub_8234B188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B208) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r7,-11748
	ctx.r3.s64 = ctx.r7.s64 + -11748;
	// lfs f31,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r8,-11784
	ctx.r8.s64 = ctx.r8.s64 + -11784;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,8336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8336);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x8234B254;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-11820
	ctx.r8.s64 = ctx.r4.s64 + -11820;
	// stw r3,-4620(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4620, ctx.r3.u32);
	// addi r3,r11,-11848
	ctx.r3.s64 = ctx.r11.s64 + -11848;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,14260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 14260);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8234B284;
	sub_822E1660(ctx, base);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-4624(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4624, ctx.r3.u32);
	// addi r3,r7,-11876
	ctx.r3.s64 = ctx.r7.s64 + -11876;
	// addi r8,r8,-11936
	ctx.r8.s64 = ctx.r8.s64 + -11936;
	// lfs f3,5808(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5808);
	ctx.f3.f64 = double(temp.f32);
	// li r7,68
	ctx.r7.s64 = 68;
	// bl 0x822e1660
	ctx.lr = 0x8234B2B4;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// stw r3,-4616(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4616, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8234B208) {
	__imp__sub_8234B208(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B2D4) {
	__imp__sub_8234B2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r7,80
	ctx.r7.s64 = 80;
	// rlwinm r6,r8,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lwz r11,-4616(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4616);
	// lfs f0,12240(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r3,r7
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, ctx.f11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8234b31c
	if (!ctx.cr6.eq) goto loc_8234B31C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8234B31C:
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B2D8) {
	__imp__sub_8234B2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B324) {
	__imp__sub_8234B324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B328) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x8234b374
	if (!ctx.cr6.eq) goto loc_8234B374;
loc_8234B36C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234b3d4
	goto loc_8234B3D4;
loc_8234B374:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b388
	if (ctx.cr6.eq) goto loc_8234B388;
	// bl 0x822ddcf8
	ctx.lr = 0x8234B384;
	sub_822DDCF8(ctx, base);
	// b 0x8234b38c
	goto loc_8234B38C;
loc_8234B388:
	// bl 0x822ddd00
	ctx.lr = 0x8234B38C;
	sub_822DDD00(ctx, base);
loc_8234B38C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b36c
	if (ctx.cr6.eq) goto loc_8234B36C;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234b3b4
	if (ctx.cr6.eq) goto loc_8234B3B4;
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8234b36c
	if (ctx.cr6.eq) goto loc_8234B36C;
loc_8234B3B4:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// addi r7,r31,56
	ctx.r7.s64 = ctx.r31.s64 + 56;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82364bc8
	ctx.lr = 0x8234B3D0;
	sub_82364BC8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8234B3D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_8234B328) {
	__imp__sub_8234B328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B3F8) {
	PPC_FUNC_PROLOGUE();
	// li r8,1
	ctx.r8.s64 = 1;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B3F8) {
	__imp__sub_8234B3F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B400) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B400) {
	__imp__sub_8234B400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234B410;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822ddcf8
	ctx.lr = 0x8234B44C;
	sub_822DDCF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
	// fcmpu cr6,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x8234b478
	if (!ctx.cr6.eq) goto loc_8234B478;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8234b478
	if (!ctx.cr6.eq) goto loc_8234B478;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
loc_8234B478:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234b498
	if (ctx.cr6.eq) goto loc_8234B498;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
loc_8234B498:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ddcf8
	ctx.lr = 0x8234B4A0;
	sub_822DDCF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bne cr6,0x8234b4d4
	if (!ctx.cr6.eq) goto loc_8234B4D4;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x8234b4d4
	if (!ctx.cr6.eq) goto loc_8234B4D4;
	// lfs f0,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8234b4f4
	if (ctx.cr6.eq) goto loc_8234B4F4;
loc_8234B4D4:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82365090
	ctx.lr = 0x8234B4F4;
	sub_82365090(ctx, base);
loc_8234B4F4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_8234B408) {
	__imp__sub_8234B408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B508) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82364ab0
	sub_82364AB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B508) {
	__imp__sub_8234B508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B514) {
	__imp__sub_8234B514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,516(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B518) {
	__imp__sub_8234B518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B544) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B544) {
	__imp__sub_8234B544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B548) {
	__imp__sub_8234B548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B574) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B574) {
	__imp__sub_8234B574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,524(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B578) {
	__imp__sub_8234B578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B5A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B5A4) {
	__imp__sub_8234B5A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B5A8) {
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
	// lwz r11,536(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 536);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b5e8
	if (!ctx.cr6.eq) goto loc_8234B5E8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234b644
	if (ctx.cr6.eq) goto loc_8234B644;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8234b638
	goto loc_8234B638;
loc_8234B5E8:
	// lwz r11,540(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r11,540(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 540);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f2,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r5,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r11.u32);
	// lwz r4,536(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 536);
loc_8234B638:
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234B644;
	sub_8234B328(ctx, base);
loc_8234B644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B5A8) {
	__imp__sub_8234B5A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B654) {
	__imp__sub_8234B654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B658) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234b758
	if (ctx.cr6.eq) goto loc_8234B758;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8234b758
	if (ctx.cr6.eq) goto loc_8234B758;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,504(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 504);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f30,f9,f0,f8
	ctx.f30.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// bne cr6,0x8234b700
	if (!ctx.cr6.eq) goto loc_8234B700;
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234b700
	if (!ctx.cr6.gt) goto loc_8234B700;
	// lfs f12,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fdivs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f31,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fsel f0,f8,f0,f7
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f7.f64;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x8234b700
	if (!ctx.cr6.gt) goto loc_8234B700;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_8234B700:
	// lwz r4,488(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234b72c
	if (ctx.cr6.eq) goto loc_8234B72C;
	// lwz r5,492(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234b72c
	if (ctx.cr6.eq) goto loc_8234B72C;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fsubs f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// bl 0x8234b408
	ctx.lr = 0x8234B72C;
	sub_8234B408(ctx, base);
loc_8234B72C:
	// lwz r4,496(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234b758
	if (ctx.cr6.eq) goto loc_8234B758;
	// lwz r5,500(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8234b758
	if (ctx.cr6.eq) goto loc_8234B758;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8234b408
	ctx.lr = 0x8234B758;
	sub_8234B408(ctx, base);
loc_8234B758:
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

PPC_WEAK_FUNC(sub_8234B658) {
	__imp__sub_8234B658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,568(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 568);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f2,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f2.f64 : ctx.f11.f64;
	// fsel f1,f9,f0,f8
	ctx.f1.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B778) {
	__imp__sub_8234B778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B7CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234B7CC) {
	__imp__sub_8234B7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B7D0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r3,68
	ctx.r7.s64 = ctx.r3.s64 + 68;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// addi r6,r3,80
	ctx.r6.s64 = ctx.r3.s64 + 80;
	// lfs f12,-29224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29224);
	ctx.f12.f64 = double(temp.f32);
loc_8234B818:
	// lbzx r10,r6,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bge cr6,0x8234b86c
	if (!ctx.cr6.lt) goto loc_8234B86C;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,86(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 86);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b86c
	if (ctx.cr6.eq) goto loc_8234B86C;
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8234b86c
	if (!ctx.cr6.lt) goto loc_8234B86C;
	// lbz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 124);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234b87c
	if (ctx.cr6.eq) goto loc_8234B87C;
loc_8234B86C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8234b818
	if (ctx.cr6.lt) goto loc_8234B818;
loc_8234B87C:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,124(r31)
	PPC_STORE_U8(ctx.r31.u32 + 124, ctx.r8.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234b93c
	if (ctx.cr6.eq) goto loc_8234B93C;
	// addi r11,r11,145
	ctx.r11.s64 = ctx.r11.s64 + 145;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234b93c
	if (ctx.cr6.eq) goto loc_8234B93C;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f10,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,712(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 712);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fdivs f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fsubs f5,f7,f30
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f30.f64));
	// fsubs f4,f6,f30
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f2,f7
	ctx.f2.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// fsel f1,f5,f30,f7
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f30.f64 : ctx.f7.f64;
	// fsel f13,f4,f30,f6
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f30.f64 : ctx.f6.f64;
	// fsel f12,f2,f0,f1
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fsel f11,f3,f0,f13
	ctx.f11.f64 = ctx.f3.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fmadds f31,f11,f8,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f12.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8234b93c
	if (!ctx.cr6.gt) goto loc_8234B93C;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234B914;
	sub_8234B328(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b93c
	if (!ctx.cr6.eq) goto loc_8234B93C;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,580(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 580);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234B93C;
	sub_8234B328(ctx, base);
loc_8234B93C:
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

PPC_WEAK_FUNC(sub_8234B7D0) {
	__imp__sub_8234B7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234B95C) {
	__imp__sub_8234B95C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234B960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234B968;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x8234B970;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,436(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234b998
	if (!ctx.cr6.eq) goto loc_8234B998;
	// lwz r11,440(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ba98
	if (ctx.cr6.eq) goto loc_8234BA98;
loc_8234B998:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f30,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f12,f30
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234B9C0;
	sub_823DDE20(ctx, base);
	// lfs f11,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f7,f28,f10
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f10.f64));
	// fmuls f30,f8,f30
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fmuls f28,f7,f29
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234B9EC;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lbz r31,112(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// fabs f5,f28
	ctx.f5.u64 = ctx.f28.u64 & ~0x8000000000000000;
	// fsubs f4,f30,f6
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// fmuls f0,f4,f29
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f29.f64));
	// bgt cr6,0x8234ba18
	if (ctx.cr6.gt) goto loc_8234BA18;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8234ba1c
	if (!ctx.cr6.gt) goto loc_8234BA1C;
loc_8234BA18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8234BA1C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,112(r30)
	PPC_STORE_U8(ctx.r30.u32 + 112, ctx.r11.u8);
	// lwz r4,436(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8234ba5c
	if (ctx.cr6.eq) goto loc_8234BA5C;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ba5c
	if (ctx.cr6.eq) goto loc_8234BA5C;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234b328
	ctx.lr = 0x8234BA5C;
	sub_8234B328(ctx, base);
loc_8234BA5C:
	// lwz r4,440(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 440);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234ba98
	if (ctx.cr6.eq) goto loc_8234BA98;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234ba98
	if (ctx.cr6.eq) goto loc_8234BA98;
	// lbz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234ba98
	if (!ctx.cr6.eq) goto loc_8234BA98;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234b328
	ctx.lr = 0x8234BA98;
	sub_8234B328(ctx, base);
loc_8234BA98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8234BAA4;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234B960) {
	__imp__sub_8234B960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BAA8) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8234de90
	ctx.lr = 0x8234BAC4;
	sub_8234DE90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234d4a8
	ctx.lr = 0x8234BACC;
	sub_8234D4A8(ctx, base);
	// lwz r11,560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234bb20
	if (ctx.cr6.eq) goto loc_8234BB20;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8234baf4
	if (!ctx.cr6.gt) goto loc_8234BAF4;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8234bb20
	if (ctx.cr6.gt) goto loc_8234BB20;
loc_8234BAF4:
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stfs f31,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,560(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8234b328
	ctx.lr = 0x8234BB20;
	sub_8234B328(ctx, base);
loc_8234BB20:
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

PPC_WEAK_FUNC(sub_8234BAA8) {
	__imp__sub_8234BAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BB38) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8234de90
	ctx.lr = 0x8234BB54;
	sub_8234DE90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8234d4a8
	ctx.lr = 0x8234BB5C;
	sub_8234D4A8(ctx, base);
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 103, ctx.xer);
	// beq cr6,0x8234bb74
	if (ctx.cr6.eq) goto loc_8234BB74;
	// cmpwi cr6,r31,104
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 104, ctx.xer);
	// bne cr6,0x8234bb9c
	if (!ctx.cr6.eq) goto loc_8234BB9C;
	// lwz r4,552(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// b 0x8234bb78
	goto loc_8234BB78;
loc_8234BB74:
	// lwz r4,544(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
loc_8234BB78:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bb9c
	if (ctx.cr6.eq) goto loc_8234BB9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234BB9C;
	sub_8234B328(ctx, base);
loc_8234BB9C:
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

PPC_WEAK_FUNC(sub_8234BB38) {
	__imp__sub_8234BB38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234BBB4) {
	__imp__sub_8234BBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r10,508(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234bbf8
	if (ctx.cr6.eq) goto loc_8234BBF8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,512(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 512);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f2,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// lwz r4,508(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 508);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
loc_8234BBF8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234BBB8) {
	__imp__sub_8234BBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BC24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234BC24) {
	__imp__sub_8234BC24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BC28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// b 0x8234b328
	sub_8234B328(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234BC28) {
	__imp__sub_8234BC28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BC64) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234BC64) {
	__imp__sub_8234BC64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BC68) {
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
	// lwz r10,528(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234bcc4
	if (!ctx.cr6.eq) goto loc_8234BCC4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// lwz r4,524(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bd80
	if (ctx.cr6.eq) goto loc_8234BD80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b328
	ctx.lr = 0x8234BCC0;
	sub_8234B328(ctx, base);
	// b 0x8234bd80
	goto loc_8234BD80;
loc_8234BCC4:
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// lwz r10,532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// rlwinm r5,r6,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r5,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r4,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// beq cr6,0x8234bd50
	if (ctx.cr6.eq) goto loc_8234BD50;
	// lwz r4,524(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bd50
	if (ctx.cr6.eq) goto loc_8234BD50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b328
	ctx.lr = 0x8234BD40;
	sub_8234B328(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f31,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// b 0x8234bd80
	goto loc_8234BD80;
loc_8234BD50:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,528(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 528);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234BD6C;
	sub_8234B328(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r8,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r8.u8);
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_8234BD80:
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

PPC_WEAK_FUNC(sub_8234BC68) {
	__imp__sub_8234BC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BD98) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8234bdf8
	if (ctx.cr6.gt) goto loc_8234BDF8;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,524(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bf2c
	if (ctx.cr6.eq) goto loc_8234BF2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b328
	ctx.lr = 0x8234BDF4;
	sub_8234B328(ctx, base);
	// b 0x8234bf2c
	goto loc_8234BF2C;
loc_8234BDF8:
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234be5c
	if (!ctx.cr6.eq) goto loc_8234BE5C;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,532(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// lwz r9,528(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f9,f10
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x82364ab0
	ctx.lr = 0x8234BE48;
	sub_82364AB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b5a8
	ctx.lr = 0x8234BE58;
	sub_8234B5A8(ctx, base);
	// b 0x8234bf2c
	goto loc_8234BF2C;
loc_8234BE5C:
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8234bf10
	if (ctx.cr6.eq) goto loc_8234BF10;
	// lwz r9,524(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234bf10
	if (ctx.cr6.eq) goto loc_8234BF10;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r8,100(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f31,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x8234bee0
	if (!ctx.cr6.eq) goto loc_8234BEE0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// stb r10,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r10.u8);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lwz r8,532(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f7,f31,f8
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f8.f64));
	// stfs f7,104(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// lwz r6,528(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82364ab0
	ctx.lr = 0x8234BEE0;
	sub_82364AB0(ctx, base);
loc_8234BEE0:
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f2,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,524(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234BEFC;
	sub_8234B328(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x8234bf2c
	goto loc_8234BF2C;
loc_8234BF10:
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234bf2c
	if (ctx.cr6.eq) goto loc_8234BF2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bc68
	ctx.lr = 0x8234BF2C;
	sub_8234BC68(ctx, base);
loc_8234BF2C:
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

PPC_WEAK_FUNC(sub_8234BD98) {
	__imp__sub_8234BD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BF48) {
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
	// lwz r4,524(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bf88
	if (ctx.cr6.eq) goto loc_8234BF88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b328
	ctx.lr = 0x8234BF88;
	sub_8234B328(ctx, base);
loc_8234BF88:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234bfa8
	if (!ctx.cr6.eq) goto loc_8234BFA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234b5a8
	ctx.lr = 0x8234BFA8;
	sub_8234B5A8(ctx, base);
loc_8234BFA8:
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

PPC_WEAK_FUNC(sub_8234BF48) {
	__imp__sub_8234BF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234BFC0) {
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
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8234c020
	if (ctx.cr6.gt) goto loc_8234C020;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234c080
	if (ctx.cr6.eq) goto loc_8234C080;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234C01C;
	sub_8234B328(ctx, base);
	// b 0x8234c080
	goto loc_8234C080;
loc_8234C020:
	// lbz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234c080
	if (ctx.cr6.eq) goto loc_8234C080;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// lwz r9,536(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 536);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f31,f9,f10
	ctx.f31.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x82364ab0
	ctx.lr = 0x8234C070;
	sub_82364AB0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bc68
	ctx.lr = 0x8234C080;
	sub_8234BC68(ctx, base);
loc_8234C080:
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

PPC_WEAK_FUNC(sub_8234BFC0) {
	__imp__sub_8234BFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C09C) {
	__imp__sub_8234C09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C0A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8234bbb8
	sub_8234BBB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234C0A0) {
	__imp__sub_8234C0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C0B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234C0B4) {
	__imp__sub_8234C0B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C0B8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,520(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x8234c100
	if (ctx.cr6.eq) goto loc_8234C100;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8234b328
	ctx.lr = 0x8234C100;
	sub_8234B328(ctx, base);
loc_8234C100:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234c140
	if (ctx.cr6.eq) goto loc_8234C140;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r4,516(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234c160
	if (ctx.cr6.eq) goto loc_8234C160;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b328
	ctx.lr = 0x8234C13C;
	sub_8234B328(ctx, base);
	// b 0x8234c160
	goto loc_8234C160;
loc_8234C140:
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c160
	if (ctx.cr6.eq) goto loc_8234C160;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234bc68
	ctx.lr = 0x8234C160;
	sub_8234BC68(ctx, base);
loc_8234C160:
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

PPC_WEAK_FUNC(sub_8234C0B8) {
	__imp__sub_8234C0B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C17C) {
	__imp__sub_8234C17C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234C188;
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8234d4a8
	ctx.lr = 0x8234C1A4;
	sub_8234D4A8(ctx, base);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r7,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c1e0
	if (ctx.cr6.eq) goto loc_8234C1E0;
	// rlwinm r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c1e4
	if (ctx.cr6.eq) goto loc_8234C1E4;
loc_8234C1E0:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8234C1E4:
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r8,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r8.u8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f30,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// ble cr6,0x8234c26c
	if (!ctx.cr6.gt) goto loc_8234C26C;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8234c26c
	if (!ctx.cr6.lt) goto loc_8234C26C;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fdivs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fsubs f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f31,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fsel f4,f6,f30,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f30.f64 : ctx.f5.f64;
	// fsubs f3,f31,f4
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// stfs f3,84(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// b 0x8234c27c
	goto loc_8234C27C;
loc_8234C26C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,84(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
loc_8234C27C:
	// rlwinm r11,r7,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c2c8
	if (ctx.cr6.eq) goto loc_8234C2C8;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c2c8
	if (ctx.cr6.eq) goto loc_8234C2C8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lfs f1,716(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	ctx.f1.f64 = double(temp.f32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,-4620(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4620);
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x8234c2f8
	goto loc_8234C2F8;
loc_8234C2C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r11,-4624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4624);
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_8234C2F8:
	// lfs f3,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822d43a8
	ctx.lr = 0x8234C304;
	sub_822D43A8(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfs f1,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x8234c3cc
	if (ctx.cr6.gt) goto loc_8234C3CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8234c350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C350;
	// bdzf 4*cr6+eq,0x8234c390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C390;
	// bdzf 4*cr6+eq,0x8234c3a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C3A0;
	// bdzf 4*cr6+eq,0x8234c3b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8234C3B0;
	// bne cr6,0x8234c3c0
	if (!ctx.cr6.eq) goto loc_8234C3C0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234c3cc
	if (!ctx.cr6.eq) goto loc_8234C3CC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bbb8
	ctx.lr = 0x8234C34C;
	sub_8234BBB8(ctx, base);
	// b 0x8234c3cc
	goto loc_8234C3CC;
loc_8234C350:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8234c3cc
	if (ctx.cr6.gt) goto loc_8234C3CC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r4,520(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234c3cc
	if (ctx.cr6.eq) goto loc_8234C3CC;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b328
	ctx.lr = 0x8234C38C;
	sub_8234B328(ctx, base);
	// b 0x8234c3cc
	goto loc_8234C3CC;
loc_8234C390:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234c0b8
	ctx.lr = 0x8234C39C;
	sub_8234C0B8(ctx, base);
	// b 0x8234c3cc
	goto loc_8234C3CC;
loc_8234C3A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bd98
	ctx.lr = 0x8234C3AC;
	sub_8234BD98(ctx, base);
	// b 0x8234c3cc
	goto loc_8234C3CC;
loc_8234C3B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bf48
	ctx.lr = 0x8234C3BC;
	sub_8234BF48(ctx, base);
	// b 0x8234c3cc
	goto loc_8234C3CC;
loc_8234C3C0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234bfc0
	ctx.lr = 0x8234C3CC;
	sub_8234BFC0(ctx, base);
loc_8234C3CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b658
	ctx.lr = 0x8234C3D8;
	sub_8234B658(ctx, base);
	// lwz r4,568(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 568);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234c420
	if (ctx.cr6.eq) goto loc_8234C420;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,572(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f1,f9,f30,f8
	ctx.f1.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x8234c420
	if (!ctx.cr6.gt) goto loc_8234C420;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b328
	ctx.lr = 0x8234C420;
	sub_8234B328(ctx, base);
loc_8234C420:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234b7d0
	ctx.lr = 0x8234C430;
	sub_8234B7D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234b960
	ctx.lr = 0x8234C440;
	sub_8234B960(ctx, base);
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

PPC_WEAK_FUNC(sub_8234C180) {
	__imp__sub_8234C180(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de028
	ctx.lr = 0x8234C460;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r6,r11,-11144
	ctx.r6.s64 = ctx.r11.s64 + -11144;
	// addi r3,r10,-11160
	ctx.r3.s64 = ctx.r10.s64 + -11160;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8234C480;
	sub_822E15D0(ctx, base);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// addi r6,r8,-11196
	ctx.r6.s64 = ctx.r8.s64 + -11196;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,-4584(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4584, ctx.r3.u32);
	// addi r3,r7,-11212
	ctx.r3.s64 = ctx.r7.s64 + -11212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x8234C4A4;
	sub_822E15D0(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r3,-4596(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4596, ctx.r3.u32);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r9,-11228
	ctx.r3.s64 = ctx.r9.s64 + -11228;
	// lfs f31,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5812(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5812);
	ctx.f30.f64 = double(temp.f32);
	// addi r10,r10,-11256
	ctx.r10.s64 = ctx.r10.s64 + -11256;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f4,-8344(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8344);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// bl 0x822e16f0
	ctx.lr = 0x8234C4EC;
	sub_822E16F0(ctx, base);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// stw r3,-4592(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4592, ctx.r3.u32);
	// addi r10,r5,-11292
	ctx.r10.s64 = ctx.r5.s64 + -11292;
	// lfs f29,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r4,-11308
	ctx.r3.s64 = ctx.r4.s64 + -11308;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f4,-31048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -31048);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// bl 0x822e16f0
	ctx.lr = 0x8234C52C;
	sub_822E16F0(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r10,-11336
	ctx.r8.s64 = ctx.r10.s64 + -11336;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-4608(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4608, ctx.r3.u32);
	// addi r3,r9,-11352
	ctx.r3.s64 = ctx.r9.s64 + -11352;
	// bl 0x822e1660
	ctx.lr = 0x8234C558;
	sub_822E1660(ctx, base);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// stw r3,-4576(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4576, ctx.r3.u32);
	// addi r8,r6,-11412
	ctx.r8.s64 = ctx.r6.s64 + -11412;
	// lfs f3,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r5,-11436
	ctx.r3.s64 = ctx.r5.s64 + -11436;
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8234C588;
	sub_822E1660(ctx, base);
	// lis r4,-31815
	ctx.r4.s64 = -2085027840;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stw r3,-4600(r4)
	PPC_STORE_U32(ctx.r4.u32 + -4600, ctx.r3.u32);
	// addi r8,r9,-11472
	ctx.r8.s64 = ctx.r9.s64 + -11472;
	// addi r3,r7,-11496
	ctx.r3.s64 = ctx.r7.s64 + -11496;
	// lfs f29,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,5188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5188);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x8234C5C0;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r8,r4,-11528
	ctx.r8.s64 = ctx.r4.s64 + -11528;
	// stw r3,-4572(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4572, ctx.r3.u32);
	// addi r3,r11,-11548
	ctx.r3.s64 = ctx.r11.s64 + -11548;
	// lfs f28,6028(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6028);
	ctx.f28.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x8234C5F4;
	sub_822E1660(ctx, base);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// stw r3,-4588(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4588, ctx.r3.u32);
	// addi r3,r7,-11568
	ctx.r3.s64 = ctx.r7.s64 + -11568;
	// addi r8,r8,-11604
	ctx.r8.s64 = ctx.r8.s64 + -11604;
	// lfs f1,5004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5004);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x8234C624;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-11636
	ctx.r8.s64 = ctx.r5.s64 + -11636;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,-4604(r6)
	PPC_STORE_U32(ctx.r6.u32 + -4604, ctx.r3.u32);
	// addi r3,r4,-11652
	ctx.r3.s64 = ctx.r4.s64 + -11652;
	// bl 0x822e1660
	ctx.lr = 0x8234C650;
	sub_822E1660(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r7,r10,-11684
	ctx.r7.s64 = ctx.r10.s64 + -11684;
	// stw r3,-4456(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4456, ctx.r3.u32);
	// addi r4,r9,-32000
	ctx.r4.s64 = ctx.r9.s64 + -32000;
	// addi r3,r8,-11704
	ctx.r3.s64 = ctx.r8.s64 + -11704;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8234C67C;
	sub_822E1828(ctx, base);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// stw r3,-4580(r7)
	PPC_STORE_U32(ctx.r7.u32 + -4580, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x8234C690;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234C450) {
	__imp__sub_8234C450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C69C) {
	__imp__sub_8234C69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mulli r10,r3,56
	ctx.r10.s64 = ctx.r3.s64 * 56;
	// addi r11,r11,-4568
	ctx.r11.s64 = ctx.r11.s64 + -4568;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234C6A0) {
	__imp__sub_8234C6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C6B4) {
	__imp__sub_8234C6B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mulli r10,r3,52
	ctx.r10.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,-31984
	ctx.r11.s64 = ctx.r11.s64 + -31984;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234C6B8) {
	__imp__sub_8234C6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C6CC) {
	__imp__sub_8234C6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,112
	ctx.r5.s64 = 112;
	// addi r3,r11,-4568
	ctx.r3.s64 = ctx.r11.s64 + -4568;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234C6D0) {
	__imp__sub_8234C6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234C6E4) {
	__imp__sub_8234C6E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C6E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// li r4,112
	ctx.r4.s64 = 112;
	// addi r5,r10,-4568
	ctx.r5.s64 = ctx.r10.s64 + -4568;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_8234C6E8) {
	__imp__sub_8234C6E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C700) {
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r6,r8,23096
	ctx.r6.u64 = ctx.r8.u64 | 23096;
	// addi r9,r7,-4568
	ctx.r9.s64 = ctx.r7.s64 + -4568;
	// mulli r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 * 56;
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r5,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// stb r4,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r4.u8);
	// bne cr6,0x8234c768
	if (!ctx.cr6.eq) goto loc_8234C768;
loc_8234C760:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234c7b0
	goto loc_8234C7B0;
loc_8234C768:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,23288
	ctx.r9.u64 = ctx.r10.u64 | 23288;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x8234c760
	if (ctx.cr6.eq) goto loc_8234C760;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8234de90
	ctx.lr = 0x8234C790;
	sub_8234DE90(ctx, base);
	// bl 0x8234d4a8
	ctx.lr = 0x8234C794;
	sub_8234D4A8(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8234c7a8
	if (ctx.cr6.eq) goto loc_8234C7A8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8234c760
	if (!ctx.cr6.eq) goto loc_8234C760;
loc_8234C7A8:
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// li r3,1
	ctx.r3.s64 = 1;
loc_8234C7B0:
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

PPC_WEAK_FUNC(sub_8234C700) {
	__imp__sub_8234C700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C7C8) {
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
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r11,r11,23020
	ctx.r11.s64 = ctx.r11.s64 + 23020;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x8234c82c
	if (ctx.cr6.eq) goto loc_8234C82C;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8234C82C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82120788
	ctx.lr = 0x8234C838;
	sub_82120788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234C7C8) {
	__imp__sub_8234C7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8234C850;
	__savegprlr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x8211fa80
	ctx.lr = 0x8234C86C;
	sub_8211FA80(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x8234c940
	if (!ctx.cr6.gt) goto loc_8234C940;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234de90
	ctx.lr = 0x8234C884;
	sub_8234DE90(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r31,-1
	ctx.r4.s64 = ctx.r31.s64 + -1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x8234C8A0;
	sub_8211F9E8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x8234C8B0;
	sub_8211F9E8(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234c8d8
	if (!ctx.cr6.eq) goto loc_8234C8D8;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8234c8d8
	if (ctx.cr6.eq) goto loc_8234C8D8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8234c8f4
	goto loc_8234C8F4;
loc_8234C8D8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8234c8f8
	if (!ctx.cr6.eq) goto loc_8234C8F8;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234c8f8
	if (!ctx.cr6.eq) goto loc_8234C8F8;
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
loc_8234C8F4:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8234C8F8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234c91c
	if (ctx.cr6.eq) goto loc_8234C91C;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234c91c
	if (!ctx.cr6.eq) goto loc_8234C91C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8234C91C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c940
	if (ctx.cr6.eq) goto loc_8234C940;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 28, temp.u32);
	// stfs f0,32(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 32, temp.u32);
	// stfs f0,36(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 36, temp.u32);
	// stb r26,52(r29)
	PPC_STORE_U8(ctx.r29.u32 + 52, ctx.r26.u8);
loc_8234C940:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234C848) {
	__imp__sub_8234C848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234C948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8234C950;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x8234C970;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234de90
	ctx.lr = 0x8234C980;
	sub_8234DE90(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8234ca04
	if (ctx.cr6.eq) goto loc_8234CA04;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r5,222(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 222);
	// bl 0x820ee078
	ctx.lr = 0x8234C9B0;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234c9cc
	if (ctx.cr6.eq) goto loc_8234C9CC;
loc_8234C9B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7c78
	ctx.lr = 0x8234C9C4;
	sub_822D7C78(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8234C9CC:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8234CA04:
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// lhz r5,224(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 224);
	// bl 0x820ee078
	ctx.lr = 0x8234CA10;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8234c9b8
	if (!ctx.cr6.eq) goto loc_8234C9B8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,222(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 222);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ee078
	ctx.lr = 0x8234CA30;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234ca48
	if (ctx.cr6.eq) goto loc_8234CA48;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d7c78
	ctx.lr = 0x8234CA44;
	sub_822D7C78(ctx, base);
	// b 0x8234ca84
	goto loc_8234CA84;
loc_8234CA48:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f10,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r27)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x8234CA84;
	sub_822DA650(ctx, base);
loc_8234CA84:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,6024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f6,f9,f0,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f5,f8,f0,f11
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f5,8(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234C948) {
	__imp__sub_8234C948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234CAC4) {
	__imp__sub_8234CAC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234CAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8211fa80
	ctx.lr = 0x8234CAE4;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x8234cb9c
	if (!ctx.cr6.gt) goto loc_8234CB9C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x8234CAFC;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234cb9c
	if (ctx.cr6.eq) goto loc_8234CB9C;
	// lbz r11,126(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 126);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lbz r9,127(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 127);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// lfs f13,17312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17312);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f0,f9,f13
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8234cb80
	if (!ctx.cr6.gt) goto loc_8234CB80;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234CB80:
	// fsubs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234CB9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234CAC8) {
	__imp__sub_8234CAC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CBB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234CBB4) {
	__imp__sub_8234CBB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CBB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de024
	ctx.lr = 0x8234CBC8;
	__savefpr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f2
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f27,f1,f31
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CBEC;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f27,f0
	ctx.f13.f64 = double(float(ctx.f27.f64 - ctx.f0.f64));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CC0C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fneg f10,f28
	ctx.f10.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// fsubs f9,f31,f11
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f8,f9,f29
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fsubs f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f28.f64));
	// fsubs f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fsel f5,f7,f28,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f28.f64 : ctx.f8.f64;
	// fsel f1,f6,f10,f5
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f5.f64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x8234CC38;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234CBB8) {
	__imp__sub_8234CBB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234CC44) {
	__imp__sub_8234CC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234CC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8234CC50;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de014
	ctx.lr = 0x8234CC58;
	__savefpr_23(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// ori r9,r11,22908
	ctx.r9.u64 = ctx.r11.u64 | 22908;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// ori r8,r10,23288
	ctx.r8.u64 = ctx.r10.u64 | 23288;
	// lis r7,-32181
	ctx.r7.s64 = -2109014016;
	// lwzx r5,r4,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lwzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// addi r11,r7,-5696
	ctx.r11.s64 = ctx.r7.s64 + -5696;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,5804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmuls f27,f11,f0
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// bl 0x8234de90
	ctx.lr = 0x8234CCBC;
	sub_8234DE90(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8234d4a8
	ctx.lr = 0x8234CCC4;
	sub_8234D4A8(ctx, base);
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r10,r8,56
	ctx.r10.s64 = ctx.r8.s64 * 56;
	// addi r11,r7,-4568
	ctx.r11.s64 = ctx.r7.s64 + -4568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234c948
	ctx.lr = 0x8234CCF0;
	sub_8234C948(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822da650
	ctx.lr = 0x8234CCFC;
	sub_822DA650(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234c848
	ctx.lr = 0x8234CD10;
	sub_8234C848(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32190
	ctx.r6.s64 = -2109603840;
	// lfs f10,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// fabs f26,f10
	ctx.f26.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// addi r11,r6,-31984
	ctx.r11.s64 = ctx.r6.s64 + -31984;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234cac8
	ctx.lr = 0x8234CD3C;
	sub_8234CAC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,380(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 380);
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
	// lfs f25,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f25.f64 = double(temp.f32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// beq cr6,0x8234ce30
	if (ctx.cr6.eq) goto loc_8234CE30;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,-4584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4584);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f13,f27,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f27.f64 + ctx.f10.f64));
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmadds f8,f11,f27,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f9.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8234ce38
	if (!ctx.cr6.eq) goto loc_8234CE38;
	// lfs f2,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8234cbb8
	ctx.lr = 0x8234CDB0;
	sub_8234CBB8(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f2,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234cbb8
	ctx.lr = 0x8234CDC0;
	sub_8234CBB8(ctx, base);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bne cr6,0x8234ce38
	if (!ctx.cr6.eq) goto loc_8234CE38;
	// fcmpu cr6,f29,f31
	ctx.cr6.compare(ctx.f29.f64, ctx.f31.f64);
	// bne cr6,0x8234ce38
	if (!ctx.cr6.eq) goto loc_8234CE38;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-26376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -26376);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// lfs f0,6016(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6016);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f25
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f25.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f10,f12,f25,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f25.f64 : ctx.f13.f64;
	// fsel f9,f11,f31,f10
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// fmuls f30,f9,f0
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// bl 0x822d4508
	ctx.lr = 0x8234CE10;
	sub_822D4508(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d4508
	ctx.lr = 0x8234CE28;
	sub_822D4508(ctx, base);
	// stfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x8234ce38
	goto loc_8234CE38;
loc_8234CE30:
	// stfs f31,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8234CE38:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f24,f0,f30
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CE58;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,388(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 388);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f23,f11,f30
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// lfs f28,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f10,f24,f13
	ctx.f10.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fadds f1,f23,f29
	ctx.f1.f64 = double(float(ctx.f23.f64 + ctx.f29.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x8234CE88;
	sub_823DDE20(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f24,f6,f30
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fsubs f5,f23,f7
	ctx.f5.f64 = double(float(ctx.f23.f64 - ctx.f7.f64));
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f4,84(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x8234CEA8;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f2,392(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f1,f24,f3
	ctx.f1.f64 = double(float(ctx.f24.f64 - ctx.f3.f64));
	// fmuls f0,f1,f28
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x8234CECC;
	sub_822DA650(ctx, base);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f24,f10,f30
	ctx.f24.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CEE4;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// fsubs f5,f24,f9
	ctx.f5.f64 = double(float(ctx.f24.f64 - ctx.f9.f64));
	// fmuls f24,f6,f30
	ctx.f24.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fmuls f4,f5,f28
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CF0C;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f1,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fsubs f13,f24,f3
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f3.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234CF34;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x8234CF50;
	sub_822DA650(ctx, base);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d5c30
	ctx.lr = 0x8234CF60;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822d7c78
	ctx.lr = 0x8234CF6C;
	sub_822D7C78(ctx, base);
	// lfs f8,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,404(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f28,f8,f26,f7
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8234cfb8
	if (!ctx.cr6.gt) goto loc_8234CFB8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f12,396(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,400(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fdivs f9,f26,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 / ctx.f10.f64));
	// fsubs f8,f9,f25
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f25.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f8,f25,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f25.f64 : ctx.f9.f64;
	// fsel f5,f7,f31,f6
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// fmuls f30,f12,f5
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f29,f11,f5
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// b 0x8234cfc0
	goto loc_8234CFC0;
loc_8234CFB8:
	// lfs f30,396(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 396);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,400(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 400);
	ctx.f29.f64 = double(temp.f32);
loc_8234CFC0:
	// lfs f3,384(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x8234d0b8
	if (!ctx.cr6.gt) goto loc_8234D0B8;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d0b8
	if (ctx.cr6.eq) goto loc_8234D0B8;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// bl 0x822d4508
	ctx.lr = 0x8234CFEC;
	sub_822D4508(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4508
	ctx.lr = 0x8234D004;
	sub_822D4508(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d4508
	ctx.lr = 0x8234D01C;
	sub_822D4508(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x822d44d0
	ctx.lr = 0x8234D038;
	sub_822D44D0(ctx, base);
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d44d0
	ctx.lr = 0x8234D050;
	sub_822D44D0(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d44d0
	ctx.lr = 0x8234D068;
	sub_822D44D0(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234D080;
	sub_822D44D0(ctx, base);
	// stfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234D098;
	sub_822D44D0(ctx, base);
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f3,384(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 384);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234D0B0;
	sub_822D44D0(ctx, base);
	// stfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x8234d104
	goto loc_8234D104;
loc_8234D0B8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r26,r31,16
	ctx.r26.s64 = ctx.r31.s64 + 16;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f12,12(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f10,20(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f9,24(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// stfs f28,40(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f30,44(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f29,48(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_8234D104:
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822da650
	ctx.lr = 0x8234D110;
	sub_822DA650(ctx, base);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// lfs f11,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f0,f6,f12,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fmadds f2,f10,f12,f11
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f2,4(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fmadds f1,f8,f12,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f4,f11,f2
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f13,f5,f11,f1
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f12,4(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// fmadds f0,f3,f11,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,0(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8234d1e4
	if (ctx.cr6.lt) goto loc_8234D1E4;
	// beq cr6,0x8234d1b8
	if (ctx.cr6.eq) goto loc_8234D1B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8234d1f0
	if (!ctx.cr6.lt) goto loc_8234D1F0;
	// lfs f11,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f11,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f11,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f7,f11,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,0(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f6,4(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f5,8(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// b 0x8234d1f0
	goto loc_8234D1F0;
loc_8234D1B8:
	// lfs f11,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f11,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f13.f64));
	// lfs f7,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f11,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f5,f7,f11,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,0(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f6,4(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f5,8(r28)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// b 0x8234d1f0
	goto loc_8234D1F0;
loc_8234D1E4:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
loc_8234D1F0:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// lfs f11,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f6,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f8,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f5,f8,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f1,f3,f8,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f4,0(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f2,4(r28)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f1,8(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// bl 0x8234c7c8
	ctx.lr = 0x8234D24C;
	sub_8234C7C8(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de060
	ctx.lr = 0x8234D258;
	__restfpr_23(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234CC48) {
	__imp__sub_8234CC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D25C) {
	__imp__sub_8234D25C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,-4568
	ctx.r11.s64 = ctx.r11.s64 + -4568;
	// mulli r9,r10,56
	ctx.r9.s64 = ctx.r10.s64 * 56;
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D260) {
	__imp__sub_8234D260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D280) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r3,r7,-11068
	ctx.r3.s64 = ctx.r7.s64 + -11068;
	// lfs f3,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r8,-11120
	ctx.r8.s64 = ctx.r8.s64 + -11120;
	// lfs f2,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,26980(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 26980);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x8234D2BC;
	sub_822E1660(ctx, base);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// stw r3,3744(r6)
	PPC_STORE_U32(ctx.r6.u32 + 3744, ctx.r3.u32);
	// bl 0x8234c450
	ctx.lr = 0x8234D2C8;
	sub_8234C450(ctx, base);
	// bl 0x8234b208
	ctx.lr = 0x8234D2CC;
	sub_8234B208(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D280) {
	__imp__sub_8234D280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D2DC) {
	__imp__sub_8234D2DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234D2E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r29,r11,-4448
	ctx.r29.s64 = ctx.r11.s64 + -4448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,8200
	ctx.r3.s64 = ctx.r29.s64 + 8200;
	// bl 0x822dd778
	ctx.lr = 0x8234D304;
	sub_822DD778(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822dd778
	ctx.lr = 0x8234D314;
	sub_822DD778(ctx, base);
	// addi r11,r29,8200
	ctx.r11.s64 = ctx.r29.s64 + 8200;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8234D320:
	// addi r3,r30,1720
	ctx.r3.s64 = ctx.r30.s64 + 1720;
	// bl 0x821201a0
	ctx.lr = 0x8234D328;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234d33c
	if (ctx.cr6.eq) goto loc_8234D33C;
	// bl 0x82350f50
	ctx.lr = 0x8234D338;
	sub_82350F50(ctx, base);
	// b 0x8234d340
	goto loc_8234D340;
loc_8234D33C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8234D340:
	// addi r11,r29,8200
	ctx.r11.s64 = ctx.r29.s64 + 8200;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8234d320
	if (ctx.cr6.lt) goto loc_8234D320;
	// bl 0x8234c6d0
	ctx.lr = 0x8234D360;
	sub_8234C6D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234D2E0) {
	__imp__sub_8234D2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D368) {
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
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r10,-4448
	ctx.r5.s64 = ctx.r10.s64 + -4448;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234D398;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234c6e8
	ctx.lr = 0x8234D3A0;
	sub_8234C6E8(ctx, base);
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

PPC_WEAK_FUNC(sub_8234D368) {
	__imp__sub_8234D368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D3B4) {
	__imp__sub_8234D3B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8234d3cc
	if (!ctx.cr6.eq) goto loc_8234D3CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234D3CC:
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D3B8) {
	__imp__sub_8234D3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D3DC) {
	__imp__sub_8234D3DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// rlwinm r3,r11,26,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D3E0) {
	__imp__sub_8234D3E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D3EC) {
	__imp__sub_8234D3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D3F0) {
	__imp__sub_8234D3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D3FC) {
	__imp__sub_8234D3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D400) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,296(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 296);
	// clrlwi r3,r11,26
	ctx.r3.u64 = ctx.r11.u32 & 0x3F;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D400) {
	__imp__sub_8234D400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D40C) {
	__imp__sub_8234D40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D410) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// rlwinm r10,r4,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,-4448
	ctx.r11.s64 = ctx.r11.s64 + -4448;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D410) {
	__imp__sub_8234D410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D424) {
	__imp__sub_8234D424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D428) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// addi r11,r9,-5696
	ctx.r11.s64 = ctx.r9.s64 + -5696;
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,380(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8234d454
	if (!ctx.cr6.eq) goto loc_8234D454;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8234D454:
	// lbz r11,208(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D428) {
	__imp__sub_8234D428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D468) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82350f50
	ctx.lr = 0x8234D480;
	sub_82350F50(ctx, base);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,3752
	ctx.r9.s64 = ctx.r11.s64 + 3752;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_8234D468) {
	__imp__sub_8234D468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D4A4) {
	__imp__sub_8234D4A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D4A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// addi r9,r10,3752
	ctx.r9.s64 = ctx.r10.s64 + 3752;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D4A8) {
	__imp__sub_8234D4A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234D4C8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x8234D4D0;
	__savefpr_28(ctx, base);
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f0,5804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
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
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// ble cr6,0x8234d5fc
	if (!ctx.cr6.gt) goto loc_8234D5FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8231f840
	ctx.lr = 0x8234D544;
	sub_8231F840(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x8234D554;
	sub_8231F840(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f30,f7,f0
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// bl 0x822da650
	ctx.lr = 0x8234D59C;
	sub_822DA650(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f0,-13272(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13272);
	ctx.f0.f64 = double(temp.f32);
loc_8234D5B4:
	// lfs f13,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f30,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmadds f8,f10,f29,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f9.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x8234d5e0
	if (!ctx.cr6.lt) goto loc_8234D5E0;
	// stfs f28,0(r10)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_8234D5E0:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8234d5b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234D5B4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8234D5F8;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234D5FC:
	// stfs f28,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f28,4(r29)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f28,8(r29)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x8234D614;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234D4C0) {
	__imp__sub_8234D4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234D620;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f13,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x8234d6fc
	if (!ctx.cr6.gt) goto loc_8234D6FC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x8231f840
	ctx.lr = 0x8234D698;
	sub_8231F840(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,260
	ctx.r3.s64 = ctx.r29.s64 + 260;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8231f840
	ctx.lr = 0x8234D6A8;
	sub_8231F840(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234D6FC:
	// stfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234D618) {
	__imp__sub_8234D618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D714) {
	__imp__sub_8234D714(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r8,3752
	ctx.r6.s64 = ctx.r8.s64 + 3752;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,-11040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11040);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f12,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// bne cr6,0x8234d79c
	if (!ctx.cr6.eq) goto loc_8234D79C;
	// lfs f10,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f11
	ctx.f9.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f6,f9
	ctx.cr6.compare(ctx.f6.f64, ctx.f9.f64);
	// ble cr6,0x8234d79c
	if (!ctx.cr6.gt) goto loc_8234D79C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8234D79C:
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D718) {
	__imp__sub_8234D718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D7AC) {
	__imp__sub_8234D7AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,254
	ctx.r11.s64 = 254;
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// stb r11,92(r3)
	PPC_STORE_U8(ctx.r3.u32 + 92, ctx.r11.u8);
	// stb r11,93(r3)
	PPC_STORE_U8(ctx.r3.u32 + 93, ctx.r11.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r11,94(r3)
	PPC_STORE_U8(ctx.r3.u32 + 94, ctx.r11.u8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8234D7D0:
	// stbu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8234d7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234D7D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234D7B0) {
	__imp__sub_8234D7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234D7DC) {
	__imp__sub_8234D7DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234D7E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8234D7E8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de01c
	ctx.lr = 0x8234D7F0;
	__savefpr_25(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f27,180(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 180);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,304(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// lfs f30,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// fmuls f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addis r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r30,22904
	ctx.r30.s64 = ctx.r30.s64 + 22904;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f31,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fadds f1,f26,f31
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f31.f64));
	// lfs f25,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x823dde20
	ctx.lr = 0x8234D84C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f29,2412(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,-9656(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -9656);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f25
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fmadds f1,f9,f28,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D874;
	sub_823DDE20(ctx, base);
	// fctiwz f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r3,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r3.u16);
	// lfs f27,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f27.f64 = double(temp.f32);
	// lfs f7,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f27
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f6,f30
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fadds f1,f25,f31
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D8A0;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fsubs f4,f25,f5
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f5.f64));
	// fmuls f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmadds f2,f3,f29,f27
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fmadds f1,f2,f28,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D8B8;
	sub_823DDE20(ctx, base);
	// fctiwz f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// lfs f27,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,308(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f13,f30
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f25,f31
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D8E4;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f25,f12
	ctx.f11.f64 = double(float(ctx.f25.f64 - ctx.f12.f64));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fmadds f1,f9,f28,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D8FC;
	sub_823DDE20(ctx, base);
	// fctiwz f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r10,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r10.u16);
	// lfs f27,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f27.f64 = double(temp.f32);
	// lfs f7,316(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f27
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f27.f64));
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f6,f30
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// fadds f1,f25,f31
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D928;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// fsubs f4,f25,f5
	ctx.f4.f64 = double(float(ctx.f25.f64 - ctx.f5.f64));
	// fmuls f3,f4,f26
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmadds f2,f3,f29,f27
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fmadds f1,f2,f28,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D940;
	sub_823DDE20(ctx, base);
	// fctiwz f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r9,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r9.u16);
	// lfs f27,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,312(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f26,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f30,f13,f30
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D96C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmadds f9,f10,f29,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f27.f64));
	// fmadds f1,f9,f28,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234D984;
	sub_823DDE20(ctx, base);
	// fctiwz f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// sth r8,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r8.u16);
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r6,344(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lfs f0,5804(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// addi r3,r31,86
	ctx.r3.s64 = ctx.r31.s64 + 86;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// bl 0x822dd778
	ctx.lr = 0x8234D9CC;
	sub_822DD778(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r10,-25976
	ctx.r30.s64 = ctx.r10.s64 + -25976;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// lhz r4,388(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 388);
	// bl 0x822efc98
	ctx.lr = 0x8234D9E4;
	sub_822EFC98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,390(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 390);
	// addi r5,r31,93
	ctx.r5.s64 = ctx.r31.s64 + 93;
	// bl 0x822efc98
	ctx.lr = 0x8234D9F4;
	sub_822EFC98(ctx, base);
	// addi r5,r31,94
	ctx.r5.s64 = ctx.r31.s64 + 94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,394(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 394);
	// bl 0x822efc98
	ctx.lr = 0x8234DA04;
	sub_822EFC98(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,3
	ctx.r10.s64 = ctx.r31.s64 + 3;
loc_8234DA0C:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x8234da28
	if (ctx.cr6.eq) goto loc_8234DA28;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8234da0c
	if (ctx.cr6.lt) goto loc_8234DA0C;
	// b 0x8234da88
	goto loc_8234DA88;
loc_8234DA28:
	// addis r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 65536;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,22952
	ctx.r11.s64 = ctx.r11.s64 + 22952;
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f29,f10,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f28,f9,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// bl 0x8210ff80
	ctx.lr = 0x8234DA60;
	sub_8210FF80(ctx, base);
	// fmuls f8,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lwz r11,3744(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3744);
	// fmadds f7,f28,f28,f8
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f28.f64 + ctx.f8.f64));
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f30,f30,f7
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fmuls f3,f4,f1
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// fcmpu cr6,f3,f6
	ctx.cr6.compare(ctx.f3.f64, ctx.f6.f64);
	// ble cr6,0x8234dab4
	if (!ctx.cr6.gt) goto loc_8234DAB4;
loc_8234DA88:
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// li r9,254
	ctx.r9.s64 = 254;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234DA9C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8234da9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234DA9C;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de068
	ctx.lr = 0x8234DAB0;
	__restfpr_25(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8234DAB4:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f28,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f28.f64 = double(temp.f32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x8234DAC4;
	sub_822DA650(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f13,184(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f12,188(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// bl 0x822f1eb8
	ctx.lr = 0x8234DAE8;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b40
	ctx.lr = 0x8234DAEC;
	sub_82300B40(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r11,-31828
	ctx.r27.s64 = ctx.r11.s64 + -31828;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lfs f29,2956(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2956);
	ctx.f29.f64 = double(temp.f32);
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lfs f30,3844(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3844);
	ctx.f30.f64 = double(temp.f32);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// li r26,6
	ctx.r26.s64 = 6;
	// addi r24,r11,-9672
	ctx.r24.s64 = ctx.r11.s64 + -9672;
loc_8234DB1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x822efc98
	ctx.lr = 0x8234DB30;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8234dbe4
	if (ctx.cr6.eq) goto loc_8234DBE4;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rotlwi r11,r11,5
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x822d67f0
	ctx.lr = 0x8234DB54;
	sub_822D67F0(ctx, base);
	// fneg f8,f28
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// lfs f0,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r8,529
	ctx.r8.s64 = 529;
	// lfs f12,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f0,f30,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f13.f64));
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f6,f12,f30,f11
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f11.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmadds f5,f10,f30,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lhz r7,334(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// fmadds f4,f0,f8,f13
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f3,f12,f8,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f11.f64));
	// stfs f3,108(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f2,f10,f8,f9
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8211ecc0
	ctx.lr = 0x8234DBBC;
	sub_8211ECC0(ctx, base);
	// lfs f1,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f0,f1,f29,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f31.f64));
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// srawi r9,r10,20
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 20;
	// clrlwi r8,r9,27
	ctx.r8.u64 = ctx.r9.u32 & 0x1F;
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// sth r7,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r7.u16);
	// stb r8,6(r30)
	PPC_STORE_U8(ctx.r30.u32 + 6, ctx.r8.u8);
loc_8234DBE4:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x8234db1c
	if (!ctx.cr0.eq) goto loc_8234DB1C;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de068
	ctx.lr = 0x8234DC04;
	__restfpr_25(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234D7E0) {
	__imp__sub_8234D7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DC08) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,334(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 334);
	// b 0x82284650
	sub_82284650(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234DC08) {
	__imp__sub_8234DC08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8234DC20;
	__savegprlr_27(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8234dd68
	if (!ctx.cr6.gt) goto loc_8234DD68;
	// cmpwi cr6,r4,2046
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2046, ctx.xer);
	// bge cr6,0x8234dd68
	if (!ctx.cr6.lt) goto loc_8234DD68;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 208);
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bne cr6,0x8234dd68
	if (!ctx.cr6.eq) goto loc_8234DD68;
	// addi r29,r30,136
	ctx.r29.s64 = ctx.r30.s64 + 136;
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8231f840
	ctx.lr = 0x8234DC70;
	sub_8231F840(ctx, base);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8231f840
	ctx.lr = 0x8234DC80;
	sub_8231F840(ctx, base);
	// addi r30,r30,100
	ctx.r30.s64 = ctx.r30.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8231f840
	ctx.lr = 0x8234DC94;
	sub_8231F840(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231f840
	ctx.lr = 0x8234DCA4;
	sub_8231F840(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822da650
	ctx.lr = 0x8234DCB0;
	sub_822DA650(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822da650
	ctx.lr = 0x8234DCBC;
	sub_822DA650(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d6378
	ctx.lr = 0x8234DCC8;
	sub_822D6378(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d5c30
	ctx.lr = 0x8234DCD8;
	sub_822D5C30(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f9,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f7,f6,f12
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f3,f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// lfs f9,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f1,f1,f8,f10
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f10.f64));
	// lfs f6,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f11,f2,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fmadds f11,f9,f2,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f10,f6,f2,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f0.f64));
	// fadds f9,f13,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fadds f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfs f7,8(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_8234DD68:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234DC18) {
	__imp__sub_8234DC18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DD70) {
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
	// cmpwi cr6,r5,102
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 102, ctx.xer);
	// beq cr6,0x8234dda4
	if (ctx.cr6.eq) goto loc_8234DDA4;
	// ble cr6,0x8234ddc8
	if (!ctx.cr6.gt) goto loc_8234DDC8;
	// cmpwi cr6,r5,104
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 104, ctx.xer);
	// bgt cr6,0x8234ddc8
	if (ctx.cr6.gt) goto loc_8234DDC8;
	// bl 0x8234bb38
	ctx.lr = 0x8234DD94;
	sub_8234BB38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8234DDA4:
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x8234baa8
	ctx.lr = 0x8234DDC8;
	sub_8234BAA8(ctx, base);
loc_8234DDC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234DD70) {
	__imp__sub_8234DD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DDD8) {
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
	// addi r6,r11,23096
	ctx.r6.s64 = ctx.r11.s64 + 23096;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// rlwinm r3,r5,12,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234DDD8) {
	__imp__sub_8234DDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DE00) {
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
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r11,r11,-4448
	ctx.r11.s64 = ctx.r11.s64 + -4448;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8234DE20:
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8234de50
	if (ctx.cr6.eq) goto loc_8234DE50;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r10,r11,8192
	ctx.r10.s64 = ctx.r11.s64 + 8192;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8234de20
	if (ctx.cr6.lt) goto loc_8234DE20;
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
loc_8234DE50:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,-11032
	ctx.r4.s64 = ctx.r11.s64 + -11032;
	// bl 0x82280900
	ctx.lr = 0x8234DE68;
	sub_82280900(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x8234DE78;
	sub_822DD778(ctx, base);
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

PPC_WEAK_FUNC(sub_8234DE00) {
	__imp__sub_8234DE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DE8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234DE8C) {
	__imp__sub_8234DE8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DE90) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,296(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// addi r11,r9,-4448
	ctx.r11.s64 = ctx.r9.s64 + -4448;
	// rlwinm r10,r10,7,19,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1F80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234DE90) {
	__imp__sub_8234DE90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234DEB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,296(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrlwi r28,r11,26
	ctx.r28.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r10,-4448
	ctx.r11.s64 = ctx.r10.s64 + -4448;
	// rlwinm r10,r28,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 7) & 0xFFFFFF80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822dd778
	ctx.lr = 0x8234DEE4;
	sub_822DD778(ctx, base);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// ori r6,r8,61924
	ctx.r6.u64 = ctx.r8.u64 | 61924;
	// addis r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 65536;
	// mullw r10,r29,r6
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r6.s32);
	// addi r9,r11,22912
	ctx.r9.s64 = ctx.r11.s64 + 22912;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r8,-10952
	ctx.r4.s64 = ctx.r8.s64 + -10952;
	// li r3,6
	ctx.r3.s64 = 6;
	// lwz r7,296(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	// rlwinm r6,r7,26,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x1F;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r6,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lhz r10,334(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82280900
	ctx.lr = 0x8234DF44;
	sub_82280900(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,254
	ctx.r11.s64 = 254;
	// addi r9,r30,80
	ctx.r9.s64 = ctx.r30.s64 + 80;
	// stb r11,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r11.u8);
	// stb r11,93(r30)
	PPC_STORE_U8(ctx.r30.u32 + 93, ctx.r11.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stb r11,94(r30)
	PPC_STORE_U8(ctx.r30.u32 + 94, ctx.r11.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8234DF64:
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8234df64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234DF64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b2d8
	ctx.lr = 0x8234DF74;
	sub_8234B2D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234DEA8) {
	__imp__sub_8234DEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234DF7C) {
	__imp__sub_8234DF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234DF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234DF88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r8,296(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 296);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// ori r6,r11,61924
	ctx.r6.u64 = ctx.r11.u64 | 61924;
	// lis r5,-31815
	ctx.r5.s64 = -2085027840;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mullw r10,r3,r6
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// addi r9,r5,-4448
	ctx.r9.s64 = ctx.r5.s64 + -4448;
	// rlwinm r8,r8,7,19,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x1F80;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ori r10,r4,22912
	ctx.r10.u64 = ctx.r4.u64 | 22912;
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r8.u32);
	// lwz r6,300(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	// clrlwi r11,r6,26
	ctx.r11.u64 = ctx.r6.u32 & 0x3F;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bl 0x8234d4c0
	ctx.lr = 0x8234DFF8;
	sub_8234D4C0(ctx, base);
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234d618
	ctx.lr = 0x8234E008;
	sub_8234D618(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d718
	ctx.lr = 0x8234E010;
	sub_8234D718(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234c180
	ctx.lr = 0x8234E020;
	sub_8234C180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234DF80) {
	__imp__sub_8234DF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234E030;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,380(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 380);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234e15c
	if (ctx.cr6.eq) goto loc_8234E15C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x8234E058;
	sub_82284650(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8234e15c
	if (ctx.cr6.eq) goto loc_8234E15C;
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8234d7e0
	ctx.lr = 0x8234E08C;
	sub_8234D7E0(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x8234e0a0
	if (!ctx.cr6.eq) goto loc_8234E0A0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8234e0ac
	goto loc_8234E0AC;
loc_8234E0A0:
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8234E0AC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8234e110
	if (!ctx.cr6.eq) goto loc_8234E110;
	// lwz r11,296(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8234df80
	ctx.lr = 0x8234E0CC;
	sub_8234DF80(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// addi r11,r9,-4448
	ctx.r11.s64 = ctx.r9.s64 + -4448;
	// rlwinm r7,r30,7,19,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0x1F80;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwzx r4,r29,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfs f0,5804(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// std r3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfsx f13,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmsubs f1,f10,f0,f13
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f13.f64));
	// b 0x8234e118
	goto loc_8234E118;
loc_8234E110:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_8234E118:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// rlwimi r6,r10,2,28,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFFFFFFFC0F) | (ctx.r6.u64 & 0x3F0);
	// lfs f0,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,334(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82386568
	ctx.lr = 0x8234E15C;
	sub_82386568(ctx, base);
loc_8234E15C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234E028) {
	__imp__sub_8234E028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E164) {
	__imp__sub_8234E164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E168) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x8234E1AC;
	sub_822DA518(ctx, base);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,-11860(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11860);
	// lfs f12,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x8234e1d8
	if (ctx.cr6.gt) goto loc_8234E1D8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8234E1D8:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r11,-11832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11832);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x8234e1f0
	if (ctx.cr6.gt) goto loc_8234E1F0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_8234E1F0:
	// lfs f12,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f4,f7,f8,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f31,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f3,504(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 504, temp.u32);
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f12,f2,f8,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f13.f64));
	// fmadds f10,f1,f31,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f10,508(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 508, temp.u32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f7,f31,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f3,512(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f31,516(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stfs f31,524(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 524, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_8234E168) {
	__imp__sub_8234E168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E278) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E278) {
	__imp__sub_8234E278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E28C) {
	__imp__sub_8234E28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234E298;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x8234E2A0;
	__savefpr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,6
	ctx.r11.s64 = ctx.r3.s64 + 6;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lfs f27,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f27.f64 = double(temp.f32);
	// lfsx f0,r29,r8
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f29,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f24,f13,f27
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f1,f24,f29
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234E2E8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f26,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f26.f64 = double(temp.f32);
	// lfs f13,5992(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5992);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f24,f12
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f12.f64));
	// fmuls f0,f11,f26
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f13
	ctx.cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bge cr6,0x8234e350
	if (!ctx.cr6.lt) goto loc_8234E350;
	// addi r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 35;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,-10868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10868);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8234e350
	if (!ctx.cr6.lt) goto loc_8234E350;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfsx f25,r29,r31
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x8234E34C;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E350:
	// addi r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 35;
	// addi r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 + 12;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f11,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f2,r8,r31
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f2.f64 = double(temp.f32);
	// fabs f12,f1
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x8234e3b4
	if (ctx.cr6.lt) goto loc_8234E3B4;
	// fdivs f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 / ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fmuls f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fcmpu cr6,f9,f5
	ctx.cr6.compare(ctx.f9.f64, ctx.f5.f64);
	// bgt cr6,0x8234e3b4
	if (ctx.cr6.gt) goto loc_8234E3B4;
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// b 0x8234e3b8
	goto loc_8234E3B8;
loc_8234E3B4:
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
loc_8234E3B8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x8234e3c4
	if (!ctx.cr6.lt) goto loc_8234E3C4;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_8234E3C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f31,-23144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f13,f3,f31
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8234e400
	if (!ctx.cr6.lt) goto loc_8234E400;
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8234e400
	if (!ctx.cr6.lt) goto loc_8234E400;
	// stfsx f25,r29,r31
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// stfsx f11,r30,r31
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x8234E3FC;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E400:
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x823467c0
	ctx.lr = 0x8234E408;
	sub_823467C0(ctx, base);
	// lfsx f0,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f1,f31,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfsx f1,r30,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// stfsx f13,r29,r31
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// fmuls f31,f13,f27
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fadds f1,f31,f29
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234E424;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fmuls f10,f11,f26
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// stfsx f10,r29,r31
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x8234E440;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234E290) {
	__imp__sub_8234E290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E444) {
	__imp__sub_8234E444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234E450;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,672(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8234e480
	if (!ctx.cr6.eq) goto loc_8234E480;
	// stfs f0,684(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stfs f0,688(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// stfs f0,692(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E480:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r30,3
	ctx.r30.s64 = 3;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_8234E48C:
	// lfs f0,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8222fd88
	ctx.lr = 0x8234E49C;
	sub_8222FD88(ctx, base);
	// stfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8234e48c
	if (!ctx.cr0.eq) goto loc_8234E48C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,684
	ctx.r11.s64 = ctx.r31.s64 + 684;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f9,f13,f0,f12
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// stfs f9,684(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// lfs f8,688(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 688);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f8,f0,f11
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f11.f64)));
	// stfs f7,688(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 688, temp.u32);
	// lfs f6,692(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f5,f6,f0,f10
	ctx.f5.f64 = double(float(-(ctx.f6.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f5,692(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 692, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234E448) {
	__imp__sub_8234E448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E4EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E4EC) {
	__imp__sub_8234E4EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234E4F8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x8234E500;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,784(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,216
	ctx.r31.s64 = ctx.r3.s64 + 216;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234e578
	if (ctx.cr6.eq) goto loc_8234E578;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-392
	ctx.r10.s64 = ctx.r11.s64 + -392;
	// lfs f11,-392(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -392);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-388(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -388);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,-384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -384);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d4ed0
	ctx.lr = 0x8234E568;
	sub_822D4ED0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x8234E574;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E578:
	// lwz r11,768(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e644
	if (ctx.cr6.eq) goto loc_8234E644;
	// lwz r11,776(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e59c
	if (!ctx.cr6.eq) goto loc_8234E59C;
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234e644
	if (!ctx.cr6.eq) goto loc_8234E644;
loc_8234E59C:
	// lfs f11,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lfs f28,828(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 828);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f7,f28,f8
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// lfs f6,576(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 576);
	ctx.f6.f64 = double(temp.f32);
	// lfs f12,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,732(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 732);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f30,f6,f5
	ctx.f30.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fmuls f31,f9,f12
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f27,f7,f13
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fadds f1,f27,f0
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f0.f64));
	// fmuls f29,f4,f0
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8234E5F0;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f2,f27,f3
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// bge cr6,0x8234e628
	if (!ctx.cr6.lt) goto loc_8234E628;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bge cr6,0x8234e628
	if (!ctx.cr6.lt) goto loc_8234E628;
	// fsubs f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// lfs f13,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fadds f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
loc_8234E628:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8234e644
	if (ctx.cr6.lt) goto loc_8234E644;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x8234E640;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E644:
	// lwz r11,764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e664
	if (ctx.cr6.eq) goto loc_8234E664;
	// lfs f1,812(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 812);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x8234E660;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E664:
	// lwz r11,572(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 572);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234e684
	if (!ctx.cr6.eq) goto loc_8234E684;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x8234E680;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8234E684:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d4ed0
	ctx.lr = 0x8234E68C;
	sub_822D4ED0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x8234E698;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234E4F0) {
	__imp__sub_8234E4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E69C) {
	__imp__sub_8234E69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E6A0) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82342948
	ctx.lr = 0x8234E6BC;
	sub_82342948(ctx, base);
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f11,f31
	ctx.f11.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fsel f10,f12,f13,f31
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsel f9,f11,f0,f10
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fdivs f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E6A0) {
	__imp__sub_8234E6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E6F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E6F0) {
	__imp__sub_8234E6F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E70C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E70C) {
	__imp__sub_8234E70C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E710) {
	__imp__sub_8234E710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E72C) {
	__imp__sub_8234E72C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,-10864(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f1,f10,f12,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f9.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E730) {
	__imp__sub_8234E730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E75C) {
	__imp__sub_8234E75C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8234E768;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x8234E770;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// lfs f0,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// lfs f28,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// beq cr6,0x8234e7b4
	if (ctx.cr6.eq) goto loc_8234E7B4;
	// fabs f0,f27
	ctx.f0.u64 = ctx.f27.u64 & ~0x8000000000000000;
	// li r28,1
	ctx.r28.s64 = 1;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x8234e7b8
	if (ctx.cr6.gt) goto loc_8234E7B8;
loc_8234E7B4:
	// li r28,0
	ctx.r28.s64 = 0;
loc_8234E7B8:
	// lfs f0,832(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f2,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f3.f64 = double(temp.f32);
	// lfs f29,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f29.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// ble cr6,0x8234e7e4
	if (!ctx.cr6.gt) goto loc_8234E7E4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f31,832(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 832, temp.u32);
	// stw r10,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r10.u32);
loc_8234E7E4:
	// lwz r10,840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234e800
	if (ctx.cr6.eq) goto loc_8234E800;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_8234E800:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x8234e824
	if (!ctx.cr6.eq) goto loc_8234E824;
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234e824
	if (!ctx.cr6.eq) goto loc_8234E824;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// b 0x8234e828
	goto loc_8234E828;
loc_8234E824:
	// lfs f4,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 836);
	ctx.f4.f64 = double(temp.f32);
loc_8234E828:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8234e290
	ctx.lr = 0x8234E838;
	sub_8234E290(ctx, base);
	// lwz r11,768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 768);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e850
	if (ctx.cr6.eq) goto loc_8234E850;
	// lfs f0,828(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8234e868
	if (ctx.cr6.eq) goto loc_8234E868;
loc_8234E850:
	// lwz r11,764(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 764);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e880
	if (ctx.cr6.eq) goto loc_8234E880;
	// lfs f0,812(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x8234e880
	if (!ctx.cr6.eq) goto loc_8234E880;
loc_8234E868:
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x8234e880
	if (!ctx.cr6.lt) goto loc_8234E880;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r11.u32);
loc_8234E880:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8234e8c4
	if (ctx.cr6.eq) goto loc_8234E8C4;
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,828(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// blt cr6,0x8234e8ac
	if (ctx.cr6.lt) goto loc_8234E8AC;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8234e8c4
	if (!ctx.cr6.lt) goto loc_8234E8C4;
loc_8234E8AC:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,86(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 86);
	// bl 0x82229da8
	ctx.lr = 0x8234E8C4;
	sub_82229DA8(ctx, base);
loc_8234E8C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x8234E8D0;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234E760) {
	__imp__sub_8234E760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234E8D4) {
	__imp__sub_8234E8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234e960
	if (!ctx.cr6.eq) goto loc_8234E960;
	// lwz r11,696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 696);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234e8f8
	if (ctx.cr6.eq) goto loc_8234E8F8;
	// lfs f1,680(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8234E8F8:
	// lfs f0,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,7324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234e958
	if (ctx.cr6.gt) goto loc_8234E958;
	// lfs f13,248(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8234e958
	if (ctx.cr6.gt) goto loc_8234E958;
	// lfs f0,356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f0,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8234e958
	if (ctx.cr6.gt) goto loc_8234E958;
	// lfs f13,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8234e958
	if (ctx.cr6.gt) goto loc_8234E958;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f1,680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// blr 
	return;
loc_8234E958:
	// lfs f1,728(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8234E960:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f1,728(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 696, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234E8D8) {
	__imp__sub_8234E8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234E970) {
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
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f1
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f1.f64;
	// fdivs f31,f8,f1
	ctx.f31.f64 = double(float(ctx.f8.f64 / ctx.f1.f64));
	// bl 0x822d4ac8
	ctx.lr = 0x8234E9BC;
	sub_822D4AC8(ctx, base);
	// fmuls f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fadds f12,f0,f2
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
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

PPC_WEAK_FUNC(sub_8234E970) {
	__imp__sub_8234E970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234EA0C) {
	__imp__sub_8234EA0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EA10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8234EA18;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de010
	ctx.lr = 0x8234EA20;
	__savefpr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r31,216
	ctx.r30.s64 = ctx.r31.s64 + 216;
	// bl 0x8234e4f0
	ctx.lr = 0x8234EA3C;
	sub_8234E4F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234e760
	ctx.lr = 0x8234EA44;
	sub_8234E760(ctx, base);
	// lfs f0,332(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,336(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r30,92
	ctx.r29.s64 = ctx.r30.s64 + 92;
	// lfs f12,340(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f1,752(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234e970
	ctx.lr = 0x8234EA70;
	sub_8234E970(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f5,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f5.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f30,f5,f12
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfs f10,5996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5996);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f11,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fadds f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsqrts f3,f6
	ctx.f3.f64 = double(float(sqrt(ctx.f6.f64)));
	// fsqrts f2,f4
	ctx.f2.f64 = double(float(sqrt(ctx.f4.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fmuls f29,f3,f10
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fsel f12,f1,f31,f2
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f31.f64 : ctx.f2.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fdivs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fmuls f26,f11,f0
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f25,f13,f11
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// bl 0x823de720
	ctx.lr = 0x8234EAD8;
	sub_823DE720(ctx, base);
	// frsp f24,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x8234EAE4;
	sub_823DE800(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 672);
	ctx.f10.f64 = double(temp.f32);
	// frsp f23,f1
	ctx.f23.f64 = double(float(ctx.f1.f64));
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bne cr6,0x8234eb3c
	if (!ctx.cr6.eq) goto loc_8234EB3C;
	// lwz r11,772(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234eb3c
	if (ctx.cr6.eq) goto loc_8234EB3C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x8234eb3c
	if (!ctx.cr6.lt) goto loc_8234EB3C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10860(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10860);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8234eb3c
	if (!ctx.cr6.lt) goto loc_8234EB3C;
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// b 0x8234ebd0
	goto loc_8234EBD0;
loc_8234EB3C:
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x8234EB44;
	sub_82342948(ctx, base);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f29
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fsubs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsel f11,f12,f0,f29
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fsel f10,f13,f30,f11
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// fdivs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// beq cr6,0x8234ebb4
	if (ctx.cr6.eq) goto loc_8234EBB4;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x8234ebb4
	if (!ctx.cr6.gt) goto loc_8234EBB4;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-10864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10864);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,14232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14232);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f7,f9,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fsubs f6,f31,f11
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f13,f5,f29
	ctx.f13.f64 = double(float(ctx.f5.f64 / ctx.f29.f64));
	// fmadds f12,f6,f12,f8
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8234ebb4
	if (!ctx.cr6.lt) goto loc_8234EBB4;
	// fdivs f27,f13,f12
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
loc_8234EBB4:
	// fmuls f12,f26,f23
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f26.f64 * ctx.f23.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f13,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f25,f24,f12
	ctx.f10.f64 = double(float(ctx.f25.f64 * ctx.f24.f64 + ctx.f12.f64));
	// fmadds f29,f11,f13,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f28,f10,f27
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f27.f64));
loc_8234EBD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e8d8
	ctx.lr = 0x8234EBD8;
	sub_8234E8D8(ctx, base);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// bl 0x82342948
	ctx.lr = 0x8234EBE4;
	sub_82342948(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fneg f12,f22
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f22,f9
	ctx.f8.f64 = double(float(ctx.f22.f64 - ctx.f9.f64));
	// lfs f0,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4292(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f10,f28
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fsel f7,f8,f9,f22
	ctx.f7.f64 = ctx.f8.f64 >= 0.0 ? ctx.f9.f64 : ctx.f22.f64;
	// fsel f6,f12,f30,f7
	ctx.f6.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f7.f64;
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f3,f31,f5
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fmadds f31,f5,f0,f3
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmuls f28,f31,f13
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x8234e290
	ctx.lr = 0x8234EC40;
	sub_8234E290(ctx, base);
	// fneg f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f23.u64 ^ 0x8000000000000000;
	// lfs f12,164(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f26,f24
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f24.f64));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmadds f13,f25,f1,f0
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmuls f11,f13,f27
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f1,f10,f29
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// bl 0x8234e290
	ctx.lr = 0x8234EC74;
	sub_8234E290(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de05c
	ctx.lr = 0x8234EC80;
	__restfpr_22(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234EA10) {
	__imp__sub_8234EA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234EC84) {
	__imp__sub_8234EC84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r3,216
	ctx.r10.s64 = ctx.r3.s64 + 216;
	// lfs f7,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f9,f7
	ctx.cr6.compare(ctx.f9.f64, ctx.f7.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lfs f0,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 772);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,92
	ctx.r11.s64 = ctx.r10.s64 + 92;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadds f10,f11,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f0,f10
	ctx.f0.f64 = double(float(sqrt(ctx.f10.f64)));
	// beq cr6,0x8234ed78
	if (ctx.cr6.eq) goto loc_8234ED78;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// lfs f8,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f11,f11
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f5,f10,f10,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f6.f64));
	// fsqrts f13,f5
	ctx.f13.f64 = double(float(sqrt(ctx.f5.f64)));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble cr6,0x8234ed78
	if (!ctx.cr6.gt) goto loc_8234ED78;
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f8,f12,f12
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f12,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f7,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fdivs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fsqrts f0,f4
	ctx.f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fabs f1,f2
	ctx.f1.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// stfs f4,4(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
loc_8234ED78:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,96(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f6,f11,f8,f10
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fabs f10,f6
	ctx.f10.u64 = ctx.f6.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f5,f8,f11,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmuls f4,f6,f6
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f2,f6,f13
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f13,f3,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fdivs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// fcmpu cr6,f13,f7
	ctx.cr6.compare(ctx.f13.f64, ctx.f7.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fdivs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8234edf8
	if (!ctx.cr6.gt) goto loc_8234EDF8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8234EDF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8234ee08
	if (ctx.cr6.eq) goto loc_8234EE08;
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x8234ee0c
	goto loc_8234EE0C;
loc_8234EE08:
	// lfs f0,756(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 756);
	ctx.f0.f64 = double(temp.f32);
loc_8234EE0C:
	// fmuls f12,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// lfs f0,-10856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10856);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fadds f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fadds f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f6.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f12,4(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234EC88) {
	__imp__sub_8234EC88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234EE64) {
	__imp__sub_8234EE64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EE68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,316(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,216
	ctx.r11.s64 = ctx.r3.s64 + 216;
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fdivs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fdivs f13,f1,f10
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f10.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fdivs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmuls f10,f12,f12
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f13,-10856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10856);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,8116(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8116);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsubs f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsel f5,f7,f9,f13
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// fsel f4,f6,f8,f5
	ctx.f4.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f5.f64;
	// fsubs f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fadds f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f2,100(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f4,8(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234EE68) {
	__imp__sub_8234EE68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234EF40) {
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
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r10,772(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 772);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234f01c
	if (ctx.cr6.eq) goto loc_8234F01C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 672);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8234ef94
	if (ctx.cr6.eq) goto loc_8234EF94;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bgt cr6,0x8234efb8
	if (ctx.cr6.gt) goto loc_8234EFB8;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f11,576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-10852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -10852);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// blt cr6,0x8234efbc
	if (ctx.cr6.lt) goto loc_8234EFBC;
	// b 0x8234efb8
	goto loc_8234EFB8;
loc_8234EF94:
	// lwz r10,776(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234efa8
	if (!ctx.cr6.eq) goto loc_8234EFA8;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8234efb8
	if (!ctx.cr6.eq) goto loc_8234EFB8;
loc_8234EFA8:
	// lfs f12,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x8234efbc
	if (ctx.cr6.eq) goto loc_8234EFBC;
loc_8234EFB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8234EFBC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f034
	if (ctx.cr6.eq) goto loc_8234F034;
	// li r10,2
	ctx.r10.s64 = 2;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// stw r10,572(r11)
	PPC_STORE_U32(ctx.r11.u32 + 572, ctx.r10.u32);
	// bne cr6,0x8234eff4
	if (!ctx.cr6.eq) goto loc_8234EFF4;
	// stfs f0,332(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 332, temp.u32);
	// stfs f0,336(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 336, temp.u32);
	// stfs f0,340(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 340, temp.u32);
	// stfs f0,308(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 308, temp.u32);
	// stfs f0,312(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 312, temp.u32);
	// stfs f0,316(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 316, temp.u32);
loc_8234EFF4:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,82(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 82);
	// bl 0x82229da8
	ctx.lr = 0x8234F008;
	sub_82229DA8(ctx, base);
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
loc_8234F01C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x8234eff4
	if (!ctx.cr6.gt) goto loc_8234EFF4;
loc_8234F034:
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

PPC_WEAK_FUNC(sub_8234EF40) {
	__imp__sub_8234EF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f3,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f3.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f2,724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,576(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x823467c0
	ctx.lr = 0x8234F084;
	sub_823467C0(ctx, base);
	// lfs f13,732(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// fnmsubs f11,f1,f31,f30
	ctx.f11.f64 = double(float(-(ctx.f1.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bgt cr6,0x8234f0e8
	if (ctx.cr6.gt) goto loc_8234F0E8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8234f0e8
	if (!ctx.cr6.gt) goto loc_8234F0E8;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x8234f0e0
	if (!ctx.cr6.gt) goto loc_8234F0E0;
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f31,f9,f12,f8
	ctx.f31.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f8.f64;
loc_8234F0E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8234f0ec
	goto loc_8234F0EC;
loc_8234F0E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F0EC:
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234F048) {
	__imp__sub_8234F048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,370(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 370);
	// b 0x82229da8
	sub_82229DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234F110) {
	__imp__sub_8234F110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F144) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234F144) {
	__imp__sub_8234F144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F148) {
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
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8234f194
	if (ctx.cr6.eq) goto loc_8234F194;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,676(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	ctx.f2.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8234f1a0
	goto loc_8234F1A0;
loc_8234F194:
	// lfs f2,724(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,728(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,732(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	ctx.f30.f64 = double(temp.f32);
loc_8234F1A0:
	// lwz r11,776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// lfs f1,576(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f1cc
	if (ctx.cr6.eq) goto loc_8234F1CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lfs f2,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823467c0
	ctx.lr = 0x8234F1C0;
	sub_823467C0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,0(r30)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x8234f1dc
	goto loc_8234F1DC;
loc_8234F1CC:
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x823467c0
	ctx.lr = 0x8234F1D4;
	sub_823467C0(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8234F1DC:
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

PPC_WEAK_FUNC(sub_8234F148) {
	__imp__sub_8234F148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234F1FC) {
	__imp__sub_8234F1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8234F208;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de008
	ctx.lr = 0x8234F210;
	__savefpr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r31,216
	ctx.r29.s64 = ctx.r31.s64 + 216;
	// lfs f11,216(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// fsubs f31,f0,f11
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f10,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f30,f13,f10
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f9,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f23,f12,f9
	ctx.f23.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// lfs f22,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f22.f64 = double(temp.f32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// rlwinm r28,r8,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stfs f23,120(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmuls f8,f31,f31
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f7,f30,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f6,f23,f23,f7
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f23.f64 + ctx.f7.f64));
	// fsqrts f21,f6
	ctx.f21.f64 = double(float(sqrt(ctx.f6.f64)));
	// bne cr6,0x8234f2c4
	if (!ctx.cr6.eq) goto loc_8234F2C4;
	// lfs f0,844(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// beq cr6,0x8234f2a8
	if (ctx.cr6.eq) goto loc_8234F2A8;
	// fcmpu cr6,f21,f0
	ctx.cr6.compare(ctx.f21.f64, ctx.f0.f64);
	// bge cr6,0x8234f2a8
	if (!ctx.cr6.lt) goto loc_8234F2A8;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,370(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 370);
	// bl 0x82229da8
	ctx.lr = 0x8234F2A8;
	sub_82229DA8(ctx, base);
loc_8234F2A8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x8234ef40
	ctx.lr = 0x8234F2B4;
	sub_8234EF40(ctx, base);
	// lwz r11,572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 572);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
loc_8234F2C4:
	// fcmpu cr6,f21,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f21.f64, ctx.f22.f64);
	// ble cr6,0x8234f5b4
	if (!ctx.cr6.gt) goto loc_8234F5B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// lfs f28,92(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	ctx.f28.f64 = double(temp.f32);
	// addi r30,r29,92
	ctx.r30.s64 = ctx.r29.s64 + 92;
	// lfs f27,96(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f24,100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f20,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f20.f64 = double(temp.f32);
	// fmr f25,f20
	ctx.f25.f64 = ctx.f20.f64;
	// bne cr6,0x8234f2fc
	if (!ctx.cr6.eq) goto loc_8234F2FC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8234f30c
	if (ctx.cr6.eq) goto loc_8234F30C;
loc_8234F2FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x8234f048
	ctx.lr = 0x8234F308;
	sub_8234F048(ctx, base);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
loc_8234F30C:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234f148
	ctx.lr = 0x8234F324;
	sub_8234F148(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f21
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f21.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f11,f0,f23
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fsubs f30,f13,f28
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f31,f12,f27
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f29,f11,f24
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f24.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bne cr6,0x8234f3ec
	if (!ctx.cr6.eq) goto loc_8234F3EC;
	// lfs f0,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,724(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgt cr6,0x8234f3ec
	if (ctx.cr6.gt) goto loc_8234F3EC;
	// fmuls f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmadds f13,f12,f27,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// ble cr6,0x8234f3ec
	if (!ctx.cr6.gt) goto loc_8234F3EC;
	// fmuls f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmadds f13,f31,f27,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f27.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f22
	ctx.cr6.compare(ctx.f13.f64, ctx.f22.f64);
	// bge cr6,0x8234f3ec
	if (!ctx.cr6.lt) goto loc_8234F3EC;
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stfs f27,92(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x8234F3BC;
	sub_822D4AC8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f13,f31,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f31,f31,f13
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_8234F3EC:
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f26,f1,f25
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f25.f64));
	// fmadds f13,f29,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f12,f30,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fsqrts f0,f12
	ctx.f0.f64 = double(float(sqrt(ctx.f12.f64)));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x8234f428
	if (!ctx.cr6.gt) goto loc_8234F428;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f29,104(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_8234F428:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8234f460
	if (!ctx.cr6.eq) goto loc_8234F460;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234ec88
	ctx.lr = 0x8234F440;
	sub_8234EC88(ctx, base);
	// fcmpu cr6,f23,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f23.f64, ctx.f22.f64);
	// beq cr6,0x8234f454
	if (ctx.cr6.eq) goto loc_8234F454;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x8234ee68
	ctx.lr = 0x8234F454;
	sub_8234EE68(ctx, base);
loc_8234F454:
	// lfs f30,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
loc_8234F460:
	// fadds f13,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fadds f0,f30,f28
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fadds f12,f29,f24
	ctx.f12.f64 = double(float(ctx.f29.f64 + ctx.f24.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r29,116
	ctx.r11.s64 = ctx.r29.s64 + 116;
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f5,576(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// lfs f4,116(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f30,f4
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,116(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// lfs f1,120(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f31,f1
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fmadds f12,f13,f0,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// stfs f12,120(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 120, temp.u32);
	// lfs f11,124(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,124(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 124, temp.u32);
	// fmr f8,f2
	ctx.f8.f64 = ctx.f2.f64;
	// fmr f6,f12
	ctx.f6.f64 = ctx.f12.f64;
	// fmadds f4,f2,f2,f5
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// ble cr6,0x8234f52c
	if (!ctx.cr6.gt) goto loc_8234F52C;
	// lwz r10,772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 772);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234f52c
	if (!ctx.cr6.eq) goto loc_8234F52C;
	// fdivs f13,f26,f13
	ctx.f13.f64 = double(float(ctx.f26.f64 / ctx.f13.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8234F52C:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f25,f20
	ctx.cr6.compare(ctx.f25.f64, ctx.f20.f64);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f27
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fadds f8,f10,f24
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f24.f64));
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// bge cr6,0x8234f580
	if (!ctx.cr6.lt) goto loc_8234F580;
	// fsubs f11,f20,f25
	ctx.f11.f64 = double(float(ctx.f20.f64 - ctx.f25.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f28,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f28.f64 + ctx.f10.f64));
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f6,f11,f27,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f27.f64 + ctx.f9.f64));
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f5,f24,f11,f8
	ctx.f5.f64 = double(float(ctx.f24.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8234F580:
	// lfs f11,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f13,f25,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f11.f64));
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f12,f25,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f10.f64));
	// fmadds f6,f0,f25,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f25.f64 + ctx.f8.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f7,4(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f6,8(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x8234ea10
	ctx.lr = 0x8234F5B4;
	sub_8234EA10(ctx, base);
loc_8234F5B4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de054
	ctx.lr = 0x8234F5C0;
	__restfpr_20(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234F200) {
	__imp__sub_8234F200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234F5C4) {
	__imp__sub_8234F5C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F5C8) {
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
	// lwz r30,276(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,684(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 684);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,816(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,820(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 820);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,688(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 688);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,824(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 824);
	ctx.f10.f64 = double(temp.f32);
	// fadds f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,692(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	ctx.f9.f64 = double(temp.f32);
	// fadds f29,f10,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8234f200
	ctx.lr = 0x8234F628;
	sub_8234F200(ctx, base);
	// lfs f8,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f29,f8
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f8.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,672(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 672);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// lfs f4,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f2,f30,f4
	ctx.f2.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// lfs f0,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f0,f7,f7
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmuls f13,f1,f1
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmadds f12,f5,f5,f0
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f11,f2,f2,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f12.f64));
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x8234f670
	if (!ctx.cr6.lt) goto loc_8234F670;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234e448
	ctx.lr = 0x8234F670;
	sub_8234E448(ctx, base);
loc_8234F670:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_8234F5C8) {
	__imp__sub_8234F5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234F694) {
	__imp__sub_8234F694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F698) {
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
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234f758
	if (ctx.cr6.eq) goto loc_8234F758;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r31,-624
	ctx.r11.s64 = ctx.r31.s64 + -624;
	// lwz r11,-360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -360);
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r7,r8,0,9,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stw r7,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r7.u32);
	// lwz r6,276(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,560(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x8234F6E4;
	sub_82342948(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,-360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -360);
	// ori r10,r5,44468
	ctx.r10.u64 = ctx.r5.u64 | 44468;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r6,r8,44492
	ctx.r6.u64 = ctx.r8.u64 | 44492;
	// lfs f0,5484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// ori r5,r7,44516
	ctx.r5.u64 = ctx.r7.u64 | 44516;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lfs f0,420(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-360(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -360);
	// ori r10,r4,44488
	ctx.r10.u64 = ctx.r4.u64 | 44488;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfsx f13,r11,r6
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// ori r8,r3,44512
	ctx.r8.u64 = ctx.r3.u64 | 44512;
	// lfs f12,416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// lfs f11,424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfsx f10,r11,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r3,r3,-21064
	ctx.r3.s64 = ctx.r3.s64 + -21064;
	// lfs f9,428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r8
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// bl 0x82232fd8
	ctx.lr = 0x8234F758;
	sub_82232FD8(ctx, base);
loc_8234F758:
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

PPC_WEAK_FUNC(sub_8234F698) {
	__imp__sub_8234F698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234F76C) {
	__imp__sub_8234F76C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F770) {
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
	// lwz r11,572(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 572);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8234f7a4
	if (ctx.cr6.eq) goto loc_8234F7A4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8234f7b0
	if (!ctx.cr6.eq) goto loc_8234F7B0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8234f5c8
	ctx.lr = 0x8234F7A0;
	sub_8234F5C8(ctx, base);
	// b 0x8234f7b0
	goto loc_8234F7B0;
loc_8234F7A4:
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8234f200
	ctx.lr = 0x8234F7B0;
	sub_8234F200(ctx, base);
loc_8234F7B0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8234f698
	ctx.lr = 0x8234F7B8;
	sub_8234F698(ctx, base);
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

PPC_WEAK_FUNC(sub_8234F770) {
	__imp__sub_8234F770(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234F7CC) {
	__imp__sub_8234F7CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F7D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,17312(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17312);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f10,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r6,1(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f4,-16(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f1,8(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r7,3(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r5,r7
	ctx.r5.s64 = ctx.r7.s8;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f9,12(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234f87c
	if (!ctx.cr6.eq) goto loc_8234F87C;
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f984
	if (ctx.cr6.eq) goto loc_8234F984;
loc_8234F87C:
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// srawi r3,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 31;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// srawi r9,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 31;
	// xor r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// fsqrts f0,f13
	ctx.f0.f64 = double(float(sqrt(ctx.f13.f64)));
	// xor r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r9.u64;
	// subf r11,r3,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8234f8d0
	if (!ctx.cr6.gt) goto loc_8234F8D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8234F8D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234f908
	if (ctx.cr6.eq) goto loc_8234F908;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f0.f64));
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f6,0(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_8234F908:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r11,-11852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11852);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8234f928
	if (!ctx.cr6.lt) goto loc_8234F928;
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
loc_8234F928:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r11,-11828(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11828);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f984
	if (ctx.cr6.eq) goto loc_8234F984;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8234f970
	if (!ctx.cr6.gt) goto loc_8234F970;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// b 0x8234f984
	goto loc_8234F984;
loc_8234F970:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_8234F984:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lwz r11,-11888(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11888);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8234f9a4
	if (!ctx.cr6.lt) goto loc_8234F9A4;
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
loc_8234F9A4:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f10,12(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8234F7D0) {
	__imp__sub_8234F7D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234F9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8234F9C8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234f9f0
	if (!ctx.cr6.eq) goto loc_8234F9F0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234fb6c
	if (ctx.cr6.eq) goto loc_8234FB6C;
loc_8234F9F0:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lfs f30,-23144(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23144);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8234fb08
	if (!ctx.cr6.gt) goto loc_8234FB08;
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x8234fa34
	if (!ctx.cr6.lt) goto loc_8234FA34;
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8234FA34:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8222fdd8
	ctx.lr = 0x8234FA40;
	sub_8222FDD8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,3
	ctx.r28.s64 = 3;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8234FA64:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8234fa80
	if (ctx.cr6.eq) goto loc_8234FA80;
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8222fd88
	ctx.lr = 0x8234FA7C;
	sub_8222FD88(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8234FA80:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8234fa64
	if (!ctx.cr0.eq) goto loc_8234FA64;
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f0,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmr f2,f11
	ctx.f2.f64 = ctx.f11.f64;
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// stfs f4,32(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fdivs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f0,f11,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
loc_8234FB08:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// li r29,3
	ctx.r29.s64 = 3;
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,40(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f8,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lis r31,-31816
	ctx.r31.s64 = -2085093376;
loc_8234FB48:
	// lwz r11,-12420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12420);
	// lfs f1,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x822d44d0
	ctx.lr = 0x8234FB60;
	sub_822D44D0(ctx, base);
	// stfsu f1,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8234fb48
	if (!ctx.cr0.eq) goto loc_8234FB48;
loc_8234FB6C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234F9C0) {
	__imp__sub_8234F9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8234FB7C) {
	__imp__sub_8234FB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8234FB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8234FB88;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823ddff4
	ctx.lr = 0x8234FB90;
	__savefpr_15(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,276(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lfs f0,856(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 856);
	ctx.f0.f64 = double(temp.f32);
	// lis r23,-31816
	ctx.r23.s64 = -2085093376;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r25,-31816
	ctx.r25.s64 = -2085093376;
	// lfs f17,5624(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f17.f64 = double(temp.f32);
	// addi r30,r22,216
	ctx.r30.s64 = ctx.r22.s64 + 216;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8234fbf4
	if (!ctx.cr6.gt) goto loc_8234FBF4;
	// lfs f0,864(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,868(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 868);
	ctx.f13.f64 = double(temp.f32);
	// fmr f22,f0
	ctx.f22.f64 = ctx.f0.f64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f18,f0
	ctx.f18.f64 = ctx.f0.f64;
	// fmr f15,f13
	ctx.f15.f64 = ctx.f13.f64;
	// fmr f16,f13
	ctx.f16.f64 = ctx.f13.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// fmr f21,f13
	ctx.f21.f64 = ctx.f13.f64;
	// b 0x8234fc40
	goto loc_8234FC40;
loc_8234FBF4:
	// lwz r11,-11820(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11820);
	// lis r8,-31816
	ctx.r8.s64 = -2085093376;
	// lwz r10,-11840(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11840);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-11896(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11896);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f17
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
	// fmuls f13,f13,f17
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f17.f64));
	// lwz r10,-11864(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11864);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f29,f12,f17
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f17.f64));
	// stfs f29,88(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f21,f11,f17
	ctx.f21.f64 = double(float(ctx.f11.f64 * ctx.f17.f64));
	// fmr f22,f0
	ctx.f22.f64 = ctx.f0.f64;
	// fmr f15,f13
	ctx.f15.f64 = ctx.f13.f64;
	// fmr f18,f0
	ctx.f18.f64 = ctx.f0.f64;
	// fmr f16,f13
	ctx.f16.f64 = ctx.f13.f64;
loc_8234FC40:
	// stfs f18,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stfs f22,80(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stfs f16,140(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f15,136(r1)
	temp.f32 = float(ctx.f15.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f21,144(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x8234f7d0
	ctx.lr = 0x8234FC60;
	sub_8234F7D0(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_8234FC78:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8234fc9c
	if (ctx.cr6.eq) goto loc_8234FC9C;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f12,r11,r9
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// b 0x8234fca4
	goto loc_8234FCA4;
loc_8234FC9C:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfsx f30,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
loc_8234FCA4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bdnz 0x8234fc78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234FC78;
	// lfs f0,280(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lfs f20,272(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f19,276(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f12,f22,f20
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f20.f64));
	// fmuls f11,f18,f19
	ctx.f11.f64 = double(float(ctx.f18.f64 * ctx.f19.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lfs f10,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f9,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,232(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x8234FCFC;
	sub_822DA518(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f6,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f0,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f3,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f5,f0,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822d4b08
	ctx.lr = 0x8234FD38;
	sub_822D4B08(ctx, base);
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// addi r27,r30,104
	ctx.r27.s64 = ctx.r30.s64 + 104;
	// bge cr6,0x8234fd6c
	if (!ctx.cr6.lt) goto loc_8234FD6C;
	// lfs f0,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmr f23,f31
	ctx.f23.f64 = ctx.f31.f64;
	// lfs f13,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fmr f24,f31
	ctx.f24.f64 = ctx.f31.f64;
	// lfs f12,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// b 0x8234fdc4
	goto loc_8234FDC4;
loc_8234FD6C:
	// lfs f0,240(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f12.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// lfs f9,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// fmadds f5,f10,f13,f11
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f24,f9,f12,f5
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fneg f4,f24
	ctx.f4.u64 = ctx.f24.u64 ^ 0x8000000000000000;
	// fmuls f3,f0,f24
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f2,f13,f24
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// stfs f2,156(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f1,f12,f24
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// stfs f1,160(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f0,f4,f0,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f13,f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmadds f12,f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f9.f64));
loc_8234FDC4:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// stfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r7,-31815
	ctx.r7.s64 = -2085027840;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lwz r11,-11868(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11868);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lwz r7,-4628(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4628);
	// stfs f31,172(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f29,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,-23144(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23144);
	ctx.f25.f64 = double(temp.f32);
loc_8234FE20:
	// lfsx f26,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f26.f64 = double(temp.f32);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// lfsx f0,r31,r9
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmuls f28,f0,f26
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfsx f27,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234FE44;
	sub_822D44D0(ctx, base);
	// fsubs f13,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// addi r29,r1,168
	ctx.r29.s64 = ctx.r1.s64 + 168;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fcmpu cr6,f23,f24
	ctx.cr6.compare(ctx.f23.f64, ctx.f24.f64);
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// lfsx f1,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f27,f13,f29
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfsx f27,r31,r29
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// ble cr6,0x8234fe94
	if (!ctx.cr6.gt) goto loc_8234FE94;
	// lfsx f28,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234FE80;
	sub_822D44D0(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// lfsx f13,r31,r28
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f29,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// stfsx f12,r31,r28
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// b 0x8234feb0
	goto loc_8234FEB0;
loc_8234FE94:
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lfsx f28,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234FEA4;
	sub_822D44D0(ctx, base);
	// fsubs f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// fmadds f13,f0,f29,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfsx f13,r31,r29
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
loc_8234FEB0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfsx f0,r31,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// lfsx f13,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfsx f11,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f5,f10,f12
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsel f4,f9,f11,f0
	ctx.f4.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f3,f10,f13
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsel f2,f8,f11,f13
	ctx.f2.f64 = ctx.f8.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
	// fsel f1,f7,f11,f12
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fsel f0,f6,f10,f4
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f10.f64 : ctx.f4.f64;
	// stfsx f0,r31,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// fsel f13,f3,f10,f2
	ctx.f13.f64 = ctx.f3.f64 >= 0.0 ? ctx.f10.f64 : ctx.f2.f64;
	// stfsx f13,r31,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// fsel f12,f5,f10,f1
	ctx.f12.f64 = ctx.f5.f64 >= 0.0 ? ctx.f10.f64 : ctx.f1.f64;
	// stfsx f12,r31,r26
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x8234fe20
	if (ctx.cr6.lt) goto loc_8234FE20;
	// lfs f2,112(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// ble cr6,0x8234ff38
	if (!ctx.cr6.gt) goto loc_8234FF38;
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bgt cr6,0x8234ff48
	if (ctx.cr6.gt) goto loc_8234FF48;
loc_8234FF38:
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bge cr6,0x8234ff60
	if (!ctx.cr6.lt) goto loc_8234FF60;
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bge cr6,0x8234ff60
	if (!ctx.cr6.lt) goto loc_8234FF60;
loc_8234FF48:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-11900(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11900);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f13,f0
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x8234ff64
	goto loc_8234FF64;
loc_8234FF60:
	// lfs f3,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
loc_8234FF64:
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234FF6C;
	sub_822D44D0(ctx, base);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f21
	ctx.f13.u64 = ctx.f21.u64 ^ 0x8000000000000000;
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r31,-31816
	ctx.r31.s64 = -2085093376;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lfs f11,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f11.f64 = double(temp.f32);
	// lis r29,-31816
	ctx.r29.s64 = -2085093376;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// lwz r9,-11844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11844);
	// lwz r10,-11872(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11872);
	// lwz r11,-11908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11908);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fsubs f9,f10,f21
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f21.f64));
	// fsubs f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsel f7,f9,f21,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f21.f64 : ctx.f10.f64;
	// fsel f6,f8,f13,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f13.f64 : ctx.f7.f64;
	// stfs f6,8(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f19
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f19.f64));
	// fmuls f1,f2,f20
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f20.f64));
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f5
	ctx.f0.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f2,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f5.f64));
	// fmsubs f12,f5,f11,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f1.f64));
	// fsubs f11,f12,f5
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsel f9,f11,f5,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f5.f64 : ctx.f12.f64;
	// fsel f1,f10,f0,f9
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// bl 0x822d44d0
	ctx.lr = 0x8234FFE8;
	sub_822D44D0(ctx, base);
	// lfs f8,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f8.f64 = double(temp.f32);
	// lwz r11,-11908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -11908);
	// fsubs f7,f1,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// lwz r10,-11820(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -11820);
	// fcmpu cr6,f22,f31
	ctx.cr6.compare(ctx.f22.f64, ctx.f31.f64);
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f6,4(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsubs f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fsubs f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fsel f1,f3,f5,f6
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f5.f64 : ctx.f6.f64;
	// fsel f0,f2,f4,f1
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f4.f64 : ctx.f1.f64;
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// bgt cr6,0x8235002c
	if (ctx.cr6.gt) goto loc_8235002C;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f0,f17
	ctx.f22.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
loc_8235002C:
	// lwz r11,-11840(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -11840);
	// fcmpu cr6,f15,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f15.f64, ctx.f31.f64);
	// bgt cr6,0x82350040
	if (ctx.cr6.gt) goto loc_82350040;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f15,f0,f17
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
loc_82350040:
	// fcmpu cr6,f18,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f18.f64, ctx.f31.f64);
	// bgt cr6,0x82350050
	if (ctx.cr6.gt) goto loc_82350050;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f18,f0,f17
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
loc_82350050:
	// fcmpu cr6,f16,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f16.f64, ctx.f31.f64);
	// bgt cr6,0x82350060
	if (ctx.cr6.gt) goto loc_82350060;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f16,f0,f17
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f17.f64));
loc_82350060:
	// stfs f31,256(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,300
	ctx.r5.s64 = ctx.r1.s64 + 300;
	// stfs f0,260(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stfs f31,264(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822da518
	ctx.lr = 0x82350084;
	sub_822DA518(ctx, base);
	// stfs f31,328(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// fdivs f12,f30,f15
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f15.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f30,f22
	ctx.f13.f64 = double(float(ctx.f30.f64 / ctx.f22.f64));
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// stfs f31,332(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// stfs f31,324(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// fdivs f8,f30,f16
	ctx.f8.f64 = double(float(ctx.f30.f64 / ctx.f16.f64));
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lfs f6,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lis r8,-31816
	ctx.r8.s64 = -2085093376;
	// fdivs f9,f30,f18
	ctx.f9.f64 = double(float(ctx.f30.f64 / ctx.f18.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmuls f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f0,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f2,f8,f6
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r11,-1320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1320);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lwz r10,-12428(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12428);
	// lwz r9,-11856(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11856);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,-11892(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11892);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f11,f1
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f1,f9,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f8,f7,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f5,f11,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f4,f10,f12
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f30.f64));
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsel f5,f7,f30,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fsel f10,f6,f0,f5
	ctx.f10.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f12,108(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f12,f11,f4
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f12,f1,f9,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f12,f3,f8,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f2,f7,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f12.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// ble cr6,0x823501dc
	if (!ctx.cr6.gt) goto loc_823501DC;
	// lfs f9,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// ble cr6,0x823501dc
	if (!ctx.cr6.gt) goto loc_823501DC;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lwz r11,-4632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4632);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x823501b4
	if (!ctx.cr6.lt) goto loc_823501B4;
	// fdivs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// b 0x823501b8
	goto loc_823501B8;
loc_823501B4:
	// fmr f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64;
loc_823501B8:
	// lwz r11,-11844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11844);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lfs f11,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-12424(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12424);
	// fdivs f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmadds f12,f5,f13,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f12.f64));
loc_823501DC:
	// fsubs f13,f12,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// lfs f9,288(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f5,292(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// lfs f7,300(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,304(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f6,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// lwz r9,-1316(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1316);
	// lfs f2,316(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
	// lwz r8,-11916(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11916);
	// li r10,2
	ctx.r10.s64 = 2;
	// fsel f1,f13,f30,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// lfs f12,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fsel f13,f11,f0,f1
	ctx.f13.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,300(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f10.f64 = double(temp.f32);
	// fmr f1,f10
	ctx.f1.f64 = ctx.f10.f64;
	// fmadds f8,f7,f13,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f9,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f3,f13,f4
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f4,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// fmadds f3,f6,f31,f8
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f8.f64));
	// fmadds f8,f2,f31,f7
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f7.f64));
	// lfs f7,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f3,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fdivs f4,f30,f4
	ctx.f4.f64 = double(float(ctx.f30.f64 / ctx.f4.f64));
	// fsubs f3,f8,f7
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f2,f11,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f6,f2
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f2.f64));
	// fmuls f8,f3,f2
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f7,f10,f11,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f6,f5,f11,f8
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f5,f7,f25,f10
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f10.f64));
	// stfs f5,300(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 300, temp.u32);
	// fadds f10,f5,f10
	ctx.f10.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// fmr f11,f5
	ctx.f11.f64 = ctx.f5.f64;
	// lfs f4,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f3,f6,f25,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f25.f64 + ctx.f4.f64));
	// stfs f3,304(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 304, temp.u32);
	// lfs f13,288(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f8,f25,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f25.f64 + ctx.f13.f64));
	// stfs f6,288(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 288, temp.u32);
	// fadds f9,f3,f29
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f29.f64));
	// lfs f5,292(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 292);
	ctx.f5.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmuls f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f4,f7,f25,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f25.f64 + ctx.f5.f64));
	// stfs f4,292(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 292, temp.u32);
loc_823502D8:
	// lfs f13,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// ble cr6,0x823502f8
	if (!ctx.cr6.gt) goto loc_823502F8;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,-12(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82350314
	if (!ctx.cr6.gt) goto loc_82350314;
	// b 0x82350310
	goto loc_82350310;
loc_823502F8:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82350314
	if (!ctx.cr6.lt) goto loc_82350314;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,-12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bge cr6,0x82350314
	if (!ctx.cr6.lt) goto loc_82350314;
loc_82350310:
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82350314:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823502d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823502D8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// bl 0x822d6888
	ctx.lr = 0x82350328;
	sub_822D6888(ctx, base);
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lis r9,-31816
	ctx.r9.s64 = -2085093376;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-31816
	ctx.r8.s64 = -2085093376;
	// lwz r10,-11860(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11860);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lwz r9,-11832(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -11832);
	// lwz r11,-11848(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -11848);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f9,8(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// lfs f6,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f6
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f7,f7
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f0,f8,f8,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// bge cr6,0x823503b8
	if (!ctx.cr6.lt) goto loc_823503B8;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// addi r3,r22,612
	ctx.r3.s64 = ctx.r22.s64 + 612;
	// fsubs f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// fdivs f31,f12,f7
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// bl 0x8234f9c0
	ctx.lr = 0x82350398;
	sub_8234F9C0(ctx, base);
	// lfs f11,660(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 660);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f9,0(r24)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f8,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,668(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 668);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f31,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f6,8(r24)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
loc_823503B8:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de040
	ctx.lr = 0x823503C4;
	__restfpr_15(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8234FB80) {
	__imp__sub_8234FB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823503C8) {
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
	// bl 0x823de020
	ctx.lr = 0x823503E0;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r11,216
	ctx.r31.s64 = ctx.r11.s64 + 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r31,92
	ctx.r11.s64 = ctx.r31.s64 + 92;
	// lfs f1,-23144(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,96(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x823447d0
	ctx.lr = 0x8235041C;
	sub_823447D0(ctx, base);
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
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f30,4(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f28,92(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f27,96(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f26,100(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x82350458;
	__restfpr_26(ctx, base);
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

PPC_WEAK_FUNC(sub_823503C8) {
	__imp__sub_823503C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235046C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235046C) {
	__imp__sub_8235046C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82350478;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de018
	ctx.lr = 0x82350480;
	__savefpr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r11,216
	ctx.r30.s64 = ctx.r11.s64 + 216;
	// addi r31,r30,92
	ctx.r31.s64 = ctx.r30.s64 + 92;
	// lfs f27,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x823504c0
	if (!ctx.cr6.eq) goto loc_823504C0;
	// lfs f0,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bne cr6,0x823504c0
	if (!ctx.cr6.eq) goto loc_823504C0;
	// lfs f0,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82350630
	if (ctx.cr6.eq) goto loc_82350630;
loc_823504C0:
	// lis r28,-31816
	ctx.r28.s64 = -2085093376;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f25,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f24.f64 = double(temp.f32);
	// fmr f26,f13
	ctx.f26.f64 = ctx.f13.f64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,-11904(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11904);
	// lfs f28,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,-23144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f5,f10
	ctx.f5.f64 = ctx.f10.f64;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmr f3,f8
	ctx.f3.f64 = ctx.f8.f64;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f31,f10,f0,f4
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f29,f6,f0,f13
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f30,f8,f0,f2
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f2.f64));
	// bl 0x823503c8
	ctx.lr = 0x8235053C;
	sub_823503C8(ctx, base);
	// stfs f26,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stfs f25,4(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f24,8(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x82350630
	if (ctx.cr6.eq) goto loc_82350630;
	// lfs f6,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f30,f6
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f13,f29,f5
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f12,f31,f4
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// lfs f7,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f10
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f11,f7
	ctx.cr6.compare(ctx.f11.f64, ctx.f7.f64);
	// blt cr6,0x82350630
	if (ctx.cr6.lt) goto loc_82350630;
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f10,f12
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f3.f64));
	// fmadds f1,f8,f13,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fdivs f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f11.f64));
	// fcmpu cr6,f11,f27
	ctx.cr6.compare(ctx.f11.f64, ctx.f27.f64);
	// ble cr6,0x823505c4
	if (!ctx.cr6.gt) goto loc_823505C4;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fmadds f10,f12,f11,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f9,f0,f11,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f9,4(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f8,f13,f11,f8
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f8,8(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_823505C4:
	// lwz r11,-11904(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11904);
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f5,f11
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsubs f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 / ctx.f5.f64));
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f4
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f11,f9,f4
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fsubs f10,f13,f8
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f9,f12,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// fsubs f8,f11,f3
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fmadds f7,f10,f28,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f2.f64));
	// stfs f7,0(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmadds f6,f9,f28,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f28.f64 + ctx.f1.f64));
	// stfs f6,4(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// fmadds f5,f8,f28,f0
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f5,8(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_82350630:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de064
	ctx.lr = 0x8235063C;
	__restfpr_24(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350470) {
	__imp__sub_82350470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350640) {
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
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r11,216
	ctx.r4.s64 = ctx.r11.s64 + 216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-11904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11904);
	// lfs f13,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82350728
	if (ctx.cr6.eq) goto loc_82350728;
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r4,92
	ctx.r31.s64 = ctx.r4.s64 + 92;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823506a4
	if (!ctx.cr6.eq) goto loc_823506A4;
	// lfs f12,96(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x823506a4
	if (!ctx.cr6.eq) goto loc_823506A4;
	// lfs f12,100(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x82350728
	if (ctx.cr6.eq) goto loc_82350728;
loc_823506A4:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r4,68
	ctx.r6.s64 = ctx.r4.s64 + 68;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmadds f11,f12,f0,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r8,316(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lhz r7,126(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,88(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x823506EC;
	sub_821FE618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x82350728
	if (!ctx.cr6.lt) goto loc_82350728;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822ad078
	ctx.lr = 0x82350708;
	sub_822AD078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ad078
	ctx.lr = 0x82350710;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,412(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 412);
	// bl 0x82229da8
	ctx.lr = 0x82350728;
	sub_82229DA8(ctx, base);
loc_82350728:
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

PPC_WEAK_FUNC(sub_82350640) {
	__imp__sub_82350640(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82350748;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de020
	ctx.lr = 0x82350750;
	__savefpr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// stb r11,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// bl 0x82342948
	ctx.lr = 0x8235077C;
	sub_82342948(ctx, base);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r30,r27,216
	ctx.r30.s64 = ctx.r27.s64 + 216;
	// lhz r11,256(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 256);
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235096c
	if (ctx.cr6.eq) goto loc_8235096C;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// lis r7,0
	ctx.r7.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r6,r7,44468
	ctx.r6.u64 = ctx.r7.u64 | 44468;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lwz r11,-360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// oris r4,r5,128
	ctx.r4.u64 = ctx.r5.u64 | 8388608;
	// stw r4,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r4.u32);
	// lwz r3,264(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// stfsx f30,r3,r6
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, temp.u32);
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r7,r8,0,7,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8235096c
	if (!ctx.cr6.eq) goto loc_8235096C;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8235096c
	if (!ctx.cr6.eq) goto loc_8235096C;
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r8,44204
	ctx.r5.u64 = ctx.r8.u64 | 44204;
	// ori r4,r7,44226
	ctx.r4.u64 = ctx.r7.u64 | 44226;
	// ori r3,r6,44227
	ctx.r3.u64 = ctx.r6.u64 | 44227;
	// lwzx r8,r11,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r6,r11,r3
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// rlwinm r5,r8,0,20,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// beq cr6,0x82350894
	if (ctx.cr6.eq) goto loc_82350894;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r8,0,9,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// ori r4,r7,44492
	ctx.r4.u64 = ctx.r7.u64 | 44492;
	// stw r5,172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 172, ctx.r5.u32);
	// ori r3,r6,44516
	ctx.r3.u64 = ctx.r6.u64 | 44516;
	// lwz r11,264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 264);
	// lfs f0,420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r10,0
	ctx.r10.s64 = 0;
	// stfsx f13,r11,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, temp.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lfs f12,416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 416);
	ctx.f12.f64 = double(temp.f32);
	// ori r7,r10,44488
	ctx.r7.u64 = ctx.r10.u64 | 44488;
	// stfsx f12,r11,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// ori r6,r8,44512
	ctx.r6.u64 = ctx.r8.u64 | 44512;
	// lfs f11,424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfsx f10,r11,r7
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// lfs f9,428(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 428);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r11,r6
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// addi r3,r3,-21064
	ctx.r3.s64 = ctx.r3.s64 + -21064;
	// bl 0x82232fd8
	ctx.lr = 0x82350890;
	sub_82232FD8(ctx, base);
	// b 0x8235096c
	goto loc_8235096C;
loc_82350894:
	// lis r10,-31816
	ctx.r10.s64 = -2085093376;
	// lwz r10,-11836(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11836);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8235092c
	if (ctx.cr6.lt) goto loc_8235092C;
	// beq cr6,0x823508f0
	if (ctx.cr6.eq) goto loc_823508F0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x8235094c
	if (!ctx.cr6.lt) goto loc_8235094C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r8,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// ori r7,r10,44231
	ctx.r7.u64 = ctx.r10.u64 | 44231;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
	// beq cr6,0x823508d8
	if (ctx.cr6.eq) goto loc_823508D8;
	// li r31,127
	ctx.r31.s64 = 127;
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
loc_823508D8:
	// rlwinm r11,r8,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235094c
	if (ctx.cr6.eq) goto loc_8235094C;
	// addi r11,r31,-127
	ctx.r11.s64 = ctx.r31.s64 + -127;
	// extsb r31,r11
	ctx.r31.s64 = ctx.r11.s8;
	// b 0x82350948
	goto loc_82350948;
loc_823508F0:
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r8,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000;
	// ori r7,r10,44230
	ctx.r7.u64 = ctx.r10.u64 | 44230;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbzx r31,r11,r7
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
	// beq cr6,0x82350914
	if (ctx.cr6.eq) goto loc_82350914;
	// li r29,127
	ctx.r29.s64 = 127;
	// stb r29,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r29.u8);
loc_82350914:
	// rlwinm r11,r8,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235094c
	if (ctx.cr6.eq) goto loc_8235094C;
	// addi r11,r29,-127
	ctx.r11.s64 = ctx.r29.s64 + -127;
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// b 0x8235094c
	goto loc_8235094C;
loc_8235092C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,44231
	ctx.r8.u64 = ctx.r10.u64 | 44231;
	// ori r7,r9,44230
	ctx.r7.u64 = ctx.r9.u64 | 44230;
	// lbzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// lbzx r31,r11,r7
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stb r6,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r6.u8);
loc_82350948:
	// stb r31,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r31.u8);
loc_8235094C:
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r11,-11912(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11912);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235096c
	if (ctx.cr6.eq) goto loc_8235096C;
	// extsb r11,r31
	ctx.r11.s64 = ctx.r31.s8;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
loc_8235096C:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234fb80
	ctx.lr = 0x82350980;
	sub_8234FB80(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f31,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f10,f11,f31,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f10,144(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// lfs f0,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f10,f31,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmuls f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f1,f29,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823509BC;
	sub_823DDE20(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// stfs f6,24(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f5,32(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// stfs f30,120(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f30,128(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsubs f4,f29,f7
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,28(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stfs f3,124(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x82350A04;
	sub_822DA518(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f2,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f2.f64 = double(temp.f32);
	// lis r7,-31816
	ctx.r7.s64 = -2085093376;
	// lfs f1,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f10,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,216(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f6.f64 = double(temp.f32);
	// lwz r11,-11876(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -11876);
	// lfs f5,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f30,232(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f30,236(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// fmadds f4,f7,f13,f11
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// fmadds f3,f6,f13,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfs f2,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f5,f13,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f0,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f2,f12,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f4.f64));
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f10,f0,f12,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f9,f13,f12,f1
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f1.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// beq cr6,0x82350a90
	if (ctx.cr6.eq) goto loc_82350A90;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82350470
	ctx.lr = 0x82350A90;
	sub_82350470(ctx, base);
loc_82350A90:
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f12,f13,f31,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,92(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// addi r11,r11,-5928
	ctx.r11.s64 = ctx.r11.s64 + -5928;
	// lfs f9,96(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f31,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f9.f64));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r30,92
	ctx.r31.s64 = ctx.r30.s64 + 92;
	// stfs f8,96(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// lfs f7,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f31,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f7.f64));
	// stfs f6,100(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x82350b04
	if (!ctx.cr6.eq) goto loc_82350B04;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82350b04
	if (!ctx.cr6.eq) goto loc_82350B04;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82350bdc
	if (ctx.cr6.eq) goto loc_82350BDC;
loc_82350B04:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x82344540
	ctx.lr = 0x82350B30;
	sub_82344540(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823447d0
	ctx.lr = 0x82350B40;
	sub_823447D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82350bdc
	if (ctx.cr6.eq) goto loc_82350BDC;
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f31,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f27.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f26
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f26.f64));
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f9,f31,f28
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f28.f64));
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsubs f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f2,f5,f5
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmadds f1,f4,f4,f2
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fmadds f0,f3,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// fsel f11,f12,f29,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f29.f64 : ctx.f13.f64;
	// fdivs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f9,f3,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f9,152(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f8,f5,f10
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f8,156(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmuls f7,f4,f10
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// ble cr6,0x82350bdc
	if (!ctx.cr6.gt) goto loc_82350BDC;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822ad078
	ctx.lr = 0x82350BBC;
	sub_822AD078(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822ad078
	ctx.lr = 0x82350BC4;
	sub_822AD078(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,410(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 410);
	// bl 0x82229da8
	ctx.lr = 0x82350BDC;
	sub_82229DA8(ctx, base);
loc_82350BDC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82350640
	ctx.lr = 0x82350BE4;
	sub_82350640(ctx, base);
	// addi r5,r30,104
	ctx.r5.s64 = ctx.r30.s64 + 104;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d6888
	ctx.lr = 0x82350BF4;
	sub_822D6888(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// stfs f8,576(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 576, temp.u32);
	// lwz r11,-5884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350c78
	if (ctx.cr6.eq) goto loc_82350C78;
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stfs f9,172(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// bl 0x823436e0
	ctx.lr = 0x82350C78;
	sub_823436E0(ctx, base);
loc_82350C78:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de06c
	ctx.lr = 0x82350C84;
	__restfpr_26(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350740) {
	__imp__sub_82350740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x82350C90;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de014
	ctx.lr = 0x82350C98;
	__savefpr_23(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
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
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r8,32(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82350f2c
	if (ctx.cr6.eq) goto loc_82350F2C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,20072
	ctx.r10.u64 = ctx.r11.u64 | 20072;
	// lwzx r4,r30,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// bl 0x820de470
	ctx.lr = 0x82350CE4;
	sub_820DE470(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82350f2c
	if (ctx.cr6.eq) goto loc_82350F2C;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27608(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350d14
	if (ctx.cr6.eq) goto loc_82350D14;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82350f2c
	if (!ctx.cr6.eq) goto loc_82350F2C;
loc_82350D14:
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820de1e0
	ctx.lr = 0x82350D38;
	sub_820DE1E0(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f29,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f27,f10,f29,f9
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f9.f64));
	// lfs f7,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f26,f8,f29,f7
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f29.f64 + ctx.f7.f64));
	// bl 0x820dfc68
	ctx.lr = 0x82350D84;
	sub_820DFC68(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r27,r10,2116
	ctx.r27.u64 = ctx.r10.u64 | 2116;
	// ori r20,r9,18320
	ctx.r20.u64 = ctx.r9.u64 | 18320;
	// ori r21,r8,20028
	ctx.r21.u64 = ctx.r8.u64 | 20028;
	// lis r24,-32189
	ctx.r24.s64 = -2109538304;
	// lis r23,-32189
	ctx.r23.s64 = -2109538304;
	// lis r18,-32189
	ctx.r18.s64 = -2109538304;
	// addi r26,r11,-5696
	ctx.r26.s64 = ctx.r11.s64 + -5696;
loc_82350DB4:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8234d410
	ctx.lr = 0x82350DC0;
	sub_8234D410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8234d428
	ctx.lr = 0x82350DD0;
	sub_8234D428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350f20
	if (ctx.cr6.eq) goto loc_82350F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234d4a8
	ctx.lr = 0x82350DE4;
	sub_8234D4A8(ctx, base);
	// lwz r28,472(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 472);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82350f20
	if (ctx.cr6.eq) goto loc_82350F20;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r7,r30,r27
	ctx.r7.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820de008
	ctx.lr = 0x82350E24;
	sub_820DE008(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82350e40
	if (ctx.cr6.eq) goto loc_82350E40;
	// lwz r11,27524(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 27524);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82350f20
	if (ctx.cr6.eq) goto loc_82350F20;
loc_82350E40:
	// lwz r10,480(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 480);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,484(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 484);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r10,27536(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 27536);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,27472(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 27472);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f11,120(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fmuls f30,f6,f8
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f31,f7,f8
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fnmsubs f4,f30,f29,f26
	ctx.f4.f64 = double(float(-(ctx.f30.f64 * ctx.f29.f64 - ctx.f26.f64)));
	// fnmsubs f5,f31,f29,f27
	ctx.f5.f64 = double(float(-(ctx.f31.f64 * ctx.f29.f64 - ctx.f27.f64)));
	// fadds f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f5,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// stfs f3,96(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82350ebc
	if (ctx.cr6.eq) goto loc_82350EBC;
	// lfsx f13,r30,r20
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82350ec0
	goto loc_82350EC0;
loc_82350EBC:
	// lfsx f13,r30,r21
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r21.u32);
	ctx.f13.f64 = double(temp.f32);
loc_82350EC0:
	// fsubs f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x82350EC8;
	sub_822D77C0(ctx, base);
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// bge cr6,0x82350edc
	if (!ctx.cr6.lt) goto loc_82350EDC;
	// stfs f25,140(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82350EDC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r31,17(r22)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r22.u32 + 17);
	// lbz r29,16(r22)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r22.u32 + 16);
	// lfs f24,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f23.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x82350EF4;
	sub_82141160(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// bl 0x820ea2f0
	ctx.lr = 0x82350F20;
	sub_820EA2F0(ctx, base);
loc_82350F20:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r19,64
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 64, ctx.xer);
	// blt cr6,0x82350db4
	if (ctx.cr6.lt) goto loc_82350DB4;
loc_82350F2C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x823de060
	ctx.lr = 0x82350F38;
	__restfpr_23(ctx, base);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350C88) {
	__imp__sub_82350C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82350F3C) {
	__imp__sub_82350F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F40) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350F40) {
	__imp__sub_82350F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82350F4C) {
	__imp__sub_82350F4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F50) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,39
	ctx.r3.s64 = 39;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350F50) {
	__imp__sub_82350F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82350F5C) {
	__imp__sub_82350F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350F60) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82350F98;
	sub_821F2D08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82350F60) {
	__imp__sub_82350F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82350FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82350FB0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f7,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,-31800(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31800);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsqrts f1,f2
	ctx.f1.f64 = double(float(sqrt(ctx.f2.f64)));
	// fneg f11,f1
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f9,f11,f0,f1
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f31,f7,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f30,f7,f5
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f29,f8,f7
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// beq cr6,0x82351098
	if (ctx.cr6.eq) goto loc_82351098;
	// lis r10,-31811
	ctx.r10.s64 = -2084765696;
	// lis r9,-31811
	ctx.r9.s64 = -2084765696;
	// addi r8,r10,13776
	ctx.r8.s64 = ctx.r10.s64 + 13776;
	// lis r7,-31811
	ctx.r7.s64 = -2084765696;
	// addi r6,r9,13764
	ctx.r6.s64 = ctx.r9.s64 + 13764;
	// stfs f13,13776(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 13776, temp.u32);
	// addi r5,r7,13752
	ctx.r5.s64 = ctx.r7.s64 + 13752;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,-31800(r11)
	PPC_STORE_U32(ctx.r11.u32 + -31800, ctx.r10.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,13764(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 13764, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f31,13752(r7)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 13752, temp.u32);
	// stfs f30,4(r5)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f29,8(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82351098:
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,13752
	ctx.r29.s64 = ctx.r11.s64 + 13752;
	// lfs f11,24244(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24244);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f30
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f13,13752(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13752);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f13,f31,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fmadds f7,f12,f29,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f11
	ctx.cr6.compare(ctx.f7.f64, ctx.f11.f64);
	// blt cr6,0x82351100
	if (ctx.cr6.lt) goto loc_82351100;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82351100
	if (!ctx.cr6.eq) goto loc_82351100;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r10,r11,13764
	ctx.r10.s64 = ctx.r11.s64 + 13764;
	// stfs f10,13764(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 13764, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82351100:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r28,-31811
	ctx.r28.s64 = -2084765696;
	// lis r27,-31811
	ctx.r27.s64 = -2084765696;
	// addi r26,r28,13764
	ctx.r26.s64 = ctx.r28.s64 + 13764;
	// addi r25,r27,13776
	ctx.r25.s64 = ctx.r27.s64 + 13776;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x821f2d08
	ctx.lr = 0x8235113C;
	sub_821F2D08(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,13776(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 13776, temp.u32);
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 4, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 8, temp.u32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,13764(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 13764, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f30,4(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f29,8(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82350FA8) {
	__imp__sub_82350FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235118C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235118C) {
	__imp__sub_8235118C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82351198;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822a47f0
	ctx.lr = 0x823511AC;
	sub_822A47F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82351274
	if (ctx.cr6.eq) goto loc_82351274;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r4,-2
	ctx.r11.s64 = ctx.r4.s64 + -2;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x82351264
	if (ctx.cr6.gt) goto loc_82351264;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82351264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82351264;
	// bdzf 4*cr6+eq,0x82351210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82351210;
	// bdzf 4*cr6+eq,0x823511ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823511EC;
	// bne cr6,0x82351200
	if (!ctx.cr6.eq) goto loc_82351200;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822aced0
	ctx.lr = 0x823511E8;
	sub_822ACED0(ctx, base);
	// b 0x82351248
	goto loc_82351248;
loc_823511EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823dec00
	ctx.lr = 0x823511F4;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x822acc78
	ctx.lr = 0x823511FC;
	sub_822ACC78(ctx, base);
	// b 0x82351248
	goto loc_82351248;
loc_82351200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82351208;
	sub_823DEAF8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x8235120C;
	sub_822ACBF8(ctx, base);
	// b 0x82351248
	goto loc_82351248;
loc_82351210:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x82351240;
	sub_823DEEB8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ad078
	ctx.lr = 0x82351248;
	sub_822AD078(ctx, base);
loc_82351248:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822ad738
	ctx.lr = 0x8235125C;
	sub_822AD738(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82351264:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-10828
	ctx.r3.s64 = ctx.r11.s64 + -10828;
	// bl 0x822e84f0
	ctx.lr = 0x82351270;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82351274;
	sub_822AD350(ctx, base);
loc_82351274:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82351190) {
	__imp__sub_82351190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235127C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235127C) {
	__imp__sub_8235127C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82351288;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r11,-31784
	ctx.r31.s64 = ctx.r11.s64 + -31784;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,-31784(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823512cc
	if (ctx.cr6.eq) goto loc_823512CC;
loc_823512AC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822e8058
	ctx.lr = 0x823512B8;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823512e4
	if (ctx.cr6.eq) goto loc_823512E4;
	// lwzu r11,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823512ac
	if (!ctx.cr6.eq) goto loc_823512AC;
loc_823512CC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82351190
	ctx.lr = 0x823512DC;
	sub_82351190(ctx, base);
loc_823512DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823512E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x823512dc
	if (ctx.cr6.gt) goto loc_823512DC;
	// lis r12,-32203
	ctx.r12.s64 = -2110455808;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4872
	ctx.r12.s64 = ctx.r12.s64 + 4872;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_823513D0;
	case 1:
		goto loc_823513E8;
	case 2:
		goto loc_82351400;
	case 3:
		goto loc_82351418;
	case 4:
		goto loc_82351344;
	case 5:
		goto loc_823512DC;
	case 6:
		goto loc_8235136C;
	case 7:
		goto loc_823512DC;
	case 8:
		goto loc_823512DC;
	case 9:
		goto loc_823512DC;
	case 10:
		goto loc_823512DC;
	case 11:
		goto loc_823512DC;
	case 12:
		goto loc_823512DC;
	case 13:
		goto loc_823512DC;
	case 14:
		goto loc_82351434;
	default:
		return;
	}
	// lwz r17,5072(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5072);
	// lwz r17,5096(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5096);
	// lwz r17,5120(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5120);
	// lwz r17,5144(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5144);
	// lwz r17,4932(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4932);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4972(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4972);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,4828(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4828);
	// lwz r17,5172(r21)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r21.u32 + 5172);
loc_82351344:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82351354;
	sub_822A24E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821fa060
	ctx.lr = 0x8235135C;
	sub_821FA060(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235136C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x8235139C;
	sub_823DEEB8(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stfs f12,8(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823513D0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x823513D8;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823513E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x823513F0;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// sthx r3,r11,r30
	PPC_STORE_U16(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82351400:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823deaf8
	ctx.lr = 0x82351408;
	sub_823DEAF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stbx r3,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82351418:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823dec00
	ctx.lr = 0x82351420;
	sub_823DEC00(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82351434:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,-27936
	ctx.r4.s64 = ctx.r10.s64 + -27936;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823deeb8
	ctx.lr = 0x82351464;
	sub_823DEEB8(ctx, base);
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d77c0
	ctx.lr = 0x8235146C;
	sub_822D77C0(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stfsx f1,r9,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82351280) {
	__imp__sub_82351280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235147C) {
	__imp__sub_8235147C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82351488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823514cc
	if (!ctx.cr6.gt) goto loc_823514CC;
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
loc_823514AC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82351280
	ctx.lr = 0x823514BC;
	sub_82351280(ctx, base);
	// lwz r11,84(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823514ac
	if (ctx.cr6.lt) goto loc_823514AC;
loc_823514CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82351480) {
	__imp__sub_82351480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823514D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823514D4) {
	__imp__sub_823514D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823514D8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823514D8) {
	__imp__sub_823514D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823514F0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822a24e0
	ctx.lr = 0x8235150C;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x822a24e0
	ctx.lr = 0x82351518;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x82351524;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x822a24e0
	ctx.lr = 0x82351530;
	sub_822A24E0(ctx, base);
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

PPC_WEAK_FUNC(sub_823514F0) {
	__imp__sub_823514F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82351544) {
	__imp__sub_82351544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// sth r4,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r4.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// sth r11,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// sth r11,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// sth r11,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r11.u16);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// addi r6,r7,-31796
	ctx.r6.s64 = ctx.r7.s64 + -31796;
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,-31796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// sth r10,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r10.u16);
	// sth r10,64(r3)
	PPC_STORE_U16(ctx.r3.u32 + 64, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351548) {
	__imp__sub_82351548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823515CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823515CC) {
	__imp__sub_823515CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823515D0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// bl 0x822a24e0
	ctx.lr = 0x823515F8;
	sub_822A24E0(ctx, base);
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// bl 0x822a24e0
	ctx.lr = 0x82351604;
	sub_822A24E0(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// bl 0x822a24e0
	ctx.lr = 0x82351610;
	sub_822A24E0(ctx, base);
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// lhz r4,6(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// bl 0x822a24e0
	ctx.lr = 0x8235161C;
	sub_822A24E0(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhz r10,10(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// sth r10,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r10.u16);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f8,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f7,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f6,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,48(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f4,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,52(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f3,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,56(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lhz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 60);
	// sth r9,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r9.u16);
	// lhz r8,62(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// sth r8,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r8.u16);
	// lhz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// sth r7,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r7.u16);
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

PPC_WEAK_FUNC(sub_823515D0) {
	__imp__sub_823515D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823516BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823516BC) {
	__imp__sub_823516BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823516C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82351750
	if (ctx.cr6.eq) goto loc_82351750;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,3888(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3888);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351750
	if (!ctx.cr6.gt) goto loc_82351750;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,3896
	ctx.r9.s64 = ctx.r11.s64 + 3896;
loc_823516F0:
	// mulli r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 * 68;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8235173c
	if (!ctx.cr6.eq) goto loc_8235173C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8235173c
	if (!ctx.cr6.eq) goto loc_8235173C;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8235173c
	if (!ctx.cr6.eq) goto loc_8235173C;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8235173C:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823516f0
	if (ctx.cr6.lt) goto loc_823516F0;
loc_82351750:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823516C0) {
	__imp__sub_823516C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r8,62(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// lhz r6,3888(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 3888);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// blt cr6,0x82351814
	if (ctx.cr6.lt) goto loc_82351814;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351814
	if (!ctx.cr6.gt) goto loc_82351814;
loc_823517C4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f8,56(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// bge cr6,0x82351810
	if (!ctx.cr6.lt) goto loc_82351810;
	// lhz r10,62(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 62);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82351814
	if (ctx.cr6.lt) goto loc_82351814;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82351814
	if (ctx.cr6.eq) goto loc_82351814;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823517c4
	if (ctx.cr6.lt) goto loc_823517C4;
	// b 0x82351814
	goto loc_82351814;
loc_82351810:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82351814:
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351874
	if (!ctx.cr6.gt) goto loc_82351874;
loc_82351824:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// bge cr6,0x82351870
	if (!ctx.cr6.lt) goto loc_82351870;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82351874
	if (ctx.cr6.lt) goto loc_82351874;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82351874
	if (ctx.cr6.eq) goto loc_82351874;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82351824
	if (ctx.cr6.lt) goto loc_82351824;
	// b 0x82351874
	goto loc_82351874;
loc_82351870:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
loc_82351874:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82351884
	if (!ctx.cr6.lt) goto loc_82351884;
	// fsel f1,f10,f10,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// blr 
	return;
loc_82351884:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82351894
	if (!ctx.cr6.lt) goto loc_82351894;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
loc_82351894:
	// fadds f12,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x823518a8
	if (ctx.cr6.gt) goto loc_823518A8;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_823518A8:
	// fdivs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351758) {
	__imp__sub_82351758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823518B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r8,62(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,2424(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// lhz r6,3888(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 3888);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// blt cr6,0x82351974
	if (ctx.cr6.lt) goto loc_82351974;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351974
	if (!ctx.cr6.gt) goto loc_82351974;
loc_82351924:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f8,56(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// bgt cr6,0x82351970
	if (ctx.cr6.gt) goto loc_82351970;
	// lhz r10,62(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 62);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82351974
	if (ctx.cr6.lt) goto loc_82351974;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82351974
	if (ctx.cr6.eq) goto loc_82351974;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82351924
	if (ctx.cr6.lt) goto loc_82351924;
	// b 0x82351974
	goto loc_82351974;
loc_82351970:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_82351974:
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823519d4
	if (!ctx.cr6.gt) goto loc_823519D4;
loc_82351984:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lfs f12,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// bgt cr6,0x823519d0
	if (ctx.cr6.gt) goto loc_823519D0;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823519d4
	if (ctx.cr6.lt) goto loc_823519D4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x823519d4
	if (ctx.cr6.eq) goto loc_823519D4;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82351984
	if (ctx.cr6.lt) goto loc_82351984;
	// b 0x823519d4
	goto loc_823519D4;
loc_823519D0:
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
loc_823519D4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823519e4
	if (!ctx.cr6.lt) goto loc_823519E4;
	// fsel f1,f10,f10,f0
	ctx.f1.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// blr 
	return;
loc_823519E4:
	// fcmpu cr6,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x823519f4
	if (!ctx.cr6.lt) goto loc_823519F4;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// blr 
	return;
loc_823519F4:
	// fadds f12,f9,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x82351a08
	if (ctx.cr6.gt) goto loc_82351A08;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
loc_82351A08:
	// fdivs f0,f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fsubs f12,f10,f13
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f1,f0,f12,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823518B8) {
	__imp__sub_823518B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351A18) {
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
	// bl 0x823de014
	ctx.lr = 0x82351A2C;
	__savefpr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// mulli r10,r5,68
	ctx.r10.s64 = ctx.r5.s64 * 68;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r9,-31796
	ctx.r10.s64 = ctx.r9.s64 + -31796;
	// lfs f0,-31796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31796);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82351a80
	if (!ctx.cr6.eq) goto loc_82351A80;
	// lfs f12,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82351a80
	if (!ctx.cr6.eq) goto loc_82351A80;
	// lfs f11,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// beq cr6,0x82351a9c
	if (ctx.cr6.eq) goto loc_82351A9C;
loc_82351A80:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82351d00
	goto loc_82351D00;
loc_82351A9C:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r8,62(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// lis r6,-31815
	ctx.r6.s64 = -2085027840;
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f0.f64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmr f27,f12
	ctx.f27.f64 = ctx.f12.f64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// lfs f11,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// lhz r6,3888(r6)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + 3888);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// fmr f25,f12
	ctx.f25.f64 = ctx.f12.f64;
	// blt cr6,0x82351b64
	if (ctx.cr6.lt) goto loc_82351B64;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351b64
	if (!ctx.cr6.gt) goto loc_82351B64;
loc_82351AF4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfs f7,56(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// bne cr6,0x82351b58
	if (!ctx.cr6.eq) goto loc_82351B58;
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bne cr6,0x82351b58
	if (!ctx.cr6.eq) goto loc_82351B58;
	// lfs f7,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bne cr6,0x82351b58
	if (!ctx.cr6.eq) goto loc_82351B58;
	// lhz r10,62(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 62);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82351b64
	if (ctx.cr6.lt) goto loc_82351B64;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82351b64
	if (ctx.cr6.eq) goto loc_82351B64;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82351af4
	if (ctx.cr6.lt) goto loc_82351AF4;
	// b 0x82351b64
	goto loc_82351B64;
loc_82351B58:
	// lfs f26,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f26.f64 = double(temp.f32);
	// lfs f28,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f27.f64 = double(temp.f32);
loc_82351B64:
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82351be4
	if (!ctx.cr6.gt) goto loc_82351BE4;
loc_82351B74:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// lfs f7,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// bne cr6,0x82351bd8
	if (!ctx.cr6.eq) goto loc_82351BD8;
	// lfs f7,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f13
	ctx.cr6.compare(ctx.f7.f64, ctx.f13.f64);
	// bne cr6,0x82351bd8
	if (!ctx.cr6.eq) goto loc_82351BD8;
	// lfs f7,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f12
	ctx.cr6.compare(ctx.f7.f64, ctx.f12.f64);
	// bne cr6,0x82351bd8
	if (!ctx.cr6.eq) goto loc_82351BD8;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82351be4
	if (ctx.cr6.lt) goto loc_82351BE4;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82351be4
	if (ctx.cr6.eq) goto loc_82351BE4;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f7,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82351b74
	if (ctx.cr6.lt) goto loc_82351B74;
	// b 0x82351be4
	goto loc_82351BE4;
loc_82351BD8:
	// lfs f9,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lfs f29,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f29.f64 = double(temp.f32);
	// lfs f25,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f25.f64 = double(temp.f32);
loc_82351BE4:
	// fcmpu cr6,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bne cr6,0x82351c44
	if (!ctx.cr6.eq) goto loc_82351C44;
	// fcmpu cr6,f28,f13
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bne cr6,0x82351c24
	if (!ctx.cr6.eq) goto loc_82351C24;
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// bne cr6,0x82351c24
	if (!ctx.cr6.eq) goto loc_82351C24;
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bne cr6,0x82351c24
	if (!ctx.cr6.eq) goto loc_82351C24;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bne cr6,0x82351c24
	if (!ctx.cr6.eq) goto loc_82351C24;
	// fcmpu cr6,f25,f12
	ctx.cr6.compare(ctx.f25.f64, ctx.f12.f64);
	// bne cr6,0x82351c24
	if (!ctx.cr6.eq) goto loc_82351C24;
loc_82351C14:
	// stfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,8(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82351d00
	goto loc_82351D00;
loc_82351C24:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f13.f64);
	// bne cr6,0x82351c44
	if (!ctx.cr6.eq) goto loc_82351C44;
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// bne cr6,0x82351c44
	if (!ctx.cr6.eq) goto loc_82351C44;
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f25,8(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82351d00
	goto loc_82351D00;
loc_82351C44:
	// fcmpu cr6,f9,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bne cr6,0x82351c6c
	if (!ctx.cr6.eq) goto loc_82351C6C;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bne cr6,0x82351c6c
	if (!ctx.cr6.eq) goto loc_82351C6C;
	// fcmpu cr6,f25,f12
	ctx.cr6.compare(ctx.f25.f64, ctx.f12.f64);
	// bne cr6,0x82351c6c
	if (!ctx.cr6.eq) goto loc_82351C6C;
	// stfs f26,0(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f28,4(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f27,8(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x82351d00
	goto loc_82351D00;
loc_82351C6C:
	// fadds f0,f8,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82351c14
	if (!ctx.cr6.gt) goto loc_82351C14;
	// fsubs f13,f9,f26
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f26.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f24,f10,f0
	ctx.f24.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f23,f13,f31
	ctx.f23.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f23,f30
	ctx.f1.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82351C9C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f11,f29,f28
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f10,f23,f12
	ctx.f10.f64 = double(float(ctx.f23.f64 - ctx.f12.f64));
	// fmuls f23,f11,f31
	ctx.f23.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f9,f10,f24
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// fadds f1,f23,f30
	ctx.f1.f64 = double(float(ctx.f23.f64 + ctx.f30.f64));
	// fmadds f8,f9,f29,f26
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f26.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x82351CC8;
	sub_823DDE20(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fsubs f6,f25,f27
	ctx.f6.f64 = double(float(ctx.f25.f64 - ctx.f27.f64));
	// fsubs f5,f23,f7
	ctx.f5.f64 = double(float(ctx.f23.f64 - ctx.f7.f64));
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f4,f5,f24
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f24.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmadds f3,f4,f29,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x82351CEC;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fsubs f1,f31,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// fmuls f0,f1,f24
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// fmadds f13,f0,f29,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_82351D00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de060
	ctx.lr = 0x82351D0C;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351A18) {
	__imp__sub_82351A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82351D1C) {
	__imp__sub_82351D1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351D20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r10,r11,3896
	ctx.r10.s64 = ctx.r11.s64 + 3896;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82351d50
	if (!ctx.cr6.lt) goto loc_82351D50;
	// lfs f1,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82351D50:
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lfsx f12,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f1,f11,f13,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351D20) {
	__imp__sub_82351D20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r10,r11,3896
	ctx.r10.s64 = ctx.r11.s64 + 3896;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82351da0
	if (!ctx.cr6.lt) goto loc_82351DA0;
	// lfs f1,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82351DA0:
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lfsx f12,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f1,f11,f13,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351D70) {
	__imp__sub_82351D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82351DC8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x82351DD0;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// addi r10,r11,3896
	ctx.r10.s64 = ctx.r11.s64 + 3896;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82351e3c
	if (!ctx.cr6.lt) goto loc_82351E3C;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82351f74
	if (ctx.cr6.eq) goto loc_82351F74;
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x82351E38;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82351E3C:
	// lhz r7,10(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// mulli r8,r9,68
	ctx.r8.s64 = ctx.r9.s64 * 68;
	// rlwinm r9,r7,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82351e6c
	if (!ctx.cr6.eq) goto loc_82351E6C;
	// lhz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82351f74
	if (ctx.cr6.eq) goto loc_82351F74;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82351e94
	if (ctx.cr6.eq) goto loc_82351E94;
loc_82351E6C:
	// lhz r8,10(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82351e8c
	if (ctx.cr6.eq) goto loc_82351E8C;
	// lfs f11,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82351ecc
	goto loc_82351ECC;
loc_82351E8C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82351ec0
	if (!ctx.cr6.eq) goto loc_82351EC0;
loc_82351E94:
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82351ec0
	if (ctx.cr6.eq) goto loc_82351EC0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// b 0x82351ed8
	goto loc_82351ED8;
loc_82351EC0:
	// lfs f11,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
loc_82351ECC:
	// lfs f12,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
loc_82351ED8:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
loc_82351F14:
	// lfsx f28,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f28.f64 = double(temp.f32);
	// lfsx f0,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f27,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f13,f31
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82351F30;
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
	// stfsx f9,r31,r30
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// fmuls f28,f9,f31
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82351F50;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fsubs f7,f28,f8
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfsx f6,r31,r30
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x82351f14
	if (ctx.cr6.lt) goto loc_82351F14;
loc_82351F74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x82351F80;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82351DC0) {
	__imp__sub_82351DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82351F84) {
	__imp__sub_82351F84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82351F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,3896
	ctx.r8.s64 = ctx.r11.s64 + 3896;
	// fmadds f12,f0,f13,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// mulli r11,r7,68
	ctx.r11.s64 = ctx.r7.s64 * 68;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lhz r10,3888(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 3888);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f13,f10,f11,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// ble cr6,0x8235201c
	if (!ctx.cr6.gt) goto loc_8235201C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
loc_82351FD8:
	// lhz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x8235201c
	if (ctx.cr6.lt) goto loc_8235201C;
	// lfs f0,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x8235201c
	if (ctx.cr6.eq) goto loc_8235201C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8235201c
	if (ctx.cr6.lt) goto loc_8235201C;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82351fd8
	if (ctx.cr6.lt) goto loc_82351FD8;
loc_8235201C:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f13,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f13,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82351F88) {
	__imp__sub_82351F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r11,3896
	ctx.r10.s64 = ctx.r11.s64 + 3896;
	// fmadds f12,f0,f13,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f1.f64));
	// mulli r11,r8,68
	ctx.r11.s64 = ctx.r8.s64 * 68;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lhz r9,3888(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 3888);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lfs f10,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f0,f10,f11,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 - ctx.f12.f64));
	// ble cr6,0x823520ec
	if (!ctx.cr6.gt) goto loc_823520EC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
loc_823520A0:
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// bgt cr6,0x823520ec
	if (ctx.cr6.gt) goto loc_823520EC;
	// lhz r9,62(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823520ec
	if (ctx.cr6.lt) goto loc_823520EC;
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
	// lfsx f12,r9,r6
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x823520ec
	if (ctx.cr6.eq) goto loc_823520EC;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lfs f12,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// blt cr6,0x823520a0
	if (ctx.cr6.lt) goto loc_823520A0;
loc_823520EC:
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f10,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,4(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f7,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f7,f0,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f5,8(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352050) {
	__imp__sub_82352050(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh r9,r31
	ctx.r9.s64 = ctx.r31.s16;
	// addi r6,r11,3896
	ctx.r6.s64 = ctx.r11.s64 + 3896;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x8235228c
	if (ctx.cr6.lt) goto loc_8235228C;
loc_82352154:
	// lfs f11,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82352284
	if (ctx.cr6.eq) goto loc_82352284;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mulli r5,r8,68
	ctx.r5.s64 = ctx.r8.s64 * 68;
	// lfs f12,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// lfs f7,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r6,20
	ctx.r10.s64 = ctx.r6.s64 + 20;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r9,20
	ctx.r11.s64 = ctx.r9.s64 + 20;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// fmuls f3,f9,f10
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f6,f10,f1
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f1.f64));
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fmadds f10,f4,f5,f3
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f12,f8,f13,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f7,f4,f6,f9
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f9.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// fmadds f13,f8,f1,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f7.f64));
	// bne cr6,0x823521ec
	if (!ctx.cr6.eq) goto loc_823521EC;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82352284
	if (ctx.cr6.eq) goto loc_82352284;
loc_823521EC:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82352200
	if (!ctx.cr6.lt) goto loc_82352200;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82352284
	if (ctx.cr6.gt) goto loc_82352284;
	// b 0x82352208
	goto loc_82352208;
loc_82352200:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8235222c
	if (!ctx.cr6.lt) goto loc_8235222C;
loc_82352208:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lhz r7,60(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82352154
	if (!ctx.cr6.lt) goto loc_82352154;
	// b 0x82352284
	goto loc_82352284;
loc_8235222C:
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmadds f10,f3,f6,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f9,f1,f2,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f13,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// fsel f0,f6,f0,f5
	ctx.f0.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
loc_82352284:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82352298
	if (!ctx.cr6.lt) goto loc_82352298;
loc_8235228C:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// b 0x823522a4
	goto loc_823522A4;
loc_82352298:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_823522A4:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// sth r31,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r31.u16);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823522d8
	if (ctx.cr6.lt) goto loc_823522D8;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_823522D8:
	// stfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823522fc
	if (!ctx.cr6.lt) goto loc_823522FC;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823522FC:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// lfs f13,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r6,16
	ctx.r10.s64 = ctx.r6.s64 + 16;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352120) {
	__imp__sub_82352120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_82352338:
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// lhz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82352434
	if (ctx.cr6.lt) goto loc_82352434;
	// lfs f11,56(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x82352434
	if (ctx.cr6.eq) goto loc_82352434;
	// mulli r8,r11,68
	ctx.r8.s64 = ctx.r11.s64 * 68;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f9,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f3,f10
	ctx.f3.f64 = ctx.f10.f64;
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmr f8,f5
	ctx.f8.f64 = ctx.f5.f64;
	// lfs f4,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r10,r7,20
	ctx.r10.s64 = ctx.r7.s64 + 20;
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r9,20
	ctx.r10.s64 = ctx.r9.s64 + 20;
	// fmuls f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f3,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f8,f13,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// lfs f7,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f3,f10,f7
	ctx.f3.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lfs f13,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fmadds f9,f6,f2,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmadds f13,f1,f4,f9
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f4.f64 + ctx.f9.f64));
	// fmadds f7,f6,f3,f8
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f8.f64));
	// fmadds f12,f1,f10,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x823523f8
	if (!ctx.cr6.eq) goto loc_823523F8;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82352408
	if (ctx.cr6.eq) goto loc_82352408;
loc_823523F8:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x8235242c
	if (!ctx.cr6.lt) goto loc_8235242C;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82352434
	if (!ctx.cr6.gt) goto loc_82352434;
loc_82352408:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_8235240C:
	// lhz r11,62(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 62);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x823524a8
	if (ctx.cr6.lt) goto loc_823524A8;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823524a8
	if (!ctx.cr6.eq) goto loc_823524A8;
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// b 0x823524b4
	goto loc_823524B4;
loc_8235242C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8235244c
	if (!ctx.cr6.lt) goto loc_8235244C;
loc_82352434:
	// lhz r11,62(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 62);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352408
	if (ctx.cr6.lt) goto loc_82352408;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x82352338
	goto loc_82352338;
loc_8235244C:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,40(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f7,f10
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fmadds f10,f3,f6,f12
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f9,f1,f2,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fdivs f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f11.f64));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f13,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f8.f64;
	// fsel f13,f6,f0,f5
	ctx.f13.f64 = ctx.f6.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// b 0x8235240c
	goto loc_8235240C;
loc_823524A8:
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
loc_823524B4:
	// stfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// sth r8,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r8.u16);
	// sth r6,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823524e8
	if (ctx.cr6.lt) goto loc_823524E8;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// addi r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 + 12;
	// lfsx f12,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
loc_823524E8:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 60);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lfs f0,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82352508
	if (!ctx.cr6.lt) goto loc_82352508;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_82352508:
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// addi r10,r7,16
	ctx.r10.s64 = ctx.r7.s64 + 16;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f10,f11,f13,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352320) {
	__imp__sub_82352320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82352524) {
	__imp__sub_82352524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// lfs f12,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x823525d0
	if (ctx.cr6.lt) goto loc_823525D0;
loc_82352558:
	// lfs f13,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x823525d0
	if (ctx.cr6.eq) goto loc_823525D0;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmadds f11,f3,f6,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f0,f1,f2,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x823525d0
	if (!ctx.cr6.gt) goto loc_823525D0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823525e8
	if (!ctx.cr6.gt) goto loc_823525E8;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82352558
	if (!ctx.cr6.lt) goto loc_82352558;
loc_823525D0:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_823525D4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x823525f0
	if (!ctx.cr6.lt) goto loc_823525F0;
	// lhz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// ori r6,r9,1
	ctx.r6.u64 = ctx.r9.u64 | 1;
	// b 0x823525fc
	goto loc_823525FC;
loc_823525E8:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x823525d4
	goto loc_823525D4;
loc_823525F0:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
loc_823525FC:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352630
	if (ctx.cr6.lt) goto loc_82352630;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82352630:
	// stfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82352650
	if (!ctx.cr6.lt) goto loc_82352650;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_82352650:
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352528) {
	__imp__sub_82352528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// lfs f12,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
loc_82352688:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lhz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// cmplwi cr6,r6,32768
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 32768, ctx.xer);
	// bge cr6,0x82352700
	if (!ctx.cr6.lt) goto loc_82352700;
	// lfs f13,56(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82352700
	if (ctx.cr6.eq) goto loc_82352700;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f5,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f10,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmadds f11,f3,f6,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f0.f64));
	// fmadds f0,f1,f2,f11
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82352718
	if (ctx.cr6.gt) goto loc_82352718;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82352724
	if (ctx.cr6.gt) goto loc_82352724;
loc_82352700:
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8235272c
	if (ctx.cr6.lt) goto loc_8235272C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82352688
	goto loc_82352688;
loc_82352718:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82352730
	goto loc_82352730;
loc_82352724:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x82352730
	goto loc_82352730;
loc_8235272C:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82352730:
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// blt cr6,0x82352750
	if (ctx.cr6.lt) goto loc_82352750;
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x82352750
	if (!ctx.cr6.eq) goto loc_82352750;
	// lhz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// ori r6,r8,1
	ctx.r6.u64 = ctx.r8.u64 | 1;
	// b 0x8235275c
	goto loc_8235275C;
loc_82352750:
	// lhz r10,2(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// rlwinm r6,r8,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
loc_8235275C:
	// stfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// sth r6,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r6.u16);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352790
	if (ctx.cr6.lt) goto loc_82352790;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f13,f11,f0,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82352790:
	// stfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x823527b0
	if (!ctx.cr6.lt) goto loc_823527B0;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_823527B0:
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// lfsx f12,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f10,12(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352670) {
	__imp__sub_82352670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823527D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r6,r11,3896
	ctx.r6.s64 = ctx.r11.s64 + 3896;
	// lhz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8235282c
	if (ctx.cr6.eq) goto loc_8235282C;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,3888(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3888);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8235282c
	if (!ctx.cr6.gt) goto loc_8235282C;
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 * 68;
loc_82352808:
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82352830
	if (ctx.cr6.eq) goto loc_82352830;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// blt cr6,0x82352808
	if (ctx.cr6.lt) goto loc_82352808;
loc_8235282C:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_82352830:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x823515d0
	sub_823515D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823527D0) {
	__imp__sub_823527D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352848) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352848) {
	__imp__sub_82352848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235284C) {
	__imp__sub_8235284C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352850) {
	PPC_FUNC_PROLOGUE();
	// lhz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r6,r11,3896
	ctx.r6.s64 = ctx.r11.s64 + 3896;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823528a8
	if (ctx.cr6.eq) goto loc_823528A8;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,3888(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 3888);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823528a8
	if (!ctx.cr6.gt) goto loc_823528A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 * 68;
loc_82352884:
	// lhzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823528ac
	if (ctx.cr6.eq) goto loc_823528AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// blt cr6,0x82352884
	if (ctx.cr6.lt) goto loc_82352884;
loc_823528A8:
	// li r9,-1
	ctx.r9.s64 = -1;
loc_823528AC:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// addi r3,r3,120
	ctx.r3.s64 = ctx.r3.s64 + 120;
	// add r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x823515d0
	sub_823515D0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82352850) {
	__imp__sub_82352850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823528C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823528C8) {
	__imp__sub_823528C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823528CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823528CC) {
	__imp__sub_823528CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823528D0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,3888(r10)
	PPC_STORE_U16(ctx.r10.u32 + 3888, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823528D0) {
	__imp__sub_823528D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823528E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823528E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31815
	ctx.r29.s64 = -2085027840;
	// lhz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 3888);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235296c
	if (!ctx.cr6.gt) goto loc_8235296C;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,3896
	ctx.r28.s64 = ctx.r11.s64 + 3896;
loc_8235290C:
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822a88e0
	ctx.lr = 0x82352924;
	sub_822A88E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82352930;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x822a24e0
	ctx.lr = 0x8235293C;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x82352948;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x822a24e0
	ctx.lr = 0x82352954;
	sub_822A24E0(ctx, base);
	// lhz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 3888);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r30,r10
	ctx.r30.s64 = ctx.r10.s16;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235290c
	if (ctx.cr6.lt) goto loc_8235290C;
loc_8235296C:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,3888(r29)
	PPC_STORE_U16(ctx.r29.u32 + 3888, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823528E0) {
	__imp__sub_823528E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235297C) {
	__imp__sub_8235297C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352980) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82352988;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de01c
	ctx.lr = 0x82352990;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31815
	ctx.r25.s64 = -2085027840;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r26,r11,3896
	ctx.r26.s64 = ctx.r11.s64 + 3896;
	// lhz r11,3888(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3888);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82352b40
	if (!ctx.cr6.gt) goto loc_82352B40;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823529B8:
	// mulli r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 * 68;
	// add r7,r11,r26
	ctx.r7.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352a40
	if (ctx.cr6.eq) goto loc_82352A40;
	// clrlwi r8,r11,16
	ctx.r8.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82352a10
	if (ctx.cr6.eq) goto loc_82352A10;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82352a10
	if (!ctx.cr6.gt) goto loc_82352A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r11,68
	ctx.r10.s64 = ctx.r11.s64 * 68;
loc_823529EC:
	// lhzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82352a88
	if (ctx.cr6.eq) goto loc_82352A88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// mulli r10,r9,68
	ctx.r10.s64 = ctx.r9.s64 * 68;
	// blt cr6,0x823529ec
	if (ctx.cr6.lt) goto loc_823529EC;
loc_82352A10:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82352A14:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r11,60(r7)
	PPC_STORE_U16(ctx.r7.u32 + 60, ctx.r11.u16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352a40
	if (ctx.cr6.lt) goto loc_82352A40;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// addi r9,r26,10
	ctx.r9.s64 = ctx.r26.s64 + 10;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r4,r8,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82352a40
	if (ctx.cr6.eq) goto loc_82352A40;
	// sth r11,64(r7)
	PPC_STORE_U16(ctx.r7.u32 + 64, ctx.r11.u16);
loc_82352A40:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82352a94
	if (!ctx.cr6.gt) goto loc_82352A94;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82352A50:
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82352a70
	if (ctx.cr6.eq) goto loc_82352A70;
	// mulli r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 * 68;
	// lhz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// addi r4,r26,2
	ctx.r4.s64 = ctx.r26.s64 + 2;
	// lhzx r3,r9,r4
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82352a90
	if (ctx.cr6.eq) goto loc_82352A90;
loc_82352A70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82352a50
	if (ctx.cr6.lt) goto loc_82352A50;
	// b 0x82352a94
	goto loc_82352A94;
loc_82352A88:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82352a14
	goto loc_82352A14;
loc_82352A90:
	// sth r10,62(r7)
	PPC_STORE_U16(ctx.r7.u32 + 62, ctx.r10.u16);
loc_82352A94:
	// lhz r11,60(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 60);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82352aa8
	if (!ctx.cr6.eq) goto loc_82352AA8;
	// sth r24,60(r7)
	PPC_STORE_U16(ctx.r7.u32 + 60, ctx.r24.u16);
loc_82352AA8:
	// lhz r11,62(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 62);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82352abc
	if (!ctx.cr6.eq) goto loc_82352ABC;
	// sth r24,62(r7)
	PPC_STORE_U16(ctx.r7.u32 + 62, ctx.r24.u16);
loc_82352ABC:
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// extsh r5,r11
	ctx.r5.s64 = ctx.r11.s16;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823529b8
	if (ctx.cr6.lt) goto loc_823529B8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82352b40
	if (!ctx.cr6.gt) goto loc_82352B40;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82352AD8:
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82352b30
	if (ctx.cr6.eq) goto loc_82352B30;
	// lhz r10,62(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352b10
	if (ctx.cr6.lt) goto loc_82352B10;
	// lhz r8,60(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// mulli r7,r10,68
	ctx.r7.s64 = ctx.r10.s64 * 68;
	// addi r5,r26,60
	ctx.r5.s64 = ctx.r26.s64 + 60;
	// sthx r8,r7,r5
	PPC_STORE_U16(ctx.r7.u32 + ctx.r5.u32, ctx.r8.u16);
loc_82352B10:
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352b30
	if (ctx.cr6.lt) goto loc_82352B30;
	// lhz r11,62(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 62);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// addi r8,r26,62
	ctx.r8.s64 = ctx.r26.s64 + 62;
	// sthx r11,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u16);
loc_82352B30:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82352ad8
	if (ctx.cr6.lt) goto loc_82352AD8;
loc_82352B40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f27,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// ble cr6,0x82352c30
	if (!ctx.cr6.gt) goto loc_82352C30;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82352B54:
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82352c18
	if (!ctx.cr6.eq) goto loc_82352C18;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 60);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82352c18
	if (ctx.cr6.lt) goto loc_82352C18;
	// mulli r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 * 68;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r26,20
	ctx.r10.s64 = ctx.r26.s64 + 20;
	// addi r3,r11,32
	ctx.r3.s64 = ctx.r11.s64 + 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,32(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f2,f9,f9
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f12
	ctx.f5.f64 = ctx.f12.f64;
	// lfs f7,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmadds f1,f12,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f6,40(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmadds f0,f6,f6,f1
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fsqrts f13,f0
	ctx.f13.f64 = double(float(sqrt(ctx.f0.f64)));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f27,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f27.f64 : ctx.f13.f64;
	// fdivs f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// fmuls f9,f5,f10
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f8,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fmuls f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82352c18
	if (!ctx.cr6.eq) goto loc_82352C18;
	// addi r4,r11,44
	ctx.r4.s64 = ctx.r11.s64 + 44;
	// bl 0x822d50f8
	ctx.lr = 0x82352C18;
	sub_822D50F8(ctx, base);
loc_82352C18:
	// lhz r10,3888(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3888);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82352b54
	if (ctx.cr6.lt) goto loc_82352B54;
loc_82352C30:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82352df4
	if (!ctx.cr6.gt) goto loc_82352DF4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f28,2412(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f30,2420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// addi r28,r11,-31796
	ctx.r28.s64 = ctx.r11.s64 + -31796;
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r10,-10788
	ctx.r27.s64 = ctx.r10.s64 + -10788;
loc_82352C70:
	// mulli r11,r29,68
	ctx.r11.s64 = ctx.r29.s64 * 68;
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352cc8
	if (ctx.cr6.eq) goto loc_82352CC8;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82352dd8
	if (!ctx.cr6.eq) goto loc_82352DD8;
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82352dd8
	if (!ctx.cr6.eq) goto loc_82352DD8;
	// lfs f0,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82352dd8
	if (!ctx.cr6.eq) goto loc_82352DD8;
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f31,48(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f31,52(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x82352dd8
	goto loc_82352DD8;
loc_82352CC8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351758
	ctx.lr = 0x82352CD0;
	sub_82351758(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x823518b8
	ctx.lr = 0x82352CD8;
	sub_823518B8(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82352d18
	if (!ctx.cr6.lt) goto loc_82352D18;
	// lfs f3,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822830e8
	ctx.lr = 0x82352D18;
	sub_822830E8(ctx, base);
loc_82352D18:
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82352d34
	if (ctx.cr6.eq) goto loc_82352D34;
	// addi r4,r31,44
	ctx.r4.s64 = ctx.r31.s64 + 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351a18
	ctx.lr = 0x82352D34;
	sub_82351A18(ctx, base);
loc_82352D34:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f0,f30
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82352D44;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f25,f12,f30
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fsubs f11,f26,f13
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f13.f64));
	// fadds f1,f25,f29
	ctx.f1.f64 = double(float(ctx.f25.f64 + ctx.f29.f64));
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x82352D64;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f8,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f26,f8,f30
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fsubs f7,f25,f9
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f9.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// fmuls f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// stfs f6,48(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x82352D84;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fsubs f4,f26,f5
	ctx.f4.f64 = double(float(ctx.f26.f64 - ctx.f5.f64));
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,52(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// ble cr6,0x82352dac
	if (!ctx.cr6.gt) goto loc_82352DAC;
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bgt cr6,0x82352db0
	if (ctx.cr6.gt) goto loc_82352DB0;
loc_82352DAC:
	// sth r24,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r24.u16);
loc_82352DB0:
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82352dd8
	if (ctx.cr6.lt) goto loc_82352DD8;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82352dc8
	if (ctx.cr6.gt) goto loc_82352DC8;
	// stfs f27,12(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82352DC8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82352dd8
	if (ctx.cr6.gt) goto loc_82352DD8;
	// stfs f27,16(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82352DD8:
	// lhz r10,3888(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 3888);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82352c70
	if (ctx.cr6.lt) goto loc_82352C70;
loc_82352DF4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de068
	ctx.lr = 0x82352E00;
	__restfpr_25(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82352980) {
	__imp__sub_82352980(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82352E04) {
	__imp__sub_82352E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r3,52
	ctx.r9.s64 = ctx.r3.s64 + 52;
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// addi r6,r7,-31796
	ctx.r6.s64 = ctx.r7.s64 + -31796;
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// addi r9,r3,120
	ctx.r9.s64 = ctx.r3.s64 + 120;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// sth r11,52(r3)
	PPC_STORE_U16(ctx.r3.u32 + 52, ctx.r11.u16);
	// lfs f13,2424(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// sth r11,54(r3)
	PPC_STORE_U16(ctx.r3.u32 + 54, ctx.r11.u16);
	// stfs f13,64(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// sth r11,56(r3)
	PPC_STORE_U16(ctx.r3.u32 + 56, ctx.r11.u16);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// sth r11,58(r3)
	PPC_STORE_U16(ctx.r3.u32 + 58, ctx.r11.u16);
	// sth r10,60(r3)
	PPC_STORE_U16(ctx.r3.u32 + 60, ctx.r10.u16);
	// sth r11,62(r3)
	PPC_STORE_U16(ctx.r3.u32 + 62, ctx.r11.u16);
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// stfs f0,88(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// lfs f12,-31796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// sth r10,112(r3)
	PPC_STORE_U16(ctx.r3.u32 + 112, ctx.r10.u16);
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// sth r10,114(r3)
	PPC_STORE_U16(ctx.r3.u32 + 114, ctx.r10.u16);
	// sth r10,116(r3)
	PPC_STORE_U16(ctx.r3.u32 + 116, ctx.r10.u16);
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// stfs f13,136(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 136, temp.u32);
	// sth r11,120(r3)
	PPC_STORE_U16(ctx.r3.u32 + 120, ctx.r11.u16);
	// sth r11,122(r3)
	PPC_STORE_U16(ctx.r3.u32 + 122, ctx.r11.u16);
	// sth r11,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r11.u16);
	// sth r11,126(r3)
	PPC_STORE_U16(ctx.r3.u32 + 126, ctx.r11.u16);
	// sth r10,128(r3)
	PPC_STORE_U16(ctx.r3.u32 + 128, ctx.r10.u16);
	// sth r11,130(r3)
	PPC_STORE_U16(ctx.r3.u32 + 130, ctx.r11.u16);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// lfs f13,-31796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// sth r10,180(r3)
	PPC_STORE_U16(ctx.r3.u32 + 180, ctx.r10.u16);
	// stfs f0,176(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// sth r10,182(r3)
	PPC_STORE_U16(ctx.r3.u32 + 182, ctx.r10.u16);
	// sth r10,184(r3)
	PPC_STORE_U16(ctx.r3.u32 + 184, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352E08) {
	__imp__sub_82352E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82352F2C) {
	__imp__sub_82352F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352F30) {
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
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82352F58;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x822a24e0
	ctx.lr = 0x82352F64;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x82352F70;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x822a24e0
	ctx.lr = 0x82352F7C;
	sub_822A24E0(ctx, base);
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82352F8C;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x822a24e0
	ctx.lr = 0x82352F98;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822a24e0
	ctx.lr = 0x82352FA4;
	sub_822A24E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,6
	ctx.r3.s64 = ctx.r31.s64 + 6;
	// bl 0x822a24e0
	ctx.lr = 0x82352FB0;
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

PPC_WEAK_FUNC(sub_82352F30) {
	__imp__sub_82352F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82352FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// mulli r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 * 68;
	// addi r10,r8,3896
	ctx.r10.s64 = ctx.r8.s64 + 3896;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r7,10(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// rlwinm r6,r7,0,29,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82352ff8
	if (ctx.cr6.eq) goto loc_82352FF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82352FF8:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// sth r4,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r4.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// sth r9,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r5,-32190
	ctx.r5.s64 = -2109603840;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r4,r5,-31796
	ctx.r4.s64 = ctx.r5.s64 + -31796;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r7,r11,120
	ctx.r7.s64 = ctx.r11.s64 + 120;
	// lfs f12,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f9,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f8,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f7,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f6,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f5,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f4,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f3,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// sth r9,52(r11)
	PPC_STORE_U16(ctx.r11.u32 + 52, ctx.r9.u16);
	// lfs f13,2424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// sth r9,54(r11)
	PPC_STORE_U16(ctx.r11.u32 + 54, ctx.r9.u16);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// sth r9,56(r11)
	PPC_STORE_U16(ctx.r11.u32 + 56, ctx.r9.u16);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// sth r9,58(r11)
	PPC_STORE_U16(ctx.r11.u32 + 58, ctx.r9.u16);
	// sth r8,60(r11)
	PPC_STORE_U16(ctx.r11.u32 + 60, ctx.r8.u16);
	// sth r9,62(r11)
	PPC_STORE_U16(ctx.r11.u32 + 62, ctx.r9.u16);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f12,-31796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// sth r8,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r8.u16);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// sth r8,114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 114, ctx.r8.u16);
	// sth r8,116(r11)
	PPC_STORE_U16(ctx.r11.u32 + 116, ctx.r8.u16);
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f13,136(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// sth r9,120(r11)
	PPC_STORE_U16(ctx.r11.u32 + 120, ctx.r9.u16);
	// sth r9,122(r11)
	PPC_STORE_U16(ctx.r11.u32 + 122, ctx.r9.u16);
	// sth r9,124(r11)
	PPC_STORE_U16(ctx.r11.u32 + 124, ctx.r9.u16);
	// sth r9,126(r11)
	PPC_STORE_U16(ctx.r11.u32 + 126, ctx.r9.u16);
	// sth r8,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r8.u16);
	// sth r9,130(r11)
	PPC_STORE_U16(ctx.r11.u32 + 130, ctx.r9.u16);
	// stfs f0,140(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// lfs f13,-31796(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -31796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stfs f0,176(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// sth r8,180(r11)
	PPC_STORE_U16(ctx.r11.u32 + 180, ctx.r8.u16);
	// sth r8,182(r11)
	PPC_STORE_U16(ctx.r11.u32 + 182, ctx.r8.u16);
	// sth r8,184(r11)
	PPC_STORE_U16(ctx.r11.u32 + 184, ctx.r8.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82352FC8) {
	__imp__sub_82352FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353150) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// sth r9,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82353150) {
	__imp__sub_82353150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82353164) {
	__imp__sub_82353164(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353168) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82353168) {
	__imp__sub_82353168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82353174) {
	__imp__sub_82353174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82353180;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x82353188;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235334c
	if (!ctx.cr6.eq) goto loc_8235334C;
	// bl 0x823527d0
	ctx.lr = 0x823531A8;
	sub_823527D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x823531cc
	if (!ctx.cr6.eq) goto loc_823531CC;
	// bl 0x82351f88
	ctx.lr = 0x823531C8;
	sub_82351F88(ctx, base);
	// b 0x823531d0
	goto loc_823531D0;
loc_823531CC:
	// bl 0x82352050
	ctx.lr = 0x823531D0;
	sub_82352050(ctx, base);
loc_823531D0:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// fsel f11,f13,f0,f2
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f8,f10,f6
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f6.f64));
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ble cr6,0x82353338
	if (!ctx.cr6.gt) goto loc_82353338;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822d50f8
	ctx.lr = 0x8235324C;
	sub_822D50F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f0,f31
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235326C;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f27,f12,f31
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// fmuls f10,f11,f29
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x82353294;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f8,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f31,f8,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fsubs f7,f27,f9
	ctx.f7.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x823532B4;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-23144(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fsubs f13,f31,f5
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f0,f3,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f2,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f8,4(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f1,f0,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f6,8(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bne cr6,0x82353324
	if (!ctx.cr6.eq) goto loc_82353324;
	// bl 0x82352120
	ctx.lr = 0x82353318;
	sub_82352120(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82351dc0
	ctx.lr = 0x82353320;
	sub_82351DC0(ctx, base);
	// b 0x82353344
	goto loc_82353344;
loc_82353324:
	// bl 0x82352320
	ctx.lr = 0x82353328;
	sub_82352320(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82351dc0
	ctx.lr = 0x82353334;
	sub_82351DC0(ctx, base);
	// b 0x82353344
	goto loc_82353344;
loc_82353338:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// sth r9,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
loc_82353344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352850
	ctx.lr = 0x8235334C;
	sub_82352850(ctx, base);
loc_8235334C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x82353358;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353178) {
	__imp__sub_82353178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235335C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235335C) {
	__imp__sub_8235335C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82353368;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823533d8
	if (!ctx.cr6.eq) goto loc_823533D8;
	// bl 0x823527d0
	ctx.lr = 0x8235338C;
	sub_823527D0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82351f88
	ctx.lr = 0x823533A0;
	sub_82351F88(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x82352528
	ctx.lr = 0x823533D4;
	sub_82352528(ctx, base);
	// bl 0x82352850
	ctx.lr = 0x823533D8;
	sub_82352850(ctx, base);
loc_823533D8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353360) {
	__imp__sub_82353360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823533E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823533E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,2(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82353468
	if (!ctx.cr6.eq) goto loc_82353468;
	// bl 0x823527d0
	ctx.lr = 0x82353410;
	sub_823527D0(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,20(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bne cr6,0x8235345c
	if (!ctx.cr6.eq) goto loc_8235345C;
	// bl 0x82352528
	ctx.lr = 0x82353450;
	sub_82352528(ctx, base);
	// bl 0x82352850
	ctx.lr = 0x82353454;
	sub_82352850(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235345C:
	// bl 0x82352670
	ctx.lr = 0x82353460;
	sub_82352670(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352850
	ctx.lr = 0x82353468;
	sub_82352850(ctx, base);
loc_82353468:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823533E0) {
	__imp__sub_823533E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353470) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823527d0
	ctx.lr = 0x82353498;
	sub_823527D0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x823534b4
	if (!ctx.cr6.eq) goto loc_823534B4;
	// bl 0x82351f88
	ctx.lr = 0x823534B0;
	sub_82351F88(ctx, base);
	// b 0x823534b8
	goto loc_823534B8;
loc_823534B4:
	// bl 0x82352050
	ctx.lr = 0x823534B8;
	sub_82352050(ctx, base);
loc_823534B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352850
	ctx.lr = 0x823534C0;
	sub_82352850(ctx, base);
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

PPC_WEAK_FUNC(sub_82353470) {
	__imp__sub_82353470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823534DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823534DC) {
	__imp__sub_823534DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823534E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r9,3896
	ctx.r11.s64 = ctx.r9.s64 + 3896;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// mulli r10,r7,68
	ctx.r10.s64 = ctx.r7.s64 * 68;
	// lfs f9,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f10.f64));
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f11,f5
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmadds f11,f9,f3,f12
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fmadds f10,f8,f1,f11
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f11.f64));
	// fdivs f9,f10,f7
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f6,f8,f0,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fsel f1,f7,f13,f6
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823534E0) {
	__imp__sub_823534E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82353564) {
	__imp__sub_82353564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353568) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823535c4
	if (!ctx.cr6.eq) goto loc_823535C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822ace70
	ctx.lr = 0x82353594;
	sub_822ACE70(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r3,r31
	ctx.r3.s64 = ctx.r31.s16;
	// lhz r5,266(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 266);
	// bl 0x822ac430
	ctx.lr = 0x823535B0;
	sub_822AC430(ctx, base);
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
loc_823535C4:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8235360c
	if (!ctx.cr6.eq) goto loc_8235360C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// extsh r7,r31
	ctx.r7.s64 = ctx.r31.s16;
	// addi r11,r8,3896
	ctx.r11.s64 = ctx.r8.s64 + 3896;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r7,68
	ctx.r10.s64 = ctx.r7.s64 * 68;
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821f2d08
	ctx.lr = 0x8235360C;
	sub_821F2D08(ctx, base);
loc_8235360C:
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

PPC_WEAK_FUNC(sub_82353568) {
	__imp__sub_82353568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82353628;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x823527d0
	ctx.lr = 0x82353650;
	sub_823527D0(ctx, base);
	// lhz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82353748
	if (!ctx.cr6.eq) goto loc_82353748;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// addi r11,r11,3896
	ctx.r11.s64 = ctx.r11.s64 + 3896;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x823536bc
	if (!ctx.cr6.eq) goto loc_823536BC;
	// lhz r11,62(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 62);
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x823536bc
	if (ctx.cr6.lt) goto loc_823536BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x823536bc
	if (!ctx.cr6.gt) goto loc_823536BC;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823536bc
	if (!ctx.cr6.eq) goto loc_823536BC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82353568
	ctx.lr = 0x823536BC;
	sub_82353568(ctx, base);
loc_823536BC:
	// lhz r31,64(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 64);
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235372c
	if (ctx.cr6.lt) goto loc_8235372C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823534e0
	ctx.lr = 0x823536D4;
	sub_823534E0(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x823536f8
	if (!ctx.cr6.eq) goto loc_823536F8;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8235372c
	if (!ctx.cr6.lt) goto loc_8235372C;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x8235372c
	if (ctx.cr6.lt) goto loc_8235372C;
	// b 0x82353718
	goto loc_82353718;
loc_823536F8:
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x8235372c
	if (!ctx.cr6.eq) goto loc_8235372C;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// ble cr6,0x8235372c
	if (!ctx.cr6.gt) goto loc_8235372C;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x8235372c
	if (ctx.cr6.gt) goto loc_8235372C;
loc_82353718:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353568
	ctx.lr = 0x8235372C;
	sub_82353568(ctx, base);
loc_8235372C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82352850
	ctx.lr = 0x82353734;
	sub_82352850(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82353748:
	// lis r9,-31815
	ctx.r9.s64 = -2085027840;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// addi r28,r9,3896
	ctx.r28.s64 = ctx.r9.s64 + 3896;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// bne cr6,0x82353878
	if (!ctx.cr6.eq) goto loc_82353878;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82353988
	if (ctx.cr6.eq) goto loc_82353988;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_8235377C:
	// mulli r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 * 68;
	// add r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lhz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82353988
	if (ctx.cr6.lt) goto loc_82353988;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82353988
	if (ctx.cr6.eq) goto loc_82353988;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823537b4
	if (!ctx.cr6.eq) goto loc_823537B4;
	// li r22,1
	ctx.r22.s64 = 1;
loc_823537B4:
	// lhz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82353848
	if (ctx.cr6.lt) goto loc_82353848;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82353838
	if (!ctx.cr6.eq) goto loc_82353838;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmuls f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmadds f13,f10,f3,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f12,f9,f1,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fdivs f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f6,f9,f30,f8
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x82353848
	if (!ctx.cr6.lt) goto loc_82353848;
loc_82353838:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82353568
	ctx.lr = 0x82353848;
	sub_82353568(ctx, base);
loc_82353848:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82353568
	ctx.lr = 0x8235385C;
	sub_82353568(ctx, base);
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235377c
	if (!ctx.cr6.eq) goto loc_8235377C;
	// b 0x82353988
	goto loc_82353988;
loc_82353878:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82353988
	if (ctx.cr6.eq) goto loc_82353988;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_82353890:
	// mulli r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 * 68;
	// add r31,r9,r28
	ctx.r31.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lhz r9,62(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82353988
	if (ctx.cr6.lt) goto loc_82353988;
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82353988
	if (ctx.cr6.eq) goto loc_82353988;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823538c8
	if (!ctx.cr6.eq) goto loc_823538C8;
	// li r22,1
	ctx.r22.s64 = 1;
loc_823538C8:
	// lhz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8235395c
	if (ctx.cr6.lt) goto loc_8235395C;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8235394c
	if (!ctx.cr6.eq) goto loc_8235394C;
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fmuls f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmadds f13,f10,f3,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f0.f64));
	// fmadds f12,f9,f1,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fdivs f11,f12,f8
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f8.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f31,f11
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f31.f64 : ctx.f11.f64;
	// fsel f6,f9,f30,f8
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f8.f64;
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x8235395c
	if (!ctx.cr6.gt) goto loc_8235395C;
loc_8235394C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82353568
	ctx.lr = 0x8235395C;
	sub_82353568(ctx, base);
loc_8235395C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82353568
	ctx.lr = 0x82353970;
	sub_82353568(ctx, base);
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lhz r29,62(r31)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82353890
	if (!ctx.cr6.eq) goto loc_82353890;
loc_82353988:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823539f4
	if (ctx.cr6.lt) goto loc_823539F4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823539f4
	if (!ctx.cr6.eq) goto loc_823539F4;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r31,64(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 64);
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823539f4
	if (ctx.cr6.lt) goto loc_823539F4;
	// bl 0x823534e0
	ctx.lr = 0x823539B4;
	sub_823534E0(ctx, base);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x823539cc
	if (!ctx.cr6.eq) goto loc_823539CC;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x823539f4
	if (ctx.cr6.lt) goto loc_823539F4;
	// b 0x823539e0
	goto loc_823539E0;
loc_823539CC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x823539f4
	if (!ctx.cr6.eq) goto loc_823539F4;
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x823539f4
	if (!ctx.cr6.lt) goto loc_823539F4;
loc_823539E0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82353568
	ctx.lr = 0x823539F4;
	sub_82353568(ctx, base);
loc_823539F4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82352850
	ctx.lr = 0x823539FC;
	sub_82352850(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353620) {
	__imp__sub_82353620(ctx, base);
}

