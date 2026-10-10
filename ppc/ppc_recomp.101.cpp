#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823C28CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C28CC) {
	__imp__sub_823C28CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C28D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823C28D8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de020
	ctx.lr = 0x823C28E0;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r6,19
	ctx.r9.s64 = ctx.r6.s64 + 19;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r25,r9,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f9,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r11,r6,352
	ctx.r11.s64 = ctx.r6.s64 * 352;
	// lfsx f8,r25,r30
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r3,r30
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f30,f8,f0,f9
	ctx.f30.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fnmsubs f29,f8,f13,f7
	ctx.f29.f64 = double(float(-(ctx.f8.f64 * ctx.f13.f64 - ctx.f7.f64)));
	// fmuls f6,f10,f8
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r11,r9,-12920
	ctx.r11.s64 = ctx.r9.s64 + -12920;
	// addi r31,r10,96
	ctx.r31.s64 = ctx.r10.s64 + 96;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// addi r21,r11,4
	ctx.r21.s64 = ctx.r11.s64 + 4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r24,r30,44
	ctx.r24.s64 = ctx.r30.s64 + 44;
	// addi r27,r26,120
	ctx.r27.s64 = ctx.r26.s64 + 120;
	// fadds f28,f6,f30
	ctx.f28.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// li r23,2
	ctx.r23.s64 = 2;
	// fadds f27,f6,f29
	ctx.f27.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// lfs f26,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823C297C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fsubs f12,f28,f0
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fsubs f9,f27,f13
	ctx.f9.f64 = double(float(ctx.f27.f64 - ctx.f13.f64));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f8,f13,f29
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f0,f12,f11
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fsel f11,f13,f9,f8
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fcmpu cr6,f6,f7
	ctx.cr6.compare(ctx.f6.f64, ctx.f7.f64);
	// bgt cr6,0x823c2a98
	if (ctx.cr6.gt) goto loc_823C2A98;
	// lfs f11,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// blt cr6,0x823c2b48
	if (ctx.cr6.lt) goto loc_823C2B48;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lfsx f0,r25,r30
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f11,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fdivs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// bge cr6,0x823c2a54
	if (!ctx.cr6.lt) goto loc_823C2A54;
	// fsubs f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2A20;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823c2b48
	if (!ctx.cr6.gt) goto loc_823C2B48;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x823c2b48
	goto loc_823C2B48;
loc_823C2A54:
	// fadds f1,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bl 0x823df940
	ctx.lr = 0x823C2A5C;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c2b48
	if (!ctx.cr6.lt) goto loc_823C2B48;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x823c2b48
	goto loc_823C2B48;
loc_823C2A98:
	// lfs f12,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// blt cr6,0x823c2b48
	if (ctx.cr6.lt) goto loc_823C2B48;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lfsx f13,r25,r30
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f12,f0,f11
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f11,52(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fdivs f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f0,f5,f11
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f11.f64));
	// bge cr6,0x823c2b20
	if (!ctx.cr6.lt) goto loc_823C2B20;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// fsubs f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2AF0;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c2b48
	if (!ctx.cr6.lt) goto loc_823C2B48;
	// subf r10,r11,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823c2b44
	goto loc_823C2B44;
loc_823C2B20:
	// fadds f1,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bl 0x823df940
	ctx.lr = 0x823C2B28;
	sub_823DF940(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823c2b48
	if (!ctx.cr6.gt) goto loc_823C2B48;
loc_823C2B44:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_823C2B48:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// bne 0x823c297c
	if (!ctx.cr0.eq) goto loc_823C297C;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de06c
	ctx.lr = 0x823C2B68;
	__restfpr_26(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C28D0) {
	__imp__sub_823C28D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C2B6C) {
	__imp__sub_823C2B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C2B78;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,124(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 124);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r30,r7,448
	ctx.r30.s64 = ctx.r7.s64 + 448;
	// li r27,0
	ctx.r27.s64 = 0;
	// ble cr6,0x823c2bd4
	if (!ctx.cr6.gt) goto loc_823C2BD4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823C2BD4:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f31,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823c2c6c
	if (!ctx.cr6.gt) goto loc_823C2C6C;
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fsubs f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2C3C;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c2c6c
	if (!ctx.cr6.lt) goto loc_823C2C6C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823C2C6C:
	// subfic r11,r27,1
	ctx.xer.ca = ctx.r27.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r27.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823c2ce8
	if (!ctx.cr6.lt) goto loc_823C2CE8;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r9,r29
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f10.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fsubs f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x823C2CC8;
	sub_823DF940(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823c2ce8
	if (!ctx.cr6.gt) goto loc_823C2CE8;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_823C2CE8:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c2d00
	if (!ctx.cr6.gt) goto loc_823C2D00;
	// li r27,1
	ctx.r27.s64 = 1;
loc_823C2D00:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823c2d8c
	if (!ctx.cr6.gt) goto loc_823C2D8C;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fsubs f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2D5C;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r4,r6,r7
	ctx.r4.s64 = ctx.r7.s64 - ctx.r6.s64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823c2d8c
	if (!ctx.cr6.gt) goto loc_823C2D8C;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_823C2D8C:
	// subfic r11,r27,1
	ctx.xer.ca = ctx.r27.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r27.s64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823c2e24
	if (!ctx.cr6.lt) goto loc_823C2E24;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f4,f5,f12
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f1,f4,f30
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x823C2DEC;
	sub_823DF940(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f2.u64);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r6,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r6.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c2e24
	if (!ctx.cr6.lt) goto loc_823C2E24;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_823C2E24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2B70) {
	__imp__sub_823C2B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C2E34) {
	__imp__sub_823C2E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2E38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,352
	ctx.r11.s64 = ctx.r4.s64 * 352;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r10,r11,96
	ctx.r10.s64 = ctx.r11.s64 + 96;
	// stw r9,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// stw r9,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stw r8,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r8.u32);
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C2E38) {
	__imp__sub_823C2E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C2E68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,120(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 120);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r10,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r10.u32);
	// stw r10,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r10.u32);
	// beq cr6,0x823c2f08
	if (ctx.cr6.eq) goto loc_823C2F08;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823c28d0
	ctx.lr = 0x823C2EC8;
	sub_823C28D0(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x823c2f08
	if (!ctx.cr6.eq) goto loc_823C2F08;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c28d0
	ctx.lr = 0x823C2EE8;
	sub_823C28D0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x823c2f08
	if (ctx.cr6.eq) goto loc_823C2F08;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c2b70
	ctx.lr = 0x823C2F08;
	sub_823C2B70(ctx, base);
loc_823C2F08:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2E60) {
	__imp__sub_823C2E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2F10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823C2F18;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de020
	ctx.lr = 0x823C2F20;
	__savefpr_26(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r27,r3,44
	ctx.r27.s64 = ctx.r3.s64 + 44;
	// lfs f30,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// addi r24,r4,104
	ctx.r24.s64 = ctx.r4.s64 + 104;
	// lfs f29,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f29.f64 = double(temp.f32);
	// addi r23,r4,112
	ctx.r23.s64 = ctx.r4.s64 + 112;
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// addi r30,r3,56
	ctx.r30.s64 = ctx.r3.s64 + 56;
	// addi r28,r6,-244
	ctx.r28.s64 = ctx.r6.s64 + -244;
	// li r26,2
	ctx.r26.s64 = 2;
loc_823C2F5C:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f13
	ctx.f5.f64 = ctx.f13.f64;
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f6,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f28,f31,f8,f7
	ctx.f28.f64 = double(float(ctx.f31.f64 * ctx.f8.f64 + ctx.f7.f64));
	// lfs f4,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f27,f6,f31,f13
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmadds f26,f4,f31,f7
	ctx.f26.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f7.f64));
	// fmuls f31,f31,f29
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fsubs f2,f12,f11
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fdivs f1,f2,f10
	ctx.f1.f64 = double(float(ctx.f2.f64 / ctx.f10.f64));
	// fadds f0,f1,f9
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// fsubs f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2FB0;
	sub_823DDE20(ctx, base);
	// lfs f13,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f1
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f28,f13
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f12
	ctx.f8.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// fdivs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// lwz r25,84(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f1,f6,f30
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C2FE0;
	sub_823DDE20(ctx, base);
	// lfs f5,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// fsubs f3,f27,f5
	ctx.f3.f64 = double(float(ctx.f27.f64 - ctx.f5.f64));
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f0,f4
	ctx.f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fdivs f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f1,f12,f30
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x823C3010;
	sub_823DF940(ctx, base);
	// lfsu f0,8(r30)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r30.u32 = ea;
	// frsp f11,f1
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f26,f0
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// lfsu f0,4(r29)
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// lfs f9,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lwz r20,84(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f1,f6,f30
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// bl 0x823df940
	ctx.lr = 0x823C3040;
	sub_823DF940(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lwz r11,12(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r9,8(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// subf r8,r25,r20
	ctx.r8.s64 = ctx.r20.s64 - ctx.r25.s64;
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r8,348(r28)
	PPC_STORE_U32(ctx.r28.u32 + 348, ctx.r8.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r10,340(r28)
	PPC_STORE_U32(ctx.r28.u32 + 340, ctx.r10.u32);
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f5.f64));
	// stfd f4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f4.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r10,r7,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r7.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r6,r21,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r21.s64;
	// stw r11,344(r28)
	PPC_STORE_U32(ctx.r28.u32 + 344, ctx.r11.u32);
	// stwu r6,352(r28)
	ea = 352 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r28.u32 = ea;
	// bne 0x823c2f5c
	if (!ctx.cr0.eq) goto loc_823C2F5C;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de06c
	ctx.lr = 0x823C3090;
	__restfpr_26(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2F10) {
	__imp__sub_823C2F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3094) {
	__imp__sub_823C3094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823C30A0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x823C30A8;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f28,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f28.f64 = double(temp.f32);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r24,r6,48
	ctx.r24.s64 = ctx.r6.s64 + 48;
	// addi r28,r5,104
	ctx.r28.s64 = ctx.r5.s64 + 104;
	// li r26,2
	ctx.r26.s64 = 2;
loc_823C30E4:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsubs f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f28.f64));
	// fdivs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f12.f64));
	// stfs f7,0(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fnmsubs f1,f7,f0,f29
	ctx.f1.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f29.f64)));
	// bl 0x823df940
	ctx.lr = 0x823C3118;
	sub_823DF940(ctx, base);
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lfs f5,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fadds f31,f6,f29
	ctx.f31.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fsubs f0,f1,f29
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f29.f64));
	// fnmsubs f1,f5,f4,f0
	ctx.f1.f64 = double(float(-(ctx.f5.f64 * ctx.f4.f64 - ctx.f0.f64)));
	// bl 0x823dde20
	ctx.lr = 0x823C3148;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fsubs f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x823c31a8
	if (ctx.cr6.eq) goto loc_823C31A8;
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x823c3198
	if (!ctx.cr6.gt) goto loc_823C3198;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// fadds f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fsubs f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// fdivs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// stfs f8,0(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x823c31a8
	goto loc_823C31A8;
loc_823C3198:
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// fsubs f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// fdivs f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
loc_823C31A8:
	// stfsu f31,4(r24)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r24.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r24.u32 = ea;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x823c30e4
	if (!ctx.cr0.eq) goto loc_823C30E4;
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fmr f1,f9
	ctx.f1.f64 = ctx.f9.f64;
	// lfs f8,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// lfs f4,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f12,f4,f9
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// fmr f2,f9
	ctx.f2.f64 = ctx.f9.f64;
	// lfs f9,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmr f9,f4
	ctx.f9.f64 = ctx.f4.f64;
	// lfs f11,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,916(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 916);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// fmuls f8,f1,f11
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f13,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f13,f4,f1,f6
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// fmadds f6,f4,f11,f3
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f3.f64));
	// stfs f2,76(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// fmr f0,f4
	ctx.f0.f64 = ctx.f4.f64;
	// lfs f4,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f9,f4,f12
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f12.f64));
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f11,f9,f0,f8
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f0,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f12,f5,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f7.f64));
	// lfs f7,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f12,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmr f0,f7
	ctx.f0.f64 = ctx.f7.f64;
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f7,f3,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f13.f64));
	// lfs f3,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f6
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f4,80(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// fmadds f7,f7,f3,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f1.f64));
	// lfs f3,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f1,f8,f9
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f9,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f0,f0,f3,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f11.f64));
	// lfs f31,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// lfs f4,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f7
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsel f6,f3,f13,f6
	ctx.f6.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// fsel f0,f31,f7,f0
	ctx.f0.f64 = ctx.f31.f64 >= 0.0 ? ctx.f7.f64 : ctx.f0.f64;
	// fsel f3,f1,f11,f12
	ctx.f3.f64 = ctx.f1.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fmadds f1,f9,f5,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fsubs f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f13,f3,f2
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// fmadds f12,f4,f8,f1
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f1.f64));
	// stfs f12,48(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// fsel f10,f11,f6,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f6.f64 : ctx.f0.f64;
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f9,36(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x823C32F8;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3098) {
	__imp__sub_823C3098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C32FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C32FC) {
	__imp__sub_823C32FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C3308;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r3,14592(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x823c0088
	ctx.lr = 0x823C3334;
	sub_823C0088(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c04b8
	ctx.lr = 0x823C3340;
	sub_823C04B8(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c05f0
	ctx.lr = 0x823C334C;
	sub_823C05F0(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823c06a8
	ctx.lr = 0x823C3354;
	sub_823C06A8(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c3098
	ctx.lr = 0x823C3368;
	sub_823C3098(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f11,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,0(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f8,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f7,4(r26)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f6,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f5,8(r26)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f4,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmadds f13,f4,f7,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fnmadds f12,f2,f5,f13
	ctx.f12.f64 = double(float(-(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64)));
	// stfs f12,12(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
	// bl 0x823c1c78
	ctx.lr = 0x823C33D0;
	sub_823C1C78(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r8,312(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lfs f31,-30864(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -30864);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x823c3408
	if (ctx.cr6.eq) goto loc_823C3408;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c0cd0
	ctx.lr = 0x823C3404;
	sub_823C0CD0(ctx, base);
	// b 0x823c3424
	goto loc_823C3424;
loc_823C3408:
	// lfs f0,292(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823c3424
	if (!ctx.cr6.lt) goto loc_823C3424;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c0978
	ctx.lr = 0x823C3424;
	sub_823C0978(ctx, base);
loc_823C3424:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lwz r11,900(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 900);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c350c
	if (ctx.cr6.eq) goto loc_823C350C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x823c1118
	ctx.lr = 0x823C3450;
	sub_823C1118(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,13024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13024);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f8,f10,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// beq cr6,0x823c349c
	if (ctx.cr6.eq) goto loc_823C349C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x823c1d30
	ctx.lr = 0x823C3494;
	sub_823C1D30(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x823c34d0
	goto loc_823C34D0;
loc_823C349C:
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x823c2868
	ctx.lr = 0x823C34B4;
	sub_823C2868(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c34d0
	if (ctx.cr6.eq) goto loc_823C34D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c0ee0
	ctx.lr = 0x823C34D0;
	sub_823C0EE0(ctx, base);
loc_823C34D0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c1118
	ctx.lr = 0x823C34E8;
	sub_823C1118(ctx, base);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c2e60
	ctx.lr = 0x823C3508;
	sub_823C2E60(ctx, base);
	// b 0x823c35a0
	goto loc_823C35A0;
loc_823C350C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// bl 0x823c1c78
	ctx.lr = 0x823C3518;
	sub_823C1C78(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f6,f10,f9,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f0,f8,f7,f6
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c3560
	if (!ctx.cr6.gt) goto loc_823C3560;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c0978
	ctx.lr = 0x823C355C;
	sub_823C0978(ctx, base);
	// b 0x823c3578
	goto loc_823C3578;
loc_823C3560:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823c3578
	if (!ctx.cr6.lt) goto loc_823C3578;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c0a20
	ctx.lr = 0x823C3578;
	sub_823C0A20(ctx, base);
loc_823C3578:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c1810
	ctx.lr = 0x823C358C;
	sub_823C1810(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c2f10
	ctx.lr = 0x823C35A0;
	sub_823C2F10(ctx, base);
loc_823C35A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x823c0b50
	ctx.lr = 0x823C35C0;
	sub_823C0B50(ctx, base);
	// addi r6,r27,64
	ctx.r6.s64 = ctx.r27.s64 + 64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c1b50
	ctx.lr = 0x823C35D4;
	sub_823C1B50(ctx, base);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r30,r27,112
	ctx.r30.s64 = ctx.r27.s64 + 112;
loc_823C35DC:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c0388
	ctx.lr = 0x823C35F0;
	sub_823C0388(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,352
	ctx.r30.s64 = ctx.r30.s64 + 352;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x823c35dc
	if (ctx.cr6.lt) goto loc_823C35DC;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3300) {
	__imp__sub_823C3300(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C360C) {
	__imp__sub_823C360C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfs f0,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f7,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,16(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f3,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f2,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// lfs f12,176(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f11,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,48(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// lfs f7,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// lfs f5,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmuls f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmadds f0,f7,f1,f2
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f13,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f4,f12
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f10,f13,f1,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,20(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// lfs f9,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,172(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f6,f9,f1,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f6,36(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// lfs f5,180(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,188(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmadds f1,f5,f1,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f1,52(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// lfs f0,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f13,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lfs f12,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// lfs f11,184(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,56(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,28(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,44(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,60(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3610) {
	__imp__sub_823C3610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de01c
	ctx.lr = 0x823C3738;
	__savefpr_25(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r7,8472(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8472);
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// lwz r5,8480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8480);
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// addi r9,r6,4608
	ctx.r9.s64 = ctx.r6.s64 + 4608;
	// addi r8,r3,13536
	ctx.r8.s64 = ctx.r3.s64 + 13536;
	// lwz r10,14592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14592);
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r9,908(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 908);
	// lfs f0,5576(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5576);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,304
	ctx.r8.s64 = ctx.r11.s64 + 304;
	// lfs f13,5580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5580);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,5584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5584);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f8,316(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 316);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,320(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// lfs f6,304(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,324(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 324);
	ctx.f5.f64 = double(temp.f32);
	// fmr f25,f6
	ctx.f25.f64 = ctx.f6.f64;
	// fmr f26,f5
	ctx.f26.f64 = ctx.f5.f64;
	// lfs f3,308(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 308);
	ctx.f3.f64 = double(temp.f32);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lfs f31,312(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 312);
	ctx.f31.f64 = double(temp.f32);
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fabs f4,f12
	ctx.f4.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// fabs f2,f11
	ctx.f2.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fabs f0,f9
	ctx.f0.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// rlwinm r3,r5,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f30,f11
	ctx.f30.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// fabs f27,f9
	ctx.f27.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fmuls f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmuls f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmsubs f6,f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 - ctx.f8.f64));
	// fmadds f5,f0,f5,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmadds f4,f3,f11,f6
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f3,f10,f1,f5
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f5.f64));
	// fnmsubs f2,f30,f13,f4
	ctx.f2.f64 = double(float(-(ctx.f30.f64 * ctx.f13.f64 - ctx.f4.f64)));
	// fmadds f1,f31,f9,f3
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f0,f31,f9,f2
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f28,f11,f1
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fnmsubs f11,f27,f26,f0
	ctx.f11.f64 = double(float(-(ctx.f27.f64 * ctx.f26.f64 - ctx.f0.f64)));
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f10,f12,f25,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f25.f64 + ctx.f13.f64));
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de068
	ctx.lr = 0x823C3820;
	__restfpr_25(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3728) {
	__imp__sub_823C3728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C382C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C382C) {
	__imp__sub_823C382C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823C3838;
	__savegprlr_24(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x823c3728
	ctx.lr = 0x823C3850;
	sub_823C3728(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c3300
	ctx.lr = 0x823C3868;
	sub_823C3300(ctx, base);
	// addi r24,r25,112
	ctx.r24.s64 = ctx.r25.s64 + 112;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// addi r30,r1,132
	ctx.r30.s64 = ctx.r1.s64 + 132;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r29,r29,3696
	ctx.r29.s64 = ctx.r29.s64 + 3696;
	// addi r26,r11,-12912
	ctx.r26.s64 = ctx.r11.s64 + -12912;
loc_823C3888:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c56f8
	ctx.lr = 0x823C3898;
	sub_823C56F8(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,-4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x8239b868
	ctx.lr = 0x823C38B0;
	sub_8239B868(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,488
	ctx.r29.s64 = ctx.r29.s64 + 488;
	// addi r28,r28,160
	ctx.r28.s64 = ctx.r28.s64 + 160;
	// addi r27,r27,352
	ctx.r27.s64 = ctx.r27.s64 + 352;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x823c3888
	if (ctx.cr6.lt) goto loc_823C3888;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823c3610
	ctx.lr = 0x823C38DC;
	sub_823C3610(ctx, base);
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3830) {
	__imp__sub_823C3830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C38E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C38E4) {
	__imp__sub_823C38E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C38E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C38FC:
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8239c360
	ctx.lr = 0x823C3908;
	sub_8239C360(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x823c38fc
	if (ctx.cr6.lt) goto loc_823C38FC;
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

PPC_WEAK_FUNC(sub_823C38E8) {
	__imp__sub_823C38E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C3930;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// li r27,2
	ctx.r27.s64 = 2;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 393216;
	// addi r31,r3,3792
	ctx.r31.s64 = ctx.r3.s64 + 3792;
	// addi r30,r11,20668
	ctx.r30.s64 = ctx.r11.s64 + 20668;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_823C3960:
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// addi r5,r31,-96
	ctx.r5.s64 = ctx.r31.s64 + -96;
	// stw r27,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r27.u32);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x823c5798
	ctx.lr = 0x823C3984;
	sub_823C5798(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,488
	ctx.r31.s64 = ctx.r31.s64 + 488;
	// bne 0x823c3960
	if (!ctx.cr0.eq) goto loc_823C3960;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3928) {
	__imp__sub_823C3928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C399C) {
	__imp__sub_823C399C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39A0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C39A0) {
	__imp__sub_823C39A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C39AC) {
	__imp__sub_823C39AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39B0) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C39B0) {
	__imp__sub_823C39B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C39BC) {
	__imp__sub_823C39BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39C0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,20
	ctx.r3.s64 = 20;
	// addi r4,r11,13584
	ctx.r4.s64 = ctx.r11.s64 + 13584;
	// bl 0x82177148
	ctx.lr = 0x823C39DC;
	sub_82177148(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// stw r3,8352(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8352, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C39C0) {
	__imp__sub_823C39C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C39F8) {
	__imp__sub_823C39F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C39FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C39FC) {
	__imp__sub_823C39FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823c3a20
	if (ctx.cr6.eq) goto loc_823C3A20;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_823C3A20:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lfs f11,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f7,f7
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fsubs f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f0,f12
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f0,344(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 344);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f13,f11
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f2,40(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f13,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f11,f2,f2
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmuls f10,f5,f5
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// fmuls f9,f4,f4
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64));
	// fmadds f8,f3,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fmadds f7,f1,f1,f9
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f9.f64));
	// fmadds f5,f13,f13,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f4,f12,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fcmpu cr6,f2,f3
	ctx.cr6.compare(ctx.f2.f64, ctx.f3.f64);
	// bge cr6,0x823c3aa4
	if (!ctx.cr6.lt) goto loc_823C3AA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C3AA4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3A00) {
	__imp__sub_823C3A00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3AAC) {
	__imp__sub_823C3AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3AB0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_823C3ACC:
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_823C3AD8:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_823C3AE0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823c3b0c
	if (!ctx.cr6.lt) goto loc_823C3B0C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x823c3a00
	ctx.lr = 0x823C3AFC;
	sub_823C3A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c3ae0
	if (!ctx.cr6.eq) goto loc_823C3AE0;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
loc_823C3B0C:
	// bgt cr6,0x823c3b64
	if (ctx.cr6.gt) goto loc_823C3B64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r6
	ctx.r7.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_823C3B18:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,-4
	ctx.r7.s64 = ctx.r7.s64 + -4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c3b64
	if (ctx.cr6.lt) goto loc_823C3B64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x823c3a00
	ctx.lr = 0x823C3B34;
	sub_823C3A00(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c3b18
	if (!ctx.cr6.eq) goto loc_823C3B18;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823c3b64
	if (ctx.cr6.gt) goto loc_823C3B64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r4,r10,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// stwx r4,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r4.u32);
	// b 0x823c3ad8
	goto loc_823C3AD8;
loc_823C3B64:
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x823c3b84
	if (!ctx.cr6.eq) goto loc_823C3B84;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r8,r11,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
loc_823C3B84:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x823c3bac
	if (ctx.cr6.eq) goto loc_823C3BAC;
	// bge cr6,0x823c3ba4
	if (!ctx.cr6.lt) goto loc_823C3BA4;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r9,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r9.s64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
	// b 0x823c3acc
	goto loc_823C3ACC;
loc_823C3BA4:
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// b 0x823c3acc
	goto loc_823C3ACC;
loc_823C3BAC:
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

PPC_WEAK_FUNC(sub_823C3AB0) {
	__imp__sub_823C3AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3BC4) {
	__imp__sub_823C3BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823C3BD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// ori r8,r10,20808
	ctx.r8.u64 = ctx.r10.u64 | 20808;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c3c3c
	if (ctx.cr6.eq) goto loc_823C3C3C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,20812
	ctx.r11.s64 = ctx.r11.s64 + 20812;
loc_823C3C14:
	// addis r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 393216;
	// addi r10,r10,22860
	ctx.r10.s64 = ctx.r10.s64 + 22860;
	// lbzx r7,r9,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x823c3c30
	if (!ctx.cr6.eq) goto loc_823C3C30;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_823C3C30:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x823c3c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C3C14;
loc_823C3C3C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12892(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12892);
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x823c3c64
	if (!ctx.cr6.gt) goto loc_823C3C64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c3ab0
	ctx.lr = 0x823C3C60;
	sub_823C3AB0(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_823C3C64:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823c3cd0
	if (ctx.cr6.eq) goto loc_823C3CD0;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r11,14704
	ctx.r28.s64 = ctx.r11.s64 + 14704;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lis r26,-31799
	ctx.r26.s64 = -2083979264;
	// addi r27,r11,-12736
	ctx.r27.s64 = ctx.r11.s64 + -12736;
loc_823C3C8C:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823c3ca4
	if (ctx.cr6.eq) goto loc_823C3CA4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8239d800
	ctx.lr = 0x823C3CA4;
	sub_8239D800(ctx, base);
loc_823C3CA4:
	// lwz r11,14592(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14592);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,5960
	ctx.r3.s64 = ctx.r11.s64 + 5960;
	// bl 0x823c56f8
	ctx.lr = 0x823C3CBC;
	sub_823C56F8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r24,8200(r28)
	ea = 8200 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,488
	ctx.r30.s64 = ctx.r30.s64 + 488;
	// bne 0x823c3c8c
	if (!ctx.cr0.eq) goto loc_823C3C8C;
loc_823C3CD0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3BC8) {
	__imp__sub_823C3BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3CDC) {
	__imp__sub_823C3CDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
loc_823C3D08:
	// lfs f7,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fabs f6,f7
	ctx.f6.u64 = ctx.f7.u64 & ~0x8000000000000000;
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fabs f4,f5
	ctx.f4.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fabs f2,f3
	ctx.f2.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmsubs f7,f7,f12,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmsubs f6,f5,f0,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmsubs f5,f3,f10,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 - ctx.f2.f64));
	// fadds f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fcmpu cr6,f2,f8
	ctx.cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// bge cr6,0x823c3d68
	if (!ctx.cr6.lt) goto loc_823C3D68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x823c3d08
	if (ctx.cr6.lt) goto loc_823C3D08;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823C3D68:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3CE0) {
	__imp__sub_823C3CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3D70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lfs f11,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
loc_823C3D8C:
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
	// fmadds f4,f7,f12,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fadds f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fcmpu cr6,f2,f11
	ctx.cr6.compare(ctx.f2.f64, ctx.f11.f64);
	// bgt cr6,0x823c3dd0
	if (ctx.cr6.gt) goto loc_823C3DD0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x823c3d8c
	if (ctx.cr6.lt) goto loc_823C3D8C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823C3DD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3D70) {
	__imp__sub_823C3D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3DD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12848);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c3df4
	if (!ctx.cr6.eq) goto loc_823C3DF4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C3DF4:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823c3ce0
	sub_823C3CE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3DD8) {
	__imp__sub_823C3DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3E14) {
	__imp__sub_823C3E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3E18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c3e30
	if (!ctx.cr6.eq) goto loc_823C3E30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C3E30:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,628(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 628);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823c3ce0
	sub_823C3CE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C3E18) {
	__imp__sub_823C3E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(-(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64)));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3E50) {
	__imp__sub_823C3E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C3E94) {
	__imp__sub_823C3E94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C3E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lfs f13,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823c3ebc
	if (!ctx.cr6.lt) goto loc_823C3EBC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823C3EBC:
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fabs f13,f0
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x823c3ee0
	if (!ctx.cr6.lt) goto loc_823C3EE0;
	// li r10,2
	ctx.r10.s64 = 2;
loc_823C3EE0:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmsubs f8,f12,f13,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,12(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,16(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f5,f2,f2
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmsubs f9,f13,f1,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 - ctx.f10.f64));
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// fmr f6,f2
	ctx.f6.f64 = ctx.f2.f64;
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f10,16(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f9,20(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmr f7,f10
	ctx.f7.f64 = ctx.f10.f64;
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f10,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 - ctx.f4.f64));
	// stfs f3,0(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmsubs f10,f2,f1,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f11.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmr f7,f3
	ctx.f7.f64 = ctx.f3.f64;
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f9,f8,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f1,f7,f7
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmr f6,f10
	ctx.f6.f64 = ctx.f10.f64;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// fmadds f12,f2,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f1.f64));
	// fmadds f11,f10,f10,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fdivs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f4,0(r4)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f2,8(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C3E98) {
	__imp__sub_823C3E98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f2,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f10,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmadds f7,f10,f1,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f8.f64));
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f6,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmr f12,f11
	ctx.f12.f64 = ctx.f11.f64;
	// lfs f5,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fmadds f3,f6,f1,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f7
	ctx.f1.f64 = ctx.f7.f64;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f10,f2,f7,f11
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f11.f64));
	// fnmadds f9,f0,f3,f10
	ctx.f9.f64 = double(float(-(ctx.f0.f64 * ctx.f3.f64 + ctx.f10.f64)));
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C4030) {
	__imp__sub_823C4030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C4094) {
	__imp__sub_823C4094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4098) {
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
	// bl 0x823de020
	ctx.lr = 0x823C40AC;
	__savefpr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r4,-31809
	ctx.r4.s64 = -2084634624;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addi r31,r4,24448
	ctx.r31.s64 = ctx.r4.s64 + 24448;
	// lfs f0,2424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r11,22892
	ctx.r10.u64 = ctx.r11.u64 | 22892;
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f9,f30,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stfs f9,4(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f8,f29,f0
	ctx.f8.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f7,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f0,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f0,f31,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f5.f64));
	// fmadds f3,f0,f30,f7
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmuls f2,f10,f4
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmadds f1,f29,f0,f6
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fmadds f0,f9,f3,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f2.f64));
	// fnmadds f13,f8,f1,f0
	ctx.f13.f64 = double(float(-(ctx.f8.f64 * ctx.f1.f64 + ctx.f0.f64)));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// bl 0x823c3e98
	ctx.lr = 0x823C4134;
	sub_823C3E98(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,44(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f7,f8,f8,f0
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsqrts f5,f7
	ctx.f5.f64 = double(float(sqrt(ctx.f7.f64)));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fmuls f3,f4,f31
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f2,f30,f4
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// fmuls f1,f29,f4
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmuls f8,f4,f31
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f7,f30,f4
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f4.f64));
	// fmuls f5,f29,f4
	ctx.f5.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmuls f28,f4,f31
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmadds f3,f13,f6,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f3,16(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// fmadds f2,f12,f6,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f2.f64));
	// stfs f2,20(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// fmadds f1,f11,f6,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f1,24(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// lfs f6,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f27,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f3,f26,f3
	ctx.f3.f64 = double(float(ctx.f26.f64 * ctx.f3.f64));
	// fmadds f2,f6,f2,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f3.f64));
	// fnmadds f1,f27,f1,f2
	ctx.f1.f64 = double(float(-(ctx.f27.f64 * ctx.f1.f64 + ctx.f2.f64)));
	// stfs f1,28(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// lfs f6,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f3,f0,f6,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f2,f10,f6,f7
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f3,32(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// fmadds f1,f9,f6,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f2,36(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f1,40(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f3,f6
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmadds f3,f8,f2,f5
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f2.f64 + ctx.f5.f64));
	// fnmadds f2,f7,f1,f3
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f1.f64 + ctx.f3.f64)));
	// stfs f2,44(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// lfs f1,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fneg f7,f1
	ctx.f7.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r8,6
	ctx.r8.s64 = 393216;
	// fmuls f8,f4,f30
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// lis r7,6
	ctx.r7.s64 = 393216;
	// fmuls f6,f29,f4
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// ori r5,r8,22896
	ctx.r5.u64 = ctx.r8.u64 | 22896;
	// fmuls f5,f4,f31
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// ori r4,r7,22892
	ctx.r4.u64 = ctx.r7.u64 | 22892;
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f29,f4
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// fmadds f1,f7,f13,f28
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f28.f64));
	// stfs f1,48(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// fmadds f13,f12,f7,f8
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f13,52(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// fmadds f12,f11,f7,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f12,56(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f1,f7
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmadds f4,f11,f13,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fnmadds f1,f8,f12,f4
	ctx.f1.f64 = double(float(-(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64)));
	// stfs f1,60(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,64(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// fmadds f10,f10,f12,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f10,68(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 68, temp.u32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f9,72(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 72, temp.u32);
	// lfs f8,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f4,f8,f10,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmadds f3,f7,f9,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f9.f64 + ctx.f4.f64)));
	// stfs f3,76(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 76, temp.u32);
	// lfs f2,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f0,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmadds f10,f11,f31,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f2.f64));
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f11,f30,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64 + ctx.f1.f64));
	// stfs f31,80(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 80, temp.u32);
	// fmadds f8,f11,f29,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f12.f64));
	// stfs f30,84(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 84, temp.u32);
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f29,88(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 88, temp.u32);
	// fmadds f6,f9,f30,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fnmadds f5,f8,f29,f6
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f29.f64 + ctx.f6.f64)));
	// stfs f5,92(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 92, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de06c
	ctx.lr = 0x823C42D8;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C4098) {
	__imp__sub_823C4098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C42E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C42E8) {
	__imp__sub_823C42E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C42F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C42F4) {
	__imp__sub_823C42F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C42F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C4300;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r29,r10,24448
	ctx.r29.s64 = ctx.r10.s64 + 24448;
	// mulli r31,r5,8200
	ctx.r31.s64 = ctx.r5.s64 * 8200;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// addis r10,r29,6
	ctx.r10.s64 = ctx.r29.s64 + 393216;
	// lwz r8,604(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r11,r10,27008
	ctx.r11.s64 = ctx.r10.s64 + 27008;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r5,r7,-2304
	ctx.r5.s64 = ctx.r7.s64 + -2304;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// bl 0x823b8248
	ctx.lr = 0x823C4358;
	sub_823B8248(ctx, base);
	// addis r11,r29,6
	ctx.r11.s64 = ctx.r29.s64 + 393216;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,22904
	ctx.r3.s64 = ctx.r11.s64 + 22904;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r5,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x823c4384
	if (ctx.cr6.eq) goto loc_823C4384;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x823b5938
	ctx.lr = 0x823C4384;
	sub_823B5938(ctx, base);
loc_823C4384:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C42F8) {
	__imp__sub_823C42F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C438C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C438C) {
	__imp__sub_823C438C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C4398;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// addi r8,r10,4608
	ctx.r8.s64 = ctx.r10.s64 + 4608;
	// mulli r30,r6,8200
	ctx.r30.s64 = ctx.r6.s64 * 8200;
	// addi r11,r11,22912
	ctx.r11.s64 = ctx.r11.s64 + 22912;
	// addis r9,r31,7
	ctx.r9.s64 = ctx.r31.s64 + 458752;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r9,r9,-5728
	ctx.r9.s64 = ctx.r9.s64 + -5728;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addi r7,r10,4096
	ctx.r7.s64 = ctx.r10.s64 + 4096;
	// lwz r5,604(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 604);
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x823c4098
	ctx.lr = 0x823C43F8;
	sub_823C4098(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823c440c
	if (ctx.cr6.eq) goto loc_823C440C;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x823c4414
	goto loc_823C4414;
loc_823C440C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
loc_823C4414:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-2300
	ctx.r5.s64 = ctx.r11.s64 + -2300;
	// li r8,1024
	ctx.r8.s64 = 1024;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823b8248
	ctx.lr = 0x823C4438;
	sub_823B8248(ctx, base);
	// addis r11,r31,6
	ctx.r11.s64 = ctx.r31.s64 + 393216;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,22904
	ctx.r10.s64 = ctx.r11.s64 + 22904;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r26,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r26.u32);
	// beq cr6,0x823c4460
	if (ctx.cr6.eq) goto loc_823C4460;
	// li r6,2048
	ctx.r6.s64 = 2048;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x823b5938
	ctx.lr = 0x823C4460;
	sub_823B5938(ctx, base);
loc_823C4460:
	// addis r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 458752;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r26,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u32);
	// beq cr6,0x823c4488
	if (ctx.cr6.eq) goto loc_823C4488;
	// li r6,768
	ctx.r6.s64 = 768;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823b5938
	ctx.lr = 0x823C4488;
	sub_823B5938(ctx, base);
loc_823C4488:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C4390) {
	__imp__sub_823C4390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lwz r11,-26984(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -26984);
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C4490) {
	__imp__sub_823C4490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C44A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r11,r11,-26984
	ctx.r11.s64 = ctx.r11.s64 + -26984;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c44c0
	if (!ctx.cr6.eq) goto loc_823C44C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C44C0:
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r9,4608
	ctx.r8.s64 = ctx.r9.s64 + 4608;
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8456(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8456);
	// lwz r11,620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823c3ce0
	sub_823C3CE0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C44A0) {
	__imp__sub_823C44A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C44E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f10,44(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// lfs f8,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// addi r8,r11,24448
	ctx.r8.s64 = ctx.r11.s64 + 24448;
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// ori r7,r10,22896
	ctx.r7.u64 = ctx.r10.u64 | 22896;
	// lfs f6,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// ori r6,r9,22892
	ctx.r6.u64 = ctx.r9.u64 | 22892;
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f0,r8,r7
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r6
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fdivs f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// lfs f12,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f31,f10,f10,f11
	ctx.f31.f64 = double(float(-(ctx.f10.f64 * ctx.f10.f64 - ctx.f11.f64)));
	// lfs f3,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsqrts f31,f31
	ctx.f31.f64 = double(float(sqrt(ctx.f31.f64)));
	// fmuls f1,f1,f9
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f30,f8,f31
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmadds f8,f13,f11,f5
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f7,f13,f10,f4
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f6,f13,f12,f2
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmuls f9,f1,f31
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmuls f5,f30,f30
	ctx.f5.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f2,f0,f11,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f1,f0,f10,f7
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f7.f64));
	// fmadds f31,f0,f12,f6
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fsubs f13,f4,f5
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823c45fc
	if (!ctx.cr6.lt) goto loc_823C45FC;
	// fmadds f0,f10,f13,f7
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f12,f12,f13,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f11,f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f11,0(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsubs f9,f6,f12
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmuls f7,f10,f10
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f4,f8,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fadds f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,12(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// stfs f1,16(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823C45FC:
	// stfs f2,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f9,12(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f4,16(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C44E8) {
	__imp__sub_823C44E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C461C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C461C) {
	__imp__sub_823C461C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C4620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823C4628;
	__savegprlr_23(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-18752(r1)
	ea = -18752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// lwz r9,432(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r23,r10,4608
	ctx.r23.s64 = ctx.r10.s64 + 4608;
	// addi r25,r11,-26984
	ctx.r25.s64 = ctx.r11.s64 + -26984;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,8456(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// lwz r11,592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 592);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r29,32(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823c479c
	if (!ctx.cr6.lt) goto loc_823C479C;
	// addi r11,r29,8634
	ctx.r11.s64 = ctx.r29.s64 + 8634;
	// lis r27,-31799
	ctx.r27.s64 = -2083979264;
	// rlwinm r26,r11,6,0,25
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x823c4680
	goto loc_823C4680;
loc_823C467C:
	// lwz r10,8456(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
loc_823C4680:
	// lwz r10,32(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,14592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14592);
	// subf r30,r10,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r10.s64;
	// add r31,r26,r11
	ctx.r31.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mulli r10,r30,488
	ctx.r10.s64 = ctx.r30.s64 * 488;
	// lbzx r9,r26,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// addi r28,r11,5960
	ctx.r28.s64 = ctx.r11.s64 + 5960;
	// bne cr6,0x823c46b8
	if (!ctx.cr6.eq) goto loc_823C46B8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823c44e8
	ctx.lr = 0x823C46B4;
	sub_823C44E8(ctx, base);
	// b 0x823c46e0
	goto loc_823C46E0;
loc_823C46B8:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_823C46E0:
	// addi r11,r1,2288
	ctx.r11.s64 = ctx.r1.s64 + 2288;
	// addi r10,r1,10480
	ctx.r10.s64 = ctx.r1.s64 + 10480;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x823b8590
	ctx.lr = 0x823C46F8;
	sub_823B8590(ctx, base);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c4724
	if (!ctx.cr6.eq) goto loc_823C4724;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,2288
	ctx.r4.s64 = ctx.r1.s64 + 2288;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823c42f8
	ctx.lr = 0x823C4718;
	sub_823C42F8(ctx, base);
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r5,r11,17552
	ctx.r5.s64 = ctx.r11.s64 + 17552;
	// b 0x823c4760
	goto loc_823C4760;
loc_823C4724:
	// addi r10,r30,1979
	ctx.r10.s64 = ctx.r30.s64 + 1979;
	// lwz r11,14592(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14592);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,2288
	ctx.r5.s64 = ctx.r1.s64 + 2288;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x823c4390
	ctx.lr = 0x823C474C;
	sub_823C4390(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r25,4
	ctx.r4.s64 = ctx.r25.s64 + 4;
	// bl 0x823c4098
	ctx.lr = 0x823C4758;
	sub_823C4098(ctx, base);
	// lis r8,-32196
	ctx.r8.s64 = -2109997056;
	// addi r5,r8,17568
	ctx.r5.s64 = ctx.r8.s64 + 17568;
loc_823C4760:
	// li r7,1024
	ctx.r7.s64 = 1024;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,10480
	ctx.r4.s64 = ctx.r1.s64 + 10480;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b8690
	ctx.lr = 0x823C4774;
	sub_823B8690(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823b4350
	ctx.lr = 0x823C4788;
	sub_823B4350(ctx, base);
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c467c
	if (ctx.cr6.lt) goto loc_823C467C;
loc_823C479C:
	// addi r1,r1,18752
	ctx.r1.s64 = ctx.r1.s64 + 18752;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C4620) {
	__imp__sub_823C4620(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C47A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C47A4) {
	__imp__sub_823C47A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C47A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823C47B0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r15,r11,4608
	ctx.r15.s64 = ctx.r11.s64 + 4608;
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// lis r14,-31799
	ctx.r14.s64 = -2083979264;
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
	// lwz r31,32(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c4834
	if (!ctx.cr6.lt) goto loc_823C4834;
	// addi r11,r31,8634
	ctx.r11.s64 = ctx.r31.s64 + 8634;
	// rlwinm r30,r11,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C47E8:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c4820
	if (!ctx.cr6.eq) goto loc_823C4820;
	// lwz r11,32(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x823c4098
	ctx.lr = 0x823C481C;
	sub_823C4098(ctx, base);
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C4820:
	// lwz r11,432(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 432);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c47e8
	if (ctx.cr6.lt) goto loc_823C47E8;
loc_823C4834:
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// addi r25,r10,24448
	ctx.r25.s64 = ctx.r10.s64 + 24448;
	// ori r7,r9,64936
	ctx.r7.u64 = ctx.r9.u64 | 64936;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r19,-31780
	ctx.r19.s64 = -2082734080;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r19,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// lwzx r21,r25,r7
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// lfs f31,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823c4a68
	if (ctx.cr6.eq) goto loc_823C4A68;
	// addis r10,r25,7
	ctx.r10.s64 = ctx.r25.s64 + 458752;
	// addi r27,r10,-588
	ctx.r27.s64 = ctx.r10.s64 + -588;
loc_823C486C:
	// addis r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 524288;
	// addi r10,r10,-3724
	ctx.r10.s64 = ctx.r10.s64 + -3724;
	// lbzx r9,r22,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823c4a58
	if (!ctx.cr6.eq) goto loc_823C4A58;
	// lwz r26,32(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r23,r27,44
	ctx.r23.s64 = ctx.r27.s64 + 44;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c4a58
	if (!ctx.cr6.lt) goto loc_823C4A58;
	// addi r11,r26,8634
	ctx.r11.s64 = ctx.r26.s64 + 8634;
	// rlwinm r24,r11,6,0,25
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C4898:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r28,r24,r11
	ctx.r28.u64 = ctx.r24.u64 + ctx.r11.u64;
	// subf r31,r10,r26
	ctx.r31.s64 = ctx.r26.s64 - ctx.r10.s64;
	// lbzx r9,r24,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c4928
	if (!ctx.cr6.eq) goto loc_823C4928;
	// lfs f0,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f5
	ctx.f12.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f8,f11,f11,f31
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f1
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bgt cr6,0x823c4a44
	if (ctx.cr6.gt) goto loc_823C4A44;
	// b 0x823c4974
	goto loc_823C4974;
loc_823C4928:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,108(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 108);
	// bl 0x821a1808
	ctx.lr = 0x823C4934;
	sub_821A1808(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c4a40
	if (!ctx.cr6.eq) goto loc_823C4A40;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823c3ce0
	ctx.lr = 0x823C495C;
	sub_823C3CE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c4a40
	if (ctx.cr6.eq) goto loc_823C4A40;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c4a40
	if (!ctx.cr6.eq) goto loc_823C4A40;
loc_823C4974:
	// addis r11,r25,6
	ctx.r11.s64 = ctx.r25.s64 + 393216;
	// mulli r29,r31,8200
	ctx.r29.s64 = ctx.r31.s64 * 8200;
	// addi r11,r11,22904
	ctx.r11.s64 = ctx.r11.s64 + 22904;
	// li r4,24
	ctx.r4.s64 = 24;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r6,r31,8200
	ctx.r6.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82388060
	ctx.lr = 0x823C49A8;
	sub_82388060(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823c4a40
	if (!ctx.cr6.eq) goto loc_823C4A40;
	// lwz r11,12848(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12848);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4a40
	if (ctx.cr6.eq) goto loc_823C4A40;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4a40
	if (ctx.cr6.eq) goto loc_823C4A40;
	// lwz r11,104(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c4a40
	if (!ctx.cr6.eq) goto loc_823C4A40;
	// addis r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 458752;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r31,8200
	ctx.r6.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82388060
	ctx.lr = 0x823C4A2C;
	sub_82388060(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_823C4A40:
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C4A44:
	// lwz r11,432(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 432);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c4898
	if (ctx.cr6.lt) goto loc_823C4898;
loc_823C4A58:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r27,r27,120
	ctx.r27.s64 = ctx.r27.s64 + 120;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823c486c
	if (ctx.cr6.lt) goto loc_823C486C;
loc_823C4A68:
	// lis r10,7
	ctx.r10.s64 = 458752;
	// li r22,0
	ctx.r22.s64 = 0;
	// ori r9,r10,65408
	ctx.r9.u64 = ctx.r10.u64 | 65408;
	// lwzx r21,r25,r9
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823c4c30
	if (ctx.cr6.eq) goto loc_823C4C30;
	// addis r10,r25,8
	ctx.r10.s64 = ctx.r25.s64 + 524288;
	// addi r24,r10,-88
	ctx.r24.s64 = ctx.r10.s64 + -88;
loc_823C4A88:
	// addis r10,r25,9
	ctx.r10.s64 = ctx.r25.s64 + 589824;
	// addi r10,r10,8076
	ctx.r10.s64 = ctx.r10.s64 + 8076;
	// lbzx r9,r22,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823c4c20
	if (!ctx.cr6.eq) goto loc_823C4C20;
	// lwz r26,32(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r27,r24,-28
	ctx.r27.s64 = ctx.r24.s64 + -28;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c4c20
	if (!ctx.cr6.lt) goto loc_823C4C20;
	// addi r11,r26,8634
	ctx.r11.s64 = ctx.r26.s64 + 8634;
	// rlwinm r23,r11,6,0,25
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C4AB4:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r28,r23,r11
	ctx.r28.u64 = ctx.r23.u64 + ctx.r11.u64;
	// subf r7,r10,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r10.s64;
	// lbzx r9,r23,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c4b1c
	if (!ctx.cr6.eq) goto loc_823C4B1C;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f0,f9,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f5,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x823c4c0c
	if (ctx.cr6.gt) goto loc_823C4C0C;
	// b 0x823c4b44
	goto loc_823C4B44;
loc_823C4B1C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f1,20(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823c3d70
	ctx.lr = 0x823C4B3C;
	sub_823C3D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c4c0c
	if (ctx.cr6.eq) goto loc_823C4C0C;
loc_823C4B44:
	// addis r11,r25,6
	ctx.r11.s64 = ctx.r25.s64 + 393216;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mulli r29,r7,8200
	ctx.r29.s64 = ctx.r7.s64 * 8200;
	// addi r11,r11,22904
	ctx.r11.s64 = ctx.r11.s64 + 22904;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387d00
	ctx.lr = 0x823C4B7C;
	sub_82387D00(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// bne cr6,0x823c4c08
	if (!ctx.cr6.eq) goto loc_823C4C08;
	// lwz r11,12848(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12848);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4c08
	if (ctx.cr6.eq) goto loc_823C4C08;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4c08
	if (ctx.cr6.eq) goto loc_823C4C08;
	// addis r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 458752;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387d00
	ctx.lr = 0x823C4BF4;
	sub_82387D00(ctx, base);
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_823C4C08:
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C4C0C:
	// lwz r11,432(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 432);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,64
	ctx.r23.s64 = ctx.r23.s64 + 64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c4ab4
	if (ctx.cr6.lt) goto loc_823C4AB4;
loc_823C4C20:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r24,r24,72
	ctx.r24.s64 = ctx.r24.s64 + 72;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x823c4a88
	if (ctx.cr6.lt) goto loc_823C4A88;
loc_823C4C30:
	// lis r9,9
	ctx.r9.s64 = 589824;
	// lwz r18,672(r8)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 672);
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// ori r7,r9,41364
	ctx.r7.u64 = ctx.r9.u64 | 41364;
	// addi r16,r10,23040
	ctx.r16.s64 = ctx.r10.s64 + 23040;
	// lwzx r10,r25,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r7.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c4e28
	if (ctx.cr6.eq) goto loc_823C4E28;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
loc_823C4C58:
	// lwz r10,512(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// add r26,r10,r19
	ctx.r26.u64 = ctx.r10.u64 + ctx.r19.u64;
	// lhz r24,4(r26)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// lbzx r10,r24,r18
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r18.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823c4e1c
	if (!ctx.cr6.eq) goto loc_823C4E1C;
	// lwz r23,32(r8)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// rlwinm r9,r24,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,180(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 180);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// add r20,r9,r10
	ctx.r20.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bge cr6,0x823c4e1c
	if (!ctx.cr6.lt) goto loc_823C4E1C;
	// addi r11,r23,8634
	ctx.r11.s64 = ctx.r23.s64 + 8634;
	// addi r21,r20,16
	ctx.r21.s64 = ctx.r20.s64 + 16;
	// rlwinm r22,r11,6,0,25
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C4C94:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r27,r22,r11
	ctx.r27.u64 = ctx.r22.u64 + ctx.r11.u64;
	// subf r7,r10,r23
	ctx.r7.s64 = ctx.r23.s64 - ctx.r10.s64;
	// lbzx r9,r22,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c4cfc
	if (!ctx.cr6.eq) goto loc_823C4CFC;
	// lfs f0,8(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,4(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,28(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f3,f3
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmadds f0,f9,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f13,f5,f5,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bgt cr6,0x823c4e04
	if (ctx.cr6.gt) goto loc_823C4E04;
	// b 0x823c4d24
	goto loc_823C4D24;
loc_823C4CFC:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f1,28(r20)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823c3d70
	ctx.lr = 0x823C4D1C;
	sub_823C3D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c4e04
	if (ctx.cr6.eq) goto loc_823C4E04;
loc_823C4D24:
	// addis r10,r25,6
	ctx.r10.s64 = ctx.r25.s64 + 393216;
	// lwz r11,172(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 172);
	// mulli r29,r7,8200
	ctx.r29.s64 = ctx.r7.s64 * 8200;
	// addi r10,r10,22904
	ctx.r10.s64 = ctx.r10.s64 + 22904;
	// mulli r28,r24,92
	ctx.r28.s64 = ctx.r24.s64 * 92;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwzx r10,r29,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387d00
	ctx.lr = 0x823C4D68;
	sub_82387D00(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lbz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823c4e00
	if (!ctx.cr6.eq) goto loc_823C4E00;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,12848(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12848);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c4e00
	if (ctx.cr6.eq) goto loc_823C4E00;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4e00
	if (ctx.cr6.eq) goto loc_823C4E00;
	// lwz r11,172(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 172);
	// addis r10,r25,7
	ctx.r10.s64 = ctx.r25.s64 + 458752;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r10,r10,-9832
	ctx.r10.s64 = ctx.r10.s64 + -9832;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387d00
	ctx.lr = 0x823C4DEC;
	sub_82387D00(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_823C4E00:
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C4E04:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,64
	ctx.r22.s64 = ctx.r22.s64 + 64;
	// lwz r11,432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 432);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c4c94
	if (ctx.cr6.lt) goto loc_823C4C94;
loc_823C4E1C:
	// addic. r17,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r17.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// addi r19,r19,6
	ctx.r19.s64 = ctx.r19.s64 + 6;
	// bne 0x823c4c58
	if (!ctx.cr0.eq) goto loc_823C4C58;
loc_823C4E28:
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lwz r19,84(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,80(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r9,r10,15244
	ctx.r9.u64 = ctx.r10.u64 | 15244;
	// lwzx r20,r25,r9
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x823c5020
	if (ctx.cr6.eq) goto loc_823C5020;
	// addis r10,r25,9
	ctx.r10.s64 = ctx.r25.s64 + 589824;
	// addi r27,r10,15256
	ctx.r27.s64 = ctx.r10.s64 + 15256;
loc_823C4E50:
	// addis r10,r25,10
	ctx.r10.s64 = ctx.r25.s64 + 655360;
	// addi r10,r10,-29804
	ctx.r10.s64 = ctx.r10.s64 + -29804;
	// lbzx r9,r21,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x823c5010
	if (!ctx.cr6.eq) goto loc_823C5010;
	// lwz r24,32(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// addi r26,r27,-4
	ctx.r26.s64 = ctx.r27.s64 + -4;
	// lwz r22,0(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c5010
	if (!ctx.cr6.lt) goto loc_823C5010;
	// addi r11,r24,8634
	ctx.r11.s64 = ctx.r24.s64 + 8634;
	// rlwinm r23,r11,6,0,25
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C4E80:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r28,r23,r11
	ctx.r28.u64 = ctx.r23.u64 + ctx.r11.u64;
	// subf r7,r10,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r10.s64;
	// lbzx r9,r23,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c4f10
	if (!ctx.cr6.eq) goto loc_823C4F10;
	// lfs f0,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,16(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f5
	ctx.f12.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f8,f11,f11,f31
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f1
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bgt cr6,0x823c4ffc
	if (ctx.cr6.gt) goto loc_823C4FFC;
	// b 0x823c4f34
	goto loc_823C4F34;
loc_823C4F10:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823c3ce0
	ctx.lr = 0x823C4F2C;
	sub_823C3CE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c4ffc
	if (ctx.cr6.eq) goto loc_823C4FFC;
loc_823C4F34:
	// addis r11,r25,6
	ctx.r11.s64 = ctx.r25.s64 + 393216;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mulli r29,r7,8200
	ctx.r29.s64 = ctx.r7.s64 * 8200;
	// addi r11,r11,22904
	ctx.r11.s64 = ctx.r11.s64 + 22904;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387ae0
	ctx.lr = 0x823C4F6C;
	sub_82387AE0(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lbz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823c4ff8
	if (!ctx.cr6.eq) goto loc_823C4FF8;
	// lwz r11,12848(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12848);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4ff8
	if (ctx.cr6.eq) goto loc_823C4FF8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c4ff8
	if (ctx.cr6.eq) goto loc_823C4FF8;
	// addis r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 458752;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387ae0
	ctx.lr = 0x823C4FE4;
	sub_82387AE0(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_823C4FF8:
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C4FFC:
	// lwz r11,432(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 432);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,64
	ctx.r23.s64 = ctx.r23.s64 + 64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c4e80
	if (ctx.cr6.lt) goto loc_823C4E80;
loc_823C5010:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x823c4e50
	if (ctx.cr6.lt) goto loc_823C4E50;
loc_823C5020:
	// lis r11,9
	ctx.r11.s64 = 589824;
	// lwz r21,684(r8)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r8.u32 + 684);
	// ori r10,r11,41368
	ctx.r10.u64 = ctx.r11.u64 | 41368;
	// lwzx r11,r25,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c5228
	if (ctx.cr6.eq) goto loc_823C5228;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_823C5040:
	// lwz r11,516(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 516);
	// add r26,r11,r22
	ctx.r26.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lhz r11,2(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// lbzx r10,r11,r21
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r21.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x823c521c
	if (!ctx.cr6.eq) goto loc_823C521C;
	// lwz r10,176(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 176);
	// mulli r11,r11,92
	ctx.r11.s64 = ctx.r11.s64 * 92;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// bl 0x823862b0
	ctx.lr = 0x823C506C;
	sub_823862B0(ctx, base);
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,432(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 432);
	// lwz r24,32(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823c521c
	if (!ctx.cr6.lt) goto loc_823C521C;
	// addi r11,r24,8634
	ctx.r11.s64 = ctx.r24.s64 + 8634;
	// rlwinm r23,r11,6,0,25
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C508C:
	// lwz r11,14592(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 14592);
	// lwz r10,32(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// add r27,r23,r11
	ctx.r27.u64 = ctx.r23.u64 + ctx.r11.u64;
	// subf r7,r10,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r10.s64;
	// lbzx r9,r23,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// bne cr6,0x823c511c
	if (!ctx.cr6.eq) goto loc_823C511C;
	// lfs f0,28(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,40(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f2
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fabs f0,f12
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f13,f9
	ctx.f13.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fabs f12,f5
	ctx.f12.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// fsubs f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f9,f12,f3
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f3.f64));
	// fsel f8,f11,f11,f31
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// fsel f7,f10,f10,f31
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f10.f64 : ctx.f31.f64;
	// fsel f6,f9,f9,f31
	ctx.f6.f64 = ctx.f9.f64 >= 0.0 ? ctx.f9.f64 : ctx.f31.f64;
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f4,f7,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f1
	ctx.cr6.compare(ctx.f3.f64, ctx.f1.f64);
	// bgt cr6,0x823c5208
	if (ctx.cr6.gt) goto loc_823C5208;
	// b 0x823c5140
	goto loc_823C5140;
loc_823C511C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823c3ce0
	ctx.lr = 0x823C5138;
	sub_823C3CE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c5208
	if (ctx.cr6.eq) goto loc_823C5208;
loc_823C5140:
	// addis r11,r25,6
	ctx.r11.s64 = ctx.r25.s64 + 393216;
	// mulli r29,r7,8200
	ctx.r29.s64 = ctx.r7.s64 * 8200;
	// addi r11,r11,22904
	ctx.r11.s64 = ctx.r11.s64 + 22904;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387ae0
	ctx.lr = 0x823C5178;
	sub_82387AE0(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lbz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x823c5204
	if (!ctx.cr6.eq) goto loc_823C5204;
	// lwz r11,12848(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12848);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c5204
	if (ctx.cr6.eq) goto loc_823C5204;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13004);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c5204
	if (ctx.cr6.eq) goto loc_823C5204;
	// addis r11,r25,7
	ctx.r11.s64 = ctx.r25.s64 + 458752;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,-9832
	ctx.r11.s64 = ctx.r11.s64 + -9832;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r31,r29,r11
	ctx.r31.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r7,r31,8200
	ctx.r7.s64 = ctx.r31.s64 + 8200;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82387ae0
	ctx.lr = 0x823C51F0;
	sub_82387AE0(ctx, base);
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r11,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 3;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
loc_823C5204:
	// lwz r8,8456(r15)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8456);
loc_823C5208:
	// lwz r11,432(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 432);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r23,r23,64
	ctx.r23.s64 = ctx.r23.s64 + 64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c508c
	if (ctx.cr6.lt) goto loc_823C508C;
loc_823C521C:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bne 0x823c5040
	if (!ctx.cr0.eq) goto loc_823C5040;
loc_823C5228:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C47A8) {
	__imp__sub_823C47A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C5234) {
	__imp__sub_823C5234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5238) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x823c524c
	if (ctx.cr6.eq) goto loc_823C524C;
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_823C524C:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lbz r10,8468(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8468);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x823c52b0
	if (ctx.cr6.eq) goto loc_823C52B0;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12848(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12848);
	// lbz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c52b0
	if (ctx.cr6.eq) goto loc_823C52B0;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r10,1352
	ctx.r8.s64 = ctx.r10.s64 + 1352;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// slw r4,r5,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r3,r6,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// and r11,r4,r3
	ctx.r11.u64 = ctx.r4.u64 & ctx.r3.u64;
	// li r3,25
	ctx.r3.s64 = 25;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_823C52B0:
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C5238) {
	__imp__sub_823C5238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C52B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823C52C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,432(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r21,r11,4608
	ctx.r21.s64 = ctx.r11.s64 + 4608;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,8456(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8456);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823c5400
	if (!ctx.cr6.lt) goto loc_823C5400;
	// addi r10,r31,8634
	ctx.r10.s64 = ctx.r31.s64 + 8634;
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r27,r10,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// lis r20,-31780
	ctx.r20.s64 = -2082734080;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// addi r26,r10,24448
	ctx.r26.s64 = ctx.r10.s64 + 24448;
	// b 0x823c530c
	goto loc_823C530C;
loc_823C5308:
	// lwz r11,8456(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8456);
loc_823C530C:
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addis r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 393216;
	// addis r9,r26,6
	ctx.r9.s64 = ctx.r26.s64 + 393216;
	// lwz r10,14592(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// subf r19,r8,r31
	ctx.r19.s64 = ctx.r31.s64 - ctx.r8.s64;
	// addi r7,r11,22904
	ctx.r7.s64 = ctx.r11.s64 + 22904;
	// mulli r11,r19,8200
	ctx.r11.s64 = ctx.r19.s64 * 8200;
	// lwzx r28,r11,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r9,r9,22912
	ctx.r9.s64 = ctx.r9.s64 + 22912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r30,r27,r10
	ctx.r30.u64 = ctx.r27.u64 + ctx.r10.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823ce698
	ctx.lr = 0x823C5344;
	sub_823CE698(ctx, base);
	// lwz r10,14592(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// mulli r11,r19,488
	ctx.r11.s64 = ctx.r19.s64 * 488;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r6,2
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 2, ctx.xer);
	// addi r5,r11,5960
	ctx.r5.s64 = ctx.r11.s64 + 5960;
	// beq cr6,0x823c5368
	if (ctx.cr6.eq) goto loc_823C5368;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x823c53b8
	goto loc_823C53B8;
loc_823C5368:
	// lwz r11,8456(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8456);
	// lbz r9,8468(r24)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r24.u32 + 8468);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// beq cr6,0x823c53b4
	if (ctx.cr6.eq) goto loc_823C53B4;
	// lwz r9,12848(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 12848);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c53b4
	if (ctx.cr6.eq) goto loc_823C53B4;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addi r9,r9,1352
	ctx.r9.s64 = ctx.r9.s64 + 1352;
	// slw r8,r22,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,25
	ctx.r11.s64 = 25;
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823c53b8
	if (!ctx.cr6.eq) goto loc_823C53B8;
loc_823C53B4:
	// li r11,23
	ctx.r11.s64 = 23;
loc_823C53B8:
	// stw r11,80(r5)
	PPC_STORE_U32(ctx.r5.u32 + 80, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r24,84(r5)
	PPC_STORE_U32(ctx.r5.u32 + 84, ctx.r24.u32);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f13,4(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 96, temp.u32);
	// stw r31,100(r5)
	PPC_STORE_U32(ctx.r5.u32 + 100, ctx.r31.u32);
	// stw r22,104(r5)
	PPC_STORE_U32(ctx.r5.u32 + 104, ctx.r22.u32);
	// bl 0x823c5708
	ctx.lr = 0x823C53EC;
	sub_823C5708(ctx, base);
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c5308
	if (ctx.cr6.lt) goto loc_823C5308;
loc_823C5400:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C52B8) {
	__imp__sub_823C52B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5408) {
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
	// lbz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
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
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,4(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// fmr f1,f8
	ctx.f1.f64 = ctx.f8.f64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x8239ede8
	ctx.lr = 0x823C54BC;
	sub_8239EDE8(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239ede8
	ctx.lr = 0x823C54C8;
	sub_8239EDE8(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239ede8
	ctx.lr = 0x823C54D4;
	sub_8239EDE8(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
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

PPC_WEAK_FUNC(sub_823C5408) {
	__imp__sub_823C5408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C54EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C54EC) {
	__imp__sub_823C54EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C54F0) {
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
	ctx.lr = 0x823C5508;
	__savefpr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,13180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13180);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c5548
	if (!ctx.cr6.eq) goto loc_823C5548;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// stfs f13,580(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 580, temp.u32);
	// stfs f0,584(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 584, temp.u32);
	// stfs f0,588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 588, temp.u32);
	// b 0x823c56d4
	goto loc_823C56D4;
loc_823C5548:
	// lwz r11,1340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1340);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,5500
	ctx.r30.s64 = ctx.r11.s64 + 5500;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x823c5408
	ctx.lr = 0x823C5560;
	sub_823C5408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,592(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 592, temp.u32);
	// stfs f13,596(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 596, temp.u32);
	// stfs f12,600(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 600, temp.u32);
	// stfs f11,604(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 604, temp.u32);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// stfs f10,608(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 608, temp.u32);
	// stfs f9,612(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 612, temp.u32);
	// stfs f8,616(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 616, temp.u32);
	// stfs f7,620(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 620, temp.u32);
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f6,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fneg f28,f6
	ctx.f28.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lfs f5,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// lfs f3,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f31,f3
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// lfs f27,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// stfs f27,576(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f2,580(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// stfs f28,584(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 584, temp.u32);
	// stfs f4,588(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// lbz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c56d4
	if (ctx.cr6.eq) goto loc_823C56D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823C55F8;
	sub_823DE800(ctx, base);
	// lfs f13,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// frsp f29,f1
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmuls f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x823de800
	ctx.lr = 0x823C5608;
	sub_823DE800(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x823c5620
	if (!ctx.cr6.gt) goto loc_823C5620;
	// fsubs f0,f29,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f30.f64));
	// fdivs f29,f31,f0
	ctx.f29.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// b 0x823c5628
	goto loc_823C5628;
loc_823C5620:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,-14540(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f29.f64 = double(temp.f32);
loc_823C5628:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// fmadds f10,f12,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f9,f11,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f31,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f8.f64;
	// fdivs f5,f31,f6
	ctx.f5.f64 = double(float(ctx.f31.f64 / ctx.f6.f64));
	// fmuls f31,f5,f12
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fmuls f26,f5,f0
	ctx.f26.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f25,f5,f11
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// bl 0x823c5408
	ctx.lr = 0x823C566C;
	sub_823C5408(ctx, base);
	// lfs f4,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f28
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// stfs f3,624(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stfs f30,628(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 628, temp.u32);
	// stfs f29,632(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 632, temp.u32);
	// stfs f28,636(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 636, temp.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f2,640(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 640, temp.u32);
	// stfs f1,644(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 644, temp.u32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stfs f13,652(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 652, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// stfs f12,656(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 656, temp.u32);
	// stfs f11,660(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 660, temp.u32);
	// stfs f10,664(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 664, temp.u32);
	// stfs f9,668(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 668, temp.u32);
	// stfs f31,672(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// stfs f26,676(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// stfs f25,680(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
	// stfs f27,684(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
loc_823C56D4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x823C56E0;
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

PPC_WEAK_FUNC(sub_823C54F0) {
	__imp__sub_823C54F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C56F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C56F4) {
	__imp__sub_823C56F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C56F8) {
	PPC_FUNC_PROLOGUE();
	// li r5,488
	ctx.r5.s64 = 488;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C56F8) {
	__imp__sub_823C56F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C5704) {
	__imp__sub_823C5704(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5708) {
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
	// lis r31,-31799
	ctx.r31.s64 = -2083979264;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,14592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r8,5440(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 5440);
	// add r30,r8,r4
	ctx.r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,16384
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16384, ctx.xer);
	// bgt cr6,0x823c5780
	if (ctx.cr6.gt) goto loc_823C5780;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r4,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r4.u32);
	// rlwinm r5,r4,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r11,r11,52688
	ctx.r11.u64 = ctx.r11.u64 | 52688;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r6,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r6.u32);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// lwz r3,5440(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5440);
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822dd768
	ctx.lr = 0x823C5778;
	sub_822DD768(ctx, base);
	// lwz r11,14592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14592);
	// stw r30,5440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 5440, ctx.r30.u32);
loc_823C5780:
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

PPC_WEAK_FUNC(sub_823C5708) {
	__imp__sub_823C5708(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5798) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c5708
	sub_823C5708(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5798) {
	__imp__sub_823C5798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C579C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C579C) {
	__imp__sub_823C579C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C57A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C57A8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,268(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 268, temp.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,272(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 272, temp.u32);
	// addi r30,r4,268
	ctx.r30.s64 = ctx.r4.s64 + 268;
	// lfs f10,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,276(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r4,292
	ctx.r4.s64 = ctx.r4.s64 + 292;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d53f8
	ctx.lr = 0x823C57F0;
	sub_822D53F8(ctx, base);
	// lfs f8,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f7.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmsubs f3,f5,f4,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f6.f64));
	// stfs f3,280(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// lfs f2,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f11,f2,f1,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,284(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
	// lfs f10,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f5,288(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 288, temp.u32);
	// lfs f4,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,256(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// lfs f3,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,260(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// lfs f2,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,264(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// bl 0x822d7678
	ctx.lr = 0x823C5868;
	sub_822D7678(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r31,64
	ctx.r7.s64 = ctx.r31.s64 + 64;
	// lfs f13,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// fadds f3,f31,f0
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f13,308(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f13,24352(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24352);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,312(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// stfs f0,316(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lfs f1,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lfs f12,5804(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5804);
	ctx.f12.f64 = double(temp.f32);
	// fsel f9,f11,f13,f1
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsubs f10,f12,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lfs f4,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fsel f8,f10,f12,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fnmsubs f7,f8,f8,f0
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f8.f64 - ctx.f0.f64)));
	// fsqrts f6,f7
	ctx.f6.f64 = double(float(sqrt(ctx.f7.f64)));
	// fdivs f31,f6,f8
	ctx.f31.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822d73e0
	ctx.lr = 0x823C58D0;
	sub_822D73E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823878b0
	ctx.lr = 0x823C58D8;
	sub_823878B0(ctx, base);
	// lfs f5,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f5.f64 = double(temp.f32);
	// stfs f31,320(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 320, temp.u32);
	// stfs f31,324(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 324, temp.u32);
	// stfs f5,332(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C57A0) {
	__imp__sub_823C57A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C58F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C58F4) {
	__imp__sub_823C58F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C58F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r4,32
	ctx.r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r3,128
	ctx.r4.s64 = ctx.r3.s64 + 128;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f31,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r4,-8
	ctx.r11.s64 = ctx.r4.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fadds f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f30,f4,f31
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f29,f3,f31
	ctx.f29.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
loc_823C5980:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c5980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5980;
	// lfs f13,256(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f12,260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 260);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f10,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d6708
	ctx.lr = 0x823C59C0;
	sub_822D6708(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f0,f29
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f6,f13,f29
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f2,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f2.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,28(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fadds f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f11,60(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f3,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f3.f64 = double(temp.f32);
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f3,f30,f7
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f30.f64 + ctx.f7.f64));
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f7,f12,f30,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f5.f64));
	// lfs f10,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f2,f30,f6
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f30.f64 + ctx.f6.f64));
	// fmadds f5,f10,f30,f4
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f4.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f8,f31
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f3,40(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f2,56(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f7,36(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f5,52(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C58F8) {
	__imp__sub_823C58F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5AA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C5AA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d11b0
	ctx.lr = 0x823C5AC8;
	sub_823D11B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823c5af0
	if (!ctx.cr6.eq) goto loc_823C5AF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c5b58
	if (ctx.cr6.eq) goto loc_823C5B58;
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
loc_823C5AE4:
	// bl 0x82102540
	ctx.lr = 0x823C5AE8;
	sub_82102540(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823C5AF0:
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwsync 
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// lfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 + 44;
	// bl 0x822d9a88
	ctx.lr = 0x823C5B10;
	sub_822D9A88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// bne cr6,0x823c5ae4
	if (!ctx.cr6.eq) goto loc_823C5AE4;
	// bl 0x82102568
	ctx.lr = 0x823C5B28;
	sub_82102568(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823d1048
	ctx.lr = 0x823C5B40;
	sub_823D1048(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 3;
	// lwz r9,104(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r3,r9,19,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0xFFF;
	// bl 0x82398068
	ctx.lr = 0x823C5B58;
	sub_82398068(ctx, base);
loc_823C5B58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5AA0) {
	__imp__sub_823C5AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5B60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823C5B68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r30,r11,24448
	ctx.r30.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,64936
	ctx.r9.u64 = ctx.r10.u64 | 64936;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r22,r11,13312
	ctx.r22.s64 = ctx.r11.s64 + 13312;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823c5c14
	if (!ctx.cr6.gt) goto loc_823C5C14;
	// addis r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 + 458752;
	// addi r31,r11,-484
	ctx.r31.s64 = ctx.r11.s64 + -484;
loc_823C5BAC:
	// addi r11,r31,-104
	ctx.r11.s64 = ctx.r31.s64 + -104;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r10,r10,0,31,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c5bf8
	if (!ctx.cr6.eq) goto loc_823C5BF8;
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// rlwinm r4,r11,19,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823c5bf8
	if (ctx.cr6.eq) goto loc_823C5BF8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239e118
	ctx.lr = 0x823C5BE4;
	sub_8239E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c5bf8
	if (ctx.cr6.eq) goto loc_823C5BF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823b7ac8
	ctx.lr = 0x823C5BF8;
	sub_823B7AC8(ctx, base);
loc_823C5BF8:
	// lis r11,6
	ctx.r11.s64 = 393216;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// ori r10,r11,64936
	ctx.r10.u64 = ctx.r11.u64 | 64936;
	// addi r31,r31,120
	ctx.r31.s64 = ctx.r31.s64 + 120;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823c5bac
	if (ctx.cr6.lt) goto loc_823C5BAC;
loc_823C5C14:
	// lis r11,7
	ctx.r11.s64 = 458752;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r27,r11,65408
	ctx.r27.u64 = ctx.r11.u64 | 65408;
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c5ca0
	if (!ctx.cr6.gt) goto loc_823C5CA0;
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r11,-72
	ctx.r29.s64 = ctx.r11.s64 + -72;
loc_823C5C38:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// rlwinm r10,r10,0,31,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c5c8c
	if (!ctx.cr6.eq) goto loc_823C5C8C;
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// rlwinm r31,r11,19,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823c5c8c
	if (ctx.cr6.eq) goto loc_823C5C8C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8239e118
	ctx.lr = 0x823C5C6C;
	sub_8239E118(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c5c8c
	if (ctx.cr6.eq) goto loc_823C5C8C;
	// lwz r10,56(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// addis r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 655360;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,-24144
	ctx.r8.s64 = ctx.r11.s64 + -24144;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stbx r26,r7,r31
	PPC_STORE_U8(ctx.r7.u32 + ctx.r31.u32, ctx.r26.u8);
loc_823C5C8C:
	// lwzx r11,r30,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,72
	ctx.r29.s64 = ctx.r29.s64 + 72;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c5c38
	if (ctx.cr6.lt) goto loc_823C5C38;
loc_823C5CA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5B60) {
	__imp__sub_823C5B60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C5CB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x823b58f8
	ctx.lr = 0x823C5CC4;
	sub_823B58F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b40e0
	ctx.lr = 0x823C5CD4;
	sub_823B40E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82397d88
	ctx.lr = 0x823C5CE0;
	sub_82397D88(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5CA8) {
	__imp__sub_823C5CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823C5CF0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// lwz r10,8736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823c5da0
	if (!ctx.cr6.gt) goto loc_823C5DA0;
	// lis r10,-31809
	ctx.r10.s64 = -2084634624;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r10,24448
	ctx.r9.s64 = ctx.r10.s64 + 24448;
	// addi r31,r3,5256
	ctx.r31.s64 = ctx.r3.s64 + 5256;
	// addis r10,r9,6
	ctx.r10.s64 = ctx.r9.s64 + 393216;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r29,r10,20676
	ctx.r29.s64 = ctx.r10.s64 + 20676;
loc_823C5D2C:
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r26,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r26.u32);
	// stw r24,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r24.u32);
	// addi r27,r31,-96
	ctx.r27.s64 = ctx.r31.s64 + -96;
	// addi r10,r11,8752
	ctx.r10.s64 = ctx.r11.s64 + 8752;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,9188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9188);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x823c5798
	ctx.lr = 0x823C5D6C;
	sub_823C5798(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b01a8
	ctx.lr = 0x823C5D78;
	sub_823B01A8(ctx, base);
	// addi r4,r30,9
	ctx.r4.s64 = ctx.r30.s64 + 9;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82388b48
	ctx.lr = 0x823C5D84;
	sub_82388B48(ctx, base);
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,464
	ctx.r28.s64 = ctx.r28.s64 + 464;
	// addi r31,r31,488
	ctx.r31.s64 = ctx.r31.s64 + 488;
	// lwz r10,8736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823c5d2c
	if (ctx.cr6.lt) goto loc_823C5D2C;
loc_823C5DA0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5CE8) {
	__imp__sub_823C5CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5DA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C5DB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31799
	ctx.r28.s64 = -2083979264;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,14592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14592);
	// lwz r10,8736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x823c5e34
	if (!ctx.cr6.gt) goto loc_823C5E34;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
loc_823C5DD8:
	// lbz r29,9184(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 9184);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239d850
	ctx.lr = 0x823C5DE4;
	sub_8239D850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c5e18
	if (ctx.cr6.eq) goto loc_823C5E18;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b58f8
	ctx.lr = 0x823C5DFC;
	sub_823B58F8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823b40e0
	ctx.lr = 0x823C5E0C;
	sub_823B40E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82397d88
	ctx.lr = 0x823C5E18;
	sub_82397D88(ctx, base);
loc_823C5E18:
	// lwz r11,14592(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 14592);
	// addi r30,r30,464
	ctx.r30.s64 = ctx.r30.s64 + 464;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r10,r30,r11
	ctx.r10.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8736(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823c5dd8
	if (ctx.cr6.lt) goto loc_823C5DD8;
loc_823C5E34:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c5ce8
	ctx.lr = 0x823C5E3C;
	sub_823C5CE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5DA8) {
	__imp__sub_823C5DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C5E44) {
	__imp__sub_823C5E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C5E48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823C5E50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r8,r11,13536
	ctx.r8.s64 = ctx.r11.s64 + 13536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,8736(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8736);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// mulli r10,r30,464
	ctx.r10.s64 = ctx.r30.s64 * 464;
	// stw r7,8736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8736, ctx.r7.u32);
	// stw r30,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r30.u32);
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stfs f1,8816(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8816, temp.u32);
	// addi r31,r11,8752
	ctx.r31.s64 = ctx.r11.s64 + 8752;
	// stb r5,9184(r11)
	PPC_STORE_U8(ctx.r11.u32 + 9184, ctx.r5.u8);
	// stw r4,9188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 9188, ctx.r4.u32);
	// lwz r11,912(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823c5ec0
	if (ctx.cr6.eq) goto loc_823C5EC0;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x823c5ec0
	if (!ctx.cr6.lt) goto loc_823C5EC0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r26,2
	ctx.r26.s64 = 2;
	// b 0x823c5ecc
	goto loc_823C5ECC;
loc_823C5EC0:
	// li r11,512
	ctx.r11.s64 = 512;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r26,4
	ctx.r26.s64 = 4;
loc_823C5ECC:
	// mullw r9,r26,r11
	ctx.r9.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r11.s32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r4,r6,-26624
	ctx.r4.s64 = ctx.r6.s64 + -26624;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// lfs f11,29548(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29548);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f2,f6,f11
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lwzx r6,r5,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stw r10,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r10.u32);
	// lfs f12,5880(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5880);
	ctx.f12.f64 = double(temp.f32);
	// stw r6,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r6.u32);
	// lfs f13,2416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,448(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f5,444(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,452(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f2,456(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// bl 0x8239d850
	ctx.lr = 0x823C5F80;
	sub_8239D850(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c5f94
	if (ctx.cr6.eq) goto loc_823C5F94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823c5fa8
	goto loc_823C5FA8;
loc_823C5F94:
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r9,r11,24448
	ctx.r9.s64 = ctx.r11.s64 + 24448;
	// ori r8,r10,22892
	ctx.r8.u64 = ctx.r10.u64 | 22892;
	// lfsx f1,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
loc_823C5FA8:
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823c57a0
	ctx.lr = 0x823C5FB8;
	sub_823C57A0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c58f8
	ctx.lr = 0x823C5FCC;
	sub_823C58F8(ctx, base);
	// mulli r11,r30,488
	ctx.r11.s64 = ctx.r30.s64 * 488;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r31,r11,5160
	ctx.r31.s64 = ctx.r11.s64 + 5160;
	// addi r5,r10,-12232
	ctx.r5.s64 = ctx.r10.s64 + -12232;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c56f8
	ctx.lr = 0x823C5FEC;
	sub_823C56F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8239d850
	ctx.lr = 0x823C5FF4;
	sub_8239D850(ctx, base);
	// lwz r11,14592(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14592);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c6018
	if (ctx.cr6.eq) goto loc_823C6018;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,5388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5388);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823c5b60
	ctx.lr = 0x823C6010;
	sub_823C5B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_823C6018:
	// lwz r10,7920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7920);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c6028
	if (ctx.cr6.eq) goto loc_823C6028;
	// stw r31,7916(r11)
	PPC_STORE_U32(ctx.r11.u32 + 7916, ctx.r31.u32);
loc_823C6028:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C5E48) {
	__imp__sub_823C5E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6030) {
	PPC_FUNC_PROLOGUE();
	// lis r3,6690
	ctx.r3.s64 = 438435840;
	// ori r3,r3,407
	ctx.r3.u64 = ctx.r3.u64 | 407;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6030) {
	__imp__sub_823C6030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C603C) {
	__imp__sub_823C603C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// bne cr6,0x823c6058
	if (!ctx.cr6.eq) goto loc_823C6058;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823c605c
	goto loc_823C605C;
loc_823C6058:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823C605C:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823c6074
	if (!ctx.cr6.eq) goto loc_823C6074;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_823C6074:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6040) {
	__imp__sub_823C6040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6080) {
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
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// add r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r31,r11,-26624
	ctx.r31.s64 = ctx.r11.s64 + -26624;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,5
	ctx.r11.s64 = 5;
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823C60CC:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823c60cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C60CC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c60ec
	if (ctx.cr6.eq) goto loc_823C60EC;
	// bl 0x820c6cd0
	ctx.lr = 0x823C60EC;
	sub_820C6CD0(ctx, base);
loc_823C60EC:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c6100
	if (ctx.cr6.eq) goto loc_823C6100;
	// bl 0x820c6cd0
	ctx.lr = 0x823C6100;
	sub_820C6CD0(ctx, base);
loc_823C6100:
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

PPC_WEAK_FUNC(sub_823C6080) {
	__imp__sub_823C6080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C6120;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// lwz r11,1208(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c615c
	if (!ctx.cr6.eq) goto loc_823C615C;
	// lwz r11,1200(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c6170
	if (!ctx.cr6.eq) goto loc_823C6170;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r10,r11,-26624
	ctx.r10.s64 = ctx.r11.s64 + -26624;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,1208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1208, ctx.r11.u32);
	// beq cr6,0x823c6170
	if (ctx.cr6.eq) goto loc_823C6170;
loc_823C615C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820c6cd0
	ctx.lr = 0x823C6164;
	sub_820C6CD0(ctx, base);
	// lwz r3,1208(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1208);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823C6170:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// bne cr6,0x823c6274
	if (!ctx.cr6.eq) goto loc_823C6274;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823C6184:
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823C6188:
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r11,r31,79
	ctx.r11.s64 = ctx.r31.s64 + 79;
	// addi r7,r30,15
	ctx.r7.s64 = ctx.r30.s64 + 15;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// rlwinm r10,r7,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r5,26
	ctx.r9.u64 = ctx.r5.u32 & 0x3F;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r7,r6,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r9,21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 21, ctx.xer);
	// beq cr6,0x823c61d0
	if (ctx.cr6.eq) goto loc_823C61D0;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// beq cr6,0x823c61d0
	if (ctx.cr6.eq) goto loc_823C61D0;
	// cmpwi cr6,r9,37
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 37, ctx.xer);
	// bne cr6,0x823c61d4
	if (!ctx.cr6.eq) goto loc_823C61D4;
loc_823C61D0:
	// li r8,8
	ctx.r8.s64 = 8;
loc_823C61D4:
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// mullw r9,r6,r7
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r11,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r6,r9,r8
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// li r4,5120
	ctx.r4.s64 = 5120;
	// mullw r3,r7,r10
	ctx.r3.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// divwu r11,r6,r4
	ctx.r11.u32 = ctx.r6.u32 / ctx.r4.u32;
	// clrlwi r10,r3,9
	ctx.r10.u64 = ctx.r3.u32 & 0x7FFFFF;
	// subfic r9,r11,2048
	ctx.xer.ca = ctx.r11.u32 <= 2048;
	ctx.r9.s64 = 2048 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// subfic r8,r10,3600
	ctx.xer.ca = ctx.r10.u32 <= 3600;
	ctx.r8.s64 = 3600 - ctx.r10.s64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C6224;
	sub_820CA538(ctx, base);
	// lis r7,-32761
	ctx.r7.s64 = -2147024896;
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// stw r3,1208(r29)
	PPC_STORE_U32(ctx.r29.u32 + 1208, ctx.r3.u32);
	// ori r4,r7,14
	ctx.r4.u64 = ctx.r7.u64 | 14;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823c626c
	if (!ctx.cr6.lt) goto loc_823C626C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8238dbc8
	ctx.lr = 0x823C624C;
	sub_8238DBC8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r4,r11,-11792
	ctx.r4.s64 = ctx.r11.s64 + -11792;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822830e8
	ctx.lr = 0x823C6268;
	sub_822830E8(ctx, base);
	// lwz r3,1208(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1208);
loc_823C626C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823C6274:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823c6184
	if (!ctx.cr6.eq) goto loc_823C6184;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823c6188
	goto loc_823C6188;
}

PPC_WEAK_FUNC(sub_823C6118) {
	__imp__sub_823C6118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6288) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823b26d8
	ctx.lr = 0x823C62A4;
	sub_823B26D8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823C6288) {
	__imp__sub_823C6288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C62BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C62BC) {
	__imp__sub_823C62BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C62C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C62C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x823b2510
	ctx.lr = 0x823C62E8;
	sub_823B2510(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r9,r11,-26624
	ctx.r9.s64 = ctx.r11.s64 + -26624;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// subf r7,r9,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r9.s64;
	// addi r11,r8,-2292
	ctx.r11.s64 = ctx.r8.s64 + -2292;
	// divw r10,r7,r10
	ctx.r10.s32 = ctx.r7.s32 / ctx.r10.s32;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x823b2550
	ctx.lr = 0x823C6320;
	sub_823B2550(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x823b26d8
	ctx.lr = 0x823C6328;
	sub_823B26D8(ctx, base);
	// clrlwi r8,r31,16
	ctx.r8.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r7,r30,16
	ctx.r7.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r3,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r3.u32);
	// stw r8,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r8.u32);
	// stw r7,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r7.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C62C0) {
	__imp__sub_823C62C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6344) {
	__imp__sub_823C6344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6348) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c62c0
	sub_823C62C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6348) {
	__imp__sub_823C6348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C634C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C634C) {
	__imp__sub_823C634C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823C6358;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,4520
	ctx.r11.s64 = ctx.r11.s64 + 4520;
	// bne cr6,0x823c6400
	if (!ctx.cr6.eq) goto loc_823C6400;
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_823C6384:
	// lwz r29,12(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823C6388:
	// sraw r11,r28,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x823c639c
	if (!ctx.cr6.gt) goto loc_823C639C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823C639C:
	// sraw r11,r29,r27
	temp.u32 = ctx.r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r29.s32 < 0) & (((ctx.r29.s32 >> temp.u32) << temp.u32) != ctx.r29.s32);
	ctx.r11.s64 = ctx.r29.s32 >> temp.u32;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c63b0
	if (ctx.cr6.gt) goto loc_823C63B0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C63B0:
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823c62c0
	ctx.lr = 0x823C63C8;
	sub_823C62C0(ctx, base);
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// bne cr6,0x823c6414
	if (!ctx.cr6.eq) goto loc_823C6414;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r31,r11,-26624
	ctx.r31.s64 = ctx.r11.s64 + -26624;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// bl 0x820c6cd0
	ctx.lr = 0x823C63E8;
	sub_820C6CD0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r11.u32);
	// bl 0x820c6cd0
	ctx.lr = 0x823C63F8;
	sub_820C6CD0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823C6400:
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r23,2
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 2, ctx.xer);
	// bne cr6,0x823c6384
	if (!ctx.cr6.eq) goto loc_823C6384;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823c6388
	goto loc_823C6388;
loc_823C6414:
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x823c6524
	if (!ctx.cr6.eq) goto loc_823C6524;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x823c6430
	if (ctx.cr6.eq) goto loc_823C6430;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// b 0x823c64f0
	goto loc_823C64F0;
loc_823C6430:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r28,79
	ctx.r10.s64 = ctx.r28.s64 + 79;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r8,r11,3224
	ctx.r8.s64 = ctx.r11.s64 + 3224;
	// divwu r11,r10,r7
	ctx.r11.u32 = ctx.r10.u32 / ctx.r7.u32;
	// addi r6,r29,15
	ctx.r6.s64 = ctx.r29.s64 + 15;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r6,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x823c647c
	if (ctx.cr6.eq) goto loc_823C647C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x823c647c
	if (ctx.cr6.eq) goto loc_823C647C;
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x823c6480
	if (!ctx.cr6.eq) goto loc_823C6480;
loc_823C647C:
	// li r10,8
	ctx.r10.s64 = 8;
loc_823C6480:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addi r8,r11,79
	ctx.r8.s64 = ctx.r11.s64 + 79;
	// mullw r4,r9,r10
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divwu r11,r8,r7
	ctx.r11.u32 = ctx.r8.u32 / ctx.r7.u32;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,5120
	ctx.r6.s64 = 5120;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r9,15
	ctx.r7.s64 = ctx.r9.s64 + 15;
	// divwu r4,r4,r6
	ctx.r4.u32 = ctx.r4.u32 / ctx.r6.u32;
	// clrlwi r10,r25,26
	ctx.r10.u64 = ctx.r25.u32 & 0x3F;
	// subfic r9,r4,2048
	ctx.xer.ca = ctx.r4.u32 <= 2048;
	ctx.r9.s64 = 2048 - ctx.r4.s64;
	// li r11,4
	ctx.r11.s64 = 4;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r7,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x823c64d8
	if (ctx.cr6.eq) goto loc_823C64D8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x823c64d8
	if (ctx.cr6.eq) goto loc_823C64D8;
	// cmpwi cr6,r10,37
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 37, ctx.xer);
	// bne cr6,0x823c64dc
	if (!ctx.cr6.eq) goto loc_823C64DC;
loc_823C64D8:
	// li r11,8
	ctx.r11.s64 = 8;
loc_823C64DC:
	// mullw r10,r7,r8
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divwu r7,r8,r6
	ctx.r7.u32 = ctx.r8.u32 / ctx.r6.u32;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
loc_823C64F0:
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x820ca538
	ctx.lr = 0x823C6514;
	sub_820CA538(ctx, base);
	// stw r3,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823c6118
	ctx.lr = 0x823C6520;
	sub_823C6118(ctx, base);
	// stw r3,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r3.u32);
loc_823C6524:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6350) {
	__imp__sub_823C6350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C652C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C652C) {
	__imp__sub_823C652C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C6538;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r30,r4,16
	ctx.r30.u64 = ctx.r4.u32 & 0xFFFF;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// addi r29,r11,3224
	ctx.r29.s64 = ctx.r11.s64 + 3224;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x823c62c0
	ctx.lr = 0x823C6568;
	sub_823C62C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C6598;
	sub_820CA538(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C65B4;
	sub_820CA538(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6530) {
	__imp__sub_823C6530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C65C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C65C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// addi r9,r11,3224
	ctx.r9.s64 = ctx.r11.s64 + 3224;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// clrlwi r8,r5,26
	ctx.r8.u64 = ctx.r5.u32 & 0x3F;
	// blt cr6,0x823c660c
	if (ctx.cr6.lt) goto loc_823C660C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C660C:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x823c6618
	if (!ctx.cr6.eq) goto loc_823C6618;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C6618:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// li r25,80
	ctx.r25.s64 = 80;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,21
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 21, ctx.xer);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// beq cr6,0x823c6650
	if (ctx.cr6.eq) goto loc_823C6650;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x823c6650
	if (ctx.cr6.eq) goto loc_823C6650;
	// cmpwi cr6,r8,37
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 37, ctx.xer);
	// bne cr6,0x823c6654
	if (!ctx.cr6.eq) goto loc_823C6654;
loc_823C6650:
	// li r7,8
	ctx.r7.s64 = 8;
loc_823C6654:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// li r26,5120
	ctx.r26.s64 = 5120;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// divwu r9,r10,r26
	ctx.r9.u32 = ctx.r10.u32 / ctx.r26.u32;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// subfic r8,r9,2048
	ctx.xer.ca = ctx.r9.u32 <= 2048;
	ctx.r8.s64 = 2048 - ctx.r9.s64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// blt cr6,0x823c6680
	if (ctx.cr6.lt) goto loc_823C6680;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C6680:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x823c668c
	if (!ctx.cr6.eq) goto loc_823C668C;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C668C:
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// rlwinm r8,r10,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r7,r9,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// li r29,0
	ctx.r29.s64 = 0;
	// mullw r6,r8,r7
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// clrlwi r4,r6,9
	ctx.r4.u64 = ctx.r6.u32 & 0x7FFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// subfic r3,r4,3600
	ctx.xer.ca = ctx.r4.u32 <= 3600;
	ctx.r3.s64 = 3600 - ctx.r4.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C66CC;
	sub_820CA538(ctx, base);
	// stw r3,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x823c66e4
	if (ctx.cr6.lt) goto loc_823C66E4;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C66E4:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bne cr6,0x823c66f0
	if (!ctx.cr6.eq) goto loc_823C66F0;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_823C66F0:
	// addi r11,r11,79
	ctx.r11.s64 = ctx.r11.s64 + 79;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r10,15
	ctx.r8.s64 = ctx.r10.s64 + 15;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// divwu r11,r11,r25
	ctx.r11.u32 = ctx.r11.u32 / ctx.r25.u32;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// rlwinm r4,r8,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,6184
	ctx.r5.s64 = 405274624;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mullw r10,r4,r11
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r5,r5,390
	ctx.r5.u64 = ctx.r5.u64 | 390;
	// divwu r3,r8,r26
	ctx.r3.u32 = ctx.r8.u32 / ctx.r26.u32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// subf r11,r3,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r3.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820ca538
	ctx.lr = 0x823C674C;
	sub_820CA538(ctx, base);
	// stw r3,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C65C0) {
	__imp__sub_823C65C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823C6760;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r30,r11,4520
	ctx.r30.s64 = ctx.r11.s64 + 4520;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r26,r10,3224
	ctx.r26.s64 = ctx.r10.s64 + 3224;
	// li r22,80
	ctx.r22.s64 = 80;
	// addi r31,r11,-26624
	ctx.r31.s64 = ctx.r11.s64 + -26624;
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r24,r28,79
	ctx.r24.s64 = ctx.r28.s64 + 79;
	// lwz r5,16(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// addi r25,r27,15
	ctx.r25.s64 = ctx.r27.s64 + 15;
	// divwu r11,r24,r22
	ctx.r11.u32 = ctx.r24.u32 / ctx.r22.u32;
	// clrlwi r7,r5,26
	ctx.r7.u64 = ctx.r5.u32 & 0x3F;
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// rlwinm r8,r25,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r25,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r7,21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 21, ctx.xer);
	// beq cr6,0x823c67d4
	if (ctx.cr6.eq) goto loc_823C67D4;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// beq cr6,0x823c67d4
	if (ctx.cr6.eq) goto loc_823C67D4;
	// cmpwi cr6,r7,37
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 37, ctx.xer);
	// bne cr6,0x823c67d8
	if (!ctx.cr6.eq) goto loc_823C67D8;
loc_823C67D4:
	// li r10,8
	ctx.r10.s64 = 8;
loc_823C67D8:
	// addi r7,r28,31
	ctx.r7.s64 = ctx.r28.s64 + 31;
	// mullw r6,r8,r11
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r4,r7,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r3,r6,r10
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// li r23,5120
	ctx.r23.s64 = 5120;
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// divwu r10,r3,r23
	ctx.r10.u32 = ctx.r3.u32 / ctx.r23.u32;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// subfic r8,r10,2048
	ctx.xer.ca = ctx.r10.u32 <= 2048;
	ctx.r8.s64 = 2048 - ctx.r10.s64;
	// subfic r6,r9,3600
	ctx.xer.ca = ctx.r9.u32 <= 3600;
	ctx.r6.s64 = 3600 - ctx.r9.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C6828;
	sub_820CA538(ctx, base);
	// divwu r11,r24,r22
	ctx.r11.u32 = ctx.r24.u32 / ctx.r22.u32;
	// rlwinm r5,r25,0,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFF0;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r21,r10,390
	ctx.r21.u64 = ctx.r10.u64 | 390;
	// mullw r8,r5,r9
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// divwu r5,r6,r23
	ctx.r5.u32 = ctx.r6.u32 / ctx.r23.u32;
	// li r6,0
	ctx.r6.s64 = 0;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820ca538
	ctx.lr = 0x823C6884;
	sub_820CA538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r6,1200(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1200);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823c65c0
	ctx.lr = 0x823C68A0;
	sub_823C65C0(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// lwz r6,1200(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1200);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823c65c0
	ctx.lr = 0x823C68B4;
	sub_823C65C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c68c8
	if (ctx.cr6.gt) goto loc_823C68C8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C68C8:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x823c68d8
	if (ctx.cr6.gt) goto loc_823C68D8;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823C68D8:
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r7,r31,100
	ctx.r7.s64 = ctx.r31.s64 + 100;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x823c62c0
	ctx.lr = 0x823C68EC;
	sub_823C62C0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// bl 0x820c6cd0
	ctx.lr = 0x823C68F8;
	sub_820C6CD0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// bl 0x820c6cd0
	ctx.lr = 0x823C6904;
	sub_820C6CD0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// bl 0x820c6cd0
	ctx.lr = 0x823C6910;
	sub_820C6CD0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6758) {
	__imp__sub_823C6758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823C6938;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823c6758
	ctx.lr = 0x823C6940;
	sub_823C6758(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lbz r10,14508(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14508);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c6c7c
	if (!ctx.cr6.eq) goto loc_823C6C7C;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r29,r11,4520
	ctx.r29.s64 = ctx.r11.s64 + 4520;
	// lwz r11,4520(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4520);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c6970
	if (ctx.cr6.gt) goto loc_823C6970;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C6970:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x823c6980
	if (ctx.cr6.gt) goto loc_823C6980;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823C6980:
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// addi r31,r11,-26624
	ctx.r31.s64 = ctx.r11.s64 + -26624;
	// ori r6,r6,407
	ctx.r6.u64 = ctx.r6.u64 | 407;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r7,r31,120
	ctx.r7.s64 = ctx.r31.s64 + 120;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823c62c0
	ctx.lr = 0x823C69A0;
	sub_823C62C0(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823c6080
	ctx.lr = 0x823C69AC;
	sub_823C6080(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r8,r31,260
	ctx.r8.s64 = ctx.r31.s64 + 260;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823c6350
	ctx.lr = 0x823C69C8;
	sub_823C6350(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c69dc
	if (ctx.cr6.gt) goto loc_823C69DC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C69DC:
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823c69f0
	if (!ctx.cr6.gt) goto loc_823C69F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823C69F0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x823c62c0
	ctx.lr = 0x823C6A04;
	sub_823C62C0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r6,r31,220
	ctx.r6.s64 = ctx.r31.s64 + 220;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823c6530
	ctx.lr = 0x823C6A18;
	sub_823C6530(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r6,r31,240
	ctx.r6.s64 = ctx.r31.s64 + 240;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823c6530
	ctx.lr = 0x823C6A2C;
	sub_823C6530(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823c6a48
	if (!ctx.cr6.gt) goto loc_823C6A48;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823C6A48:
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c6a5c
	if (ctx.cr6.gt) goto loc_823C6A5C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C6A5C:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r7,r31,140
	ctx.r7.s64 = ctx.r31.s64 + 140;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823c62c0
	ctx.lr = 0x823C6A78;
	sub_823C62C0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x820ca538
	ctx.lr = 0x823C6AA4;
	sub_820CA538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// bl 0x823c6118
	ctx.lr = 0x823C6AB4;
	sub_823C6118(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823c6ad4
	if (!ctx.cr6.gt) goto loc_823C6AD4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823C6AD4:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// clrlwi r4,r9,16
	ctx.r4.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c6ae8
	if (ctx.cr6.gt) goto loc_823C6AE8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C6AE8:
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r6,r6,407
	ctx.r6.u64 = ctx.r6.u64 | 407;
	// addi r7,r31,160
	ctx.r7.s64 = ctx.r31.s64 + 160;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823c62c0
	ctx.lr = 0x823C6B00;
	sub_823C62C0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823c6b1c
	if (!ctx.cr6.gt) goto loc_823C6B1C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_823C6B1C:
	// srawi r11,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 2;
	// clrlwi r28,r10,16
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c6b30
	if (ctx.cr6.gt) goto loc_823C6B30;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C6B30:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r7,r31,180
	ctx.r7.s64 = ctx.r31.s64 + 180;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823c62c0
	ctx.lr = 0x823C6B4C;
	sub_823C62C0(ctx, base);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x820ca538
	ctx.lr = 0x823C6B74;
	sub_820CA538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x823c6118
	ctx.lr = 0x823C6B84;
	sub_823C6118(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x823c6ba4
	if (!ctx.cr6.gt) goto loc_823C6BA4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_823C6BA4:
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// clrlwi r28,r9,16
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c6bb8
	if (ctx.cr6.gt) goto loc_823C6BB8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C6BB8:
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r7,r31,200
	ctx.r7.s64 = ctx.r31.s64 + 200;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823c62c0
	ctx.lr = 0x823C6BD4;
	sub_823C62C0(ctx, base);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// clrlwi r3,r28,16
	ctx.r3.u64 = ctx.r28.u32 & 0xFFFF;
	// bl 0x820ca538
	ctx.lr = 0x823C6BFC;
	sub_820CA538(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// bl 0x823c6118
	ctx.lr = 0x823C6C0C;
	sub_823C6118(ctx, base);
	// stw r3,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r3.u32);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820ca418
	ctx.lr = 0x823C6C38;
	sub_820CA418(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r31,r10,3224
	ctx.r31.s64 = ctx.r10.s64 + 3224;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r8,10280
	ctx.r8.s64 = 673710080;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,262
	ctx.r8.u64 = ctx.r8.u64 | 262;
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x820ca418
	ctx.lr = 0x823C6C70;
	sub_820CA418(ctx, base);
	// stw r3,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r3.u32);
	// bl 0x8238f158
	ctx.lr = 0x823C6C78;
	sub_8238F158(ctx, base);
	// bl 0x822e4fa0
	ctx.lr = 0x823C6C7C;
	sub_822E4FA0(ctx, base);
loc_823C6C7C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6930) {
	__imp__sub_823C6930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6C84) {
	__imp__sub_823C6C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6C88) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r4,r11,-11736
	ctx.r4.s64 = ctx.r11.s64 + -11736;
	// bl 0x82280900
	ctx.lr = 0x823C6CA4;
	sub_82280900(ctx, base);
	// bl 0x823c6930
	ctx.lr = 0x823C6CA8;
	sub_823C6930(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6C88) {
	__imp__sub_823C6C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6CB8) {
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
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r30,r11,-26624
	ctx.r30.s64 = ctx.r11.s64 + -26624;
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
loc_823C6CD8:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c6ce8
	if (ctx.cr6.eq) goto loc_823C6CE8;
	// bl 0x820c6d48
	ctx.lr = 0x823C6CE8;
	sub_820C6D48(ctx, base);
loc_823C6CE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c6cf8
	if (ctx.cr6.eq) goto loc_823C6CF8;
	// bl 0x820c6d48
	ctx.lr = 0x823C6CF8;
	sub_820C6D48(ctx, base);
loc_823C6CF8:
	// lwz r3,-8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c6d08
	if (ctx.cr6.eq) goto loc_823C6D08;
	// bl 0x823b2508
	ctx.lr = 0x823C6D08;
	sub_823B2508(ctx, base);
loc_823C6D08:
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823c6cd8
	if (ctx.cr6.lt) goto loc_823C6CD8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,280
	ctx.r5.s64 = 280;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x823C6D28;
	sub_823DE090(ctx, base);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,3224
	ctx.r9.s64 = ctx.r10.s64 + 3224;
	// stw r11,1208(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1208, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823C6CB8) {
	__imp__sub_823C6CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6D50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-2292
	ctx.r9.s64 = ctx.r11.s64 + -2292;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6D50) {
	__imp__sub_823C6D50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6D64) {
	__imp__sub_823C6D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6D68) {
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
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r10,23040
	ctx.r9.s64 = ctx.r10.s64 + 23040;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x8227a738
	ctx.lr = 0x823C6DD0;
	sub_8227A738(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6D68) {
	__imp__sub_823C6D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C6DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31938
	ctx.r11.s64 = -2093088768;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,23040
	ctx.r28.s64 = ctx.r11.s64 + 23040;
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x823c6e74
	if (!ctx.cr6.gt) goto loc_823C6E74;
	// li r31,20
	ctx.r31.s64 = 20;
loc_823C6E10:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lhz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// bl 0x8227a738
	ctx.lr = 0x823C6E54;
	sub_8227A738(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c6e80
	if (!ctx.cr6.eq) goto loc_823C6E80;
	// lwz r11,156(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823c6e10
	if (ctx.cr6.lt) goto loc_823C6E10;
loc_823C6E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823C6E80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6DE0) {
	__imp__sub_823C6DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6E8C) {
	__imp__sub_823C6E8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6E90) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,23040
	ctx.r9.s64 = ctx.r10.s64 + 23040;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6E90) {
	__imp__sub_823C6E90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6EB4) {
	__imp__sub_823C6EB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6EB8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r11,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r11.u8);
	// bl 0x823c6de0
	ctx.lr = 0x823C6EDC;
	sub_823C6DE0(ctx, base);
	// lis r10,-31938
	ctx.r10.s64 = -2093088768;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,23040
	ctx.r9.s64 = ctx.r10.s64 + 23040;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r8,r31,-4
	ctx.r8.s64 = ctx.r31.s64 + -4;
	// lwz r11,156(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823C6F0C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823c6f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C6F0C;
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

PPC_WEAK_FUNC(sub_823C6EB8) {
	__imp__sub_823C6EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6F2C) {
	__imp__sub_823C6F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6F30) {
	PPC_FUNC_PROLOGUE();
	// subfic r11,r4,95
	ctx.xer.ca = ctx.r4.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r4.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820c0db0
	sub_820C0DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6F30) {
	__imp__sub_823C6F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6F54) {
	__imp__sub_823C6F54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6F58) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// b 0x820ca780
	sub_820CA780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6F58) {
	__imp__sub_823C6F58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r6,44
	ctx.r6.s64 = 44;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-11540
	ctx.r9.s64 = ctx.r10.s64 + -11540;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mulli r5,r10,44
	ctx.r5.s64 = ctx.r10.s64 * 44;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r11,3216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3216);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823c6fa8
	if (!ctx.cr6.eq) goto loc_823C6FA8;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x823c7530
	sub_823C7530(ctx, base);
	return;
loc_823C6FA8:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// b 0x823c75f8
	sub_823C75F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6F70) {
	__imp__sub_823C6F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823C6FE4;
	sub_823C86E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C6FB8) {
	__imp__sub_823C6FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C6FF4) {
	__imp__sub_823C6FF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C6FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x823C7000;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-31799
	ctx.r21.s64 = -2083979264;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r16,0(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// lwz r17,4(r3)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// lwz r20,8(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,3216(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3216);
	// rlwinm r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r23,255
	ctx.r23.s64 = 255;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// lwz r19,12(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r18,31
	ctx.r18.s64 = 31;
	// li r22,-1
	ctx.r22.s64 = -1;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r24,r9,4608
	ctx.r24.s64 = ctx.r9.s64 + 4608;
	// lwz r15,12(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,28(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r11,r11,-11540
	ctx.r11.s64 = ctx.r11.s64 + -11540;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_823C707C:
	// lwz r3,20(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c70a4
	if (ctx.cr6.eq) goto loc_823C70A4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c70a4
	if (!ctx.cr0.lt) goto loc_823C70A4;
	// bl 0x823905c8
	ctx.lr = 0x823C70A4;
	sub_823905C8(ctx, base);
loc_823C70A4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r28,r31,17
	ctx.r28.u64 = ctx.r31.u32 & 0x7FFF;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r8,8456(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8456);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,624(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 624);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823c70ec
	if (!ctx.cr6.eq) goto loc_823C70EC;
	// lbz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823c7198
	if (ctx.cr6.eq) goto loc_823C7198;
loc_823C70EC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// lbz r18,20(r31)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c7128
	if (ctx.cr6.eq) goto loc_823C7128;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + ctx.r15.u64;
	// cmplw cr6,r17,r5
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c712c
	if (ctx.cr6.eq) goto loc_823C712C;
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// bl 0x820ca780
	ctx.lr = 0x823C7124;
	sub_820CA780(ctx, base);
	// b 0x823c712c
	goto loc_823C712C;
loc_823C7128:
	// li r17,0
	ctx.r17.s64 = 0;
loc_823C712C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7190
	if (ctx.cr6.eq) goto loc_823C7190;
	// mulli r29,r18,52
	ctx.r29.s64 = ctx.r18.s64 * 52;
	// add r5,r29,r14
	ctx.r5.u64 = ctx.r29.u64 + ctx.r14.u64;
	// cmplw cr6,r19,r5
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c715c
	if (ctx.cr6.eq) goto loc_823C715C;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// bl 0x820ca780
	ctx.lr = 0x823C715C;
	sub_820CA780(ctx, base);
loc_823C715C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7194
	if (ctx.cr6.eq) goto loc_823C7194;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r5,r29,r11
	ctx.r5.u64 = ctx.r29.u64 + ctx.r11.u64;
	// cmplw cr6,r20,r5
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c7198
	if (ctx.cr6.eq) goto loc_823C7198;
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// bl 0x820ca780
	ctx.lr = 0x823C718C;
	sub_820CA780(ctx, base);
	// b 0x823c7198
	goto loc_823C7198;
loc_823C7190:
	// li r19,0
	ctx.r19.s64 = 0;
loc_823C7194:
	// li r20,0
	ctx.r20.s64 = 0;
loc_823C7198:
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// lwz r9,8456(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8456);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r22,r5
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r5.u32, ctx.xer);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,624(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 624);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r30,r8,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r8.s64;
	// beq cr6,0x823c7220
	if (ctx.cr6.eq) goto loc_823C7220;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,44
	ctx.r6.s64 = 44;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,3216(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 3216);
	// mulli r5,r5,44
	ctx.r5.s64 = ctx.r5.s64 * 44;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x823c7214
	if (!ctx.cr6.eq) goto loc_823C7214;
	// bl 0x823c7530
	ctx.lr = 0x823C7210;
	sub_823C7530(ctx, base);
	// b 0x823c7220
	goto loc_823C7220;
loc_823C7214:
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823c75f8
	ctx.lr = 0x823C7220;
	sub_823C75F8(ctx, base);
loc_823C7220:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// divw r8,r30,r10
	ctx.r8.s32 = ctx.r30.s32 / ctx.r10.s32;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823C7248;
	sub_823C86E8(ctx, base);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823c707c
	if (ctx.cr6.eq) goto loc_823C707C;
	// stw r17,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r17.u32);
	// stw r20,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r20.u32);
	// stw r19,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r19.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C6FF8) {
	__imp__sub_823C6FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7274) {
	__imp__sub_823C7274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823C7280;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r24,3
	ctx.r24.s64 = 3;
	// lis r25,-31799
	ctx.r25.s64 = -2083979264;
	// addi r23,r10,-11540
	ctx.r23.s64 = ctx.r10.s64 + -11540;
	// addi r27,r9,4608
	ctx.r27.s64 = ctx.r9.s64 + 4608;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
loc_823C72B4:
	// lwz r3,20(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823c72dc
	if (ctx.cr6.eq) goto loc_823C72DC;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf. r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823c72dc
	if (!ctx.cr0.lt) goto loc_823C72DC;
	// bl 0x823905c8
	ctx.lr = 0x823C72DC;
	sub_823905C8(ctx, base);
loc_823C72DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r31,17
	ctx.r8.u64 = ctx.r31.u32 & 0x7FFF;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r9,8456(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8456);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,624(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 624);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r29,r4,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r4.s64;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c7388
	if (ctx.cr6.eq) goto loc_823C7388;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r6,44
	ctx.r6.s64 = 44;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,3216(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 3216);
	// mulli r5,r5,44
	ctx.r5.s64 = ctx.r5.s64 * 44;
	// lwzx r9,r10,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// bne cr6,0x823c737c
	if (!ctx.cr6.eq) goto loc_823C737C;
	// bl 0x823c7530
	ctx.lr = 0x823C7378;
	sub_823C7530(ctx, base);
	// b 0x823c7388
	goto loc_823C7388;
loc_823C737C:
	// addi r7,r11,88
	ctx.r7.s64 = ctx.r11.s64 + 88;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823c75f8
	ctx.lr = 0x823C7388;
	sub_823C75F8(ctx, base);
loc_823C7388:
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// divw r10,r29,r24
	ctx.r10.s32 = ctx.r29.s32 / ctx.r24.s32;
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x823c86e8
	ctx.lr = 0x823C73AC;
	sub_823C86E8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823c72b4
	if (ctx.cr6.eq) goto loc_823C72B4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7278) {
	__imp__sub_823C7278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C73CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C73CC) {
	__imp__sub_823C73CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C73D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C73D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,172(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r29,200(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lbz r30,75(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 75);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c740c
	if (ctx.cr6.eq) goto loc_823C740C;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8870
	ctx.lr = 0x823C740C;
	sub_823C8870(ctx, base);
loc_823C740C:
	// rlwinm r11,r30,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7428
	if (ctx.cr6.eq) goto loc_823C7428;
	// li r5,98
	ctx.r5.s64 = 98;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8870
	ctx.lr = 0x823C7428;
	sub_823C8870(ctx, base);
loc_823C7428:
	// rlwinm r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c7444
	if (ctx.cr6.eq) goto loc_823C7444;
	// li r5,98
	ctx.r5.s64 = 98;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8870
	ctx.lr = 0x823C7444;
	sub_823C8870(ctx, base);
loc_823C7444:
	// lbz r11,75(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 75);
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x8236b940
	ctx.lr = 0x823C746C;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823c7490
	if (!ctx.cr6.lt) goto loc_823C7490;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823c7494
	goto loc_823C7494;
loc_823C7490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C7494:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6ff8
	ctx.lr = 0x823C74A4;
	sub_823C6FF8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C73D0) {
	__imp__sub_823C73D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C74C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C74C4) {
	__imp__sub_823C74C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C74C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bl 0x8236b940
	ctx.lr = 0x823C74E0;
	sub_8236B940(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823c7504
	if (!ctx.cr6.lt) goto loc_823C7504;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// mulli r11,r11,552
	ctx.r11.s64 = ctx.r11.s64 * 552;
	// addi r10,r10,3224
	ctx.r10.s64 = ctx.r10.s64 + 3224;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x823c7508
	goto loc_823C7508;
loc_823C7504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C7508:
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x823c7278
	ctx.lr = 0x823C751C;
	sub_823C7278(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C74C8) {
	__imp__sub_823C74C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C752C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C752C) {
	__imp__sub_823C752C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7530) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823c756c
	if (!ctx.cr6.eq) goto loc_823C756C;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823c756c
	if (!ctx.cr6.eq) goto loc_823C756C;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823c7590
	if (ctx.cr6.eq) goto loc_823C7590;
loc_823C756C:
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c0db0
	ctx.lr = 0x823C7590;
	sub_820C0DB0(ctx, base);
loc_823C7590:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c75b4
	if (!ctx.cr6.eq) goto loc_823C75B4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c75b4
	if (!ctx.cr6.eq) goto loc_823C75B4;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c75e0
	if (ctx.cr6.eq) goto loc_823C75E0;
loc_823C75B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c0db0
	ctx.lr = 0x823C75E0;
	sub_820C0DB0(ctx, base);
loc_823C75E0:
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

PPC_WEAK_FUNC(sub_823C7530) {
	__imp__sub_823C7530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C75F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C75F4) {
	__imp__sub_823C75F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C75F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C7600;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823c7638
	if (!ctx.cr6.eq) goto loc_823C7638;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823c7638
	if (!ctx.cr6.eq) goto loc_823C7638;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823c7660
	if (ctx.cr6.eq) goto loc_823C7660;
loc_823C7638:
	// stw r4,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r4.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820c0db0
	ctx.lr = 0x823C7660;
	sub_820C0DB0(ctx, base);
loc_823C7660:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823c7684
	if (!ctx.cr6.eq) goto loc_823C7684;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823c7684
	if (!ctx.cr6.eq) goto loc_823C7684;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x823c76ac
	if (ctx.cr6.eq) goto loc_823C76AC;
loc_823C7684:
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c0db0
	ctx.lr = 0x823C76AC;
	sub_820C0DB0(ctx, base);
loc_823C76AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C75F8) {
	__imp__sub_823C75F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C76B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C76B4) {
	__imp__sub_823C76B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C76B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C76B8) {
	__imp__sub_823C76B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C76BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C76BC) {
	__imp__sub_823C76BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C76C0) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-11420
	ctx.r3.s64 = ctx.r11.s64 + -11420;
	// bl 0x8227da80
	ctx.lr = 0x823C76D8;
	sub_8227DA80(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r3,r10,-11432
	ctx.r3.s64 = ctx.r10.s64 + -11432;
	// bl 0x8227da80
	ctx.lr = 0x823C76E4;
	sub_8227DA80(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r3,r9,-11456
	ctx.r3.s64 = ctx.r9.s64 + -11456;
	// bl 0x8227da80
	ctx.lr = 0x823C76F0;
	sub_8227DA80(ctx, base);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r3,r8,-11468
	ctx.r3.s64 = ctx.r8.s64 + -11468;
	// bl 0x8227da80
	ctx.lr = 0x823C76FC;
	sub_8227DA80(ctx, base);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// addi r3,r7,-11480
	ctx.r3.s64 = ctx.r7.s64 + -11480;
	// bl 0x8227da80
	ctx.lr = 0x823C7708;
	sub_8227DA80(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C76C0) {
	__imp__sub_823C76C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7718) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7718) {
	__imp__sub_823C7718(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r7,r9,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r6,r11,r4
	ctx.r6.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srad r5,r7,r8
	temp.u64 = ctx.r8.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r7.s64 < 0) & (((ctx.r7.s64 >> temp.u64) << temp.u64) != ctx.r7.s64);
	ctx.r5.s64 = ctx.r7.s64 >> temp.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// srd r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r4.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7720) {
	__imp__sub_823C7720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7748) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r3,r8,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7748) {
	__imp__sub_823C7748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7760) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r9,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7760) {
	__imp__sub_823C7760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7774) {
	__imp__sub_823C7774(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7778) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7778) {
	__imp__sub_823C7778(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C77B8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C77B8) {
	__imp__sub_823C77B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C77F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r6.u8 & 0x7F));
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C77F8) {
	__imp__sub_823C77F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7838) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1164
	ctx.r10.s64 = ctx.r11.s64 + 1164;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1164);
	// rlwimi r10,r5,23,7,8
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r10.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r10,1164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1164, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7838) {
	__imp__sub_823C7838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C787C) {
	__imp__sub_823C787C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfe r7,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r5,r8,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// lwz r4,1172(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// srd r10,r5,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r6.u8 & 0x7F));
	// rlwimi r7,r4,0,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r7.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7880) {
	__imp__sub_823C7880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C78CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C78CC) {
	__imp__sub_823C78CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C78D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwimi r10,r5,3,27,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r10,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C78D0) {
	__imp__sub_823C78D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7914) {
	__imp__sub_823C7914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7918) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwimi r10,r5,22,5,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r10.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7918) {
	__imp__sub_823C7918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C795C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C795C) {
	__imp__sub_823C795C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7960) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1168
	ctx.r10.s64 = ctx.r11.s64 + 1168;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1168(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1168);
	// rlwimi r10,r5,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r10,1168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1168, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7960) {
	__imp__sub_823C7960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C79A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C79A4) {
	__imp__sub_823C79A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C79A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// clrldi r7,r10,32
	ctx.r7.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rldicr r6,r8,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r10,r11,1172
	ctx.r10.s64 = ctx.r11.s64 + 1172;
	// srd r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lwz r10,1172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1172);
	// rlwimi r10,r5,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r10,1172(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1172, ctx.r10.u32);
	// ld r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 | ctx.r9.u64;
	// std r8,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r8.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C79A8) {
	__imp__sub_823C79A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C79EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C79EC) {
	__imp__sub_823C79EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C79F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r6,r10,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,1156
	ctx.r10.s64 = ctx.r11.s64 + 1156;
	// clrldi r5,r8,32
	ctx.r5.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rldicr r4,r7,63,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r10,1156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1156);
	// srd r9,r4,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r4.u64 >> (ctx.r5.u8 & 0x7F));
	// rlwimi r10,r6,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,1156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1156, ctx.r10.u32);
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 | ctx.r8.u64;
	// std r7,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r7.u64);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C79F0) {
	__imp__sub_823C79F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7A3C) {
	__imp__sub_823C7A3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A40) {
	PPC_FUNC_PROLOGUE();
	// subfic r11,r4,95
	ctx.xer.ca = ctx.r4.u32 <= 95;
	ctx.r11.s64 = 95 - ctx.r4.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mulli r9,r11,21846
	ctx.r9.s64 = ctx.r11.s64 * 21846;
	// rlwinm r11,r9,16,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r10.u8 & 0x7F));
	// b 0x820c0db0
	sub_820C0DB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7A40) {
	__imp__sub_823C7A40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7A64) {
	__imp__sub_823C7A64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// b 0x820ca780
	sub_820CA780(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7A68) {
	__imp__sub_823C7A68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A80) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_823C7A80) {
	__imp__sub_823C7A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7A94) {
	__imp__sub_823C7A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7A98) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 468);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_823C7A98) {
	__imp__sub_823C7A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7AAC) {
	__imp__sub_823C7AAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C7AB8;
	__savegprlr_27(ctx, base);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r11,r11,13512
	ctx.r11.s64 = ctx.r11.s64 + 13512;
	// lwz r9,12828(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12828);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823c7adc
	if (!ctx.cr6.gt) goto loc_823C7ADC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823C7ADC:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bgt cr6,0x823c7af0
	if (ctx.cr6.gt) goto loc_823C7AF0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r29,4352
	ctx.r29.s64 = 4352;
	// b 0x823c7b1c
	goto loc_823C7B1C;
loc_823C7AF0:
	// lbz r10,9(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 9);
	// lbz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r8.s64;
	// rlwinm r11,r6,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x3000;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,4096
	ctx.r3.s64 = ctx.r11.s64 + 4096;
	// rlwinm r11,r4,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// or r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 | ctx.r11.u64;
loc_823C7B1C:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12872(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12872);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823c7b34
	if (!ctx.cr6.lt) goto loc_823C7B34;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823C7B34:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r28,4352
	ctx.r28.s64 = 4352;
	// beq cr6,0x823c7b48
	if (ctx.cr6.eq) goto loc_823C7B48;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_823C7B48:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt cr6,0x823c7b58
	if (ctx.cr6.lt) goto loc_823C7B58;
	// li r10,2
	ctx.r10.s64 = 2;
loc_823C7B58:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823c7b68
	if (!ctx.cr6.gt) goto loc_823C7B68;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x823c7b78
	goto loc_823C7B78;
loc_823C7B68:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// blt cr6,0x823c7b78
	if (ctx.cr6.lt) goto loc_823C7B78;
	// li r30,2
	ctx.r30.s64 = 2;
loc_823C7B78:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// blt cr6,0x823c7b88
	if (ctx.cr6.lt) goto loc_823C7B88;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823C7B88:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823c7b98
	if (!ctx.cr6.gt) goto loc_823C7B98;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x823c7ba8
	goto loc_823C7BA8;
loc_823C7B98:
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blt cr6,0x823c7ba8
	if (ctx.cr6.lt) goto loc_823C7BA8;
	// li r3,4
	ctx.r3.s64 = 4;
loc_823C7BA8:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13140);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c7bdc
	if (ctx.cr6.eq) goto loc_823C7BDC;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x823c7bec
	goto loc_823C7BEC;
loc_823C7BDC:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// li r4,4352
	ctx.r4.s64 = 4352;
	// lwz r11,12956(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12956);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823C7BEC:
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// li r10,24
	ctx.r10.s64 = 24;
	// addi r8,r9,-26336
	ctx.r8.s64 = ctx.r9.s64 + -26336;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// ori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 | 1;
	// addi r9,r11,-11168
	ctx.r9.s64 = ctx.r11.s64 + -11168;
loc_823C7C20:
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x823c7c60
	if (!ctx.cr6.eq) goto loc_823C7C60;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x823c7c54
	if (!ctx.cr6.eq) goto loc_823C7C54;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// b 0x823c7c8c
	goto loc_823C7C8C;
loc_823C7C54:
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// or r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 | ctx.r27.u64;
	// b 0x823c7c8c
	goto loc_823C7C8C;
loc_823C7C60:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x823c7c74
	if (!ctx.cr6.eq) goto loc_823C7C74;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// b 0x823c7c8c
	goto loc_823C7C8C;
loc_823C7C74:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x823c7c88
	if (!ctx.cr6.eq) goto loc_823C7C88;
	// or r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// b 0x823c7c8c
	goto loc_823C7C8C;
loc_823C7C88:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_823C7C8C:
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// bdnz 0x823c7c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7C20;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r10,3224
	ctx.r9.s64 = ctx.r10.s64 + 3224;
	// lwz r11,12972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12972);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,1264(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1264, ctx.r11.u32);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7AB0) {
	__imp__sub_823C7AB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7CB4) {
	__imp__sub_823C7CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7CB8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820bed48
	ctx.lr = 0x823C7CD4;
	sub_820BED48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820bf150
	ctx.lr = 0x823C7CE0;
	sub_820BF150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x820bf0d8
	ctx.lr = 0x823C7CEC;
	sub_820BF0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820bf068
	ctx.lr = 0x823C7CF8;
	sub_820BF068(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bfef0
	ctx.lr = 0x823C7D04;
	sub_820BFEF0(ctx, base);
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

PPC_WEAK_FUNC(sub_823C7CB8) {
	__imp__sub_823C7CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7D18) {
	PPC_FUNC_PROLOGUE();
	// lhz r7,5608(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// lhz r8,5610(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5610);
	// lhz r9,5620(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5620);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhz r10,5626(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5626);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lhz r11,5632(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5632);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r7,5608(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5608, ctx.r7.u16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r6,5610(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5610, ctx.r6.u16);
	// sth r5,5620(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5620, ctx.r5.u16);
	// sth r4,5626(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5626, ctx.r4.u16);
	// sth r11,5632(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5632, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7D18) {
	__imp__sub_823C7D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7D58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,5656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5656);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r9,5620(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5620);
	// lhz r7,5608(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// lhz r8,5610(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5610);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// lhz r10,5626(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5626);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lhz r11,5632(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5632);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r4,5656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5656, ctx.r4.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r7,5608(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5608, ctx.r7.u16);
	// sth r6,5610(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5610, ctx.r6.u16);
	// sth r5,5620(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5620, ctx.r5.u16);
	// sth r10,5626(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5626, ctx.r10.u16);
	// sth r9,5632(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5632, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7D58) {
	__imp__sub_823C7D58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C7DB0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x822d6b00
	ctx.lr = 0x823C7DD4;
	sub_822D6B00(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d3e58
	ctx.lr = 0x823C7DE0;
	sub_823D3E58(ctx, base);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5264);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,5268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5268);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f9,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,5272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5272);
	ctx.f7.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
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
	// bl 0x822d5b88
	ctx.lr = 0x823C7E20;
	sub_822D5B88(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7DA8) {
	__imp__sub_823C7DA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7E2C) {
	__imp__sub_823C7E2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823c7da8
	sub_823C7DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7E30) {
	__imp__sub_823C7E30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7E3C) {
	__imp__sub_823C7E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823c7da8
	sub_823C7DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7E40) {
	__imp__sub_823C7E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7E4C) {
	__imp__sub_823C7E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823c7da8
	sub_823C7DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7E50) {
	__imp__sub_823C7E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// b 0x823c7da8
	sub_823C7DA8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C7E60) {
	__imp__sub_823C7E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7E6C) {
	__imp__sub_823C7E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E70) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-75
	ctx.r11.s64 = ctx.r4.s64 + -75;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r11,2803
	ctx.r10.s64 = ctx.r11.s64 + 2803;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r9,r3
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7E70) {
	__imp__sub_823C7E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7E88) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-75
	ctx.r11.s64 = ctx.r4.s64 + -75;
	// addi r10,r4,2672
	ctx.r10.s64 = ctx.r4.s64 + 2672;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,2803
	ctx.r8.s64 = ctx.r11.s64 + 2803;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r9,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// lhzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7E88) {
	__imp__sub_823C7E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7EB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-75
	ctx.r11.s64 = ctx.r4.s64 + -75;
	// addi r10,r4,2672
	ctx.r10.s64 = ctx.r4.s64 + 2672;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,2803
	ctx.r8.s64 = ctx.r11.s64 + 2803;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r3.u32);
	// sthx r6,r9,r3
	PPC_STORE_U16(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7EB8) {
	__imp__sub_823C7EB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7EDC) {
	__imp__sub_823C7EDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,4928
	ctx.r11.s64 = ctx.r3.s64 + 4928;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C7EF4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c7ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7EF4;
	// lhz r11,5606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5606);
	// sth r11,5494(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5494, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7EE0) {
	__imp__sub_823C7EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7F0C) {
	__imp__sub_823C7F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7F10) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,4928
	ctx.r4.s64 = ctx.r3.s64 + 4928;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r9,r30,20
	ctx.r9.s64 = ctx.r30.s64 + 20;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// add r5,r10,r3
	ctx.r5.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x822d62b8
	ctx.lr = 0x823C7F58;
	sub_822D62B8(ctx, base);
	// addi r11,r30,99
	ctx.r11.s64 = ctx.r30.s64 + 99;
	// addi r8,r11,-75
	ctx.r8.s64 = ctx.r11.s64 + -75;
	// addi r7,r11,2672
	ctx.r7.s64 = ctx.r11.s64 + 2672;
	// rlwinm r11,r8,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,2803
	ctx.r5.s64 = ctx.r11.s64 + 2803;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r3,r4,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r31.u32);
	// sthx r3,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u16);
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

PPC_WEAK_FUNC(sub_823C7F10) {
	__imp__sub_823C7F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7F94) {
	__imp__sub_823C7F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r3,4928
	ctx.r8.s64 = ctx.r3.s64 + 4928;
	// addi r7,r3,256
	ctx.r7.s64 = ctx.r3.s64 + 256;
	// addi r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 + 56;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C7FB0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c7fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7FB0;
	// lwz r11,5656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5656);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c7fd0
	if (!ctx.cr6.eq) goto loc_823C7FD0;
	// lfs f0,332(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 56, temp.u32);
loc_823C7FD0:
	// lhz r11,5608(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// sth r11,5502(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5502, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C7F98) {
	__imp__sub_823C7F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C7FDC) {
	__imp__sub_823C7FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C7FE0) {
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
	// addi r3,r3,4928
	ctx.r3.s64 = ctx.r3.s64 + 4928;
	// addi r5,r31,512
	ctx.r5.s64 = ctx.r31.s64 + 512;
	// lwz r11,5656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5656);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c8060
	if (!ctx.cr6.eq) goto loc_823C8060;
	// lhz r11,5608(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5608);
	// lhz r10,5502(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5502);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823c8054
	if (ctx.cr6.eq) goto loc_823C8054;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r31,256
	ctx.r8.s64 = ctx.r31.s64 + 256;
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C802C:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c802c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C802C;
	// lwz r11,5656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5656);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c804c
	if (!ctx.cr6.eq) goto loc_823C804C;
	// lfs f0,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 56, temp.u32);
loc_823C804C:
	// lhz r11,5608(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5608);
	// sth r11,5502(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5502, ctx.r11.u16);
loc_823C8054:
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// bl 0x822d62b8
	ctx.lr = 0x823C805C;
	sub_822D62B8(ctx, base);
	// b 0x823c807c
	goto loc_823C807C;
loc_823C8060:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
	// addi r10,r5,-8
	ctx.r10.s64 = ctx.r5.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8070:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c8070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8070;
loc_823C807C:
	// lhz r11,5610(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5610);
	// sth r11,5510(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5510, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_823C7FE0) {
	__imp__sub_823C7FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C80A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,5656(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5656);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r3,4928
	ctx.r9.s64 = ctx.r3.s64 + 4928;
	// addi r8,r30,20
	ctx.r8.s64 = ctx.r30.s64 + 20;
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r10,r3
	ctx.r29.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bne cr6,0x823c80f8
	if (!ctx.cr6.eq) goto loc_823C80F8;
	// lhz r11,5610(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5610);
	// lhz r10,5510(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5510);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823c80f0
	if (ctx.cr6.eq) goto loc_823C80F0;
	// bl 0x823c7fe0
	ctx.lr = 0x823C80F0;
	sub_823C7FE0(ctx, base);
loc_823C80F0:
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// b 0x823c80fc
	goto loc_823C80FC;
loc_823C80F8:
	// addi r4,r9,128
	ctx.r4.s64 = ctx.r9.s64 + 128;
loc_823C80FC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d62b8
	ctx.lr = 0x823C8108;
	sub_822D62B8(ctx, base);
	// addi r11,r30,103
	ctx.r11.s64 = ctx.r30.s64 + 103;
	// addi r10,r11,-75
	ctx.r10.s64 = ctx.r11.s64 + -75;
	// addi r9,r11,2672
	ctx.r9.s64 = ctx.r11.s64 + 2672;
	// rlwinm r11,r10,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,2803
	ctx.r7.s64 = ctx.r11.s64 + 2803;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r31.u32);
	// sthx r5,r8,r31
	PPC_STORE_U16(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8098) {
	__imp__sub_823C8098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8134) {
	__imp__sub_823C8134(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8138) {
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
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r4,r3,768
	ctx.r4.s64 = ctx.r3.s64 + 768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,5272
	ctx.r11.s64 = ctx.r3.s64 + 5272;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8160:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c8160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8160;
	// addi r5,r4,48
	ctx.r5.s64 = ctx.r4.s64 + 48;
	// addi r3,r31,5264
	ctx.r3.s64 = ctx.r31.s64 + 5264;
	// bl 0x822d6708
	ctx.lr = 0x823C8178;
	sub_822D6708(ctx, base);
	// lhz r11,5612(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5612);
	// sth r11,5518(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5518, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_823C8138) {
	__imp__sub_823C8138(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8194) {
	__imp__sub_823C8194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C81A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,76
	ctx.r4.s64 = 76;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823c8400
	ctx.lr = 0x823C81B8;
	sub_823C8400(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11120(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11120);
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
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d6708
	ctx.lr = 0x823C81E8;
	sub_822D6708(ctx, base);
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,-19840
	ctx.r29.s64 = ctx.r11.s64 + -19840;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822d6708
	ctx.lr = 0x823C8200;
	sub_822D6708(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r11,r30,1272
	ctx.r11.s64 = ctx.r30.s64 + 1272;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8210:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c8210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8210;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f12,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f11,5264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5264);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5268);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f8,5272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5272);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfs f9,176(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f7,180(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f6,184(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822d62b8
	ctx.lr = 0x823C825C;
	sub_822D62B8(ctx, base);
	// lfs f5,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// lfs f12,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,56(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// lfs f9,60(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f8,60(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// lhz r11,5614(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 5614);
	// sth r11,5526(r30)
	PPC_STORE_U16(ctx.r30.u32 + 5526, ctx.r11.u16);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8198) {
	__imp__sub_823C8198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C82B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// cmplwi cr6,r5,24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 24, ctx.xer);
	// bgt cr6,0x823c83a8
	if (ctx.cr6.gt) goto loc_823C83A8;
	// beq cr6,0x823c83a0
	if (ctx.cr6.eq) goto loc_823C83A0;
	// cmplwi cr6,r5,16
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16, ctx.xer);
	// bgt cr6,0x823c8348
	if (ctx.cr6.gt) goto loc_823C8348;
	// lis r12,-32195
	ctx.r12.s64 = -2109931520;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-32036
	ctx.r12.s64 = ctx.r12.s64 + -32036;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u32) {
	case 0:
		goto loc_823C8320;
	case 1:
		goto loc_823C8348;
	case 2:
		goto loc_823C8348;
	case 3:
		goto loc_823C8348;
	case 4:
		goto loc_823C834C;
	case 5:
		goto loc_823C8348;
	case 6:
		goto loc_823C8348;
	case 7:
		goto loc_823C8348;
	case 8:
		goto loc_823C8390;
	case 9:
		goto loc_823C8348;
	case 10:
		goto loc_823C8348;
	case 11:
		goto loc_823C8348;
	case 12:
		goto loc_823C8394;
	case 13:
		goto loc_823C8348;
	case 14:
		goto loc_823C8348;
	case 15:
		goto loc_823C8348;
	case 16:
		goto loc_823C8398;
	default:
		return;
	}
	// lwz r17,-31968(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31968);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31924(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31924);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31856(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31856);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31852(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31852);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31928(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31928);
	// lwz r17,-31848(r28)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r28.u32 + -31848);
loc_823C8320:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,4928
	ctx.r11.s64 = ctx.r3.s64 + 4928;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8334:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c8334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8334;
	// lhz r11,5606(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5606);
	// sth r11,5494(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5494, ctx.r11.u16);
loc_823C8348:
	// blr 
	return;
loc_823C834C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r3,4928
	ctx.r8.s64 = ctx.r3.s64 + 4928;
	// addi r7,r3,256
	ctx.r7.s64 = ctx.r3.s64 + 256;
	// addi r11,r8,56
	ctx.r11.s64 = ctx.r8.s64 + 56;
	// addi r10,r7,-8
	ctx.r10.s64 = ctx.r7.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C8364:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823c8364
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8364;
	// lwz r11,5656(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5656);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823c8384
	if (!ctx.cr6.eq) goto loc_823C8384;
	// lfs f0,332(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 332);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 56, temp.u32);
loc_823C8384:
	// lhz r11,5608(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5608);
	// sth r11,5502(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5502, ctx.r11.u16);
	// blr 
	return;
loc_823C8390:
	// b 0x823c7fe0
	sub_823C7FE0(ctx, base);
	return;
loc_823C8394:
	// b 0x823c8138
	sub_823C8138(ctx, base);
	return;
loc_823C8398:
	// addi r4,r4,1024
	ctx.r4.s64 = ctx.r4.s64 + 1024;
	// b 0x823c8198
	sub_823C8198(ctx, base);
	return;
loc_823C83A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823c7f10
	sub_823C7F10(ctx, base);
	return;
loc_823C83A8:
	// cmplwi cr6,r5,40
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 40, ctx.xer);
	// bgt cr6,0x823c83dc
	if (ctx.cr6.gt) goto loc_823C83DC;
	// beq cr6,0x823c83d4
	if (ctx.cr6.eq) goto loc_823C83D4;
	// cmplwi cr6,r5,28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 28, ctx.xer);
	// beq cr6,0x823c83cc
	if (ctx.cr6.eq) goto loc_823C83CC;
	// cmplwi cr6,r5,36
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 36, ctx.xer);
	// bne cr6,0x823c8348
	if (!ctx.cr6.eq) goto loc_823C8348;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823c7f10
	sub_823C7F10(ctx, base);
	return;
loc_823C83CC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823c8098
	sub_823C8098(ctx, base);
	return;
loc_823C83D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823c8098
	sub_823C8098(ctx, base);
	return;
loc_823C83DC:
	// cmplwi cr6,r5,48
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 48, ctx.xer);
	// beq cr6,0x823c83f4
	if (ctx.cr6.eq) goto loc_823C83F4;
	// cmplwi cr6,r5,52
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 52, ctx.xer);
	// bne cr6,0x823c8348
	if (!ctx.cr6.eq) goto loc_823C8348;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823c8098
	sub_823C8098(ctx, base);
	return;
loc_823C83F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823c7f10
	sub_823C7F10(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C82B0) {
	__imp__sub_823C82B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C83FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C83FC) {
	__imp__sub_823C83FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C8408;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,-75
	ctx.r30.s64 = ctx.r4.s64 + -75;
	// addi r10,r4,2672
	ctx.r10.s64 = ctx.r4.s64 + 2672;
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,2803
	ctx.r9.s64 = ctx.r11.s64 + 2803;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lhzx r7,r27,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r3.u32);
	// lhzx r29,r8,r3
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823c84f8
	if (ctx.cr6.eq) goto loc_823C84F8;
	// rlwinm r25,r30,0,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r25,2747
	ctx.r11.s64 = ctx.r25.s64 + 2747;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x823c8468
	if (ctx.cr6.eq) goto loc_823C8468;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x823c82b0
	ctx.lr = 0x823C8460;
	sub_823C82B0(ctx, base);
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823c84f8
	if (ctx.cr6.eq) goto loc_823C84F8;
loc_823C8468:
	// xori r11,r30,2
	ctx.r11.u64 = ctx.r30.u64 ^ 2;
	// clrlwi r26,r29,16
	ctx.r26.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r10,r11,2747
	ctx.r10.s64 = ctx.r11.s64 + 2747;
	// sthx r26,r27,r31
	PPC_STORE_U16(ctx.r27.u32 + ctx.r31.u32, ctx.r26.u16);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823c84a0
	if (!ctx.cr6.eq) goto loc_823C84A0;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822d63c8
	ctx.lr = 0x823C849C;
	sub_822D63C8(ctx, base);
	// b 0x823c84f8
	goto loc_823C84F8;
loc_823C84A0:
	// xori r11,r30,1
	ctx.r11.u64 = ctx.r30.u64 ^ 1;
	// addi r10,r11,2747
	ctx.r10.s64 = ctx.r11.s64 + 2747;
	// rlwinm r27,r10,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + ctx.r31.u32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823c84cc
	if (!ctx.cr6.eq) goto loc_823C84CC;
	// rlwinm r10,r30,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x823c84f4
	goto loc_823C84F4;
loc_823C84CC:
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r25,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 6) & 0xFFFFFFC0;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822d63c8
	ctx.lr = 0x823C84E4;
	sub_822D63C8(ctx, base);
	// rlwinm r11,r30,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 6) & 0xFFFFFFC0;
	// sthx r26,r27,r31
	PPC_STORE_U16(ctx.r27.u32 + ctx.r31.u32, ctx.r26.u16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_823C84F4:
	// bl 0x822d6658
	ctx.lr = 0x823C84F8;
	sub_822D6658(ctx, base);
loc_823C84F8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8400) {
	__imp__sub_823C8400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8510) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,1196
	ctx.r10.s64 = ctx.r4.s64 + 1196;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,4896(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4896);
	// stb r9,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r9.u8);
	// lwzx r3,r8,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8510) {
	__imp__sub_823C8510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C852C) {
	__imp__sub_823C852C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8530) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,13536
	ctx.r11.s64 = ctx.r11.s64 + 13536;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r8,r11,784
	ctx.r8.s64 = ctx.r11.s64 + 784;
	// addi r4,r9,-11116
	ctx.r4.s64 = ctx.r9.s64 + -11116;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// b 0x822830e8
	sub_822830E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8530) {
	__imp__sub_823C8530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8554) {
	__imp__sub_823C8554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// bne cr6,0x823c8570
	if (!ctx.cr6.eq) goto loc_823C8570;
	// lwz r3,8328(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8328);
	// blr 
	return;
loc_823C8570:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c8580
	if (!ctx.cr6.eq) goto loc_823C8580;
	// lwz r3,8332(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8332);
	// blr 
	return;
loc_823C8580:
	// lwz r3,8336(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8558) {
	__imp__sub_823C8558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c859c
	if (!ctx.cr6.eq) goto loc_823C859C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,29544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823C859C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8588) {
	__imp__sub_823C8588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C85A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823c85bc
	if (!ctx.cr6.eq) goto loc_823C85BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_823C85BC:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f1,29544(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29544);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C85A8) {
	__imp__sub_823C85A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C85C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C85D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stw r4,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f0,29544(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29544);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x823c85f4
	if (!ctx.cr6.eq) goto loc_823C85F4;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x823c85fc
	goto loc_823C85FC;
loc_823C85F4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
loc_823C85FC:
	// stfs f13,212(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 212, temp.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823c8610
	if (!ctx.cr6.eq) goto loc_823C8610;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_823C8610:
	// stfs f0,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 216, temp.u32);
	// lwz r9,2848(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2848);
	// lwz r8,2836(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2836);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r7,2840(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2840);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lwz r10,2844(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2844);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r27,144(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r28,2832(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r29,2828(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r30,2824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	// lwz r31,2820(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// bl 0x820c0d30
	ctx.lr = 0x823C865C;
	sub_820C0D30(ctx, base);
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r5,r30,r28
	ctx.r5.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bl 0x820c0c38
	ctx.lr = 0x823C8680;
	sub_820C0C38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C85C8) {
	__imp__sub_823C85C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8688) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,64(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// addi r9,r5,3
	ctx.r9.s64 = ctx.r5.s64 + 3;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c86b0
	if (!ctx.cr6.eq) goto loc_823C86B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823C86B0:
	// stw r4,188(r11)
	PPC_STORE_U32(ctx.r11.u32 + 188, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r5,192(r11)
	PPC_STORE_U32(ctx.r11.u32 + 192, ctx.r5.u32);
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8688) {
	__imp__sub_823C8688(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C86C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C86C4) {
	__imp__sub_823C86C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C86C8) {
	PPC_FUNC_PROLOGUE();
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823c75f8
	sub_823C75F8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C86C8) {
	__imp__sub_823C86C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C86E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C86E4) {
	__imp__sub_823C86E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C86E8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820c8578
	sub_820C8578(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C86E8) {
	__imp__sub_823C86E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C870C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C870C) {
	__imp__sub_823C870C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8710) {
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
	// lwz r10,156(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x823c8760
	if (!ctx.cr6.eq) goto loc_823C8760;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r6,2792(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	// li r7,32
	ctx.r7.s64 = 32;
	// divw r11,r10,r9
	ctx.r11.s32 = ctx.r10.s32 / ctx.r9.s32;
	// li r4,8
	ctx.r4.s64 = 8;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820c7b88
	ctx.lr = 0x823C875C;
	sub_820C7B88(ctx, base);
	// b 0x823c8790
	goto loc_823C8790;
loc_823C8760:
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,32
	ctx.r30.s64 = 32;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,2792(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2792);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,2788(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2788);
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820c80e8
	ctx.lr = 0x823C8790;
	sub_820C80E8(ctx, base);
loc_823C8790:
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

PPC_WEAK_FUNC(sub_823C8710) {
	__imp__sub_823C8710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C87A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C87B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823c87fc
	if (ctx.cr6.eq) goto loc_823C87FC;
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// srd r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x820ca780
	ctx.lr = 0x823C87FC;
	sub_820CA780(ctx, base);
loc_823C87FC:
	// lbzx r10,r30,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823c8864
	if (ctx.cr6.eq) goto loc_823C8864;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stbx r29,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r29.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r11,1,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// rlwinm r7,r9,1,22,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x380;
	// rlwinm r5,r11,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lwzx r6,r29,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r3,r11,2,25,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// addi r4,r8,-26336
	ctx.r4.s64 = ctx.r8.s64 + -26336;
	// or r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r10,r11,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lwzx r9,r3,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// or r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c8864
	if (ctx.cr6.eq) goto loc_823C8864;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// bl 0x823c9e10
	ctx.lr = 0x823C8860;
	sub_823C9E10(ctx, base);
	// stwx r3,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
loc_823C8864:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C87A8) {
	__imp__sub_823C87A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C886C) {
	__imp__sub_823C886C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8870) {
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
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// lbzx r8,r3,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r4.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823c88fc
	if (ctx.cr6.eq) goto loc_823C88FC;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// stbx r5,r3,r4
	PPC_STORE_U8(ctx.r3.u32 + ctx.r4.u32, ctx.r5.u8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r11,1,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// rlwinm r7,r9,1,22,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x380;
	// rlwinm r5,r11,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// lwzx r6,r30,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// rlwinm r7,r7,0,24,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r3,r8,-26336
	ctx.r3.s64 = ctx.r8.s64 + -26336;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// or r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 | ctx.r8.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823c88fc
	if (ctx.cr6.eq) goto loc_823C88FC;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x823c9e10
	ctx.lr = 0x823C88F8;
	sub_823C9E10(ctx, base);
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
loc_823C88FC:
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

PPC_WEAK_FUNC(sub_823C8870) {
	__imp__sub_823C8870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8914) {
	__imp__sub_823C8914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8918) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,21,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x700;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c8938
	if (!ctx.cr6.eq) goto loc_823C8938;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x820c17b8
	sub_820C17B8(ctx, base);
	return;
loc_823C8938:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823c9fd0
	sub_823C9FD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8918) {
	__imp__sub_823C8918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8944) {
	__imp__sub_823C8944(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C8950;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x823c8970
	if (ctx.cr6.eq) goto loc_823C8970;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823C8970:
	// bl 0x820bf110
	ctx.lr = 0x823C8974;
	sub_820BF110(ctx, base);
	// rlwinm r11,r31,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c898c
	if (!ctx.cr6.eq) goto loc_823C898C;
	// clrlwi r11,r31,12
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFFF;
	// rlwinm r10,r11,12,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF00000;
	// or r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_823C898C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r31,26,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 26) & 0x1C;
	// addi r30,r11,-11272
	ctx.r30.s64 = ctx.r11.s64 + -11272;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r30,-32
	ctx.r9.s64 = ctx.r30.s64 + -32;
	// lwzx r4,r10,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820bf228
	ctx.lr = 0x823C89A8;
	sub_820BF228(ctx, base);
	// addi r8,r30,-32
	ctx.r8.s64 = ctx.r30.s64 + -32;
	// rlwinm r7,r31,23,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 23) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x820bf1b8
	ctx.lr = 0x823C89BC;
	sub_820BF1B8(ctx, base);
	// addi r6,r30,-32
	ctx.r6.s64 = ctx.r30.s64 + -32;
	// rlwinm r5,r31,20,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r5,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// bl 0x820bf1f0
	ctx.lr = 0x823C89D0;
	sub_820BF1F0(ctx, base);
	// rlwinm r11,r31,14,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1C;
	// addi r4,r30,-32
	ctx.r4.s64 = ctx.r30.s64 + -32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r11,r4
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// bl 0x820bf2f8
	ctx.lr = 0x823C89E4;
	sub_820BF2F8(ctx, base);
	// addi r10,r30,-32
	ctx.r10.s64 = ctx.r30.s64 + -32;
	// rlwinm r9,r31,11,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x820bf288
	ctx.lr = 0x823C89F8;
	sub_820BF288(ctx, base);
	// addi r8,r30,-32
	ctx.r8.s64 = ctx.r30.s64 + -32;
	// rlwinm r7,r31,8,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r7,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bl 0x820bf2c0
	ctx.lr = 0x823C8A0C;
	sub_820BF2C0(ctx, base);
	// rlwinm r6,r31,17,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r6,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// bl 0x820bf188
	ctx.lr = 0x823C8A1C;
	sub_820BF188(ctx, base);
	// rlwinm r5,r31,5,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x1C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r4,r5,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// bl 0x820bf258
	ctx.lr = 0x823C8A2C;
	sub_820BF258(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8948) {
	__imp__sub_823C8948(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8A34) {
	__imp__sub_823C8A34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8A38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,5760(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5760);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823c8a64
	if (!ctx.cr6.eq) goto loc_823C8A64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,5764(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5764);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r10,5768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// b 0x823c8a88
	goto loc_823C8A88;
loc_823C8A64:
	// lwz r11,5740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5740);
	// addi r10,r3,5740
	ctx.r10.s64 = ctx.r3.s64 + 5740;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r9,5744(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5744);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,5748(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5748);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,5752(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5752);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
loc_823C8A88:
	// lwz r11,5696(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5696);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-19840
	ctx.r11.s64 = ctx.r11.s64 + -19840;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f8,-8(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lfs f0,6004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f12,f7
	ctx.f12.f64 = double(float(ctx.f7.f64));
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f3.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lfs f11,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lwz r8,-4(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// stw r7,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r7.u32);
	// lfs f0,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f6,f0
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f10.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x823c8b54
	if (ctx.cr6.gt) goto loc_823C8B54;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823C8B54:
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lfs f0,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f13.u64);
	// lwz r11,-4(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x823c8b78
	if (ctx.cr6.gt) goto loc_823C8B78;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C8B78:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8A38) {
	__imp__sub_823C8A38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C8B88;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f0,216(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r11,2836
	ctx.r8.s64 = ctx.r11.s64 + 2836;
	// lfs f13,212(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r27,144(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r9,2836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2836, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,2840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2840, ctx.r7.u32);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r6,2844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2844, ctx.r6.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r5,2848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2848, ctx.r5.u32);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r28,2832(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// lwz r29,2828(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r30,2824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	// lwz r31,2820(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// bl 0x820c0d30
	ctx.lr = 0x823C8C08;
	sub_820C0D30(ctx, base);
	// add r5,r31,r29
	ctx.r5.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x820c0c38
	ctx.lr = 0x823C8C2C;
	sub_820C0C38(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8B80) {
	__imp__sub_823C8B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8C34) {
	__imp__sub_823C8C34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C8C40;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,2836(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823c8c8c
	if (!ctx.cr6.eq) goto loc_823C8C8C;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,2840(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2840);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823c8c8c
	if (!ctx.cr6.eq) goto loc_823C8C8C;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,2844(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2844);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823c8c8c
	if (!ctx.cr6.eq) goto loc_823C8C8C;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r8,2848(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x823c8d20
	if (ctx.cr6.eq) goto loc_823C8D20;
loc_823C8C8C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f0,216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,212(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,144(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,2832(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	// stw r9,2836(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2836, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,2840(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2840, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r7,2844(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2844, ctx.r7.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,2848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2848, ctx.r6.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lwz r29,2828(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2828);
	// lwz r30,2824(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2824);
	// lwz r31,2820(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2820);
	// bl 0x820c0d30
	ctx.lr = 0x823C8CFC;
	sub_820C0D30(ctx, base);
	// add r6,r31,r29
	ctx.r6.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r5,r30,r28
	ctx.r5.u64 = ctx.r30.u64 + ctx.r28.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// bl 0x820c0c38
	ctx.lr = 0x823C8D20;
	sub_820C0C38(ctx, base);
loc_823C8D20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C8C38) {
	__imp__sub_823C8C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8D28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r3,5740
	ctx.r8.s64 = ctx.r3.s64 + 5740;
	// stw r11,5740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5740, ctx.r11.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r7,5744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5744, ctx.r7.u32);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r6,5748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5748, ctx.r6.u32);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r5,5752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5752, ctx.r5.u32);
	// stw r10,5696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5696, ctx.r10.u32);
	// stb r9,5772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5772, ctx.r9.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8D28) {
	__imp__sub_823C8D28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8D60) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r7.u32);
	// addi r8,r3,5740
	ctx.r8.s64 = ctx.r3.s64 + 5740;
	// stw r10,5696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5696, ctx.r10.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r9,5772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5772, ctx.r9.u8);
	// stw r7,5740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5740, ctx.r7.u32);
	// stw r6,5744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5744, ctx.r6.u32);
	// stw r5,5748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5748, ctx.r5.u32);
	// stw r4,5752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5752, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8D60) {
	__imp__sub_823C8D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8DAC) {
	__imp__sub_823C8DAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8DB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,5764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5764);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r8,5768(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// stw r10,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r10.u32);
	// stw r8,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lwz r5,12(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,5696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5696, ctx.r11.u32);
	// stb r7,5772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5772, ctx.r7.u8);
	// stw r6,5748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5748, ctx.r6.u32);
	// stw r10,5744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5744, ctx.r10.u32);
	// stw r4,5740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5740, ctx.r4.u32);
	// stw r5,5752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5752, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8DB0) {
	__imp__sub_823C8DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,5768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,5764(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5764);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// stb r11,5772(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5772, ctx.r11.u8);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// std r5,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r5.u64);
	// lfd f8,-24(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// frsp f6,f12
	ctx.f6.f64 = double(float(ctx.f12.f64));
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// std r4,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r4.u64);
	// lfd f13,-32(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r7,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r7.u64);
	// lfd f11,-32(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r6,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r6.u64);
	// lfd f10,-32(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// std r5,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r5.u64);
	// fcfid f3,f11
	ctx.f3.f64 = double(ctx.f11.s64);
	// lfd f9,-32(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// stfs f6,3924(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3924, temp.u32);
	// fdivs f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f6.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f10,f5
	ctx.f10.f64 = double(float(ctx.f5.f64));
	// stfs f4,3920(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3920, temp.u32);
	// fcfid f1,f9
	ctx.f1.f64 = double(ctx.f9.s64);
	// stfs f11,3932(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3932, temp.u32);
	// fdivs f9,f0,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// lfs f12,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// stfs f9,3928(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 3928, temp.u32);
	// fmuls f6,f10,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lhz r11,5386(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5386);
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// frsp f5,f1
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// sth r4,5386(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5386, ctx.r4.u16);
	// fmuls f4,f8,f9
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f0,4588(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4588, temp.u32);
	// fmuls f2,f6,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// fmuls f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f13,5484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4584(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4584, temp.u32);
	// fmuls f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f0,4576(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4576, temp.u32);
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f12,4580(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4580, temp.u32);
	// lhz r11,5468(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5468);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,5468(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5468, ctx.r10.u16);
	// fadds f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fadds f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f10,4592(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4592, temp.u32);
	// stfs f11,4596(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4596, temp.u32);
	// stfs f13,4600(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4600, temp.u32);
	// stfs f13,4604(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4604, temp.u32);
	// lhz r11,5470(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5470);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,5470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5470, ctx.r8.u16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8E00) {
	__imp__sub_823C8E00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8F3C) {
	__imp__sub_823C8F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8F40) {
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
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r31,144(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d41b0
	ctx.lr = 0x823C8F68;
	sub_823D41B0(ctx, base);
	// lbz r11,5772(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c8fac
	if (ctx.cr6.eq) goto loc_823C8FAC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8a38
	ctx.lr = 0x823C8F80;
	sub_823C8A38(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x823c8c38
	ctx.lr = 0x823C8F8C;
	sub_823C8C38(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823c8fa0
	if (ctx.cr6.eq) goto loc_823C8FA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8c38
	ctx.lr = 0x823C8FA0;
	sub_823C8C38(ctx, base);
loc_823C8FA0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8e00
	ctx.lr = 0x823C8FAC;
	sub_823C8E00(ctx, base);
loc_823C8FAC:
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

PPC_WEAK_FUNC(sub_823C8F40) {
	__imp__sub_823C8F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8FC4) {
	__imp__sub_823C8FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-11224
	ctx.r9.s64 = ctx.r11.s64 + -11224;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C8FC8) {
	__imp__sub_823C8FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C8FDC) {
	__imp__sub_823C8FDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C8FE0) {
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
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r8,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820ca780
	ctx.lr = 0x823C901C;
	sub_820CA780(ctx, base);
	// addi r7,r31,20
	ctx.r7.s64 = ctx.r31.s64 + 20;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r5,r30
	PPC_STORE_U32(ctx.r5.u32 + ctx.r30.u32, ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_823C8FE0) {
	__imp__sub_823C8FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9044) {
	__imp__sub_823C9044(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823C9050;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r3,80
	ctx.r30.s64 = ctx.r3.s64 + 80;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_823C9070:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x823c909c
	if (!ctx.cr6.eq) goto loc_823C909C;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r3,144(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x820ca780
	ctx.lr = 0x823C9098;
	sub_820CA780(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_823C909C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823c9070
	if (ctx.cr6.lt) goto loc_823C9070;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9048) {
	__imp__sub_823C9048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C90B4) {
	__imp__sub_823C90B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C90B8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,-11224
	ctx.r8.s64 = ctx.r10.s64 + -11224;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r7,-26624
	ctx.r11.s64 = ctx.r7.s64 + -26624;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r4,5760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5760, ctx.r4.u32);
	// lwzx r8,r5,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// stw r8,5764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5764, ctx.r8.u32);
	// lwzx r7,r5,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stw r7,5768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5768, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C90B8) {
	__imp__sub_823C90B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C90FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C90FC) {
	__imp__sub_823C90FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9100) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-26624
	ctx.r11.s64 = ctx.r10.s64 + -26624;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// lwzx r3,r8,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwzx r11,r8,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C9100) {
	__imp__sub_823C9100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9130) {
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
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// beq cr6,0x823c91b4
	if (ctx.cr6.eq) goto loc_823C91B4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x820c2a70
	ctx.lr = 0x823C91A4;
	sub_820C2A70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_823C91B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820c2a70
	ctx.lr = 0x823C91BC;
	sub_820C2A70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C9130) {
	__imp__sub_823C9130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C91CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C91CC) {
	__imp__sub_823C91CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C91D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c9130
	sub_823C9130(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C91D0) {
	__imp__sub_823C91D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C91D4) {
	__imp__sub_823C91D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C91D8) {
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
	// rlwinm r11,r4,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x823c9220
	if (!ctx.cr6.eq) goto loc_823C9220;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,13188(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13188);
	// lwz r10,12712(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12712);
	// lfs f13,15124(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x823c9260
	goto loc_823C9260;
loc_823C9220:
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31780
	ctx.r9.s64 = -2082734080;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,12760(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12760);
	// lwz r10,12728(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12728);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,15124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 15124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f10,f12
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
loc_823C9260:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// fneg f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r10,r11,13512
	ctx.r10.s64 = ctx.r11.s64 + 13512;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c9294
	if (ctx.cr6.eq) goto loc_823C9294;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x820bf458
	ctx.lr = 0x823C9290;
	sub_820BF458(ctx, base);
	// b 0x823c92a4
	goto loc_823C92A4;
loc_823C9294:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_823C92A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820bf520
	ctx.lr = 0x823C92B0;
	sub_820BF520(ctx, base);
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

PPC_WEAK_FUNC(sub_823C91D8) {
	__imp__sub_823C91D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C92C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C92C4) {
	__imp__sub_823C92C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C92C8) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r31,r3,144
	ctx.r31.s64 = ctx.r3.s64 + 144;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823c9300
	if (ctx.cr6.eq) goto loc_823C9300;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820c0f58
	ctx.lr = 0x823C9300;
	sub_820C0F58(ctx, base);
loc_823C9300:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,88(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// addi r4,r30,52
	ctx.r4.s64 = ctx.r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c7530
	ctx.lr = 0x823C9314;
	sub_823C7530(ctx, base);
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

PPC_WEAK_FUNC(sub_823C92C8) {
	__imp__sub_823C92C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C932C) {
	__imp__sub_823C932C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C9338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r11,0,4,4
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// rlwinm r8,r11,7,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x8;
	// subfic r7,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r9.s64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// or r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 | ctx.r8.u64;
	// bl 0x820bf618
	ctx.lr = 0x823C9368;
	sub_820BF618(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r4,r10,21,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// bl 0x820be980
	ctx.lr = 0x823C937C;
	sub_820BE980(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r8,r9,20,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xC;
	// addi r29,r11,-11404
	ctx.r29.s64 = ctx.r11.s64 + -11404;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r8,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// bl 0x820be920
	ctx.lr = 0x823C9398;
	sub_820BE920(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,37
	ctx.r7.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r6,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// subfic r4,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r4.s64 = 0 - ctx.r5.s64;
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 & ctx.r7.u64;
	// bl 0x820be950
	ctx.lr = 0x823C93B8;
	sub_820BE950(ctx, base);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r9,r6,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823c93e0
	if (!ctx.cr6.eq) goto loc_823C93E0;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// bl 0x820c17b8
	ctx.lr = 0x823C93DC;
	sub_820C17B8(ctx, base);
	// b 0x823c93ec
	goto loc_823C93EC;
loc_823C93E0:
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823c9fd0
	ctx.lr = 0x823C93EC;
	sub_823C9FD0(ctx, base);
loc_823C93EC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x820bf0a8
	ctx.lr = 0x823C93FC;
	sub_820BF0A8(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwinm r4,r9,31,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// bl 0x820bf068
	ctx.lr = 0x823C9410;
	sub_820BF068(ctx, base);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r8,r29,84
	ctx.r8.s64 = ctx.r29.s64 + 84;
	// rlwinm r6,r7,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r6,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// bl 0x820bf0d8
	ctx.lr = 0x823C9428;
	sub_820BF0D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823c91d8
	ctx.lr = 0x823C9434;
	sub_823C91D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x823c8948
	ctx.lr = 0x823C9440;
	sub_823C8948(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9330) {
	__imp__sub_823C9330(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9448) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// bl 0x820c0c38
	ctx.lr = 0x823C9498;
	sub_820C0C38(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r7.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r6,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r6.u32);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r5,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r5.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r4,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r4.u32);
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

PPC_WEAK_FUNC(sub_823C9448) {
	__imp__sub_823C9448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C94D0) {
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
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823c8f40
	ctx.lr = 0x823C94F0;
	sub_823C8F40(ctx, base);
	// lwz r31,132(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x820bf440
	ctx.lr = 0x823C9500;
	sub_820BF440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9448
	ctx.lr = 0x823C950C;
	sub_823C9448(ctx, base);
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

PPC_WEAK_FUNC(sub_823C94D0) {
	__imp__sub_823C94D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9524) {
	__imp__sub_823C9524(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9528) {
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
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x820bf440
	ctx.lr = 0x823C9548;
	sub_820BF440(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r10,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r10.u32);
	// stw r10,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823C9528) {
	__imp__sub_823C9528(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9574) {
	__imp__sub_823C9574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9578) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x820bf440
	ctx.lr = 0x823C95A0;
	sub_820BF440(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9448
	ctx.lr = 0x823C95AC;
	sub_823C9448(ctx, base);
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

PPC_WEAK_FUNC(sub_823C9578) {
	__imp__sub_823C9578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C95C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C95C4) {
	__imp__sub_823C95C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C95C8) {
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
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// bl 0x820bf440
	ctx.lr = 0x823C95E8;
	sub_820BF440(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// stw r10,2820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2820, ctx.r10.u32);
	// stw r10,2824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2824, ctx.r10.u32);
	// stw r11,2828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2828, ctx.r11.u32);
	// stw r11,2832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2832, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823C95C8) {
	__imp__sub_823C95C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C9614) {
	__imp__sub_823C9614(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C9620;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c964c
	if (ctx.cr6.eq) goto loc_823C964C;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x820c0f58
	ctx.lr = 0x823C964C;
	sub_820C0F58(ctx, base);
loc_823C964C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c75f8
	ctx.lr = 0x823C966C;
	sub_823C75F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r30,r30,76
	ctx.r30.s64 = ctx.r30.s64 + 76;
	// rldicr r28,r11,63,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_823C967C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// srd r6,r28,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r28.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x820ca780
	ctx.lr = 0x823C9698;
	sub_820CA780(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x823c967c
	if (ctx.cr6.lt) goto loc_823C967C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C9618) {
	__imp__sub_823C9618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C96B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C96B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r29,200(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r10,75(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 75);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c9750
	if (ctx.cr6.eq) goto loc_823C9750;
	// lis r30,-31799
	ctx.r30.s64 = -2083979264;
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823c9704
	if (!ctx.cr6.eq) goto loc_823C9704;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_823C9704:
	// li r5,98
	ctx.r5.s64 = 98;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c87a8
	ctx.lr = 0x823C9714;
	sub_823C87A8(ctx, base);
	// lbz r11,75(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 75);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c9750
	if (ctx.cr6.eq) goto loc_823C9750;
	// lwz r11,3216(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3216);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823c9740
	if (!ctx.cr6.eq) goto loc_823C9740;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r6,r11,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_823C9740:
	// li r5,98
	ctx.r5.s64 = 98;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c87a8
	ctx.lr = 0x823C9750;
	sub_823C87A8(ctx, base);
loc_823C9750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C96B0) {
	__imp__sub_823C96B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C9758) {
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
	// std r3,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,200(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lbz r9,75(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 75);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c97a0
	if (ctx.cr6.eq) goto loc_823C97A0;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,114
	ctx.r5.s64 = 114;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,3216(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3216);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x823c87a8
	ctx.lr = 0x823C97A0;
	sub_823C87A8(ctx, base);
loc_823C97A0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C9758) {
	__imp__sub_823C9758(ctx, base);
}

