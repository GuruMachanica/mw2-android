#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821A8A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821A8A08;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821a8a7c
	if (!ctx.cr6.eq) goto loc_821A8A7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// stfs f0,16(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// stfs f0,20(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// stfs f0,24(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 24, temp.u32);
	// stfs f13,28(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// stfs f0,32(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 32, temp.u32);
	// stfs f0,36(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 36, temp.u32);
	// stfs f0,40(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 40, temp.u32);
	// stfs f13,44(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 44, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821A8A7C:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x821a8ab4
	if (!ctx.cr6.eq) goto loc_821A8AB4;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x822d6b00
	ctx.lr = 0x821A8AA8;
	sub_822D6B00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821A8AB4:
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x821a8aec
	if (!ctx.cr6.eq) goto loc_821A8AEC;
	// lfs f0,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lfs f13,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x822d6b00
	ctx.lr = 0x821A8AE0;
	sub_822D6B00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821A8AEC:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a8800
	ctx.lr = 0x821A8B00;
	sub_821A8800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x821a8668
	ctx.lr = 0x821A8B2C;
	sub_821A8668(ctx, base);
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f6,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,8(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f4,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f13,f4,f4,f1
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f3,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f7,12(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f5,f3,f8
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bne cr6,0x821a8bb8
	if (!ctx.cr6.eq) goto loc_821A8BB8;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f31,8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_821A8BB8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x821a8be4
	if (!ctx.cr6.eq) goto loc_821A8BE4;
	// addi r5,r31,36
	ctx.r5.s64 = ctx.r31.s64 + 36;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822da2d0
	ctx.lr = 0x821A8BD8;
	sub_822DA2D0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821A8BE4:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,24352(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24352);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x821a8c08
	if (ctx.cr6.lt) goto loc_821A8C08;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x821a8c10
	goto loc_821A8C10;
loc_821A8C08:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
loc_821A8C10:
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f13,f9,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f10.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmsubs f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f5.f64));
	// stfs f4,28(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f3,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f9,f4,f4
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmsubs f13,f3,f31,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 - ctx.f1.f64));
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmr f10,f4
	ctx.f10.f64 = ctx.f4.f64;
	// fmadds f8,f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmadds f7,f13,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f4,f5,f0,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f0.f64 : ctx.f6.f64;
	// fdivs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f1,f10,f3
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f1,28(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f0,f13,f3
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// stfs f2,24(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmsubs f8,f13,f0,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f8,36(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,40(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmsubs f10,f1,f0,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A8A00) {
	__imp__sub_821A8A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A8CF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f6,f5,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f2,f3,f8,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f2,0(r7)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f1,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f10,4(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmadds f3,f4,f9,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f10.f64));
	// stfs f3,4(r7)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f2,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f8,f10
	ctx.f8.f64 = ctx.f10.f64;
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f7,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f4,f5,f10,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f4,8(r7)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A8CF0) {
	__imp__sub_821A8CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A8DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821A8DB0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lbz r9,178(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 178);
	// fdivs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addi r11,r10,22216
	ctx.r11.s64 = ctx.r10.s64 + 22216;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfsx f10,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f29,f0,f30
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823dde20
	ctx.lr = 0x821A8E20;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwz r9,180(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fctiwz f5,f8
	ctx.f5.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f5.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f31,12240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r3,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fsubs f0,f29,f1
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x821a8ee4
	if (ctx.cr6.eq) goto loc_821A8EE4;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,144
	ctx.r4.s64 = ctx.r10.s64 + 144;
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// bl 0x821a8cf0
	ctx.lr = 0x821A8EB4;
	sub_821A8CF0(ctx, base);
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
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f31,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f6,f8,f31,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821A8EE4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821a8f84
	if (ctx.cr6.eq) goto loc_821A8F84;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r10,96
	ctx.r4.s64 = ctx.r10.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x821a8cf0
	ctx.lr = 0x821A8F0C;
	sub_821A8CF0(ctx, base);
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f9,f13,f10
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f7,f13,f8
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f5,f13,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f7,f4,f12,f11
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f6,f3,f12,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f2,f12,f8
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f4,f7,f31,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f1.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f3,f6,f31,f0
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f2,f5,f31,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f2,8(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821A8F84:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_821A8DA8) {
	__imp__sub_821A8DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A8F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f11,f10,f12
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f5,f9,f8,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f4,0(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f3,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f3,f2,f10
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f8,f1,f0,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f9.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f12,f6,f5,f13
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fmadds f11,f4,f3,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f12.f64));
	// fadds f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A8F98) {
	__imp__sub_821A8F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A902C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A902C) {
	__imp__sub_821A902C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f1,f5,f8,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f0,f3,f4,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmadds f7,f13,f8,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmadds f6,f11,f4,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f7.f64));
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f5,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmadds f0,f5,f8,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f1.f64));
	// fmadds f13,f3,f4,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64));
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9030) {
	__imp__sub_821A9030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A90AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A90AC) {
	__imp__sub_821A90AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A90B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// addi r10,r11,4096
	ctx.r10.s64 = ctx.r11.s64 + 4096;
	// lwz r9,4096(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4096);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r9,256
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 256, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,6056(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// lfs f0,24356(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fctidz f7,f12
	ctx.f7.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lhz r9,-10(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fctidz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// lhz r8,-10(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// sth r9,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r9.u16);
	// sth r8,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r8.u16);
loc_821A912C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r7,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r7.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwcx. r7,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a912c
	if (!ctx.cr0.eq) goto loc_821A912C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A90B0) {
	__imp__sub_821A90B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A914C) {
	__imp__sub_821A914C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9150) {
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
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x822ec4e8
	ctx.lr = 0x821A916C;
	sub_822EC4E8(ctx, base);
	// lwz r8,840(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// lwz r7,844(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,15
	ctx.r3.s64 = 15;
	// stw r8,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r8.u32);
	// stw r7,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r7.u32);
	// stw r9,4096(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4096, ctx.r9.u32);
	// lbz r11,2943(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2943);
	// stw r11,7556(r10)
	PPC_STORE_U32(ctx.r10.u32 + 7556, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x821A9198;
	sub_822EC500(ctx, base);
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

PPC_WEAK_FUNC(sub_821A9150) {
	__imp__sub_821A9150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A91AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A91AC) {
	__imp__sub_821A91AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A91B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a9208
	if (ctx.cr6.eq) goto loc_821A9208;
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
loc_821A91D0:
	// lfs f10,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f8,f13,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f7,f11,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fsubs f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fcmpu cr6,f3,f12
	ctx.cr6.compare(ctx.f3.f64, ctx.f12.f64);
	// ble cr6,0x821a9210
	if (!ctx.cr6.gt) goto loc_821A9210;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x821a91d0
	if (ctx.cr6.lt) goto loc_821A91D0;
loc_821A9208:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A9210:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A91B0) {
	__imp__sub_821A91B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9218) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822da808
	ctx.lr = 0x821A923C;
	sub_822DA808(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d5c30
	ctx.lr = 0x821A924C;
	sub_822D5C30(ctx, base);
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

PPC_WEAK_FUNC(sub_821A9218) {
	__imp__sub_821A9218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9264) {
	__imp__sub_821A9264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821A9270;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f0,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,22216
	ctx.r11.s64 = ctx.r9.s64 + 22216;
	// lfs f11,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,108(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r11,48
	ctx.r7.s64 = ctx.r11.s64 + 48;
	// lfs f9,112(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lfs f10,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lfs f7,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// addi r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 56;
	// lfs f8,124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f8.f64 = double(temp.f32);
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lfs f5,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f2,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// lfsx f31,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f31.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// fmadds f0,f2,f0,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfsx f13,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f31,f12,f11
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfsx f11,r8,r9
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f10,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f9.f64));
	// lfs f6,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f8,f11,f8,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfsx f9,r8,r29
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f4,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f6,f9,f6,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// lfs f3,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfsx f7,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f5,f7,f4,f3
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fmadds f4,f8,f1,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f6,f1,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f5,f1,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822da808
	ctx.lr = 0x821A932C;
	sub_822DA808(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d5c30
	ctx.lr = 0x821A933C;
	sub_822D5C30(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9268) {
	__imp__sub_821A9268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821A9350;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x822d6b00
	ctx.lr = 0x821A9378;
	sub_822D6B00(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f10,4(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// stfs f9,8(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// bl 0x821a8800
	ctx.lr = 0x821A93BC;
	sub_821A8800(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a8668
	ctx.lr = 0x821A93D0;
	sub_821A8668(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9348) {
	__imp__sub_821A9348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A93D8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82177148
	ctx.lr = 0x821A93F0;
	sub_82177148(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r3,r11,-640
	ctx.r3.s64 = ctx.r11.s64 + -640;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A93D8) {
	__imp__sub_821A93D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9408) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9408) {
	__imp__sub_821A9408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9418) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9418) {
	__imp__sub_821A9418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9424) {
	__imp__sub_821A9424(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fadds f13,f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f1,f11,f12
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9428) {
	__imp__sub_821A9428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9444) {
	__imp__sub_821A9444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f12,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x821a94a4
	if (!ctx.cr6.lt) goto loc_821A94A4;
loc_821A9478:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfsux f0,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f13,f6,f7,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f13.f64));
	// blt cr6,0x821a9478
	if (ctx.cr6.lt) goto loc_821A9478;
loc_821A94A4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f9,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f1,f0
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// fdivs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f5.f64));
	// fadds f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fadds f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fmuls f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmadds f1,f0,f8,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f13.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9448) {
	__imp__sub_821A9448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A94E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A94E0) {
	__imp__sub_821A94E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A94FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A94FC) {
	__imp__sub_821A94FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9500) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// stb r4,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r4.u8);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9500) {
	__imp__sub_821A9500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A952C) {
	__imp__sub_821A952C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9530) {
	__imp__sub_821A9530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9558) {
	PPC_FUNC_PROLOGUE();
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9558) {
	__imp__sub_821A9558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9564) {
	__imp__sub_821A9564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9568) {
	__imp__sub_821A9568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9594) {
	__imp__sub_821A9594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// lfs f0,-21416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21416);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f13,24476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24476);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7932(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821A9630;
	sub_821FE618(ctx, base);
	// lbz r4,185(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 185);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a9654
	if (ctx.cr6.eq) goto loc_821A9654;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821A9654:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9598) {
	__imp__sub_821A9598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A96AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A96AC) {
	__imp__sub_821A96AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A96B0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,232
	ctx.r4.s64 = ctx.r3.s64 + 232;
	// b 0x821a9598
	sub_821A9598(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A96B0) {
	__imp__sub_821A96B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A96B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,-9672
	ctx.r6.s64 = ctx.r9.s64 + -9672;
	// lfs f13,24476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24476);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stfs f8,104(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fe618
	ctx.lr = 0x821A972C;
	sub_821FE618(ctx, base);
	// lbz r7,152(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821a9784
	if (!ctx.cr6.eq) goto loc_821A9784;
	// lbz r10,153(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 153);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a9784
	if (!ctx.cr6.eq) goto loc_821A9784;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f9,f0,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f3,f6,f0,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821A9784:
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

PPC_WEAK_FUNC(sub_821A96B8) {
	__imp__sub_821A96B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821a97c8
	if (!ctx.cr6.eq) goto loc_821A97C8;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lhz r9,126(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r11,2912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2912);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821A97C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9798) {
	__imp__sub_821A9798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A97D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r8.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_821A97F4:
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// stb r8,5039(r9)
	PPC_STORE_U8(ctx.r9.u32 + 5039, ctx.r8.u8);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x821a97f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A97F4;
	// b 0x821bcec0
	sub_821BCEC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A97D0) {
	__imp__sub_821A97D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A980C) {
	__imp__sub_821A980C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9810) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,5128
	ctx.r10.s64 = 5128;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,24(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r3,r8,r10
	ctx.r3.s32 = ctx.r8.s32 / ctx.r10.s32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9810) {
	__imp__sub_821A9810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A982C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A982C) {
	__imp__sub_821A982C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r9,5128
	ctx.r9.s64 = 5128;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lis r7,-32018
	ctx.r7.s64 = -2098331648;
	// addi r10,r7,6688
	ctx.r10.s64 = ctx.r7.s64 + 6688;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// addi r6,r10,7836
	ctx.r6.s64 = ctx.r10.s64 + 7836;
	// subf r5,r11,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r4,r5,r9
	ctx.r4.s32 = ctx.r5.s32 / ctx.r9.s32;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9830) {
	__imp__sub_821A9830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9860) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,6688
	ctx.r10.s64 = ctx.r11.s64 + 6688;
	// lwz r11,8796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8796);
loc_821A987C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8796, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x821a9894
	if (!ctx.cr6.eq) goto loc_821A9894;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8796, ctx.r11.u32);
loc_821A9894:
	// addi r9,r10,8732
	ctx.r9.s64 = ctx.r10.s64 + 8732;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821a98d4
	if (ctx.cr6.eq) goto loc_821A98D4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// blt cr6,0x821a987c
	if (ctx.cr6.lt) goto loc_821A987C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,24640
	ctx.r4.s64 = ctx.r11.s64 + 24640;
	// bl 0x82280900
	ctx.lr = 0x821A98C0;
	sub_82280900(ctx, base);
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
loc_821A98D4:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r10,8476
	ctx.r7.s64 = ctx.r10.s64 + 8476;
	// stbx r8,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lwz r11,8796(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8796);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r6,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9860) {
	__imp__sub_821A9860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A98FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A98FC) {
	__imp__sub_821A98FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9900) {
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
	// bl 0x822f4f68
	ctx.lr = 0x821A9918;
	sub_822F4F68(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r10,6688
	ctx.r8.s64 = ctx.r10.s64 + 6688;
	// lwz r10,8476(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8476);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821a9944
	if (ctx.cr6.eq) goto loc_821A9944;
	// addi r10,r8,8476
	ctx.r10.s64 = ctx.r8.s64 + 8476;
loc_821A9934:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821a9934
	if (!ctx.cr6.eq) goto loc_821A9934;
loc_821A9944:
	// addi r10,r8,8732
	ctx.r10.s64 = ctx.r8.s64 + 8732;
	// li r9,0
	ctx.r9.s64 = 0;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_821A9900) {
	__imp__sub_821A9900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9964) {
	__imp__sub_821A9964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9968) {
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
	// bl 0x821da288
	ctx.lr = 0x821A9980;
	sub_821DA288(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r8,r10,24444
	ctx.r8.s64 = ctx.r10.s64 + 24444;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,24444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24444);
	ctx.f0.f64 = double(temp.f32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f12,24684(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24684);
	ctx.f12.f64 = double(temp.f32);
	// li r5,100
	ctx.r5.s64 = 100;
	// lfs f11,20420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20420);
	ctx.f11.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,20000
	ctx.r10.s64 = 20000;
	// lfs f10,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// li r9,2000
	ctx.r9.s64 = 2000;
	// lfs f9,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// li r7,5000
	ctx.r7.s64 = 5000;
	// lfs f8,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lfs f6,52(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// stw r6,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
	// stfs f0,752(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
	// stw r5,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r5.u32);
	// stfs f13,756(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
	// stw r4,3400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3400, ctx.r4.u32);
	// stfs f12,760(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 760, temp.u32);
	// stw r3,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// stfs f11,260(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stfs f10,4744(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4744, temp.u32);
	// stw r10,3180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3180, ctx.r10.u32);
	// stfs f9,3700(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3700, temp.u32);
	// stw r11,3120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3120, ctx.r11.u32);
	// stfs f8,3696(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3696, temp.u32);
	// stw r9,3124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3124, ctx.r9.u32);
	// stfs f7,3280(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3280, temp.u32);
	// stw r7,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r7.u32);
	// stfs f6,3708(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3708, temp.u32);
	// stw r11,3132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3132, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821A9968) {
	__imp__sub_821A9968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9A38) {
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
	// lhz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821A9A54;
	sub_822A13A0(ctx, base);
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822daed8
	ctx.lr = 0x821A9A60;
	sub_822DAED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82229d78
	ctx.lr = 0x821A9A74;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821A9A78;
	sub_822AC730(ctx, base);
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

PPC_WEAK_FUNC(sub_821A9A38) {
	__imp__sub_821A9A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9A8C) {
	__imp__sub_821A9A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9A90) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-500
	ctx.r9.s64 = ctx.r10.s64 + -500;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r4,108(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 108);
	// bl 0x82229d78
	ctx.lr = 0x821A9AD0;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821A9AD4;
	sub_822AC730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32191
	ctx.r6.s64 = -2109669376;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r6,7616
	ctx.r5.s64 = ctx.r6.s64 + 7616;
	// mulli r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 * 28;
	// lwzx r7,r9,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r7,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x821A9B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32020
	ctx.r5.s64 = -2098462720;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r5,9624
	ctx.r3.s64 = ctx.r5.s64 + 9624;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// stb r4,291(r30)
	PPC_STORE_U8(ctx.r30.u32 + 291, ctx.r4.u8);
	// stw r11,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821A9A90) {
	__imp__sub_821A9A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9B34) {
	__imp__sub_821A9B34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9B38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r8,24(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_821A9B50:
	// lbz r6,5035(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5035);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a9b74
	if (ctx.cr6.eq) goto loc_821A9B74;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// slw r5,r9,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// and r4,r5,r3
	ctx.r4.u64 = ctx.r5.u64 & ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x821a9b8c
	if (!ctx.cr6.eq) goto loc_821A9B8C;
loc_821A9B74:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x821a9b50
	if (ctx.cr6.lt) goto loc_821A9B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A9B8C:
	// mulli r11,r10,5128
	ctx.r11.s64 = ctx.r10.s64 * 5128;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9B38) {
	__imp__sub_821A9B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9B98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,5128
	ctx.r10.s64 = 5128;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bge cr6,0x821a9c00
	if (!ctx.cr6.lt) goto loc_821A9C00;
	// mulli r11,r10,5128
	ctx.r11.s64 = ctx.r10.s64 * 5128;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_821A9BCC:
	// lbz r6,5035(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5035);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a9bf0
	if (ctx.cr6.eq) goto loc_821A9BF0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// slw r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// and r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821a9c08
	if (!ctx.cr6.eq) goto loc_821A9C08;
loc_821A9BF0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x821a9bcc
	if (ctx.cr6.lt) goto loc_821A9BCC;
loc_821A9C00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A9C08:
	// mulli r11,r10,5128
	ctx.r11.s64 = ctx.r10.s64 * 5128;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9B98) {
	__imp__sub_821A9B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9C14) {
	__imp__sub_821A9C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9C18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r11.u32);
	// stw r11,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9C18) {
	__imp__sub_821A9C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9C28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821A9C30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a9c7c
	if (!ctx.cr6.eq) goto loc_821A9C7C;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lhz r4,52(r4)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821f7c20
	ctx.lr = 0x821A9C5C;
	sub_821F7C20(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821A9C7C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821a9d08
	if (!ctx.cr6.eq) goto loc_821A9D08;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821a9d08
	if (!ctx.cr6.gt) goto loc_821A9D08;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x821f82f8
	ctx.lr = 0x821A9CAC;
	sub_821F82F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a9d00
	if (ctx.cr6.eq) goto loc_821A9D00;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82332af8
	ctx.lr = 0x821A9CC0;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,968(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 968);
	// bl 0x821f8d48
	ctx.lr = 0x821A9CE0;
	sub_821F8D48(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x821A9CE8;
	sub_82229B60(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,284(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 284);
	// bl 0x82229da8
	ctx.lr = 0x821A9D00;
	sub_82229DA8(ctx, base);
loc_821A9D00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_821A9D08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9C28) {
	__imp__sub_821A9C28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9D10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821A9D18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,536
	ctx.r31.s64 = ctx.r3.s64 + 536;
	// addi r29,r3,664
	ctx.r29.s64 = ctx.r3.s64 + 664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821a9d48
	if (ctx.cr6.eq) goto loc_821A9D48;
loc_821A9D30:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9c28
	ctx.lr = 0x821A9D3C;
	sub_821A9C28(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821a9d30
	if (!ctx.cr6.eq) goto loc_821A9D30;
loc_821A9D48:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9D10) {
	__imp__sub_821A9D10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821A9D58;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a9e44
	if (ctx.cr6.eq) goto loc_821A9E44;
	// lwz r3,60(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x82332af8
	ctx.lr = 0x821A9D78;
	sub_82332AF8(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// bne cr6,0x821a9dd8
	if (!ctx.cr6.eq) goto loc_821A9DD8;
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821a9dd8
	if (!ctx.cr6.gt) goto loc_821A9DD8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821f82f8
	ctx.lr = 0x821A9DB0;
	sub_821F82F8(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r8,968(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 968);
	// lhz r7,52(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821f8d48
	ctx.lr = 0x821A9DC8;
	sub_821F8D48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821A9DD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821f82f8
	ctx.lr = 0x821A9DE8;
	sub_821F82F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821f7d70
	ctx.lr = 0x821A9DFC;
	sub_821F7D70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// stfs f0,44(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// stfs f0,48(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// stw r11,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r11.u32);
	// lwz r4,968(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 968);
	// bl 0x821f8f80
	ctx.lr = 0x821A9E24;
	sub_821F8F80(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r9,24688
	ctx.r4.s64 = ctx.r9.s64 + 24688;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r5,126(r8)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821A9E44;
	sub_82280900(ctx, base);
loc_821A9E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9D50) {
	__imp__sub_821A9D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9E4C) {
	__imp__sub_821A9E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821A9E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,536
	ctx.r31.s64 = ctx.r3.s64 + 536;
	// addi r29,r3,664
	ctx.r29.s64 = ctx.r3.s64 + 664;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821a9e88
	if (ctx.cr6.eq) goto loc_821A9E88;
loc_821A9E70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a9d50
	ctx.lr = 0x821A9E7C;
	sub_821A9D50(ctx, base);
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821a9e70
	if (!ctx.cr6.eq) goto loc_821A9E70;
loc_821A9E88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A9E50) {
	__imp__sub_821A9E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9E90) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
	// stb r10,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9E90) {
	__imp__sub_821A9E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9EA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,89(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9EA0) {
	__imp__sub_821A9EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9EC0) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821a9f5c
	if (ctx.cr6.eq) goto loc_821A9F5C;
	// lhz r11,3232(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3232);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a9f14
	if (ctx.cr6.eq) goto loc_821A9F14;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r11,-112
	ctx.r4.s64 = ctx.r11.s64 + -112;
	// bl 0x821d9558
	ctx.lr = 0x821A9F14;
	sub_821D9558(ctx, base);
loc_821A9F14:
	// lbz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 264);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,267(r31)
	PPC_STORE_U8(ctx.r31.u32 + 267, ctx.r11.u8);
	// stb r11,264(r31)
	PPC_STORE_U8(ctx.r31.u32 + 264, ctx.r11.u8);
	// stb r10,265(r31)
	PPC_STORE_U8(ctx.r31.u32 + 265, ctx.r10.u8);
	// bl 0x821d96c0
	ctx.lr = 0x821A9F30;
	sub_821D96C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821deef8
	ctx.lr = 0x821A9F38;
	sub_821DEEF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821d83e0
	ctx.lr = 0x821A9F40;
	sub_821D83E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,89(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 89);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a9f5c
	if (ctx.cr6.eq) goto loc_821A9F5C;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,89(r11)
	PPC_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
loc_821A9F5C:
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

PPC_WEAK_FUNC(sub_821A9EC0) {
	__imp__sub_821A9EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,268(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r10,r11,7616
	ctx.r10.s64 = ctx.r11.s64 + 7616;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r5,r6,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// mulli r10,r5,28
	ctx.r10.s64 = ctx.r5.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_821A9F70) {
	__imp__sub_821A9F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A9FAC) {
	__imp__sub_821A9FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9FB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
loc_821A9FBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// beq cr6,0x821a9ff0
	if (ctx.cr6.eq) goto loc_821A9FF0;
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// beq cr6,0x821a9ff0
	if (ctx.cr6.eq) goto loc_821A9FF0;
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// beq cr6,0x821a9ff0
	if (ctx.cr6.eq) goto loc_821A9FF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821a9fbc
	if (!ctx.cr6.gt) goto loc_821A9FBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A9FF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9FB0) {
	__imp__sub_821A9FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A9FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,208(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,184
	ctx.r10.s64 = ctx.r3.s64 + 184;
loc_821AA004:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x821aa028
	if (ctx.cr6.eq) goto loc_821AA028;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821aa004
	if (!ctx.cr6.gt) goto loc_821AA004;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821AA028:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A9FF8) {
	__imp__sub_821A9FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA030) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821aa0d0
	if (ctx.cr6.eq) goto loc_821AA0D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,3168(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821aa070
	if (ctx.cr6.lt) goto loc_821AA070;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA070:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa0d0
	if (ctx.cr6.eq) goto loc_821AA0D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x821AA094;
	sub_822DA518(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,3168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3168);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f6,f9,f10,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// bgt cr6,0x821aa0c8
	if (ctx.cr6.gt) goto loc_821AA0C8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA0C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x821aa0d4
	goto loc_821AA0D4;
loc_821AA0D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AA0D4:
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

PPC_WEAK_FUNC(sub_821AA030) {
	__imp__sub_821AA030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA0EC) {
	__imp__sub_821AA0EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA0F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,332(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821aa17c
	if (ctx.cr6.lt) goto loc_821AA17C;
	// lbz r11,349(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 349);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa17c
	if (!ctx.cr6.eq) goto loc_821AA17C;
	// lbz r11,3164(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa17c
	if (!ctx.cr6.eq) goto loc_821AA17C;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,184
	ctx.r11.s64 = ctx.r3.s64 + 184;
loc_821AA13C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x821aa1c4
	if (ctx.cr6.eq) goto loc_821AA1C4;
	// lwz r8,208(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821aa13c
	if (!ctx.cr6.gt) goto loc_821AA13C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA160:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa17c
	if (ctx.cr6.eq) goto loc_821AA17C;
	// subf r11,r9,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r9.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stb r10,350(r3)
	PPC_STORE_U8(ctx.r3.u32 + 350, ctx.r10.u8);
loc_821AA17C:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x821aa030
	ctx.lr = 0x821AA184;
	sub_821AA030(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa1cc
	if (ctx.cr6.eq) goto loc_821AA1CC;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,11228(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11228);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x821aa1d0
	goto loc_821AA1D0;
loc_821AA1C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821aa160
	goto loc_821AA160;
loc_821AA1CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821AA1D0:
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

PPC_WEAK_FUNC(sub_821AA0F0) {
	__imp__sub_821AA0F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821AA1F0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,268(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x821aa300
	if (ctx.cr6.eq) goto loc_821AA300;
	// stw r6,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r6.u32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,364(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,368(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,372(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// bl 0x822d4ed0
	ctx.lr = 0x821AA24C;
	sub_822D4ED0(ctx, base);
	// lfs f11,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821AA270;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,360
	ctx.r8.s64 = 360;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f8,f31,f9
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f6.u32);
	// bl 0x821f25e0
	ctx.lr = 0x821AA298;
	sub_821F25E0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x822a24e0
	ctx.lr = 0x821AA2A4;
	sub_822A24E0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821aa2c4
	if (ctx.cr6.eq) goto loc_821AA2C4;
	// lhz r3,124(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 124);
	// bl 0x82332b28
	ctx.lr = 0x821AA2B4;
	sub_82332B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,378
	ctx.r3.s64 = ctx.r31.s64 + 378;
	// bl 0x822a2560
	ctx.lr = 0x821AA2C0;
	sub_822A2560(ctx, base);
	// stw r26,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r26.u32);
loc_821AA2C4:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daab8
	ctx.lr = 0x821AA2D0;
	sub_821DAAB8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r11.u32);
	// addi r3,r30,302
	ctx.r3.s64 = ctx.r30.s64 + 302;
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// stw r27,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r27.u32);
	// lwz r9,312(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 312);
	// oris r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 65536;
	// stw r8,312(r27)
	PPC_STORE_U32(ctx.r27.u32 + 312, ctx.r8.u32);
	// bl 0x822a24e0
	ctx.lr = 0x821AA2F8;
	sub_822A24E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821AA300;
	sub_821B4E00(ctx, base);
loc_821AA300:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AA1E8) {
	__imp__sub_821AA1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA30C) {
	__imp__sub_821AA30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,-6
	ctx.r9.s64 = ctx.r11.s64 + -6;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA310) {
	__imp__sub_821AA310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4944(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821aa390
	if (ctx.cr6.eq) goto loc_821AA390;
	// lhz r11,4976(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4976);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa388
	if (!ctx.cr6.eq) goto loc_821AA388;
	// lfs f0,4916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4948(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4948);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821aa388
	if (!ctx.cr6.eq) goto loc_821AA388;
	// lfs f0,4952(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821aa388
	if (!ctx.cr6.eq) goto loc_821AA388;
	// lfs f0,4956(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4956);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821aa388
	if (!ctx.cr6.eq) goto loc_821AA388;
	// lfs f0,4960(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4960);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821aa390
	if (ctx.cr6.eq) goto loc_821AA390;
loc_821AA388:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821AA390:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA330) {
	__imp__sub_821AA330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA398) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA398) {
	__imp__sub_821AA398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA39C) {
	__imp__sub_821AA39C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA3A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa3c8
	if (ctx.cr6.eq) goto loc_821AA3C8;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// blr 
	return;
loc_821AA3C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA3A0) {
	__imp__sub_821AA3A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa3fc
	if (ctx.cr6.eq) goto loc_821AA3FC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-624(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + -624);
	// blr 
	return;
loc_821AA3FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA3D0) {
	__imp__sub_821AA3D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA404) {
	__imp__sub_821AA404(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA408) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa4c0
	if (ctx.cr6.eq) goto loc_821AA4C0;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa4c0
	if (ctx.cr6.eq) goto loc_821AA4C0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f12,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f10,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821AA474;
	sub_822D4AC8(ctx, base);
	// lwz r9,3236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3236);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x821aa4c0
	if (!ctx.cr6.gt) goto loc_821AA4C0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,3244
	ctx.r10.s64 = ctx.r31.s64 + 3244;
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_821AA498:
	// lfs f11,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x821aa4d8
	if (ctx.cr6.lt) goto loc_821AA4D8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821aa498
	if (ctx.cr6.lt) goto loc_821AA498;
loc_821AA4C0:
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_821AA4D8:
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
}

PPC_WEAK_FUNC(sub_821AA408) {
	__imp__sub_821AA408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lhz r8,56(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// mulli r10,r8,624
	ctx.r10.s64 = ctx.r8.s64 * 624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// lfs f0,-624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,-620(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -620);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,-616(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -616);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA4F0) {
	__imp__sub_821AA4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA52C) {
	__imp__sub_821AA52C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aa558
	if (ctx.cr6.eq) goto loc_821AA558;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// b 0x821aa55c
	goto loc_821AA55C;
loc_821AA558:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA55C:
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aa56c
	if (ctx.cr6.eq) goto loc_821AA56C;
	// b 0x8223fae0
	sub_8223FAE0(ctx, base);
	return;
loc_821AA56C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8222e490
	sub_8222E490(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AA530) {
	__imp__sub_821AA530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA574) {
	__imp__sub_821AA574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA578) {
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
	// addi r3,r3,3424
	ctx.r3.s64 = ctx.r3.s64 + 3424;
	// li r5,272
	ctx.r5.s64 = 272;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821AA59C;
	sub_823DE090(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r9,642
	ctx.r9.s64 = 42074112;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r5,r9,21
	ctx.r5.u64 = ctx.r9.u64 | 21;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r7,50
	ctx.r7.s64 = 50;
	// stfs f0,3424(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,3428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f0,3432(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// li r4,2047
	ctx.r4.s64 = 2047;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// addi r9,r31,3496
	ctx.r9.s64 = ctx.r31.s64 + 3496;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,176
	ctx.r10.s64 = ctx.r11.s64 + 176;
	// lhz r11,126(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// stw r11,3484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3484, ctx.r11.u32);
	// stw r8,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r8.u32);
	// stw r7,3496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3496, ctx.r7.u32);
	// stw r6,3480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3480, ctx.r6.u32);
	// stw r5,3528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3528, ctx.r5.u32);
	// stw r4,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r4.u32);
	// sth r3,3448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3448, ctx.r3.u16);
loc_821AA600:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821aa600
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AA600;
	// stb r8,3690(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3690, ctx.r8.u8);
	// stw r8,3692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3692, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821AA578) {
	__imp__sub_821AA578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mulli r9,r4,624
	ctx.r9.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821aa668
	if (ctx.cr6.eq) goto loc_821AA668;
	// lwz r10,4756(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4756);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r8,r10,r11
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
loc_821AA668:
	// lwz r11,312(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 312);
	// rlwinm r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821aa680
	if (ctx.cr6.eq) goto loc_821AA680;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821AA680:
	// lwz r11,4684(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4684);
	// lwz r10,608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 608);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r8,r11,r10
	ctx.r8.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r7,r8,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r3,r6,31
	ctx.r3.u64 = ctx.r6.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA628) {
	__imp__sub_821AA628(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// beq cr6,0x821aa718
	if (ctx.cr6.eq) goto loc_821AA718;
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lfs f0,3684(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3684);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821aa6e4
	if (!ctx.cr6.eq) goto loc_821AA6E4;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,3680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3680);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,3472(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3472, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,3468(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3468, temp.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_821AA6E4:
	// lfs f13,3680(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3680);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,3468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,3472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3472);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24472);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f8,f12,f0,f10
	ctx.f8.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// stfs f8,3468(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3468, temp.u32);
	// fmadds f7,f11,f0,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,3472(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3472, temp.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_821AA718:
	// rlwinm r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821aa748
	if (!ctx.cr6.eq) goto loc_821AA748;
	// lfs f0,3680(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3680);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,3684(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3684);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// stfs f11,3468(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3468, temp.u32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f10,3472(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3472, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_821AA748:
	// lfs f0,3684(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3684);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,3680(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3680);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f10,3468(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,3472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3472);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,24472(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24472);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f12,f0,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f8,3468(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3468, temp.u32);
	// fnmsubs f7,f11,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f7,3472(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3472, temp.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA6A0) {
	__imp__sub_821AA6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,3436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,3440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,3444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3444);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lhz r11,3448(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3448);
	// sth r11,12(r4)
	PPC_STORE_U16(ctx.r4.u32 + 12, ctx.r11.u16);
	// lwz r10,3456(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3456);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// lfs f11,3460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lwz r9,3452(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3452);
	// stw r9,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA780) {
	__imp__sub_821AA780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA7BC) {
	__imp__sub_821AA7BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3436, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3440(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3440, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3444(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3444, temp.u32);
	// lhz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// sth r11,3448(r3)
	PPC_STORE_U16(ctx.r3.u32 + 3448, ctx.r11.u16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,3456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3456, ctx.r10.u32);
	// lfs f11,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3460(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3460, temp.u32);
	// lwz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r9,3452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3452, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA7C0) {
	__imp__sub_821AA7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA7FC) {
	__imp__sub_821AA7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24464(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24464);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x821aa828
	if (!ctx.cr6.lt) goto loc_821AA828;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AA828:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA800) {
	__imp__sub_821AA800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA830) {
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
	ctx.lr = 0x821AA848;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,232(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,264(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 264);
	// lfs f13,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f29,f11,f13
	ctx.f29.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// bl 0x822d4b60
	ctx.lr = 0x821AA880;
	sub_822D4B60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x821aa8b4
	if (!ctx.cr6.eq) goto loc_821AA8B4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6c48
	ctx.lr = 0x821AA8A8;
	sub_821E6C48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822d4b60
	ctx.lr = 0x821AA8B4;
	sub_822D4B60(ctx, base);
loc_821AA8B4:
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmadds f10,f11,f29,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f12.f64));
	// fcmpu cr6,f10,f31
	ctx.cr6.compare(ctx.f10.f64, ctx.f31.f64);
	// bge cr6,0x821aa8e4
	if (!ctx.cr6.lt) goto loc_821AA8E4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_821AA8E4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24520);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// bge cr6,0x821aa904
	if (!ctx.cr6.lt) goto loc_821AA904;
	// lfs f13,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x821aa90c
	goto loc_821AA90C;
loc_821AA904:
	// lfs f0,-23144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
loc_821AA90C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x821AA918;
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

PPC_WEAK_FUNC(sub_821AA830) {
	__imp__sub_821AA830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AA92C) {
	__imp__sub_821AA92C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA930) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aa944
	if (!ctx.cr6.eq) goto loc_821AA944;
loc_821AA93C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821AA944:
	// lwz r11,3488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3488);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821aa93c
	if (ctx.cr6.eq) goto loc_821AA93C;
	// lbz r3,5038(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5038);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA930) {
	__imp__sub_821AA930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AA958) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4680(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,16384
	ctx.r8.u64 = ctx.r10.u64 | 16384;
	// addi r10,r11,24460
	ctx.r10.s64 = ctx.r11.s64 + 24460;
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stw r8,4680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4680, ctx.r8.u32);
	// rlwinm r6,r8,0,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// sth r7,4614(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4614, ctx.r7.u16);
	// stfs f0,3444(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3444, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lfs f0,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x821aa9ec
	if (!ctx.cr6.eq) goto loc_821AA9EC;
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// lbz r9,4611(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4611);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x821aa9ec
	if (ctx.cr6.eq) goto loc_821AA9EC;
	// lfs f13,4668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4668);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821aa9ec
	if (ctx.cr6.lt) goto loc_821AA9EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3424(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3424, temp.u32);
	// lfs f12,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,3428(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3428, temp.u32);
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,3432(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3432, temp.u32);
	// lfs f10,4668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4668);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsel f8,f9,f10,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f10.f64 : ctx.f0.f64;
	// stfs f8,4668(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4668, temp.u32);
	// blr 
	return;
loc_821AA9EC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,3468(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3468);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,3424(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3424, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,3472(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3472);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,3428(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3428, temp.u32);
	// lfs f7,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,3476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3476);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,3432(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3432, temp.u32);
	// lfs f4,4668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4668);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fsel f2,f3,f4,f0
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f4.f64 : ctx.f0.f64;
	// stfs f2,4668(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4668, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AA958) {
	__imp__sub_821AA958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAA34) {
	__imp__sub_821AAA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAA38) {
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
	ctx.lr = 0x821AAA50;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2412(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821aab24
	if (ctx.cr6.eq) goto loc_821AAB24;
	// lbz r10,391(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 391);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821aaa88
	if (!ctx.cr6.eq) goto loc_821AAA88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,26572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26572);
	ctx.f4.f64 = double(temp.f32);
	// b 0x821aaa90
	goto loc_821AAA90;
loc_821AAA88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,13220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f4.f64 = double(temp.f32);
loc_821AAA90:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r30,r31,420
	ctx.r30.s64 = ctx.r31.s64 + 420;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f2,14004(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14004);
	ctx.f2.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f1,7932(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r31,424
	ctx.r9.s64 = ctx.r31.s64 + 424;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f3,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lhz r3,126(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// stb r6,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r6.u8);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// bl 0x82320340
	ctx.lr = 0x821AAAE0;
	sub_82320340(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 390, ctx.r3.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821aab1c
	if (ctx.cr6.eq) goto loc_821AAB1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,6028(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f13,24816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24816);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsel f9,f11,f0,f12
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fsel f8,f10,f13,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f9.f64;
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x821aab28
	goto loc_821AAB28;
loc_821AAB1C:
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x821aab28
	goto loc_821AAB28;
loc_821AAB24:
	// stfs f31,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
loc_821AAB28:
	// lfs f0,424(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,420(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f29,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821AAB50;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,400(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f29,f11
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// fmuls f29,f9,f31
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// beq cr6,0x821aac4c
	if (ctx.cr6.eq) goto loc_821AAC4C;
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// bge cr6,0x821aaba4
	if (!ctx.cr6.lt) goto loc_821AABA4;
	// lfs f0,392(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f0,14164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x821aab90
	if (!ctx.cr6.gt) goto loc_821AAB90;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_821AAB90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f27,f31,f30
	ctx.f27.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// b 0x821aabcc
	goto loc_821AABCC;
loc_821AABA4:
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f0,f29
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f0,14164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14164);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x821aabbc
	if (!ctx.cr6.gt) goto loc_821AABBC;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_821AABBC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f27,f31,f28
	ctx.f27.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
loc_821AABCC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822846c0
	ctx.lr = 0x821AABD4;
	sub_822846C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r4,384(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 384);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f30,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822f7488
	ctx.lr = 0x821AAC00;
	sub_822F7488(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,386(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 386);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822f7488
	ctx.lr = 0x821AAC24;
	sub_822F7488(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r4,388(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 388);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822f7488
	ctx.lr = 0x821AAC48;
	sub_822F7488(ctx, base);
	// stfs f29,400(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
loc_821AAC4C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x821AAC58;
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

PPC_WEAK_FUNC(sub_821AAA38) {
	__imp__sub_821AAA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAC6C) {
	__imp__sub_821AAC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AAC78;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,268(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// addi r30,r10,404
	ctx.r30.s64 = ctx.r10.s64 + 404;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821AACA4;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821aad08
	if (ctx.cr6.eq) goto loc_821AAD08;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d378
	ctx.lr = 0x821AACBC;
	sub_8233D378(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821aad08
	if (ctx.cr6.eq) goto loc_821AAD08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,52(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// bl 0x823170e8
	ctx.lr = 0x821AACD0;
	sub_823170E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8233d350
	ctx.lr = 0x821AACDC;
	sub_8233D350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821aad08
	if (ctx.cr6.eq) goto loc_821AAD08;
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82102460
	ctx.lr = 0x821AACF8;
	sub_82102460(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5928
	ctx.r4.s64 = ctx.r11.s64 + -5928;
	// bl 0x822f1fe0
	ctx.lr = 0x821AAD08;
	sub_822F1FE0(ctx, base);
loc_821AAD08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AAC70) {
	__imp__sub_821AAC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAD14) {
	__imp__sub_821AAD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAD18) {
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
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821aad58
	if (!ctx.cr6.gt) goto loc_821AAD58;
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
loc_821AAD58:
	// bl 0x822d4918
	ctx.lr = 0x821AAD5C;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24820(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24820);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821aad74
	if (!ctx.cr6.gt) goto loc_821AAD74;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AAD74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AAD18) {
	__imp__sub_821AAD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAD88) {
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
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821aadc8
	if (!ctx.cr6.gt) goto loc_821AADC8;
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
loc_821AADC8:
	// addi r4,r4,20
	ctx.r4.s64 = ctx.r4.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x821AADD0;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821aade8
	if (!ctx.cr6.gt) goto loc_821AADE8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AADE8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AAD88) {
	__imp__sub_821AAD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AADFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AADFC) {
	__imp__sub_821AADFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAE00) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f13,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,24824(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// lfs f12,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// ble cr6,0x821aae50
	if (!ctx.cr6.gt) goto loc_821AAE50;
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
loc_821AAE50:
	// addi r4,r11,4796
	ctx.r4.s64 = ctx.r11.s64 + 4796;
	// bl 0x822d4918
	ctx.lr = 0x821AAE58;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821aae70
	if (!ctx.cr6.gt) goto loc_821AAE70;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AAE70:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AAE00) {
	__imp__sub_821AAE00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAE84) {
	__imp__sub_821AAE84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAE88) {
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
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x821aaed0
	if (!ctx.cr6.gt) goto loc_821AAED0;
loc_821AAEC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821aaf10
	goto loc_821AAF10;
loc_821AAED0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x821AAEE0;
	sub_822D4918(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821aaec8
	if (ctx.cr6.gt) goto loc_821AAEC8;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821aaf0c
	if (ctx.cr6.eq) goto loc_821AAF0C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821AAF00;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821aaf10
	if (ctx.cr6.eq) goto loc_821AAF10;
loc_821AAF0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821AAF10:
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

PPC_WEAK_FUNC(sub_821AAE88) {
	__imp__sub_821AAE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAF2C) {
	__imp__sub_821AAF2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAF30) {
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
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmuls f9,f12,f12
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// ble cr6,0x821aaf78
	if (!ctx.cr6.gt) goto loc_821AAF78;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821AAF78:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fmuls f31,f13,f13
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// bl 0x822d4918
	ctx.lr = 0x821AAF88;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r3,0
	ctx.r3.s64 = 0;
	// bgt cr6,0x821aaf98
	if (ctx.cr6.gt) goto loc_821AAF98;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821AAF98:
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

PPC_WEAK_FUNC(sub_821AAF30) {
	__imp__sub_821AAF30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AAFAC) {
	__imp__sub_821AAFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AAFB0) {
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
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821aaffc
	if (!ctx.cr6.gt) goto loc_821AAFFC;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821AAFFC:
	// bl 0x822d4918
	ctx.lr = 0x821AB000;
	sub_822D4918(ctx, base);
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821ab014
	if (!ctx.cr6.gt) goto loc_821AB014;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB014:
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

PPC_WEAK_FUNC(sub_821AAFB0) {
	__imp__sub_821AAFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB02C) {
	__imp__sub_821AB02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB030) {
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
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821ab07c
	if (!ctx.cr6.gt) goto loc_821AB07C;
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_821AB07C:
	// bl 0x822d4918
	ctx.lr = 0x821AB080;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x821ab090
	if (!ctx.cr6.gt) goto loc_821AB090;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB090:
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

PPC_WEAK_FUNC(sub_821AB030) {
	__imp__sub_821AB030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB0A8) {
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
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,24824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24824);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f12
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821ab0e8
	if (!ctx.cr6.gt) goto loc_821AB0E8;
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
loc_821AB0E8:
	// bl 0x822d4918
	ctx.lr = 0x821AB0EC;
	sub_822D4918(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821ab104
	if (!ctx.cr6.gt) goto loc_821AB104;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB104:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB0A8) {
	__imp__sub_821AB0A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,3372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ab140
	if (ctx.cr6.eq) goto loc_821AB140;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821ab144
	if (!ctx.cr6.eq) goto loc_821AB144;
loc_821AB140:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821AB144:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB118) {
	__imp__sub_821AB118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB14C) {
	__imp__sub_821AB14C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab1b4
	if (ctx.cr6.eq) goto loc_821AB1B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r8,r10,0,13,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFFC;
	// rlwinm r8,r8,0,24,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFC00FF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821ab188
	if (ctx.cr6.eq) goto loc_821AB188;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,24520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24520);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821ab1a4
	goto loc_821AB1A4;
loc_821AB188:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,40956
	ctx.r12.u64 = ctx.r12.u64 | 40956;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ab1b4
	if (!ctx.cr6.eq) goto loc_821AB1B4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,5808(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5808);
	ctx.f1.f64 = double(temp.f32);
loc_821AB1A4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// b 0x821aafb0
	sub_821AAFB0(ctx, base);
	return;
loc_821AB1B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB150) {
	__imp__sub_821AB150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB1BC) {
	__imp__sub_821AB1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB1C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3692(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3692);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB1C0) {
	__imp__sub_821AB1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB1D0) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lbz r10,5001(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5001);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r9,r11,500
	ctx.r9.s64 = ctx.r11.s64 + 500;
	// stw r9,4748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4748, ctx.r9.u32);
	// bne cr6,0x821ab2c0
	if (!ctx.cr6.eq) goto loc_821AB2C0;
	// bl 0x821dba18
	ctx.lr = 0x821AB20C;
	sub_821DBA18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db660
	ctx.lr = 0x821AB214;
	sub_821DB660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ab264
	if (ctx.cr6.eq) goto loc_821AB264;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6024);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ab29c
	if (ctx.cr6.eq) goto loc_821AB29C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,52(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822e8620
	ctx.lr = 0x821AB240;
	sub_822E8620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r4,r10,24904
	ctx.r4.s64 = ctx.r10.s64 + 24904;
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lhz r5,126(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x82280900
	ctx.lr = 0x821AB260;
	sub_82280900(ctx, base);
	// b 0x821ab29c
	goto loc_821AB29C;
loc_821AB264:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,52(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822e8620
	ctx.lr = 0x821AB274;
	sub_822E8620(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r5,r10,24900
	ctx.r5.s64 = ctx.r10.s64 + 24900;
	// addi r4,r9,24832
	ctx.r4.s64 = ctx.r9.s64 + 24832;
	// lhz r6,126(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// li r3,18
	ctx.r3.s64 = 18;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82280900
	ctx.lr = 0x821AB29C;
	sub_82280900(ctx, base);
loc_821AB29C:
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// addi r3,r11,-520
	ctx.r3.s64 = ctx.r11.s64 + -520;
	// bl 0x822ad078
	ctx.lr = 0x821AB2A8;
	sub_822AD078(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,26(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 26);
	// bl 0x82229da8
	ctx.lr = 0x821AB2C0;
	sub_82229DA8(ctx, base);
loc_821AB2C0:
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

PPC_WEAK_FUNC(sub_821AB1D0) {
	__imp__sub_821AB1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB2D8) {
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
	// lbz r11,3405(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3405);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab3d4
	if (ctx.cr6.eq) goto loc_821AB3D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r9,r11,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ab3d4
	if (ctx.cr6.eq) goto loc_821AB3D4;
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lfs f0,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r11,r11,24512
	ctx.r11.s64 = ctx.r11.s64 + 24512;
	// beq cr6,0x821ab33c
	if (ctx.cr6.eq) goto loc_821AB33C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,30232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 30232);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821ab340
	goto loc_821AB340;
loc_821AB33C:
	// lfs f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
loc_821AB340:
	// fmuls f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,4792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4792, temp.u32);
	// lfs f9,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4796(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4796);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f6,f11,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// fnmsubs f4,f10,f0,f12
	ctx.f4.f64 = double(float(-(ctx.f10.f64 * ctx.f0.f64 - ctx.f12.f64)));
	// fadds f0,f5,f6
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f13,f9,f4
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// bne cr6,0x821ab3a0
	if (!ctx.cr6.eq) goto loc_821AB3A0;
	// lfs f12,4800(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4800);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x821ab3b0
	if (ctx.cr6.eq) goto loc_821AB3B0;
loc_821AB3A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a96b8
	ctx.lr = 0x821AB3A8;
	sub_821A96B8(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_821AB3B0:
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// stfs f13,4800(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// stfs f12,4804(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4804, temp.u32);
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
loc_821AB3D4:
	// lfs f0,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,4796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4796, temp.u32);
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4800(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4800, temp.u32);
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,4804(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4804, temp.u32);
	// stfs f0,4792(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4792, temp.u32);
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

PPC_WEAK_FUNC(sub_821AB2D8) {
	__imp__sub_821AB2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB40C) {
	__imp__sub_821AB40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB410) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,720(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab438
	if (ctx.cr6.eq) goto loc_821AB438;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,716(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821ab43c
	if (ctx.cr6.gt) goto loc_821AB43C;
loc_821AB438:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB43C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB410) {
	__imp__sub_821AB410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB444) {
	__imp__sub_821AB444(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab4ec
	if (ctx.cr6.eq) goto loc_821AB4EC;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab4ec
	if (ctx.cr6.eq) goto loc_821AB4EC;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ab48c
	if (!ctx.cr6.eq) goto loc_821AB48C;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ab4ec
	if (ctx.cr6.eq) goto loc_821AB4EC;
loc_821AB48C:
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bge cr6,0x821ab4ec
	if (!ctx.cr6.lt) goto loc_821AB4EC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f0,24356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// blt cr6,0x821ab4e4
	if (ctx.cr6.lt) goto loc_821AB4E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB4E4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821AB4EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB448) {
	__imp__sub_821AB448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB4F4) {
	__imp__sub_821AB4F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,4992(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f0,f6,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f4,f10,f10
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// blt cr6,0x821ab544
	if (ctx.cr6.lt) goto loc_821AB544;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821AB544:
	// fabs f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f13,4932(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4932);
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

PPC_WEAK_FUNC(sub_821AB4F8) {
	__imp__sub_821AB4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f11,f13,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// blt cr6,0x821ab598
	if (ctx.cr6.lt) goto loc_821AB598;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821AB598:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bgt cr6,0x821ab5b4
	if (ctx.cr6.gt) goto loc_821AB5B4;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x821ab5c0
	goto loc_821AB5C0;
loc_821AB5B4:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f13,f12,f13,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
loc_821AB5C0:
	// fcmpu cr6,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821ab5d0
	if (ctx.cr6.lt) goto loc_821AB5D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB5D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB560) {
	__imp__sub_821AB560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB5D8) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821ab668
	if (!ctx.cr6.eq) goto loc_821AB668;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,100
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 100, ctx.xer);
	// bne cr6,0x821ab668
	if (!ctx.cr6.eq) goto loc_821AB668;
	// bl 0x821d95c8
	ctx.lr = 0x821AB61C;
	sub_821D95C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab668
	if (ctx.cr6.eq) goto loc_821AB668;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lwz r10,3148(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3148);
	// lwz r11,3144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3144);
	// addi r8,r9,9624
	ctx.r8.s64 = ctx.r9.s64 + 9624;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// subfc r7,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eqv r6,r11,r10
	ctx.r6.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
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
loc_821AB668:
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

PPC_WEAK_FUNC(sub_821AB5D8) {
	__imp__sub_821AB5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821AB688;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bne cr6,0x821ab6bc
	if (!ctx.cr6.eq) goto loc_821AB6BC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ab7cc
	if (ctx.cr6.eq) goto loc_821AB7CC;
loc_821AB6BC:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,852
	ctx.r31.s64 = ctx.r28.s64 + 852;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
loc_821AB6D0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbz r10,106(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 106);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ab7b8
	if (ctx.cr6.eq) goto loc_821AB7B8;
	// lwz r10,-12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ab7b8
	if (ctx.cr6.eq) goto loc_821AB7B8;
	// lwz r9,52(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r8,10000
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10000, ctx.xer);
	// bgt cr6,0x821ab7b8
	if (ctx.cr6.gt) goto loc_821AB7B8;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x821ab7b8
	if (ctx.cr6.eq) goto loc_821AB7B8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,332(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// beq cr6,0x821ab7b8
	if (ctx.cr6.eq) goto loc_821AB7B8;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab768
	if (ctx.cr6.eq) goto loc_821AB768;
	// lbz r10,5004(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5004);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ab7b8
	if (!ctx.cr6.eq) goto loc_821AB7B8;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// beq cr6,0x821ab7b8
	if (ctx.cr6.eq) goto loc_821AB7B8;
loc_821AB768:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821ab79c
	if (ctx.cr6.eq) goto loc_821AB79C;
	// addi r4,r26,232
	ctx.r4.s64 = ctx.r26.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d4918
	ctx.lr = 0x821AB77C;
	sub_822D4918(ctx, base);
	// lfs f0,5012(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 5012);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x821ab7b8
	if (ctx.cr6.lt) goto loc_821AB7B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233cd78
	ctx.lr = 0x821AB794;
	sub_8233CD78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// b 0x821ab7b4
	goto loc_821AB7B4;
loc_821AB79C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821aafb0
	ctx.lr = 0x821AB7AC;
	sub_821AAFB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
loc_821AB7B4:
	// bne cr6,0x821ab7e0
	if (!ctx.cr6.eq) goto loc_821AB7E0;
loc_821AB7B8:
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmplwi cr6,r30,5600
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 5600, ctx.xer);
	// blt cr6,0x821ab6d0
	if (ctx.cr6.lt) goto loc_821AB6D0;
loc_821AB7CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821AB7E0:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// mulli r10,r27,112
	ctx.r10.s64 = ctx.r27.s64 * 112;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AB680) {
	__imp__sub_821AB680(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB7FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB7FC) {
	__imp__sub_821AB7FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB800) {
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
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,56(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab848
	if (ctx.cr6.eq) goto loc_821AB848;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ab850
	if (!ctx.cr6.eq) goto loc_821AB850;
loc_821AB848:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ab938
	goto loc_821AB938;
loc_821AB850:
	// lwz r9,272(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ab890
	if (ctx.cr6.eq) goto loc_821AB890;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r7,112
	ctx.r7.s64 = 112;
	// addi r6,r11,9624
	ctx.r6.s64 = ctx.r11.s64 + 9624;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r10,52(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r4,r5,r7
	ctx.r4.s32 = ctx.r5.s32 / ctx.r7.s32;
	// mulli r11,r4,44
	ctx.r11.s64 = ctx.r4.s64 * 44;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,840(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r10,10000
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10000, ctx.xer);
	// bgt cr6,0x821ab848
	if (ctx.cr6.gt) goto loc_821AB848;
loc_821AB890:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,4928(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4928);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32018
	ctx.r9.s64 = -2098331648;
	// lwz r7,3372(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3372);
	// lbz r6,3405(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3405);
	// addi r11,r9,6688
	ctx.r11.s64 = ctx.r9.s64 + 6688;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f0,24456(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24456);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// subf r4,r7,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r7.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r30,r3,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// fsel f31,f12,f13,f0
	ctx.f31.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// beq cr6,0x821ab900
	if (ctx.cr6.eq) goto loc_821AB900;
	// lwz r11,92(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab900
	if (ctx.cr6.eq) goto loc_821AB900;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4796
	ctx.r4.s64 = ctx.r31.s64 + 4796;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lfs f1,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821aafb0
	ctx.lr = 0x821AB8F0;
	sub_821AAFB0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r6,r30
	ctx.r30.u64 = ctx.r6.u64 & ctx.r30.u64;
loc_821AB900:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab930
	if (ctx.cr6.eq) goto loc_821AB930;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aafb0
	ctx.lr = 0x821AB920;
	sub_821AAFB0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821ab934
	if (!ctx.cr6.eq) goto loc_821AB934;
loc_821AB930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AB934:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_821AB938:
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

PPC_WEAK_FUNC(sub_821AB800) {
	__imp__sub_821AB800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB954) {
	__imp__sub_821AB954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB958) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AB958) {
	__imp__sub_821AB958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB964) {
	__imp__sub_821AB964(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB968) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// b 0x821c6fc0
	sub_821C6FC0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AB968) {
	__imp__sub_821AB968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB970) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4688(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4688);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ab9cc
	if (ctx.cr6.eq) goto loc_821AB9CC;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AB9A8;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ab9c4
	if (ctx.cr6.eq) goto loc_821AB9C4;
	// lwz r10,4684(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ab9cc
	if (ctx.cr6.lt) goto loc_821AB9CC;
loc_821AB9C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821ab9d0
	goto loc_821AB9D0;
loc_821AB9CC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821AB9D0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

PPC_WEAK_FUNC(sub_821AB970) {
	__imp__sub_821AB970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AB9EC) {
	__imp__sub_821AB9EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AB9F0) {
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
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c6ec8
	ctx.lr = 0x821ABA0C;
	sub_821C6EC8(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,11232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11232);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stb r10,4722(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4722, ctx.r10.u8);
	// stw r9,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r9.u32);
	// stw r8,4732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4732, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821AB9F0) {
	__imp__sub_821AB9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABA40) {
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
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aba8c
	if (ctx.cr6.eq) goto loc_821ABA8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,3712
	ctx.r30.s64 = ctx.r3.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c6738
	ctx.lr = 0x821ABA78;
	sub_821C6738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821ABA80;
	sub_821C6F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r11.u32);
	// stw r11,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r11.u32);
loc_821ABA8C:
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

PPC_WEAK_FUNC(sub_821ABA40) {
	__imp__sub_821ABA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ABAA4) {
	__imp__sub_821ABAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821ABAB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822846c0
	ctx.lr = 0x821ABAC8;
	sub_822846C0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r7,3408(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3408);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822f4370
	ctx.lr = 0x821ABADC;
	sub_822F4370(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// lwz r11,13368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13368);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821abb38
	if (!ctx.cr6.eq) goto loc_821ABB38;
	// lfs f3,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
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
	// addi r4,r10,24988
	ctx.r4.s64 = ctx.r10.s64 + 24988;
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r8,52(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// bl 0x82280900
	ctx.lr = 0x821ABB38;
	sub_82280900(ctx, base);
loc_821ABB38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ABAA8) {
	__imp__sub_821ABAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4996(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821abb70
	if (ctx.cr6.eq) goto loc_821ABB70;
	// lbz r11,5000(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821abb70
	if (ctx.cr6.eq) goto loc_821ABB70;
	// lbz r11,5001(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5001);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821abb74
	if (!ctx.cr6.eq) goto loc_821ABB74;
loc_821ABB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ABB74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821ABB40) {
	__imp__sub_821ABB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ABB7C) {
	__imp__sub_821ABB7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABB80) {
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
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821abbb8
	if (ctx.cr6.eq) goto loc_821ABBB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821abcf8
	goto loc_821ABCF8;
loc_821ABBB8:
	// lwz r11,3456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821abbd0
	if (!ctx.cr6.eq) goto loc_821ABBD0;
	// lhz r11,3448(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3448);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x821abc98
	if (ctx.cr6.eq) goto loc_821ABC98;
loc_821ABBD0:
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fe8
	ctx.lr = 0x821ABBDC;
	sub_821C6FE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821abc98
	if (ctx.cr6.eq) goto loc_821ABC98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6ff8
	ctx.lr = 0x821ABBEC;
	sub_821C6FF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821abca0
	if (ctx.cr6.eq) goto loc_821ABCA0;
	// lbz r10,4611(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// lfs f0,3440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// lfs f12,3436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3444);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,25024(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25024);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f12,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r10,r11,3712
	ctx.r10.s64 = ctx.r11.s64 + 3712;
	// lfs f6,3712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f31,f6,f10
	ctx.f31.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f5,3716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f30,f5,f9
	ctx.f30.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f13,25020(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 25020);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,3720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f11,f11,f7
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fsubs f29,f4,f8
	ctx.f29.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fmuls f2,f31,f31
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f1,f3,f0,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f0,f30,f30,f2
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x821abc98
	if (ctx.cr6.gt) goto loc_821ABC98;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dac60
	ctx.lr = 0x821ABC78;
	sub_821DAC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821abc98
	if (ctx.cr6.eq) goto loc_821ABC98;
	// addi r4,r31,3388
	ctx.r4.s64 = ctx.r31.s64 + 3388;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c7050
	ctx.lr = 0x821ABC8C;
	sub_821C7050(ctx, base);
	// stfs f31,3468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f30,3472(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f29,3476(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
loc_821ABC98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821abcf8
	goto loc_821ABCF8;
loc_821ABCA0:
	// lbz r11,4720(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4720);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821abc98
	if (!ctx.cr6.eq) goto loc_821ABC98;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821abc98
	if (!ctx.cr6.eq) goto loc_821ABC98;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821abce8
	if (ctx.cr6.eq) goto loc_821ABCE8;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821abce8
	if (ctx.cr6.eq) goto loc_821ABCE8;
	// lbz r11,5001(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5001);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821abcec
	if (!ctx.cr6.eq) goto loc_821ABCEC;
loc_821ABCE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ABCEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821ABCF8:
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

PPC_WEAK_FUNC(sub_821ABB80) {
	__imp__sub_821ABB80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ABD1C) {
	__imp__sub_821ABD1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821ABD28;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x821ABD30;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4716(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4716);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// ble cr6,0x821abe20
	if (!ctx.cr6.gt) goto loc_821ABE20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r3,r3,4616
	ctx.r3.s64 = ctx.r3.s64 + 4616;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821ABD60;
	sub_822D4918(ctx, base);
	// lbz r11,4720(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4720);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821abda4
	if (ctx.cr6.eq) goto loc_821ABDA4;
	// lfs f0,4716(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821abd9c
	if (!ctx.cr6.gt) goto loc_821ABD9C;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,594(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 594);
	// bl 0x82229da8
	ctx.lr = 0x821ABD94;
	sub_82229DA8(ctx, base);
	// stb r29,4720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4720, ctx.r29.u8);
	// b 0x821abe20
	goto loc_821ABE20;
loc_821ABD9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821abe20
	if (!ctx.cr6.eq) goto loc_821ABE20;
loc_821ABDA4:
	// lfs f0,4716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x821abe20
	if (!ctx.cr6.lt) goto loc_821ABE20;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fd8
	ctx.lr = 0x821ABDB8;
	sub_821C6FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821abe20
	if (ctx.cr6.eq) goto loc_821ABE20;
	// lfs f0,4996(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// beq cr6,0x821abde8
	if (ctx.cr6.eq) goto loc_821ABDE8;
	// lbz r11,5000(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5000);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821abde8
	if (ctx.cr6.eq) goto loc_821ABDE8;
	// lbz r11,5001(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5001);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x821abdec
	if (!ctx.cr6.eq) goto loc_821ABDEC;
loc_821ABDE8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821ABDEC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821abe20
	if (!ctx.cr6.eq) goto loc_821ABE20;
	// fsqrts f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(sqrt(ctx.f31.f64)));
	// bl 0x822acc78
	ctx.lr = 0x821ABE00;
	sub_822ACC78(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,606(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 606);
	// bl 0x82229da8
	ctx.lr = 0x821ABE18;
	sub_82229DA8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,4720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4720, ctx.r9.u8);
loc_821ABE20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abb80
	ctx.lr = 0x821ABE28;
	sub_821ABB80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821abfa0
	if (!ctx.cr6.eq) goto loc_821ABFA0;
	// lfs f0,4716(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4716);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x821abfa0
	if (ctx.cr6.gt) goto loc_821ABFA0;
	// lbz r10,4611(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// lwz r7,4712(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4712);
	// addi r30,r9,9624
	ctx.r30.s64 = ctx.r9.s64 + 9624;
	// mulli r10,r8,28
	ctx.r10.s64 = ctx.r8.s64 * 28;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r11,3712
	ctx.r10.s64 = ctx.r11.s64 + 3712;
	// lfs f11,3712(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3712);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,3716(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3716);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f9,3720(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3720);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f10,f13
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f27,f9,f12
	ctx.f27.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// bne cr6,0x821abee0
	if (!ctx.cr6.eq) goto loc_821ABEE0;
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f29,f30,f30,f0
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f0.f64));
	// fcmpu cr6,f29,f28
	ctx.cr6.compare(ctx.f29.f64, ctx.f28.f64);
	// beq cr6,0x821abeb0
	if (ctx.cr6.eq) goto loc_821ABEB0;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fd8
	ctx.lr = 0x821ABEA8;
	sub_821C6FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821abfa0
	if (ctx.cr6.eq) goto loc_821ABFA0;
loc_821ABEB0:
	// lfs f0,3440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24332(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24332);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f10,f29
	ctx.cr6.compare(ctx.f10.f64, ctx.f29.f64);
	// blt cr6,0x821abfa0
	if (ctx.cr6.lt) goto loc_821ABFA0;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r11,r11,500
	ctx.r11.s64 = ctx.r11.s64 + 500;
	// stw r11,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r11.u32);
loc_821ABEE0:
	// lwz r10,4712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4712);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x821abf30
	if (ctx.cr0.gt) goto loc_821ABF30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821ABEF8;
	sub_821ABA40(ctx, base);
	// fmuls f13,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r29.u32);
	// lfs f0,24460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24460);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f30,f30,f13
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821abfa0
	if (!ctx.cr6.lt) goto loc_821ABFA0;
	// stfs f31,3468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f30,3472(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f27,3476(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x821ABF2C;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821ABF30:
	// lwz r10,3456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3456);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// beq cr6,0x821abf50
	if (ctx.cr6.eq) goto loc_821ABF50;
	// lfs f13,3460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3460);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// b 0x821abf54
	goto loc_821ABF54;
loc_821ABF50:
	// lfs f12,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
loc_821ABF54:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f0,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fsubs f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f6,f31,f7
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// stfs f6,3468(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// fmuls f5,f30,f7
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// stfs f5,3472(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// fmuls f4,f27,f7
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f7.f64));
	// stfs f4,3476(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
loc_821ABFA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x821ABFAC;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ABD20) {
	__imp__sub_821ABD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ABFB0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d9618
	ctx.lr = 0x821ABFD8;
	sub_822D9618(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fneg f7,f12
	ctx.f7.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f9,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f10,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fsubs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f3,f7,f0,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f6,f0,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f1,f5,f0,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d6a38
	ctx.lr = 0x821AC034;
	sub_822D6A38(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r9,-5928
	ctx.r7.s64 = ctx.r9.s64 + -5928;
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// lfs f13,-5928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5928);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,5880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmadds f7,f8,f0,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f7,60(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lfs f6,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmadds f4,f5,f0,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f4,64(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
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

PPC_WEAK_FUNC(sub_821ABFB0) {
	__imp__sub_821ABFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC09C) {
	__imp__sub_821AC09C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AC0A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,472(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821ac224
	if (ctx.cr6.eq) goto loc_821AC224;
loc_821AC0C4:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// bne cr6,0x821ac0ec
	if (!ctx.cr6.eq) goto loc_821AC0EC;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ac0c4
	if (!ctx.cr6.eq) goto loc_821AC0C4;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AC0EC:
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac224
	if (ctx.cr6.eq) goto loc_821AC224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232ea8
	ctx.lr = 0x821AC104;
	sub_82232EA8(ctx, base);
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r8,2065
	ctx.r8.s64 = 2065;
	// lfs f0,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,196
	ctx.r5.s64 = ctx.r1.s64 + 196;
	// lfs f10,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f9,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821AC164;
	sub_821FE618(ctx, base);
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ac224
	if (ctx.cr6.eq) goto loc_821AC224;
	// lwz r31,268(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// li r29,6
	ctx.r29.s64 = 6;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,3424
	ctx.r3.s64 = ctx.r31.s64 + 3424;
	// stw r29,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r29.u32);
	// lwz r11,-16972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16972);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3492(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3492, temp.u32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f8,3468(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f9,3472(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,3424(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3424, temp.u32);
	// lfs f6,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,3428(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3428, temp.u32);
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,3432(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3432, temp.u32);
	// bl 0x821d1450
	ctx.lr = 0x821AC1D8;
	sub_821D1450(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r9.u32);
	// lfs f4,3428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3428);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,3424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3424);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f0,f4,f3
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x821ac208
	if (!ctx.cr6.eq) goto loc_821AC208;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821ac224
	if (ctx.cr6.eq) goto loc_821AC224;
loc_821AC208:
	// stw r29,3488(r28)
	PPC_STORE_U32(ctx.r28.u32 + 3488, ctx.r29.u32);
	// stfs f31,3436(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3436, temp.u32);
	// stfs f31,3440(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3440, temp.u32);
	// stfs f31,3444(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3444, temp.u32);
	// stfs f13,3468(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3468, temp.u32);
	// stfs f0,3472(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3472, temp.u32);
	// stfs f31,3476(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 3476, temp.u32);
loc_821AC224:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AC0A0) {
	__imp__sub_821AC0A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC230) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac268
	if (ctx.cr6.eq) goto loc_821AC268;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae00
	ctx.lr = 0x821AC258;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ac26c
	if (!ctx.cr6.eq) goto loc_821AC26C;
loc_821AC268:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AC26C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC230) {
	__imp__sub_821AC230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC27C) {
	__imp__sub_821AC27C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC280) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac300
	if (ctx.cr6.eq) goto loc_821AC300;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae00
	ctx.lr = 0x821AC2B0;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac300
	if (ctx.cr6.eq) goto loc_821AC300;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,3405(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3405);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x821ac2d8
	if (ctx.cr6.eq) goto loc_821AC2D8;
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821ac2dc
	goto loc_821AC2DC;
loc_821AC2D8:
	// bl 0x82235e78
	ctx.lr = 0x821AC2DC;
	sub_82235E78(ctx, base);
loc_821AC2DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821ac304
	if (ctx.cr6.lt) goto loc_821AC304;
loc_821AC300:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AC304:
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

PPC_WEAK_FUNC(sub_821AC280) {
	__imp__sub_821AC280(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC318) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ac348
	if (!ctx.cr6.eq) goto loc_821AC348;
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
loc_821AC348:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// bl 0x821aafb0
	ctx.lr = 0x821AC358;
	sub_821AAFB0(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC318) {
	__imp__sub_821AC318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC36C) {
	__imp__sub_821AC36C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC370) {
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
	// lbz r11,3153(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3153);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac3c4
	if (ctx.cr6.eq) goto loc_821AC3C4;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821AC3A4;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ac3bc
	if (ctx.cr6.eq) goto loc_821AC3BC;
	// lbz r11,3154(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3154);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac4a4
	if (ctx.cr6.eq) goto loc_821AC4A4;
loc_821AC3BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821ac4a4
	goto loc_821AC4A4;
loc_821AC3C4:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AC3CC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac494
	if (ctx.cr6.eq) goto loc_821AC494;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,4620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4624(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4624);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,4616(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4616);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,232
	ctx.r10.s64 = ctx.r11.s64 + 232;
	// lfs f11,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// lfs f0,24356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x821ac494
	if (!ctx.cr6.lt) goto loc_821AC494;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac484
	if (ctx.cr6.eq) goto loc_821AC484;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 * 624;
	// addi r11,r8,26552
	ctx.r11.s64 = ctx.r8.s64 + 26552;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac484
	if (ctx.cr6.eq) goto loc_821AC484;
	// lfs f13,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f11,f11
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f3,f8,f8,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f5,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x821ac494
	if (!ctx.cr6.gt) goto loc_821AC494;
loc_821AC484:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9f50
	ctx.lr = 0x821AC490;
	sub_821B9F50(ctx, base);
	// b 0x821ac4a0
	goto loc_821AC4A0;
loc_821AC494:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b9e40
	ctx.lr = 0x821AC4A0;
	sub_821B9E40(ctx, base);
loc_821AC4A0:
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
loc_821AC4A4:
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

PPC_WEAK_FUNC(sub_821AC370) {
	__imp__sub_821AC370(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC4BC) {
	__imp__sub_821AC4BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC4C0) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4722(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4722);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac4dc
	if (ctx.cr6.eq) goto loc_821AC4DC;
	// lbz r11,3153(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3153);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821AC4DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC4C0) {
	__imp__sub_821AC4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC4E4) {
	__imp__sub_821AC4E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC4E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821AC4F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r25,r3,4824
	ctx.r25.s64 = ctx.r3.s64 + 4824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ac66c
	if (!ctx.cr6.eq) goto loc_821AC66C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r10,-500
	ctx.r8.s64 = ctx.r10.s64 + -500;
	// lwz r7,3372(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lfs f0,232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwzx r11,r6,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// addi r5,r11,168
	ctx.r5.s64 = ctx.r11.s64 + 168;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821ac574
	if (ctx.cr6.eq) goto loc_821AC574;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac56c
	if (ctx.cr6.eq) goto loc_821AC56C;
	// bl 0x821aae00
	ctx.lr = 0x821AC560;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ac574
	if (!ctx.cr6.eq) goto loc_821AC574;
loc_821AC56C:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x821ac578
	goto loc_821AC578;
loc_821AC574:
	// li r26,1
	ctx.r26.s64 = 1;
loc_821AC578:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r10,33024
	ctx.r27.u64 = ctx.r10.u64 | 33024;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
loc_821AC58C:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbz r11,5039(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac614
	if (ctx.cr6.eq) goto loc_821AC614;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821ac614
	if (ctx.cr6.eq) goto loc_821AC614;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821ac5cc
	if (ctx.cr6.eq) goto loc_821AC5CC;
	// lwz r11,3668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,272(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ac614
	if (ctx.cr6.eq) goto loc_821AC614;
loc_821AC5CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad18
	ctx.lr = 0x821AC5E0;
	sub_821AAD18(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ac614
	if (ctx.cr6.eq) goto loc_821AC614;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,468(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac628
	if (ctx.cr6.eq) goto loc_821AC628;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,126(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821ac628
	if (!ctx.cr6.eq) goto loc_821AC628;
loc_821AC614:
	// addi r28,r28,5128
	ctx.r28.s64 = ctx.r28.s64 + 5128;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x821ac58c
	if (ctx.cr6.lt) goto loc_821AC58C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821AC628:
	// addi r3,r30,3712
	ctx.r3.s64 = ctx.r30.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AC630;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac660
	if (ctx.cr6.eq) goto loc_821AC660;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r30,4616
	ctx.r4.s64 = ctx.r30.s64 + 4616;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821ab0a8
	ctx.lr = 0x821AC64C;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac660
	if (ctx.cr6.eq) goto loc_821AC660;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AC660;
	sub_821ABA40(ctx, base);
loc_821AC660:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821e2e18
	ctx.lr = 0x821AC66C;
	sub_821E2E18(ctx, base);
loc_821AC66C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AC4E8) {
	__imp__sub_821AC4E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC674) {
	__imp__sub_821AC674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC678) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4768, ctx.r11.u32);
	// stw r11,4772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4772, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC678) {
	__imp__sub_821AC678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC688) {
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
	// addi r4,r3,4916
	ctx.r4.s64 = ctx.r3.s64 + 4916;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c6c38
	ctx.lr = 0x821AC6A8;
	sub_821C6C38(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ac6b8
	if (!ctx.cr6.eq) goto loc_821AC6B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AC6B8;
	sub_821ABA40(ctx, base);
loc_821AC6B8:
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

PPC_WEAK_FUNC(sub_821AC688) {
	__imp__sub_821AC688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC6CC) {
	__imp__sub_821AC6CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC6D0) {
	PPC_FUNC_PROLOGUE();
	// addi r4,r3,4736
	ctx.r4.s64 = ctx.r3.s64 + 4736;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// b 0x821c6ce0
	sub_821C6CE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AC6D0) {
	__imp__sub_821AC6D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC6DC) {
	__imp__sub_821AC6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC6E0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,26552
	ctx.r10.s64 = ctx.r11.s64 + 26552;
	// lhz r11,56(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac720
	if (ctx.cr6.eq) goto loc_821AC720;
	// mulli r9,r11,624
	ctx.r9.s64 = ctx.r11.s64 * 624;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r30,r9,-624
	ctx.r30.s64 = ctx.r9.s64 + -624;
	// b 0x821ac724
	goto loc_821AC724;
loc_821AC720:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821AC724:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ac73c
	if (ctx.cr6.eq) goto loc_821AC73C;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// b 0x821ac740
	goto loc_821AC740;
loc_821AC73C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AC740:
	// lwz r3,272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ac758
	if (ctx.cr6.eq) goto loc_821AC758;
	// bl 0x8223fae0
	ctx.lr = 0x821AC754;
	sub_8223FAE0(ctx, base);
	// b 0x821ac760
	goto loc_821AC760;
loc_821AC758:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8222e490
	ctx.lr = 0x821AC760;
	sub_8222E490(ctx, base);
loc_821AC760:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r7,126(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,760(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 760);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,4736
	ctx.r4.s64 = ctx.r31.s64 + 4736;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6d08
	ctx.lr = 0x821AC77C;
	sub_821C6D08(ctx, base);
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

PPC_WEAK_FUNC(sub_821AC6E0) {
	__imp__sub_821AC6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC794) {
	__imp__sub_821AC794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC798) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821ac7b8
	if (!ctx.cr6.gt) goto loc_821AC7B8;
	// lwz r11,4740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4740);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x821ac7bc
	if (ctx.cr6.eq) goto loc_821AC7BC;
loc_821AC7B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821AC7BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC798) {
	__imp__sub_821AC798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC7C4) {
	__imp__sub_821AC7C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,4832
	ctx.r11.s64 = ctx.r3.s64 + 4832;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_821AC7DC:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ac7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821AC7DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4828, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC7C8) {
	__imp__sub_821AC7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC7F4) {
	__imp__sub_821AC7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f13,4836(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4836);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f10,4840(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4840);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,4844(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4844);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f0,f5
	ctx.f0.f64 = ctx.f5.f64;
	// lfs f4,4848(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4848);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f1,4852(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4852);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f5
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// lfs f12,4856(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4856);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// lfs f9,4860(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4860);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// lfs f6,4864(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4864);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f5,4(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// lfs f3,4868(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4868);
	ctx.f3.f64 = double(temp.f32);
	// fadds f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f10,f1
	ctx.f10.f64 = ctx.f1.f64;
	// lfs f0,4872(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4872);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// lfs f11,4876(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4876);
	ctx.f11.f64 = double(temp.f32);
	// fadds f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f8,4880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4880);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lfs f5,4884(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4884);
	ctx.f5.f64 = double(temp.f32);
	// fadds f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// lfs f2,4888(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4888);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,4892(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4892);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f10,4896(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4896);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f1.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f7,4900(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4900);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f5,0(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// lfs f4,4904(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4904);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f4,f9
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f0,4908(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4908);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f12,4912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4912);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f3
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC7F8) {
	__imp__sub_821AC7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC94C) {
	__imp__sub_821AC94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC950) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r3,4836
	ctx.r3.s64 = ctx.r3.s64 + 4836;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821AC97C;
	sub_823DE090(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4836(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4836, temp.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4840(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4840, temp.u32);
	// stw r11,4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4828, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_821AC950) {
	__imp__sub_821AC950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AC9AC) {
	__imp__sub_821AC9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AC9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r7,4828(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4828);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne cr6,0x821ac9c4
	if (!ctx.cr6.eq) goto loc_821AC9C4;
	// li r11,10
	ctx.r11.s64 = 10;
loc_821AC9C4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// bne 0x821ac9d4
	if (!ctx.cr0.eq) goto loc_821AC9D4;
	// li r8,10
	ctx.r8.s64 = 10;
loc_821AC9D4:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,4680(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// addi r5,r11,605
	ctx.r5.s64 = ctx.r11.s64 + 605;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r6,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x400;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,4836(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4836);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r4,r3
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// beq cr6,0x821aca3c
	if (ctx.cr6.eq) goto loc_821ACA3C;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f10,4840(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4840);
	ctx.f10.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4836
	ctx.r10.s64 = ctx.r11.s64 + 4836;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,25028(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 25028);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,4836(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4836);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4840(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4840);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f6,f7,f10,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f8.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x821aca40
	if (ctx.cr6.gt) goto loc_821ACA40;
loc_821ACA3C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821ACA40:
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r11,4836
	ctx.r10.s64 = ctx.r11.s64 + 4836;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// stb r6,4832(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4832, ctx.r6.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r11,4836
	ctx.r11.s64 = ctx.r11.s64 + 4836;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f0,f12,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmadds f5,f9,f12,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f6.f64));
	// lfs f0,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x821acadc
	if (ctx.cr6.gt) goto loc_821ACADC;
	// lfs f13,4836(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4836);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// fmuls f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f10,4840(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4840);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f9,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x821acadc
	if (ctx.cr6.lt) goto loc_821ACADC;
	// fmuls f11,f13,f7
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fmadds f8,f10,f9,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// blt cr6,0x821acadc
	if (ctx.cr6.lt) goto loc_821ACADC;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_821ACADC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r7,1
	ctx.r6.s64 = ctx.r7.s64 + 1;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// lfs f13,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// bge cr6,0x821acc00
	if (!ctx.cr6.lt) goto loc_821ACC00;
	// subfic r11,r6,10
	ctx.xer.ca = ctx.r6.u32 <= 10;
	ctx.r11.s64 = 10 - ctx.r6.s64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821acbbc
	if (ctx.cr6.lt) goto loc_821ACBBC;
	// subfic r11,r6,6
	ctx.xer.ca = ctx.r6.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r6.s64;
	// addi r9,r6,604
	ctx.r9.s64 = ctx.r6.s64 + 604;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821ACB28:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f11,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fdivs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fdivs f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f12,f6,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fdivs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// fmuls f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfsu f9,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821acb28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ACB28;
loc_821ACBBC:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bge cr6,0x821acc00
	if (!ctx.cr6.lt) goto loc_821ACC00;
	// addi r11,r10,604
	ctx.r11.s64 = ctx.r10.s64 + 604;
	// subfic r10,r10,10
	ctx.xer.ca = ctx.r10.u32 <= 10;
	ctx.r10.s64 = 10 - ctx.r10.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821ACBD8:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfsu f7,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821acbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ACBD8;
loc_821ACC00:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x821accb8
	if (ctx.cr6.lt) goto loc_821ACCB8;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r3,4832
	ctx.r11.s64 = ctx.r3.s64 + 4832;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821ACC24:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f11,f3
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f12,f10,f3
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fdivs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f8,16(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fdivs f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f1,f7,f3
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f1,20(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f12,f6,f3
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f12,24(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fdivs f11,f2,f0
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f0.f64));
	// fmuls f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// stfsu f9,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821acc24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ACC24;
loc_821ACCB8:
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821accfc
	if (!ctx.cr6.lt) goto loc_821ACCFC;
	// addi r11,r10,604
	ctx.r11.s64 = ctx.r10.s64 + 604;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821ACCD4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfsu f7,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821accd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821ACCD4;
loc_821ACCFC:
	// lis r11,26214
	ctx.r11.s64 = 1717960704;
	// ori r10,r11,26215
	ctx.r10.u64 = ctx.r11.u64 | 26215;
	// mulhw r9,r6,r10
	ctx.r9.s64 = (int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32)) >> 32;
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r6,4828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4828, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AC9B0) {
	__imp__sub_821AC9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACD2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ACD2C) {
	__imp__sub_821ACD2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACD30) {
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
	// lwz r11,4680(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4680);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821acd7c
	if (ctx.cr6.eq) goto loc_821ACD7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4808(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4808, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4812(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4812, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4816(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4816, temp.u32);
	// b 0x821ace2c
	goto loc_821ACE2C;
loc_821ACD7C:
	// lbz r10,4608(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// addi r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 + 3712;
	// lbz r9,4611(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4611);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821ace10
	if (!ctx.cr6.eq) goto loc_821ACE10;
	// lbz r9,899(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 899);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// lfs f1,20560(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20560);
	ctx.f1.f64 = double(temp.f32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821ab030
	ctx.lr = 0x821ACDC0;
	sub_821AB030(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821ace04
	if (ctx.cr6.eq) goto loc_821ACE04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4816(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f11,4816(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// stfs f0,4808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4808, temp.u32);
	// stfs f0,4812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
	// stfs f0,4816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
	// b 0x821ace2c
	goto loc_821ACE2C;
loc_821ACE04:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821ace18
	goto loc_821ACE18;
loc_821ACE10:
	// lfs f0,4808(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
loc_821ACE18:
	// fmuls f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,4812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f9,4816(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
loc_821ACE2C:
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

PPC_WEAK_FUNC(sub_821ACD30) {
	__imp__sub_821ACD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ACE44) {
	__imp__sub_821ACE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACE48) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,7932(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821acf34
	if (!ctx.cr6.gt) goto loc_821ACF34;
	// bl 0x821acd30
	ctx.lr = 0x821ACE80;
	sub_821ACD30(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240730
	ctx.lr = 0x821ACE88;
	sub_82240730(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821aceb4
	if (!ctx.cr6.eq) goto loc_821ACEB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4816(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f12,f13,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
loc_821ACEB4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4816(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4816);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821acef0
	if (!ctx.cr6.gt) goto loc_821ACEF0;
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,4812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f9,f8,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f10.f64));
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x821acef0
	if (!ctx.cr6.lt) goto loc_821ACEF0;
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,4816(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4816, temp.u32);
loc_821ACEF0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821acf2c
	if (!ctx.cr6.eq) goto loc_821ACF2C;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4808(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4808);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-14884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14884);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f12,f10,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f8,4812(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4812);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f6,f7,f10,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f6,4(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
loc_821ACF2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4ac8
	ctx.lr = 0x821ACF34;
	sub_822D4AC8(ctx, base);
loc_821ACF34:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f0,4808(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4808, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4812(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4812, temp.u32);
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

PPC_WEAK_FUNC(sub_821ACE48) {
	__imp__sub_821ACE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ACF64) {
	__imp__sub_821ACF64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ACF68) {
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
	// lwz r11,3412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ad000
	if (!ctx.cr6.eq) goto loc_821AD000;
	// lfs f0,3440(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,3436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,3444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3444);
	ctx.f11.f64 = double(temp.f32);
	// lwz r5,3692(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3692);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f1,f9
	ctx.f1.f64 = double(float(sqrt(ctx.f9.f64)));
	// bl 0x821c8fb0
	ctx.lr = 0x821ACFBC;
	sub_821C8FB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ad000
	if (ctx.cr6.eq) goto loc_821AD000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x821ACFD8;
	sub_822AD078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf158
	ctx.lr = 0x821ACFE0;
	sub_821BF158(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821ACFE8;
	sub_822ACB78(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,552(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 552);
	// bl 0x82229da8
	ctx.lr = 0x821AD000;
	sub_82229DA8(ctx, base);
loc_821AD000:
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

PPC_WEAK_FUNC(sub_821ACF68) {
	__imp__sub_821ACF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD014) {
	__imp__sub_821AD014(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD018) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD018) {
	__imp__sub_821AD018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD02C) {
	__imp__sub_821AD02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD030) {
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
	ctx.lr = 0x821AD048;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,3668(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3668);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addi r30,r3,3712
	ctx.r30.s64 = ctx.r3.s64 + 3712;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x821aa628
	ctx.lr = 0x821AD07C;
	sub_821AA628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x821c99e0
	ctx.lr = 0x821AD094;
	sub_821C99E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acf68
	ctx.lr = 0x821AD09C;
	sub_821ACF68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4780(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4648(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4648);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// lfs f29,4640(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	ctx.f28.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x821ad1a8
	if (ctx.cr6.eq) goto loc_821AD1A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fd8
	ctx.lr = 0x821AD0D0;
	sub_821C6FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ad1a8
	if (!ctx.cr6.eq) goto loc_821AD1A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,952(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fneg f11,f0
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,4780(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4780);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f7,f9
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821ad110
	if (!ctx.cr6.gt) goto loc_821AD110;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821AD110:
	// fcmpu cr6,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bge cr6,0x821ad11c
	if (!ctx.cr6.lt) goto loc_821AD11C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821AD11C:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fadds f11,f10,f13
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f10,f8,f12
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821AD13C;
	sub_822D4AC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,24520(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24520);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f8,f0,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f4,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f0,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f2,f13,f0,f4
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f3,132(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x821c9420
	ctx.lr = 0x821AD188;
	sub_821C9420(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ad1a8
	if (ctx.cr6.eq) goto loc_821AD1A8;
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821AD1A8:
	// lfs f0,952(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 952);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x821ad1b8
	if (!ctx.cr6.gt) goto loc_821AD1B8;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_821AD1B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ad1e8
	if (!ctx.cr6.eq) goto loc_821AD1E8;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ad1e8
	if (ctx.cr6.eq) goto loc_821AD1E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ace48
	ctx.lr = 0x821AD1E4;
	sub_821ACE48(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_821AD1E8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f12,3468(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f10,3472(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f9,3476(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x821ab970
	ctx.lr = 0x821AD214;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad244
	if (ctx.cr6.eq) goto loc_821AD244;
	// lwz r11,4828(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4828);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r10,r11,4836
	ctx.r10.s64 = ctx.r11.s64 + 4836;
	// stfs f29,4836(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4836, temp.u32);
	// stfs f28,4840(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4840, temp.u32);
	// bl 0x821ac9b0
	ctx.lr = 0x821AD240;
	sub_821AC9B0(ctx, base);
	// b 0x821ad264
	goto loc_821AD264;
loc_821AD244:
	// addi r3,r31,4836
	ctx.r3.s64 = ctx.r31.s64 + 4836;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821AD254;
	sub_823DE090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f29,4836(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4836, temp.u32);
	// stfs f28,4840(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4840, temp.u32);
	// stw r11,4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4828, ctx.r11.u32);
loc_821AD264:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x821AD270;
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

PPC_WEAK_FUNC(sub_821AD030) {
	__imp__sub_821AD030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD284) {
	__imp__sub_821AD284(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,3404(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3404);
	// subfic r10,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.s64 = 1 - ctx.r11.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r8,31
	ctx.r3.u64 = ctx.r8.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD288) {
	__imp__sub_821AD288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD29C) {
	__imp__sub_821AD29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD2A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x821b7c48
	sub_821B7C48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AD2A0) {
	__imp__sub_821AD2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD2A4) {
	__imp__sub_821AD2A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD2A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2896(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2896);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ad308
	if (ctx.cr6.eq) goto loc_821AD308;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r3,624
	ctx.r11.s64 = ctx.r3.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,268(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad308
	if (ctx.cr6.eq) goto loc_821AD308;
	// lwz r8,5024(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5024);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821ad308
	if (ctx.cr6.eq) goto loc_821AD308;
	// lwz r10,272(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821ad308
	if (!ctx.cr6.eq) goto loc_821AD308;
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// li r9,5128
	ctx.r9.s64 = 5128;
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r3,r8,r9
	ctx.r3.s32 = ctx.r8.s32 / ctx.r9.s32;
	// blr 
	return;
loc_821AD308:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD2A8) {
	__imp__sub_821AD2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD310) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// mulli r10,r3,5128
	ctx.r10.s64 = ctx.r3.s64 * 5128;
	// addi r8,r9,9624
	ctx.r8.s64 = ctx.r9.s64 + 9624;
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD310) {
	__imp__sub_821AD310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,4004
	ctx.r9.s64 = ctx.r11.s64 + 4004;
	// lbzx r8,r3,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r10.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// lbzx r7,r8,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD328) {
	__imp__sub_821AD328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD34C) {
	__imp__sub_821AD34C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,3972
	ctx.r9.s64 = ctx.r11.s64 + 3972;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD350) {
	__imp__sub_821AD350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD378) {
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
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821ad3d0
	if (ctx.cr6.eq) goto loc_821AD3D0;
	// bl 0x821b66b0
	ctx.lr = 0x821AD398;
	sub_821B66B0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821db968
	ctx.lr = 0x821AD3A0;
	sub_821DB968(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ad3e8
	if (!ctx.cr6.eq) goto loc_821AD3E8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dac60
	ctx.lr = 0x821AD3BC;
	sub_821DAC60(ctx, base);
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
loc_821AD3D0:
	// bl 0x821cfb78
	ctx.lr = 0x821AD3D4;
	sub_821CFB78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad3e8
	if (ctx.cr6.eq) goto loc_821AD3E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821daa58
	ctx.lr = 0x821AD3E8;
	sub_821DAA58(ctx, base);
loc_821AD3E8:
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

PPC_WEAK_FUNC(sub_821AD378) {
	__imp__sub_821AD378(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD3FC) {
	__imp__sub_821AD3FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4916(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821ad43c
	if (!ctx.cr6.eq) goto loc_821AD43C;
	// lfs f0,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821ad43c
	if (!ctx.cr6.eq) goto loc_821AD43C;
	// lfs f0,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821AD43C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD400) {
	__imp__sub_821AD400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821ad460
	if (!ctx.cr6.lt) goto loc_821AD460;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
loc_821AD460:
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD448) {
	__imp__sub_821AD448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24464(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24464);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821ad480
	if (!ctx.cr6.lt) goto loc_821AD480;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
loc_821AD480:
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD468) {
	__imp__sub_821AD468(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD488) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f5,f4
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f4.f64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// fmr f3,f2
	ctx.f3.f64 = ctx.f2.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f1,7932(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d8f18
	ctx.lr = 0x821AD4BC;
	sub_822D8F18(ctx, base);
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

PPC_WEAK_FUNC(sub_821AD488) {
	__imp__sub_821AD488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD4D4) {
	__imp__sub_821AD4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 * 44;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r9,840(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 840);
	// lwz r8,840(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 840);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r9,r10,824
	ctx.r9.s64 = ctx.r10.s64 + 824;
	// stw r8,840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 840, ctx.r8.u32);
	// lfs f0,852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,852(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 852, temp.u32);
	// addi r9,r11,824
	ctx.r9.s64 = ctx.r11.s64 + 824;
	// lfs f13,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,856(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 856, temp.u32);
	// lfs f12,860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,860(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 860, temp.u32);
	// lwz r7,864(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 864);
	// stw r7,864(r11)
	PPC_STORE_U32(ctx.r11.u32 + 864, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AD4D8) {
	__imp__sub_821AD4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD544) {
	__imp__sub_821AD544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD548) {
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
	// lis r9,-32021
	ctx.r9.s64 = -2098528256;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,-19060(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19060);
	// lwz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821ad59c
	if (!ctx.cr6.lt) goto loc_821AD59C;
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AD580:
	// lbz r8,5039(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821ad5c4
	if (ctx.cr6.eq) goto loc_821AD5C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,5128
	ctx.r31.s64 = ctx.r31.s64 + 5128;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// blt cr6,0x821ad580
	if (ctx.cr6.lt) goto loc_821AD580;
loc_821AD59C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,25032
	ctx.r4.s64 = ctx.r11.s64 + 25032;
	// bl 0x82280a68
	ctx.lr = 0x821AD5AC;
	sub_82280A68(ctx, base);
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
loc_821AD5C4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// li r5,5128
	ctx.r5.s64 = 5128;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x821AD5DC;
	sub_823DE090(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,5039(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5039, ctx.r11.u8);
	// bl 0x821a9968
	ctx.lr = 0x821AD5EC;
	sub_821A9968(ctx, base);
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

PPC_WEAK_FUNC(sub_821AD548) {
	__imp__sub_821AD548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AD604) {
	__imp__sub_821AD604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821AD610;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad64c
	if (ctx.cr6.eq) goto loc_821AD64C;
	// addi r31,r3,3712
	ctx.r31.s64 = ctx.r3.s64 + 3712;
	// addi r4,r25,232
	ctx.r4.s64 = ctx.r25.s64 + 232;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c6738
	ctx.lr = 0x821AD63C;
	sub_821C6738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821AD644;
	sub_821C6F10(ctx, base);
	// stw r23,4756(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4756, ctx.r23.u32);
	// stw r23,4760(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4760, ctx.r23.u32);
loc_821AD64C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e01b8
	ctx.lr = 0x821AD654;
	sub_821E01B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x821AD65C;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ad66c
	if (ctx.cr6.eq) goto loc_821AD66C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821AD66C;
	sub_821B4E00(ctx, base);
loc_821AD66C:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r28,r11,26552
	ctx.r28.s64 = ctx.r11.s64 + 26552;
	// lhz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad6d8
	if (ctx.cr6.eq) goto loc_821AD6D8;
	// mulli r10,r11,624
	ctx.r10.s64 = ctx.r11.s64 * 624;
	// addi r11,r28,348
	ctx.r11.s64 = ctx.r28.s64 + 348;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,-624
	ctx.r9.s64 = ctx.r11.s64 + -624;
	// lhz r11,-624(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + -624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad6d8
	if (ctx.cr6.eq) goto loc_821AD6D8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r9,r25
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x821ad6d8
	if (!ctx.cr6.eq) goto loc_821AD6D8;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + ctx.r28.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x821c4250
	ctx.lr = 0x821AD6BC;
	sub_821C4250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ad6d8
	if (ctx.cr6.eq) goto loc_821AD6D8;
	// lhz r11,3288(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3288);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// bl 0x8222f680
	ctx.lr = 0x821AD6D8;
	sub_8222F680(ctx, base);
loc_821AD6D8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822407c8
	ctx.lr = 0x821AD6E0;
	sub_822407C8(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r26,2047
	ctx.r26.s64 = 2047;
	// ori r24,r10,33024
	ctx.r24.u64 = ctx.r10.u64 | 33024;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lhz r27,126(r25)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r25.u32 + 126);
loc_821AD6FC:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r10,5039(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5039);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ad774
	if (ctx.cr6.eq) goto loc_821AD774;
	// lhz r10,4614(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4614);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x821ad724
	if (!ctx.cr6.eq) goto loc_821AD724;
	// sth r26,4614(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4614, ctx.r26.u16);
loc_821AD724:
	// lwz r10,3668(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3668);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x821ad734
	if (!ctx.cr6.eq) goto loc_821AD734;
	// stw r26,3668(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3668, ctx.r26.u32);
loc_821AD734:
	// lwz r10,4768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4768);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821ad748
	if (!ctx.cr6.eq) goto loc_821AD748;
	// stw r23,4768(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4768, ctx.r23.u32);
	// stw r23,4772(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4772, ctx.r23.u32);
loc_821AD748:
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// lhz r11,4824(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad774
	if (ctx.cr6.eq) goto loc_821AD774;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x821ad774
	if (!ctx.cr6.eq) goto loc_821AD774;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e2e18
	ctx.lr = 0x821AD774;
	sub_821E2E18(ctx, base);
loc_821AD774:
	// addi r31,r31,5128
	ctx.r31.s64 = ctx.r31.s64 + 5128;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x821ad6fc
	if (ctx.cr6.lt) goto loc_821AD6FC;
	// stw r23,268(r25)
	PPC_STORE_U32(ctx.r25.u32 + 268, ctx.r23.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82240950
	ctx.lr = 0x821AD78C;
	sub_82240950(ctx, base);
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822085e8
	ctx.lr = 0x821AD798;
	sub_822085E8(ctx, base);
	// stb r23,5039(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5039, ctx.r23.u8);
	// lwz r11,76(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AD608) {
	__imp__sub_821AD608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AD7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821AD7B8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x821AD7C0;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r29,r11,9624
	ctx.r29.s64 = ctx.r11.s64 + 9624;
	// lwz r11,2892(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2892);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ad7e8
	if (ctx.cr6.eq) goto loc_821AD7E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,25144
	ctx.r4.s64 = ctx.r11.s64 + 25144;
	// bl 0x822830e8
	ctx.lr = 0x821AD7E8;
	sub_822830E8(ctx, base);
loc_821AD7E8:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// lwz r3,272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x8223fae0
	ctx.lr = 0x821AD7FC;
	sub_8223FAE0(ctx, base);
	// addi r3,r30,624
	ctx.r3.s64 = ctx.r30.s64 + 624;
	// bl 0x821d9a68
	ctx.lr = 0x821AD804;
	sub_821D9A68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad828
	if (ctx.cr6.eq) goto loc_821AD828;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,896(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 896);
	// addi r27,r30,624
	ctx.r27.s64 = ctx.r30.s64 + 624;
	// bl 0x8223fae0
	ctx.lr = 0x821AD824;
	sub_8223FAE0(ctx, base);
	// b 0x821ad82c
	goto loc_821AD82C;
loc_821AD828:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_821AD82C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,-1
	ctx.r3.s64 = -1;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f26,f30
	ctx.f26.f64 = ctx.f30.f64;
	// bl 0x821a9b38
	ctx.lr = 0x821AD844;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ad95c
	if (ctx.cr6.eq) goto loc_821AD95C;
loc_821AD850:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ad93c
	if (!ctx.cr6.eq) goto loc_821AD93C;
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// lwz r9,2912(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2912);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821ad93c
	if (ctx.cr6.eq) goto loc_821AD93C;
	// lfs f0,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f31,f6,f6,f4
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// beq cr6,0x821ad8ec
	if (ctx.cr6.eq) goto loc_821AD8EC;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// fmadds f0,f6,f6,f4
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821ad8ec
	if (!ctx.cr6.lt) goto loc_821AD8EC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_821AD8EC:
	// fcmpu cr6,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f31.f64);
	// bge cr6,0x821ad93c
	if (!ctx.cr6.lt) goto loc_821AD93C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lhz r6,126(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x821d9930
	ctx.lr = 0x821AD904;
	sub_821D9930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ad93c
	if (!ctx.cr6.eq) goto loc_821AD93C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821ad934
	if (ctx.cr6.eq) goto loc_821AD934;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r5,126(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// lhz r6,126(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// bl 0x821d9930
	ctx.lr = 0x821AD92C;
	sub_821D9930(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ad93c
	if (!ctx.cr6.eq) goto loc_821AD93C;
loc_821AD934:
	// fmr f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f31.f64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_821AD93C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821AD948;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ad850
	if (!ctx.cr6.eq) goto loc_821AD850;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821adc70
	if (!ctx.cr6.eq) goto loc_821ADC70;
loc_821AD95C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x821e6c48
	ctx.lr = 0x821AD970;
	sub_821E6C48(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821ad98c
	if (ctx.cr6.eq) goto loc_821AD98C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e6c48
	ctx.lr = 0x821AD98C;
	sub_821E6C48(ctx, base);
loc_821AD98C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821AD994;
	sub_821A9B38(ctx, base);
	// lfs f29,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f29.f64 = double(temp.f32);
	// lwz r31,2912(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2912);
	// lfs f28,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f27.f64 = double(temp.f32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f2,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// beq cr6,0x821adaa0
	if (ctx.cr6.eq) goto loc_821ADAA0;
loc_821AD9D0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ada88
	if (!ctx.cr6.eq) goto loc_821ADA88;
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821ada88
	if (ctx.cr6.eq) goto loc_821ADA88;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f10,f7,f13,f11
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f8,f12,f10
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// bge cr6,0x821ada88
	if (!ctx.cr6.lt) goto loc_821ADA88;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// fmadds f12,f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// beq cr6,0x821ada78
	if (ctx.cr6.eq) goto loc_821ADA78;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f2
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fmuls f10,f3,f0
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f9,f4,f13,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f10,f5,f12,f9
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, ctx.f30.f64);
	// bge cr6,0x821ada88
	if (!ctx.cr6.lt) goto loc_821ADA88;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f12,f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x821ada78
	if (!ctx.cr6.lt) goto loc_821ADA78;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_821ADA78:
	// fcmpu cr6,f26,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f11.f64);
	// bge cr6,0x821ada88
	if (!ctx.cr6.lt) goto loc_821ADA88;
	// fmr f26,f11
	ctx.f26.f64 = ctx.f11.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821ADA88:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821a9b98
	ctx.lr = 0x821ADA90;
	sub_821A9B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ad9d0
	if (!ctx.cr6.eq) goto loc_821AD9D0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821adc70
	if (!ctx.cr6.eq) goto loc_821ADC70;
loc_821ADAA0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821ADAA8;
	sub_821A9B38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821adba8
	if (ctx.cr6.eq) goto loc_821ADBA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f9.f64 = double(temp.f32);
loc_821ADAB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821adb90
	if (!ctx.cr6.eq) goto loc_821ADB90;
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821adb90
	if (ctx.cr6.eq) goto loc_821ADB90;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f10,f12,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fcmpu cr6,f26,f10
	ctx.cr6.compare(ctx.f26.f64, ctx.f10.f64);
	// bge cr6,0x821adb90
	if (!ctx.cr6.lt) goto loc_821ADB90;
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f0,f7,f0,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f13,f8,f13,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x821adb90
	if (!ctx.cr6.lt) goto loc_821ADB90;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821adb80
	if (ctx.cr6.eq) goto loc_821ADB80;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f11,f13,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f12,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f26,f11
	ctx.cr6.compare(ctx.f26.f64, ctx.f11.f64);
	// bge cr6,0x821adb90
	if (!ctx.cr6.lt) goto loc_821ADB90;
	// fmuls f12,f3,f12
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f30,f11,f9
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmadds f0,f4,f0,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f13,f5,f13,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bge cr6,0x821adb90
	if (!ctx.cr6.lt) goto loc_821ADB90;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x821adb80
	if (!ctx.cr6.lt) goto loc_821ADB80;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_821ADB80:
	// fcmpu cr6,f26,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f10.f64);
	// blt cr6,0x821adb90
	if (ctx.cr6.lt) goto loc_821ADB90;
	// fmr f26,f10
	ctx.f26.f64 = ctx.f10.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821ADB90:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821a9b98
	ctx.lr = 0x821ADB98;
	sub_821A9B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821adab8
	if (!ctx.cr6.eq) goto loc_821ADAB8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821adc70
	if (!ctx.cr6.eq) goto loc_821ADC70;
loc_821ADBA8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821ADBB0;
	sub_821A9B38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821adc60
	if (ctx.cr6.eq) goto loc_821ADC60;
loc_821ADBB8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,308(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821adc48
	if (!ctx.cr6.eq) goto loc_821ADC48;
	// lhz r10,126(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x821adc48
	if (ctx.cr6.eq) goto loc_821ADC48;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f29.f64));
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f0,f9,f9,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// beq cr6,0x821adc38
	if (ctx.cr6.eq) goto loc_821ADC38;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fmuls f7,f12,f12
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f6,f10,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f13,f8,f8,f6
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821adc38
	if (!ctx.cr6.lt) goto loc_821ADC38;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821ADC38:
	// fcmpu cr6,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bgt cr6,0x821adc48
	if (ctx.cr6.gt) goto loc_821ADC48;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821ADC48:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821a9b98
	ctx.lr = 0x821ADC50;
	sub_821A9B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821adbb8
	if (!ctx.cr6.eq) goto loc_821ADBB8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821adc70
	if (!ctx.cr6.eq) goto loc_821ADC70;
loc_821ADC60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,25064
	ctx.r4.s64 = ctx.r11.s64 + 25064;
	// bl 0x822830e8
	ctx.lr = 0x821ADC70;
	sub_822830E8(ctx, base);
loc_821ADC70:
	// lbz r11,4608(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 4608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821adca0
	if (ctx.cr6.eq) goto loc_821ADCA0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r28,3712
	ctx.r31.s64 = ctx.r28.s64 + 3712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c6738
	ctx.lr = 0x821ADC90;
	sub_821C6738(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821ADC98;
	sub_821C6F10(ctx, base);
	// stw r26,4756(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4756, ctx.r26.u32);
	// stw r26,4760(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4760, ctx.r26.u32);
loc_821ADCA0:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 46);
	// bl 0x82229da8
	ctx.lr = 0x821ADCB8;
	sub_82229DA8(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8222f680
	ctx.lr = 0x821ADCC0;
	sub_8222F680(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x821ADCCC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AD7B0) {
	__imp__sub_821AD7B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADCD0) {
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
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821ADCEC;
	sub_822A13A0(ctx, base);
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822daed8
	ctx.lr = 0x821ADCF8;
	sub_822DAED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82229d78
	ctx.lr = 0x821ADD0C;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821ADD10;
	sub_822AC730(ctx, base);
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

PPC_WEAK_FUNC(sub_821ADCD0) {
	__imp__sub_821ADCD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ADD24) {
	__imp__sub_821ADD24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADD28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821ADD30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r29,-32053
	ctx.r29.s64 = -2100625408;
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,26552
	ctx.r30.s64 = ctx.r11.s64 + 26552;
	// lwz r11,-508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -508);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,-508(r29)
	PPC_STORE_U32(ctx.r29.u32 + -508, ctx.r11.u32);
	// ble cr6,0x821ade00
	if (!ctx.cr6.gt) goto loc_821ADE00;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// addi r26,r11,11296
	ctx.r26.s64 = ctx.r11.s64 + 11296;
loc_821ADD6C:
	// lbzx r11,r28,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821addec
	if (ctx.cr6.eq) goto loc_821ADDEC;
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x821add8c
	if (ctx.cr6.eq) goto loc_821ADD8C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821addec
	if (!ctx.cr6.eq) goto loc_821ADDEC;
loc_821ADD8C:
	// lhz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821ADD94;
	sub_822A13A0(ctx, base);
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822daed8
	ctx.lr = 0x821ADDA0;
	sub_822DAED8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821addc4
	if (!ctx.cr6.eq) goto loc_821ADDC4;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229d78
	ctx.lr = 0x821ADDC0;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821ADDC4;
	sub_822AC730(ctx, base);
loc_821ADDC4:
	// lwz r11,-508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -508);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821addec
	if (ctx.cr6.eq) goto loc_821ADDEC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822b1880
	ctx.lr = 0x821ADDE0;
	sub_822B1880(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821ADDE4;
	sub_822AC730(ctx, base);
	// lwz r11,-508(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -508);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_821ADDEC:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,624
	ctx.r30.s64 = ctx.r30.s64 + 624;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821add6c
	if (ctx.cr6.lt) goto loc_821ADD6C;
loc_821ADE00:
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821ADE08;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ade64
	if (ctx.cr6.eq) goto loc_821ADE64;
loc_821ADE14:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r3,292(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821ADE20;
	sub_822A13A0(ctx, base);
	// addi r4,r3,6
	ctx.r4.s64 = ctx.r3.s64 + 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822daed8
	ctx.lr = 0x821ADE2C;
	sub_822DAED8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82229d78
	ctx.lr = 0x821ADE40;
	sub_82229D78(ctx, base);
	// bl 0x822ac730
	ctx.lr = 0x821ADE44;
	sub_822AC730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9a90
	ctx.lr = 0x821ADE4C;
	sub_821A9A90(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821ADE58;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821ade14
	if (!ctx.cr6.eq) goto loc_821ADE14;
loc_821ADE64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ADD28) {
	__imp__sub_821ADD28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821ADE6C) {
	__imp__sub_821ADE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADE70) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// li r10,112
	ctx.r10.s64 = 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r8,r11,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// divw r7,r8,r10
	ctx.r7.s32 = ctx.r8.s32 / ctx.r10.s32;
	// mulli r11,r7,44
	ctx.r11.s64 = ctx.r7.s64 * 44;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,824
	ctx.r3.s64 = ctx.r11.s64 + 824;
	// bl 0x823de090
	ctx.lr = 0x821ADEBC;
	sub_823DE090(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db5a0
	ctx.lr = 0x821ADEC8;
	sub_821DB5A0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821adef4
	if (ctx.cr6.eq) goto loc_821ADEF4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,-624(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -624);
	// b 0x821adef8
	goto loc_821ADEF8;
loc_821ADEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821ADEF8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821adf10
	if (!ctx.cr6.eq) goto loc_821ADF10;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8223fcc0
	ctx.lr = 0x821ADF10;
	sub_8223FCC0(ctx, base);
loc_821ADF10:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 128);
	// lhz r8,126(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 126);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821adf30
	if (!ctx.cr6.eq) goto loc_821ADF30;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// sth r10,128(r11)
	PPC_STORE_U16(ctx.r11.u32 + 128, ctx.r10.u16);
loc_821ADF30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r9,126(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// lwz r8,92(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821adf50
	if (!ctx.cr6.eq) goto loc_821ADF50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5e18
	ctx.lr = 0x821ADF50;
	sub_821C5E18(ctx, base);
loc_821ADF50:
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

PPC_WEAK_FUNC(sub_821ADE70) {
	__imp__sub_821ADE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821ADF70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821adfd0
	if (ctx.cr6.eq) goto loc_821ADFD0;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821ADF94;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821adfc0
	if (ctx.cr6.eq) goto loc_821ADFC0;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821ab0a8
	ctx.lr = 0x821ADFAC;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821adfc0
	if (ctx.cr6.eq) goto loc_821ADFC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821ADFC0;
	sub_821ABA40(ctx, base);
loc_821ADFC0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821adfd0
	if (!ctx.cr6.gt) goto loc_821ADFD0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,720(r31)
	PPC_STORE_U8(ctx.r31.u32 + 720, ctx.r11.u8);
loc_821ADFD0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821ADF68) {
	__imp__sub_821ADF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821ADFD8) {
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
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae00
	ctx.lr = 0x821AE018;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,92(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AE03C;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// addi r4,r30,20
	ctx.r4.s64 = ctx.r30.s64 + 20;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821ab0a8
	ctx.lr = 0x821AE054;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae068
	if (ctx.cr6.eq) goto loc_821AE068;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AE068;
	sub_821ABA40(ctx, base);
loc_821AE068:
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

PPC_WEAK_FUNC(sub_821ADFD8) {
	__imp__sub_821ADFD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE080) {
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
	// lbz r11,721(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 721);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae0b8
	if (ctx.cr6.eq) goto loc_821AE0B8;
loc_821AE0A0:
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
loc_821AE0B8:
	// lbz r11,722(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 722);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae0f4
	if (ctx.cr6.eq) goto loc_821AE0F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae0ec
	if (ctx.cr6.eq) goto loc_821AE0EC;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821AE0E0;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae0a0
	if (!ctx.cr6.eq) goto loc_821AE0A0;
loc_821AE0EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,722(r31)
	PPC_STORE_U8(ctx.r31.u32 + 722, ctx.r11.u8);
loc_821AE0F4:
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

PPC_WEAK_FUNC(sub_821AE080) {
	__imp__sub_821AE080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AE10C) {
	__imp__sub_821AE10C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE110) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,721(r3)
	PPC_STORE_U8(ctx.r3.u32 + 721, ctx.r11.u8);
	// stb r11,722(r3)
	PPC_STORE_U8(ctx.r3.u32 + 722, ctx.r11.u8);
	// stw r11,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r11.u32);
	// stw r11,664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 664, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821AE110) {
	__imp__sub_821AE110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821AE130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ae26c
	if (ctx.cr6.eq) goto loc_821AE26C;
	// lbz r11,5005(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5005);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae26c
	if (!ctx.cr6.eq) goto loc_821AE26C;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ae26c
	if (!ctx.cr6.eq) goto loc_821AE26C;
	// bl 0x821ae080
	ctx.lr = 0x821AE160;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae26c
	if (!ctx.cr6.eq) goto loc_821AE26C;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AE174;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae188
	if (ctx.cr6.eq) goto loc_821AE188;
	// addi r29,r31,4616
	ctx.r29.s64 = ctx.r31.s64 + 4616;
	// b 0x821ae190
	goto loc_821AE190;
loc_821AE188:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r11,232
	ctx.r29.s64 = ctx.r11.s64 + 232;
loc_821AE190:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ae1dc
	if (ctx.cr6.eq) goto loc_821AE1DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aae00
	ctx.lr = 0x821AE1AC;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae26c
	if (!ctx.cr6.eq) goto loc_821AE26C;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,4752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4752);
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ae26c
	if (ctx.cr6.lt) goto loc_821AE26C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821AE1DC;
	sub_82240108(ctx, base);
loc_821AE1DC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821AE1E4;
	sub_8223FB90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ae26c
	if (ctx.cr6.eq) goto loc_821AE26C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r12,4
	ctx.r12.s64 = 262144;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// ori r12,r12,7932
	ctx.r12.u64 = ctx.r12.u64 | 7932;
	// and r8,r9,r12
	ctx.r8.u64 = ctx.r9.u64 & ctx.r12.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821ae26c
	if (ctx.cr6.eq) goto loc_821AE26C;
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ae26c
	if (ctx.cr6.eq) goto loc_821AE26C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821aad88
	ctx.lr = 0x821AE22C;
	sub_821AAD88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae26c
	if (ctx.cr6.eq) goto loc_821AE26C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821AE244;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ae260
	if (!ctx.cr6.eq) goto loc_821AE260;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,104(r11)
	PPC_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821AE260:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82240108
	ctx.lr = 0x821AE26C;
	sub_82240108(ctx, base);
loc_821AE26C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AE128) {
	__imp__sub_821AE128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AE274) {
	__imp__sub_821AE274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE278) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4776);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ae420
	if (!ctx.cr6.eq) goto loc_821AE420;
	// lwz r11,3528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3528);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821ae420
	if (ctx.cr6.eq) goto loc_821AE420;
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821ae420
	if (ctx.cr6.eq) goto loc_821AE420;
	// lwz r8,272(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 272);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r4,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821ae420
	if (!ctx.cr6.eq) goto loc_821AE420;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f9,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r9,-27184
	ctx.r8.s64 = ctx.r9.s64 + -27184;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f8,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,24516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24516);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f8,f0,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,-27184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27184);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f7,f0,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f3,f6,f0,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f0,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f13,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f2,f11,f5
	ctx.f2.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f1,f10,f4
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f0,f9,f3
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8233cbf8
	ctx.lr = 0x821AE3A0;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ae420
	if (ctx.cr6.eq) goto loc_821AE420;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac230
	ctx.lr = 0x821AE3B0;
	sub_821AC230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ae3dc
	if (ctx.cr6.eq) goto loc_821AE3DC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r9,r11,44588
	ctx.r9.u64 = ctx.r11.u64 | 44588;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ae420
	if (!ctx.cr6.eq) goto loc_821AE420;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,272(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// bl 0x822401c8
	ctx.lr = 0x821AE3DC;
	sub_822401C8(ctx, base);
loc_821AE3DC:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AE3E4;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae414
	if (ctx.cr6.eq) goto loc_821AE414;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4616
	ctx.r4.s64 = ctx.r31.s64 + 4616;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821ab0a8
	ctx.lr = 0x821AE400;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae414
	if (ctx.cr6.eq) goto loc_821AE414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AE414;
	sub_821ABA40(ctx, base);
loc_821AE414:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4824
	ctx.r3.s64 = ctx.r31.s64 + 4824;
	// bl 0x821e2e18
	ctx.lr = 0x821AE420;
	sub_821E2E18(ctx, base);
loc_821AE420:
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

PPC_WEAK_FUNC(sub_821AE278) {
	__imp__sub_821AE278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821AE440;
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,26552
	ctx.r31.s64 = ctx.r11.s64 + 26552;
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// addi r22,r3,4824
	ctx.r22.s64 = ctx.r3.s64 + 4824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae4f8
	if (ctx.cr6.eq) goto loc_821AE4F8;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r10,232
	ctx.r3.s64 = ctx.r10.s64 + 232;
	// addi r10,r11,-624
	ctx.r10.s64 = ctx.r11.s64 + -624;
	// addi r4,r10,232
	ctx.r4.s64 = ctx.r10.s64 + 232;
	// lwz r30,-356(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -356);
	// bl 0x822d4918
	ctx.lr = 0x821AE488;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,25176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821ae4d4
	if (ctx.cr6.lt) goto loc_821AE4D4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ae4ec
	if (ctx.cr6.eq) goto loc_821AE4EC;
	// lhz r11,4824(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4824);
	// addi r3,r30,4824
	ctx.r3.s64 = ctx.r30.s64 + 4824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae4ec
	if (ctx.cr6.eq) goto loc_821AE4EC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821ae4ec
	if (!ctx.cr6.eq) goto loc_821AE4EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821e2e18
	ctx.lr = 0x821AE4D0;
	sub_821E2E18(ctx, base);
	// b 0x821ae4ec
	goto loc_821AE4EC;
loc_821AE4D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ae4f8
	if (ctx.cr6.eq) goto loc_821AE4F8;
	// lwz r11,4772(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4772);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821ae4f8
	if (!ctx.cr6.eq) goto loc_821AE4F8;
loc_821AE4EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821AE4F8;
	sub_821E2E18(ctx, base);
loc_821AE4F8:
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae634
	if (ctx.cr6.eq) goto loc_821AE634;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r27,-32190
	ctx.r27.s64 = -2109603840;
	// addi r23,r11,-624
	ctx.r23.s64 = ctx.r11.s64 + -624;
	// addi r28,r10,9240
	ctx.r28.s64 = ctx.r10.s64 + 9240;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r28,16
	ctx.r29.s64 = ctx.r28.s64 + 16;
	// lis r25,-32166
	ctx.r25.s64 = -2108030976;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
loc_821AE538:
	// lbz r8,29088(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bne cr6,0x821ae564
	if (!ctx.cr6.eq) goto loc_821AE564;
	// subfc r11,r10,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r10.s64;
	// eqv r9,r10,r30
	ctx.r9.u64 = ~(ctx.r10.u64 ^ ctx.r30.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// b 0x821ae570
	goto loc_821AE570;
loc_821AE564:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821AE570:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae590
	if (ctx.cr6.eq) goto loc_821AE590;
	// cmplw cr6,r23,r4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821ae590
	if (ctx.cr6.eq) goto loc_821AE590;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821ae278
	ctx.lr = 0x821AE58C;
	sub_821AE278(ctx, base);
	// lwz r10,-32312(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -32312);
loc_821AE590:
	// addi r29,r29,9780
	ctx.r29.s64 = ctx.r29.s64 + 9780;
	// addi r11,r28,19576
	ctx.r11.s64 = ctx.r28.s64 + 19576;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821ae538
	if (ctx.cr6.lt) goto loc_821AE538;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f0,236(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f0,24820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24820);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f9,f30,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// blt cr6,0x821ae634
	if (ctx.cr6.lt) goto loc_821AE634;
	// lwz r11,4768(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae634
	if (!ctx.cr6.eq) goto loc_821AE634;
	// lwz r11,3412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ae634
	if (!ctx.cr6.eq) goto loc_821AE634;
	// addi r3,r24,3712
	ctx.r3.s64 = ctx.r24.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AE5FC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae634
	if (ctx.cr6.eq) goto loc_821AE634;
	// lfs f0,4640(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4640);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,4644(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4644);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f12,f31,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821ae634
	if (!ctx.cr6.gt) goto loc_821AE634;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821AE634;
	sub_821E2E18(ctx, base);
loc_821AE634:
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

PPC_WEAK_FUNC(sub_821AE438) {
	__imp__sub_821AE438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AE644) {
	__imp__sub_821AE644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE648) {
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
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae66c
	if (ctx.cr6.eq) goto loc_821AE66C;
	// bl 0x821da588
	ctx.lr = 0x821AE66C;
	sub_821DA588(ctx, base);
loc_821AE66C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae438
	ctx.lr = 0x821AE674;
	sub_821AE438(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,7616
	ctx.r8.s64 = ctx.r10.s64 + 7616;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// mulli r11,r5,28
	ctx.r11.s64 = ctx.r5.s64 * 28;
	// lwzx r10,r4,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AE6B0;
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

PPC_WEAK_FUNC(sub_821AE648) {
	__imp__sub_821AE648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AE6C4) {
	__imp__sub_821AE6C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE6C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821AE6D0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,268(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r5,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r5.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x822d4ed0
	ctx.lr = 0x821AE708;
	sub_822D4ED0(ctx, base);
	// lfs f0,248(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821AE72C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,360
	ctx.r8.s64 = 360;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f8.u32);
	// lfs f7,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,364(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,368(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f5,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,372(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// bl 0x821f25e0
	ctx.lr = 0x821AE76C;
	sub_821F25E0(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r3,r31,376
	ctx.r3.s64 = ctx.r31.s64 + 376;
	// bl 0x822a24e0
	ctx.lr = 0x821AE778;
	sub_822A24E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ae798
	if (ctx.cr6.eq) goto loc_821AE798;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82332b28
	ctx.lr = 0x821AE788;
	sub_82332B28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,378
	ctx.r3.s64 = ctx.r31.s64 + 378;
	// bl 0x822a2560
	ctx.lr = 0x821AE794;
	sub_822A2560(ctx, base);
	// stw r26,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r26.u32);
loc_821AE798:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r4,r10,7616
	ctx.r4.s64 = ctx.r10.s64 + 7616;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwzx r10,r3,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821AE7EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,272(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// stw r30,48(r9)
	PPC_STORE_U32(ctx.r9.u32 + 48, ctx.r30.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r8,312(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// oris r7,r8,1
	ctx.r7.u64 = ctx.r8.u64 | 65536;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r7,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r7.u32);
	// beq cr6,0x821ae814
	if (ctx.cr6.eq) goto loc_821AE814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bd558
	ctx.lr = 0x821AE814;
	sub_821BD558(ctx, base);
loc_821AE814:
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae854
	if (ctx.cr6.eq) goto loc_821AE854;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821ae854
	if (ctx.cr6.eq) goto loc_821AE854;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae00
	ctx.lr = 0x821AE840;
	sub_821AAE00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae854
	if (ctx.cr6.eq) goto loc_821AE854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4368
	ctx.lr = 0x821AE854;
	sub_821B4368(ctx, base);
loc_821AE854:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ae898
	if (!ctx.cr6.eq) goto loc_821AE898;
	// lbz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 348);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae898
	if (ctx.cr6.eq) goto loc_821AE898;
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x821ae898
	if (!ctx.cr6.lt) goto loc_821AE898;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821dac60
	ctx.lr = 0x821AE888;
	sub_821DAC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ae898
	if (ctx.cr6.eq) goto loc_821AE898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4e00
	ctx.lr = 0x821AE898;
	sub_821B4E00(ctx, base);
loc_821AE898:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AE6C8) {
	__imp__sub_821AE6C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AE8A4) {
	__imp__sub_821AE8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE8A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821AE8B0;
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
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lfs f30,24464(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24464);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f31,24820(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24820);
	ctx.f31.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r25,r7,33024
	ctx.r25.u64 = ctx.r7.u64 | 33024;
	// addi r27,r11,26552
	ctx.r27.s64 = ctx.r11.s64 + 26552;
	// addi r26,r10,9624
	ctx.r26.s64 = ctx.r10.s64 + 9624;
loc_821AE8F0:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// add r31,r28,r11
	ctx.r31.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lbz r11,5039(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5039);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae9c8
	if (ctx.cr6.eq) goto loc_821AE9C8;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x821ae9c8
	if (ctx.cr6.eq) goto loc_821AE9C8;
	// lhz r11,4824(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ae930
	if (ctx.cr6.eq) goto loc_821AE930;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r9,r11,r27
	ctx.r9.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821ae9c8
	if (ctx.cr6.eq) goto loc_821AE9C8;
loc_821AE930:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r29,3424
	ctx.r3.s64 = ctx.r29.s64 + 3424;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821AE940;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x821ae9c8
	if (!ctx.cr6.lt) goto loc_821AE9C8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r10,232
	ctx.r4.s64 = ctx.r10.s64 + 232;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821AE95C;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x821ae9c8
	if (ctx.cr6.lt) goto loc_821AE9C8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// bge cr6,0x821ae98c
	if (!ctx.cr6.lt) goto loc_821AE98C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AE98C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae9c8
	if (!ctx.cr6.eq) goto loc_821AE9C8;
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// addi r30,r31,4824
	ctx.r30.s64 = ctx.r31.s64 + 4824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ae9c4
	if (!ctx.cr6.eq) goto loc_821AE9C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac230
	ctx.lr = 0x821AE9B0;
	sub_821AC230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ae9c4
	if (!ctx.cr6.eq) goto loc_821AE9C4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821e2e18
	ctx.lr = 0x821AE9C4;
	sub_821E2E18(ctx, base);
loc_821AE9C4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821AE9C8:
	// addi r28,r28,5128
	ctx.r28.s64 = ctx.r28.s64 + 5128;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x821ae8f0
	if (ctx.cr6.lt) goto loc_821AE8F0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

PPC_WEAK_FUNC(sub_821AE8A8) {
	__imp__sub_821AE8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AE9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821AE9F0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,3424
	ctx.r30.s64 = ctx.r3.s64 + 3424;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r4,r4,232
	ctx.r4.s64 = ctx.r4.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822d4918
	ctx.lr = 0x821AEA1C;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// ble cr6,0x821aea80
	if (!ctx.cr6.gt) goto loc_821AEA80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821AEA34;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// ble cr6,0x821aea80
	if (!ctx.cr6.gt) goto loc_821AEA80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae8a8
	ctx.lr = 0x821AEA44;
	sub_821AE8A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821aea80
	if (ctx.cr6.eq) goto loc_821AEA80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,312(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// or r7,r29,r8
	ctx.r7.u64 = ctx.r29.u64 | ctx.r8.u64;
	// stw r7,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821AEA80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AE9E8) {
	__imp__sub_821AE9E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEA94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AEA94) {
	__imp__sub_821AEA94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEA98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821AEAA0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de010
	ctx.lr = 0x821AEAA8;
	__savefpr_22(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f26,3436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3436);
	ctx.f26.f64 = double(temp.f32);
	// lhz r10,4824(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// lfs f25,3440(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3440);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,3444(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3444);
	ctx.f24.f64 = double(temp.f32);
	// lhz r26,3448(r3)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 3448);
	// lwz r25,3456(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3456);
	// lfs f23,3460(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3460);
	ctx.f23.f64 = double(temp.f32);
	// lwz r24,3452(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3452);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// stfs f0,3424(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3424, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,3428(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3428, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// stfs f12,3432(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3432, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f22,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f22.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,3436
	ctx.r29.s64 = ctx.r3.s64 + 3436;
	// addi r30,r3,3424
	ctx.r30.s64 = ctx.r3.s64 + 3424;
	// addi r27,r11,-624
	ctx.r27.s64 = ctx.r11.s64 + -624;
	// lwz r7,-360(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821aeba8
	if (!ctx.cr6.eq) goto loc_821AEBA8;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,232(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,236(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821AEB44;
	sub_822D4AC8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f1,f22
	ctx.cr6.compare(ctx.f1.f64, ctx.f22.f64);
	// bne cr6,0x821aeb68
	if (!ctx.cr6.eq) goto loc_821AEB68;
	// bl 0x8222fe68
	ctx.lr = 0x821AEB54;
	sub_8222FE68(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x8222fe68
	ctx.lr = 0x821AEB5C;
	sub_8222FE68(ctx, base);
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ac8
	ctx.lr = 0x821AEB68;
	sub_822D4AC8(ctx, base);
loc_821AEB68:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f27,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AEB7C;
	sub_821ABAA8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,25184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821aeba0
	if (!ctx.cr6.lt) goto loc_821AEBA0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821AEBA0:
	// fsqrts f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(sqrt(ctx.f0.f64)));
	// b 0x821aebd0
	goto loc_821AEBD0;
loc_821AEBA8:
	// addi r4,r27,232
	ctx.r4.s64 = ctx.r27.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x821AEBB4;
	sub_822D4918(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa830
	ctx.lr = 0x821AEBC8;
	sub_821AA830(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
loc_821AEBD0:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
	// fmuls f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// stfs f11,3468(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f10,3472(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x821d1450
	ctx.lr = 0x821AEBFC;
	sub_821D1450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821aec28
	if (!ctx.cr6.eq) goto loc_821AEC28;
loc_821AEC04:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de05c
	ctx.lr = 0x821AEC24;
	__restfpr_22(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821AEC28:
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae9e8
	ctx.lr = 0x821AEC40;
	sub_821AE9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821aedb4
	if (!ctx.cr6.eq) goto loc_821AEDB4;
	// lhz r11,3448(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 3448);
	// cmplwi cr6,r11,2047
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2047, ctx.xer);
	// beq cr6,0x821aedb4
	if (ctx.cr6.eq) goto loc_821AEDB4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f29,24496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24496);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,25180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25180);
	ctx.f28.f64 = double(temp.f32);
loc_821AEC68:
	// lwz r11,3668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821aed34
	if (ctx.cr6.eq) goto loc_821AED34;
	// addi r3,r31,3680
	ctx.r3.s64 = ctx.r31.s64 + 3680;
	// bl 0x822d4ac8
	ctx.lr = 0x821AEC7C;
	sub_822D4AC8(ctx, base);
	// lfs f0,3680(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3680);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,3684(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3684);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// bge cr6,0x821aecac
	if (!ctx.cr6.lt) goto loc_821AECAC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AECAC:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa6a0
	ctx.lr = 0x821AECBC;
	sub_821AA6A0(ctx, base);
	// stfs f26,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f24,8(r29)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stfs f25,4(r29)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f23,3460(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3460, temp.u32);
	// sth r26,3448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3448, ctx.r26.u16);
	// stw r25,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r25.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r24,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r24.u32);
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// bl 0x821d1450
	ctx.lr = 0x821AED00;
	sub_821D1450(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821aec04
	if (ctx.cr6.eq) goto loc_821AEC04;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ae9e8
	ctx.lr = 0x821AED20;
	sub_821AE9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821aedb4
	if (!ctx.cr6.eq) goto loc_821AEDB4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// blt cr6,0x821aec68
	if (ctx.cr6.lt) goto loc_821AEC68;
loc_821AED34:
	// lhz r11,126(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 126);
	// stw r11,3668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3668, ctx.r11.u32);
	// lwz r11,268(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aed60
	if (ctx.cr6.eq) goto loc_821AED60;
	// lhz r10,4824(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4824);
	// addi r3,r11,4824
	ctx.r3.s64 = ctx.r11.s64 + 4824;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821aed60
	if (!ctx.cr6.eq) goto loc_821AED60;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821e2e18
	ctx.lr = 0x821AED60;
	sub_821E2E18(ctx, base);
loc_821AED60:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,312(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	// rlwinm r9,r10,0,29,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE7;
	// stw r9,312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 312, ctx.r9.u32);
	// stfs f26,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f25,4(r29)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f24,8(r29)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// sth r26,3448(r31)
	PPC_STORE_U16(ctx.r31.u32 + 3448, ctx.r26.u16);
	// stfs f23,3460(r31)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3460, temp.u32);
	// stw r25,3456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3456, ctx.r25.u32);
	// stw r24,3452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3452, ctx.r24.u32);
	// stfs f22,8(r29)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f22,0(r29)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f22,4(r29)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f13,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_821AEDB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de05c
	ctx.lr = 0x821AEDC4;
	__restfpr_22(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AEA98) {
	__imp__sub_821AEA98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEDC8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,4948
	ctx.r30.s64 = ctx.r3.s64 + 4948;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae88
	ctx.lr = 0x821AEDF4;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aee08
	if (!ctx.cr6.eq) goto loc_821AEE08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821aee30
	goto loc_821AEE30;
loc_821AEE08:
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6fc0
	ctx.lr = 0x821AEE10;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821aee24
	if (!ctx.cr6.eq) goto loc_821AEE24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821aee30
	goto loc_821AEE30;
loc_821AEE24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821aae88
	ctx.lr = 0x821AEE30;
	sub_821AAE88(ctx, base);
loc_821AEE30:
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

PPC_WEAK_FUNC(sub_821AEDC8) {
	__imp__sub_821AEDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEE48) {
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
	// bl 0x821ae080
	ctx.lr = 0x821AEE60;
	sub_821AE080(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aee84
	if (ctx.cr6.eq) goto loc_821AEE84;
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
loc_821AEE84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aae00
	ctx.lr = 0x821AEE94;
	sub_821AAE00(ctx, base);
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

PPC_WEAK_FUNC(sub_821AEE48) {
	__imp__sub_821AEE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEEA8) {
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
	// lis r11,-32018
	ctx.r11.s64 = -2098331648;
	// lwz r10,3372(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,6688
	ctx.r11.s64 = ctx.r11.s64 + 6688;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821aeee4
	if (ctx.cr6.eq) goto loc_821AEEE4;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x821aeee8
	if (!ctx.cr6.eq) goto loc_821AEEE8;
loc_821AEEE4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821AEEE8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aef00
	if (ctx.cr6.eq) goto loc_821AEF00;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// b 0x821aef64
	goto loc_821AEF64;
loc_821AEF00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab150
	ctx.lr = 0x821AEF08;
	sub_821AB150(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aef20
	if (ctx.cr6.eq) goto loc_821AEF20;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// ori r10,r11,512
	ctx.r10.u64 = ctx.r11.u64 | 512;
	// b 0x821aef64
	goto loc_821AEF64;
loc_821AEF20:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab970
	ctx.lr = 0x821AEF28;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aef40
	if (ctx.cr6.eq) goto loc_821AEF40;
	// lbz r11,5002(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5002);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821aef68
	if (ctx.cr6.eq) goto loc_821AEF68;
loc_821AEF40:
	// lwz r11,3692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3692);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821aef68
	if (!ctx.cr6.eq) goto loc_821AEF68;
	// addi r3,r31,3712
	ctx.r3.s64 = ctx.r31.s64 + 3712;
	// bl 0x821c6708
	ctx.lr = 0x821AEF54;
	sub_821C6708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821aef68
	if (ctx.cr6.eq) goto loc_821AEF68;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
loc_821AEF64:
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
loc_821AEF68:
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

PPC_WEAK_FUNC(sub_821AEEA8) {
	__imp__sub_821AEEA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AEF7C) {
	__imp__sub_821AEF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AEF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AEF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x822ea328
	ctx.lr = 0x821AEF98;
	sub_822EA328(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821af11c
	if (ctx.cr6.eq) goto loc_821AF11C;
	// lwz r11,3156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821af11c
	if (ctx.cr6.eq) goto loc_821AF11C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r29,92(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821af030
	if (ctx.cr6.eq) goto loc_821AF030;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821AEFD0;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af034
	if (ctx.cr6.eq) goto loc_821AF034;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac370
	ctx.lr = 0x821AEFEC;
	sub_821AC370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821af034
	if (ctx.cr6.eq) goto loc_821AF034;
	// lbz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 720);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af014
	if (ctx.cr6.eq) goto loc_821AF014;
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821af018
	if (ctx.cr6.gt) goto loc_821AF018;
loc_821AF014:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF018:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af038
	if (!ctx.cr6.eq) goto loc_821AF038;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF030:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821AF034:
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_821AF038:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af064
	if (ctx.cr6.eq) goto loc_821AF064;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af0a8
	if (!ctx.cr6.eq) goto loc_821AF0A8;
loc_821AF064:
	// lwz r4,4936(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4936);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821af0a8
	if (ctx.cr6.eq) goto loc_821AF0A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ac370
	ctx.lr = 0x821AF078;
	sub_821AC370(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821af11c
	if (ctx.cr6.eq) goto loc_821AF11C;
	// lwz r11,4936(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4936);
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x821aae88
	ctx.lr = 0x821AF090;
	sub_821AAE88(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af11c
	if (ctx.cr6.eq) goto loc_821AF11C;
	// lwz r3,4936(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4936);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF0A8:
	// lwz r11,716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 716);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821af100
	if (!ctx.cr6.gt) goto loc_821AF100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab448
	ctx.lr = 0x821AF0BC;
	sub_821AB448(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af11c
	if (!ctx.cr6.eq) goto loc_821AF11C;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af0e0
	if (ctx.cr6.eq) goto loc_821AF0E0;
	// bl 0x821b4688
	ctx.lr = 0x821AF0DC;
	sub_821B4688(ctx, base);
	// b 0x821af0f8
	goto loc_821AF0F8;
loc_821AF0E0:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,11204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11204);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// bl 0x821bb3d0
	ctx.lr = 0x821AF0F8;
	sub_821BB3D0(ctx, base);
loc_821AF0F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821af120
	if (!ctx.cr6.eq) goto loc_821AF120;
loc_821AF100:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af11c
	if (ctx.cr6.eq) goto loc_821AF11C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF11C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AF120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AEF80) {
	__imp__sub_821AEF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AF130;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f31,4988(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4988);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r3,3712
	ctx.r31.s64 = ctx.r3.s64 + 3712;
	// bl 0x821ab970
	ctx.lr = 0x821AF150;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af168
	if (!ctx.cr6.eq) goto loc_821AF168;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24460);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_821AF168:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f31,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x822d4918
	ctx.lr = 0x821AF17C;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x821af298
	if (ctx.cr6.lt) goto loc_821AF298;
	// lfs f8,952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 952);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r31,928
	ctx.r6.s64 = ctx.r31.s64 + 928;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// bl 0x821ab560
	ctx.lr = 0x821AF1A0;
	sub_821AB560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af298
	if (!ctx.cr6.eq) goto loc_821AF298;
	// lbz r11,900(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 900);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,960(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 960);
	ctx.f1.f64 = double(temp.f32);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r6,r4,12
	ctx.r6.s64 = ctx.r4.s64 + 12;
	// bl 0x821ab560
	ctx.lr = 0x821AF1CC;
	sub_821AB560(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821af298
	if (!ctx.cr6.eq) goto loc_821AF298;
	// fadds f8,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// lfs f7,4992(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4992);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bge cr6,0x821af288
	if (!ctx.cr6.lt) goto loc_821AF288;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
loc_821AF1F4:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,-28
	ctx.r10.s64 = ctx.r10.s64 + -28;
	// blt 0x821af288
	if (ctx.cr0.lt) goto loc_821AF288;
	// lfs f13,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f11,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f10,f11,f13,f5
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f5.f64));
	// fcmpu cr6,f10,f9
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// blt cr6,0x821af23c
	if (ctx.cr6.lt) goto loc_821AF23C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821af270
	goto loc_821AF270;
loc_821AF23C:
	// fcmpu cr6,f10,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bgt cr6,0x821af250
	if (ctx.cr6.gt) goto loc_821AF250;
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// b 0x821af25c
	goto loc_821AF25C;
loc_821AF250:
	// fmuls f0,f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmsubs f13,f12,f13,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmuls f0,f13,f13
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
loc_821AF25C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x821af26c
	if (ctx.cr6.lt) goto loc_821AF26C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821AF26C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_821AF270:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af298
	if (!ctx.cr6.eq) goto loc_821AF298;
	// fadds f8,f9,f8
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x821af1f4
	if (ctx.cr6.lt) goto loc_821AF1F4;
loc_821AF288:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF298:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF128) {
	__imp__sub_821AF128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AF2B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// lwz r28,4936(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4936);
	// bl 0x821c6fc0
	ctx.lr = 0x821AF2C4;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r29,r31,4916
	ctx.r29.s64 = ctx.r31.s64 + 4916;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// beq cr6,0x821af320
	if (ctx.cr6.eq) goto loc_821AF320;
	// addi r30,r31,4616
	ctx.r30.s64 = ctx.r31.s64 + 4616;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821aad18
	ctx.lr = 0x821AF2E4;
	sub_821AAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af314
	if (!ctx.cr6.eq) goto loc_821AF314;
	// lwz r11,668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821af34c
	if (ctx.cr6.eq) goto loc_821AF34C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,672
	ctx.r3.s64 = ctx.r31.s64 + 672;
	// bl 0x821aad18
	ctx.lr = 0x821AF308;
	sub_821AAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af34c
	if (ctx.cr6.eq) goto loc_821AF34C;
loc_821AF314:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF320:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821aad18
	ctx.lr = 0x821AF32C;
	sub_821AAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af34c
	if (ctx.cr6.eq) goto loc_821AF34C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,5003(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5003, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF34C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821af3b0
	if (ctx.cr6.eq) goto loc_821AF3B0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822386a0
	ctx.lr = 0x821AF360;
	sub_822386A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821af3b0
	if (!ctx.cr6.eq) goto loc_821AF3B0;
	// lhz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af3a4
	if (ctx.cr6.eq) goto loc_821AF3A4;
	// lis r9,-32024
	ctx.r9.s64 = -2098724864;
	// mulli r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 * 112;
	// addi r11,r9,5560
	ctx.r11.s64 = ctx.r9.s64 + 5560;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,-112(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + -112);
	// bl 0x82229b60
	ctx.lr = 0x821AF38C;
	sub_82229B60(ctx, base);
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r7,-25976
	ctx.r6.s64 = ctx.r7.s64 + -25976;
	// lhz r4,578(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 578);
	// bl 0x82229da8
	ctx.lr = 0x821AF3A4;
	sub_82229DA8(ctx, base);
loc_821AF3A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821AF3B0:
	// lhz r11,5016(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5016);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af3d4
	if (ctx.cr6.eq) goto loc_821AF3D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-624
	ctx.r4.s64 = ctx.r11.s64 + -624;
	// b 0x821af3d8
	goto loc_821AF3D8;
loc_821AF3D4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821AF3D8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f1,5008(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5008);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab680
	ctx.lr = 0x821AF3E8;
	sub_821AB680(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af314
	if (ctx.cr6.eq) goto loc_821AF314;
	// bl 0x82229b60
	ctx.lr = 0x821AF3F4;
	sub_82229B60(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,580(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 580);
	// bl 0x82229da8
	ctx.lr = 0x821AF40C;
	sub_82229DA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF2A8) {
	__imp__sub_821AF2A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821AF420;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,266(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 266);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af5a4
	if (ctx.cr6.eq) goto loc_821AF5A4;
	// lwz r11,668(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821af5a4
	if (!ctx.cr6.eq) goto loc_821AF5A4;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4640(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4640);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r3,4640
	ctx.r30.s64 = ctx.r3.s64 + 4640;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4644(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4644);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f31,25188(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25188);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bge cr6,0x821af5a4
	if (!ctx.cr6.lt) goto loc_821AF5A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,4668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4668);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,24476(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24476);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bge cr6,0x821af538
	if (!ctx.cr6.lt) goto loc_821AF538;
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x821af538
	if (!ctx.cr6.gt) goto loc_821AF538;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f9,3684(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3684);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,3656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3656);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lfs f5,3688(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3688);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,3660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3660);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f11.f64));
	// fmuls f13,f6,f7
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmadds f12,f2,f3,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x821af538
	if (!ctx.cr6.lt) goto loc_821AF538;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,3712
	ctx.r3.s64 = ctx.r3.s64 + 3712;
	// bl 0x821c7f30
	ctx.lr = 0x821AF518;
	sub_821C7F30(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bgt cr6,0x821af5a4
	if (ctx.cr6.gt) goto loc_821AF5A4;
loc_821AF538:
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821af554
	if (!ctx.cr6.eq) goto loc_821AF554;
	// bl 0x822ad770
	ctx.lr = 0x821AF554;
	sub_822AD770(ctx, base);
loc_821AF554:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x821AF55C;
	sub_822AD078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821bf158
	ctx.lr = 0x821AF564;
	sub_821BF158(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// bl 0x822acb78
	ctx.lr = 0x821AF56C;
	sub_822ACB78(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,552(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 552);
	// bl 0x82229da8
	ctx.lr = 0x821AF584;
	sub_82229DA8(ctx, base);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821af5a4
	if (!ctx.cr6.eq) goto loc_821AF5A4;
	// bl 0x822b2a90
	ctx.lr = 0x821AF598;
	sub_822B2A90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821fda38
	ctx.lr = 0x821AF5A0;
	sub_821FDA38(ctx, base);
	// bl 0x822b2ae8
	ctx.lr = 0x821AF5A4;
	sub_822B2AE8(ctx, base);
loc_821AF5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF418) {
	__imp__sub_821AF418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF5B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821AF5B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821af5fc
	if (ctx.cr6.eq) goto loc_821AF5FC;
	// bl 0x821aba40
	ctx.lr = 0x821AF5F0;
	sub_821ABA40(ctx, base);
loc_821AF5F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821AF5FC:
	// addi r25,r31,3712
	ctx.r25.s64 = ctx.r31.s64 + 3712;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AF608;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af65c
	if (ctx.cr6.eq) goto loc_821AF65C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c7180
	ctx.lr = 0x821AF61C;
	sub_821C7180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af640
	if (!ctx.cr6.eq) goto loc_821AF640;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821ab0a8
	ctx.lr = 0x821AF634;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af5f0
	if (!ctx.cr6.eq) goto loc_821AF5F0;
loc_821AF640:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,4640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x821aba40
	ctx.lr = 0x821AF658;
	sub_821ABA40(ctx, base);
	// b 0x821af688
	goto loc_821AF688;
loc_821AF65C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// bl 0x821ab0a8
	ctx.lr = 0x821AF66C;
	sub_821AB0A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af5f0
	if (!ctx.cr6.eq) goto loc_821AF5F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821AF688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aeea8
	ctx.lr = 0x821AF690;
	sub_821AEEA8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821af6c8
	if (ctx.cr6.eq) goto loc_821AF6C8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821af6c8
	if (!ctx.cr6.eq) goto loc_821AF6C8;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821af6c8
	if (!ctx.cr6.eq) goto loc_821AF6C8;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821af6d0
	if (ctx.cr6.eq) goto loc_821AF6D0;
loc_821AF6C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a96b8
	ctx.lr = 0x821AF6D0;
	sub_821A96B8(ctx, base);
loc_821AF6D0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x821af6e0
	if (ctx.cr6.eq) goto loc_821AF6E0;
	// stw r26,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r26.u32);
	// b 0x821af6ec
	goto loc_821AF6EC;
loc_821AF6E0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db778
	ctx.lr = 0x821AF6EC;
	sub_821DB778(ctx, base);
loc_821AF6EC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c6a48
	ctx.lr = 0x821AF6F8;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,4722(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4722);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// beq cr6,0x821af730
	if (ctx.cr6.eq) goto loc_821AF730;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af730
	if (!ctx.cr6.eq) goto loc_821AF730;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// b 0x821af734
	goto loc_821AF734;
loc_821AF730:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
loc_821AF734:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821AF73C;
	sub_8223FCB0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fc50
	ctx.lr = 0x821AF748;
	sub_8223FC50(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af7ec
	if (ctx.cr6.eq) goto loc_821AF7EC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821af774
	if (ctx.cr6.eq) goto loc_821AF774;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821af774
	if (!ctx.cr6.eq) goto loc_821AF774;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// b 0x821af78c
	goto loc_821AF78C;
loc_821AF774:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82238eb8
	ctx.lr = 0x821AF780;
	sub_82238EB8(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af7ec
	if (ctx.cr6.eq) goto loc_821AF7EC;
loc_821AF78C:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821af7a8
	if (ctx.cr6.eq) goto loc_821AF7A8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821cd2a8
	ctx.lr = 0x821AF7A4;
	sub_821CD2A8(ctx, base);
	// b 0x821af7ac
	goto loc_821AF7AC;
loc_821AF7A8:
	// bl 0x821c8948
	ctx.lr = 0x821AF7AC;
	sub_821C8948(ctx, base);
loc_821AF7AC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AF7B4;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af7ec
	if (ctx.cr6.eq) goto loc_821AF7EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab970
	ctx.lr = 0x821AF7C8;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af7e0
	if (ctx.cr6.eq) goto loc_821AF7E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af418
	ctx.lr = 0x821AF7E0;
	sub_821AF418(ctx, base);
loc_821AF7E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_821AF7EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF5B0) {
	__imp__sub_821AF5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF7F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821AF800;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r3,3712
	ctx.r30.s64 = ctx.r3.s64 + 3712;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AF824;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af8e0
	if (ctx.cr6.eq) goto loc_821AF8E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c7040
	ctx.lr = 0x821AF838;
	sub_821C7040(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AF844;
	sub_821ABA40(ctx, base);
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821af85c
	if (ctx.cr6.eq) goto loc_821AF85C;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
loc_821AF85C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821AF864;
	sub_8223FCB0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fb90
	ctx.lr = 0x821AF86C;
	sub_8223FB90(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821af8e0
	if (ctx.cr6.eq) goto loc_821AF8E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c6a48
	ctx.lr = 0x821AF884;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r8,4722(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4722);
	// addi r10,r31,4616
	ctx.r10.s64 = ctx.r31.s64 + 4616;
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x821af8c0
	if (ctx.cr6.eq) goto loc_821AF8C0;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af8c0
	if (!ctx.cr6.eq) goto loc_821AF8C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x821af8c4
	goto loc_821AF8C4;
loc_821AF8C0:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
loc_821AF8C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c8948
	ctx.lr = 0x821AF8CC;
	sub_821C8948(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821af8e0
	if (ctx.cr6.eq) goto loc_821AF8E0;
	// lwz r11,4680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// ori r10,r11,128
	ctx.r10.u64 = ctx.r11.u64 | 128;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
loc_821AF8E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF7F8) {
	__imp__sub_821AF7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AF8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821AF8F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8223fa40
	ctx.lr = 0x821AF918;
	sub_8223FA40(ctx, base);
	// addi r27,r31,3712
	ctx.r27.s64 = ctx.r31.s64 + 3712;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AF924;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821af964
	if (ctx.cr6.eq) goto loc_821AF964;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c7180
	ctx.lr = 0x821AF938;
	sub_821C7180(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821af95c
	if (!ctx.cr6.eq) goto loc_821AF95C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,4616
	ctx.r3.s64 = ctx.r31.s64 + 4616;
	// bl 0x821aad18
	ctx.lr = 0x821AF950;
	sub_821AAD18(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afa40
	if (!ctx.cr6.eq) goto loc_821AFA40;
loc_821AF95C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aba40
	ctx.lr = 0x821AF964;
	sub_821ABA40(ctx, base);
loc_821AF964:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fcb0
	ctx.lr = 0x821AF96C;
	sub_8223FCB0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821af984
	if (ctx.cr6.eq) goto loc_821AF984;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db778
	ctx.lr = 0x821AF980;
	sub_821DB778(ctx, base);
	// b 0x821af988
	goto loc_821AF988;
loc_821AF984:
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
loc_821AF988:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8223fc50
	ctx.lr = 0x821AF994;
	sub_8223FC50(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afa4c
	if (ctx.cr6.eq) goto loc_821AFA4C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8223fc50
	ctx.lr = 0x821AF9AC;
	sub_8223FC50(ctx, base);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afa4c
	if (ctx.cr6.eq) goto loc_821AFA4C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c6a48
	ctx.lr = 0x821AF9C4;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r10,1
	ctx.r10.s64 = 1;
	// lbz r8,4722(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4722);
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// beq cr6,0x821afa00
	if (ctx.cr6.eq) goto loc_821AFA00;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afa04
	if (ctx.cr6.eq) goto loc_821AFA04;
loc_821AFA00:
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
loc_821AFA04:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821afa20
	if (ctx.cr6.eq) goto loc_821AFA20;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x821cd2a8
	ctx.lr = 0x821AFA1C;
	sub_821CD2A8(ctx, base);
	// b 0x821afa24
	goto loc_821AFA24;
loc_821AFA20:
	// bl 0x821c8948
	ctx.lr = 0x821AFA24;
	sub_821C8948(ctx, base);
loc_821AFA24:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFA2C;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afa4c
	if (ctx.cr6.eq) goto loc_821AFA4C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822400f8
	ctx.lr = 0x821AFA40;
	sub_822400F8(ctx, base);
loc_821AFA40:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821AFA4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AF8E8) {
	__imp__sub_821AF8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821AFA60;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,4608(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4608);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afab4
	if (ctx.cr6.eq) goto loc_821AFAB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,3712
	ctx.r30.s64 = ctx.r3.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c6738
	ctx.lr = 0x821AFAA4;
	sub_821C6738(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821AFAAC;
	sub_821C6F10(ctx, base);
	// stw r29,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r29.u32);
	// stw r29,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r29.u32);
loc_821AFAB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821c6a48
	ctx.lr = 0x821AFAC0;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r9,4722(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4722);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,232
	ctx.r11.s64 = ctx.r11.s64 + 232;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x821afaf4
	if (ctx.cr6.eq) goto loc_821AFAF4;
	// lbz r11,3153(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3153);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afaf8
	if (ctx.cr6.eq) goto loc_821AFAF8;
loc_821AFAF4:
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_821AFAF8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x821afb38
	if (!ctx.cr6.eq) goto loc_821AFB38;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821db778
	ctx.lr = 0x821AFB0C;
	sub_821DB778(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821afb38
	if (ctx.cr6.eq) goto loc_821AFB38;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cd6d0
	ctx.lr = 0x821AFB2C;
	sub_821CD6D0(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821AFB38:
	// addi r4,r31,4916
	ctx.r4.s64 = ctx.r31.s64 + 4916;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821cd630
	ctx.lr = 0x821AFB48;
	sub_821CD630(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AFA58) {
	__imp__sub_821AFA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AFB54) {
	__imp__sub_821AFB54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFB58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821AFB60;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r29,r3,3712
	ctx.r29.s64 = ctx.r3.s64 + 3712;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFB90;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afbac
	if (ctx.cr6.eq) goto loc_821AFBAC;
	// lfs f0,4640(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4644(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4644);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_821AFBAC:
	// lbz r11,4608(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afbd8
	if (ctx.cr6.eq) goto loc_821AFBD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x821c6738
	ctx.lr = 0x821AFBC8;
	sub_821C6738(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c6f10
	ctx.lr = 0x821AFBD0;
	sub_821C6F10(ctx, base);
	// stw r30,4756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4756, ctx.r30.u32);
	// stw r30,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r30.u32);
loc_821AFBD8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821c6a48
	ctx.lr = 0x821AFBE4;
	sub_821C6A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r9,r11,232
	ctx.r9.s64 = ctx.r11.s64 + 232;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// beq cr6,0x821afc2c
	if (ctx.cr6.eq) goto loc_821AFC2C;
	// lwz r11,48(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821afc2c
	if (ctx.cr6.eq) goto loc_821AFC2C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821cd4f0
	ctx.lr = 0x821AFC28;
	sub_821CD4F0(ctx, base);
	// b 0x821afc3c
	goto loc_821AFC3C;
loc_821AFC2C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821cd3c0
	ctx.lr = 0x821AFC3C;
	sub_821CD3C0(ctx, base);
loc_821AFC3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab970
	ctx.lr = 0x821AFC44;
	sub_821AB970(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afc70
	if (ctx.cr6.eq) goto loc_821AFC70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFC58;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afc70
	if (ctx.cr6.eq) goto loc_821AFC70;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821af418
	ctx.lr = 0x821AFC70;
	sub_821AF418(ctx, base);
loc_821AFC70:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821AFB58) {
	__imp__sub_821AFB58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821AFC7C) {
	__imp__sub_821AFC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFC80) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821a9b38
	ctx.lr = 0x821AFC9C;
	sub_821A9B38(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821afce8
	if (ctx.cr6.eq) goto loc_821AFCE8;
loc_821AFCA8:
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFCB4;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afcd0
	if (ctx.cr6.eq) goto loc_821AFCD0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821c8500
	ctx.lr = 0x821AFCD0;
	sub_821C8500(ctx, base);
loc_821AFCD0:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a9b98
	ctx.lr = 0x821AFCDC;
	sub_821A9B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821afca8
	if (!ctx.cr6.eq) goto loc_821AFCA8;
loc_821AFCE8:
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

PPC_WEAK_FUNC(sub_821AFC80) {
	__imp__sub_821AFC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821AFD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821AFD08;
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
	// lwz r11,3412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821afd54
	if (ctx.cr6.eq) goto loc_821AFD54;
	// lwz r11,4712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821afd54
	if (ctx.cr6.eq) goto loc_821AFD54;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// addi r9,r10,9624
	ctx.r9.s64 = ctx.r10.s64 + 9624;
	// lwz r10,52(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// subf. r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bgt 0x821afd54
	if (ctx.cr0.gt) goto loc_821AFD54;
	// bl 0x821aba40
	ctx.lr = 0x821AFD4C;
	sub_821ABA40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4712, ctx.r11.u32);
loc_821AFD54:
	// addi r30,r31,3712
	ctx.r30.s64 = ctx.r31.s64 + 3712;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFD60;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afd78
	if (ctx.cr6.eq) goto loc_821AFD78;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,266(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 266);
	// bl 0x821c80d0
	ctx.lr = 0x821AFD78;
	sub_821C80D0(ctx, base);
loc_821AFD78:
	// lwz r11,3412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3412);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bgt cr6,0x821afef8
	if (ctx.cr6.gt) goto loc_821AFEF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x821afecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821AFECC;
	// bdzf 4*cr6+eq,0x821aff70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821AFF70;
	// bdzf 4*cr6+eq,0x821affa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821AFFA4;
	// bdzf 4*cr6+eq,0x821affe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821AFFE0;
	// bdzf 4*cr6+eq,0x821b0008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821B0008;
	// bdzf 4*cr6+eq,0x821b0030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821B0030;
	// bdzf 4*cr6+eq,0x821afef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_821AFEF8;
	// bne cr6,0x821b006c
	if (!ctx.cr6.eq) goto loc_821B006C;
	// lbz r11,3404(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3404);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afe54
	if (ctx.cr6.eq) goto loc_821AFE54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFDCC;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afe54
	if (ctx.cr6.eq) goto loc_821AFE54;
	// lhz r11,4824(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4824);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821afe54
	if (!ctx.cr6.eq) goto loc_821AFE54;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AFDF4;
	sub_821ABAA8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f0,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fsqrts f1,f10
	ctx.f1.f64 = double(float(sqrt(ctx.f10.f64)));
	// bl 0x821ad030
	ctx.lr = 0x821AFE20;
	sub_821AD030(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abd20
	ctx.lr = 0x821AFE28;
	sub_821ABD20(ctx, base);
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// lwz r11,-6004(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6004);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// beq cr6,0x821afefc
	if (ctx.cr6.eq) goto loc_821AFEFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c80f0
	ctx.lr = 0x821AFE50;
	sub_821C80F0(ctx, base);
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821AFE54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c6fc0
	ctx.lr = 0x821AFE5C;
	sub_821C6FC0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821afe8c
	if (ctx.cr6.eq) goto loc_821AFE8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,3668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3668);
	// bl 0x821aa628
	ctx.lr = 0x821AFE74;
	sub_821AA628(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x821c99e0
	ctx.lr = 0x821AFE8C;
	sub_821C99E0(ctx, base);
loc_821AFE8C:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r10.u32);
	// stfs f31,3468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f31,3472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// lwz r11,-6004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6004);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821afefc
	if (!ctx.cr6.eq) goto loc_821AFEFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r29,232
	ctx.r4.s64 = ctx.r29.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c80f0
	ctx.lr = 0x821AFEC8;
	sub_821C80F0(ctx, base);
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821AFECC:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AFEDC;
	sub_821ABAA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f13,3472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
loc_821AFEF8:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_821AFEFC:
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lhz r10,126(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lwz r11,13368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13368);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821aff30
	if (!ctx.cr6.eq) goto loc_821AFF30;
	// stfd f30,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f30.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// addi r4,r11,25192
	ctx.r4.s64 = ctx.r11.s64 + 25192;
	// bl 0x82280900
	ctx.lr = 0x821AFF30;
	sub_82280900(ctx, base);
loc_821AFF30:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// beq cr6,0x821aff48
	if (ctx.cr6.eq) goto loc_821AFF48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821ce3d0
	ctx.lr = 0x821AFF48;
	sub_821CE3D0(ctx, base);
loc_821AFF48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cfa88
	ctx.lr = 0x821AFF50;
	sub_821CFA88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ce638
	ctx.lr = 0x821AFF58;
	sub_821CE638(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ce4e8
	ctx.lr = 0x821AFF60;
	sub_821CE4E8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821AFF70:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AFF80;
	sub_821ABAA8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stfs f31,3468(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f31,3472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x822d6f10
	ctx.lr = 0x821AFF9C;
	sub_822D6F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821AFFA4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AFFB4;
	sub_821ABAA8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f13,3472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x822d6f10
	ctx.lr = 0x821AFFD8;
	sub_822D6F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821AFFE0:
	// addi r5,r31,3468
	ctx.r5.s64 = ctx.r31.s64 + 3468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821AFFF0;
	sub_821ABAA8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// bl 0x822d6f10
	ctx.lr = 0x821B0000;
	sub_822D6F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821B0008:
	// addi r5,r31,3468
	ctx.r5.s64 = ctx.r31.s64 + 3468;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821B0018;
	sub_821ABAA8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// bl 0x822d6f10
	ctx.lr = 0x821B0028;
	sub_822D6F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821B0030:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821abaa8
	ctx.lr = 0x821B0040;
	sub_821ABAA8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f13,3472(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f31,3476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
	// bl 0x822d6f10
	ctx.lr = 0x821B0064;
	sub_822D6F10(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x821afefc
	goto loc_821AFEFC;
loc_821B006C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r11.u32);
	// lwz r10,468(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0088
	if (!ctx.cr6.eq) goto loc_821B0088;
	// bl 0x821e5e70
	ctx.lr = 0x821B0088;
	sub_821E5E70(ctx, base);
loc_821B0088:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// lfs f2,248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821B009C;
	sub_821CE2B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,3436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3436, temp.u32);
	// stfs f0,3440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3440, temp.u32);
	// stfs f0,3444(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3444, temp.u32);
	// stfs f0,3468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3468, temp.u32);
	// stfs f0,3472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3472, temp.u32);
	// stfs f0,3476(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3476, temp.u32);
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

PPC_WEAK_FUNC(sub_821AFD00) {
	__imp__sub_821AFD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B00CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B00CC) {
	__imp__sub_821B00CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B00D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b0150
	if (!ctx.cr6.eq) goto loc_821B0150;
	// lwz r11,4768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4768);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821B00EC:
	// lwz r11,4768(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b0150
	if (ctx.cr6.eq) goto loc_821B0150;
	// lwz r10,4768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4768);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b00ec
	if (!ctx.cr6.eq) goto loc_821B00EC;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4752(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4752);
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// lwz r6,328(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 328);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x821b0128
	if (ctx.cr6.lt) goto loc_821B0128;
	// addi r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 + 50;
loc_821B0128:
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b0150
	if (!ctx.cr6.lt) goto loc_821B0150;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4772(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4772);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821b0150
	if (ctx.cr6.eq) goto loc_821B0150;
	// stw r11,4768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4768, ctx.r11.u32);
	// lwz r11,4772(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4772);
	// stw r11,4772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4772, ctx.r11.u32);
	// blr 
	return;
loc_821B0150:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4768, ctx.r11.u32);
	// stw r11,4772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4772, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B00D0) {
	__imp__sub_821B00D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r10,5000(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5000);
	// lfs f12,4916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4916);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4920(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4920);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,4916
	ctx.r11.s64 = ctx.r3.s64 + 4916;
	// lfs f10,4924(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4924);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b021c
	if (ctx.cr6.eq) goto loc_821B021C;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821b01ac
	if (ctx.cr6.eq) goto loc_821B01AC;
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// mulli r9,r10,624
	ctx.r9.s64 = ctx.r10.s64 * 624;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,-624(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + -624);
	// b 0x821b01b0
	goto loc_821B01B0;
loc_821B01AC:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_821B01B0:
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// li r8,112
	ctx.r8.s64 = 112;
	// addi r6,r10,9624
	ctx.r6.s64 = ctx.r10.s64 + 9624;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lfs f13,7540(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r9,r10,r8
	ctx.r9.s32 = ctx.r10.s32 / ctx.r8.s32;
	// mulli r10,r9,44
	ctx.r10.s64 = ctx.r9.s64 * 44;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r9,r10,852
	ctx.r9.s64 = ctx.r10.s64 + 852;
	// lfs f0,852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 852);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f9,856(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 856);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f8,860(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 860);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r4,4944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4944, ctx.r4.u32);
	// lfs f0,4992(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4992);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,4936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4936, ctx.r7.u32);
	// stw r7,4940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4940, ctx.r7.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821b0214
	if (!ctx.cr6.lt) goto loc_821B0214;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821B0214:
	// stfs f0,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4928, temp.u32);
	// b 0x821b0380
	goto loc_821B0380;
loc_821B021C:
	// lbz r9,724(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 724);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// beq cr6,0x821b02a8
	if (ctx.cr6.eq) goto loc_821B02A8;
	// lwz r10,728(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 728);
	// lwz r9,52(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b02a8
	if (ctx.cr6.lt) goto loc_821B02A8;
	// lwz r7,732(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 732);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821b02a8
	if (ctx.cr6.gt) goto loc_821B02A8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r7,4936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4936, ctx.r7.u32);
	// lis r8,-32021
	ctx.r8.s64 = -2098528256;
	// stw r9,4944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4944, ctx.r9.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r7,4940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4940, ctx.r7.u32);
	// lfs f0,232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,-18980(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -18980);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 240);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f13,7540(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821b0214
	if (!ctx.cr6.lt) goto loc_821B0214;
	// stfs f13,4928(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4928, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x821b0380
	goto loc_821B0380;
loc_821B02A8:
	// lhz r6,4976(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4976);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821b031c
	if (ctx.cr6.eq) goto loc_821B031C;
	// lwz r10,4980(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4980);
	// lwz r9,4984(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4984);
	// stw r7,4936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4936, ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4940, ctx.r7.u32);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821b0310
	if (!ctx.cr6.gt) goto loc_821B0310;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mulli r10,r6,624
	ctx.r10.s64 = ctx.r6.s64 * 624;
	// addi r9,r9,26552
	ctx.r9.s64 = ctx.r9.s64 + 26552;
	// addi r9,r9,232
	ctx.r9.s64 = ctx.r9.s64 + 232;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-624
	ctx.r9.s64 = ctx.r10.s64 + -624;
	// lfs f0,-624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,-620(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -620);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,-616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -616);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// stw r10,4980(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4980, ctx.r10.u32);
loc_821B0310:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,4944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4944, ctx.r10.u32);
	// b 0x821b0348
	goto loc_821B0348;
loc_821B031C:
	// lfs f0,4948(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4948);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4952(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4952);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f9,4956(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4956);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r7,4944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4944, ctx.r7.u32);
	// lwz r10,4972(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4972);
	// lwz r9,4968(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4968);
	// stw r9,4936(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4936, ctx.r9.u32);
	// stw r10,4940(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4940, ctx.r10.u32);
loc_821B0348:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4960(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4960);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821b0360
	if (!ctx.cr6.lt) goto loc_821B0360;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_821B0360:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,4928(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4928, temp.u32);
	// lfs f0,4964(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4964);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24464(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24464);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821b037c
	if (!ctx.cr6.lt) goto loc_821B037C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821B037C:
	// stfs f0,4932(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4932, temp.u32);
loc_821B0380:
	// lwz r10,668(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 668);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bne cr6,0x821b03b0
	if (!ctx.cr6.eq) goto loc_821B03B0;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x821b03b0
	if (!ctx.cr6.eq) goto loc_821B03B0;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821B03B0:
	// stw r7,668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 668, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821B0160) {
	__imp__sub_821B0160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B03B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821B03C0;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r29,604(r3)
	PPC_STORE_U16(ctx.r3.u32 + 604, ctx.r29.u16);
	// lwz r11,11220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11220);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821b0408
	if (!ctx.cr6.eq) goto loc_821B0408;
loc_821B03EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f680
	ctx.lr = 0x821B03F4;
	sub_8222F680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821B0408:
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b0430
	if (ctx.cr6.eq) goto loc_821B0430;
	// bl 0x821da0b0
	ctx.lr = 0x821B0420;
	sub_821DA0B0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821B0430:
	// addi r24,r30,232
	ctx.r24.s64 = ctx.r30.s64 + 232;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821a9598
	ctx.lr = 0x821B043C;
	sub_821A9598(ctx, base);
	// bl 0x821ad548
	ctx.lr = 0x821B0440;
	sub_821AD548(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,9624
	ctx.r27.s64 = ctx.r11.s64 + 9624;
	// bne cr6,0x821b04a4
	if (!ctx.cr6.eq) goto loc_821B04A4;
	// lwz r11,308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b03ec
	if (ctx.cr6.eq) goto loc_821B03EC;
	// lis r31,-32021
	ctx.r31.s64 = -2098528256;
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// lwz r11,-19060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19060);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821b0494
	if (ctx.cr6.lt) goto loc_821B0494;
loc_821B047C:
	// bl 0x821ad7b0
	ctx.lr = 0x821B0480;
	sub_821AD7B0(ctx, base);
	// lwz r11,-19060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -19060);
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821b047c
	if (!ctx.cr6.lt) goto loc_821B047C;
loc_821B0494:
	// bl 0x821ad548
	ctx.lr = 0x821B0498;
	sub_821AD548(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821b03ec
	if (ctx.cr6.eq) goto loc_821B03EC;
loc_821B04A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82240a90
	ctx.lr = 0x821B04AC;
	sub_82240A90(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821b04e4
	if (!ctx.cr6.eq) goto loc_821B04E4;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,76(r27)
	PPC_STORE_U32(ctx.r27.u32 + 76, ctx.r11.u32);
	// stb r29,5039(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5039, ctx.r29.u8);
	// bl 0x8222f680
	ctx.lr = 0x821B04D0;
	sub_8222F680(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821B04E4:
	// stw r29,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r29.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lbz r7,174(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 174);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r6,312(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	// li r8,100
	ctx.r8.s64 = 100;
	// ori r3,r7,2
	ctx.r3.u64 = ctx.r7.u64 | 2;
	// stw r31,268(r30)
	PPC_STORE_U32(ctx.r30.u32 + 268, ctx.r31.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r25,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r25.u32);
	// addi r9,r5,24524
	ctx.r9.s64 = ctx.r5.s64 + 24524;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// ori r7,r6,10240
	ctx.r7.u64 = ctx.r6.u64 | 10240;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// lwz r10,52(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// stw r10,352(r30)
	PPC_STORE_U32(ctx.r30.u32 + 352, ctx.r10.u32);
	// addi r10,r30,176
	ctx.r10.s64 = ctx.r30.s64 + 176;
	// stb r4,291(r30)
	PPC_STORE_U8(ctx.r30.u32 + 291, ctx.r4.u8);
	// stb r3,174(r30)
	PPC_STORE_U8(ctx.r30.u32 + 174, ctx.r3.u8);
	// stb r28,289(r30)
	PPC_STORE_U8(ctx.r30.u32 + 289, ctx.r28.u8);
	// stw r8,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r8.u32);
	// stw r8,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r8.u32);
	// stw r7,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r7.u32);
loc_821B0544:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b0544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0544;
	// lis r11,642
	ctx.r11.s64 = 42074112;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// ori r9,r11,21
	ctx.r9.u64 = ctx.r11.u64 | 21;
	// li r8,13
	ctx.r8.s64 = 13;
	// stw r10,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r10.u32);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// stw r9,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r9.u32);
	// stb r8,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r8.u8);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// sth r7,128(r30)
	PPC_STORE_U16(ctx.r30.u32 + 128, ctx.r7.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821B0580;
	sub_8222FB90(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821aa578
	ctx.lr = 0x821B0590;
	sub_821AA578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821b4de0
	ctx.lr = 0x821B0598;
	sub_821B4DE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ab9f0
	ctx.lr = 0x821B05A0;
	sub_821AB9F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821c5e18
	ctx.lr = 0x821B05A8;
	sub_821C5E18(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stb r28,3407(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3407, ctx.r28.u8);
	// addi r27,r11,24456
	ctx.r27.s64 = ctx.r11.s64 + 24456;
	// stb r29,5037(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5037, ctx.r29.u8);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stb r28,5038(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5038, ctx.r28.u8);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r28,5024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5024, ctx.r28.u32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stb r28,348(r31)
	PPC_STORE_U8(ctx.r31.u32 + 348, ctx.r28.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,6040(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f12,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// lfs f30,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f13,25208(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 25208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,5484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stw r10,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r10.u32);
	// lfs f11,20420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20420);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,3364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3364, ctx.r8.u32);
	// stfs f0,216(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stw r9,5032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5032, ctx.r9.u32);
	// stfs f30,220(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stb r29,349(r31)
	PPC_STORE_U8(ctx.r31.u32 + 349, ctx.r29.u8);
	// stfs f13,232(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// addi r3,r31,308
	ctx.r3.s64 = ctx.r31.s64 + 308;
	// stfs f31,4780(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4780, temp.u32);
	// addi r26,r30,244
	ctx.r26.s64 = ctx.r30.s64 + 244;
	// stfs f12,4820(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4820, temp.u32);
	// stfs f11,3224(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3224, temp.u32);
	// lfs f2,248(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce2b8
	ctx.lr = 0x821B0638;
	sub_821CE2B8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821B0644;
	sub_8222FBE8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,244(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ce310
	ctx.lr = 0x821B0654;
	sub_821CE310(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r10,r31,4832
	ctx.r10.s64 = ctx.r31.s64 + 4832;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821B0660:
	// stfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f31,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b0660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B0660;
	// stw r29,4828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4828, ctx.r29.u32);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4948(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4948, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stfs f13,4952(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4952, temp.u32);
	// addi r11,r31,4948
	ctx.r11.s64 = ctx.r31.s64 + 4948;
	// li r7,2500
	ctx.r7.s64 = 2500;
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r31,4912
	ctx.r9.s64 = ctx.r31.s64 + 4912;
	// lfs f0,7540(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stfs f12,4956(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4956, temp.u32);
	// stw r7,4984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4984, ctx.r7.u32);
	// stfs f0,4960(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4960, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfs f13,4964(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4964, temp.u32);
loc_821B06B8:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821b06b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B06B8;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stfs f0,5008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5008, temp.u32);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// stfs f30,3168(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3168, temp.u32);
	// li r8,15000
	ctx.r8.s64 = 15000;
	// stb r29,721(r31)
	PPC_STORE_U8(ctx.r31.u32 + 721, ctx.r29.u8);
	// stb r29,722(r31)
	PPC_STORE_U8(ctx.r31.u32 + 722, ctx.r29.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r9.u32);
	// stb r29,4784(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4784, ctx.r29.u8);
	// stb r29,5002(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5002, ctx.r29.u8);
	// stb r29,5005(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5005, ctx.r29.u8);
	// stw r29,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r29.u32);
	// stw r29,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r29.u32);
	// stw r10,3144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3144, ctx.r10.u32);
	// stw r8,3148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3148, ctx.r8.u32);
	// stw r28,3160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3160, ctx.r28.u32);
	// bl 0x821de688
	ctx.lr = 0x821B0714;
	sub_821DE688(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822408e8
	ctx.lr = 0x821B0724;
	sub_822408E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5130
	ctx.lr = 0x821B072C;
	sub_821E5130(ctx, base);
	// stfs f31,392(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 392, temp.u32);
	// stfs f31,396(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f31,400(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 400, temp.u32);
	// bl 0x821c5e28
	ctx.lr = 0x821B0740;
	sub_821C5E28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340d30
	ctx.lr = 0x821B0748;
	sub_82340D30(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8223fb90
	ctx.lr = 0x821B0750;
	sub_8223FB90(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B03B8) {
	__imp__sub_821B03B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821B0764) {
	__imp__sub_821B0764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821B0768) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5000(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5000, ctx.r11.u8);
	// b 0x821b0160
	sub_821B0160(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821B0768) {
	__imp__sub_821B0768(ctx, base);
}

