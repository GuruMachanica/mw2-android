#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82197940) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,60(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82197968
	if (ctx.cr6.eq) goto loc_82197968;
	// b 0x82197838
	sub_82197838(ctx, base);
	return;
loc_82197968:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r10,r10,-5000
	ctx.r10.s64 = ctx.r10.s64 + -5000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82197988
	if (!ctx.cr6.lt) goto loc_82197988;
	// b 0x821894d0
	sub_821894D0(ctx, base);
	return;
loc_82197988:
	// b 0x82197398
	sub_82197398(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197940) {
	__imp__sub_82197940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219798C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219798C) {
	__imp__sub_8219798C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197990) {
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
	// bl 0x821a0218
	ctx.lr = 0x821979A0;
	sub_821A0218(ctx, base);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r9,2928(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2928);
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// addi r5,r10,31040
	ctx.r5.s64 = ctx.r10.s64 + 31040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x82189be8
	ctx.lr = 0x821979CC;
	sub_82189BE8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82197990) {
	__imp__sub_82197990(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821979DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821979DC) {
	__imp__sub_821979DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821979E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f0,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821979E0) {
	__imp__sub_821979E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fadds f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// fsubs f12,f2,f1
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f6,f10
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fmadds f1,f5,f8,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f11.f64));
	// fmadds f0,f3,f8,f10
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fmadds f13,f2,f8,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f9.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f9,8(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82197A18) {
	__imp__sub_82197A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82197A8C) {
	__imp__sub_82197A8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197A90) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82197ad4
	if (!ctx.cr6.eq) goto loc_82197AD4;
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82197c8c
	goto loc_82197C8C;
loc_82197AD4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82197b0c
	if (!ctx.cr6.eq) goto loc_82197B0C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fadds f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f31,f1
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f0,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// b 0x82197c8c
	goto loc_82197C8C;
loc_82197B0C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f12,f1
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823dde20
	ctx.lr = 0x82197B2C;
	sub_823DDE20(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f29,f5,f31
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fsubs f31,f30,f4
	ctx.f31.f64 = double(float(ctx.f30.f64 - ctx.f4.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823df940
	ctx.lr = 0x82197B78;
	sub_823DF940(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// bne cr6,0x82197be4
	if (!ctx.cr6.eq) goto loc_82197BE4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f0,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f0,f7,f12
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// b 0x82197c70
	goto loc_82197C70;
loc_82197BE4:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// lfs f13,2416(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmadds f8,f9,f13,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmsubs f0,f0,f13,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f7.f64));
	// beq cr6,0x82197c44
	if (ctx.cr6.eq) goto loc_82197C44;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82197C38:
	// lfsu f11,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bdnz 0x82197c38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82197C38;
loc_82197C44:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f6,f7,f13,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmadds f5,f6,f12,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fadds f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
loc_82197C70:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
loc_82197C8C:
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

PPC_WEAK_FUNC(sub_82197A90) {
	__imp__sub_82197A90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82197CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82197CB8;
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82197d14
	if (!ctx.cr6.eq) goto loc_82197D14;
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,8(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82197D14:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82197d8c
	if (!ctx.cr6.eq) goto loc_82197D8C;
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f30,f1
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f3,f5,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f1,f6,f2,f11
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fmadds f0,f4,f2,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f10.f64));
	// fmadds f13,f3,f2,f9
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82197D8C:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f12,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823dde20
	ctx.lr = 0x82197DAC;
	sub_823DDE20(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r8,r30
	ctx.r8.s64 = ctx.r30.s32;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// fmuls f30,f5,f30
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fsubs f31,f31,f4
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823df940
	ctx.lr = 0x82197DF8;
	sub_823DF940(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f2,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// bne cr6,0x82197e9c
	if (!ctx.cr6.eq) goto loc_82197E9C;
	// add r8,r30,r11
	ctx.r8.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f8.f64));
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f7.f64));
	// fmadds f0,f4,f9,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f13,f2,f9,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f12,f1,f9,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f10,0(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// b 0x82198004
	goto loc_82198004;
loc_82197E9C:
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fneg f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f8,f11,f9
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmadds f9,f5,f11,f7
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmadds f8,f2,f11,f4
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f7,f1,f12
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmuls f5,f8,f12
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmadds f4,f10,f0,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f0,f6
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f12,f1,f0,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// beq cr6,0x82197f78
	if (ctx.cr6.eq) goto loc_82197F78;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82197F38:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bdnz 0x82197f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82197F38;
loc_82197F78:
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// fmuls f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f6,f12,f6,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f5,f3,f12,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmadds f4,f7,f12,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f3,f6,f13,f11
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f2,f5,f13,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfs f2,4(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f1,f4,f13,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f0,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f0,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f1.f64));
loc_82198004:
	// stfs f8,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f4,8(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82197CB0) {
	__imp__sub_82197CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198060) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198060) {
	__imp__sub_82198060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219806C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219806C) {
	__imp__sub_8219806C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198070) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// b 0x82177148
	sub_82177148(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198070) {
	__imp__sub_82198070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219807C) {
	__imp__sub_8219807C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198080) {
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
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r11,13484
	ctx.r4.s64 = ctx.r11.s64 + 13484;
	// bl 0x82177148
	ctx.lr = 0x8219809C;
	sub_82177148(ctx, base);
	// lis r10,-32075
	ctx.r10.s64 = -2102067200;
	// stw r3,15016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15016, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198080) {
	__imp__sub_82198080(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821980B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821980B4) {
	__imp__sub_821980B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821980B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821980C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821980fc
	if (ctx.cr6.eq) goto loc_821980FC;
loc_821980DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x821980E8;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b38
	ctx.lr = 0x821980EC;
	sub_82300B38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x821980dc
	if (!ctx.cr6.eq) goto loc_821980DC;
loc_821980FC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821980B8) {
	__imp__sub_821980B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198108) {
	PPC_FUNC_PROLOGUE();
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// ori r9,r11,28672
	ctx.r9.u64 = ctx.r11.u64 | 28672;
	// addi r11,r10,-25856
	ctx.r11.s64 = ctx.r10.s64 + -25856;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// stw r11,4124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4124, ctx.r11.u32);
	// addis r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stw r8,4128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4128, ctx.r8.u32);
	// stw r7,4132(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4132, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198108) {
	__imp__sub_82198108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,4
	ctx.r11.s64 = 262144;
	// lis r10,-32074
	ctx.r10.s64 = -2102001664;
	// ori r9,r11,28672
	ctx.r9.u64 = ctx.r11.u64 | 28672;
	// addi r10,r10,-25856
	ctx.r10.s64 = ctx.r10.s64 + -25856;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,7560
	ctx.r11.s64 = ctx.r11.s64 + 7560;
	// addis r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 65536;
	// addis r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 65536;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// stw r10,4124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4124, ctx.r10.u32);
	// addi r6,r6,16384
	ctx.r6.s64 = ctx.r6.s64 + 16384;
	// ori r9,r5,65535
	ctx.r9.u64 = ctx.r5.u64 | 65535;
	// stw r7,4128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4128, ctx.r7.u32);
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r6,4132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4132, ctx.r6.u32);
loc_82198190:
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82198190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82198190;
	// sth r9,4106(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4106, ctx.r9.u16);
	// li r8,511
	ctx.r8.s64 = 511;
	// sth r9,4108(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4108, ctx.r9.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r9,4110(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4110, ctx.r9.u16);
	// addi r10,r11,4106
	ctx.r10.s64 = ctx.r11.s64 + 4106;
	// sth r9,4112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4112, ctx.r9.u16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// sth r9,4114(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4114, ctx.r9.u16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// li r5,-1
	ctx.r5.s64 = -1;
loc_821981CC:
	// lwz r7,4124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// addi r8,r10,64
	ctx.r8.s64 = ctx.r10.s64 + 64;
	// srawi r4,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 6;
	// sthx r9,r10,r7
	PPC_STORE_U16(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u16);
	// lwz r7,4124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r4,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r4.u16);
	// lwz r7,4124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
	// bdnz 0x821981cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821981CC;
	// lwz r10,4124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// li r7,2047
	ctx.r7.s64 = 2047;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// sth r9,32704(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32704, ctx.r9.u16);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r10,4124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// sth r9,32706(r10)
	PPC_STORE_U16(ctx.r10.u32 + 32706, ctx.r9.u16);
	// lwz r10,4124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4124);
	// stw r5,32708(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32708, ctx.r5.u32);
	// lwz r10,4128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4128);
	// stw r10,4116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4116, ctx.r10.u32);
loc_82198228:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r8,r8,24
	ctx.r8.s64 = ctx.r8.s64 + 24;
	// lwz r10,4128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4128);
	// bdnz 0x82198228
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82198228;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r7,3071
	ctx.r7.s64 = 3071;
	// ori r5,r8,49128
	ctx.r5.u64 = ctx.r8.u64 | 49128;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stwx r6,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u32);
	// lwz r10,4132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4132);
	// stw r10,4120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4120, ctx.r10.u32);
loc_82198260:
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r7,68
	ctx.r7.s64 = ctx.r7.s64 + 68;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// addi r8,r8,68
	ctx.r8.s64 = ctx.r8.s64 + 68;
	// lwz r10,4132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4132);
	// bdnz 0x82198260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82198260;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// ori r5,r7,12220
	ctx.r5.u64 = ctx.r7.u64 | 12220;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stwx r6,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r6.u32);
	// addi r10,r11,4144
	ctx.r10.s64 = ctx.r11.s64 + 4144;
	// sth r9,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r9.u16);
	// sth r9,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r9.u16);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// stb r6,4144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4144, ctx.r6.u8);
	// stb r6,4145(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4145, ctx.r6.u8);
	// stb r6,4146(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4146, ctx.r6.u8);
	// stb r6,4147(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4147, ctx.r6.u8);
	// stb r6,4148(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4148, ctx.r6.u8);
	// stw r6,4136(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4136, ctx.r6.u32);
	// stw r6,4140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4140, ctx.r6.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198140) {
	__imp__sub_82198140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821982C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821982C4) {
	__imp__sub_821982C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821982C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82198140
	sub_82198140(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821982C8) {
	__imp__sub_821982C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821982CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821982CC) {
	__imp__sub_821982CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821982D0) {
	PPC_FUNC_PROLOGUE();
	// lhz r11,60(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
loc_821982D4:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4128);
	// lwz r8,4116(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r8,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// lhz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// stw r10,4116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4116, ctx.r10.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821982d4
	if (!ctx.cr6.eq) goto loc_821982D4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821982D0) {
	__imp__sub_821982D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198304) {
	__imp__sub_82198304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198308) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,62(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 62);
loc_8219830C:
	// lwz r11,4132(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// lwz r9,4120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4120);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r11,4120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4120, ctx.r11.u32);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219830c
	if (!ctx.cr6.eq) goto loc_8219830C;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198308) {
	__imp__sub_82198308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198334) {
	__imp__sub_82198334(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198338) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// lhz r10,60(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r11.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
loc_82198350:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,4128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4128);
	// lwz r7,4116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r7,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// lhz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 20);
	// stw r10,4116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4116, ctx.r10.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82198350
	if (!ctx.cr6.eq) goto loc_82198350;
	// lhz r10,62(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 62);
loc_82198380:
	// lwz r9,4132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// mulli r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 * 68;
	// lwz r10,4120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4120);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lhz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,4120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4120, ctx.r11.u32);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// bne cr6,0x82198380
	if (!ctx.cr6.eq) goto loc_82198380;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821983c4
	if (ctx.cr6.eq) goto loc_821983C4;
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sthx r7,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r7.u16);
loc_821983C4:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821983e8
	if (ctx.cr6.eq) goto loc_821983E8;
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r9.u16);
	// b 0x821983f8
	goto loc_821983F8;
loc_821983E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821983f8
	if (ctx.cr6.eq) goto loc_821983F8;
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
loc_821983F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198338) {
	__imp__sub_82198338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198410) {
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
	// lbz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821984ac
	if (ctx.cr6.gt) goto loc_821984AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8219849c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219849C;
	// bdzf 4*cr6+eq,0x82198488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82198488;
	// bdzf 4*cr6+eq,0x8219844c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219844C;
	// bne cr6,0x821984a4
	if (!ctx.cr6.eq) goto loc_821984A4;
	// addi r5,r3,6
	ctx.r5.s64 = ctx.r3.s64 + 6;
	// b 0x821984a8
	goto loc_821984A8;
loc_8219844C:
	// lbz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82198488
	if (ctx.cr6.eq) goto loc_82198488;
	// rlwinm r31,r11,27,30,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// addi r11,r31,2053
	ctx.r11.s64 = ctx.r31.s64 + 2053;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82198338
	ctx.lr = 0x82198470;
	sub_82198338(ctx, base);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r10,r11,4144
	ctx.r10.s64 = ctx.r11.s64 + 4144;
	// lbz r10,4144(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4144);
	// addi r10,r10,255
	ctx.r10.s64 = ctx.r10.s64 + 255;
	// stb r10,4144(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4144, ctx.r10.u8);
	// b 0x821984ac
	goto loc_821984AC;
loc_82198488:
	// lhz r11,50(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 50);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x821984a8
	goto loc_821984A8;
loc_8219849C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821984a8
	goto loc_821984A8;
loc_821984A4:
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
loc_821984A8:
	// bl 0x82198338
	ctx.lr = 0x821984AC;
	sub_82198338(ctx, base);
loc_821984AC:
	// lwz r11,4140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4140, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82198410) {
	__imp__sub_82198410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821984CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821984CC) {
	__imp__sub_821984CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821984D0) {
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
	// lwz r4,4124(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// addis r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 65536;
	// addi r31,r31,-32768
	ctx.r31.s64 = ctx.r31.s64 + -32768;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82198524
	if (ctx.cr6.eq) goto loc_82198524;
loc_821984FC:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82198518
	if (ctx.cr6.eq) goto loc_82198518;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82198518
	if (ctx.cr6.lt) goto loc_82198518;
	// bl 0x82198410
	ctx.lr = 0x82198518;
	sub_82198410(ctx, base);
loc_82198518:
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// cmplw cr6,r4,r31
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821984fc
	if (!ctx.cr6.eq) goto loc_821984FC;
loc_82198524:
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

PPC_WEAK_FUNC(sub_821984D0) {
	__imp__sub_821984D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219853C) {
	__imp__sub_8219853C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 65536;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821985b8
	if (ctx.cr6.eq) goto loc_821985B8;
loc_82198558:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821985ac
	if (ctx.cr6.eq) goto loc_821985AC;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82198580
	if (!ctx.cr6.eq) goto loc_82198580;
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// rlwinm r7,r10,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821985ac
	if (!ctx.cr6.eq) goto loc_821985AC;
loc_82198580:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821985a8
	if (ctx.cr6.eq) goto loc_821985A8;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821985a8
	if (ctx.cr6.lt) goto loc_821985A8;
	// bne cr6,0x821985ac
	if (!ctx.cr6.eq) goto loc_821985AC;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x821985ac
	if (!ctx.cr6.lt) goto loc_821985AC;
loc_821985A8:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821985AC:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82198558
	if (!ctx.cr6.eq) goto loc_82198558;
loc_821985B8:
	// b 0x82198410
	sub_82198410(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198540) {
	__imp__sub_82198540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821985BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821985BC) {
	__imp__sub_821985BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821985C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821985C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r28,24
	ctx.r28.s64 = 24;
loc_821985DC:
	// lwz r11,4116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821985ec
	if (!ctx.cr6.eq) goto loc_821985EC;
	// bl 0x82198540
	ctx.lr = 0x821985EC;
	sub_82198540(ctx, base);
loc_821985EC:
	// lwz r11,4116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4116);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4116, ctx.r10.u32);
	// sth r29,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r29.u16);
	// lwz r9,4128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4128);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r28
	ctx.r7.s32 = ctx.r8.s32 / ctx.r28.s32;
	// clrlwi r29,r7,16
	ctx.r29.u64 = ctx.r7.u32 & 0xFFFF;
	// blt cr6,0x8219864c
	if (ctx.cr6.lt) goto loc_8219864C;
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// addi r10,r30,20
	ctx.r10.s64 = ctx.r30.s64 + 20;
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
loc_82198620:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82198640
	if (!ctx.cr0.eq) goto loc_82198640;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82198620
	if (!ctx.cr6.eq) goto loc_82198620;
loc_82198640:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82198650
	if (ctx.cr6.eq) goto loc_82198650;
loc_8219864C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82198650:
	// mulli r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 * 14;
	// subf. r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bne 0x821985dc
	if (!ctx.cr0.eq) goto loc_821985DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821985C0) {
	__imp__sub_821985C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219866C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219866C) {
	__imp__sub_8219866C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82198678;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// li r30,-1
	ctx.r30.s64 = -1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// li r29,68
	ctx.r29.s64 = 68;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
loc_82198690:
	// lwz r11,4120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821986a0
	if (!ctx.cr6.eq) goto loc_821986A0;
	// bl 0x82198540
	ctx.lr = 0x821986A0;
	sub_82198540(ctx, base);
loc_821986A0:
	// lwz r11,4120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4120);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4120, ctx.r10.u32);
	// sth r30,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r30.u16);
	// lwz r9,4132(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divw r7,r8,r29
	ctx.r7.s32 = ctx.r8.s32 / ctx.r29.s32;
	// clrlwi r30,r7,16
	ctx.r30.u64 = ctx.r7.u32 & 0xFFFF;
	// bne 0x82198690
	if (!ctx.cr0.eq) goto loc_82198690;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198670) {
	__imp__sub_82198670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821986D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821986D4) {
	__imp__sub_821986D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821986D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821986E0;
	__savegprlr_29(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821987bc
	if (ctx.cr6.eq) goto loc_821987BC;
loc_82198704:
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lwz r11,4124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// rotlwi r10,r10,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 6);
	// lwz r9,44(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,44(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82198758
	if (!ctx.cr6.eq) goto loc_82198758;
	// addi r11,r6,48
	ctx.r11.s64 = ctx.r6.s64 + 48;
	// addi r10,r7,48
	ctx.r10.s64 = ctx.r7.s64 + 48;
	// addi r31,r11,7
	ctx.r31.s64 = ctx.r11.s64 + 7;
loc_82198730:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82198750
	if (!ctx.cr0.eq) goto loc_82198750;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82198730
	if (!ctx.cr6.eq) goto loc_82198730;
loc_82198750:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821987a0
	if (ctx.cr6.eq) goto loc_821987A0;
loc_82198758:
	// lfs f0,20(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f4,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
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
	// bge cr6,0x821987a8
	if (!ctx.cr6.lt) goto loc_821987A8;
loc_821987A0:
	// sth r30,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r30.u16);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_821987A8:
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r8,r6,2
	ctx.r8.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82198704
	if (!ctx.cr6.eq) goto loc_82198704;
loc_821987BC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821987ec
	if (ctx.cr6.eq) goto loc_821987EC;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r11,4124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rotlwi r10,r9,6
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
loc_821987EC:
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821986D8) {
	__imp__sub_821986D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821987F0) {
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
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821986d8
	ctx.lr = 0x82198824;
	sub_821986D8(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// srawi r6,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 6;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r8,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r8.u16);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82198860
	if (ctx.cr6.eq) goto loc_82198860;
	// lwz r8,4124(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// rlwinm r7,r10,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sthx r11,r7,r8
	PPC_STORE_U16(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u16);
loc_82198860:
	// sth r11,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
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

PPC_WEAK_FUNC(sub_821987F0) {
	__imp__sub_821987F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219887C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219887C) {
	__imp__sub_8219887C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82198888;
	__savegprlr_27(ctx, base);
loc_82198888:
	// rlwinm r11,r5,1,15,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1FFFE;
	// lwz r10,4128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4128);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r28,2
	ctx.r28.s64 = 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bge cr6,0x821988b0
	if (!ctx.cr6.lt) goto loc_821988B0;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_821988B0:
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r30,r29,12
	ctx.r30.s64 = ctx.r29.s64 + 12;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821988C8:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x821988c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821988C8;
	// addi r5,r29,-2
	ctx.r5.s64 = ctx.r29.s64 + -2;
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
loc_821988DC:
	// lhz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + -4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lhz r10,-2(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + -2);
	// sth r10,4(r5)
	PPC_STORE_U16(ctx.r5.u32 + 4, ctx.r10.u16);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,14
	ctx.r9.s64 = ctx.r9.s64 + 14;
	// sthu r8,6(r5)
	ea = 6 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r5.u32 = ea;
	// beq cr6,0x82198938
	if (ctx.cr6.eq) goto loc_82198938;
	// addi r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 + 7;
loc_82198910:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r27,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82198930
	if (!ctx.cr0.eq) goto loc_82198930;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82198910
	if (!ctx.cr6.eq) goto loc_82198910;
loc_82198930:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821988dc
	if (ctx.cr6.eq) goto loc_821988DC;
loc_82198938:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// lhz r5,20(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 20);
	// mulli r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 * 14;
	// stb r10,19(r29)
	PPC_STORE_U8(ctx.r29.u32 + 19, ctx.r10.u8);
	// subf. r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne 0x82198888
	if (!ctx.cr0.eq) goto loc_82198888;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198880) {
	__imp__sub_82198880(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
loc_82198960:
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r10,4132(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4132);
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ble cr6,0x82198980
	if (!ctx.cr6.gt) goto loc_82198980;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82198980:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r7,r30,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r30.s64;
loc_8219898C:
	// li r8,8
	ctx.r8.s64 = 8;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_821989A0:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821989a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821989A0;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x8219898c
	if (ctx.cr6.lt) goto loc_8219898C;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lhz r5,64(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 64);
	// subf. r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne 0x82198960
	if (!ctx.cr0.eq) goto loc_82198960;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198958) {
	__imp__sub_82198958(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821989DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821989DC) {
	__imp__sub_821989DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821989E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4124(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82198a34
	if (ctx.cr6.eq) goto loc_82198A34;
loc_821989F4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82198a28
	if (ctx.cr6.eq) goto loc_82198A28;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// bne cr6,0x82198a28
	if (!ctx.cr6.eq) goto loc_82198A28;
	// lbz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82198a28
	if (!ctx.cr6.eq) goto loc_82198A28;
	// lhz r9,50(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82198a3c
	if (ctx.cr6.eq) goto loc_82198A3C;
loc_82198A28:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821989f4
	if (!ctx.cr6.eq) goto loc_821989F4;
loc_82198A34:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82198A3C:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r8,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 6;
	// clrlwi r3,r8,16
	ctx.r3.u64 = ctx.r8.u32 & 0xFFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821989E0) {
	__imp__sub_821989E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198A50) {
	PPC_FUNC_PROLOGUE();
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82198a68
	if (ctx.cr6.eq) goto loc_82198A68;
	// subf r3,r9,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82198A68:
	// lbz r11,5(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// lbz r10,5(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82198ac8
	if (!ctx.cr6.eq) goto loc_82198AC8;
	// lbz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 6);
	// lbz r10,6(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82198ac8
	if (!ctx.cr6.eq) goto loc_82198AC8;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// bne cr6,0x82198ab8
	if (!ctx.cr6.eq) goto loc_82198AB8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82198ac8
	if (!ctx.cr6.eq) goto loc_82198AC8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// subf r3,r9,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r9.s64;
	// blr 
	return;
loc_82198AB8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82198ac8
	if (!ctx.cr6.eq) goto loc_82198AC8;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// lbz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
loc_82198AC8:
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198A50) {
	__imp__sub_82198A50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198AD0) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// addi r3,r3,6
	ctx.r3.s64 = ctx.r3.s64 + 6;
	// bl 0x82198a50
	ctx.lr = 0x82198AF0;
	sub_82198A50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82198b14
	if (ctx.cr6.eq) goto loc_82198B14;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
	// andc r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r3.u64;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82198B14:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// lhz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82198AD0) {
	__imp__sub_82198AD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82198B40;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,2047
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2047, ctx.xer);
	// beq cr6,0x82198ce8
	if (ctx.cr6.eq) goto loc_82198CE8;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r4,404
	ctx.r10.s64 = ctx.r4.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82198ce8
	if (ctx.cr6.eq) goto loc_82198CE8;
	// lis r11,255
	ctx.r11.s64 = 16711680;
	// lwz r10,348(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// ori r9,r11,65535
	ctx.r9.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82198ce8
	if (!ctx.cr6.eq) goto loc_82198CE8;
	// lhz r3,340(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 340);
	// bl 0x823862b0
	ctx.lr = 0x82198B9C;
	sub_823862B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x822da650
	ctx.lr = 0x82198BAC;
	sub_822DA650(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r31,28
	ctx.r9.s64 = ctx.r31.s64 + 28;
	// lvlx128 v38,r0,r29
	temp.u32 = ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lis r5,-31852
	ctx.r5.s64 = -2087452672;
	// vslw128 v61,v63,v63
	ctx.v61.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v61.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v61.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v61.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lvrx128 v52,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslw128 v60,v63,v63
	ctx.v60.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v60.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v60.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v60.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// addi r3,r5,-30336
	ctx.r3.s64 = ctx.r5.s64 + -30336;
	// lvrx128 v55,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vslw128 v59,v63,v63
	ctx.v59.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v59.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v59.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v59.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lvlx128 v56,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslw128 v58,v63,v63
	ctx.v58.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v58.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v58.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v58.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// lvlx128 v53,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v54,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvlx128 v50,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v51,v53,v55
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v49,v50,v52
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8)));
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lvrx128 v39,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// vor128 v36,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// vspltw128 v7,v49,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0x55));
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lvrx128 v48,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltw128 v6,v49,1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xAA));
	// lvlx128 v47,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v5,v49,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v49.u32), 0xFF));
	// lvrx128 v46,r11,r26
	temp.u32 = ctx.r11.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v44,v47,v48
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// vand128 v13,v54,v63
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvlx128 v45,r0,r25
	temp.u32 = ctx.r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v11,v51,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v42,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v43,v45,v46
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v41,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vand128 v12,v44,v63
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r3,r3,-5840
	ctx.r3.s64 = ctx.r3.s64 + -5840;
	// vor128 v40,v41,v42
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// vmaddfp v11,v13,v7,v11
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v7.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vandc128 v9,v13,v61
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vand128 v0,v43,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vandc128 v13,v12,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vspltw128 v37,v40,0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xFF));
	// vand128 v34,v36,v63
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vspltw128 v10,v40,1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0xAA));
	// lvx128 v62,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vandc128 v35,v0,v59
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vspltw128 v8,v40,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v40.u32), 0x55));
	// vmulfp128 v7,v37,v35
	simde_mm_store_ps(ctx.v7.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v35.f32)));
	// vmaddfp v12,v6,v12,v11
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v10,v13,v7
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v5,v0,v12
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v8,v9,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v9.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v33,v34,v0
	simde_mm_store_ps(ctx.v33.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vandc128 v32,v33,v58
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vsubfp128 v63,v32,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v32.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmaxfp128 v62,v63,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_max_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vmsum3fp128 v61,v62,v62
	simde_mm_store_ps(ctx.v61.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v62.f32), 0xEF));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// stvewx128 v60,r0,r24
	ea = (ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82198ce8
	if (!ctx.cr6.lt) goto loc_82198CE8;
	// clrlwi r6,r28,16
	ctx.r6.u64 = ctx.r28.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bbf10
	ctx.lr = 0x82198CE8;
	sub_823BBF10(ctx, base);
loc_82198CE8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198B38) {
	__imp__sub_82198B38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198CF4) {
	__imp__sub_82198CF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82198D00;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,2047
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2047, ctx.xer);
	// beq cr6,0x82198db0
	if (ctx.cr6.eq) goto loc_82198DB0;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82198db0
	if (ctx.cr6.eq) goto loc_82198DB0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82198D4C;
	sub_82284650(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82198db0
	if (ctx.cr6.eq) goto loc_82198DB0;
	// bl 0x822ef018
	ctx.lr = 0x82198D5C;
	sub_822EF018(ctx, base);
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// bgt cr6,0x82198db0
	if (ctx.cr6.gt) goto loc_82198DB0;
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bbe70
	ctx.lr = 0x82198DB0;
	sub_823BBE70(ctx, base);
loc_82198DB0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198CF8) {
	__imp__sub_82198CF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198DBC) {
	__imp__sub_82198DBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82198DC8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,-30176
	ctx.r8.s64 = ctx.r10.s64 + -30176;
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r11,r7,3
	ctx.r11.s64 = ctx.r7.s64 + 196608;
	// ori r3,r4,61924
	ctx.r3.u64 = ctx.r4.u64 | 61924;
	// lwzx r31,r5,r8
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// addi r11,r11,-7320
	ctx.r11.s64 = ctx.r11.s64 + -7320;
	// mullw r10,r6,r3
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82198e74
	if (ctx.cr6.eq) goto loc_82198E74;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ef018
	ctx.lr = 0x82198E24;
	sub_822EF018(ctx, base);
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// lfs f7,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f3,f11,f11
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f2,f8,f8,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// bgt cr6,0x82198e74
	if (ctx.cr6.gt) goto loc_82198E74;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823bbec0
	ctx.lr = 0x82198E74;
	sub_823BBEC0(ctx, base);
loc_82198E74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82198DC0) {
	__imp__sub_82198DC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198E80) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// lwz r11,7560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7560);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82198eb0
	if (!ctx.cr6.lt) goto loc_82198EB0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821984d0
	ctx.lr = 0x82198EB0;
	sub_821984D0(ctx, base);
loc_82198EB0:
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
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

PPC_WEAK_FUNC(sub_82198E80) {
	__imp__sub_82198E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198EC8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// addi r30,r3,10
	ctx.r30.s64 = ctx.r3.s64 + 10;
	// lhzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82198f14
	if (ctx.cr6.eq) goto loc_82198F14;
loc_82198EF8:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82198410
	ctx.lr = 0x82198F08;
	sub_82198410(ctx, base);
	// lhzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82198ef8
	if (!ctx.cr6.eq) goto loc_82198EF8;
loc_82198F14:
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

PPC_WEAK_FUNC(sub_82198EC8) {
	__imp__sub_82198EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198F2C) {
	__imp__sub_82198F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198F30) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82198f8c
	if (ctx.cr6.eq) goto loc_82198F8C;
loc_82198F5C:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,10,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3FFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,50(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 50);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82198f7c
	if (!ctx.cr6.eq) goto loc_82198F7C;
	// bl 0x82198410
	ctx.lr = 0x82198F7C;
	sub_82198410(ctx, base);
loc_82198F7C:
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82198f5c
	if (!ctx.cr6.eq) goto loc_82198F5C;
loc_82198F8C:
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

PPC_WEAK_FUNC(sub_82198F30) {
	__imp__sub_82198F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82198FA4) {
	__imp__sub_82198FA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82198FA8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r9,r3,10
	ctx.r9.s64 = ctx.r3.s64 + 10;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82199008
	if (ctx.cr6.eq) goto loc_82199008;
loc_82198FDC:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82198ffc
	if (!ctx.cr6.eq) goto loc_82198FFC;
	// bl 0x82198410
	ctx.lr = 0x82198FFC;
	sub_82198410(ctx, base);
loc_82198FFC:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82198fdc
	if (!ctx.cr6.eq) goto loc_82198FDC;
loc_82199008:
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

PPC_WEAK_FUNC(sub_82198FA8) {
	__imp__sub_82198FA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82199028;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8219905c
	if (!ctx.cr6.eq) goto loc_8219905C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r5,260(r3)
	PPC_STORE_U8(ctx.r3.u32 + 260, ctx.r5.u8);
	// sth r6,262(r3)
	PPC_STORE_U16(ctx.r3.u32 + 262, ctx.r6.u16);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8219905C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f19f0
	ctx.lr = 0x82199064;
	sub_822F19F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,256(r28)
	PPC_STORE_U32(ctx.r28.u32 + 256, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821990a8
	if (ctx.cr6.eq) goto loc_821990A8;
	// addi r30,r28,124
	ctx.r30.s64 = ctx.r28.s64 + 124;
loc_8219907C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x82199088;
	sub_822F1EB8(ctx, base);
	// stw r3,-124(r30)
	PPC_STORE_U32(ctx.r30.u32 + -124, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ef100
	ctx.lr = 0x82199098;
	sub_822EF100(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8219907c
	if (!ctx.cr6.eq) goto loc_8219907C;
loc_821990A8:
	// stb r26,260(r28)
	PPC_STORE_U8(ctx.r28.u32 + 260, ctx.r26.u8);
	// sth r25,262(r28)
	PPC_STORE_U16(ctx.r28.u32 + 262, ctx.r25.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199020) {
	__imp__sub_82199020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821990B8) {
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
	// addi r11,r4,5
	ctx.r11.s64 = ctx.r4.s64 + 5;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82199134
	if (ctx.cr6.eq) goto loc_82199134;
loc_821990E4:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82199128
	if (!ctx.cr6.eq) goto loc_82199128;
	// lbz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82199118
	if (!ctx.cr6.eq) goto loc_82199118;
	// bl 0x82198410
	ctx.lr = 0x82199114;
	sub_82198410(ctx, base);
	// b 0x82199128
	goto loc_82199128;
loc_82199118:
	// ble cr6,0x82199128
	if (!ctx.cr6.gt) goto loc_82199128;
	// lbz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 52);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,52(r4)
	PPC_STORE_U8(ctx.r4.u32 + 52, ctx.r11.u8);
loc_82199128:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821990e4
	if (!ctx.cr6.eq) goto loc_821990E4;
loc_82199134:
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

PPC_WEAK_FUNC(sub_821990B8) {
	__imp__sub_821990B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219914C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219914C) {
	__imp__sub_8219914C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82199158;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r26,256(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// bl 0x822f19f0
	ctx.lr = 0x82199174;
	sub_822F19F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82199228
	if (ctx.cr6.eq) goto loc_82199228;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r24,r11,7560
	ctx.r24.s64 = ctx.r11.s64 + 7560;
loc_82199194:
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// beq cr6,0x82199200
	if (ctx.cr6.eq) goto loc_82199200;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r22,0(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x821991AC;
	sub_822F1EB8(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x821991d4
	if (!ctx.cr6.eq) goto loc_821991D4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r22,128(r29)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ef100
	ctx.lr = 0x821991C4;
	sub_822EF100(ctx, base);
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x821991d4
	if (!ctx.cr6.eq) goto loc_821991D4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x821991e8
	goto loc_821991E8;
loc_821991D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r30,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821990b8
	ctx.lr = 0x821991E4;
	sub_821990B8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821991E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82199194
	if (!ctx.cr6.eq) goto loc_82199194;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_82199200:
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82199228
	if (ctx.cr6.eq) goto loc_82199228;
loc_82199208:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r5,r30,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x821990b8
	ctx.lr = 0x82199218;
	sub_821990B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r26
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82199208
	if (!ctx.cr6.eq) goto loc_82199208;
loc_82199228:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199150) {
	__imp__sub_82199150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82199238;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,260(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219927c
	if (ctx.cr6.eq) goto loc_8219927C;
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199270
	if (ctx.cr6.eq) goto loc_82199270;
	// lhz r11,262(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 262);
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219927c
	if (ctx.cr6.eq) goto loc_8219927C;
loc_82199270:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82198fa8
	ctx.lr = 0x8219927C;
	sub_82198FA8(ctx, base);
loc_8219927C:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821992b4
	if (ctx.cr6.eq) goto loc_821992B4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821992a8
	if (ctx.cr6.eq) goto loc_821992A8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82199150
	ctx.lr = 0x821992A0;
	sub_82199150(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821992A8:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82198fa8
	ctx.lr = 0x821992B4;
	sub_82198FA8(ctx, base);
loc_821992B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199230) {
	__imp__sub_82199230(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821992BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821992BC) {
	__imp__sub_821992BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821992C0) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x821992e0
	if (ctx.cr6.eq) goto loc_821992E0;
	// lwz r9,4124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sthx r7,r8,r9
	PPC_STORE_U16(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u16);
loc_821992E0:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82199304
	if (ctx.cr6.eq) goto loc_82199304;
	// lwz r9,4124(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// b 0x8219930c
	goto loc_8219930C;
loc_82199304:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_8219930C:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x821987f0
	sub_821987F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821992C0) {
	__imp__sub_821992C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82199320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822f19f0
	ctx.lr = 0x8219933C;
	sub_822F19F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8219936c
	if (!ctx.cr6.gt) goto loc_8219936C;
loc_8219934C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1eb8
	ctx.lr = 0x82199358;
	sub_822F1EB8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219936c
	if (ctx.cr6.eq) goto loc_8219936C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8219934c
	if (ctx.cr6.lt) goto loc_8219934C;
loc_8219936C:
	// cmpw cr6,r26,r30
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82199390
	if (!ctx.cr6.eq) goto loc_82199390;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,20808
	ctx.r4.s64 = ctx.r11.s64 + 20808;
	// bl 0x82280c30
	ctx.lr = 0x82199388;
	sub_82280C30(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82199390:
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r29,r28,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r11,7560
	ctx.r5.s64 = ctx.r11.s64 + 7560;
	// addi r30,r5,10
	ctx.r30.s64 = ctx.r5.s64 + 10;
	// lhzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821994d8
	if (ctx.cr6.eq) goto loc_821994D8;
	// lwz r10,4124(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
loc_821993B0:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 48);
	// lhz r31,2(r7)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821994cc
	if (!ctx.cr6.eq) goto loc_821994CC;
	// lbz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 52);
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x821994cc
	if (!ctx.cr6.eq) goto loc_821994CC;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x821993f4
	if (ctx.cr6.eq) goto loc_821993F4;
	// lhz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// rlwinm r8,r11,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sthx r9,r8,r10
	PPC_STORE_U16(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r10,4124(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
loc_821993F4:
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82199414
	if (ctx.cr6.eq) goto loc_82199414;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lhz r9,2(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r9,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r9.u16);
	// b 0x8219941c
	goto loc_8219941C;
loc_82199414:
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// sthx r11,r29,r30
	PPC_STORE_U16(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u16);
loc_8219941C:
	// addi r10,r5,10
	ctx.r10.s64 = ctx.r5.s64 + 10;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821986d8
	ctx.lr = 0x82199434;
	sub_821986D8(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4124(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// lhz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r6,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r6.u16);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// sth r8,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r8.u16);
	// beq cr6,0x82199470
	if (ctx.cr6.eq) goto loc_82199470;
	// lwz r8,4124(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sthx r10,r11,r8
	PPC_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
loc_82199470:
	// sth r10,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r10.u16);
	// lbz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 52);
	// rlwinm r9,r10,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stb r9,52(r7)
	PPC_STORE_U8(ctx.r7.u32 + 52, ctx.r9.u8);
	// lhz r10,60(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 60);
	// sth r27,50(r7)
	PPC_STORE_U16(ctx.r7.u32 + 50, ctx.r27.u16);
loc_82199488:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,4128(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4128);
	// lbz r8,48(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 48);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r8,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r8.u8);
	// lbz r3,52(r7)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r7.u32 + 52);
	// stb r3,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r3.u8);
	// lhz r9,50(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 50);
	// lhz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// sth r9,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r9.u16);
	// lbz r8,49(r7)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + 49);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// stb r8,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r8.u8);
	// bne cr6,0x82199488
	if (!ctx.cr6.eq) goto loc_82199488;
	// lwz r10,4124(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4124);
loc_821994CC:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x821993b0
	if (!ctx.cr6.eq) goto loc_821993B0;
loc_821994D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199318) {
	__imp__sub_82199318(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821994E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821994E0) {
	__imp__sub_821994E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821994E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821994E4) {
	__imp__sub_821994E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821994E8) {
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
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,7560
	ctx.r3.s64 = ctx.r11.s64 + 7560;
	// addi r9,r3,4106
	ctx.r9.s64 = ctx.r3.s64 + 4106;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82199534
	if (ctx.cr6.eq) goto loc_82199534;
loc_82199514:
	// lwz r10,4124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r31,2(r4)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// bl 0x82198410
	ctx.lr = 0x82199528;
	sub_82198410(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x82199514
	if (!ctx.cr6.eq) goto loc_82199514;
loc_82199534:
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

PPC_WEAK_FUNC(sub_821994E8) {
	__imp__sub_821994E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82199548) {
	__imp__sub_82199548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219956C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219956C) {
	__imp__sub_8219956C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199570) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lbz r11,55(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 55);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 * 125;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lbz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// stb r7,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r7.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82199570) {
	__imp__sub_82199570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821995B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823bdf48
	sub_823BDF48(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821995B0) {
	__imp__sub_821995B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821995C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821995C4) {
	__imp__sub_821995C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821995C8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4151(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4151);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82199628
	if (!ctx.cr6.eq) goto loc_82199628;
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// lhz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r5,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r5.u16);
	// sth r10,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r10.u16);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r10,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r10.u32);
	// stb r8,4151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4151, ctx.r8.u8);
	// lhz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r9,4148(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4148, ctx.r9.u16);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// blr 
	return;
loc_82199628:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r10,r5,16
	ctx.r10.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,16(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r8,4148(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4148);
	// sth r5,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r5.u16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// sth r8,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r8.u16);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r9,-2(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2, ctx.r9.u32);
	// lhz r8,2(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r4,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r4.u16);
	// sth r5,-14(r1)
	PPC_STORE_U16(ctx.r1.u32 + -14, ctx.r5.u16);
	// lwz r8,-16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stw r8,2(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2, ctx.r8.u32);
	// stb r7,4151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4151, ctx.r7.u8);
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821995C8) {
	__imp__sub_821995C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82199694) {
	__imp__sub_82199694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x821996A0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lhz r26,60(r4)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r4.u32 + 60);
	// li r22,0
	ctx.r22.s64 = 0;
	// lbz r23,56(r4)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// sth r11,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r11.u16);
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// stb r11,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r11.u8);
	// addi r27,r7,4
	ctx.r27.s64 = ctx.r7.s64 + 4;
	// clrlwi r19,r8,16
	ctx.r19.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// clrlwi r18,r9,24
	ctx.r18.u64 = ctx.r9.u32 & 0xFF;
	// stw r22,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r22.u32);
loc_821996F0:
	// rlwinm r10,r26,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1FFFE;
	// lwz r8,4128(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4128);
	// clrlwi r9,r26,16
	ctx.r9.u64 = ctx.r26.u32 & 0xFFFF;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r28,r9,r8
	ctx.r28.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r28,11
	ctx.r11.s64 = ctx.r28.s64 + 11;
	// lhz r26,20(r28)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r28.u32 + 20);
loc_8219971C:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8219971c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219971C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82199734
	if (ctx.cr6.eq) goto loc_82199734;
	// sth r21,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r21.u16);
loc_82199734:
	// cmplwi cr6,r18,255
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 255, ctx.xer);
	// beq cr6,0x82199740
	if (ctx.cr6.eq) goto loc_82199740;
	// stb r20,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r20.u8);
loc_82199740:
	// lbz r9,19(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 19);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r27,7
	ctx.r8.s64 = ctx.r27.s64 + 7;
	// subf r23,r9,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r9.s64;
loc_82199754:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82199774
	if (!ctx.cr0.eq) goto loc_82199774;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82199754
	if (!ctx.cr6.eq) goto loc_82199754;
loc_82199774:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821997cc
	if (ctx.cr6.eq) goto loc_821997CC;
	// lwz r6,12(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x821997b0
	if (ctx.cr6.eq) goto loc_821997B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x823bdf48
	ctx.lr = 0x82199798;
	sub_823BDF48(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r22,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r22.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
loc_821997B0:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,79
	ctx.r11.s64 = ctx.r1.s64 + 79;
	// addi r10,r27,-1
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821997C0:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x821997c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821997C0;
loc_821997CC:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821997D4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821995c8
	ctx.lr = 0x821997E8;
	sub_821995C8(ctx, base);
	// lbz r11,19(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 19);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821997d4
	if (!ctx.cr6.eq) goto loc_821997D4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x821996f0
	if (!ctx.cr6.eq) goto loc_821996F0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199698) {
	__imp__sub_82199698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219980C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219980C) {
	__imp__sub_8219980C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82199818;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,56(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// rlwinm r7,r8,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r3,58(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// subf r23,r7,r5
	ctx.r23.s64 = ctx.r5.s64 - ctx.r7.s64;
	// bl 0x823bddd8
	ctx.lr = 0x8219986C;
	sub_823BDDD8(ctx, base);
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821998d4
	if (ctx.cr6.eq) goto loc_821998D4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823bdd68
	ctx.lr = 0x82199884;
	sub_823BDD68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821998d4
	if (ctx.cr6.eq) goto loc_821998D4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r6,r11,1,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lhz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// subf r6,r6,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r6.s64;
	// bl 0x82199698
	ctx.lr = 0x821998C8;
	sub_82199698(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821998D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82198410
	ctx.lr = 0x821998E0;
	sub_82198410(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199810) {
	__imp__sub_82199810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821998EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821998EC) {
	__imp__sub_821998EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821998F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r5,36
	ctx.r11.s64 = ctx.r5.s64 + 36;
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f12,f0
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f3,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f0,f4,f10
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f6,f6,f9
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fmuls f11,f4,f11
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f31,f7,f9
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f4,f4,f9
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fadds f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f0,f6,f11
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f11.f64));
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fsubs f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// fsubs f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f31.f64));
	// stfs f1,8(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fadds f1,f31,f10
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f10.f64));
	// fadds f6,f12,f4
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// fsubs f0,f12,f4
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// fsubs f12,f13,f9
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fsubs f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// stfs f6,20(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fsubs f9,f13,f2
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f1,24(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f9,32(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f3,44(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// stfs f8,36(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stfs f5,40(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,36(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f5,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f3,40(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f2,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821998F0) {
	__imp__sub_821998F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821999E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x821998f0
	sub_821998F0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821999E8) {
	__imp__sub_821999E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821999EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821999EC) {
	__imp__sub_821999EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821999F0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f6,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lbz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 52);
	// lfs f5,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// lfs f2,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fadds f6,f2,f5
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// lfs f7,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// clrlwi r4,r9,27
	ctx.r4.u64 = ctx.r9.u32 & 0x1F;
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lbz r30,49(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 49);
	// lfs f4,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// fmuls f5,f0,f11
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f2,f10,f8
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f1,f12,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f0,f7,f11
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fadds f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fadds f11,f5,f3
	ctx.f11.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// fadds f9,f5,f2
	ctx.f9.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f5,100(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f1,f6,f12
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f31,f11
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f31,f9
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f11,f31,f7
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f7.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x822f1eb8
	ctx.lr = 0x82199AF8;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b40
	ctx.lr = 0x82199AFC;
	sub_82300B40(ctx, base);
	// rotlwi r8,r30,5
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r30.u32, 5);
	// add r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lfs f10,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// lfs f3,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f10,f7
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f0,f8,f4
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f11,f3,f5
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmuls f9,f6,f4
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// fmuls f7,f10,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f8,f3,f4
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fsubs f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fadds f5,f1,f13
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fadds f3,f13,f9
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// lfs f13,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f7,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfs f30,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f30.f64 = double(temp.f32);
	// fadds f4,f2,f0
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f2,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fsubs f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsubs f11,f31,f5
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f9,f1,f9
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f9.f64));
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f7,f31,f3
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f3,f2,f10
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmuls f5,f2,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f1,f31,f9
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f10,f13,f6,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f11,f13,f11,f5
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f9,f13,f12,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fnmadds f6,f30,f1,f10
	ctx.f6.f64 = double(float(-(ctx.f30.f64 * ctx.f1.f64 + ctx.f10.f64)));
	// stfs f6,168(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fnmadds f7,f30,f4,f11
	ctx.f7.f64 = double(float(-(ctx.f30.f64 * ctx.f4.f64 + ctx.f11.f64)));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fnmadds f5,f30,f8,f9
	ctx.f5.f64 = double(float(-(ctx.f30.f64 * ctx.f8.f64 + ctx.f9.f64)));
	// stfs f5,172(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x82199BE8;
	sub_822D60B8(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

PPC_WEAK_FUNC(sub_821999F0) {
	__imp__sub_821999F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199C08) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,4151(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4151, ctx.r11.u8);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82199C08) {
	__imp__sub_82199C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199C18) {
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
	// lbz r11,4151(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4151);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82199c58
	if (ctx.cr6.eq) goto loc_82199C58;
	// lhz r11,4148(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4148);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x823bdd68
	ctx.lr = 0x82199C4C;
	sub_823BDD68(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r9,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r9.u32);
loc_82199C58:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82199C18) {
	__imp__sub_82199C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// lfs f4,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// lfs f4,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// fsubs f3,f3,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lfs f8,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r9,-30336
	ctx.r5.s64 = ctx.r9.s64 + -30336;
	// lfs f13,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f12,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f11,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfs f10,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f4,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f31,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r9,-5648
	ctx.r31.s64 = ctx.r9.s64 + -5648;
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f6,f31,f4
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r8,-5664
	ctx.r8.s64 = ctx.r8.s64 + -5664;
	// stfs f4,4(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// fmsubs f0,f13,f0,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f9.f64));
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmsubs f12,f10,f12,f5
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f5.f64));
	// fmuls f10,f0,f2
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// fmsubs f9,f8,f11,f7
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f7.f64));
	// lfs f7,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f8,f12,f3,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f10.f64));
	// lfs f4,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r7,20
	ctx.r11.s64 = ctx.r7.s64 + 20;
	// lfs f0,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmadds f12,f7,f3,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f13.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f9,f6,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f8.f64));
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 + 28;
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// fmadds f10,f4,f6,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f11,f5,f1,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f9,f10,f1,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f7,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v62,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v60,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vand128 v0,v60,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v59,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v59,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,-32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v58,r9,r10
	temp.u32 = ctx.r9.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvx128 v13,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v56,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v12,r0,r31
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r31.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v13,v0,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v55,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v55,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,-32(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82199C68) {
	__imp__sub_82199C68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82199DD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82199DE0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de008
	ctx.lr = 0x82199DE8;
	__savefpr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f10,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// lfs f7,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,20(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f7,f10
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// lfs f8,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f9,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f5,24(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f3,f9
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmuls f2,f7,f9
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// lfs f30,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f1,f5,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f29,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f25,f30,f29
	ctx.f25.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// lfs f12,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f30,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f26,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f26,f26,f30
	ctx.f26.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lfs f27,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f4,f8,f12,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f13,f5,f12,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f30,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f7,f7,f0,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f6,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f5,f27,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f27.f64 + ctx.f31.f64));
	// lfs f31,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f2,f8,f27,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f27.f64 + ctx.f2.f64));
	// lfs f8,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f3,f0,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f1.f64));
	// lfs f24,24(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f23.f64 = double(temp.f32);
	// fsubs f22,f30,f31
	ctx.f22.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lfs f1,28(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f21,f0,f25
	ctx.f21.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// fmuls f20,f12,f26
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// fmadds f30,f8,f6,f4
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f13,f1,f6,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f31,f8,f24,f7
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f7.f64));
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f12,f1,f23,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f23.f64 + ctx.f5.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f29,f8,f23,f2
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f2.f64));
	// stfs f29,112(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f1,f24,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f24.f64 + ctx.f3.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f4,f27,f26
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f26.f64));
	// fmadds f3,f24,f22,f21
	ctx.f3.f64 = double(float(ctx.f24.f64 * ctx.f22.f64 + ctx.f21.f64));
	// fmadds f2,f6,f22,f20
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f22.f64 + ctx.f20.f64));
	// fmuls f7,f12,f31
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f8,f13,f29
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmadds f6,f23,f22,f4
	ctx.f6.f64 = double(float(ctx.f23.f64 * ctx.f22.f64 + ctx.f4.f64));
	// fmadds f27,f11,f26,f3
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f26.f64 + ctx.f3.f64));
	// fmadds f26,f10,f25,f2
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f25.f64 + ctx.f2.f64));
	// fmsubs f22,f29,f0,f7
	ctx.f22.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 - ctx.f7.f64));
	// fmsubs f23,f12,f30,f8
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f8.f64));
	// fmsubs f24,f13,f31,f1
	ctx.f24.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 - ctx.f1.f64));
	// fmadds f25,f9,f25,f6
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f6.f64));
	// bl 0x822d67f0
	ctx.lr = 0x82199F08;
	sub_822D67F0(ctx, base);
	// fmuls f5,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f4,f23,f27
	ctx.f4.f64 = double(float(ctx.f23.f64 * ctx.f27.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f30,f26,f5
	ctx.f3.f64 = double(float(ctx.f30.f64 * ctx.f26.f64 + ctx.f5.f64));
	// fmadds f2,f22,f26,f4
	ctx.f2.f64 = double(float(ctx.f22.f64 * ctx.f26.f64 + ctx.f4.f64));
	// fmadds f1,f29,f25,f3
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f25.f64 + ctx.f3.f64));
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// fmadds f13,f24,f25,f2
	ctx.f13.f64 = double(float(ctx.f24.f64 * ctx.f25.f64 + ctx.f2.f64));
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// addi r6,r8,-5664
	ctx.r6.s64 = ctx.r8.s64 + -5664;
	// addi r5,r7,-5648
	ctx.r5.s64 = ctx.r7.s64 + -5648;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lis r10,-31852
	ctx.r10.s64 = -2087452672;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// fmadds f12,f1,f28,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmadds f11,f13,f28,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f11,24(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f10,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r10,-30336
	ctx.r8.s64 = ctx.r10.s64 + -30336;
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lfs f9,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v63,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lvlx128 v62,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v60,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v60,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvrx128 v59,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v57,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v0,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v56,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v56,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de054
	ctx.lr = 0x8219A004;
	__restfpr_20(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82199DD8) {
	__imp__sub_82199DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8219A010;
	__savegprlr_29(ctx, base);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f0,f6
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f5,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f3,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// addi r6,r1,-56
	ctx.r6.s64 = ctx.r1.s64 + -56;
	// fsubs f6,f5,f3
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lfs f0,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,20(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lfs f10,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f0,f5
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lfs f8,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// addi r31,r1,-56
	ctx.r31.s64 = ctx.r1.s64 + -56;
	// lfs f7,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// lis r30,-31852
	ctx.r30.s64 = -2087452672;
	// lfs f3,20(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lfs f13,24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f3,f1
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f12,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// addi r30,r30,-30336
	ctx.r30.s64 = ctx.r30.s64 + -30336;
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f3,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fadds f3,f11,f3
	ctx.f3.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// lfs f11,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f9,f8,f0,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64));
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r5,0(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// fmsubs f1,f10,f12,f1
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 - ctx.f1.f64));
	// lfs f3,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmsubs f10,f7,f13,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f8.f64));
	// lfs f11,36(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f4
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// lfs f8,28(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmadds f4,f3,f6,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f13,-52(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmadds f3,f9,f6,f1
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f0,-56(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// addi r4,r29,-5664
	ctx.r4.s64 = ctx.r29.s64 + -5664;
	// lvrx128 v63,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r7,-5648
	ctx.r5.s64 = ctx.r7.s64 + -5648;
	// lvlx128 v62,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 + 28;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// fmadds f1,f11,f5,f4
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fmadds f13,f10,f5,f3
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmadds f12,f1,f2,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f11,f13,f2,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f2.f64 + ctx.f0.f64));
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f9,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vand128 v0,v61,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v60,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// vpkd3d128 v60,v0,2,1,3
	vTemp.s32[0] = int32_t(ctx.v0.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v0.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v0.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v0.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v60.u32[3] = temp.u32;
	// vspltw128 v59,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// stvewx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,-64(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r8,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r8.u32);
	// lvrx128 v58,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvx128 v63,r0,r30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r30.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v57,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v56,v57,v58
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vand128 v0,v56,v63
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v0,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v55,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stw r7,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r7.u32);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A008) {
	__imp__sub_8219A008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A1A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219A1B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823bdda8
	ctx.lr = 0x8219A1C8;
	sub_823BDDA8(ctx, base);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lbz r11,55(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 55);
	// lhz r29,58(r28)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r28.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8219a208
	if (ctx.cr6.eq) goto loc_8219A208;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mulli r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 * 125;
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219a208
	if (!ctx.cr6.lt) goto loc_8219A208;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
loc_8219A208:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lhz r27,62(r28)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r28.u32 + 62);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8219A21C:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4132(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4132);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// lhz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// ble cr6,0x8219a240
	if (!ctx.cr6.gt) goto loc_8219A240;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8219A240:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r29,r30,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r30.s64;
	// bl 0x82199c68
	ctx.lr = 0x8219A258;
	sub_82199C68(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x8219a278
	if (!ctx.cr6.gt) goto loc_8219A278;
	// bl 0x823bddc8
	ctx.lr = 0x8219A264;
	sub_823BDDC8(ctx, base);
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82199c68
	ctx.lr = 0x8219A278;
	sub_82199C68(ctx, base);
loc_8219A278:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8219a288
	if (!ctx.cr6.gt) goto loc_8219A288;
	// bl 0x823bddc8
	ctx.lr = 0x8219A284;
	sub_823BDDC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
loc_8219A288:
	// bne cr6,0x8219a21c
	if (!ctx.cr6.eq) goto loc_8219A21C;
	// bl 0x823bddd0
	ctx.lr = 0x8219A290;
	sub_823BDDD0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A1A8) {
	__imp__sub_8219A1A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219A29C) {
	__imp__sub_8219A29C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8219A2A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x823bdda8
	ctx.lr = 0x8219A2C4;
	sub_823BDDA8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,55(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 55);
	// lfs f13,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lhz r25,62(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 62);
	// lhz r28,58(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// beq cr6,0x8219a318
	if (ctx.cr6.eq) goto loc_8219A318;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mulli r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 * 125;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219a318
	if (!ctx.cr6.lt) goto loc_8219A318;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
loc_8219A318:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8219A31C:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// lwz r11,4132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4132);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lhz r25,64(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// ble cr6,0x8219a340
	if (!ctx.cr6.gt) goto loc_8219A340;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8219A340:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r28,r29,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r29.s64;
	// bl 0x82199dd8
	ctx.lr = 0x8219A360;
	sub_82199DD8(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// ble cr6,0x8219a38c
	if (!ctx.cr6.gt) goto loc_8219A38C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bddc8
	ctx.lr = 0x8219A370;
	sub_823BDDC8(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r7,r31,32
	ctx.r7.s64 = ctx.r31.s64 + 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82199dd8
	ctx.lr = 0x8219A38C;
	sub_82199DD8(ctx, base);
loc_8219A38C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8219a3a4
	if (!ctx.cr6.gt) goto loc_8219A3A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bddc8
	ctx.lr = 0x8219A39C;
	sub_823BDDC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
loc_8219A3A4:
	// bne cr6,0x8219a31c
	if (!ctx.cr6.eq) goto loc_8219A31C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bddd0
	ctx.lr = 0x8219A3B0;
	sub_823BDDD0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A2A0) {
	__imp__sub_8219A2A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219A3BC) {
	__imp__sub_8219A3BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219A3C8;
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
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x823bdda8
	ctx.lr = 0x8219A3EC;
	sub_823BDDA8(ctx, base);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// lbz r11,55(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 55);
	// lhz r28,58(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8219a42c
	if (ctx.cr6.eq) goto loc_8219A42C;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mulli r11,r11,125
	ctx.r11.s64 = ctx.r11.s64 * 125;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219a42c
	if (!ctx.cr6.lt) goto loc_8219A42C;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mullw r7,r8,r10
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// divw r6,r7,r11
	ctx.r6.s32 = ctx.r7.s32 / ctx.r11.s32;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
loc_8219A42C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lhz r27,62(r29)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r29.u32 + 62);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_8219A440:
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4132(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4132);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// mulli r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 * 68;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lhz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// ble cr6,0x8219a464
	if (!ctx.cr6.gt) goto loc_8219A464;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8219A464:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r28,r30,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r30.s64;
	// bl 0x8219a008
	ctx.lr = 0x8219A484;
	sub_8219A008(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// ble cr6,0x8219a4ac
	if (!ctx.cr6.gt) goto loc_8219A4AC;
	// bl 0x823bddc8
	ctx.lr = 0x8219A490;
	sub_823BDDC8(ctx, base);
	// addi r9,r31,32
	ctx.r9.s64 = ctx.r31.s64 + 32;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8219a008
	ctx.lr = 0x8219A4AC;
	sub_8219A008(ctx, base);
loc_8219A4AC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x8219a4bc
	if (!ctx.cr6.gt) goto loc_8219A4BC;
	// bl 0x823bddc8
	ctx.lr = 0x8219A4B8;
	sub_823BDDC8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
loc_8219A4BC:
	// bne cr6,0x8219a440
	if (!ctx.cr6.eq) goto loc_8219A440;
	// bl 0x823bddd0
	ctx.lr = 0x8219A4C4;
	sub_823BDDD0(ctx, base);
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

PPC_WEAK_FUNC(sub_8219A3C0) {
	__imp__sub_8219A3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219A4D4) {
	__imp__sub_8219A4D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A4D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8219A4E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823bdf48
	ctx.lr = 0x8219A508;
	sub_823BDF48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219a1a8
	ctx.lr = 0x8219A518;
	sub_8219A1A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A4D8) {
	__imp__sub_8219A4D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219A528;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823bdf48
	ctx.lr = 0x8219A554;
	sub_823BDF48(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219a2a0
	ctx.lr = 0x8219A568;
	sub_8219A2A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A520) {
	__imp__sub_8219A520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219A578;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823bdf48
	ctx.lr = 0x8219A5AC;
	sub_823BDF48(ctx, base);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219a3c0
	ctx.lr = 0x8219A5C4;
	sub_8219A3C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A570) {
	__imp__sub_8219A570(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A5D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8219A5D8;
	__savegprlr_19(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219a714
	if (ctx.cr6.eq) goto loc_8219A714;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lwz r19,372(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r23,r10,17280
	ctx.r23.s64 = ctx.r10.s64 + 17280;
loc_8219A620:
	// lwz r10,4124(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8219a708
	if (!ctx.cr6.eq) goto loc_8219A708;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// cmpw cr6,r4,r26
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x8219a658
	if (ctx.cr6.eq) goto loc_8219A658;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// bl 0x821980b8
	ctx.lr = 0x8219A654;
	sub_821980B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8219A658:
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// rlwinm r10,r30,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x7C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r23
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// lwzx r7,r9,r19
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r19.u32);
	// and r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 & ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8219a708
	if (!ctx.cr6.eq) goto loc_8219A708;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822f22c8
	ctx.lr = 0x8219A68C;
	sub_822F22C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219a708
	if (ctx.cr6.eq) goto loc_8219A708;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82199810
	ctx.lr = 0x8219A6B4;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a714
	if (ctx.cr6.eq) goto loc_8219A714;
	// rlwinm r11,r30,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r25,152
	ctx.r6.s64 = ctx.r25.s64 + 152;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821999f0
	ctx.lr = 0x8219A6DC;
	sub_821999F0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x823bdf48
	ctx.lr = 0x8219A6F4;
	sub_823BDF48(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219a2a0
	ctx.lr = 0x8219A708;
	sub_8219A2A0(ctx, base);
loc_8219A708:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219a620
	if (!ctx.cr6.eq) goto loc_8219A620;
loc_8219A714:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A5D0) {
	__imp__sub_8219A5D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219A71C) {
	__imp__sub_8219A71C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219A728;
	__savegprlr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-5928
	ctx.r4.s64 = ctx.r11.s64 + -5928;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x821998f0
	ctx.lr = 0x8219A754;
	sub_821998F0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822f2368
	ctx.lr = 0x8219A760;
	sub_822F2368(ctx, base);
	// clrlwi r10,r31,16
	ctx.r10.u64 = ctx.r31.u32 & 0xFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// beq cr6,0x8219a820
	if (ctx.cr6.eq) goto loc_8219A820;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r26,r11,17280
	ctx.r26.s64 = ctx.r11.s64 + 17280;
loc_8219A77C:
	// lwz r11,4124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8219a814
	if (!ctx.cr6.eq) goto loc_8219A814;
	// lbz r11,49(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 49);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// srawi r9,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 5;
	// rlwinm r8,r11,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 & ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8219a814
	if (!ctx.cr6.eq) goto loc_8219A814;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199810
	ctx.lr = 0x8219A7DC;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a82c
	if (ctx.cr6.eq) goto loc_8219A82C;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x823bdf48
	ctx.lr = 0x8219A800;
	sub_823BDF48(ctx, base);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a2a0
	ctx.lr = 0x8219A814;
	sub_8219A2A0(ctx, base);
loc_8219A814:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219a77c
	if (!ctx.cr6.eq) goto loc_8219A77C;
loc_8219A820:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8219A82C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A720) {
	__imp__sub_8219A720(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219A840;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r7,-5928
	ctx.r4.s64 = ctx.r7.s64 + -5928;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x821998f0
	ctx.lr = 0x8219A868;
	sub_821998F0(ctx, base);
	// clrlwi r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// beq cr6,0x8219a8f8
	if (ctx.cr6.eq) goto loc_8219A8F8;
loc_8219A87C:
	// lwz r10,4124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8219a8ec
	if (!ctx.cr6.eq) goto loc_8219A8EC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199810
	ctx.lr = 0x8219A8B4;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a904
	if (ctx.cr6.eq) goto loc_8219A904;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x823bdf48
	ctx.lr = 0x8219A8D8;
	sub_823BDF48(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a2a0
	ctx.lr = 0x8219A8EC;
	sub_8219A2A0(ctx, base);
loc_8219A8EC:
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219a87c
	if (!ctx.cr6.eq) goto loc_8219A87C;
loc_8219A8F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8219A904:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A838) {
	__imp__sub_8219A838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219A918;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219a9a4
	if (ctx.cr6.eq) goto loc_8219A9A4;
loc_8219A938:
	// lwz r10,4124(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// li r9,255
	ctx.r9.s64 = 255;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199810
	ctx.lr = 0x8219A964;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a9b0
	if (ctx.cr6.eq) goto loc_8219A9B0;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x823bdf48
	ctx.lr = 0x8219A988;
	sub_823BDF48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a1a8
	ctx.lr = 0x8219A998;
	sub_8219A1A8(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219a938
	if (!ctx.cr6.eq) goto loc_8219A938;
loc_8219A9A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8219A9B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A910) {
	__imp__sub_8219A910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219A9BC) {
	__imp__sub_8219A9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219A9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219A9C8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x8219A9D0;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219ab3c
	if (ctx.cr6.eq) goto loc_8219AB3C;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// lfs f29,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f29.f64 = double(temp.f32);
	// addi r27,r11,-640
	ctx.r27.s64 = ctx.r11.s64 + -640;
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
loc_8219AA14:
	// lwz r11,4124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4124);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r30,50(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82388d38
	ctx.lr = 0x8219AA2C;
	sub_82388D38(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab30
	if (ctx.cr6.eq) goto loc_8219AB30;
	// lbz r9,1(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lhz r8,2(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82199810
	ctx.lr = 0x8219AA58;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ab50
	if (ctx.cr6.eq) goto loc_8219AB50;
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// rlwinm r9,r30,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,88(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f8
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fsubs f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfsx f12,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f10,f7,f8,f9
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f8.f64 - ctx.f9.f64));
	// fmadds f9,f11,f7,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f6.f64));
	// fmadds f8,f11,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f7,f10,f31
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f6,f9,f31
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fnmsubs f5,f8,f31,f30
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f31.f64 - ctx.f30.f64)));
	// fmuls f4,f3,f7
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmadds f3,f1,f6,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f2,f13,f5,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fsel f28,f2,f30,f29
	ctx.f28.f64 = ctx.f2.f64 >= 0.0 ? ctx.f30.f64 : ctx.f29.f64;
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fmuls f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f13,f1,f7
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f12,f5,f1
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x823bdf48
	ctx.lr = 0x8219AB18;
	sub_823BDF48(ctx, base);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219a3c0
	ctx.lr = 0x8219AB30;
	sub_8219A3C0(ctx, base);
loc_8219AB30:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219aa14
	if (!ctx.cr6.eq) goto loc_8219AA14;
loc_8219AB3C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8219AB4C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8219AB50:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x8219AB60;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219A9C0) {
	__imp__sub_8219A9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AB64) {
	__imp__sub_8219AB64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219AB70;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219ac20
	if (ctx.cr6.eq) goto loc_8219AC20;
loc_8219AB94:
	// lwz r11,4124(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,148(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 148);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821a91b0
	ctx.lr = 0x8219ABB4;
	sub_821A91B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219ac14
	if (!ctx.cr6.eq) goto loc_8219AC14;
	// li r9,255
	ctx.r9.s64 = 255;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82199810
	ctx.lr = 0x8219ABE0;
	sub_82199810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ac2c
	if (ctx.cr6.eq) goto loc_8219AC2C;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x823bdf48
	ctx.lr = 0x8219AC04;
	sub_823BDF48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219a1a8
	ctx.lr = 0x8219AC14;
	sub_8219A1A8(ctx, base);
loc_8219AC14:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219ab94
	if (!ctx.cr6.eq) goto loc_8219AB94;
loc_8219AC20:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8219AC2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AB68) {
	__imp__sub_8219AB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AC38) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lhzx r4,r9,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x8219a720
	sub_8219A720(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AC38) {
	__imp__sub_8219AC38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AC68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219AC68) {
	__imp__sub_8219AC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AC6C) {
	__imp__sub_8219AC6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AC70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8219AC78;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219ad10
	if (ctx.cr6.eq) goto loc_8219AD10;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x822f2388
	ctx.lr = 0x8219ACAC;
	sub_822F2388(ctx, base);
	// bl 0x82135128
	ctx.lr = 0x8219ACB0;
	sub_82135128(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2260
	ctx.lr = 0x8219ACBC;
	sub_822F2260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219ad08
	if (ctx.cr6.eq) goto loc_8219AD08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2360
	ctx.lr = 0x8219ACCC;
	sub_822F2360(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2368
	ctx.lr = 0x8219ACDC;
	sub_822F2368(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219a5d0
	ctx.lr = 0x8219AD08;
	sub_8219A5D0(ctx, base);
loc_8219AD08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f23e0
	ctx.lr = 0x8219AD10;
	sub_822F23E0(ctx, base);
loc_8219AD10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AC70) {
	__imp__sub_8219AC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD18) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8219ac70
	sub_8219AC70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AD18) {
	__imp__sub_8219AD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AD3C) {
	__imp__sub_8219AD3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD40) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r11,r11,2053
	ctx.r11.s64 = ctx.r11.s64 + 2053;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8219ac70
	sub_8219AC70(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AD40) {
	__imp__sub_8219AD40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AD64) {
	__imp__sub_8219AD64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD68) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r10,r3
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,65535
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// b 0x8219a838
	sub_8219A838(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AD68) {
	__imp__sub_8219AD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD90) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219AD90) {
	__imp__sub_8219AD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AD94) {
	__imp__sub_8219AD94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219ADA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4124(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4124);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// addi r29,r29,-32768
	ctx.r29.s64 = ctx.r29.s64 + -32768;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219ae24
	if (ctx.cr6.eq) goto loc_8219AE24;
loc_8219ADC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8219ae0c
	if (ctx.cr6.eq) goto loc_8219AE0C;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219ae0c
	if (!ctx.cr6.eq) goto loc_8219AE0C;
	// lbz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8219ae0c
	if (!ctx.cr6.eq) goto loc_8219AE0C;
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lbzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ae0c
	if (ctx.cr6.eq) goto loc_8219AE0C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8219a910
	ctx.lr = 0x8219AE0C;
	sub_8219A910(ctx, base);
loc_8219AE0C:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x8219adc8
	if (!ctx.cr6.eq) goto loc_8219ADC8;
loc_8219AE24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AD98) {
	__imp__sub_8219AD98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AE2C) {
	__imp__sub_8219AE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AE30) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14960);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219aec8
	if (ctx.cr6.eq) goto loc_8219AEC8;
	// bl 0x823bdc70
	ctx.lr = 0x8219AE60;
	sub_823BDC70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a0218
	ctx.lr = 0x8219AE68;
	sub_821A0218(ctx, base);
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r10,7560
	ctx.r31.s64 = ctx.r10.s64 + 7560;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,4151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4151, ctx.r30.u8);
	// lhz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// bl 0x8219a9c0
	ctx.lr = 0x8219AE94;
	sub_8219A9C0(ctx, base);
	// lbz r11,4151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4151);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219aec4
	if (ctx.cr6.eq) goto loc_8219AEC4;
	// lhz r11,4148(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4148);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x823bdd68
	ctx.lr = 0x8219AEB8;
	sub_823BDD68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
loc_8219AEC4:
	// bl 0x823bdd00
	ctx.lr = 0x8219AEC8;
	sub_823BDD00(ctx, base);
loc_8219AEC8:
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

PPC_WEAK_FUNC(sub_8219AE30) {
	__imp__sub_8219AE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AEE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219AEE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219afb4
	if (ctx.cr6.eq) goto loc_8219AFB4;
	// lbz r11,57(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219af14
	if (!ctx.cr6.eq) goto loc_8219AF14;
	// lbz r11,58(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219afb4
	if (ctx.cr6.eq) goto loc_8219AFB4;
loc_8219AF14:
	// lwz r29,44(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823bdc70
	ctx.lr = 0x8219AF20;
	sub_823BDC70(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// stb r28,4151(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4151, ctx.r28.u8);
	// lbz r11,57(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 57);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// beq cr6,0x8219af5c
	if (ctx.cr6.eq) goto loc_8219AF5C;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8219af5c
	if (ctx.cr6.eq) goto loc_8219AF5C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219ad98
	ctx.lr = 0x8219AF5C;
	sub_8219AD98(ctx, base);
loc_8219AF5C:
	// lbz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 58);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219af80
	if (ctx.cr6.eq) goto loc_8219AF80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r7,708(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823be110
	ctx.lr = 0x8219AF80;
	sub_823BE110(ctx, base);
loc_8219AF80:
	// lbz r11,4151(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4151);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219afb0
	if (ctx.cr6.eq) goto loc_8219AFB0;
	// lhz r11,4148(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4148);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r28,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r28.u16);
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// bl 0x823bdd68
	ctx.lr = 0x8219AFA4;
	sub_823BDD68(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r10.u32);
loc_8219AFB0:
	// bl 0x823bdd00
	ctx.lr = 0x8219AFB4;
	sub_823BDD00(ctx, base);
loc_8219AFB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219AEE0) {
	__imp__sub_8219AEE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219AFBC) {
	__imp__sub_8219AFBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219AFC0) {
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
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14960);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b048
	if (ctx.cr6.eq) goto loc_8219B048;
	// bl 0x823bdc70
	ctx.lr = 0x8219AFF0;
	sub_823BDC70(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,4151(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4151, ctx.r30.u8);
	// lhz r4,6(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// bl 0x8219ab68
	ctx.lr = 0x8219B014;
	sub_8219AB68(ctx, base);
	// lbz r11,4151(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4151);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b044
	if (ctx.cr6.eq) goto loc_8219B044;
	// lhz r11,4148(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4148);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r30.u16);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x823bdd68
	ctx.lr = 0x8219B038;
	sub_823BDD68(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r10.u32);
loc_8219B044:
	// bl 0x823bdd00
	ctx.lr = 0x8219B048;
	sub_823BDD00(ctx, base);
loc_8219B048:
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

PPC_WEAK_FUNC(sub_8219AFC0) {
	__imp__sub_8219AFC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x8219B068;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r3,14
	ctx.r11.s64 = ctx.r3.s64 * 14;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// subf r11,r7,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r7.s64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r9,14
	ctx.r9.s64 = 14;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// addi r6,r10,-30000
	ctx.r6.s64 = ctx.r10.s64 + -30000;
	// divw r5,r11,r9
	ctx.r5.s32 = ctx.r11.s32 / ctx.r9.s32;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// bl 0x8219c328
	ctx.lr = 0x8219B0B4;
	sub_8219C328(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822ec4e8
	ctx.lr = 0x8219B0BC;
	sub_822EC4E8(ctx, base);
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// lwz r25,308(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r30,r11,7560
	ctx.r30.s64 = ctx.r11.s64 + 7560;
	// addi r26,r30,4144
	ctx.r26.s64 = ctx.r30.s64 + 4144;
	// lbzx r8,r26,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// cmplwi cr6,r8,16
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16, ctx.xer);
	// blt cr6,0x8219b108
	if (ctx.cr6.lt) goto loc_8219B108;
	// lbz r11,6(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 6);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8219b108
	if (!ctx.cr6.eq) goto loc_8219B108;
	// lbz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 10);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b108
	if (ctx.cr6.eq) goto loc_8219B108;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x822ec500
	ctx.lr = 0x8219B0FC;
	sub_822EC500(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_8219B108:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821985c0
	ctx.lr = 0x8219B118;
	sub_821985C0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82198670
	ctx.lr = 0x8219B128;
	sub_82198670(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219b144
	if (!ctx.cr6.eq) goto loc_8219B144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82198540
	ctx.lr = 0x8219B140;
	sub_82198540(ctx, base);
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
loc_8219B144:
	// lwz r9,4124(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4124);
	// rlwinm r11,r11,6,10,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3FFFC0;
	// li r10,7
	ctx.r10.s64 = 7;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r29,5
	ctx.r9.s64 = ctx.r29.s64 + 5;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// sth r10,4(r30)
	PPC_STORE_U16(ctx.r30.u32 + 4, ctx.r10.u16);
loc_8219B16C:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8219b16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B16C;
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r23,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r23.u32);
	// stb r22,55(r31)
	PPC_STORE_U8(ctx.r31.u32 + 55, ctx.r22.u8);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,300(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// stfs f13,16(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,20(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,32(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8219b208
	if (!ctx.cr6.eq) goto loc_8219B208;
	// lbz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b250
	if (ctx.cr6.eq) goto loc_8219B250;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r30,4106
	ctx.r10.s64 = ctx.r30.s64 + 4106;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821987f0
	ctx.lr = 0x8219B1F8;
	sub_821987F0(ctx, base);
	// lbzx r11,r26,r25
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r25.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r11,r26,r25
	PPC_STORE_U8(ctx.r26.u32 + ctx.r25.u32, ctx.r11.u8);
	// b 0x8219b26c
	goto loc_8219B26C;
loc_8219B208:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8219b250
	if (ctx.cr6.eq) goto loc_8219B250;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8219b234
	if (!ctx.cr6.eq) goto loc_8219B234;
	// li r5,1
	ctx.r5.s64 = 1;
	// lhz r4,50(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// bl 0x821989e0
	ctx.lr = 0x8219B228;
	sub_821989E0(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x8219b260
	goto loc_8219B260;
loc_8219B234:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bne cr6,0x8219b248
	if (!ctx.cr6.eq) goto loc_8219B248;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// b 0x8219b268
	goto loc_8219B268;
loc_8219B248:
	// addi r4,r30,6
	ctx.r4.s64 = ctx.r30.s64 + 6;
	// b 0x8219b268
	goto loc_8219B268;
loc_8219B250:
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// addi r10,r30,10
	ctx.r10.s64 = ctx.r30.s64 + 10;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219B260:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8219B268:
	// bl 0x821987f0
	ctx.lr = 0x8219B26C;
	sub_821987F0(ctx, base);
loc_8219B26C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// sth r21,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r21.u16);
	// stb r28,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r28.u8);
	// sth r20,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r20.u16);
	// sth r24,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r24.u16);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822ec500
	ctx.lr = 0x8219B298;
	sub_822EC500(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lhz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82198880
	ctx.lr = 0x8219B2AC;
	sub_82198880(ctx, base);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lhz r5,62(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// bl 0x82198958
	ctx.lr = 0x8219B2BC;
	sub_82198958(ctx, base);
	// lwz r11,4136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4136, ctx.r11.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B060) {
	__imp__sub_8219B060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B2D4) {
	__imp__sub_8219B2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B2D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lfs f1,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lbz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x8219b060
	ctx.lr = 0x8219B32C;
	sub_8219B060(ctx, base);
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

PPC_WEAK_FUNC(sub_8219B2D8) {
	__imp__sub_8219B2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B344) {
	__imp__sub_8219B344(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8219B350;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-3776(r1)
	ea = -3776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// bl 0x821a0218
	ctx.lr = 0x8219B384;
	sub_821A0218(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r31,3892(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3892);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stb r25,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r25.u8);
	// lwz r11,14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14960);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b4b8
	if (ctx.cr6.eq) goto loc_8219B4B8;
	// lis r25,-32075
	ctx.r25.s64 = -2102067200;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x8219b3e4
	if (!ctx.cr6.eq) goto loc_8219B3E4;
	// lwz r11,14992(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14992);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219b3e4
	if (!ctx.cr6.eq) goto loc_8219B3E4;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14856);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b4b8
	if (ctx.cr6.eq) goto loc_8219B4B8;
loc_8219B3E4:
	// lbz r23,3887(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 3887);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8219b400
	if (ctx.cr6.eq) goto loc_8219B400;
	// mulli r11,r31,176
	ctx.r11.s64 = ctx.r31.s64 * 176;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r11,508
	ctx.r6.s64 = ctx.r11.s64 + 508;
	// b 0x8219b404
	goto loc_8219B404;
loc_8219B400:
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
loc_8219B404:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lbz r8,3879(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 3879);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823bbd90
	ctx.lr = 0x8219B420;
	sub_823BBD90(ctx, base);
	// lwz r11,14992(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 14992);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b480
	if (ctx.cr6.eq) goto loc_8219B480;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bne cr6,0x8219b470
	if (!ctx.cr6.eq) goto loc_8219B470;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8219b458
	if (ctx.cr6.eq) goto loc_8219B458;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82198dc0
	ctx.lr = 0x8219B454;
	sub_82198DC0(ctx, base);
	// b 0x8219b480
	goto loc_8219B480;
loc_8219B458:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,3868(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3868);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82198cf8
	ctx.lr = 0x8219B46C;
	sub_82198CF8(ctx, base);
	// b 0x8219b480
	goto loc_8219B480;
loc_8219B470:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,3868(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 3868);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82198b38
	ctx.lr = 0x8219B480;
	sub_82198B38(ctx, base);
loc_8219B480:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822ec4e8
	ctx.lr = 0x8219B488;
	sub_822EC4E8(ctx, base);
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r9,r11,15104
	ctx.r9.s64 = ctx.r11.s64 + 15104;
	// li r8,765
	ctx.r8.s64 = 765;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-19752
	ctx.r4.s64 = ctx.r10.s64 + -19752;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823bdba0
	ctx.lr = 0x8219B4B0;
	sub_823BDBA0(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x822ec500
	ctx.lr = 0x8219B4B8;
	sub_822EC500(ctx, base);
loc_8219B4B8:
	// addi r1,r1,3776
	ctx.r1.s64 = ctx.r1.s64 + 3776;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B348) {
	__imp__sub_8219B348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B4C4) {
	__imp__sub_8219B4C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x8219B4D0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17936(r1)
	ea = -17936 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14960);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b6c4
	if (ctx.cr6.eq) goto loc_8219B6C4;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r10,r11,7560
	ctx.r10.s64 = ctx.r11.s64 + 7560;
	// lbz r9,4150(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4150);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8219b6c4
	if (!ctx.cr6.eq) goto loc_8219B6C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x8219b6c4
	if (ctx.cr6.lt) goto loc_8219B6C4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x822d6b00
	ctx.lr = 0x8219B550;
	sub_822D6B00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lfs f0,12336(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x822d4e08
	ctx.lr = 0x8219B56C;
	sub_822D4E08(ctx, base);
	// lfs f10,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r1,9632
	ctx.r9.s64 = ctx.r1.s64 + 9632;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f31,f31
	ctx.f30.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// fmuls f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f30,200(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f2,184(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// fmsubs f3,f0,f11,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f6.f64));
	// stfs f3,148(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmsubs f5,f12,f9,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f8.f64));
	// stfs f5,140(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fmsubs f4,f10,f13,f7
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// bl 0x823b8590
	ctx.lr = 0x8219B5E4;
	sub_823B8590(ctx, base);
	// lbz r30,18039(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 18039);
	// addi r8,r1,1440
	ctx.r8.s64 = ctx.r1.s64 + 1440;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,9632
	ctx.r6.s64 = ctx.r1.s64 + 9632;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r26,18052(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18052);
	// lbz r25,18047(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 18047);
	// stfs f31,348(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// lwz r24,18028(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18028);
	// stfs f30,352(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f13,336(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stw r8,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r8.u32);
	// stfs f12,340(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stfs f11,344(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stw r6,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r6.u32);
	// bne cr6,0x8219b664
	if (!ctx.cr6.eq) goto loc_8219B664;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stb r25,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r25.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r30,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r30.u8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8219b348
	ctx.lr = 0x8219B664;
	sub_8219B348(ctx, base);
loc_8219B664:
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14856(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14856);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219b68c
	if (!ctx.cr6.eq) goto loc_8219B68C;
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14992);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219b6c4
	if (ctx.cr6.eq) goto loc_8219B6C4;
loc_8219B68C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stb r25,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r25.u8);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stb r30,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r30.u8);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8219b348
	ctx.lr = 0x8219B6C4;
	sub_8219B348(ctx, base);
loc_8219B6C4:
	// addi r1,r1,17936
	ctx.r1.s64 = ctx.r1.s64 + 17936;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B4C8) {
	__imp__sub_8219B4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B6D4) {
	__imp__sub_8219B6D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B6D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8219B6E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r11,7552(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 7552);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219b804
	if (!ctx.cr6.eq) goto loc_8219B804;
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b738
	if (ctx.cr6.eq) goto loc_8219B738;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,7560
	ctx.r11.s64 = ctx.r11.s64 + 7560;
	// addi r10,r11,4144
	ctx.r10.s64 = ctx.r11.s64 + 4144;
	// lbzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8219b804
	if (!ctx.cr6.lt) goto loc_8219B804;
loc_8219B738:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821853f8
	ctx.lr = 0x8219B754;
	sub_821853F8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r23,r30,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r10,22216
	ctx.r30.s64 = ctx.r10.s64 + 22216;
	// lfs f8,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r30,104
	ctx.r8.s64 = ctx.r30.s64 + 104;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lfs f13,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,84(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f0,r23,r8
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f9,60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f7,f10,f0,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// lfs f1,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f5,f11,f8
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f4,f7,f6,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f5.f64));
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82185668
	ctx.lr = 0x8219B7AC;
	sub_82185668(ctx, base);
	// addi r5,r30,86
	ctx.r5.s64 = ctx.r30.s64 + 86;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lbz r9,177(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lbz r6,251(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 251);
	// lhzx r4,r23,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r23.u32 + ctx.r5.u32);
	// lfs f2,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// stb r27,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r27.u8);
	// mullw r5,r4,r9
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stb r24,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r24.u8);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// srawi r4,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 16;
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8219b4c8
	ctx.lr = 0x8219B804;
	sub_8219B4C8(ctx, base);
loc_8219B804:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B6D8) {
	__imp__sub_8219B6D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B80C) {
	__imp__sub_8219B80C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219B818;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// std r6,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r6.u64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// bge cr6,0x8219b8a8
	if (!ctx.cr6.lt) goto loc_8219B8A8;
loc_8219B848:
	// mulli r11,r28,14
	ctx.r11.s64 = ctx.r28.s64 * 14;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219B860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b8a8
	if (ctx.cr6.eq) goto loc_8219B8A8;
	// mulli r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 * 14;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219B884:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B884;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// cmpw cr6,r26,r28
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r28.s32, ctx.xer);
	// addze r28,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r28.s64 = temp.s64;
	// blt cr6,0x8219b848
	if (ctx.cr6.lt) goto loc_8219B848;
loc_8219B8A8:
	// mulli r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 * 14;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r9,r10,r29
	ctx.r9.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r10,r1,190
	ctx.r10.s64 = ctx.r1.s64 + 190;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219B8C0:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8219b8c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B8C0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B810) {
	__imp__sub_8219B810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219B8D4) {
	__imp__sub_8219B8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219B8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219B8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8219B904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b96c
	if (ctx.cr6.eq) goto loc_8219B96C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219b96c
	if (ctx.cr6.eq) goto loc_8219B96C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B928:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b928
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B928;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B944:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b944
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B944;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B960:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B960;
loc_8219B96C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219B97C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b9e4
	if (ctx.cr6.eq) goto loc_8219B9E4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8219b9e4
	if (ctx.cr6.eq) goto loc_8219B9E4;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B9A0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b9a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B9A0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B9BC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b9bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B9BC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219B9D8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219b9d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219B9D8;
loc_8219B9E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219B9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ba5c
	if (ctx.cr6.eq) goto loc_8219BA5C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219ba5c
	if (ctx.cr6.eq) goto loc_8219BA5C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BA18:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219ba18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BA18;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BA34:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219ba34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BA34;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BA50:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219ba50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BA50;
loc_8219BA5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219B8D8) {
	__imp__sub_8219B8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219BA64) {
	__imp__sub_8219BA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219BA70;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// std r7,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r7.u64);
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8219bb08
	if (!ctx.cr6.lt) goto loc_8219BB08;
loc_8219BAA0:
	// mulli r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 * 14;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r3,-14
	ctx.r4.s64 = ctx.r3.s64 + -14;
	// bctrl 
	ctx.lr = 0x8219BAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219bac4
	if (ctx.cr6.eq) goto loc_8219BAC4;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_8219BAC4:
	// mulli r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 * 14;
	// mulli r10,r29,14
	ctx.r10.s64 = ctx.r29.s64 * 14;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219BAE4:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BAE4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x8219baa0
	if (ctx.cr6.lt) goto loc_8219BAA0;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
loc_8219BB08:
	// bne cr6,0x8219bb3c
	if (!ctx.cr6.eq) goto loc_8219BB3C;
	// mulli r10,r28,14
	ctx.r10.s64 = ctx.r28.s64 * 14;
	// mulli r9,r29,14
	ctx.r9.s64 = ctx.r29.s64 * 14;
	// li r11,7
	ctx.r11.s64 = 7;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219BB2C:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8219bb2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BB2C;
	// addi r29,r28,-1
	ctx.r29.s64 = ctx.r28.s64 + -1;
loc_8219BB3C:
	// lwz r11,200(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lhz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 204);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// rldicr r9,r11,16,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFFFFFF;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219b810
	ctx.lr = 0x8219BB68;
	sub_8219B810(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219BA68) {
	__imp__sub_8219BA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219BB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r3.s64;
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// divw r11,r11,r10
	ctx.r11.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// ble cr6,0x8219bc08
	if (!ctx.cr6.gt) goto loc_8219BC08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// mulli r29,r11,14
	ctx.r29.s64 = ctx.r11.s64 * 14;
	// mulli r26,r11,28
	ctx.r26.s64 = ctx.r11.s64 * 28;
	// add r27,r29,r3
	ctx.r27.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r5,r26,r3
	ctx.r5.u64 = ctx.r26.u64 + ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8219b8d8
	ctx.lr = 0x8219BBC0;
	sub_8219B8D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r3,r29,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r29.s64;
	// bl 0x8219b8d8
	ctx.lr = 0x8219BBD4;
	sub_8219B8D8(ctx, base);
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
	// bl 0x8219b8d8
	ctx.lr = 0x8219BBEC;
	sub_8219B8D8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219b8d8
	ctx.lr = 0x8219BC00;
	sub_8219B8D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8219BC08:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219b8d8
	ctx.lr = 0x8219BC14;
	sub_8219B8D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219BB70) {
	__imp__sub_8219BB70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219BC1C) {
	__imp__sub_8219BC1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BC20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219BC28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// divw r28,r11,r10
	ctx.r28.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// srawi r9,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 1;
	// addze. r31,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r31.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x8219bc90
	if (!ctx.cr0.gt) goto loc_8219BC90;
	// mulli r11,r31,14
	ctx.r11.s64 = ctx.r31.s64 * 14;
	// add r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_8219BC54:
	// li r12,-14
	ctx.r12.s64 = -14;
	// ldux r6,r30,r12
	ea = ctx.r30.u32 + ctx.r12.u32;
	ctx.r6.u64 = PPC_LOAD_U64(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// rldicr r9,r11,16,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFFFFFF;
	// or r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rldicr r7,r7,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 16) & 0xFFFFFFFFFFFF0000;
	// bl 0x8219ba68
	ctx.lr = 0x8219BC88;
	sub_8219BA68(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x8219bc54
	if (ctx.cr6.gt) goto loc_8219BC54;
loc_8219BC90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219BC20) {
	__imp__sub_8219BC20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219BC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8219BCA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,14
	ctx.r10.s64 = 14;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// divw r9,r11,r10
	ctx.r9.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mulli r11,r7,14
	ctx.r11.s64 = ctx.r7.s64 * 14;
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r5,r5,-14
	ctx.r5.s64 = ctx.r5.s64 + -14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x8219bb70
	ctx.lr = 0x8219BCE0;
	sub_8219BB70(ctx, base);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// addi r28,r31,14
	ctx.r28.s64 = ctx.r31.s64 + 14;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8219bd38
	if (!ctx.cr6.lt) goto loc_8219BD38;
loc_8219BCF0:
	// addi r31,r30,-14
	ctx.r31.s64 = ctx.r30.s64 + -14;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219BD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bd38
	if (!ctx.cr6.eq) goto loc_8219BD38;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219BD20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bd38
	if (!ctx.cr6.eq) goto loc_8219BD38;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r25,r31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8219bcf0
	if (ctx.cr6.lt) goto loc_8219BCF0;
loc_8219BD38:
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8219bd84
	if (!ctx.cr6.lt) goto loc_8219BD84;
loc_8219BD40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219BD50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bd84
	if (!ctx.cr6.eq) goto loc_8219BD84;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219BD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bd84
	if (!ctx.cr6.eq) goto loc_8219BD84;
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8219bd40
	if (ctx.cr6.lt) goto loc_8219BD40;
loc_8219BD84:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_8219BD8C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8219be3c
	if (!ctx.cr6.lt) goto loc_8219BE3C;
loc_8219BD94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219BDA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219be30
	if (!ctx.cr6.eq) goto loc_8219BE30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219BDC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219be3c
	if (!ctx.cr6.eq) goto loc_8219BE3C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219be30
	if (ctx.cr6.eq) goto loc_8219BE30;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r10,r1,78
	ctx.r10.s64 = ctx.r1.s64 + 78;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219BDEC:
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bdec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BDEC;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219BE08:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219be08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BE08;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BE24:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219be24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BE24;
loc_8219BE30:
	// addi r29,r29,14
	ctx.r29.s64 = ctx.r29.s64 + 14;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8219bd94
	if (ctx.cr6.lt) goto loc_8219BD94;
loc_8219BE3C:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// ble cr6,0x8219bef4
	if (!ctx.cr6.gt) goto loc_8219BEF4;
	// addi r31,r27,-14
	ctx.r31.s64 = ctx.r27.s64 + -14;
loc_8219BE48:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219BE58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bee0
	if (!ctx.cr6.eq) goto loc_8219BEE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219BE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219bef0
	if (!ctx.cr6.eq) goto loc_8219BEF0;
	// addi r30,r30,-14
	ctx.r30.s64 = ctx.r30.s64 + -14;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8219bee0
	if (ctx.cr6.eq) goto loc_8219BEE0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,94
	ctx.r10.s64 = ctx.r1.s64 + 94;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BE9C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219be9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BE9C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BEB8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219beb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BEB8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,94
	ctx.r11.s64 = ctx.r1.s64 + 94;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BED4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BED4;
loc_8219BEE0:
	// addi r27,r27,-14
	ctx.r27.s64 = ctx.r27.s64 + -14;
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8219be48
	if (ctx.cr6.lt) goto loc_8219BE48;
loc_8219BEF0:
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
loc_8219BEF4:
	// bne cr6,0x8219bfd8
	if (!ctx.cr6.eq) goto loc_8219BFD8;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8219c10c
	if (ctx.cr6.eq) goto loc_8219C10C;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219bf64
	if (ctx.cr6.eq) goto loc_8219BF64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8219bf64
	if (ctx.cr6.eq) goto loc_8219BF64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,110
	ctx.r10.s64 = ctx.r1.s64 + 110;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BF20:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bf20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BF20;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BF3C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bf3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BF3C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,110
	ctx.r11.s64 = ctx.r1.s64 + 110;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BF58:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bf58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BF58;
loc_8219BF64:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// addi r30,r30,14
	ctx.r30.s64 = ctx.r30.s64 + 14;
	// addi r29,r29,14
	ctx.r29.s64 = ctx.r29.s64 + 14;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8219bd8c
	if (ctx.cr6.eq) goto loc_8219BD8C;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r1,126
	ctx.r9.s64 = ctx.r1.s64 + 126;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219BF90:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8219bf90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BF90;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BFAC:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8219bfac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BFAC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,126
	ctx.r11.s64 = ctx.r1.s64 + 126;
	// addi r10,r7,-2
	ctx.r10.s64 = ctx.r7.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219BFC8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219bfc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219BFC8;
	// b 0x8219bd8c
	goto loc_8219BD8C;
loc_8219BFD8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// addi r27,r27,-14
	ctx.r27.s64 = ctx.r27.s64 + -14;
	// bne cr6,0x8219c0a8
	if (!ctx.cr6.eq) goto loc_8219C0A8;
	// addi r30,r30,-14
	ctx.r30.s64 = ctx.r30.s64 + -14;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8219c044
	if (ctx.cr6.eq) goto loc_8219C044;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,142
	ctx.r10.s64 = ctx.r1.s64 + 142;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C000:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C000;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C01C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C01C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,142
	ctx.r11.s64 = ctx.r1.s64 + 142;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C038:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C038;
loc_8219C044:
	// addi r28,r28,-14
	ctx.r28.s64 = ctx.r28.s64 + -14;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8219bd8c
	if (ctx.cr6.eq) goto loc_8219BD8C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,158
	ctx.r10.s64 = ctx.r1.s64 + 158;
	// addi r11,r30,-2
	ctx.r11.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C060:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C060;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r28,-2
	ctx.r11.s64 = ctx.r28.s64 + -2;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C07C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c07c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C07C;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,158
	ctx.r11.s64 = ctx.r1.s64 + 158;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C098:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C098;
	// b 0x8219bd8c
	goto loc_8219BD8C;
loc_8219C0A8:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8219c104
	if (ctx.cr6.eq) goto loc_8219C104;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r1,174
	ctx.r10.s64 = ctx.r1.s64 + 174;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C0C0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C0C0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// addi r10,r29,-2
	ctx.r10.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C0DC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C0DC;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,174
	ctx.r11.s64 = ctx.r1.s64 + 174;
	// addi r10,r27,-2
	ctx.r10.s64 = ctx.r27.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C0F8:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C0F8;
loc_8219C104:
	// addi r29,r29,14
	ctx.r29.s64 = ctx.r29.s64 + 14;
	// b 0x8219bd8c
	goto loc_8219BD8C;
loc_8219C10C:
	// stw r30,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r28,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r28.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219BC98) {
	__imp__sub_8219BC98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219C128;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8219c270
	if (ctx.cr6.eq) goto loc_8219C270;
	// addi r29,r3,14
	ctx.r29.s64 = ctx.r3.s64 + 14;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8219c270
	if (ctx.cr6.eq) goto loc_8219C270;
	// addi r26,r29,-14
	ctx.r26.s64 = ctx.r29.s64 + -14;
loc_8219C150:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r11,r29,-2
	ctx.r11.s64 = ctx.r29.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C168:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c168
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C168;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8219C184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219c1e4
	if (ctx.cr6.eq) goto loc_8219C1E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8219c1c4
	if (ctx.cr6.eq) goto loc_8219C1C4;
loc_8219C19C:
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219C1B0:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8219c1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C1B0;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8219c19c
	if (!ctx.cr6.eq) goto loc_8219C19C;
loc_8219C1C4:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C1D4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c1d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C1D4;
	// b 0x8219c260
	goto loc_8219C260;
loc_8219C1E4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8219C1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219c244
	if (ctx.cr6.eq) goto loc_8219C244;
loc_8219C204:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C214:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C214;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219C238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219c204
	if (!ctx.cr6.eq) goto loc_8219C204;
loc_8219C244:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,78
	ctx.r11.s64 = ctx.r1.s64 + 78;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C254:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x8219c254
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C254;
loc_8219C260:
	// addi r29,r29,14
	ctx.r29.s64 = ctx.r29.s64 + 14;
	// addi r26,r26,14
	ctx.r26.s64 = ctx.r26.s64 + 14;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8219c150
	if (!ctx.cr6.eq) goto loc_8219C150;
loc_8219C270:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219C120) {
	__imp__sub_8219C120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219C280;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,14
	ctx.r28.s64 = 14;
	// subf r31,r3,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8219c320
	if (!ctx.cr6.gt) goto loc_8219C320;
	// addi r29,r3,-14
	ctx.r29.s64 = ctx.r3.s64 + -14;
loc_8219C2A4:
	// li r8,7
	ctx.r8.s64 = 7;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r9,r1,78
	ctx.r9.s64 = ctx.r1.s64 + 78;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8219C2B8:
	// lhzu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8219c2b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C2B8;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r30,-2
	ctx.r10.s64 = ctx.r30.s64 + -2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C2D4:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8219c2d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C2D4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r31,-14
	ctx.r10.s64 = ctx.r31.s64 + -14;
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// rldicr r7,r11,16,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u64, 16) & 0xFFFFFFFFFFFFFFFF;
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// divw r5,r10,r28
	ctx.r5.s32 = ctx.r10.s32 / ctx.r28.s32;
	// or r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 | ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rldicr r7,r3,16,47
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u64, 16) & 0xFFFFFFFFFFFF0000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219ba68
	ctx.lr = 0x8219C310;
	sub_8219BA68(ctx, base);
	// addi r31,r31,-14
	ctx.r31.s64 = ctx.r31.s64 + -14;
	// divw r11,r31,r28
	ctx.r11.s32 = ctx.r31.s32 / ctx.r28.s32;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x8219c2a4
	if (ctx.cr6.gt) goto loc_8219C2A4;
loc_8219C320:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219C278) {
	__imp__sub_8219C278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219C330;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,14
	ctx.r25.s64 = 14;
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8219c3e4
	if (!ctx.cr6.gt) goto loc_8219C3E4;
loc_8219C358:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8219c408
	if (!ctx.cr6.gt) goto loc_8219C408;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219bc98
	ctx.lr = 0x8219C374;
	sub_8219BC98(ctx, base);
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
	// divw r7,r9,r25
	ctx.r7.s32 = ctx.r9.s32 / ctx.r25.s32;
	// divw r6,r8,r25
	ctx.r6.s32 = ctx.r8.s32 / ctx.r25.s32;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bge cr6,0x8219c3c4
	if (!ctx.cr6.lt) goto loc_8219C3C4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c328
	ctx.lr = 0x8219C3BC;
	sub_8219C328(ctx, base);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x8219c3d4
	goto loc_8219C3D4;
loc_8219C3C4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219c328
	ctx.lr = 0x8219C3D0;
	sub_8219C328(ctx, base);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8219C3D4:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bgt cr6,0x8219c358
	if (ctx.cr6.gt) goto loc_8219C358;
loc_8219C3E4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8219c400
	if (!ctx.cr6.gt) goto loc_8219C400;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c120
	ctx.lr = 0x8219C400;
	sub_8219C120(ctx, base);
loc_8219C400:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_8219C408:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x8219c3e4
	if (!ctx.cr6.gt) goto loc_8219C3E4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8219c430
	if (!ctx.cr6.gt) goto loc_8219C430;
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
	// bl 0x8219bc20
	ctx.lr = 0x8219C430;
	sub_8219BC20(ctx, base);
loc_8219C430:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219c278
	ctx.lr = 0x8219C440;
	sub_8219C278(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219C328) {
	__imp__sub_8219C328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C448) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C448) {
	__imp__sub_8219C448(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8219C458;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de008
	ctx.lr = 0x8219C460;
	__savefpr_20(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3456(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 3456);
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f24,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lfs f23,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lfs f22,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f22.f64 = double(temp.f32);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219c8c4
	if (ctx.cr6.eq) goto loc_8219C8C4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f26,20928(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20928);
	ctx.f26.f64 = double(temp.f32);
	// addi r30,r4,20
	ctx.r30.s64 = ctx.r4.s64 + 20;
	// lfs f25,20612(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20612);
	ctx.f25.f64 = double(temp.f32);
	// addi r23,r11,20916
	ctx.r23.s64 = ctx.r11.s64 + 20916;
	// lfs f27,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// lfs f21,5992(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5992);
	ctx.f21.f64 = double(temp.f32);
loc_8219C4B8:
	// lfs f13,-16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,-8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f8,f0,f0
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f31,f13,f13,f7
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f31,f21
	ctx.cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// blt cr6,0x8219c8b0
	if (ctx.cr6.lt) goto loc_8219C8B0;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,84
	ctx.r5.s64 = 84;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82394cb8
	ctx.lr = 0x8219C51C;
	sub_82394CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219c8c4
	if (ctx.cr6.eq) goto loc_8219C8C4;
	// lfs f0,-20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f13,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f12,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f30,f0,f24
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fsubs f29,f13,f23
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
	// fsubs f28,f12,f22
	ctx.f28.f64 = double(float(ctx.f12.f64 - ctx.f22.f64));
	// bl 0x82394d80
	ctx.lr = 0x8219C54C;
	sub_82394D80(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f27,f11
	ctx.f10.f64 = double(float(ctx.f27.f64 / ctx.f11.f64));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fdivs f9,f27,f31
	ctx.f9.f64 = double(float(ctx.f27.f64 / ctx.f31.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f30,0(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,4(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f28,8(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f6.f64 = double(temp.f32);
	// stfsu f6,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f31,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822d4b08
	ctx.lr = 0x8219C598;
	sub_822D4B08(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d53f8
	ctx.lr = 0x8219C5A4;
	sub_822D53F8(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lhz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f30,f12,f10,f5
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmsubs f29,f13,f9,f4
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f4.f64));
	// fmsubs f28,f0,f11,f3
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 - ctx.f3.f64));
	// bl 0x82394d70
	ctx.lr = 0x8219C5E0;
	sub_82394D70(ctx, base);
	// addi r11,r1,168
	ctx.r11.s64 = ctx.r1.s64 + 168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r28,r11,-12
	ctx.r28.s64 = ctx.r11.s64 + -12;
loc_8219C5F0:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f20,f12,f25
	ctx.f20.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x823de720
	ctx.lr = 0x8219C610;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f20,f10,f26
	ctx.f20.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// bl 0x823de800
	ctx.lr = 0x8219C624;
	sub_823DE800(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f20
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f20.f64));
	// lfs f6,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f20
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f20.f64));
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f20
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f20.f64));
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f10,-20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f10.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// fmuls f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f8,f9,f26
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fmadds f7,f8,f30,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f7.f64));
	// fmadds f6,f29,f8,f5
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f5,f28,f8,f3
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fsubs f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f1.f64));
	// fsubs f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fsubs f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fadds f0,f13,f6
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// stfs f0,8(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// fadds f13,f11,f5
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f7.f64));
	// stfs f1,4(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfsu f13,12(r28)
	ea = 12 + ctx.r28.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// fadds f12,f10,f4
	ctx.f12.f64 = double(float(ctx.f10.f64 + ctx.f4.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f3
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// stfs f10,4(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f9,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f2
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne cr6,0x8219c5f0
	if (!ctx.cr6.eq) goto loc_8219C5F0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C6E0:
	// lfs f0,-20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f10,-16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f8,-12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r27,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r27.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219c6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C6E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C730:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lhz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// sth r5,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r5.u16);
	// rlwinm r4,r6,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lhz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r3,r8,8
	ctx.r3.s64 = ctx.r8.s64 + 8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// sth r5,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r5.u16);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8219c730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C730;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C7B4:
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,2
	ctx.r7.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8219c7b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C7B4;
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219C824:
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r6,r8,9
	ctx.r6.s64 = ctx.r8.s64 + 9;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// addi r6,r9,10
	ctx.r6.s64 = ctx.r9.s64 + 10;
	// sth r6,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r6.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r9,11
	ctx.r8.s64 = ctx.r9.s64 + 11;
	// addi r7,r9,10
	ctx.r7.s64 = ctx.r9.s64 + 10;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// sth r7,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r7.u16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8219c824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C824;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r6,84
	ctx.r6.s64 = 84;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82394ed0
	ctx.lr = 0x8219C8B0;
	sub_82394ED0(ctx, base);
loc_8219C8B0:
	// lwz r11,3456(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 3456);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8219c4b8
	if (!ctx.cr6.eq) goto loc_8219C4B8;
loc_8219C8C4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de054
	ctx.lr = 0x8219C8D0;
	__restfpr_20(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219C450) {
	__imp__sub_8219C450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219C8D4) {
	__imp__sub_8219C8D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C8D8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,2816
	ctx.r9.s64 = ctx.r10.s64 + 2816;
	// stw r11,3456(r9)
	PPC_STORE_U32(ctx.r9.u32 + 3456, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C8D8) {
	__imp__sub_8219C8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219C8EC) {
	__imp__sub_8219C8EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C8F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r10,r11,2816
	ctx.r10.s64 = ctx.r11.s64 + 2816;
	// lwz r11,3456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3456);
	// cmpwi cr6,r11,96
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 96, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r9,9
	ctx.r9.s64 = 9;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r3,-4
	ctx.r8.s64 = ctx.r3.s64 + -4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8219C924:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219c924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219C924;
	// lwz r11,3456(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3456);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3456(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3456, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C8F0) {
	__imp__sub_8219C8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C940) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C940) {
	__imp__sub_8219C940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219C94C) {
	__imp__sub_8219C94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C950) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8219c988
	if (!ctx.cr6.gt) goto loc_8219C988;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8219C968:
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8219c9cc
	if (ctx.cr6.eq) goto loc_8219C9CC;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8219c968
	if (ctx.cr6.lt) goto loc_8219C968;
loc_8219C988:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r8,1
	ctx.r9.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// sth r10,22(r11)
	PPC_STORE_U16(ctx.r11.u32 + 22, ctx.r10.u16);
	// sth r10,24(r11)
	PPC_STORE_U16(ctx.r11.u32 + 24, ctx.r10.u16);
	// sth r10,26(r11)
	PPC_STORE_U16(ctx.r11.u32 + 26, ctx.r10.u16);
	// sth r10,28(r11)
	PPC_STORE_U16(ctx.r11.u32 + 28, ctx.r10.u16);
	// sth r10,30(r11)
	PPC_STORE_U16(ctx.r11.u32 + 30, ctx.r10.u16);
	// blr 
	return;
loc_8219C9CC:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C950) {
	__imp__sub_8219C950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219C9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lfs f0,20776(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20776);
	ctx.f0.f64 = double(temp.f32);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f13,20628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20628);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fsel f1,f5,f7,f6
	ctx.f1.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f6.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219C9D8) {
	__imp__sub_8219C9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219CA34) {
	__imp__sub_8219CA34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
loc_8219CA48:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8219ca48
	if (ctx.cr6.eq) goto loc_8219CA48;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219CA38) {
	__imp__sub_8219CA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CA70) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8219cad0
	if (ctx.cr6.gt) goto loc_8219CAD0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8219cab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CAB8;
	// bdzf 4*cr6+eq,0x8219caac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CAAC;
	// bdzf 4*cr6+eq,0x8219caa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CAA0;
	// bne cr6,0x8219cac4
	if (!ctx.cr6.eq) goto loc_8219CAC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20972
	ctx.r3.s64 = ctx.r11.s64 + 20972;
	// blr 
	return;
loc_8219CAA0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20964
	ctx.r3.s64 = ctx.r11.s64 + 20964;
	// blr 
	return;
loc_8219CAAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20956
	ctx.r3.s64 = ctx.r11.s64 + 20956;
	// blr 
	return;
loc_8219CAB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20948
	ctx.r3.s64 = ctx.r11.s64 + 20948;
	// blr 
	return;
loc_8219CAC4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20940
	ctx.r3.s64 = ctx.r11.s64 + 20940;
	// blr 
	return;
loc_8219CAD0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,20932
	ctx.r3.s64 = ctx.r11.s64 + 20932;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219CA70) {
	__imp__sub_8219CA70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219CADC) {
	__imp__sub_8219CADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219CAE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219cb8c
	if (ctx.cr6.eq) goto loc_8219CB8C;
	// lwz r5,4124(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4124);
loc_8219CB24:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// lhz r6,58(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// bne cr6,0x8219cb48
	if (!ctx.cr6.eq) goto loc_8219CB48;
	// lbz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
loc_8219CB48:
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219cb24
	if (!ctx.cr6.eq) goto loc_8219CB24;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8219cb8c
	if (ctx.cr6.eq) goto loc_8219CB8C;
	// bl 0x8219ca70
	ctx.lr = 0x8219CB64;
	sub_8219CA70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r11,20980
	ctx.r3.s64 = ctx.r11.s64 + 20980;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x8219CB78;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219CB8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219CB8C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219CAE0) {
	__imp__sub_8219CAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CB94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219CB94) {
	__imp__sub_8219CB94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CB98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x8219CBA0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r28,r11,7560
	ctx.r28.s64 = ctx.r11.s64 + 7560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lwz r11,4124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4124);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219cbe4
	if (ctx.cr6.eq) goto loc_8219CBE4;
loc_8219CBCC:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219cbcc
	if (!ctx.cr6.eq) goto loc_8219CBCC;
loc_8219CBE4:
	// lwz r10,4116(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4116);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219cc04
	if (ctx.cr6.eq) goto loc_8219CC04;
loc_8219CBF4:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219cbf4
	if (!ctx.cr6.eq) goto loc_8219CBF4;
loc_8219CC04:
	// lwz r10,4120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4120);
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219cc24
	if (ctx.cr6.eq) goto loc_8219CC24;
loc_8219CC14:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219cc14
	if (!ctx.cr6.eq) goto loc_8219CC14;
loc_8219CC24:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// ori r18,r10,32768
	ctx.r18.u64 = ctx.r10.u64 | 32768;
	// li r22,0
	ctx.r22.s64 = 0;
	// add r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 + ctx.r18.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8219cce4
	if (ctx.cr6.eq) goto loc_8219CCE4;
loc_8219CC54:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8219ccd8
	if (ctx.cr6.eq) goto loc_8219CCD8;
	// lhz r9,58(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 58);
	// lbz r7,56(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 56);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// lbz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r3,r5,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// subf r9,r3,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r3.s64;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
	// bgt cr6,0x8219ccd8
	if (ctx.cr6.gt) goto loc_8219CCD8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8219cccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CCCC;
	// bdzf 4*cr6+eq,0x8219ccc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CCC4;
	// bdzf 4*cr6+eq,0x8219ccbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8219CCBC;
	// bne cr6,0x8219ccd4
	if (!ctx.cr6.eq) goto loc_8219CCD4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x8219ccd8
	goto loc_8219CCD8;
loc_8219CCBC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x8219ccd8
	goto loc_8219CCD8;
loc_8219CCC4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x8219ccd8
	goto loc_8219CCD8;
loc_8219CCCC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8219ccd8
	goto loc_8219CCD8;
loc_8219CCD4:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8219CCD8:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8219cc54
	if (!ctx.cr6.eq) goto loc_8219CC54;
loc_8219CCE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,4140(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4140);
	// li r5,512
	ctx.r5.s64 = 512;
	// lwz r6,4136(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4136);
	// addi r3,r11,21212
	ctx.r3.s64 = ctx.r11.s64 + 21212;
	// subfic r4,r4,512
	ctx.xer.ca = ctx.r4.u32 <= 512;
	ctx.r4.s64 = 512 - ctx.r4.s64;
	// bl 0x822e84f0
	ctx.lr = 0x8219CD00;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CD14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r3,r10,21168
	ctx.r3.s64 = ctx.r10.s64 + 21168;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// subfic r4,r19,2048
	ctx.xer.ca = ctx.r19.u32 <= 2048;
	ctx.r4.s64 = 2048 - ctx.r19.s64;
	// bl 0x822e84f0
	ctx.lr = 0x8219CD2C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CD40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r3,r9,21124
	ctx.r3.s64 = ctx.r9.s64 + 21124;
	// li r5,3072
	ctx.r5.s64 = 3072;
	// subfic r4,r20,3072
	ctx.xer.ca = ctx.r20.u32 <= 3072;
	ctx.r4.s64 = 3072 - ctx.r20.s64;
	// bl 0x822e84f0
	ctx.lr = 0x8219CD58;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r4,r8,-6372
	ctx.r4.s64 = ctx.r8.s64 + -6372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8219CD84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r7,21100
	ctx.r3.s64 = ctx.r7.s64 + 21100;
	// bl 0x822e84f0
	ctx.lr = 0x8219CD94;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r6,21076
	ctx.r3.s64 = ctx.r6.s64 + 21076;
	// bl 0x822e84f0
	ctx.lr = 0x8219CDB8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CDCC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r5,21060
	ctx.r3.s64 = ctx.r5.s64 + 21060;
	// bl 0x822e84f0
	ctx.lr = 0x8219CDDC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CDF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r3,21040
	ctx.r3.s64 = ctx.r3.s64 + 21040;
	// bl 0x822e84f0
	ctx.lr = 0x8219CE00;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CE14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r11,21024
	ctx.r3.s64 = ctx.r11.s64 + 21024;
	// bl 0x822e84f0
	ctx.lr = 0x8219CE24;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8219CE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r5,6(r28)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// addi r6,r10,21016
	ctx.r6.s64 = ctx.r10.s64 + 21016;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cae0
	ctx.lr = 0x8219CE5C;
	sub_8219CAE0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r27,2048
	ctx.r27.s64 = 2048;
	// addi r25,r28,8
	ctx.r25.s64 = ctx.r28.s64 + 8;
	// addi r24,r11,-22228
	ctx.r24.s64 = ctx.r11.s64 + -22228;
loc_8219CE70:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lhzu r5,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r5.u64 = PPC_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cae0
	ctx.lr = 0x8219CE90;
	sub_8219CAE0(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bne 0x8219ce70
	if (!ctx.cr0.eq) goto loc_8219CE70;
	// lwz r11,4124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4124);
	// add r10,r11,r18
	ctx.r10.u64 = ctx.r11.u64 + ctx.r18.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219cf18
	if (ctx.cr6.eq) goto loc_8219CF18;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r26,r10,21012
	ctx.r26.s64 = ctx.r10.s64 + 21012;
loc_8219CEB8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8219cf08
	if (ctx.cr6.eq) goto loc_8219CF08;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219cf08
	if (!ctx.cr6.eq) goto loc_8219CF08;
	// lbz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 48);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8219cf08
	if (!ctx.cr6.eq) goto loc_8219CF08;
	// subf r11,r11,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r11.s64;
	// lhz r7,50(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 50);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// srawi r10,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cae0
	ctx.lr = 0x8219CF04;
	sub_8219CAE0(ctx, base);
	// lwz r11,4124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4124);
loc_8219CF08:
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// add r10,r11,r18
	ctx.r10.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219ceb8
	if (!ctx.cr6.eq) goto loc_8219CEB8;
loc_8219CF18:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219CB98) {
	__imp__sub_8219CB98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CF20) {
	PPC_FUNC_PROLOGUE();
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x8219cf30
	if (!ctx.cr6.lt) goto loc_8219CF30;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8219CF30:
	// fcmpu cr6,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219CF20) {
	__imp__sub_8219CF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219CF44) {
	__imp__sub_8219CF44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x8219cf58
	if (!ctx.cr6.lt) goto loc_8219CF58;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8219CF58:
	// subfc r11,r3,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r3.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r9,r4,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219CF48) {
	__imp__sub_8219CF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219CF6C) {
	__imp__sub_8219CF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219CF70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219cf90
	if (!ctx.cr6.lt) goto loc_8219CF90;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
loc_8219CF90:
	// lbz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 36);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x8219cfa8
	if (ctx.cr6.eq) goto loc_8219CFA8;
	// lhz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,20(r5)
	PPC_STORE_U16(ctx.r5.u32 + 20, ctx.r11.u16);
loc_8219CFA8:
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r4,8
	ctx.r9.s64 = ctx.r4.s64 + 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219CFB4:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219d004
	if (ctx.cr6.eq) goto loc_8219D004;
loc_8219CFC0:
	// lwz r10,740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,2928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2928);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8219cfec
	if (ctx.cr6.gt) goto loc_8219CFEC;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// b 0x8219cff8
	goto loc_8219CFF8;
loc_8219CFEC:
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
loc_8219CFF8:
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219cfc0
	if (!ctx.cr6.eq) goto loc_8219CFC0;
loc_8219D004:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x8219cfb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219CFB4;
	// lhz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219d08c
	if (ctx.cr6.eq) goto loc_8219D08C;
loc_8219D018:
	// lwz r9,744(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 744);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,22(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 22);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,22(r5)
	PPC_STORE_U16(ctx.r5.u32 + 22, ctx.r10.u16);
	// lhz r11,2(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219d080
	if (ctx.cr6.eq) goto loc_8219D080;
loc_8219D03C:
	// lwz r10,748(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 748);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,2928(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2928);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x8219d068
	if (ctx.cr6.gt) goto loc_8219D068;
	// lhz r10,24(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,24(r5)
	PPC_STORE_U16(ctx.r5.u32 + 24, ctx.r10.u16);
	// b 0x8219d074
	goto loc_8219D074;
loc_8219D068:
	// lhz r10,26(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 26);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,26(r5)
	PPC_STORE_U16(ctx.r5.u32 + 26, ctx.r10.u16);
loc_8219D074:
	// lhz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219d03c
	if (!ctx.cr6.eq) goto loc_8219D03C;
loc_8219D080:
	// lhz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219d018
	if (!ctx.cr6.eq) goto loc_8219D018;
loc_8219D08C:
	// lhz r11,18(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8219D098:
	// lhz r8,28(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// lwz r10,760(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lhz r9,30(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 30);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r8,28(r5)
	PPC_STORE_U16(ctx.r5.u32 + 28, ctx.r8.u16);
	// lbz r10,5(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r6,30(r5)
	PPC_STORE_U16(ctx.r5.u32 + 30, ctx.r6.u16);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219d098
	if (!ctx.cr6.eq) goto loc_8219D098;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219CF70) {
	__imp__sub_8219CF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D0CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219D0CC) {
	__imp__sub_8219D0CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f11,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// std r10,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f10,-8(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// std r7,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r7.u64);
	// lfd f9,-8(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lfs f0,20776(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20776);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f13,20628(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 20628);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f5,f12
	ctx.f5.f64 = double(ctx.f12.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsel f0,f8,f10,f11
	ctx.f0.f64 = ctx.f8.f64 >= 0.0 ? ctx.f10.f64 : ctx.f11.f64;
	// fsel f13,f7,f12,f9
	ctx.f13.f64 = ctx.f7.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8219d180
	if (!ctx.cr6.lt) goto loc_8219D180;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8219D180:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r3,-1
	ctx.r3.s64 = -1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D0D0) {
	__imp__sub_8219D0D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219D194) {
	__imp__sub_8219D194(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8219d1b0
	if (!ctx.cr6.lt) goto loc_8219D1B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8219D1B0:
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r3,r7,r8
	temp.u8 = (~ctx.r7.u32 + ctx.r8.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r7.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D198) {
	__imp__sub_8219D198(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219D1C4) {
	__imp__sub_8219D1C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8219D1D0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,32512
	ctx.r12.u64 = ctx.r12.u64 | 32512;
	// bl 0x823dedd4
	ctx.lr = 0x8219D1E0;
	sub_823DEDD4(ctx, base);
	// stwux r1,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821a0218
	ctx.lr = 0x8219D1F4;
	sub_821A0218(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82184db8
	ctx.lr = 0x8219D1FC;
	sub_82184DB8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8219d26c
	if (ctx.cr6.eq) goto loc_8219D26C;
loc_8219D214:
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// addi r10,r11,430
	ctx.r10.s64 = ctx.r11.s64 + 430;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// rotlwi r10,r8,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8219c950
	ctx.lr = 0x8219D248;
	sub_8219C950(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219cf70
	ctx.lr = 0x8219D258;
	sub_8219CF70(ctx, base);
	// lwz r7,852(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpw cr6,r27,r7
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8219d214
	if (!ctx.cr6.eq) goto loc_8219D214;
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8219D26C:
	// addi r11,r31,2924
	ctx.r11.s64 = ctx.r31.s64 + 2924;
loc_8219D270:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8219d270
	if (!ctx.cr0.eq) goto loc_8219D270;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8219d2ac
	if (!ctx.cr6.eq) goto loc_8219D2AC;
	// lbz r11,2941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2941);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219d2ac
	if (ctx.cr6.eq) goto loc_8219D2AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a2180
	ctx.lr = 0x8219D2AC;
	sub_821A2180(ctx, base);
loc_8219D2AC:
	// lis r27,-32075
	ctx.r27.s64 = -2102067200;
	// lwz r11,14896(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14896);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8219d2e4
	if (ctx.cr6.lt) goto loc_8219D2E4;
	// beq cr6,0x8219d2d8
	if (ctx.cr6.eq) goto loc_8219D2D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8219d2e4
	if (!ctx.cr6.lt) goto loc_8219D2E4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r6,r11,-11880
	ctx.r6.s64 = ctx.r11.s64 + -11880;
	// b 0x8219d2ec
	goto loc_8219D2EC;
loc_8219D2D8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r6,r11,-13768
	ctx.r6.s64 = ctx.r11.s64 + -13768;
	// b 0x8219d2ec
	goto loc_8219D2EC;
loc_8219D2E4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r6,r11,-12080
	ctx.r6.s64 = ctx.r11.s64 + -12080;
loc_8219D2EC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823def18
	ctx.lr = 0x8219D2FC;
	sub_823DEF18(ctx, base);
	// lwz r9,852(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// lwz r8,848(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subf r4,r8,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r8.s64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// extsw r6,r4
	ctx.r6.s64 = ctx.r4.s32;
	// lfs f0,22212(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22212);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r10,22164
	ctx.r3.s64 = ctx.r10.s64 + 22164;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// subfic r7,r4,1024
	ctx.xer.ca = ctx.r4.u32 <= 1024;
	ctx.r7.s64 = 1024 - ctx.r4.s64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D344;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,816(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// li r5,255
	ctx.r5.s64 = 255;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f10,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f0,22160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 22160);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// addi r3,r3,22112
	ctx.r3.s64 = ctx.r3.s64 + 22112;
	// subfic r7,r11,255
	ctx.xer.ca = ctx.r11.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r11.s64;
	// lwz r4,816(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D3A0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,812(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// lwz r11,812(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r4,812(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 812);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addi r3,r7,22060
	ctx.r3.s64 = ctx.r7.s64 + 22060;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f7,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,22108(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 22108);
	ctx.f0.f64 = double(temp.f32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// subfic r7,r6,128
	ctx.xer.ca = ctx.r6.u32 <= 128;
	ctx.r7.s64 = 128 - ctx.r6.s64;
	// li r5,128
	ctx.r5.s64 = 128;
	// fmuls f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D3FC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,2908(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2908);
	// lwz r8,2908(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2908);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// subfic r7,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r7.s64 = 1 - ctx.r9.s64;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f4,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// lfs f0,-14540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14540);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r4,2908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2908);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,22012
	ctx.r3.s64 = ctx.r10.s64 + 22012;
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D458;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D46C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,804(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// lwz r6,804(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r4,804(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 804);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f1,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// lfs f31,22008(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22008);
	ctx.f31.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addi r3,r8,21960
	ctx.r3.s64 = ctx.r8.s64 + 21960;
	// subfic r7,r7,2048
	ctx.xer.ca = ctx.r7.u32 <= 2048;
	ctx.r7.s64 = 2048 - ctx.r7.s64;
	// fmuls f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D4B4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lwz r8,808(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r4,808(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 808);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// addi r3,r10,21912
	ctx.r3.s64 = ctx.r10.s64 + 21912;
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f12,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// subfic r7,r9,2048
	ctx.xer.ca = ctx.r9.u32 <= 2048;
	ctx.r7.s64 = 2048 - ctx.r9.s64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f1,f10,f31
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D508;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D51C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lwz r10,832(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// li r5,256
	ctx.r5.s64 = 256;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f9,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f0,21908(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21908);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// addi r3,r3,21860
	ctx.r3.s64 = ctx.r3.s64 + 21860;
	// subfic r7,r11,256
	ctx.xer.ca = ctx.r11.u32 <= 256;
	ctx.r7.s64 = 256 - ctx.r11.s64;
	// lwz r4,832(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// fmuls f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D564;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D578;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,820(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lwz r11,820(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lwz r4,820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// addi r3,r7,21808
	ctx.r3.s64 = ctx.r7.s64 + 21808;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f6,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfs f0,21856(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21856);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// subfic r7,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r7.s64 = 32 - ctx.r6.s64;
	// li r5,32
	ctx.r5.s64 = 32;
	// fmuls f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D5C0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,824(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// lwz r6,824(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r4,824(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// li r5,64
	ctx.r5.s64 = 64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f3,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// lfs f0,21804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21804);
	ctx.f0.f64 = double(temp.f32);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// addi r3,r8,21756
	ctx.r3.s64 = ctx.r8.s64 + 21756;
	// subfic r7,r7,64
	ctx.xer.ca = ctx.r7.u32 <= 64;
	ctx.r7.s64 = 64 - ctx.r7.s64;
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D61C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,828(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// lwz r6,828(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r4,828(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 828);
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// li r5,96
	ctx.r5.s64 = 96;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,21752(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21752);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// addi r3,r9,21704
	ctx.r3.s64 = ctx.r9.s64 + 21704;
	// subfic r7,r8,96
	ctx.xer.ca = ctx.r8.u32 <= 96;
	ctx.r7.s64 = 96 - ctx.r8.s64;
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x8219D678;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D68C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r4,r10,-28736
	ctx.r4.s64 = ctx.r10.s64 + -28736;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219D6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,14896(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 14896);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// addi r6,r8,7084
	ctx.r6.s64 = ctx.r8.s64 + 7084;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r3,r5,21664
	ctx.r3.s64 = ctx.r5.s64 + 21664;
	// bl 0x822e84f0
	ctx.lr = 0x8219D6C8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r4,21656
	ctx.r6.s64 = ctx.r4.s64 + 21656;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r3,21648
	ctx.r7.s64 = ctx.r3.s64 + 21648;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r11,r11,21636
	ctx.r11.s64 = ctx.r11.s64 + 21636;
	// addi r25,r10,21628
	ctx.r25.s64 = ctx.r10.s64 + 21628;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r24,r9,21620
	ctx.r24.s64 = ctx.r9.s64 + 21620;
	// lis r31,-32255
	ctx.r31.s64 = -2113863680;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// addi r10,r8,21612
	ctx.r10.s64 = ctx.r8.s64 + 21612;
	// addi r9,r5,21604
	ctx.r9.s64 = ctx.r5.s64 + 21604;
	// addi r8,r4,21596
	ctx.r8.s64 = ctx.r4.s64 + 21596;
	// addi r5,r3,21588
	ctx.r5.s64 = ctx.r3.s64 + 21588;
	// addi r4,r31,21580
	ctx.r4.s64 = ctx.r31.s64 + 21580;
	// addi r3,r27,21520
	ctx.r3.s64 = ctx.r27.s64 + 21520;
	// bl 0x822e84f0
	ctx.lr = 0x8219D74C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D760;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r4,r10,21432
	ctx.r4.s64 = ctx.r10.s64 + 21432;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8219D778;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32075
	ctx.r9.s64 = -2102067200;
	// lis r8,-32075
	ctx.r8.s64 = -2102067200;
	// lwz r11,14884(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14884);
	// lwz r10,14980(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14980);
	// lwz r25,12(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r23,12(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8219d7a4
	if (!ctx.cr6.eq) goto loc_8219D7A4;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8219d7c8
	goto loc_8219D7C8;
loc_8219D7A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,21360
	ctx.r3.s64 = ctx.r11.s64 + 21360;
	// bl 0x822e84f0
	ctx.lr = 0x8219D7B4;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D7C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D7C8:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8219d7f4
	if (ctx.cr6.eq) goto loc_8219D7F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,21320
	ctx.r3.s64 = ctx.r11.s64 + 21320;
	// bl 0x822e84f0
	ctx.lr = 0x8219D7E0;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D7F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D7F4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x8219d8ac
	if (!ctx.cr6.gt) goto loc_8219D8AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r31,r1,170
	ctx.r31.s64 = ctx.r1.s64 + 170;
	// addi r26,r11,21260
	ctx.r26.s64 = ctx.r11.s64 + 21260;
loc_8219D80C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8219d82c
	if (ctx.cr6.eq) goto loc_8219D82C;
	// lwz r11,-26(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x823dfa98
	ctx.lr = 0x8219D824;
	sub_823DFA98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219d8a0
	if (ctx.cr6.eq) goto loc_8219D8A0;
loc_8219D82C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8219d83c
	if (ctx.cr6.eq) goto loc_8219D83C;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// b 0x8219d8a0
	goto loc_8219D8A0;
loc_8219D83C:
	// lwz r10,-26(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -26);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lhz r22,2(r31)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r21,4(r31)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lhz r27,-2(r31)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r31.u32 + -2);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,-10(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + -10);
	// add r10,r27,r11
	ctx.r10.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwz r6,-14(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14);
	// lhz r9,-4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + -4);
	// add r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r8,-6(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + -6);
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r21,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r21.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r4,-18(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -18);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x822e84f0
	ctx.lr = 0x8219D88C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8219D8A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219D8A0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x8219d80c
	if (!ctx.cr0.eq) goto loc_8219D80C;
loc_8219D8AC:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219D1C8) {
	__imp__sub_8219D1C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D8B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D8B8) {
	__imp__sub_8219D8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219D8BC) {
	__imp__sub_8219D8BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D8C0) {
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
	// bl 0x823de028
	ctx.lr = 0x8219D8D4;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22216
	ctx.r11.s64 = ctx.r11.s64 + 22216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r11,36
	ctx.r6.s64 = ctx.r11.s64 + 36;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f13,5488(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfsx f12,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f31,f12,f13,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// lfsx f11,r10,r6
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-22124(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -22124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fnmsubs f10,f31,f31,f0
	ctx.f10.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fsqrts f29,f10
	ctx.f29.f64 = double(float(sqrt(ctx.f10.f64)));
	// bl 0x823de720
	ctx.lr = 0x8219D928;
	sub_823DE720(ctx, base);
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x8219D934;
	sub_823DE800(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f8,f28,f29
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// stfs f8,4(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f7,f9,f29
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x8219D958;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D8C0) {
	__imp__sub_8219D8C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D968) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,2924
	ctx.r10.s64 = ctx.r3.s64 + 2924;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
loc_8219D974:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219d974
	if (!ctx.cr6.eq) goto loc_8219D974;
loc_8219D980:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8219d9a4
	if (!ctx.cr6.eq) goto loc_8219D9A4;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x8219d980
	if (!ctx.cr0.eq) goto loc_8219D980;
	// b 0x8219d9ac
	goto loc_8219D9AC;
loc_8219D9A4:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_8219D9AC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219d974
	if (!ctx.cr6.eq) goto loc_8219D974;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D968) {
	__imp__sub_8219D968(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219D9BC) {
	__imp__sub_8219D9BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219D9C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8219da38
	if (!ctx.cr0.gt) goto loc_8219DA38;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,248
	ctx.r11.s64 = ctx.r11.s64 + 248;
loc_8219D9F0:
	// lbz r7,-72(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -72);
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x8219da08
	if (ctx.cr6.eq) goto loc_8219DA08;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8219DA08:
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// bdnz 0x8219d9f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219D9F0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8219da38
	if (!ctx.cr6.gt) goto loc_8219DA38;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// cmpwi cr6,r11,254
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 254, ctx.xer);
	// blt cr6,0x8219da2c
	if (ctx.cr6.lt) goto loc_8219DA2C;
	// li r3,254
	ctx.r3.s64 = 254;
	// blr 
	return;
loc_8219DA2C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_8219DA38:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219D9C0) {
	__imp__sub_8219D9C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8219DA48;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r9,4515
	ctx.r9.s64 = 295895040;
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// addi r5,r4,80
	ctx.r5.s64 = ctx.r4.s64 + 80;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// ori r8,r9,411
	ctx.r8.u64 = ctx.r9.u64 | 411;
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mulli r9,r10,252
	ctx.r9.s64 = ctx.r10.s64 * 252;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// stb r9,16(r29)
	PPC_STORE_U8(ctx.r29.u32 + 16, ctx.r9.u8);
	// lbz r6,248(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lhz r11,22(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mulli r10,r10,296
	ctx.r10.s64 = ctx.r10.s64 * 296;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mulhwu r10,r11,r8
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r8.u32)) >> 32;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r8,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// mulli r10,r6,479
	ctx.r10.s64 = ctx.r6.s64 * 479;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x821a8a00
	ctx.lr = 0x8219DAE0;
	sub_821A8A00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a8f98
	ctx.lr = 0x8219DAF0;
	sub_821A8F98(ctx, base);
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,176(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,180(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219DA40) {
	__imp__sub_8219DA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219DB2C) {
	__imp__sub_8219DB2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8219DB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mulli r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 * 252;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,176(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// ble cr6,0x8219db74
	if (!ctx.cr6.gt) goto loc_8219DB74;
loc_8219DB68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8219DB74:
	// lbz r11,177(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 177);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219db8c
	if (!ctx.cr6.eq) goto loc_8219DB8C;
loc_8219DB80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8219DB8C:
	// lbz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 248);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8219db68
	if (ctx.cr6.lt) goto loc_8219DB68;
	// bgt cr6,0x8219db80
	if (ctx.cr6.gt) goto loc_8219DB80;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lis r8,4515
	ctx.r8.s64 = 295895040;
	// lhz r11,22(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 22);
	// addi r5,r4,80
	ctx.r5.s64 = ctx.r4.s64 + 80;
	// mulli r9,r10,296
	ctx.r9.s64 = ctx.r10.s64 * 296;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r6,r8,411
	ctx.r6.u64 = ctx.r8.u64 | 411;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mulhwu r10,r11,r6
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r4,52
	ctx.r4.s64 = ctx.r4.s64 + 52;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r8,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// mulli r10,r6,479
	ctx.r10.s64 = ctx.r6.s64 * 479;
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// bl 0x821a8a00
	ctx.lr = 0x8219DBF0;
	sub_821A8A00(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821a8f98
	ctx.lr = 0x8219DC00;
	sub_821A8F98(ctx, base);
	// lfs f0,184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f12,f12
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f3,f9,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f5
	ctx.cr6.compare(ctx.f2.f64, ctx.f5.f64);
	// bgt cr6,0x8219dc44
	if (ctx.cr6.gt) goto loc_8219DC44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219DC44:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219DB30) {
	__imp__sub_8219DB30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DC50) {
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
	// lbz r11,37(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 37);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219dca0
	if (!ctx.cr6.eq) goto loc_8219DCA0;
	// lbz r10,37(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8219dc8c
	if (!ctx.cr6.eq) goto loc_8219DC8C;
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
loc_8219DC8C:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219dca0
	if (!ctx.cr6.eq) goto loc_8219DCA0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8219d9c0
	ctx.lr = 0x8219DC9C;
	sub_8219D9C0(ctx, base);
	// stb r3,37(r5)
	PPC_STORE_U8(ctx.r5.u32 + 37, ctx.r3.u8);
loc_8219DCA0:
	// lbz r11,37(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219dcb8
	if (!ctx.cr6.eq) goto loc_8219DCB8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8219d9c0
	ctx.lr = 0x8219DCB4;
	sub_8219D9C0(ctx, base);
	// stb r3,37(r4)
	PPC_STORE_U8(ctx.r4.u32 + 37, ctx.r3.u8);
loc_8219DCB8:
	// lbz r11,37(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// lbz r10,37(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 37);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219DC50) {
	__imp__sub_8219DC50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219DCDC) {
	__imp__sub_8219DCDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DCE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219DCE8;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8219d968
	ctx.lr = 0x8219DCF8;
	sub_8219D968(ctx, base);
	// lwz r27,848(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// lwz r11,852(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8219de9c
	if (ctx.cr6.eq) goto loc_8219DE9C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f11,24248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24248);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24244(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24244);
	ctx.f10.f64 = double(temp.f32);
loc_8219DD18:
	// clrlwi r11,r27,22
	ctx.r11.u64 = ctx.r27.u32 & 0x3FF;
	// lwz r10,736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,848(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// addi r8,r11,430
	ctx.r8.s64 = ctx.r11.s64 + 430;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r27,r9
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r9.s32, ctx.xer);
	// lhzx r26,r7,r31
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32);
	// rotlwi r11,r26,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 2);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f9,104(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f7,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// lfs f5,100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f3,f8,f8
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f2,f6,f6,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f13,f4,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f2.f64));
	// beq cr6,0x8219de70
	if (ctx.cr6.eq) goto loc_8219DE70;
	// fmuls f12,f13,f10
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_8219DD7C:
	// addi r29,r30,-1
	ctx.r29.s64 = ctx.r30.s64 + -1;
	// rlwinm r10,r29,2,20,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFC;
	// clrlwi r28,r29,22
	ctx.r28.u64 = ctx.r29.u32 & 0x3FF;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x8219de34
	if (ctx.cr6.lt) goto loc_8219DE34;
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x8219de70
	if (!ctx.cr6.lt) goto loc_8219DE70;
	// addi r10,r28,430
	ctx.r10.s64 = ctx.r28.s64 + 430;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// lhz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 24);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r6,24(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8219de70
	if (!ctx.cr6.eq) goto loc_8219DE70;
	// lbz r11,37(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 37);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219ddfc
	if (!ctx.cr6.eq) goto loc_8219DDFC;
	// lbz r10,37(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x8219dde8
	if (!ctx.cr6.eq) goto loc_8219DDE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8219de28
	goto loc_8219DE28;
loc_8219DDE8:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219ddfc
	if (!ctx.cr6.eq) goto loc_8219DDFC;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8219d9c0
	ctx.lr = 0x8219DDF8;
	sub_8219D9C0(ctx, base);
	// stb r3,37(r5)
	PPC_STORE_U8(ctx.r5.u32 + 37, ctx.r3.u8);
loc_8219DDFC:
	// lbz r11,37(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8219de14
	if (!ctx.cr6.eq) goto loc_8219DE14;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8219d9c0
	ctx.lr = 0x8219DE10;
	sub_8219D9C0(ctx, base);
	// stb r3,37(r4)
	PPC_STORE_U8(ctx.r4.u32 + 37, ctx.r3.u8);
loc_8219DE14:
	// lbz r11,37(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 37);
	// lbz r10,37(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 37);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
loc_8219DE28:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219de70
	if (ctx.cr6.eq) goto loc_8219DE70;
loc_8219DE34:
	// addi r10,r28,430
	ctx.r10.s64 = ctx.r28.s64 + 430;
	// clrlwi r11,r30,22
	ctx.r11.u64 = ctx.r30.u32 & 0x3FF;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,430
	ctx.r8.s64 = ctx.r11.s64 + 430;
	// rlwinm r7,r30,2,20,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFC;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhzx r3,r9,r31
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfsx f0,r7,r4
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// sthx r3,r6,r31
	PPC_STORE_U16(ctx.r6.u32 + ctx.r31.u32, ctx.r3.u16);
	// lwz r10,848(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 848);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8219dd7c
	if (!ctx.cr6.eq) goto loc_8219DD7C;
loc_8219DE70:
	// clrlwi r11,r30,22
	ctx.r11.u64 = ctx.r30.u32 & 0x3FF;
	// rlwinm r10,r30,2,20,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFC;
	// addi r9,r11,430
	ctx.r9.s64 = ctx.r11.s64 + 430;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stfsx f13,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// sthx r26,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r26.u16);
	// lwz r6,852(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 852);
	// cmpw cr6,r27,r6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8219dd18
	if (!ctx.cr6.eq) goto loc_8219DD18;
loc_8219DE9C:
	// lwsync 
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2924, ctx.r11.u32);
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219DCE0) {
	__imp__sub_8219DCE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219DEB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,-1
	ctx.r26.s64 = -1;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8219df2c
	if (ctx.cr6.eq) goto loc_8219DF2C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8219da40
	ctx.lr = 0x8219DEE8;
	sub_8219DA40(ctx, base);
loc_8219DEE8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8219db30
	ctx.lr = 0x8219DF0C;
	sub_8219DB30(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219df2c
	if (ctx.cr6.eq) goto loc_8219DF2C;
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lhz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8219dee8
	if (!ctx.cr6.eq) goto loc_8219DEE8;
loc_8219DF2C:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// sth r26,6(r27)
	PPC_STORE_U16(ctx.r27.u32 + 6, ctx.r26.u16);
	// sth r11,4(r27)
	PPC_STORE_U16(ctx.r27.u32 + 4, ctx.r11.u16);
	// lwz r10,740(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 740);
	// subf r9,r10,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r10.s64;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// lhz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 4);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// beq cr6,0x8219df60
	if (ctx.cr6.eq) goto loc_8219DF60;
	// sth r11,6(r30)
	PPC_STORE_U16(ctx.r30.u32 + 6, ctx.r11.u16);
loc_8219DF60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219DEB0) {
	__imp__sub_8219DEB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8219DF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,14(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8219dfe0
	if (ctx.cr6.eq) goto loc_8219DFE0;
	// sth r10,8(r4)
	PPC_STORE_U16(ctx.r4.u32 + 8, ctx.r10.u16);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219dfb0
	if (ctx.cr6.eq) goto loc_8219DFB0;
	// lwz r10,740(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,-1
	ctx.r8.s64 = -1;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sth r8,6(r7)
	PPC_STORE_U16(ctx.r7.u32 + 6, ctx.r8.u16);
loc_8219DFB0:
	// lwz r10,740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 740);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r28,4(r5)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// bl 0x8219deb0
	ctx.lr = 0x8219DFCC;
	sub_8219DEB0(ctx, base);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8219dfb0
	if (!ctx.cr6.eq) goto loc_8219DFB0;
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// sth r11,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r11.u16);
loc_8219DFE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219DF68) {
	__imp__sub_8219DF68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219DFE8) {
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
	// bl 0x823df900
	ctx.lr = 0x8219DFF8;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219DFE8) {
	__imp__sub_8219DFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E028) {
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
	// bl 0x823df900
	ctx.lr = 0x8219E038;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,24256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219E028) {
	__imp__sub_8219E028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E070) {
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
	// bl 0x823de028
	ctx.lr = 0x8219E084;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823df900
	ctx.lr = 0x8219E090;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f31,24256(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24256);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmsubs f29,f12,f31,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 - ctx.f30.f64));
	// bl 0x823df900
	ctx.lr = 0x8219E0BC;
	sub_823DF900(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmsubs f28,f9,f31,f30
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 - ctx.f30.f64));
	// bl 0x823df900
	ctx.lr = 0x8219E0D8;
	sub_823DF900(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// stfs f28,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmsubs f5,f6,f31,f30
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 - ctx.f30.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x8219E108;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219E070) {
	__imp__sub_8219E070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E118) {
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8219e070
	ctx.lr = 0x8219E144;
	sub_8219E070(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f0,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f5,f11,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fsqrts f2,f5
	ctx.f2.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f9,f1,f0,f2
	ctx.f9.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f5,f13,f7
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fmuls f2,f7,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f13,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmadds f12,f4,f2,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f13.f64));
	// fmadds f11,f3,f1,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fsel f10,f11,f0,f10
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f7,f9,f5
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f9,f2
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmadds f3,f6,f8,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f3,0(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f8,f5
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmuls f10,f1,f1
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// stfs f1,4(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f8,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f8,f3,f3,f10
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f10.f64));
	// stfs f9,8(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// fmr f11,f1
	ctx.f11.f64 = ctx.f1.f64;
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmadds f6,f9,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fsqrts f5,f6
	ctx.f5.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fsel f3,f4,f0,f5
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f0.f64 : ctx.f5.f64;
	// fdivs f2,f0,f3
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// fmuls f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f0,f11,f2
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f2.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmuls f13,f2,f9
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_8219E118) {
	__imp__sub_8219E118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219E234) {
	__imp__sub_8219E234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fabs f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lfs f13,24260(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24260);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8219e27c
	if (!ctx.cr6.lt) goto loc_8219E27C;
	// fabs f0,f2
	ctx.f0.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8219e268
	if (!ctx.cr6.lt) goto loc_8219E268;
	// lfs f1,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_8219E268:
	// fdivs f13,f3,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f3.f64 / ctx.f2.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f1,f12,f12,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// blr 
	return;
loc_8219E27C:
	// fmuls f11,f0,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmsubs f13,f2,f2,f10
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 - ctx.f10.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8219e2a8
	if (!ctx.cr6.lt) goto loc_8219E2A8;
	// fmr f1,f12
	ctx.f1.f64 = ctx.f12.f64;
	// blr 
	return;
loc_8219E2A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsqrts f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(sqrt(ctx.f13.f64)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f10.f64 = double(temp.f32);
	// fsel f8,f0,f13,f11
	ctx.f8.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f11.f64;
	// fmuls f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fmuls f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fdivs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f7.f64));
	// fadds f6,f0,f2
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fmuls f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fsubs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fsel f1,f13,f13,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219E238) {
	__imp__sub_8219E238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x8219E300;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de020
	ctx.lr = 0x8219E308;
	__savefpr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lfs f12,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// lfs f8,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f13,26572(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26572);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f31,5996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5996);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f27,7544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7544);
	ctx.f27.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f26,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f29,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// fmadds f0,f9,f0,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f7.f64));
	// addi r26,r11,-9672
	ctx.r26.s64 = ctx.r11.s64 + -9672;
	// fmadds f12,f8,f13,f6
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f11,f5,f13,f4
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fadds f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f9,f12,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_8219E3BC:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// blt cr6,0x8219e3c8
	if (ctx.cr6.lt) goto loc_8219E3C8;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_8219E3C8:
	// fmuls f0,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f31,f12
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f12.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// li r7,8193
	ctx.r7.s64 = 8193;
	// lfs f6,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f5,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f4,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f0,f2,f7,f10
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f10.f64));
	// fmadds f13,f6,f2,f9
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fmadds f12,f8,f31,f1
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fadds f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f10,f13,f3
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f9,f12,f5
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x8211e9c0
	ctx.lr = 0x8219E43C;
	sub_8211E9C0(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// bne cr6,0x8219e474
	if (!ctx.cr6.eq) goto loc_8219E474;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8219e5cc
	if (ctx.cr6.eq) goto loc_8219E5CC;
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
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
	// b 0x8219e3bc
	goto loc_8219E3BC;
loc_8219E474:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f1,f5,f29
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f2,f5,f28,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f4.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fmadds f4,f10,f0,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f31,f7,f0,f12
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f30,f6,f0,f11
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// bl 0x8219e238
	ctx.lr = 0x8219E4BC;
	sub_8219E238(ctx, base);
	// fadds f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f28.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f6,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f0,f3
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// lfs f29,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f28,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f31,0(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f30,4(r28)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f4,8(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f29,4(r27)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f28,8(r27)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// fmuls f1,f1,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fmadds f13,f7,f11,f5
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f11,f10,f7,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f10,f12,f0,f1
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fadds f12,f13,f8
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fadds f11,f11,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// ble cr6,0x8219e5a0
	if (!ctx.cr6.gt) goto loc_8219E5A0;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fneg f9,f0
	ctx.f9.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmuls f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fmuls f7,f30,f0
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f6,f0,f4
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmadds f5,f13,f9,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f4,f12,f9,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fmadds f3,f11,f9,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fadds f2,f5,f10
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// stfs f2,0(r24)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 + ctx.f1.f64));
	// stfs f0,4(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de06c
	ctx.lr = 0x8219E59C;
	__restfpr_26(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8219E5A0:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r24)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r24)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r24)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r24.u32 + 8, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de06c
	ctx.lr = 0x8219E5C8;
	__restfpr_26(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_8219E5CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de06c
	ctx.lr = 0x8219E5DC;
	__restfpr_26(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219E2F8) {
	__imp__sub_8219E2F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E5E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x8219E5E8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de010
	ctx.lr = 0x8219E5F0;
	__savefpr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// fmr f23,f3
	ctx.f23.f64 = ctx.f3.f64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8219e74c
	if (ctx.cr6.eq) goto loc_8219E74C;
	// addi r31,r10,24
	ctx.r31.s64 = ctx.r10.s64 + 24;
	// fsubs f24,f2,f1
	ctx.f24.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f22,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f22.f64 = double(temp.f32);
	// addi r27,r3,-4
	ctx.r27.s64 = ctx.r3.s64 + -4;
	// lfs f26,24252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f26.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
loc_8219E640:
	// lfs f30,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f23,f27
	ctx.cr6.compare(ctx.f23.f64, ctx.f27.f64);
	// lfs f29,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfsu f28,12(r27)
	ea = 12 + ctx.r27.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f28.f64 = double(temp.f32);
	ctx.r27.u32 = ea;
	// bne cr6,0x8219e6a0
	if (!ctx.cr6.eq) goto loc_8219E6A0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8219e070
	ctx.lr = 0x8219E65C;
	sub_8219E070(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f27,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f27.f64 : ctx.f8.f64;
	// fdivs f5,f27,f6
	ctx.f5.f64 = double(float(ctx.f27.f64 / ctx.f6.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f4,88(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,92(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f2,96(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8219e6b0
	goto loc_8219E6B0;
loc_8219E6A0:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8219e118
	ctx.lr = 0x8219E6B0;
	sub_8219E118(ctx, base);
loc_8219E6B0:
	// bl 0x823df900
	ctx.lr = 0x8219E6B4;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f30,-8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f29,-4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// stfs f28,0(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f10,f24
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// fmadds f7,f8,f26,f25
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// beq cr6,0x8219e73c
	if (ctx.cr6.eq) goto loc_8219E73C;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219E71C:
	// stfsu f22,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f31,-44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// stfs f31,-40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// stfs f31,-36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219e71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219E71C;
loc_8219E73C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,112
	ctx.r30.s64 = ctx.r30.s64 + 112;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bne 0x8219e640
	if (!ctx.cr0.eq) goto loc_8219E640;
loc_8219E74C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de05c
	ctx.lr = 0x8219E758;
	__restfpr_22(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219E5E0) {
	__imp__sub_8219E5E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219E75C) {
	__imp__sub_8219E75C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8219E768;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de004
	ctx.lr = 0x8219E770;
	__savefpr_19(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = ctx.f1.f64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f24,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f24.f64 = double(temp.f32);
	// stfs f24,104(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f24,108(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f24,112(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f24,136(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f24,140(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f24,144(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// beq cr6,0x8219e874
	if (ctx.cr6.eq) goto loc_8219E874;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r29,r9,24
	ctx.r29.s64 = ctx.r9.s64 + 24;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lfs f26,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f26.f64 = double(temp.f32);
	// lfs f23,6912(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6912);
	ctx.f23.f64 = double(temp.f32);
loc_8219E7CC:
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// lfs f29,-8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
	// lfs f28,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmr f30,f24
	ctx.f30.f64 = ctx.f24.f64;
	// lfs f0,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f13,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f12,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r23,-4
	ctx.r26.s64 = ctx.r23.s64 + -4;
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r27,r29,28
	ctx.r27.s64 = ctx.r29.s64 + 28;
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r30,r10,-4
	ctx.r30.s64 = ctx.r10.s64 + -4;
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8219E820:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// bne cr6,0x8219e884
	if (!ctx.cr6.eq) goto loc_8219E884;
	// stfs f23,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stfs f24,4(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stfs f24,8(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f24,12(r31)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// stfs f24,4(r30)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f24,8(r30)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f24,12(r30)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne cr6,0x8219e820
	if (!ctx.cr6.eq) goto loc_8219E820;
loc_8219E864:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,112
	ctx.r23.s64 = ctx.r23.s64 + 112;
	// addi r29,r29,112
	ctx.r29.s64 = ctx.r29.s64 + 112;
	// bne 0x8219e7cc
	if (!ctx.cr0.eq) goto loc_8219E7CC;
loc_8219E874:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de050
	ctx.lr = 0x8219E880;
	__restfpr_19(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_8219E884:
	// stfsu f30,4(r26)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r26.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// stfs f29,4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f28,8(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f27,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfsu f12,12(r30)
	ea = 12 + ctx.r30.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// beq cr6,0x8219e864
	if (ctx.cr6.eq) goto loc_8219E864;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fsubs f1,f22,f30
	ctx.f1.f64 = double(float(ctx.f22.f64 - ctx.f30.f64));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8219e2f8
	ctx.lr = 0x8219E8D8;
	sub_8219E2F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e8ec
	if (!ctx.cr6.eq) goto loc_8219E8EC;
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8219e820
	goto loc_8219E820;
loc_8219E8EC:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,152
	ctx.r5.s64 = ctx.r1.s64 + 152;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f12,4(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f11,8(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// lfs f9,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f21,f10,f0,f13
	ctx.f21.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f8,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f20,f9,f0,f12
	ctx.f20.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f29,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f19,f8,f0,f11
	ctx.f19.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f28,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// stfs f29,120(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f28,124(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x8219e118
	ctx.lr = 0x8219E94C;
	sub_8219E118(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f21,f0
	ctx.f7.f64 = double(float(ctx.f21.f64 * ctx.f0.f64));
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f6,f21,f31
	ctx.f6.f64 = double(float(ctx.f21.f64 * ctx.f31.f64));
	// fmuls f5,f20,f31
	ctx.f5.f64 = double(float(ctx.f20.f64 * ctx.f31.f64));
	// fmuls f4,f19,f31
	ctx.f4.f64 = double(float(ctx.f19.f64 * ctx.f31.f64));
	// fmadds f3,f13,f20,f7
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f20.f64 + ctx.f7.f64));
	// fmadds f2,f12,f19,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f19.f64 + ctx.f3.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f11,f1,f26
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f26.f64));
	// fmadds f10,f11,f0,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f6.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f9,f13,f11,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f5.f64));
	// stfs f9,92(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmadds f8,f12,f11,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x8219e820
	goto loc_8219E820;
}

PPC_WEAK_FUNC(sub_8219E760) {
	__imp__sub_8219E760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219E994) {
	__imp__sub_8219E994(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E998) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mulli r11,r5,112
	ctx.r11.s64 = ctx.r5.s64 * 112;
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,17968(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17968);
	ctx.f1.f64 = double(temp.f32);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x8219e760
	ctx.lr = 0x8219E9E4;
	sub_8219E760(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219E998) {
	__imp__sub_8219E998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219E9F4) {
	__imp__sub_8219E9F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219E9F8) {
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
	ctx.lr = 0x8219EA10;
	__savefpr_26(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r31,68(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r6,8
	ctx.r7.s64 = ctx.r6.s64 + 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f8.f64 = double(temp.f32);
loc_8219EA54:
	// lfs f12,-4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// lfs f7,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fsubs f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// lfs f31,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f7,-8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f28,f9,f31
	ctx.f28.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// lfs f29,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f30,f11,f7
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfsu f12,12(r7)
	ea = 12 + ctx.r7.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// fsubs f7,f29,f7
	ctx.f7.f64 = double(float(ctx.f29.f64 - ctx.f7.f64));
	// fsubs f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// addi r31,r1,-108
	ctx.r31.s64 = ctx.r1.s64 + -108;
	// addi r3,r1,-112
	ctx.r3.s64 = ctx.r1.s64 + -112;
	// addi r30,r1,-104
	ctx.r30.s64 = ctx.r1.s64 + -104;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// fmuls f31,f5,f5
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// add r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// fmadds f31,f12,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fmadds f31,f7,f7,f31
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f31.f64));
	// fsqrts f31,f31
	ctx.f31.f64 = double(float(sqrt(ctx.f31.f64)));
	// fneg f29,f31
	ctx.f29.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fsel f31,f29,f13,f31
	ctx.f31.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fdivs f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmuls f7,f31,f7
	ctx.f7.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f27,f6,f12
	ctx.f27.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fmuls f29,f5,f30
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// fmuls f31,f28,f7
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f7.f64));
	// fmsubs f5,f28,f5,f27
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 - ctx.f27.f64));
	// stfsx f5,r9,r8
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// fmsubs f7,f6,f7,f29
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 - ctx.f29.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f12,f12,f30,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f12,-4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fadds f7,f5,f8
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfsx f7,r9,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// fmr f12,f5
	ctx.f12.f64 = ctx.f5.f64;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f31,f7,f7
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f31,f5,f5,f31
	ctx.f31.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f31.f64));
	// fmadds f31,f12,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fsqrts f31,f31
	ctx.f31.f64 = double(float(sqrt(ctx.f31.f64)));
	// fneg f29,f31
	ctx.f29.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fsel f31,f29,f13,f31
	ctx.f31.f64 = ctx.f29.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fdivs f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 / ctx.f31.f64));
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// stfsx f7,r9,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// lfsx f12,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f12,f6
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f29,f7,f30
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmuls f27,f5,f28
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmsubs f5,f5,f30,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f30.f64 - ctx.f31.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsx f26,r9,r8
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfs f26,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f26,f26,f0
	ctx.f26.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fmsubs f7,f7,f6,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f27.f64));
	// stfs f26,-4(r10)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmsubs f12,f12,f28,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 - ctx.f29.f64));
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f7,f5
	ctx.f7.f64 = ctx.f5.f64;
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f6,f5,f5
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f6,f5,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f6.f64));
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// fmadds f6,f12,f12,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fsqrts f6,f6
	ctx.f6.f64 = double(float(sqrt(ctx.f6.f64)));
	// fneg f31,f6
	ctx.f31.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsel f6,f31,f13,f6
	ctx.f6.f64 = ctx.f31.f64 >= 0.0 ? ctx.f13.f64 : ctx.f6.f64;
	// fdivs f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fmuls f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f7,f6
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmr f6,f5
	ctx.f6.f64 = ctx.f5.f64;
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,0(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bdnz 0x8219ea54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219EA54;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f5,f1,f2
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// lfs f0,-160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r6,12
	ctx.r10.s64 = ctx.r6.s64 + 12;
	// lfs f2,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// lfs f7,-152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -152);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r6,24
	ctx.r10.s64 = ctx.r6.s64 + 24;
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// lfs f13,-156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r6,36
	ctx.r10.s64 = ctx.r6.s64 + 36;
	// lfs f0,-148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -148);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fadds f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f13,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	ctx.f12.f64 = double(temp.f32);
	// fadds f30,f11,f13
	ctx.f30.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f11,-112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// fadds f2,f2,f12
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f12.f64));
	// lfs f9,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f29,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f8,f7,f9
	ctx.f8.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f28,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f29,f29,f4,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fsubs f6,f6,f10
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// stfs f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lfs f7,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f8,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f28,f0
	ctx.f6.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fsubs f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f31,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f10,f30,f10
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// stfsu f6,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f6,f31,f4,f3
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f8,8(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f2,f2,f9
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f11,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f11,f28
	ctx.f11.f64 = ctx.f28.f64;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f10,f28,f0
	ctx.f10.f64 = double(float(ctx.f28.f64 + ctx.f0.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f9,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f10,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f11,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// lfs f10,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f29,f11,f4,f3
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f4.f64 + ctx.f3.f64));
	// lfs f8,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f10,f4,f3
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f30,f8,f12
	ctx.f30.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,-136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f11.f64));
	// stfs f6,16(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f9,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lfs f10,-132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f3,f8,f10
	ctx.f3.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f8,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fsubs f28,f7,f9
	ctx.f28.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// lfs f7,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f6.f64 = double(temp.f32);
	// fadds f10,f7,f10
	ctx.f10.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// lfs f8,-88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f2,f8,f2
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// stfs f30,8(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f7,-84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f6,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f6.f64 = double(temp.f32);
	// fadds f3,f7,f3
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// lfs f31,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f31.f64 = double(temp.f32);
	// fadds f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// stfsu f2,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f2,f6,f28
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f28.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f8,f31,f0
	ctx.f8.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// lfs f3,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f9
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f9.f64));
	// lfs f0,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f3,f13
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f8,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfsu f11,20(r11)
	ea = 20 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x8219EDF4;
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

PPC_WEAK_FUNC(sub_8219E9F8) {
	__imp__sub_8219E9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219EE08) {
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
	ctx.lr = 0x8219EE20;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// bgt cr6,0x8219ee58
	if (ctx.cr6.gt) goto loc_8219EE58;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8219eee8
	goto loc_8219EEE8;
loc_8219EE58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f30.f64);
	// lfs f26,17872(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17872);
	ctx.f26.f64 = double(temp.f32);
	// bge cr6,0x8219ee98
	if (!ctx.cr6.lt) goto loc_8219EE98;
	// fdivs f0,f26,f30
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f30.f64));
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// fmuls f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// bl 0x823de720
	ctx.lr = 0x8219EE78;
	sub_823DE720(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmadds f11,f12,f27,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f27.f64 + ctx.f31.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x8219eeb0
	goto loc_8219EEB0;
loc_8219EE98:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f30.f64;
	// fsubs f28,f3,f30
	ctx.f28.f64 = double(float(ctx.f3.f64 - ctx.f30.f64));
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_8219EEB0:
	// fdivs f0,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f30.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x823de800
	ctx.lr = 0x8219EEBC;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f30,f27
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fadds f11,f27,f31
	ctx.f11.f64 = double(float(ctx.f27.f64 + ctx.f31.f64));
	// lfs f0,24264(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24264);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f7,f10,f9,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fadds f6,f7,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f28.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_8219EEE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x8219EEF4;
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

PPC_WEAK_FUNC(sub_8219EE08) {
	__imp__sub_8219EE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219EF08) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,18(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 18);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x8219ef44
	if (ctx.cr6.eq) goto loc_8219EF44;
	// lwz r9,760(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
loc_8219EF20:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8219ef4c
	if (ctx.cr6.eq) goto loc_8219EF4C;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x8219ef20
	if (!ctx.cr6.eq) goto loc_8219EF20;
loc_8219EF44:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8219EF4C:
	// sth r10,36(r5)
	PPC_STORE_U16(ctx.r5.u32 + 36, ctx.r10.u16);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219ef64
	if (ctx.cr6.eq) goto loc_8219EF64;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8219EF64:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219EF08) {
	__imp__sub_8219EF08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219EF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x8219EF78;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de010
	ctx.lr = 0x8219EF80;
	__savefpr_22(ctx, base);
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x8219ef08
	ctx.lr = 0x8219EFA0;
	sub_8219EF08(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8219f1ec
	if (ctx.cr6.eq) goto loc_8219F1EC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8219efc4
	if (!ctx.cr6.eq) goto loc_8219EFC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de05c
	ctx.lr = 0x8219EFC0;
	__restfpr_22(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_8219EFC4:
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,80
	ctx.r5.s64 = ctx.r31.s64 + 80;
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a8a00
	ctx.lr = 0x8219EFDC;
	sub_821A8A00(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a8f98
	ctx.lr = 0x8219EFEC;
	sub_821A8F98(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821a9268
	ctx.lr = 0x8219F00C;
	sub_821A9268(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lbz r11,5(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,244(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 244);
	// beq cr6,0x8219f1bc
	if (ctx.cr6.eq) goto loc_8219F1BC;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r27,r23,8
	ctx.r27.s64 = ctx.r23.s64 + 8;
	// lfs f22,6912(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,24252(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24252);
	ctx.f23.f64 = double(temp.f32);
	// lfs f27,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
loc_8219F058:
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r9,764(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 764);
	// addi r10,r1,236
	ctx.r10.s64 = ctx.r1.s64 + 236;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219F080:
	// stfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f0,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8219f080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F080;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// lfs f0,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f26,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f26.f64 = double(temp.f32);
	// addi r31,r9,24
	ctx.r31.s64 = ctx.r9.s64 + 24;
	// lfs f24,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f24.f64 = double(temp.f32);
	// fsubs f25,f0,f26
	ctx.f25.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// addi r29,r11,-12
	ctx.r29.s64 = ctx.r11.s64 + -12;
	// li r30,64
	ctx.r30.s64 = 64;
loc_8219F0B0:
	// lfs f30,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f24,f27
	ctx.cr6.compare(ctx.f24.f64, ctx.f27.f64);
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfsu f28,12(r29)
	ea = 12 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f28.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// bne cr6,0x8219f110
	if (!ctx.cr6.eq) goto loc_8219F110;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8219e070
	ctx.lr = 0x8219F0CC;
	sub_8219E070(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f8,f9
	ctx.f8.f64 = double(float(sqrt(ctx.f9.f64)));
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f6,f7,f27,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f27.f64 : ctx.f8.f64;
	// fdivs f5,f27,f6
	ctx.f5.f64 = double(float(ctx.f27.f64 / ctx.f6.f64));
	// fmuls f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f3,f0,f5
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f2,f13,f5
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x8219f120
	goto loc_8219F120;
loc_8219F110:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8219e118
	ctx.lr = 0x8219F120;
	sub_8219E118(ctx, base);
loc_8219F120:
	// bl 0x823df900
	ctx.lr = 0x8219F124;
	sub_823DF900(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// li r9,3
	ctx.r9.s64 = 3;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f31,-24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -24, temp.u32);
	// addi r10,r31,-24
	ctx.r10.s64 = ctx.r31.s64 + -24;
	// stfs f30,-8(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stfs f29,-4(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stfs f28,0(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f8,f10,f25
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f25.f64));
	// fmadds f7,f8,f23,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f23.f64 + ctx.f26.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f5,f11,f7
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// fmuls f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// stfs f4,48(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
loc_8219F184:
	// stfsu f22,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// stfs f31,-44(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -44, temp.u32);
	// stfs f31,-40(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -40, temp.u32);
	// stfs f31,-36(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f31,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F184;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// bne 0x8219f0b0
	if (!ctx.cr0.eq) goto loc_8219F0B0;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x8219f058
	if (!ctx.cr0.eq) goto loc_8219F058;
loc_8219F1BC:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219f1dc
	if (ctx.cr6.eq) goto loc_8219F1DC;
	// lbz r10,5(r23)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r23.u32 + 5);
	// stb r10,6(r23)
	PPC_STORE_U8(ctx.r23.u32 + 6, ctx.r10.u8);
	// b 0x8219f1e0
	goto loc_8219F1E0;
loc_8219F1DC:
	// stb r11,6(r23)
	PPC_STORE_U8(ctx.r23.u32 + 6, ctx.r11.u8);
loc_8219F1E0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,7(r23)
	PPC_STORE_U8(ctx.r23.u32 + 7, ctx.r11.u8);
	// stb r10,4(r23)
	PPC_STORE_U8(ctx.r23.u32 + 4, ctx.r10.u8);
loc_8219F1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de05c
	ctx.lr = 0x8219F1FC;
	__restfpr_22(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219EF70) {
	__imp__sub_8219EF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F200) {
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
	// lwz r10,760(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 760);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lhz r9,36(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 36);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8219f2c8
	if (ctx.cr6.eq) goto loc_8219F2C8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// rotlwi r10,r8,10
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821a47a0
	ctx.lr = 0x8219F254;
	sub_821A47A0(ctx, base);
	// lwz r7,244(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 244);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lbz r5,7(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mulli r11,r5,112
	ctx.r11.s64 = ctx.r5.s64 * 112;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
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
	// lfs f1,17968(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 17968);
	ctx.f1.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f3,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// li r3,16
	ctx.r3.s64 = 16;
	// lfs f2,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x8219e760
	ctx.lr = 0x8219F29C;
	sub_8219E760(ctx, base);
	// lbz r11,7(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stb r11,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x8219f2c8
	if (!ctx.cr6.eq) goto loc_8219F2C8;
	// lbz r11,6(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,7(r31)
	PPC_STORE_U8(ctx.r31.u32 + 7, ctx.r10.u8);
	// stb r9,6(r31)
	PPC_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
loc_8219F2C8:
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

PPC_WEAK_FUNC(sub_8219F200) {
	__imp__sub_8219F200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x8219F2E8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823ddff0
	ctx.lr = 0x8219F2F0;
	__savefpr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82184608
	ctx.lr = 0x8219F2FC;
	sub_82184608(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f834
	if (ctx.cr6.eq) goto loc_8219F834;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r31,244(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f21,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f21.f64 = double(temp.f32);
	// lfs f31,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8219f834
	if (ctx.cr6.eq) goto loc_8219F834;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f23,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f19,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f19.f64 = double(temp.f32);
	// lhz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// lwz r11,760(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 760);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8219f834
	if (ctx.cr6.eq) goto loc_8219F834;
	// lbz r30,5(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8219f834
	if (ctx.cr6.eq) goto loc_8219F834;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82184718
	ctx.lr = 0x8219F368;
	sub_82184718(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// rlwinm r3,r30,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x823b8810
	ctx.lr = 0x8219F374;
	sub_823B8810(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219f834
	if (ctx.cr6.eq) goto loc_8219F834;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823b8850
	ctx.lr = 0x8219F388;
	sub_823B8850(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f3,80(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f2,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x8219ee08
	ctx.lr = 0x8219F3A4;
	sub_8219EE08(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f20,f0,f31
	ctx.f20.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lbz r10,177(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 177);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8219f3c4
	if (!ctx.cr6.eq) goto loc_8219F3C4;
	// lwz r21,188(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// b 0x8219f3f0
	goto loc_8219F3F0;
loc_8219F3C4:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r9,188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 188);
	// lwz r7,72(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// addi r11,r8,22216
	ctx.r11.s64 = ctx.r8.s64 + 22216;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,86
	ctx.r5.s64 = ctx.r11.s64 + 86;
	// lhzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// mullw r3,r4,r10
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r11,r9
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_8219F3F0:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// li r22,1
	ctx.r22.s64 = 1;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lbz r9,173(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 173);
	// lbz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 172);
	// lfs f24,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f24.f64 = double(temp.f32);
	// slw r26,r22,r9
	ctx.r26.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r7,r26
	ctx.r7.s64 = ctx.r26.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// slw r28,r22,r8
	ctx.r28.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r6,r28
	ctx.r6.s64 = ctx.r28.s32;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f26,f24,f10
	ctx.f26.f64 = double(float(ctx.f24.f64 / ctx.f10.f64));
	// fdivs f25,f24,f9
	ctx.f25.f64 = double(float(ctx.f24.f64 / ctx.f9.f64));
	// ble cr6,0x8219f814
	if (!ctx.cr6.gt) goto loc_8219F814;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f22,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f22.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r25,r29,8
	ctx.r25.s64 = ctx.r29.s64 + 8;
	// lfs f28,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// addi r23,r11,24268
	ctx.r23.s64 = ctx.r11.s64 + 24268;
	// lfs f27,-3660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3660);
	ctx.f27.f64 = double(temp.f32);
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8219F474:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// rotlwi r10,r10,10
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// lwz r11,764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 764);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8219F48C:
	// fmr f2,f22
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f22.f64;
	// fcmpu cr6,f23,f31
	ctx.cr6.compare(ctx.f23.f64, ctx.f31.f64);
	// ble cr6,0x8219f4ac
	if (!ctx.cr6.gt) goto loc_8219F4AC;
	// fcmpu cr6,f22,f23
	ctx.cr6.compare(ctx.f22.f64, ctx.f23.f64);
	// ble cr6,0x8219f4ac
	if (!ctx.cr6.gt) goto loc_8219F4AC;
loc_8219F4A0:
	// fsubs f2,f2,f23
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f2.f64 - ctx.f23.f64));
	// fcmpu cr6,f2,f23
	ctx.cr6.compare(ctx.f2.f64, ctx.f23.f64);
	// bgt cr6,0x8219f4a0
	if (ctx.cr6.gt) goto loc_8219F4A0;
loc_8219F4AC:
	// fsubs f0,f2,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f20.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8219F4B8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8219f4d4
	if (ctx.cr6.lt) goto loc_8219F4D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8219f4b8
	if (!ctx.cr6.eq) goto loc_8219F4B8;
loc_8219F4D4:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8219f504
	if (ctx.cr6.eq) goto loc_8219F504;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_8219F4E8:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x8219f504
	if (ctx.cr6.lt) goto loc_8219F504;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// bne cr6,0x8219f4e8
	if (!ctx.cr6.eq) goto loc_8219F4E8;
loc_8219F504:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8219f51c
	if (!ctx.cr6.eq) goto loc_8219F51C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8219f7fc
	if (ctx.cr6.eq) goto loc_8219F7FC;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_8219F51C:
	// divw r9,r29,r28
	ctx.r9.s32 = ctx.r29.s32 / ctx.r28.s32;
	// divw r10,r29,r28
	ctx.r10.s32 = ctx.r29.s32 / ctx.r28.s32;
	// mullw r6,r9,r28
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// subf r3,r6,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r6.s64;
	// divw r7,r10,r26
	ctx.r7.s32 = ctx.r10.s32 / ctx.r26.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// mullw r5,r7,r26
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f3,f8,f25
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f25.f64));
	// fmuls f1,f9,f26
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// bne cr6,0x8219f64c
	if (!ctx.cr6.eq) goto loc_8219F64C;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bne cr6,0x8219f5b8
	if (!ctx.cr6.eq) goto loc_8219F5B8;
	// li r9,4
	ctx.r9.s64 = 4;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8219F5A0:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f12,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F5A0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x8219f7d8
	goto loc_8219F7D8;
loc_8219F5B8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f11,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x8219f5d4
	if (!ctx.cr6.eq) goto loc_8219F5D4;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// b 0x8219f5d8
	goto loc_8219F5D8;
loc_8219F5D4:
	// fmr f6,f21
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f21.f64;
loc_8219F5D8:
	// fsubs f7,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f13,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lfs f9,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
loc_8219F608:
	// fmuls f5,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f4,f13,f0,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f2,f11,f0,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmuls f5,f5,f28
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f28.f64));
	// fmuls f30,f5,f6
	ctx.f30.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmuls f5,f5,f31
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f30,f9,f0,f30
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fadds f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 + ctx.f5.f64));
	// stfs f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f5,f30,f8
	ctx.f5.f64 = double(float(ctx.f30.f64 + ctx.f8.f64));
	// stfsu f5,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F608;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x8219f7d8
	goto loc_8219F7D8;
loc_8219F64C:
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f12,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f13,f31
	ctx.f13.f64 = ctx.f31.f64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r31
	ctx.r5.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f30,-4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f30.f64 = double(temp.f32);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fsubs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// fdivs f29,f24,f12
	ctx.f29.f64 = double(float(ctx.f24.f64 / ctx.f12.f64));
	// lfs f10,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// fmuls f12,f11,f28
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bne cr6,0x8219f6b0
	if (!ctx.cr6.eq) goto loc_8219F6B0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// b 0x8219f6b4
	goto loc_8219F6B4;
loc_8219F6B0:
	// fmr f4,f21
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f21.f64;
loc_8219F6B4:
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f11,52(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f9,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// addi r11,r5,-12
	ctx.r11.s64 = ctx.r5.s64 + -12;
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8219F6E4:
	// fmuls f18,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfsu f13,4(r7)
	ea = 4 + ctx.r7.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// fmuls f17,f7,f0
	ctx.f17.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f16,f11,f0,f10
	ctx.f16.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f15,f9,f0,f8
	ctx.f15.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fmuls f18,f18,f28
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f28.f64));
	// fmuls f14,f18,f31
	ctx.f14.f64 = double(float(ctx.f18.f64 * ctx.f31.f64));
	// fmadds f18,f18,f4,f17
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f4.f64 + ctx.f17.f64));
	// fadds f17,f16,f14
	ctx.f17.f64 = double(float(ctx.f16.f64 + ctx.f14.f64));
	// stfs f17,4(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f17,f15,f14
	ctx.f17.f64 = double(float(ctx.f15.f64 + ctx.f14.f64));
	// stfs f17,8(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f18,f18,f6
	ctx.f18.f64 = double(float(ctx.f18.f64 + ctx.f6.f64));
	// stfsu f18,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f6e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F6E4;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bne cr6,0x8219f770
	if (!ctx.cr6.eq) goto loc_8219F770;
	// fsubs f10,f2,f30
	ctx.f10.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
loc_8219F754:
	// stfsu f13,4(r10)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsu f11,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f754
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F754;
	// b 0x8219f7d4
	goto loc_8219F7D4;
loc_8219F770:
	// fsubs f12,f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// lfs f11,52(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lfs f9,56(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f29
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
loc_8219F794:
	// fmuls f4,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f2,f11,f0,f10
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f30,f9,f0,f8
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f29,f7,f0,f6
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fmuls f4,f4,f28
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f28.f64));
	// fmuls f4,f4,f31
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fadds f2,f2,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f2,f30,f4
	ctx.f2.f64 = double(float(ctx.f30.f64 + ctx.f4.f64));
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f4,f29,f4
	ctx.f4.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// stfsu f4,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8219f794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219F794;
loc_8219F7D4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
loc_8219F7D8:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219e9f8
	ctx.lr = 0x8219F7F0;
	sub_8219E9F8(ctx, base);
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// fsubs f22,f22,f19
	ctx.fpscr.disableFlushMode();
	ctx.f22.f64 = double(float(ctx.f22.f64 - ctx.f19.f64));
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_8219F7FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// bne cr6,0x8219f48c
	if (!ctx.cr6.eq) goto loc_8219F48C;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// bne 0x8219f474
	if (!ctx.cr0.eq) goto loc_8219F474;
loc_8219F814:
	// rlwinm r11,r24,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823b8948
	ctx.lr = 0x8219F834;
	sub_823B8948(ctx, base);
loc_8219F834:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de03c
	ctx.lr = 0x8219F840;
	__restfpr_14(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219F2E0) {
	__imp__sub_8219F2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219F844) {
	__imp__sub_8219F844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F848) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219F848) {
	__imp__sub_8219F848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219F850) {
	__imp__sub_8219F850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219F858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x8219F860;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de010
	ctx.lr = 0x8219F868;
	__savefpr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82394cb8
	ctx.lr = 0x8219F8B4;
	sub_82394CB8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219fbd0
	if (ctx.cr6.eq) goto loc_8219FBD0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-28736
	ctx.r9.s64 = ctx.r11.s64 + -28736;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82394ed0
	ctx.lr = 0x8219F8E4;
	sub_82394ED0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r7,-31852
	ctx.r7.s64 = -2087452672;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r7,-30336
	ctx.r4.s64 = ctx.r7.s64 + -30336;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r10,3
	ctx.r6.s64 = ctx.r10.s64 + 3;
	// clrlwi r3,r6,16
	ctx.r3.u64 = ctx.r6.u32 & 0xFFFF;
	// vslw128 v62,v63,v63
	ctx.v62.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v62.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v62.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v62.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// addi r7,r5,-5648
	ctx.r7.s64 = ctx.r5.s64 + -5648;
	// vslw128 v61,v63,v63
	ctx.v61.u32[0] = ctx.v63.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v61.u32[1] = ctx.v63.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v61.u32[2] = ctx.v63.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v61.u32[3] = ctx.v63.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// sth r3,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r3.u16);
	// li r8,16
	ctx.r8.s64 = 16;
	// sth r3,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// sth r5,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r5.u16);
	// addi r9,r9,-5664
	ctx.r9.s64 = ctx.r9.s64 + -5664;
	// sth r3,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r3.u16);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r25,r1,96
	ctx.r25.s64 = ctx.r1.s64 + 96;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lvrx128 v60,r8,r26
	temp.u32 = ctx.r8.u32 + ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r4,3(r29)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// lvx128 v13,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lvx128 v12,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r9,1(r29)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r29.u32 + 1);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r7,2(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 2);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lvlx128 v59,r0,r26
	temp.u32 = ctx.r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vand128 v57,v58,v63
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// rotlwi r5,r4,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// fadds f27,f13,f0
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// or r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 | ctx.r11.u64;
	// fadds f26,f11,f12
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fadds f25,f9,f10
	ctx.f25.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// vxor128 v0,v57,v62
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// fsubs f24,f0,f13
	ctx.f24.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// fsubs f23,f12,f11
	ctx.f23.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fsubs f22,f10,f9
	ctx.f22.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// vmaddfp v11,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// vpkd3d128 v0,v11,2,1,3
	vTemp.s32[0] = int32_t(ctx.v11.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v11.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v11.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v11.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v56,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// or r29,r9,r7
	ctx.r29.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lvrx128 v55,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v54,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v53,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vand128 v52,v53,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vxor128 v0,v52,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_xor_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v12,v13
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vpkd3d128 v0,v13,2,1,3
	vTemp.s32[0] = int32_t(ctx.v13.u32[3]) - 0x40400000;
	vTemp.s32[0] = vTemp.s32[0] < -512 ? -512 : (vTemp.s32[0] > 511 ? 511 : vTemp.s32[0]);
	temp.u32 = (uint32_t(vTemp.s32[0]) & 0x3FF) << 20;
	vTemp.s32[1] = int32_t(ctx.v13.u32[2]) - 0x40400000;
	vTemp.s32[1] = vTemp.s32[1] < -512 ? -512 : (vTemp.s32[1] > 511 ? 511 : vTemp.s32[1]);
	temp.u32 |= (uint32_t(vTemp.s32[1]) & 0x3FF) << 10;
	vTemp.s32[2] = int32_t(ctx.v13.u32[1]) - 0x40400000;
	vTemp.s32[2] = vTemp.s32[2] < -512 ? -512 : (vTemp.s32[2] > 511 ? 511 : vTemp.s32[2]);
	temp.u32 |= (uint32_t(vTemp.s32[2]) & 0x3FF) << 0;
	vTemp.s32[3] = int32_t(ctx.v13.u32[0]) - 0x40400000;
	vTemp.s32[3] = vTemp.s32[3] < -2 ? -2 : (vTemp.s32[3] > 1 ? 1 : vTemp.s32[3]);
	temp.u32 |= (uint32_t(vTemp.s32[3]) & 0x3) << 30;
	ctx.v0.u32[3] = temp.u32;
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// stvewx128 v51,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x82394d70
	ctx.lr = 0x8219FA38;
	sub_82394D70(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fadds f7,f27,f8
	ctx.f7.f64 = double(float(ctx.f27.f64 + ctx.f8.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f26
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f26.f64));
	// vor128 v50,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f3,f4,f25
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f25.f64));
	// vpkd3d128 v50,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v50.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v50.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v50.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v50.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stfs f29,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f30,116(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stfs f3,8(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r30,r1,92
	ctx.r30.s64 = ctx.r1.s64 + 92;
	// vspltw128 v49,v50,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v50.u32), 0xFF));
	// lvx128 v62,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f29,128(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// stvewx128 v49,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v47,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// vor128 v48,v62,v62
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v62.u8));
	// vpkd3d128 v47,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v47.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v47.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v47.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v47.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// vpkd3d128 v48,v62,3,1,3
	temp.u32 = (ctx.v62.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v48.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v48.u16[6] |= ((ctx.v62.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v62.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v62.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v62.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v48.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v48.u16[7] |= ((ctx.v62.u32[3]&0x80000000)>>16);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// vspltw128 v45,v47,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v47.u32), 0xFF));
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f24
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f24.f64));
	// stfsu f1,32(r3)
	ea = 32 + ctx.r3.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f23
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f23.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// vspltw128 v46,v48,0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v48.u32), 0xFF));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// fsubs f10,f11,f22
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f22.f64));
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stvewx128 v46,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f27.f64));
	// stfsu f8,32(r3)
	ea = 32 + ctx.r3.u32;
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f26
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f26.f64));
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f28,132(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lvx128 v63,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f25
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f25.f64));
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stvewx128 v45,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// vor128 v44,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vpkd3d128 v44,v63,3,1,3
	ctx.fpscr.enableFlushModeUnconditional();
	temp.u32 = (ctx.v63.u32[2]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[2]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[2]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[6] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[6] |= ((ctx.v63.u32[2]&0x80000000)>>16);
	temp.u32 = (ctx.v63.u32[3]&0x7FFFFFFF);
	vTemp.u8[0] = (temp.f32 != temp.f32) || (temp.f32 > 65504.0f) ? 0xFF : ((ctx.v63.u32[3]&0x7f800000)>>23);
	temp.u16 = vTemp.u8[0] != 0xFF ? ((ctx.v63.u32[3]&0x7FE000)>>13) : 0x0;
	ctx.v44.u16[7] = vTemp.u8[0] != 0xFF ? (vTemp.u8[0] > 0x70 ? (((vTemp.u8[0]-0x70)<<10)+temp.u16) : (0x71-vTemp.u8[0] > 31 ? 0x0 : ((0x400+temp.u16)>>(0x71-vTemp.u8[0])))) : 0x7FFF;
	ctx.v44.u16[7] |= ((ctx.v63.u32[3]&0x80000000)>>16);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
	// lfs f3,0(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f24,f3
	ctx.f2.f64 = double(float(ctx.f24.f64 + ctx.f3.f64));
	// vspltw128 v43,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// stfsu f2,32(r3)
	ea = 32 + ctx.r3.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r3.u32 = ea;
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f23
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f23.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f22
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f22.f64));
	// stfs f11,8(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// stvewx128 v43,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// stw r8,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r8.u32);
loc_8219FBD0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de05c
	ctx.lr = 0x8219FBDC;
	__restfpr_22(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219F858) {
	__imp__sub_8219F858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FBE0) {
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
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// lfs f0,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// beq cr6,0x8219fc24
	if (ctx.cr6.eq) goto loc_8219FC24;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_8219FC24:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r11,-15680
	ctx.r7.s64 = ctx.r11.s64 + -15680;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 131072;
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// addis r8,r7,2
	ctx.r8.s64 = ctx.r7.s64 + 131072;
	// addi r10,r10,2140
	ctx.r10.s64 = ctx.r10.s64 + 2140;
	// mullw r5,r11,r5
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// addi r8,r8,2152
	ctx.r8.s64 = ctx.r8.s64 + 2152;
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 + ctx.r8.u64;
	// addis r8,r7,2
	ctx.r8.s64 = ctx.r7.s64 + 131072;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f1,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmuls f3,f5,f1
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f4,148(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f3,152(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r11,r8,2128
	ctx.r11.s64 = ctx.r8.s64 + 2128;
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f8,136(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// add r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 + ctx.r11.u64;
	// stfs f6,144(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f4,12168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,5484(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5484);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8219f858
	ctx.lr = 0x8219FCD4;
	sub_8219F858(ctx, base);
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

PPC_WEAK_FUNC(sub_8219FBE0) {
	__imp__sub_8219FBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219FCEC) {
	__imp__sub_8219FCEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f1,f5,f8,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f1,f3,f4,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f1.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219FCF0) {
	__imp__sub_8219FCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FD30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfd f13,24288(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f0,f5,f8,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f0,f3,f4,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8219fd84
	if (!ctx.cr6.lt) goto loc_8219FD84;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8219FD84:
	// fmuls f13,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r10,-15680
	ctx.r8.s64 = ctx.r10.s64 + -15680;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// addi r4,r10,2112
	ctx.r4.s64 = ctx.r10.s64 + 2112;
	// li r3,1
	ctx.r3.s64 = 1;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r11,r4
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219FD30) {
	__imp__sub_8219FD30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219FDCC) {
	__imp__sub_8219FDCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,24(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,36(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,32(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f3,44(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// lfd f13,24288(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24288);
	// fmuls f2,f9,f12
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f0,f5,f8,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f0,f3,f4,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8219fe24
	if (!ctx.cr6.lt) goto loc_8219FE24;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8219FE24:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// addi r8,r11,-15680
	ctx.r8.s64 = ctx.r11.s64 + -15680;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addis r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 131072;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// lwz r11,-19420(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19420);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r10,2112
	ctx.r3.s64 = ctx.r10.s64 + 2112;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// lfs f13,5488(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfsx f13,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8219FDD0) {
	__imp__sub_8219FDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FE6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219FE6C) {
	__imp__sub_8219FE6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219FE78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x8219fd30
	ctx.lr = 0x8219FEA0;
	sub_8219FD30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219fec8
	if (ctx.cr6.eq) goto loc_8219FEC8;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219fbe0
	ctx.lr = 0x8219FEC8;
	sub_8219FBE0(ctx, base);
loc_8219FEC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219FE70) {
	__imp__sub_8219FE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219FED8;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x8219ff40
	if (!ctx.cr6.gt) goto loc_8219FF40;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8219fdd0
	ctx.lr = 0x8219FF20;
	sub_8219FDD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219ff5c
	if (ctx.cr6.eq) goto loc_8219FF5C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8219ff40
	if (!ctx.cr6.lt) goto loc_8219FF40;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_8219FF40:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219fbe0
	ctx.lr = 0x8219FF5C;
	sub_8219FBE0(ctx, base);
loc_8219FF5C:
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

PPC_WEAK_FUNC(sub_8219FED0) {
	__imp__sub_8219FED0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8219FF6C) {
	__imp__sub_8219FF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8219FF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8219FF78;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lfs f1,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r29,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8219ffe4
	if (ctx.cr6.eq) goto loc_8219FFE4;
	// addi r30,r4,4
	ctx.r30.s64 = ctx.r4.s64 + 4;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219fd30
	ctx.lr = 0x8219FFB4;
	sub_8219FD30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a0000
	if (ctx.cr6.eq) goto loc_821A0000;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219fbe0
	ctx.lr = 0x8219FFDC;
	sub_8219FBE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8219FFE4:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f2,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219fed0
	ctx.lr = 0x821A0000;
	sub_8219FED0(ctx, base);
loc_821A0000:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8219FF70) {
	__imp__sub_8219FF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821A0010;
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
	// lwz r24,12(r4)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821a0104
	if (!ctx.cr6.gt) goto loc_821A0104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r24,44
	ctx.r31.s64 = ctx.r24.s64 + 44;
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
loc_821A0048:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f1,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r28,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a0090
	if (ctx.cr6.eq) goto loc_821A0090;
	// addi r30,r31,-24
	ctx.r30.s64 = ctx.r31.s64 + -24;
	// lwz r29,-28(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219fd30
	ctx.lr = 0x821A0074;
	sub_8219FD30(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a00f0
	if (ctx.cr6.eq) goto loc_821A00F0;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x821a00e0
	goto loc_821A00E0;
loc_821A0090:
	// lfs f31,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,-28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(ctx.f31.f64, ctx.f29.f64);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// ble cr6,0x821a00d4
	if (!ctx.cr6.gt) goto loc_821A00D4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r31,-24
	ctx.r3.s64 = ctx.r31.s64 + -24;
	// bl 0x8219fdd0
	ctx.lr = 0x821A00B4;
	sub_8219FDD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a00f0
	if (ctx.cr6.eq) goto loc_821A00F0;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821a00d4
	if (!ctx.cr6.lt) goto loc_821A00D4;
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// fmuls f30,f0,f1
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
loc_821A00D4:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r5,r31,-24
	ctx.r5.s64 = ctx.r31.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821A00E0:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r31,-12
	ctx.r7.s64 = ctx.r31.s64 + -12;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219fbe0
	ctx.lr = 0x821A00F0;
	sub_8219FBE0(ctx, base);
loc_821A00F0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821a0048
	if (ctx.cr6.lt) goto loc_821A0048;
loc_821A0104:
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

PPC_WEAK_FUNC(sub_821A0008) {
	__imp__sub_821A0008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0118) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32070
	ctx.r10.s64 = -2101739520;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6400(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6400, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0118) {
	__imp__sub_821A0118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r11,r11,6400
	ctx.r11.s64 = ctx.r11.s64 + 6400;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,34
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 34, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// ld r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stdx r8,r10,r9
	PPC_STORE_U64(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u64);
	// ld r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// ld r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r5,16(r7)
	PPC_STORE_U64(ctx.r7.u32 + 16, ctx.r5.u64);
	// ld r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r4,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r4.u64);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0128) {
	__imp__sub_821A0128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0178) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r3,r11,6400
	ctx.r3.s64 = ctx.r11.s64 + 6400;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0178) {
	__imp__sub_821A0178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A0184) {
	__imp__sub_821A0184(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f0,-9672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9672);
	ctx.f0.f64 = double(temp.f32);
loc_821A0198:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A01A4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// lwz r11,-12(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpwi cr6,r11,-128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -128, ctx.xer);
	// bge cr6,0x821a01c8
	if (!ctx.cr6.lt) goto loc_821A01C8;
	// li r11,-128
	ctx.r11.s64 = -128;
	// b 0x821a01d4
	goto loc_821A01D4;
loc_821A01C8:
	// cmpwi cr6,r11,127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 127, ctx.xer);
	// ble cr6,0x821a01d4
	if (!ctx.cr6.gt) goto loc_821A01D4;
	// li r11,127
	ctx.r11.s64 = 127;
loc_821A01D4:
	// stbx r11,r4,r9
	PPC_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r11.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x821a01a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A01A4;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bne 0x821a0198
	if (!ctx.cr0.eq) goto loc_821A0198;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0188) {
	__imp__sub_821A0188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A01F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A01F4) {
	__imp__sub_821A01F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A01F8) {
	PPC_FUNC_PROLOGUE();
loc_821A01F8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r3
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r3.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r3.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a01f8
	if (!ctx.cr0.eq) goto loc_821A01F8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A01F8) {
	__imp__sub_821A01F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r3,r11,11776
	ctx.r3.s64 = ctx.r11.s64 + 11776;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0218) {
	__imp__sub_821A0218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A0224) {
	__imp__sub_821A0224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// addi r3,r11,-32000
	ctx.r3.s64 = ctx.r11.s64 + -32000;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0228) {
	__imp__sub_821A0228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A0234) {
	__imp__sub_821A0234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0238) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821a024c
	if (ctx.cr6.gt) goto loc_821A024C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A024C:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821a0260
	if (ctx.cr6.eq) goto loc_821A0260;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821A0260:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0238) {
	__imp__sub_821A0238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0268) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821A0270;
	__savegprlr_29(ctx, base);
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// stw r4,736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 736, ctx.r4.u32);
	// addis r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 262144;
	// addis r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 262144;
	// addi r11,r11,16384
	ctx.r11.s64 = ctx.r11.s64 + 16384;
	// addi r10,r10,-32768
	ctx.r10.s64 = ctx.r10.s64 + -32768;
	// addi r9,r9,-30720
	ctx.r9.s64 = ctx.r9.s64 + -30720;
	// stw r11,740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 740, ctx.r11.u32);
	// stw r10,744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 744, ctx.r10.u32);
	// addis r8,r4,5
	ctx.r8.s64 = ctx.r4.s64 + 327680;
	// stw r9,748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 748, ctx.r9.u32);
	// addis r7,r4,5
	ctx.r7.s64 = ctx.r4.s64 + 327680;
	// addis r6,r4,6
	ctx.r6.s64 = ctx.r4.s64 + 393216;
	// addis r5,r4,6
	ctx.r5.s64 = ctx.r4.s64 + 393216;
	// addis r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 1048576;
	// addis r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 1048576;
	// addis r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 1048576;
	// addi r8,r8,-30720
	ctx.r8.s64 = ctx.r8.s64 + -30720;
	// addi r7,r7,-22528
	ctx.r7.s64 = ctx.r7.s64 + -22528;
	// addi r6,r6,-22016
	ctx.r6.s64 = ctx.r6.s64 + -22016;
	// stw r8,752(r3)
	PPC_STORE_U32(ctx.r3.u32 + 752, ctx.r8.u32);
	// addi r5,r5,-17920
	ctx.r5.s64 = ctx.r5.s64 + -17920;
	// stw r7,756(r3)
	PPC_STORE_U32(ctx.r3.u32 + 756, ctx.r7.u32);
	// addi r11,r11,14848
	ctx.r11.s64 = ctx.r11.s64 + 14848;
	// stw r6,760(r3)
	PPC_STORE_U32(ctx.r3.u32 + 760, ctx.r6.u32);
	// addi r10,r10,23168
	ctx.r10.s64 = ctx.r10.s64 + 23168;
	// stw r5,764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 764, ctx.r5.u32);
	// addi r9,r9,27264
	ctx.r9.s64 = ctx.r9.s64 + 27264;
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, ctx.r11.u32);
	// stw r10,768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 768, ctx.r10.u32);
	// stw r9,3072(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3072, ctx.r9.u32);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A0268) {
	__imp__sub_821A0268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A02F0) {
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
	// lis r11,-32069
	ctx.r11.s64 = -2101673984;
	// li r5,3136
	ctx.r5.s64 = 3136;
	// addi r31,r11,-32000
	ctx.r31.s64 = ctx.r11.s64 + -32000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,-21760
	ctx.r3.s64 = ctx.r31.s64 + -21760;
	// bl 0x823de090
	ctx.lr = 0x821A0318;
	sub_823DE090(ctx, base);
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,31360
	ctx.r5.u64 = ctx.r5.u64 | 31360;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x821A032C;
	sub_823DE090(ctx, base);
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

PPC_WEAK_FUNC(sub_821A02F0) {
	__imp__sub_821A02F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32070
	ctx.r11.s64 = -2101739520;
	// addi r10,r11,11776
	ctx.r10.s64 = ctx.r11.s64 + 11776;
	// stw r3,352(r10)
	PPC_STORE_U32(ctx.r10.u32 + 352, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0340) {
	__imp__sub_821A0340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14988);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0350) {
	__imp__sub_821A0350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x821a03f8
	if (ctx.cr6.eq) goto loc_821A03F8;
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a03f8
	if (ctx.cr6.eq) goto loc_821A03F8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// bne cr6,0x821a03b4
	if (!ctx.cr6.eq) goto loc_821A03B4;
loc_821A03A0:
	// rlwinm r6,r6,31,25,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7F;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a03a0
	if (ctx.cr6.eq) goto loc_821A03A0;
loc_821A03B4:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f1,f7,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_821A03F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0360) {
	__imp__sub_821A0360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0400) {
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
	// lfs f12,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x821a0480
	if (ctx.cr6.eq) goto loc_821A0480;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f1,f7,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f0,f4,f4,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f11,f0
	ctx.f11.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f0,f11,f3
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821a046c
	if (ctx.cr6.lt) goto loc_821A046C;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821a0480
	if (!ctx.cr6.gt) goto loc_821A0480;
loc_821A046C:
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
loc_821A0480:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a04ac
	if (ctx.cr6.eq) goto loc_821A04AC;
	// lfs f1,36(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,148(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// bl 0x821a91b0
	ctx.lr = 0x821A049C;
	sub_821A91B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a04b0
	if (!ctx.cr6.eq) goto loc_821A04B0;
loc_821A04AC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821A04B0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0400) {
	__imp__sub_821A0400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A04C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a04d4
	if (ctx.cr6.eq) goto loc_821A04D4;
loc_821A04CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821A04D4:
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a04cc
	if (!ctx.cr6.eq) goto loc_821A04CC;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
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

PPC_WEAK_FUNC(sub_821A04C0) {
	__imp__sub_821A04C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A04F0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821a058c
	if (!ctx.cr6.eq) goto loc_821A058C;
	// lhz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// lwz r10,736(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r4,4
	ctx.r31.s64 = ctx.r4.s64 + 4;
loc_821A0530:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a0530
	if (!ctx.cr0.eq) goto loc_821A0530;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r3,r5,19
	ctx.r3.u64 = ctx.r5.u32 & 0x1FFF;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x821a0564
	if (!ctx.cr6.eq) goto loc_821A0564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a04f0
	ctx.lr = 0x821A0564;
	sub_821A04F0(ctx, base);
loc_821A0564:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r31
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r31.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r31.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a0564
	if (!ctx.cr0.eq) goto loc_821A0564;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,2941(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2941, ctx.r9.u8);
	// b 0x821a0594
	goto loc_821A0594;
loc_821A058C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,2941(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2941, ctx.r11.u8);
loc_821A0594:
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

PPC_WEAK_FUNC(sub_821A04F0) {
	__imp__sub_821A04F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A05AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A05AC) {
	__imp__sub_821A05AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A05B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,2908(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// addi r11,r3,2908
	ctx.r11.s64 = ctx.r3.s64 + 2908;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,2916(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2916);
	// clrlwi r9,r4,16
	ctx.r9.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821A05D0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a05d0
	if (!ctx.cr0.eq) goto loc_821A05D0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A05B0) {
	__imp__sub_821A05B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A05F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821A05F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x821a0718
	if (ctx.cr0.eq) goto loc_821A0718;
	// li r27,0
	ctx.r27.s64 = 0;
loc_821A0624:
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821a06bc
	if (!ctx.cr6.eq) goto loc_821A06BC;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0658
	if (ctx.cr6.eq) goto loc_821A0658;
	// bl 0x821a05f0
	ctx.lr = 0x821A064C;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a06bc
	if (!ctx.cr6.eq) goto loc_821A06BC;
loc_821A0658:
	// lwz r3,216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0674
	if (ctx.cr6.eq) goto loc_821A0674;
	// bl 0x821a05f0
	ctx.lr = 0x821A0668;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a06bc
	if (!ctx.cr6.eq) goto loc_821A06BC;
loc_821A0674:
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a0690
	if (ctx.cr6.eq) goto loc_821A0690;
	// bl 0x821a05f0
	ctx.lr = 0x821A0684;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a06bc
	if (!ctx.cr6.eq) goto loc_821A06BC;
loc_821A0690:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x821a0708
	if (!ctx.cr6.eq) goto loc_821A0708;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821a06c8
	if (!ctx.cr6.eq) goto loc_821A06C8;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x821a05f0
	ctx.lr = 0x821A06B0;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a0708
	if (ctx.cr6.eq) goto loc_821A0708;
loc_821A06BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821A06C8:
	// lwz r29,188(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a0708
	if (ctx.cr6.eq) goto loc_821A0708;
loc_821A06D8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x821a05f0
	ctx.lr = 0x821A06E0;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a0704
	if (!ctx.cr6.eq) goto loc_821A0704;
	// lbz r11,177(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 177);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821a06d8
	if (ctx.cr6.lt) goto loc_821A06D8;
	// b 0x821a0708
	goto loc_821A0708;
loc_821A0704:
	// li r24,1
	ctx.r24.s64 = 1;
loc_821A0708:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,252
	ctx.r27.s64 = ctx.r27.s64 + 252;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821a0624
	if (ctx.cr6.lt) goto loc_821A0624;
loc_821A0718:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821A05F0) {
	__imp__sub_821A05F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A0724) {
	__imp__sub_821A0724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0728) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x821a05f0
	ctx.lr = 0x821A0744;
	sub_821A05F0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a078c
	if (ctx.cr6.eq) goto loc_821A078C;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r9,r11,17405
	ctx.r9.u64 = ctx.r11.u64 | 17405;
	// mullw r8,r10,r9
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r7,r8,39
	ctx.r7.s64 = ctx.r8.s64 + 2555904;
	// addi r7,r7,-24893
	ctx.r7.s64 = ctx.r7.s64 + -24893;
	// rlwinm r6,r7,15,17,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7FFF;
	// mulli r5,r6,479
	ctx.r5.s64 = ctx.r6.s64 * 479;
	// rlwinm r4,r5,17,16,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 17) & 0xFFFF;
	// sth r4,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r4.u16);
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
loc_821A078C:
	// bl 0x823df900
	ctx.lr = 0x821A0790;
	sub_823DF900(ctx, base);
	// mulli r11,r3,479
	ctx.r11.s64 = ctx.r3.s64 * 479;
	// srawi r10,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 15;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// sth r9,22(r31)
	PPC_STORE_U16(ctx.r31.u32 + 22, ctx.r9.u16);
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

PPC_WEAK_FUNC(sub_821A0728) {
	__imp__sub_821A0728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A07B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A07B4) {
	__imp__sub_821A07B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A07B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add. r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821a07f8
	if (ctx.cr0.eq) goto loc_821A07F8;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r10,r10,176
	ctx.r10.s64 = ctx.r10.s64 + 176;
loc_821A07DC:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// beq cr6,0x821a0800
	if (ctx.cr6.eq) goto loc_821A0800;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821a07dc
	if (!ctx.cr6.eq) goto loc_821A07DC;
loc_821A07F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A0800:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A07B8) {
	__imp__sub_821A07B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,2908(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// li r11,1
	ctx.r11.s64 = 1;
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

PPC_WEAK_FUNC(sub_821A0808) {
	__imp__sub_821A0808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0828) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,816(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 816);
	// li r11,255
	ctx.r11.s64 = 255;
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

PPC_WEAK_FUNC(sub_821A0828) {
	__imp__sub_821A0828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a08ac
	if (ctx.cr0.eq) goto loc_821A08AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A086C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,176(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 176);
	// cmplwi cr6,r8,9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 9, ctx.xer);
	// bne cr6,0x821a08a4
	if (!ctx.cr6.eq) goto loc_821A08A4;
	// lwz r9,736(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 736);
	// lwz r11,2908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2908);
	// subf r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// stw r7,2908(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2908, ctx.r7.u32);
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// sth r5,2916(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2916, ctx.r5.u16);
loc_821A08A4:
	// addi r10,r10,252
	ctx.r10.s64 = ctx.r10.s64 + 252;
	// bdnz 0x821a086c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A086C;
loc_821A08AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0848) {
	__imp__sub_821A0848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A08B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A08B4) {
	__imp__sub_821A08B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A08B8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a19a0
	ctx.lr = 0x821A08D4;
	sub_823A19A0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// stb r9,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r9.u8);
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

PPC_WEAK_FUNC(sub_821A08B8) {
	__imp__sub_821A08B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0900) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add. r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821a0944
	if (!ctx.cr0.gt) goto loc_821A0944;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_821A0918:
	// lbz r7,176(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// beq cr6,0x821a094c
	if (ctx.cr6.eq) goto loc_821A094C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC0;
	// cmpwi cr6,r7,128
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 128, ctx.xer);
	// beq cr6,0x821a094c
	if (ctx.cr6.eq) goto loc_821A094C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,252
	ctx.r11.s64 = ctx.r11.s64 + 252;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821a0918
	if (ctx.cr6.lt) goto loc_821A0918;
loc_821A0944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A094C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0900) {
	__imp__sub_821A0900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821A0954) {
	__imp__sub_821A0954(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821A0958) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
loc_821A095C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r9,r11,32768
	ctx.r9.u64 = ctx.r11.u64 | 32768;
loc_821A0970:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r8,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821a0994
	if (!ctx.cr6.eq) goto loc_821A0994;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a0970
	if (!ctx.cr0.eq) goto loc_821A0970;
	// b 0x821a099c
	goto loc_821A099C;
loc_821A0994:
	// stwcx. r8,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_821A099C:
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821a095c
	if (!ctx.cr6.eq) goto loc_821A095C;
loc_821A09A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x821a09a8
	if (!ctx.cr0.eq) goto loc_821A09A8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821A0958) {
	__imp__sub_821A0958(ctx, base);
}

