#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_820D8F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f11,f10,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f4,f9,f8,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fnmsubs f3,f7,f6,f4
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f6.f64 - ctx.f4.f64)));
	// stfs f3,0(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmsubs f7,f2,f1,f8
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f8.f64));
	// fmadds f6,f0,f13,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmadds f5,f12,f11,f6
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f5,4(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f9,f4,f3,f10
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fnmsubs f8,f2,f1,f9
	ctx.f8.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f9.f64)));
	// fmadds f7,f0,f13,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f7,8(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f6,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f11,f6,f5,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 - ctx.f12.f64));
	// fnmsubs f10,f4,f3,f11
	ctx.f10.f64 = double(float(-(ctx.f4.f64 * ctx.f3.f64 - ctx.f11.f64)));
	// fnmsubs f9,f2,f1,f10
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f1.f64 - ctx.f10.f64)));
	// stfs f9,12(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D8F88) {
	__imp__sub_820D8F88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D905C) {
	__imp__sub_820D905C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820d9090
	if (!ctx.cr6.eq) goto loc_820D9090;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,-32312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -32312);
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// eqv r9,r11,r3
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r3.u64);
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// clrlwi r3,r7,31
	ctx.r3.u64 = ctx.r7.u32 & 0x1;
	// blr 
	return;
loc_820D9090:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r3,9780
	ctx.r10.s64 = ctx.r3.s64 * 9780;
	// addi r11,r11,9240
	ctx.r11.s64 = ctx.r11.s64 + 9240;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9060) {
	__imp__sub_820D9060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D90B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D90B4) {
	__imp__sub_820D90B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D90B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820d9120
	if (!ctx.cr6.eq) goto loc_820D9120;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f10,f12,f11,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f8,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f1
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// fmadds f5,f8,f11,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmuls f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// stfs f4,0(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f12,f3,f11,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
loc_820D9120:
	// fmuls f13,f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f12,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D90B8) {
	__imp__sub_820D90B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9144) {
	__imp__sub_820D9144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820D9150;
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
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// bl 0x821e50e8
	ctx.lr = 0x820D9164;
	sub_821E50E8(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,11308(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// beq cr6,0x820d9238
	if (ctx.cr6.eq) goto loc_820D9238;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82317030
	ctx.lr = 0x820D9184;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d91a4
	if (!ctx.cr6.eq) goto loc_820D91A4;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d91a4
	if (!ctx.cr6.eq) goto loc_820D91A4;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9238
	if (ctx.cr6.eq) goto loc_820D9238;
loc_820D91A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823170e8
	ctx.lr = 0x820D91B0;
	sub_823170E8(ctx, base);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d920c
	if (ctx.cr6.eq) goto loc_820D920C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
	// bl 0x821e5110
	ctx.lr = 0x820D91D0;
	sub_821E5110(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r6,r10,-15680
	ctx.r6.s64 = ctx.r10.s64 + -15680;
	// ori r5,r9,22904
	ctx.r5.u64 = ctx.r9.u64 | 22904;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r30,60
	ctx.r9.s64 = ctx.r30.s64 + 60;
	// addi r8,r30,56
	ctx.r8.s64 = ctx.r30.s64 + 56;
	// addi r7,r30,52
	ctx.r7.s64 = ctx.r30.s64 + 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsx f1,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d90b8
	ctx.lr = 0x820D9200;
	sub_820D90B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820D920C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r10.u8);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820D9238:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9148) {
	__imp__sub_820D9148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D924C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D924C) {
	__imp__sub_820D924C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9250) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-19392
	ctx.r10.s64 = ctx.r11.s64 + -19392;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_820D9260:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r9,r10,2304
	ctx.r9.s64 = ctx.r10.s64 + 2304;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820d9260
	if (ctx.cr6.lt) goto loc_820D9260;
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9250) {
	__imp__sub_820D9250(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9288) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x820d92f4
	if (!ctx.cr6.eq) goto loc_820D92F4;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-19392
	ctx.r9.s64 = ctx.r11.s64 + -19392;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820D92B0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820d92d4
	if (ctx.cr6.eq) goto loc_820D92D4;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// addi r8,r9,2304
	ctx.r8.s64 = ctx.r9.s64 + 2304;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820d92b0
	if (ctx.cr6.lt) goto loc_820D92B0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_820D92D4:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r10,r10,3,21,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7F8;
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stbx r8,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r8.u8);
	// blr 
	return;
loc_820D92F4:
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// addi r7,r10,-2047
	ctx.r7.s64 = ctx.r10.s64 + -2047;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// addi r9,r8,-19392
	ctx.r9.s64 = ctx.r8.s64 + -19392;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stbx r4,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9288) {
	__imp__sub_820D9288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9324) {
	__imp__sub_820D9324(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9328) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x820d9344
	if (!ctx.cr6.eq) goto loc_820D9344;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820d9348
	if (ctx.cr6.eq) goto loc_820D9348;
loc_820D9344:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D9348:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9328) {
	__imp__sub_820D9328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820D9358;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// addi r10,r8,-5696
	ctx.r10.s64 = ctx.r8.s64 + -5696;
	// mulli r9,r9,404
	ctx.r9.s64 = ctx.r9.s64 * 404;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rotlwi r8,r11,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r10,r7,-19392
	ctx.r10.s64 = ctx.r7.s64 + -19392;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d9450
	if (ctx.cr6.eq) goto loc_820D9450;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// beq cr6,0x820d93d4
	if (ctx.cr6.eq) goto loc_820D93D4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x820d93d4
	if (ctx.cr6.eq) goto loc_820D93D4;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820d9500
	goto loc_820D9500;
loc_820D93D4:
	// lwz r11,300(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x820d93f0
	if (!ctx.cr6.eq) goto loc_820D93F0;
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820d93f4
	if (ctx.cr6.eq) goto loc_820D93F4;
loc_820D93F0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820D93F4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x820d9430
	if (!ctx.cr6.eq) goto loc_820D9430;
	// lhz r25,196(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 196);
	// bl 0x82284650
	ctx.lr = 0x820D9418;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x820ee1e0
	ctx.lr = 0x820D942C;
	sub_820EE1E0(ctx, base);
	// b 0x820d9504
	goto loc_820D9504;
loc_820D9430:
	// lhz r25,430(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 430);
	// bl 0x82284650
	ctx.lr = 0x820D9438;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x820ee1e0
	ctx.lr = 0x820D944C;
	sub_820EE1E0(ctx, base);
	// b 0x820d9504
	goto loc_820D9504;
loc_820D9450:
	// lis r8,-32166
	ctx.r8.s64 = -2108030976;
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,334(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r9,r10,9240
	ctx.r9.s64 = ctx.r10.s64 + 9240;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lbz r8,29088(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 29088);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820d94a4
	if (!ctx.cr6.eq) goto loc_820D94A4;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r10,-32312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -32312);
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// eqv r6,r10,r11
	ctx.r6.u64 = ~(ctx.r10.u64 ^ ctx.r11.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// b 0x820d94bc
	goto loc_820D94BC;
loc_820D94A4:
	// mulli r10,r11,9780
	ctx.r10.s64 = ctx.r11.s64 * 9780;
	// addi r7,r9,16
	ctx.r7.s64 = ctx.r9.s64 + 16;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// addi r6,r10,-2
	ctx.r6.s64 = ctx.r10.s64 + -2;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_820D94BC:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d9504
	if (ctx.cr6.eq) goto loc_820D9504;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820d94dc
	if (ctx.cr6.eq) goto loc_820D94DC;
	// mulli r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 * 9780;
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
loc_820D94DC:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// addi r7,r10,40
	ctx.r7.s64 = ctx.r10.s64 + 40;
	// mullw r6,r11,r8
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwzx r5,r6,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lfs f13,280(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_820D9500:
	// stfs f12,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820D9504:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x820d951c
	if (ctx.cr6.eq) goto loc_820D951C;
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,24(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820d9534
	goto loc_820D9534;
loc_820D951C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,6012(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6012);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
loc_820D9534:
	// lfs f11,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lbz r10,1(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 1);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f1,f2
	ctx.f1.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f13,f1,f0,f2
	ctx.f13.f64 = ctx.f1.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f11,f12,f6
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f10,116(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x820d95ac
	if (ctx.cr6.eq) goto loc_820D95AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6008(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6008);
	ctx.f31.f64 = double(temp.f32);
	// b 0x820d95b4
	goto loc_820D95B4;
loc_820D95AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,6004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f31.f64 = double(temp.f32);
loc_820D95B4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822da518
	ctx.lr = 0x820D95C8;
	sub_822DA518(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d4ac8
	ctx.lr = 0x820D95D0;
	sub_822D4AC8(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f11,f13,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f6,f8,f13,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fsqrts f7,f11
	ctx.f7.f64 = double(float(sqrt(ctx.f11.f64)));
	// fmuls f5,f7,f31
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// bge cr6,0x820d9644
	if (!ctx.cr6.lt) goto loc_820D9644;
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,-19400(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -19400);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stb r10,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r10.u8);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820d9688
	if (ctx.cr6.eq) goto loc_820D9688;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// b 0x820d9678
	goto loc_820D9678;
loc_820D9644:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,1(r28)
	PPC_STORE_U8(ctx.r28.u32 + 1, ctx.r11.u8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d50f8
	ctx.lr = 0x820D9658;
	sub_822D50F8(ctx, base);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r11,-19400(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19400);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d9688
	if (ctx.cr6.eq) goto loc_820D9688;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
loc_820D9678:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820eaf18
	ctx.lr = 0x820D9688;
	sub_820EAF18(ctx, base);
loc_820D9688:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9350) {
	__imp__sub_820D9350(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9694) {
	__imp__sub_820D9694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9698) {
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
	ctx.lr = 0x820D96A8;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f13,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// lfs f0,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f28,f13
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D96D8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f28,f12
	ctx.f11.f64 = double(float(ctx.f28.f64 - ctx.f12.f64));
	// fmuls f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820d96fc
	if (!ctx.cr6.gt) goto loc_820D96FC;
	// fadds f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// b 0x820d9714
	goto loc_820D9714;
loc_820D96FC:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820d9710
	if (!ctx.cr6.lt) goto loc_820D9710;
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// b 0x820d9714
	goto loc_820D9714;
loc_820D9710:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
loc_820D9714:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x820D9720;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9698) {
	__imp__sub_820D9698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D972C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D972C) {
	__imp__sub_820D972C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9730) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,17280
	ctx.r9.s64 = ctx.r10.s64 + 17280;
	// rlwinm r8,r4,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820D9730) {
	__imp__sub_820D9730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820D9760;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,19(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 19);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820d98a4
	if (ctx.cr6.eq) goto loc_820D98A4;
	// lbz r11,21(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820d98a4
	if (ctx.cr6.eq) goto loc_820D98A4;
	// lbz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x820d98a4
	if (ctx.cr6.eq) goto loc_820D98A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,6016(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6016);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820d9698
	ctx.lr = 0x820D97B0;
	sub_820D9698(ctx, base);
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820d9698
	ctx.lr = 0x820D97C8;
	sub_820D9698(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822daa18
	ctx.lr = 0x820D97E4;
	sub_822DAA18(ctx, base);
	// lbz r6,21(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// srawi r4,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 5;
	// addi r7,r8,17280
	ctx.r7.s64 = ctx.r8.s64 + 17280;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7C;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r6,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r6.u32);
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r4,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r8,r10,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r7,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r7.u32);
	// lbz r4,21(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// bl 0x822f0278
	ctx.lr = 0x820D983C;
	sub_822F0278(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820d8f88
	ctx.lr = 0x820D984C;
	sub_820D8F88(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r5,21(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// addi r28,r6,-5928
	ctx.r28.s64 = ctx.r6.s64 + -5928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f2400
	ctx.lr = 0x820D986C;
	sub_822F2400(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// bl 0x822f0278
	ctx.lr = 0x820D987C;
	sub_822F0278(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820d8f88
	ctx.lr = 0x820D988C;
	sub_820D8F88(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f2400
	ctx.lr = 0x820D98A4;
	sub_822F2400(ctx, base);
loc_820D98A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9758) {
	__imp__sub_820D9758(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D98AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D98AC) {
	__imp__sub_820D98AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D98B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820D98B8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de01c
	ctx.lr = 0x820D98C0;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lbz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// bne cr6,0x820d98fc
	if (!ctx.cr6.eq) goto loc_820D98FC;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bge cr6,0x820d990c
	if (!ctx.cr6.lt) goto loc_820D990C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x820d9908
	goto loc_820D9908;
loc_820D98FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d990c
	if (ctx.cr6.eq) goto loc_820D990C;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
loc_820D9908:
	// stb r11,2(r30)
	PPC_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
loc_820D990C:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f28,f12,f31
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D9938;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,6036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6036);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f28,f11
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f7,f9,f0,f8
	ctx.f7.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fmuls f28,f7,f31
	ctx.f28.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D996C;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f28,f6
	ctx.f5.f64 = double(float(ctx.f28.f64 - ctx.f6.f64));
	// fmuls f4,f5,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fmuls f28,f1,f31
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D9994;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f28,f13
	ctx.f12.f64 = double(float(ctx.f28.f64 - ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f9,f11,f0,f10
	ctx.f9.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// fmuls f28,f9,f31
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D99C0;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,6028(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6028);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f7,f28,f8
	ctx.f7.f64 = double(float(ctx.f28.f64 - ctx.f8.f64));
	// fmuls f6,f7,f29
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820d9698
	ctx.lr = 0x820D99E4;
	sub_820D9698(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,6024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6024);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820d9698
	ctx.lr = 0x820D99FC;
	sub_820D9698(ctx, base);
	// stfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lis r4,-32191
	ctx.r4.s64 = -2109669376;
	// lfs f2,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,512(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 512);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820d9698
	ctx.lr = 0x820D9A14;
	sub_820D9698(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d9ac8
	if (ctx.cr6.eq) goto loc_820D9AC8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fsubs f11,f0,f28
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f0,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f11,f31
	ctx.f27.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f26,f10,f0
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D9A5C;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfs f25,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fmuls f7,f8,f26
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmadds f6,f7,f29,f28
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f6,0(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f25
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f25.f64));
	// fmuls f28,f4,f31
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D9A88;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f27,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f2,f28,f3
	ctx.f2.f64 = double(float(ctx.f28.f64 - ctx.f3.f64));
	// fmuls f1,f2,f26
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f26.f64));
	// fmadds f0,f1,f29,f25
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64 + ctx.f25.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// fmuls f31,f12,f31
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x820D9AB4;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f26
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f26.f64));
	// fmadds f8,f9,f29,f27
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f27.f64));
	// stfs f8,8(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_820D9AC8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822daa18
	ctx.lr = 0x820D9AD4;
	sub_822DAA18(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r4,19(r27)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + 19);
	// bl 0x822f0278
	ctx.lr = 0x820D9AE4;
	sub_822F0278(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820d8f88
	ctx.lr = 0x820D9AF4;
	sub_820D8F88(ctx, base);
	// lbz r10,19(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 19);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// srawi r8,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 5;
	// addi r5,r9,17280
	ctx.r5.s64 = ctx.r9.s64 + 17280;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r30,28
	ctx.r6.s64 = ctx.r30.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// or r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r5,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r5.u32);
	// lbz r5,19(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 19);
	// bl 0x822f2400
	ctx.lr = 0x820D9B34;
	sub_822F2400(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de068
	ctx.lr = 0x820D9B40;
	__restfpr_25(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D98B0) {
	__imp__sub_820D98B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9B44) {
	__imp__sub_820D9B44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820D9B50;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r5,70(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 70);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 + 52;
	// bl 0x820eddf0
	ctx.lr = 0x820D9B74;
	sub_820EDDF0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d9618
	ctx.lr = 0x820D9B80;
	sub_822D9618(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// bl 0x822f0278
	ctx.lr = 0x820D9B90;
	sub_822F0278(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6a08
	ctx.lr = 0x820D9B9C;
	sub_822D6A08(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820d8f88
	ctx.lr = 0x820D9BAC;
	sub_820D8F88(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6a38
	ctx.lr = 0x820D9BB8;
	sub_822D6A38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d7c78
	ctx.lr = 0x820D9BC4;
	sub_822D7C78(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9B48) {
	__imp__sub_820D9B48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9BCC) {
	__imp__sub_820D9BCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820D9BD8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de010
	ctx.lr = 0x820D9BE0;
	__savefpr_22(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lbz r4,70(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// bl 0x822f0278
	ctx.lr = 0x820D9C08;
	sub_822F0278(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,71(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x822f0278
	ctx.lr = 0x820D9C18;
	sub_822F0278(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// lbz r5,71(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820eddf0
	ctx.lr = 0x820D9C30;
	sub_820EDDF0(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d9618
	ctx.lr = 0x820D9C3C;
	sub_822D9618(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6a08
	ctx.lr = 0x820D9C48;
	sub_822D6A08(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820d8f88
	ctx.lr = 0x820D9C58;
	sub_820D8F88(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x822d6a38
	ctx.lr = 0x820D9C64;
	sub_822D6A38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d7c78
	ctx.lr = 0x820D9C70;
	sub_822D7C78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2388
	ctx.lr = 0x820D9C78;
	sub_822F2388(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r4,71(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// bl 0x822f1db0
	ctx.lr = 0x820D9C84;
	sub_822F1DB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x820D9C8C;
	sub_822F23E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f19e8
	ctx.lr = 0x820D9C94;
	sub_822F19E8(ctx, base);
	// lbz r11,70(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 70);
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r29,r3,r10
	ctx.r29.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f19e8
	ctx.lr = 0x820D9CA8;
	sub_822F19E8(ctx, base);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,71(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rotlwi r7,r9,5
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 5);
	// add r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lfs f31,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f5,f7,f9
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fmuls f3,f0,f8
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f4,f12,f8
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f2,f7,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f7,f0,f11
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fadds f13,f5,f3
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f3.f64));
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f12,f4,f6
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f11,f6,f4
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f10,f3,f5
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fadds f4,f9,f8
	ctx.f4.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fadds f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// fadds f7,f1,f2
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f9,f31,f6
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f6,f31,f4
	ctx.f6.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// stfs f6,112(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fsubs f8,f31,f5
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f5.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f3,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f10,f3,f10,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fnmadds f9,f2,f9,f10
	ctx.f9.f64 = double(float(-(ctx.f2.f64 * ctx.f9.f64 + ctx.f10.f64)));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f5,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmadds f1,f5,f7,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fnmadds f12,f4,f12,f1
	ctx.f12.f64 = double(float(-(ctx.f4.f64 * ctx.f12.f64 + ctx.f1.f64)));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f11,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmadds f7,f11,f6,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fnmadds f6,f10,f13,f7
	ctx.f6.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64)));
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x820D9DB8;
	sub_822D67F0(ctx, base);
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// lfs f12,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f11,f7
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fmuls f29,f10,f11
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f2,f0,f5
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f1,f8,f4
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fmuls f6,f9,f5
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f5,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f27,f9,f4
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmuls f28,f9,f3
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmuls f4,f0,f4
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f26,f0,f3
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f3
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f25,f13,f11
	ctx.f25.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f24,f7,f30
	ctx.f24.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// stfs f12,228(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fadds f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmuls f23,f10,f29
	ctx.f23.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fadds f8,f6,f5
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fsubs f5,f5,f6
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f22,f10,f30
	ctx.f22.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fsubs f7,f4,f28
	ctx.f7.f64 = double(float(ctx.f4.f64 - ctx.f28.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fadds f3,f28,f4
	ctx.f3.f64 = double(float(ctx.f28.f64 + ctx.f4.f64));
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsubs f9,f26,f27
	ctx.f9.f64 = double(float(ctx.f26.f64 - ctx.f27.f64));
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fadds f6,f26,f27
	ctx.f6.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f28,f13,f25
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// fsubs f4,f31,f11
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// lfs f0,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f11,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f12,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f26,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f27,f13,f30
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f26,236(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// fmuls f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fsubs f2,f31,f10
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f12,f28,f23
	ctx.f12.f64 = double(float(ctx.f28.f64 + ctx.f23.f64));
	// lfs f10,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f11,f7,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f7,f11,f6,f4
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsubs f1,f31,f1
	ctx.f1.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fadds f6,f23,f24
	ctx.f6.f64 = double(float(ctx.f23.f64 + ctx.f24.f64));
	// fadds f28,f28,f24
	ctx.f28.f64 = double(float(ctx.f28.f64 + ctx.f24.f64));
	// fadds f4,f13,f30
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmadds f9,f11,f2,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fsubs f2,f27,f29
	ctx.f2.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// stfs f2,200(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f11,f0,f22
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
	// stfs f11,196(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fsubs f4,f31,f12
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// stfs f4,192(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f2,f22,f0
	ctx.f2.f64 = double(float(ctx.f22.f64 - ctx.f0.f64));
	// stfs f2,204(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fnmadds f12,f10,f1,f8
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f1.f64 + ctx.f8.f64)));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fnmadds f11,f10,f5,f7
	ctx.f11.f64 = double(float(-(ctx.f10.f64 * ctx.f5.f64 + ctx.f7.f64)));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fsubs f8,f13,f30
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f8,220(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fsubs f7,f31,f6
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f6.f64));
	// stfs f7,224(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fnmadds f0,f10,f3,f9
	ctx.f0.f64 = double(float(-(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64)));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fsubs f10,f31,f28
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// stfs f10,208(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fadds f9,f29,f27
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// stfs f9,216(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x820D9F4C;
	sub_822D60B8(ctx, base);
	// lfs f6,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,392(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 - ctx.f3.f64));
	// lfs f0,396(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f5,f2
	ctx.f13.f64 = double(float(ctx.f5.f64 - ctx.f2.f64));
	// fsubs f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f13,4(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de05c
	ctx.lr = 0x820D9F88;
	__restfpr_22(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9BD0) {
	__imp__sub_820D9BD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820D9F8C) {
	__imp__sub_820D9F8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820D9F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820D9F98;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x820D9FA0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x820d9ff8
	if (!ctx.cr6.gt) goto loc_820D9FF8;
loc_820D9FE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x820D9FF4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820D9FF8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r28,r11,r4
	ctx.r28.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lfs f30,2420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// lfs f29,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
loc_820DA01C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r28,r31
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmuls f28,f12,f30
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fadds f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f31.f64));
	// bl 0x823dde20
	ctx.lr = 0x820DA034;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f28,f11
	ctx.f10.f64 = double(float(ctx.f28.f64 - ctx.f11.f64));
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fabs f8,f9
	ctx.f8.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f8,f31
	ctx.cr6.compare(ctx.f8.f64, ctx.f31.f64);
	// bgt cr6,0x820d9fe4
	if (ctx.cr6.gt) goto loc_820D9FE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// blt cr6,0x820da01c
	if (ctx.cr6.lt) goto loc_820DA01C;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x820DA074;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820D9F90) {
	__imp__sub_820D9F90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA078) {
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
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822daa18
	ctx.lr = 0x820DA0A0;
	sub_822DAA18(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822daa18
	ctx.lr = 0x820DA0AC;
	sub_822DAA18(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,6040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6cb8
	ctx.lr = 0x820DA0C4;
	sub_822D6CB8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d6a38
	ctx.lr = 0x820DA0D0;
	sub_822D6A38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7c78
	ctx.lr = 0x820DA0DC;
	sub_822D7C78(ctx, base);
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

PPC_WEAK_FUNC(sub_820DA078) {
	__imp__sub_820DA078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DA0F4) {
	__imp__sub_820DA0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820DA100;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,69(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-255
	ctx.r11.s64 = ctx.r11.s64 + -255;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r26,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r26.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x820d9288
	ctx.lr = 0x820DA124;
	sub_820D9288(ctx, base);
	// lbz r9,69(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 69);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// beq cr6,0x820da304
	if (ctx.cr6.eq) goto loc_820DA304;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r5,r29,18
	ctx.r5.s64 = ctx.r29.s64 + 18;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,430(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 430);
	// bl 0x822efc98
	ctx.lr = 0x820DA148;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da304
	if (ctx.cr6.eq) goto loc_820DA304;
	// addi r5,r29,19
	ctx.r5.s64 = ctx.r29.s64 + 19;
	// lhz r4,428(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x820DA160;
	sub_822EFC98(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da304
	if (ctx.cr6.eq) goto loc_820DA304;
	// addi r5,r29,20
	ctx.r5.s64 = ctx.r29.s64 + 20;
	// lhz r4,458(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 458);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822efc98
	ctx.lr = 0x820DA178;
	sub_822EFC98(ctx, base);
	// addi r5,r29,21
	ctx.r5.s64 = ctx.r29.s64 + 21;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,460(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 460);
	// bl 0x822efc98
	ctx.lr = 0x820DA188;
	sub_822EFC98(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d9b48
	ctx.lr = 0x820DA198;
	sub_820D9B48(ctx, base);
	// lbz r11,17(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// addi r9,r9,-19392
	ctx.r9.s64 = ctx.r9.s64 + -19392;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,2
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 2, ctx.xer);
	// bne cr6,0x820da254
	if (!ctx.cr6.eq) goto loc_820DA254;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x820da23c
	if (ctx.cr6.eq) goto loc_820DA23C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d9bd0
	ctx.lr = 0x820DA1DC;
	sub_820D9BD0(ctx, base);
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// fmadds f8,f11,f0,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmadds f5,f6,f0,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f5,32(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f4.f64));
	// fmadds f2,f3,f0,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f2,36(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// bl 0x820d9f90
	ctx.lr = 0x820DA234;
	sub_820D9F90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da28c
	if (ctx.cr6.eq) goto loc_820DA28C;
loc_820DA23C:
	// li r11,255
	ctx.r11.s64 = 255;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,17(r29)
	PPC_STORE_U8(ctx.r29.u32 + 17, ctx.r11.u8);
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DA254:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x820da278
	if (!ctx.cr6.eq) goto loc_820DA278;
	// li r11,10
	ctx.r11.s64 = 10;
	// addi r6,r31,28
	ctx.r6.s64 = ctx.r31.s64 + 28;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// addi r5,r31,4
	ctx.r5.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d9bd0
	ctx.lr = 0x820DA278;
	sub_820D9BD0(ctx, base);
loc_820DA278:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d9350
	ctx.lr = 0x820DA28C;
	sub_820D9350(ctx, base);
loc_820DA28C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da078
	ctx.lr = 0x820DA298;
	sub_820DA078(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x822f2388
	ctx.lr = 0x820DA2B4;
	sub_822F2388(ctx, base);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d98b0
	ctx.lr = 0x820DA2D0;
	sub_820D98B0(ctx, base);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820d9758
	ctx.lr = 0x820DA2E8;
	sub_820D9758(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x820DA2F0;
	sub_822F23E0(ctx, base);
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,196(r27)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r27.u32 + 196);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x820DA304;
	sub_820EE1E0(ctx, base);
loc_820DA304:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DA0F8) {
	__imp__sub_820DA0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DA30C) {
	__imp__sub_820DA30C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DA318;
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
	ctx.lr = 0x820DA330;
	sub_82284650(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820da480
	if (ctx.cr6.eq) goto loc_820DA480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9148
	ctx.lr = 0x820DA344;
	sub_820D9148(ctx, base);
	// lbz r11,297(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 297);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da3a4
	if (ctx.cr6.eq) goto loc_820DA3A4;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// ble cr6,0x820da39c
	if (!ctx.cr6.gt) goto loc_820DA39C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,6052(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6052);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x820da39c
	if (!ctx.cr6.lt) goto loc_820DA39C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,6048(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f13,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,36(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_820DA39C:
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
loc_820DA3A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f13,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lfs f12,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f11,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,6044(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6044);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x820da3e8
	if (ctx.cr6.eq) goto loc_820DA3E8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820da3e8
	if (ctx.cr6.eq) goto loc_820DA3E8;
	// bl 0x8228cd50
	ctx.lr = 0x820DA3E8;
	sub_8228CD50(ctx, base);
loc_820DA3E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da0f8
	ctx.lr = 0x820DA3F4;
	sub_820DA0F8(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820da410
	if (!ctx.cr6.eq) goto loc_820DA410;
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x822f1d08
	ctx.lr = 0x820DA410;
	sub_822F1D08(ctx, base);
loc_820DA410:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// rlwinm r9,r11,0,22,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// ori r6,r9,260
	ctx.r6.u64 = ctx.r9.u64 | 260;
	// bl 0x82386568
	ctx.lr = 0x820DA43C;
	sub_82386568(ctx, base);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r7,r8,0,5,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FF8000;
	// rlwinm r7,r7,0,16,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFC00FFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820da460
	if (!ctx.cr6.eq) goto loc_820DA460;
	// bl 0x820f5738
	ctx.lr = 0x820DA454;
	sub_820F5738(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da46c
	if (ctx.cr6.eq) goto loc_820DA46C;
loc_820DA460:
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r4,126(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x820f5c00
	ctx.lr = 0x820DA46C;
	sub_820F5C00(ctx, base);
loc_820DA46C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x820da480
	if (!ctx.cr6.eq) goto loc_820DA480;
	// lhz r3,126(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// bl 0x820e1410
	ctx.lr = 0x820DA480;
	sub_820E1410(ctx, base);
loc_820DA480:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DA310) {
	__imp__sub_820DA310(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA488) {
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r7,-2280
	ctx.r6.s64 = ctx.r7.s64 + -2280;
	// lfs f0,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f13,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x820eaf30
	ctx.lr = 0x820DA4E0;
	sub_820EAF30(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DA488) {
	__imp__sub_820DA488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA4F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da514
	if (ctx.cr6.eq) goto loc_820DA514;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da514
	if (ctx.cr6.eq) goto loc_820DA514;
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_820DA514:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,544
	ctx.r11.s64 = ctx.r3.s64 + 544;
loc_820DA51C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820da540
	if (ctx.cr6.eq) goto loc_820DA540;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820da51c
	if (ctx.cr6.lt) goto loc_820DA51C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_820DA540:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DA4F0) {
	__imp__sub_820DA4F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA548) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820da594
	if (ctx.cr6.eq) goto loc_820DA594;
	// bl 0x820da4f0
	ctx.lr = 0x820DA568;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820da594
	if (ctx.cr6.lt) goto loc_820DA594;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,604
	ctx.r3.s64 = ctx.r11.s64 + 604;
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
loc_820DA594:
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

PPC_WEAK_FUNC(sub_820DA548) {
	__imp__sub_820DA548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DA5AC) {
	__imp__sub_820DA5AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA5B0) {
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
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da5f8
	if (ctx.cr6.eq) goto loc_820DA5F8;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da5f8
	if (ctx.cr6.eq) goto loc_820DA5F8;
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
loc_820DA5F8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820da62c
	if (ctx.cr6.eq) goto loc_820DA62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da4f0
	ctx.lr = 0x820DA608;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820da62c
	if (ctx.cr6.lt) goto loc_820DA62C;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820da630
	if (!ctx.cr6.eq) goto loc_820DA630;
loc_820DA62C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DA630:
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

PPC_WEAK_FUNC(sub_820DA5B0) {
	__imp__sub_820DA5B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DA644) {
	__imp__sub_820DA644(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA648) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820da6a0
	if (ctx.cr6.eq) goto loc_820DA6A0;
	// bl 0x820da4f0
	ctx.lr = 0x820DA668;
	sub_820DA4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820da6a0
	if (ctx.cr6.lt) goto loc_820DA6A0;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da6a0
	if (ctx.cr6.eq) goto loc_820DA6A0;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
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
loc_820DA6A0:
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

PPC_WEAK_FUNC(sub_820DA648) {
	__imp__sub_820DA648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA6B8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DA6DC;
	sub_82332AF8(ctx, base);
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
loc_820DA6E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820da720
	if (ctx.cr6.eq) goto loc_820DA720;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820da6e8
	if (ctx.cr6.lt) goto loc_820DA6E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DA708:
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
loc_820DA720:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x820da708
	goto loc_820DA708;
}

PPC_WEAK_FUNC(sub_820DA6B8) {
	__imp__sub_820DA6B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA730) {
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
	// bl 0x823319d8
	ctx.lr = 0x820DA74C;
	sub_823319D8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,728
	ctx.r11.s64 = ctx.r31.s64 + 728;
loc_820DA754:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x820da788
	if (ctx.cr6.eq) goto loc_820DA788;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820da754
	if (ctx.cr6.lt) goto loc_820DA754;
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
loc_820DA788:
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
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

PPC_WEAK_FUNC(sub_820DA730) {
	__imp__sub_820DA730(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA7A0) {
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
	ctx.lr = 0x820DA7C4;
	sub_82332AF8(ctx, base);
	// lbz r11,1639(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1639);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820da7e8
	if (ctx.cr6.eq) goto loc_820DA7E8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332008
	ctx.lr = 0x820DA7DC;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x820da7ec
	if (ctx.cr6.eq) goto loc_820DA7EC;
loc_820DA7E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DA7EC:
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

PPC_WEAK_FUNC(sub_820DA7A0) {
	__imp__sub_820DA7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DA804) {
	__imp__sub_820DA804(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DA808) {
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
	ctx.lr = 0x820DA818;
	__savefpr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,7096
	ctx.r6.s64 = ctx.r11.s64 + 7096;
	// addi r3,r10,7080
	ctx.r3.s64 = ctx.r10.s64 + 7080;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820DA838;
	sub_822E15D0(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r6,r8,7056
	ctx.r6.s64 = ctx.r8.s64 + 7056;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r3,-30324(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30324, ctx.r3.u32);
	// addi r3,r7,7040
	ctx.r3.s64 = ctx.r7.s64 + 7040;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820DA85C;
	sub_822E15D0(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r3,-30356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30356, ctx.r3.u32);
	// addi r9,r11,7000
	ctx.r9.s64 = ctx.r11.s64 + 7000;
	// lfs f31,7036(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7036);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r10,6976
	ctx.r3.s64 = ctx.r10.s64 + 6976;
	// lfs f28,6048(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6048);
	ctx.f28.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822e1890
	ctx.lr = 0x820DA89C;
	sub_822E1890(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,-30316(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30316, ctx.r3.u32);
	// addi r9,r7,6940
	ctx.r9.s64 = ctx.r7.s64 + 6940;
	// lfs f30,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r6,6916
	ctx.r3.s64 = ctx.r6.s64 + 6916;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822e1890
	ctx.lr = 0x820DA8D4;
	sub_822E1890(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,-30320(r5)
	PPC_STORE_U32(ctx.r5.u32 + -30320, ctx.r3.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r3,r7,6884
	ctx.r3.s64 = ctx.r7.s64 + 6884;
	// lfs f27,6912(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6912);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,6824
	ctx.r8.s64 = ctx.r9.s64 + 6824;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6908(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6908);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DA914;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,6720
	ctx.r8.s64 = ctx.r4.s64 + 6720;
	// stw r3,-30348(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30348, ctx.r3.u32);
	// addi r3,r11,6692
	ctx.r3.s64 = ctx.r11.s64 + 6692;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,6820(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6820);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DA944;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r3,-30332(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30332, ctx.r3.u32);
	// addi r3,r7,6560
	ctx.r3.s64 = ctx.r7.s64 + 6560;
	// lfs f2,6688(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6688);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r8,6584
	ctx.r8.s64 = ctx.r8.s64 + 6584;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DA974;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r9,r4,6500
	ctx.r9.s64 = ctx.r4.s64 + 6500;
	// stw r3,-30360(r6)
	PPC_STORE_U32(ctx.r6.u32 + -30360, ctx.r3.u32);
	// addi r3,r11,6468
	ctx.r3.s64 = ctx.r11.s64 + 6468;
	// lfs f29,6032(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6032);
	ctx.f29.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1890
	ctx.lr = 0x820DA9AC;
	sub_822E1890(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r9,r9,6380
	ctx.r9.s64 = ctx.r9.s64 + 6380;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r3,-30336(r10)
	PPC_STORE_U32(ctx.r10.u32 + -30336, ctx.r3.u32);
	// addi r3,r8,6436
	ctx.r3.s64 = ctx.r8.s64 + 6436;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x822e1890
	ctx.lr = 0x820DA9DC;
	sub_822E1890(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f28.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r9,r5,6332
	ctx.r9.s64 = ctx.r5.s64 + 6332;
	// stw r3,-30344(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30344, ctx.r3.u32);
	// addi r3,r4,6304
	ctx.r3.s64 = ctx.r4.s64 + 6304;
	// lfs f31,5880(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5880);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x822e1890
	ctx.lr = 0x820DAA14;
	sub_822E1890(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r9,r10,6236
	ctx.r9.s64 = ctx.r10.s64 + 6236;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r3,-30352(r11)
	PPC_STORE_U32(ctx.r11.u32 + -30352, ctx.r3.u32);
	// addi r3,r8,6276
	ctx.r3.s64 = ctx.r8.s64 + 6276;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x822e1890
	ctx.lr = 0x820DAA44;
	sub_822E1890(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// stw r3,-30340(r7)
	PPC_STORE_U32(ctx.r7.u32 + -30340, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de070
	ctx.lr = 0x820DAA58;
	__restfpr_27(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DA808) {
	__imp__sub_820DA808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAA64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DAA64) {
	__imp__sub_820DAA64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAA68) {
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
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lfs f8,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x821202c8
	ctx.lr = 0x820DAA98;
	sub_821202C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DAA68) {
	__imp__sub_820DAA68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DAAB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r30,r5,4
	ctx.r30.s64 = ctx.r5.s64 + 4;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lbz r29,17(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lbz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DAAD8;
	sub_82141160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// bl 0x82140bc8
	ctx.lr = 0x820DAAF4;
	sub_82140BC8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DAAA8) {
	__imp__sub_820DAAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DAAFC) {
	__imp__sub_820DAAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAB00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,18632
	ctx.r10.u64 = ctx.r11.u64 | 18632;
	// lwzx r30,r3,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// bl 0x82332c40
	ctx.lr = 0x820DAB28;
	sub_82332C40(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820dab50
	if (!ctx.cr6.lt) goto loc_820DAB50;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820da5b0
	ctx.lr = 0x820DAB40;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dab50
	if (ctx.cr6.eq) goto loc_820DAB50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820dab5c
	goto loc_820DAB5C;
loc_820DAB50:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23616
	ctx.r10.u64 = ctx.r11.u64 | 23616;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_820DAB5C:
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

PPC_WEAK_FUNC(sub_820DAB00) {
	__imp__sub_820DAB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DAB74) {
	__imp__sub_820DAB74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAB78) {
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
	ctx.lr = 0x820DAB9C;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820dabb8
	if (!ctx.cr6.eq) goto loc_820DABB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82119a30
	ctx.lr = 0x820DABB4;
	sub_82119A30(ctx, base);
	// b 0x820dac30
	goto loc_820DAC30;
loc_820DABB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x820DABC0;
	sub_82332B10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dabf0
	if (!ctx.cr6.eq) goto loc_820DABF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x820DABD8;
	sub_82332B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7224
	ctx.r4.s64 = ctx.r11.s64 + 7224;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280c30
	ctx.lr = 0x820DABEC;
	sub_82280C30(ctx, base);
	// b 0x820dac2c
	goto loc_820DAC2C;
loc_820DABF0:
	// bl 0x82332af8
	ctx.lr = 0x820DABF4;
	sub_82332AF8(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x820dac30
	if (!ctx.cr6.eq) goto loc_820DAC30;
	// bl 0x82332b28
	ctx.lr = 0x820DAC08;
	sub_82332B28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x820DAC14;
	sub_82332B28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7120
	ctx.r4.s64 = ctx.r11.s64 + 7120;
	// li r3,17
	ctx.r3.s64 = 17;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82280c30
	ctx.lr = 0x820DAC2C;
	sub_82280C30(ctx, base);
loc_820DAC2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DAC30:
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

PPC_WEAK_FUNC(sub_820DAB78) {
	__imp__sub_820DAB78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAC48) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820dac74
	if (!ctx.cr6.eq) goto loc_820DAC74;
loc_820DAC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820daca4
	goto loc_820DACA4;
loc_820DAC74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DAC7C;
	sub_82332AF8(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820dac6c
	if (ctx.cr6.eq) goto loc_820DAC6C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820dac98
	if (ctx.cr6.eq) goto loc_820DAC98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820daca4
	goto loc_820DACA4;
loc_820DAC98:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dab78
	ctx.lr = 0x820DACA4;
	sub_820DAB78(ctx, base);
loc_820DACA4:
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

PPC_WEAK_FUNC(sub_820DAC48) {
	__imp__sub_820DAC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DACBC) {
	__imp__sub_820DACBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DACC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820fc428
	ctx.lr = 0x820DACE8;
	sub_820FC428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r8,r10,18576
	ctx.r8.u64 = ctx.r10.u64 | 18576;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// beq cr6,0x820dada8
	if (ctx.cr6.eq) goto loc_820DADA8;
	// lwzx r5,r30,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// lwzx r4,r30,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// subf r3,r4,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r4.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,516(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 516);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5816(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5816);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x820DAD40;
	sub_823DE720(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r9,6080
	ctx.r7.s64 = ctx.r9.s64 + 6080;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7036(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7036);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f5,f12,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f8.f64));
	// fadds f4,f10,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fsubs f3,f12,f7
	ctx.f3.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmuls f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f1,f6,f2,f9
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f5,f2,f8
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f13,f3,f2,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f7.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x820dadb0
	goto loc_820DADB0;
loc_820DADA8:
	// lwzx r7,r30,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
loc_820DADB0:
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

PPC_WEAK_FUNC(sub_820DACC0) {
	__imp__sub_820DACC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DADC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x820DADD0;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de01c
	ctx.lr = 0x820DADD8;
	__savefpr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r23,r23,22924
	ctx.r23.s64 = ctx.r23.s64 + 22924;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fnmsubs f27,f12,f0,f13
	ctx.f27.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x820da6b8
	ctx.lr = 0x820DAE24;
	sub_820DA6B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dacc0
	ctx.lr = 0x820DAE3C;
	sub_820DACC0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823340b0
	ctx.lr = 0x820DAE48;
	sub_823340B0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 10, ctx.xer);
	// bne cr6,0x820dae6c
	if (!ctx.cr6.eq) goto loc_820DAE6C;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f30,f12
	ctx.f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x820dae74
	goto loc_820DAE74;
loc_820DAE6C:
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
loc_820DAE74:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x820daf4c
	if (!ctx.cr6.gt) goto loc_820DAF4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6080
	ctx.r9.s64 = ctx.r11.s64 + 6080;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f28,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f28.f64 = double(temp.f32);
	// lfs f25,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f25.f64 = double(temp.f32);
	// lfs f29,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f26.f64 = double(temp.f32);
loc_820DAEA4:
	// cmpw cr6,r30,r25
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x820daebc
	if (!ctx.cr6.eq) goto loc_820DAEBC;
	// stfs f26,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f26,4(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f26,8(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f25,12(r29)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_820DAEBC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820daf08
	if (ctx.cr6.eq) goto loc_820DAF08;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divw r10,r30,r11
	ctx.r10.s32 = ctx.r30.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820daf08
	if (!ctx.cr0.eq) goto loc_820DAF08;
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 10, ctx.xer);
	// bne cr6,0x820daef8
	if (!ctx.cr6.eq) goto loc_820DAEF8;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f30,f12
	ctx.f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x820daf00
	goto loc_820DAF00;
loc_820DAEF8:
	// lfs f31,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
loc_820DAF00:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f0,f27
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
loc_820DAF08:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f4,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f8,f28
	ctx.f8.f64 = ctx.f28.f64;
	// fmr f7,f28
	ctx.f7.f64 = ctx.f28.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821202c8
	ctx.lr = 0x820DAF3C;
	sub_821202C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x820daea4
	if (ctx.cr6.lt) goto loc_820DAEA4;
loc_820DAF4C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de068
	ctx.lr = 0x820DAF58;
	__restfpr_25(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DADC8) {
	__imp__sub_820DADC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DAF5C) {
	__imp__sub_820DAF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DAF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x820DAF68;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de018
	ctx.lr = 0x820DAF70;
	__savefpr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r23,r3,1
	ctx.r23.s64 = ctx.r3.s64 + 65536;
	// lfs f31,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r23,r23,22924
	ctx.r23.s64 = ctx.r23.s64 + 22924;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x823340b0
	ctx.lr = 0x820DAFA8;
	sub_823340B0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// divw r9,r3,r11
	ctx.r9.s32 = ctx.r3.s32 / ctx.r11.s32;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f29,f8,f0,f12
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x820da6b8
	ctx.lr = 0x820DAFEC;
	sub_820DA6B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dacc0
	ctx.lr = 0x820DB004;
	sub_820DACC0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823340b0
	ctx.lr = 0x820DB010;
	sub_823340B0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// bne cr6,0x820db024
	if (!ctx.cr6.eq) goto loc_820DB024;
	// lfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// b 0x820db02c
	goto loc_820DB02C;
loc_820DB024:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820DB02C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x820db0e4
	if (!ctx.cr6.gt) goto loc_820DB0E4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6080
	ctx.r9.s64 = ctx.r11.s64 + 6080;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f27,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// lfs f24,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f24.f64 = double(temp.f32);
	// lfs f28,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lfs f25,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f25.f64 = double(temp.f32);
	// lfs f26,6032(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6032);
	ctx.f26.f64 = double(temp.f32);
loc_820DB064:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x820db07c
	if (!ctx.cr6.eq) goto loc_820DB07C;
	// stfs f26,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// stfs f26,4(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f26,8(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f24,12(r29)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_820DB07C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// divw r10,r30,r11
	ctx.r10.s32 = ctx.r30.s32 / ctx.r11.s32;
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf. r8,r9,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x820db0a0
	if (!ctx.cr0.eq) goto loc_820DB0A0;
	// fmuls f30,f30,f25
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f31,f30,f31
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
loc_820DB0A0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f4,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bl 0x821202c8
	ctx.lr = 0x820DB0D4;
	sub_821202C8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fadds f31,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x820db064
	if (ctx.cr6.lt) goto loc_820DB064;
loc_820DB0E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x823de064
	ctx.lr = 0x820DB0F0;
	__restfpr_24(ctx, base);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DAF60) {
	__imp__sub_820DAF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DB0F4) {
	__imp__sub_820DB0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820DB100;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DB124;
	sub_82332AF8(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820db208
	if (ctx.cr6.gt) goto loc_820DB208;
loc_820DB134:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820db184
	if (ctx.cr6.eq) goto loc_820DB184;
	// bdz 0x820db194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820DB194;
	// bdz 0x820db1a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820DB1A4;
	// bdz 0x820db1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820DB1E4;
	// bdz 0x820db1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820DB1B4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dab78
	ctx.lr = 0x820DB15C;
	sub_820DAB78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db208
	if (ctx.cr6.eq) goto loc_820DB208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DB16C;
	sub_82332AF8(ctx, base);
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x820db134
	if (!ctx.cr6.gt) goto loc_820DB134;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB184:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r9,r11,-72
	ctx.r9.s64 = ctx.r11.s64 + -72;
	// b 0x820db1ec
	goto loc_820DB1EC;
loc_820DB194:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r9,r11,-48
	ctx.r9.s64 = ctx.r11.s64 + -48;
	// b 0x820db1ec
	goto loc_820DB1EC;
loc_820DB1A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// addi r9,r11,-24
	ctx.r9.s64 = ctx.r11.s64 + -24;
	// b 0x820db1ec
	goto loc_820DB1EC;
loc_820DB1B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r11,r11,6184
	ctx.r11.s64 = ctx.r11.s64 + 6184;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820daf60
	ctx.lr = 0x820DB1DC;
	sub_820DAF60(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB1E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r11,6184
	ctx.r9.s64 = ctx.r11.s64 + 6184;
loc_820DB1EC:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dadc8
	ctx.lr = 0x820DB208;
	sub_820DADC8(ctx, base);
loc_820DB208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DB0F8) {
	__imp__sub_820DB0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820DB218;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r8,172(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r6,r8,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820db378
	if (!ctx.cr6.eq) goto loc_820DB378;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// beq cr6,0x820db378
	if (ctx.cr6.eq) goto loc_820DB378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dab00
	ctx.lr = 0x820DB2A4;
	sub_820DAB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dac48
	ctx.lr = 0x820DB2B0;
	sub_820DAC48(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820db378
	if (ctx.cr6.eq) goto loc_820DB378;
	// bl 0x82332af8
	ctx.lr = 0x820DB2C0;
	sub_82332AF8(ctx, base);
	// lbz r11,1640(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820db378
	if (!ctx.cr6.eq) goto loc_820DB378;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332248
	ctx.lr = 0x820DB2D8;
	sub_82332248(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc340
	ctx.lr = 0x820DB2E8;
	sub_820FC340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db314
	if (ctx.cr6.eq) goto loc_820DB314;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6080
	ctx.r9.s64 = ctx.r11.s64 + 6080;
	// lfs f13,7036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_820DB314:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,7320
	ctx.r5.s64 = ctx.r11.s64 + 7320;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e8368
	ctx.lr = 0x820DB32C;
	sub_822E8368(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r31,17(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lfs f30,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// lbz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f29,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820DB344;
	sub_82141160(ctx, base);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820DB378;
	sub_822C1CE8(ctx, base);
loc_820DB378:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

PPC_WEAK_FUNC(sub_820DB210) {
	__imp__sub_820DB210(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DB38C) {
	__imp__sub_820DB38C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB390) {
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dab00
	ctx.lr = 0x820DB3C0;
	sub_820DAB00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dac48
	ctx.lr = 0x820DB3CC;
	sub_820DAC48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820db3ec
	if (!ctx.cr6.eq) goto loc_820DB3EC;
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
loc_820DB3EC:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x82332248
	ctx.lr = 0x820DB3F8;
	sub_82332248(ctx, base);
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

PPC_WEAK_FUNC(sub_820DB390) {
	__imp__sub_820DB390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DB40C) {
	__imp__sub_820DB40C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820DB418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82332b10
	ctx.lr = 0x820DB43C;
	sub_82332B10(ctx, base);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820db4d0
	if (!ctx.cr6.eq) goto loc_820DB4D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// blt cr6,0x820db488
	if (ctx.cr6.lt) goto loc_820DB488;
	// beq cr6,0x820db47c
	if (ctx.cr6.eq) goto loc_820DB47C;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x820db4a4
	goto loc_820DB4A4;
loc_820DB47C:
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// b 0x820db490
	goto loc_820DB490;
loc_820DB488:
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
loc_820DB490:
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820DB4A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,0(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB4D0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820db590
	if (!ctx.cr6.eq) goto loc_820DB590;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x820db54c
	if (ctx.cr6.lt) goto loc_820DB54C;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x820db518
	if (ctx.cr6.eq) goto loc_820DB518;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB518:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB54C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f11,f12,f0,f13
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DB590:
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
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DB410) {
	__imp__sub_820DB410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB5B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DB5C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82332b10
	ctx.lr = 0x820DB5DC;
	sub_82332B10(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,7328(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f7,0(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820db628
	if (ctx.cr6.eq) goto loc_820DB628;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820db654
	if (!ctx.cr6.eq) goto loc_820DB654;
loc_820DB628:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bne cr6,0x820db654
	if (!ctx.cr6.eq) goto loc_820DB654;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820DB654:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DB5B8) {
	__imp__sub_820DB5B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DB65C) {
	__imp__sub_820DB65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB660) {
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
	// addi r8,r4,268
	ctx.r8.s64 = ctx.r4.s64 + 268;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// lwzx r9,r7,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820db704
	if (ctx.cr6.eq) goto loc_820DB704;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x820db6d4
	if (ctx.cr6.eq) goto loc_820DB6D4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820db728
	if (!ctx.cr6.eq) goto loc_820DB728;
	// bl 0x82114560
	ctx.lr = 0x820DB6B4;
	sub_82114560(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820db728
	if (ctx.cr6.eq) goto loc_820DB728;
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
loc_820DB6D4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18632
	ctx.r9.u64 = ctx.r10.u64 | 18632;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82332af8
	ctx.lr = 0x820DB6E4;
	sub_82332AF8(ctx, base);
	// lwz r8,56(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x820db728
	if (!ctx.cr6.eq) goto loc_820DB728;
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
loc_820DB704:
	// addi r9,r4,272
	ctx.r9.s64 = ctx.r4.s64 + 272;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r6,r8,18632
	ctx.r6.u64 = ctx.r8.u64 | 18632;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r5,r7,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r4,r11,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x820db72c
	if (ctx.cr6.eq) goto loc_820DB72C;
loc_820DB728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DB72C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DB660) {
	__imp__sub_820DB660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DB73C) {
	__imp__sub_820DB73C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB740) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// addi r9,r9,-15680
	ctx.r9.s64 = ctx.r9.s64 + -15680;
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r10,268
	ctx.r7.s64 = ctx.r10.s64 + 268;
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,22924
	ctx.r11.s64 = ctx.r11.s64 + 22924;
	// lwzx r9,r6,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820db7cc
	if (ctx.cr6.eq) goto loc_820DB7CC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x820db7a8
	if (ctx.cr6.eq) goto loc_820DB7A8;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820db7f4
	if (!ctx.cr6.eq) goto loc_820DB7F4;
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
loc_820DB7A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8211cdd0
	ctx.lr = 0x820DB7B0;
	sub_8211CDD0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820db7f4
	if (ctx.cr6.eq) goto loc_820DB7F4;
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
loc_820DB7CC:
	// addi r10,r10,272
	ctx.r10.s64 = ctx.r10.s64 + 272;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820db7f4
	if (ctx.cr6.eq) goto loc_820DB7F4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820da5b0
	ctx.lr = 0x820DB7E8;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x820db7f8
	if (!ctx.cr6.eq) goto loc_820DB7F8;
loc_820DB7F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820DB7F8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DB740) {
	__imp__sub_820DB740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DB808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820DB810;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820db740
	ctx.lr = 0x820DB830;
	sub_820DB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820db884
	if (!ctx.cr6.eq) goto loc_820DB884;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820db740
	ctx.lr = 0x820DB848;
	sub_820DB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820db884
	if (!ctx.cr6.eq) goto loc_820DB884;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820db740
	ctx.lr = 0x820DB860;
	sub_820DB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820db884
	if (!ctx.cr6.eq) goto loc_820DB884;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820db740
	ctx.lr = 0x820DB878;
	sub_820DB740(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dba34
	if (ctx.cr6.eq) goto loc_820DBA34;
loc_820DB884:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82141160
	ctx.lr = 0x820DB88C;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfs f31,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820db904
	if (ctx.cr6.eq) goto loc_820DB904;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x820dba34
	if (ctx.cr6.eq) goto loc_820DBA34;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x82120408
	ctx.lr = 0x820DB904;
	sub_82120408(ctx, base);
loc_820DB904:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r9,r10,6096
	ctx.r9.s64 = ctx.r10.s64 + 6096;
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r23,r11,7400
	ctx.r23.s64 = ctx.r11.s64 + 7400;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r31,r23,8
	ctx.r31.s64 = ctx.r23.s64 + 8;
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r26,r11,-22896
	ctx.r26.s64 = ctx.r11.s64 + -22896;
	// addi r27,r10,7364
	ctx.r27.s64 = ctx.r10.s64 + 7364;
	// addi r25,r9,7332
	ctx.r25.s64 = ctx.r9.s64 + 7332;
loc_820DB954:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820db660
	ctx.lr = 0x820DB960;
	sub_820DB660(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dba1c
	if (ctx.cr6.eq) goto loc_820DBA1C;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lfsx f10,r29,r27
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfsx f9,r29,r10
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f4,f9,f13
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f1,f8,f0,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f2,f13,f7,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f11.f64));
	// beq cr6,0x820db9ec
	if (ctx.cr6.eq) goto loc_820DB9EC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// beq cr6,0x820db9ec
	if (ctx.cr6.eq) goto loc_820DB9EC;
	// lwz r11,16136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16136);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f5,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x821205e0
	ctx.lr = 0x820DB9E8;
	sub_821205E0(ctx, base);
	// b 0x820dba1c
	goto loc_820DBA1C;
loc_820DB9EC:
	// lwz r11,16136(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16136);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f8,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lbz r9,17(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lfs f6,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lbz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f5,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82120408
	ctx.lr = 0x820DBA1C;
	sub_82120408(ctx, base);
loc_820DBA1C:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r23,72
	ctx.r11.s64 = ctx.r23.s64 + 72;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820db954
	if (ctx.cr6.lt) goto loc_820DB954;
loc_820DBA34:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DB808) {
	__imp__sub_820DB808(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DBA40) {
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
	// lwz r7,212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lfs f6,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// bl 0x82120408
	ctx.lr = 0x820DBA74;
	sub_82120408(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DBA40) {
	__imp__sub_820DBA40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DBA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DBA84) {
	__imp__sub_820DBA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DBA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820DBA90;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x820DBA98;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lfs f12,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f11,152(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r27,r26,1
	ctx.r27.s64 = ctx.r26.s64 + 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r27,22924
	ctx.r27.s64 = ctx.r27.s64 + 22924;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// bl 0x82141160
	ctx.lr = 0x820DBB0C;
	sub_82141160(ctx, base);
	// addi r11,r28,278
	ctx.r11.s64 = ctx.r28.s64 + 278;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820dbb80
	if (ctx.cr6.eq) goto loc_820DBB80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fdd20
	ctx.lr = 0x820DBB2C;
	sub_820FDD20(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DBB70;
	sub_82120408(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820DBB7C;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820DBB80:
	// addi r11,r28,268
	ctx.r11.s64 = ctx.r28.s64 + 268;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820dbdbc
	if (ctx.cr6.eq) goto loc_820DBDBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820dbc28
	if (ctx.cr6.eq) goto loc_820DBC28;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820dbf44
	if (!ctx.cr6.eq) goto loc_820DBF44;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r10,r11,-22896
	ctx.r10.s64 = ctx.r11.s64 + -22896;
	// lwz r11,16132(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbc08
	if (ctx.cr6.eq) goto loc_820DBC08;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f8,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DBBF8;
	sub_82120408(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820DBC04;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820DBC08:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,7464
	ctx.r4.s64 = ctx.r11.s64 + 7464;
	// bl 0x82280c30
	ctx.lr = 0x820DBC18;
	sub_82280C30(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820DBC24;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820DBC28:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18632
	ctx.r10.u64 = ctx.r11.u64 | 18632;
	// lwzx r30,r26,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DBC3C;
	sub_82332AF8(ctx, base);
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x820dbc68
	if (ctx.cr6.eq) goto loc_820DBC68;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8211cdd0
	ctx.lr = 0x820DBC58;
	sub_8211CDD0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// bl 0x82332af8
	ctx.lr = 0x820DBC68;
	sub_82332AF8(ctx, base);
loc_820DBC68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x820DBC70;
	sub_82332B10(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbce4
	if (ctx.cr6.eq) goto loc_820DBCE4;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db410
	ctx.lr = 0x820DBCA0;
	sub_820DB410(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f4,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x82120408
	ctx.lr = 0x820DBCE4;
	sub_82120408(ctx, base);
loc_820DBCE4:
	// lbz r11,114(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 114);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332008
	ctx.lr = 0x820DBCFC;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dbd24
	if (!ctx.cr6.eq) goto loc_820DBD24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6080
	ctx.r9.s64 = ctx.r11.s64 + 6080;
	// lfs f13,7036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_820DBD24:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db5b8
	ctx.lr = 0x820DBD3C;
	sub_820DB5B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332008
	ctx.lr = 0x820DBD48;
	sub_82332008(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,7320
	ctx.r5.s64 = ctx.r11.s64 + 7320;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e8368
	ctx.lr = 0x820DBD60;
	sub_822E8368(ctx, base);
	// lwz r9,460(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r8,452(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stb r7,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r7.u8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x822c9d98
	ctx.lr = 0x820DBDAC;
	sub_822C9D98(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820DBDB8;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820DBDBC:
	// addi r11,r28,272
	ctx.r11.s64 = ctx.r28.s64 + 272;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r27
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820da5b0
	ctx.lr = 0x820DBDDC;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820da7a0
	ctx.lr = 0x820DBDF0;
	sub_820DA7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dbf44
	if (!ctx.cr6.eq) goto loc_820DBF44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DBE00;
	sub_82332AF8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b10
	ctx.lr = 0x820DBE08;
	sub_82332B10(ctx, base);
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbe7c
	if (ctx.cr6.eq) goto loc_820DBE7C;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db410
	ctx.lr = 0x820DBE38;
	sub_820DB410(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,76(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f4,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f3.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f1,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bl 0x82120408
	ctx.lr = 0x820DBE7C;
	sub_82120408(ctx, base);
loc_820DBE7C:
	// lbz r11,114(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 114);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dbf44
	if (ctx.cr6.eq) goto loc_820DBF44;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332008
	ctx.lr = 0x820DBE94;
	sub_82332008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dbebc
	if (!ctx.cr6.eq) goto loc_820DBEBC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,6080
	ctx.r9.s64 = ctx.r11.s64 + 6080;
	// lfs f13,7036(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_820DBEBC:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db5b8
	ctx.lr = 0x820DBED4;
	sub_820DB5B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332008
	ctx.lr = 0x820DBEE0;
	sub_82332008(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r11,7320
	ctx.r5.s64 = ctx.r11.s64 + 7320;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e8368
	ctx.lr = 0x820DBEF8;
	sub_822E8368(ctx, base);
	// lwz r9,460(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r8,452(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stb r7,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r7.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x822c9d98
	ctx.lr = 0x820DBF44;
	sub_822C9D98(ctx, base);
loc_820DBF44:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820DBF50;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DBA88) {
	__imp__sub_820DBA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DBF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DBF54) {
	__imp__sub_820DBF54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DBF58) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x820dbfe8
	if (ctx.cr6.eq) goto loc_820DBFE8;
	// bl 0x82141160
	ctx.lr = 0x820DBFAC;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DBFE8;
	sub_82120408(ctx, base);
loc_820DBFE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_820DBF58) {
	__imp__sub_820DBF58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DC004) {
	__imp__sub_820DC004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820DC010;
	__savegprlr_27(ctx, base);
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// rlwinm r4,r6,0,11,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820dc0e0
	if (!ctx.cr6.eq) goto loc_820DC0E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// beq cr6,0x820dc0e0
	if (ctx.cr6.eq) goto loc_820DC0E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dab00
	ctx.lr = 0x820DC088;
	sub_820DAB00(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc0e0
	if (ctx.cr6.eq) goto loc_820DC0E0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820da648
	ctx.lr = 0x820DC0A4;
	sub_820DA648(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x820dc0e0
	if (ctx.cr6.lt) goto loc_820DC0E0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820daaa8
	ctx.lr = 0x820DC0C4;
	sub_820DAAA8(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lbz r7,16(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820db0f8
	ctx.lr = 0x820DC0E0;
	sub_820DB0F8(ctx, base);
loc_820DC0E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DC008) {
	__imp__sub_820DC008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DC0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// bl 0x82140bc8
	ctx.lr = 0x820DC140;
	sub_82140BC8(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x820dc194
	if (ctx.cr6.lt) goto loc_820DC194;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820dc178
	if (ctx.cr6.eq) goto loc_820DC178;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,7544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7544);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,7540(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7540);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f10,f0,f13,f11
	ctx.f10.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f11.f64)));
	// fmuls f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x820dc194
	goto loc_820DC194;
loc_820DC178:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_820DC194:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
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
	// bl 0x821202c8
	ctx.lr = 0x820DC1C8;
	sub_821202C8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DC0E8) {
	__imp__sub_820DC0E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DC1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// beq cr6,0x820dc264
	if (ctx.cr6.eq) goto loc_820DC264;
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
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820dab00
	ctx.lr = 0x820DC230;
	sub_820DAB00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dc264
	if (ctx.cr6.eq) goto loc_820DC264;
	// bl 0x82332af8
	ctx.lr = 0x820DC23C;
	sub_82332AF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,512(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// lwz r29,508(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x82141160
	ctx.lr = 0x820DC250;
	sub_82141160(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x820dc0e8
	ctx.lr = 0x820DC264;
	sub_820DC0E8(ctx, base);
loc_820DC264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DC1D0) {
	__imp__sub_820DC1D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DC26C) {
	__imp__sub_820DC26C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x820DC278;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de01c
	ctx.lr = 0x820DC280;
	__savefpr_25(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addis r30,r23,1
	ctx.r30.s64 = ctx.r23.s64 + 65536;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x820dc650
	if (!ctx.cr6.lt) goto loc_820DC650;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820dc650
	if (!ctx.cr6.eq) goto loc_820DC650;
	// rlwinm r11,r11,0,20,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820dc650
	if (!ctx.cr6.eq) goto loc_820DC650;
	// lwz r11,692(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc650
	if (ctx.cr6.eq) goto loc_820DC650;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820dab00
	ctx.lr = 0x820DC300;
	sub_820DAB00(ctx, base);
	// lwz r11,696(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 696);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc320
	if (ctx.cr6.eq) goto loc_820DC320;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332c20
	ctx.lr = 0x820DC31C;
	sub_82332C20(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_820DC320:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332af8
	ctx.lr = 0x820DC328;
	sub_82332AF8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x820da648
	ctx.lr = 0x820DC33C;
	sub_820DA648(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r31,0
	ctx.r31.s64 = 0;
	// subfe. r28,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x820dc3b0
	if (ctx.cr0.lt) goto loc_820DC3B0;
	// addi r29,r30,504
	ctx.r29.s64 = ctx.r30.s64 + 504;
loc_820DC350:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820dc398
	if (ctx.cr6.eq) goto loc_820DC398;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x820dc398
	if (ctx.cr6.eq) goto loc_820DC398;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x820dc398
	if (ctx.cr6.eq) goto loc_820DC398;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820dc398
	if (ctx.cr6.eq) goto loc_820DC398;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x820dc398
	if (ctx.cr6.eq) goto loc_820DC398;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820fc428
	ctx.lr = 0x820DC38C;
	sub_820FC428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dc3ac
	if (!ctx.cr6.eq) goto loc_820DC3AC;
loc_820DC398:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x820dc350
	if (!ctx.cr6.gt) goto loc_820DC350;
	// b 0x820dc3b0
	goto loc_820DC3B0;
loc_820DC3AC:
	// li r26,1
	ctx.r26.s64 = 1;
loc_820DC3B0:
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dc650
	if (ctx.cr6.eq) goto loc_820DC650;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da730
	ctx.lr = 0x820DC3C8;
	sub_820DA730(ctx, base);
	// neg r8,r3
	ctx.r8.s64 = -ctx.r3.s64;
	// lwz r9,536(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// andc r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r3.u64;
	// addi r11,r30,848
	ctx.r11.s64 = ctx.r30.s64 + 848;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
loc_820DC3E0:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820dc454
	if (ctx.cr6.eq) goto loc_820DC454;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820dc3e0
	if (ctx.cr6.lt) goto loc_820DC3E0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DC400:
	// lwz r10,516(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820dc650
	if (ctx.cr6.eq) goto loc_820DC650;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dc464
	if (ctx.cr6.eq) goto loc_820DC464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823340b0
	ctx.lr = 0x820DC424;
	sub_823340B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820dc650
	if (ctx.cr6.eq) goto loc_820DC650;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r31,r11,7616
	ctx.r31.s64 = ctx.r11.s64 + 7616;
	// lwz r11,-30316(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30316);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x820DC448;
	sub_820DC660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r11,-30320(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30320);
	// b 0x820dc4b4
	goto loc_820DC4B4;
loc_820DC454:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x820dc400
	goto loc_820DC400;
loc_820DC464:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bne cr6,0x820dc494
	if (!ctx.cr6.eq) goto loc_820DC494;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,7600
	ctx.r31.s64 = ctx.r11.s64 + 7600;
	// lwz r11,-30352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30352);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x820DC488;
	sub_820DC660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r11,-30340(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30340);
	// b 0x820dc4b4
	goto loc_820DC4B4;
loc_820DC494:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r11,7572
	ctx.r31.s64 = ctx.r11.s64 + 7572;
	// lwz r11,-30336(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30336);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x820DC4AC;
	sub_820DC660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r11,-30344(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30344);
loc_820DC4B4:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x820dc660
	ctx.lr = 0x820DC4C0;
	sub_820DC660(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,-30360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30360);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwzx r4,r23,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	// lwz r10,-30332(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -30332);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lwz r9,-30348(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -30348);
	// lfs f0,2416(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fsubs f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f7,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,7568(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7568);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f28,f8,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f6,f13
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fadds f27,f11,f28
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f28.f64));
	// bl 0x823de720
	ctx.lr = 0x820DC52C;
	sub_823DE720(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f4.f64 = double(temp.f32);
	// lwz r30,468(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f2,f4,f0
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lfs f11,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f10,f3,f13
	ctx.f10.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f9,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f1,f12
	ctx.f8.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// fsubs f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f6,f5,f28,f27
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f28.f64 + ctx.f27.f64));
	// fmadds f5,f2,f6,f0
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f0.f64));
	// stfs f5,176(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// fmadds f4,f10,f6,f13
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f13.f64));
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// fmadds f3,f8,f6,f12
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f3,184(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// fmadds f2,f7,f6,f11
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f2,188(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// beq cr6,0x820dc5f0
	if (ctx.cr6.eq) goto loc_820DC5F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lbz r29,17(r24)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + 17);
	// lfs f28,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// lbz r28,16(r24)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r24.u32 + 16);
	// lfs f27,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820DC5B0;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f6,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lfs f8,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DC5F0;
	sub_82120408(ctx, base);
loc_820DC5F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,7548
	ctx.r4.s64 = ctx.r11.s64 + 7548;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b7268
	ctx.lr = 0x820DC604;
	sub_822B7268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f28,4(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820DC618;
	sub_82141160(ctx, base);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fadds f1,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f27.f64));
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// fadds f2,f28,f29
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stb r9,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r9.u8);
	// bl 0x822c9d98
	ctx.lr = 0x820DC650;
	sub_822C9D98(ctx, base);
loc_820DC650:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de068
	ctx.lr = 0x820DC65C;
	__restfpr_25(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DC270) {
	__imp__sub_820DC270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lbz r7,1(r3)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f7,4(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lbz r5,2(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// stfs f3,8(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lbz r11,3(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f2,-16(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,12(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DC660) {
	__imp__sub_820DC660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DC6DC) {
	__imp__sub_820DC6DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820DC6E8;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-30308
	ctx.r11.s64 = ctx.r11.s64 + -30308;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r3,r8
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r10,r7,-15680
	ctx.r10.s64 = ctx.r7.s64 + -15680;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x820dc778
	if (ctx.cr6.lt) goto loc_820DC778;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820dc744
	if (!ctx.cr6.eq) goto loc_820DC744;
	// bl 0x82310110
	ctx.lr = 0x820DC740;
	sub_82310110(ctx, base);
	// b 0x820dc750
	goto loc_820DC750;
loc_820DC744:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r3,r29,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
loc_820DC750:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stfs f31,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// add r10,r3,r27
	ctx.r10.u64 = ctx.r3.u64 + ctx.r27.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// ori r9,r11,2184
	ctx.r9.u64 = ctx.r11.u64 | 2184;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lfsx f0,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_820DC778:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DC6E0) {
	__imp__sub_820DC6E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DC784) {
	__imp__sub_820DC784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r9,r3,28
	ctx.r9.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-30308
	ctx.r11.s64 = ctx.r11.s64 + -30308;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DC788) {
	__imp__sub_820DC788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-30308
	ctx.r11.s64 = ctx.r11.s64 + -30308;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DC7C0) {
	__imp__sub_820DC7C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC7D8) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// addi r11,r11,-30308
	ctx.r11.s64 = ctx.r11.s64 + -30308;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,6968
	ctx.r8.s64 = ctx.r9.s64 + 6968;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,11308(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x820dc814
	if (!ctx.cr6.eq) goto loc_820DC814;
	// bl 0x82310110
	ctx.lr = 0x820DC814;
	sub_82310110(ctx, base);
loc_820DC814:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820dc88c
	if (ctx.cr6.eq) goto loc_820DC88C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820dc874
	if (!ctx.cr6.lt) goto loc_820DC874;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fmadds f0,f5,f12,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f0.f64));
	// b 0x820dc888
	goto loc_820DC888;
loc_820DC874:
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_820DC888:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_820DC88C:
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

PPC_WEAK_FUNC(sub_820DC7D8) {
	__imp__sub_820DC7D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// lwzx r8,r3,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// subf. r11,r10,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x820dc990
	if (ctx.cr0.lt) goto loc_820DC990;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f11,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x820dc990
	if (!ctx.cr6.lt) goto loc_820DC990;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// addi r11,r11,12168
	ctx.r11.s64 = ctx.r11.s64 + 12168;
	// bgt cr6,0x820dc900
	if (ctx.cr6.gt) goto loc_820DC900;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x820dc948
	goto loc_820DC948;
loc_820DC900:
	// addis r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 131072;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,2116
	ctx.r10.s64 = ctx.r10.s64 + 2116;
	// lfs f8,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// lfs f5,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f9
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f9.f64));
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f6,f6
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64));
	// fmadds f9,f4,f4,f1
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fmadds f8,f2,f2,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f2.f64 + ctx.f9.f64));
	// fsqrts f7,f8
	ctx.f7.f64 = double(float(sqrt(ctx.f8.f64)));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// fsubs f13,f0,f6
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
loc_820DC948:
	// fdivs f11,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// lfs f10,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820dc990
	if (!ctx.cr6.gt) goto loc_820DC990;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820dc97c
	if (ctx.cr6.lt) goto loc_820DC97C;
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820DC97C:
	// fdivs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// stfs f0,32(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820DC990:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DC8A0) {
	__imp__sub_820DC8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DC998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lfs f12,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r4,61924
	ctx.r11.u64 = ctx.r4.u64 | 61924;
	// lfs f9,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r3,-32187
	ctx.r3.s64 = -2109407232;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r11,r3,-15680
	ctx.r11.s64 = ctx.r3.s64 + -15680;
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addis r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 65536;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r6,r6,22912
	ctx.r6.s64 = ctx.r6.s64 + 22912;
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r5,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r5.u32);
	// bl 0x820dc8a0
	ctx.lr = 0x820DCA20;
	sub_820DC8A0(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// mulli r9,r7,148
	ctx.r9.s64 = ctx.r7.s64 * 148;
	// addi r10,r4,-30248
	ctx.r10.s64 = ctx.r4.s64 + -30248;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_820DCA3C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x820dcae4
	if (ctx.cr6.gt) goto loc_820DCAE4;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fadds f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x820dcae4
	if (!ctx.cr6.gt) goto loc_820DCAE4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820dca3c
	if (ctx.cr6.lt) goto loc_820DCA3C;
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820dcaa8
	if (!ctx.cr6.lt) goto loc_820DCAA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DCAA8:
	// lfs f13,64(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820dcabc
	if (!ctx.cr6.lt) goto loc_820DCABC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820DCABC:
	// lfs f13,100(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820dcad0
	if (!ctx.cr6.lt) goto loc_820DCAD0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820DCAD0:
	// lfs f13,136(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820dcb20
	if (!ctx.cr6.lt) goto loc_820DCB20;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820dcb28
	goto loc_820DCB28;
loc_820DCAE4:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_820DCB04:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dcb04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DCB04;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820DCB20:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820dcb54
	if (ctx.cr6.eq) goto loc_820DCB54;
loc_820DCB28:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_820DCB48:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820dcb48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820DCB48;
loc_820DCB54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DC998) {
	__imp__sub_820DC998(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCB64) {
	__imp__sub_820DCB64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCB68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DCB70;
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
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82141398
	ctx.lr = 0x820DCB94;
	sub_82141398(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820dcbc4
	if (!ctx.cr6.gt) goto loc_820DCBC4;
loc_820DCB9C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc998
	ctx.lr = 0x820DCBB4;
	sub_820DC998(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bl 0x82141398
	ctx.lr = 0x820DCBBC;
	sub_82141398(ctx, base);
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x820dcb9c
	if (ctx.cr6.lt) goto loc_820DCB9C;
loc_820DCBC4:
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

PPC_WEAK_FUNC(sub_820DCB68) {
	__imp__sub_820DCB68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCBD4) {
	__imp__sub_820DCBD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCBD8) {
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
	ctx.lr = 0x820DCBF0;
	__savefpr_28(ctx, base);
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r11,r6,-30248
	ctx.r11.s64 = ctx.r6.s64 + -30248;
	// lwzx r9,r31,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mulli r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 * 148;
	// lfs f28,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,7648(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7648);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r7,r30,28
	ctx.r7.s64 = ctx.r30.s64 + 28;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// li r6,4
	ctx.r6.s64 = 4;
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
loc_820DCC60:
	// addi r4,r7,-28
	ctx.r4.s64 = ctx.r7.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc8a0
	ctx.lr = 0x820DCC6C;
	sub_820DC8A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820dcc88
	if (ctx.cr6.eq) goto loc_820DCC88;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820dcc88
	if (!ctx.cr6.gt) goto loc_820DCC88;
	// lfs f30,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820DCC88:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// bne 0x820dcc60
	if (!ctx.cr0.eq) goto loc_820DCC60;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,20012
	ctx.r10.u64 = ctx.r11.u64 | 20012;
	// lfsx f0,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820dccb0
	if (!ctx.cr6.gt) goto loc_820DCCB0;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_820DCCB0:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bgt cr6,0x820dccd0
	if (ctx.cr6.gt) goto loc_820DCCD0;
	// bl 0x822d3ee0
	ctx.lr = 0x820DCCBC;
	sub_822D3EE0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5816(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5816);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
	// b 0x820dcda4
	goto loc_820DCDA4;
loc_820DCCD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820dcce4
	if (!ctx.cr6.gt) goto loc_820DCCE4;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_820DCCE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7644);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f29,f0,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823de720
	ctx.lr = 0x820DCCF8;
	sub_823DE720(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// lfs f11,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r9,r9,18316
	ctx.r9.s64 = ctx.r9.s64 + 18316;
	// lfs f13,7640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7640);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,7636(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 7636);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f1,f29,f0,f11
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// bl 0x823de720
	ctx.lr = 0x820DCD38;
	sub_823DE720(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f4,144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 131072;
	// addi r6,r6,18320
	ctx.r6.s64 = ctx.r6.s64 + 18320;
	// lfs f0,7632(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 7632);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f29,f0,f4
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f13,6056(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6056);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// lfs f3,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f0,f2,f31
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f12,f3,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f13.f64));
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// bl 0x823de720
	ctx.lr = 0x820DCD78;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// addi r3,r3,18324
	ctx.r3.s64 = ctx.r3.s64 + 18324;
	// lfs f0,5876(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_820DCDA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de074
	ctx.lr = 0x820DCDB0;
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

PPC_WEAK_FUNC(sub_820DCBD8) {
	__imp__sub_820DCBD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCDC4) {
	__imp__sub_820DCDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCDC8) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,32(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mulli r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 * 148;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r11,r8,-30248
	ctx.r11.s64 = ctx.r8.s64 + -30248;
	// li r4,148
	ctx.r4.s64 = 148;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

PPC_WEAK_FUNC(sub_820DCDC8) {
	__imp__sub_820DCDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCDF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,148
	ctx.r10.s64 = ctx.r3.s64 * 148;
	// addi r11,r11,-30248
	ctx.r11.s64 = ctx.r11.s64 + -30248;
	// li r5,144
	ctx.r5.s64 = 144;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DCDF0) {
	__imp__sub_820DCDF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCE0C) {
	__imp__sub_820DCE0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r11,11008
	ctx.r9.s64 = ctx.r11.s64 + 11008;
	// addi r8,r10,-29952
	ctx.r8.s64 = ctx.r10.s64 + -29952;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCE10) {
	__imp__sub_820DCE10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCE2C) {
	__imp__sub_820DCE2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// stw r3,27420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27420, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCE30) {
	__imp__sub_820DCE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCE3C) {
	__imp__sub_820DCE3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r3,27420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27420);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCE40) {
	__imp__sub_820DCE40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCE4C) {
	__imp__sub_820DCE4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCE50) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,16412
	ctx.r10.s64 = ctx.r3.s64 * 16412;
	// addi r11,r11,11008
	ctx.r11.s64 = ctx.r11.s64 + 11008;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r5,16412
	ctx.r5.s64 = 16412;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823de090
	ctx.lr = 0x820DCE88;
	sub_823DE090(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r10,-29952
	ctx.r10.s64 = ctx.r10.s64 + -29952;
	// rlwinm r11,r9,13,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0xFFFFE000;
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,40960
	ctx.r5.u64 = ctx.r5.u64 | 40960;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de090
	ctx.lr = 0x820DCEB0;
	sub_823DE090(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82272e78
	ctx.lr = 0x820DCEBC;
	sub_82272E78(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r11,24(r31)
	PPC_STORE_U16(ctx.r31.u32 + 24, ctx.r11.u16);
loc_820DCEC4:
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1023
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1023, ctx.xer);
	// sth r11,34(r10)
	PPC_STORE_U16(ctx.r10.u32 + 34, ctx.r11.u16);
	// blt cr6,0x820dcec4
	if (ctx.cr6.lt) goto loc_820DCEC4;
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
	// ble cr6,0x820dcef8
	if (!ctx.cr6.gt) goto loc_820DCEF8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820DCEF8:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,48(r31)
	PPC_STORE_U16(ctx.r31.u32 + 48, ctx.r11.u16);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
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

PPC_WEAK_FUNC(sub_820DCE50) {
	__imp__sub_820DCE50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF28) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// mulli r11,r3,16412
	ctx.r11.s64 = ctx.r3.s64 * 16412;
	// addi r10,r10,11008
	ctx.r10.s64 = ctx.r10.s64 + 11008;
	// rlwinm r9,r4,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFF0;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCF28) {
	__imp__sub_820DCF28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r10,-29952
	ctx.r10.s64 = ctx.r10.s64 + -29952;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCF48) {
	__imp__sub_820DCF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCF6C) {
	__imp__sub_820DCF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF70) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r10,-29952
	ctx.r10.s64 = ctx.r10.s64 + -29952;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCF70) {
	__imp__sub_820DCF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DCF94) {
	__imp__sub_820DCF94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DCF98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// rlwinm r9,r5,4,12,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFF0;
	// mulli r11,r3,16412
	ctx.r11.s64 = ctx.r3.s64 * 16412;
	// addi r10,r10,11008
	ctx.r10.s64 = ctx.r10.s64 + 11008;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r10,40
	ctx.r9.s64 = ctx.r10.s64 + 40;
	// rlwinm r10,r3,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-29952
	ctx.r9.s64 = ctx.r9.s64 + -29952;
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x820dd010
	if (ctx.cr6.gt) goto loc_820DD010;
loc_820DCFE4:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-18
	ctx.r11.s64 = ctx.r11.s64 + -18;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x820dcfe4
	if (!ctx.cr6.gt) goto loc_820DCFE4;
loc_820DD010:
	// sth r5,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r5.u16);
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r9,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DCF98) {
	__imp__sub_820DCF98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r10,r3,16412
	ctx.r10.s64 = ctx.r3.s64 * 16412;
	// addi r11,r11,11008
	ctx.r11.s64 = ctx.r11.s64 + 11008;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd050
	if (!ctx.cr6.eq) goto loc_820DD050;
loc_820DD048:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820DD050:
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
	// ble cr6,0x820dd080
	if (!ctx.cr6.gt) goto loc_820DD080;
	// li r7,0
	ctx.r7.s64 = 0;
loc_820DD080:
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
	// ble cr6,0x820dd048
	if (!ctx.cr6.gt) goto loc_820DD048;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_820DD028) {
	__imp__sub_820DD028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DD0D4) {
	__imp__sub_820DD0D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD0D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x820DD0E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mulli r9,r3,16412
	ctx.r9.s64 = ctx.r3.s64 * 16412;
	// addi r10,r11,11008
	ctx.r10.s64 = ctx.r11.s64 + 11008;
	// rlwinm r11,r4,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFF0;
	// add r25,r9,r10
	ctx.r25.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r30,r11,28
	ctx.r30.s64 = ctx.r11.s64 + 28;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lhz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lhz r18,32(r11)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dd220
	if (ctx.cr6.eq) goto loc_820DD220;
	// addi r10,r18,1
	ctx.r10.s64 = ctx.r18.s64 + 1;
	// rlwinm r20,r3,11,0,20
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r19,r10,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r21,r10,-29952
	ctx.r21.s64 = ctx.r10.s64 + -29952;
loc_820DD140:
	// addi r28,r11,-1
	ctx.r28.s64 = ctx.r11.s64 + -1;
	// add r11,r20,r28
	ctx.r11.u64 = ctx.r20.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r21
	ctx.r29.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lfsx f0,r19,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// ble cr6,0x820dd194
	if (!ctx.cr6.gt) goto loc_820DD194;
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd1e0
	if (!ctx.cr6.eq) goto loc_820DD1E0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820dd028
	ctx.lr = 0x820DD180;
	sub_820DD028(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd20c
	if (ctx.cr6.eq) goto loc_820DD20C;
	// sth r3,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r3.u16);
	// b 0x820dd1d4
	goto loc_820DD1D4;
loc_820DD194:
	// addi r11,r18,3
	ctx.r11.s64 = ctx.r18.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	ctx.cr6.compare(ctx.f0.f64, ctx.f9.f64);
	// bge cr6,0x820dd20c
	if (!ctx.cr6.lt) goto loc_820DD20C;
	// lhz r3,10(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820dd1e0
	if (!ctx.cr6.eq) goto loc_820DD1E0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820dd028
	ctx.lr = 0x820DD1C4;
	sub_820DD028(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd20c
	if (ctx.cr6.eq) goto loc_820DD20C;
	// sth r3,10(r30)
	PPC_STORE_U16(ctx.r30.u32 + 10, ctx.r3.u16);
loc_820DD1D4:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r26,34(r11)
	PPC_STORE_U16(ctx.r11.u32 + 34, ctx.r26.u16);
loc_820DD1E0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhz r31,2(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820dcf98
	ctx.lr = 0x820DD1F4;
	sub_820DCF98(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x820dd204
	if (!ctx.cr6.eq) goto loc_820DD204;
	// sth r31,12(r30)
	PPC_STORE_U16(ctx.r30.u32 + 12, ctx.r31.u16);
	// b 0x820dd214
	goto loc_820DD214;
loc_820DD204:
	// sth r31,2(r24)
	PPC_STORE_U16(ctx.r24.u32 + 2, ctx.r31.u16);
	// b 0x820dd214
	goto loc_820DD214;
loc_820DD20C:
	// lhz r31,2(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
loc_820DD214:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd140
	if (!ctx.cr6.eq) goto loc_820DD140;
loc_820DD220:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DD0D8) {
	__imp__sub_820DD0D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD228) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r9,r3,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// add r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 + ctx.r4.u64;
	// addi r8,r10,-29952
	ctx.r8.s64 = ctx.r10.s64 + -29952;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r3,16412
	ctx.r11.s64 = ctx.r3.s64 * 16412;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,11008
	ctx.r7.s64 = ctx.r7.s64 + 11008;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820dd3a8
	if (ctx.cr6.eq) goto loc_820DD3A8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// lhz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 40);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x820dd2a0
	if (!ctx.cr6.eq) goto loc_820DD2A0;
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,12(r5)
	PPC_STORE_U16(ctx.r5.u32 + 12, ctx.r11.u16);
	// b 0x820dd310
	goto loc_820DD310;
loc_820DD2A0:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820dd308
	if (ctx.cr6.eq) goto loc_820DD308;
loc_820DD2E0:
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// add r11,r6,r9
	ctx.r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820dd2e0
	if (!ctx.cr6.eq) goto loc_820DD2E0;
loc_820DD308:
	// lhz r11,2(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
loc_820DD310:
	// lhz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd388
	if (!ctx.cr6.eq) goto loc_820DD388;
loc_820DD31C:
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd388
	if (!ctx.cr6.eq) goto loc_820DD388;
	// lhz r11,10(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd388
	if (!ctx.cr6.eq) goto loc_820DD388;
	// lhz r9,6(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// addi r10,r5,6
	ctx.r10.s64 = ctx.r5.s64 + 6;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820dd388
	if (ctx.cr6.eq) goto loc_820DD388;
	// rlwinm r11,r9,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFF0;
	// lhz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r7,r31,16
	ctx.r7.u64 = ctx.r31.u32 & 0xFFFF;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r5,r11,28
	ctx.r5.s64 = ctx.r11.s64 + 28;
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// sth r31,24(r3)
	PPC_STORE_U16(ctx.r3.u32 + 24, ctx.r31.u16);
	// lhz r6,36(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820dd374
	if (!ctx.cr6.eq) goto loc_820DD374;
	// sth r30,8(r5)
	PPC_STORE_U16(ctx.r5.u32 + 8, ctx.r30.u16);
	// b 0x820dd378
	goto loc_820DD378;
loc_820DD374:
	// sth r30,10(r5)
	PPC_STORE_U16(ctx.r5.u32 + 10, ctx.r30.u16);
loc_820DD378:
	// lhz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 12);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd31c
	if (ctx.cr6.eq) goto loc_820DD31C;
loc_820DD388:
	// lhz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd3a8
	if (ctx.cr6.eq) goto loc_820DD3A8;
loc_820DD394:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhz r11,34(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820dd394
	if (!ctx.cr6.eq) goto loc_820DD394;
loc_820DD3A8:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DD228) {
	__imp__sub_820DD228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DD3B4) {
	__imp__sub_820DD3B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820DD3C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lfs f8,16(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f9,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r10,11008
	ctx.r10.s64 = ctx.r10.s64 + 11008;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// mulli r9,r3,16412
	ctx.r9.s64 = ctx.r3.s64 * 16412;
	// fsubs f13,f0,f9
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r7,-29952
	ctx.r10.s64 = ctx.r7.s64 + -29952;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r5,12
	ctx.r11.s64 = ctx.r5.s64 + 12;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_820DD438:
	// lfs f8,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f4,f9,f7
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fadds f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f1,f7,f9
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_820DD474:
	// rlwinm r11,r31,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFF0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r9,r31,16
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFF;
	// lhz r7,32(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r7,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lfsx f9,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x820dd4b8
	if (!ctx.cr6.gt) goto loc_820DD4B8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lhz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x820dd4f0
	if (ctx.cr6.eq) goto loc_820DD4F0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820dd474
	goto loc_820DD474;
loc_820DD4B8:
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// lfsx f9,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// bge cr6,0x820dd4e4
	if (!ctx.cr6.lt) goto loc_820DD4E4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lhz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 38);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// beq cr6,0x820dd4f0
	if (ctx.cr6.eq) goto loc_820DD4F0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x820dd474
	goto loc_820DD474;
loc_820DD4E4:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820dd510
	if (ctx.cr6.eq) goto loc_820DD510;
loc_820DD4F0:
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dd528
	if (ctx.cr6.eq) goto loc_820DD528;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820dd534
	if (ctx.cr6.eq) goto loc_820DD534;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dd228
	ctx.lr = 0x820DD50C;
	sub_820DD228(ctx, base);
	// b 0x820dd438
	goto loc_820DD438;
loc_820DD510:
	// stfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// stfs f11,12(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// stfs f10,16(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_820DD528:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dcf98
	ctx.lr = 0x820DD534;
	sub_820DCF98(ctx, base);
loc_820DD534:
	// stfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stfs f12,8(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f11,12(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f10,16(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 16, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dd0d8
	ctx.lr = 0x820DD558;
	sub_820DD0D8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DD3B8) {
	__imp__sub_820DD3B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DD560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DD568;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x820DD570;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,12180
	ctx.r6.s64 = ctx.r11.s64 + 12180;
	// addi r3,r10,12172
	ctx.r3.s64 = ctx.r10.s64 + 12172;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820DD590;
	sub_822E15D0(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,27512(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27512, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f31,6912(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6912);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r6,12148
	ctx.r8.s64 = ctx.r6.s64 + 12148;
	// lfs f30,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r5,12136
	ctx.r3.s64 = ctx.r5.s64 + 12136;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,12168(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD5D0;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,27472(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27472, ctx.r3.u32);
	// addi r3,r7,12116
	ctx.r3.s64 = ctx.r7.s64 + 12116;
	// lfs f29,5992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5992);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r9,12024
	ctx.r8.s64 = ctx.r9.s64 + 12024;
	// li r7,76
	ctx.r7.s64 = 76;
	// lfs f1,12132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12132);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD608;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r5,11928
	ctx.r8.s64 = ctx.r5.s64 + 11928;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27540(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27540, ctx.r3.u32);
	// addi r3,r4,11908
	ctx.r3.s64 = ctx.r4.s64 + 11908;
	// bl 0x822e1660
	ctx.lr = 0x820DD634;
	sub_822E1660(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r10,11832
	ctx.r8.s64 = ctx.r10.s64 + 11832;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27432, ctx.r3.u32);
	// addi r3,r9,11808
	ctx.r3.s64 = ctx.r9.s64 + 11808;
	// bl 0x822e1660
	ctx.lr = 0x820DD660;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r3,27560(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27560, ctx.r3.u32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f29,11804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11804);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r6,11736
	ctx.r8.s64 = ctx.r6.s64 + 11736;
	// addi r3,r5,11708
	ctx.r3.s64 = ctx.r5.s64 + 11708;
	// lfs f3,5876(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	ctx.f3.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,5488(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD69C;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r6,r11,11600
	ctx.r6.s64 = ctx.r11.s64 + 11600;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r3,27504(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27504, ctx.r3.u32);
	// addi r3,r10,11580
	ctx.r3.s64 = ctx.r10.s64 + 11580;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820DD6C0;
	sub_822E15D0(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r28,r8,11528
	ctx.r28.s64 = ctx.r8.s64 + 11528;
	// stw r3,27524(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27524, ctx.r3.u32);
	// addi r3,r6,11504
	ctx.r3.s64 = ctx.r6.s64 + 11504;
	// lfs f28,11576(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11576);
	ctx.f28.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD6F8;
	sub_822E1660(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,27564(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27564, ctx.r3.u32);
	// addi r3,r4,11480
	ctx.r3.s64 = ctx.r4.s64 + 11480;
	// bl 0x822e1660
	ctx.lr = 0x820DD720;
	sub_822E1660(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r28,r10,11432
	ctx.r28.s64 = ctx.r10.s64 + 11432;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27444, ctx.r3.u32);
	// addi r3,r9,11412
	ctx.r3.s64 = ctx.r9.s64 + 11412;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x822e1660
	ctx.lr = 0x820DD750;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r6,11392
	ctx.r3.s64 = ctx.r6.s64 + 11392;
	// stw r11,27584(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27584, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DD77C;
	sub_822E1660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,27500(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27500, ctx.r3.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r10,r8,11272
	ctx.r10.s64 = ctx.r8.s64 + 11272;
	// lfs f3,11388(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11388);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r7,11256
	ctx.r3.s64 = ctx.r7.s64 + 11256;
	// lfs f2,11384(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 11384);
	ctx.f2.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,11380(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11380);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e16f0
	ctx.lr = 0x820DD7BC;
	sub_822E16F0(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
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
	// addi r8,r4,11204
	ctx.r8.s64 = ctx.r4.s64 + 11204;
	// stw r3,27600(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27600, ctx.r3.u32);
	// addi r3,r11,11184
	ctx.r3.s64 = ctx.r11.s64 + 11184;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,11252(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11252);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DD7EC;
	sub_822E1660(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,11164
	ctx.r6.s64 = ctx.r9.s64 + 11164;
	// stw r3,27620(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27620, ctx.r3.u32);
	// addi r3,r8,11148
	ctx.r3.s64 = ctx.r8.s64 + 11148;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e15d0
	ctx.lr = 0x820DD810;
	sub_822E15D0(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,12168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r8,r5,11092
	ctx.r8.s64 = ctx.r5.s64 + 11092;
	// stw r3,27536(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27536, ctx.r3.u32);
	// addi r3,r4,11064
	ctx.r3.s64 = ctx.r4.s64 + 11064;
	// li r7,68
	ctx.r7.s64 = 68;
	// lfs f1,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DD840;
	sub_822E1660(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,27436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27436, ctx.r3.u32);
	// addi r3,r7,11036
	ctx.r3.s64 = ctx.r7.s64 + 11036;
	// lfs f28,6024(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6024);
	ctx.f28.f64 = double(temp.f32);
	// addi r8,r8,10960
	ctx.r8.s64 = ctx.r8.s64 + 10960;
	// lfs f27,7540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7540);
	ctx.f27.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD87C;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r5,10900
	ctx.r8.s64 = ctx.r5.s64 + 10900;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r3,27440(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27440, ctx.r3.u32);
	// addi r3,r4,10876
	ctx.r3.s64 = ctx.r4.s64 + 10876;
	// bl 0x822e1660
	ctx.lr = 0x820DD8A8;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5488(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,27468(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27468, ctx.r3.u32);
	// addi r3,r7,10848
	ctx.r3.s64 = ctx.r7.s64 + 10848;
	// addi r8,r9,10796
	ctx.r8.s64 = ctx.r9.s64 + 10796;
	// lfs f2,6020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6020);
	ctx.f2.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820DD8D8;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f3,5876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	ctx.f3.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,10704
	ctx.r8.s64 = ctx.r4.s64 + 10704;
	// stw r3,27548(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27548, ctx.r3.u32);
	// addi r3,r11,10672
	ctx.r3.s64 = ctx.r11.s64 + 10672;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,4292(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4292);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DD908;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r28,r9,10628
	ctx.r28.s64 = ctx.r9.s64 + 10628;
	// stw r3,27604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27604, ctx.r3.u32);
	// addi r3,r6,10604
	ctx.r3.s64 = ctx.r6.s64 + 10604;
	// lfs f28,5996(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5996);
	ctx.f28.f64 = double(temp.f32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DD940;
	sub_822E1660(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r3,r4,10580
	ctx.r3.s64 = ctx.r4.s64 + 10580;
	// stw r11,27588(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27588, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DD96C;
	sub_822E1660(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r28,r10,10532
	ctx.r28.s64 = ctx.r10.s64 + 10532;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27596, ctx.r3.u32);
	// addi r3,r9,10504
	ctx.r3.s64 = ctx.r9.s64 + 10504;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x822e1660
	ctx.lr = 0x820DD99C;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r6,10476
	ctx.r3.s64 = ctx.r6.s64 + 10476;
	// stw r11,27424(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27424, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DD9C8;
	sub_822E1660(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f1,5488(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r4,10400
	ctx.r8.s64 = ctx.r4.s64 + 10400;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27484(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27484, ctx.r3.u32);
	// addi r3,r11,10368
	ctx.r3.s64 = ctx.r11.s64 + 10368;
	// bl 0x822e1660
	ctx.lr = 0x820DD9F4;
	sub_822E1660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r8,r10,10272
	ctx.r8.s64 = ctx.r10.s64 + 10272;
	// stw r3,27556(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27556, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r5,10240
	ctx.r3.s64 = ctx.r5.s64 + 10240;
	// lfs f1,7324(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7324);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDA24;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
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
	// addi r8,r10,10168
	ctx.r8.s64 = ctx.r10.s64 + 10168;
	// stw r3,27452(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27452, ctx.r3.u32);
	// addi r3,r9,10136
	ctx.r3.s64 = ctx.r9.s64 + 10136;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,10236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 10236);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDA54;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,12168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r8,r6,10072
	ctx.r8.s64 = ctx.r6.s64 + 10072;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// stw r3,27580(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27580, ctx.r3.u32);
	// addi r3,r5,10044
	ctx.r3.s64 = ctx.r5.s64 + 10044;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DDA80;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// stw r3,27516(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27516, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,9992
	ctx.r8.s64 = ctx.r11.s64 + 9992;
	// addi r3,r10,9964
	ctx.r3.s64 = ctx.r10.s64 + 9964;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,20
	ctx.r6.s64 = 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x822e1618
	ctx.lr = 0x820DDAAC;
	sub_822E1618(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// addi r8,r8,9872
	ctx.r8.s64 = ctx.r8.s64 + 9872;
	// stw r3,27628(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27628, ctx.r3.u32);
	// addi r3,r7,9936
	ctx.r3.s64 = ctx.r7.s64 + 9936;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10000
	ctx.r4.s64 = 10000;
	// bl 0x822e1618
	ctx.lr = 0x820DDADC;
	sub_822E1618(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
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
	// addi r8,r4,9792
	ctx.r8.s64 = ctx.r4.s64 + 9792;
	// stw r3,27496(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27496, ctx.r3.u32);
	// addi r3,r11,9764
	ctx.r3.s64 = ctx.r11.s64 + 9764;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,9868(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 9868);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDB0C;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,27528(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27528, ctx.r3.u32);
	// addi r8,r6,9724
	ctx.r8.s64 = ctx.r6.s64 + 9724;
	// lfs f1,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,9696
	ctx.r3.s64 = ctx.r5.s64 + 9696;
	// lfs f27,9760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9760);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DDB44;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,9672
	ctx.r8.s64 = ctx.r10.s64 + 9672;
	// stw r3,27428(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27428, ctx.r3.u32);
	// addi r3,r9,9644
	ctx.r3.s64 = ctx.r9.s64 + 9644;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,7640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDB74;
	sub_822E1660(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r6,r7,9520
	ctx.r6.s64 = ctx.r7.s64 + 9520;
	// stw r3,27572(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27572, ctx.r3.u32);
	// addi r3,r5,9616
	ctx.r3.s64 = ctx.r5.s64 + 9616;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820DDB98;
	sub_822E15D0(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r31,r11,9472
	ctx.r31.s64 = ctx.r11.s64 + 9472;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,27544(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27544, ctx.r3.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r9,9444
	ctx.r3.s64 = ctx.r9.s64 + 9444;
	// lfs f27,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DDBD0;
	sub_822E1660(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r6,9416
	ctx.r3.s64 = ctx.r6.s64 + 9416;
	// stw r11,27492(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27492, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DDBFC;
	sub_822E1660(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r11,9304
	ctx.r8.s64 = ctx.r11.s64 + 9304;
	// stw r3,27568(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27568, ctx.r3.u32);
	// addi r3,r10,9276
	ctx.r3.s64 = ctx.r10.s64 + 9276;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,6016(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6016);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDC2C;
	sub_822E1660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f1,5488(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r8,r8,9144
	ctx.r8.s64 = ctx.r8.s64 + 9144;
	// stw r3,27464(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27464, ctx.r3.u32);
	// addi r3,r7,9244
	ctx.r3.s64 = ctx.r7.s64 + 9244;
	// li r7,64
	ctx.r7.s64 = 64;
	// bl 0x822e1660
	ctx.lr = 0x820DDC58;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f1,5876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r5,9032
	ctx.r8.s64 = ctx.r5.s64 + 9032;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r3,27480(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27480, ctx.r3.u32);
	// addi r3,r4,9000
	ctx.r3.s64 = ctx.r4.s64 + 9000;
	// bl 0x822e1660
	ctx.lr = 0x820DDC84;
	sub_822E1660(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,27576(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27576, ctx.r3.u32);
	// addi r3,r7,8968
	ctx.r3.s64 = ctx.r7.s64 + 8968;
	// addi r8,r8,8896
	ctx.r8.s64 = ctx.r8.s64 + 8896;
	// lfs f2,6688(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6688);
	ctx.f2.f64 = double(temp.f32);
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,8996(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDCB8;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
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
	// addi r8,r4,8816
	ctx.r8.s64 = ctx.r4.s64 + 8816;
	// stw r3,27612(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27612, ctx.r3.u32);
	// addi r3,r11,8788
	ctx.r3.s64 = ctx.r11.s64 + 8788;
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f1,8888(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8888);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDCE8;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,8704
	ctx.r8.s64 = ctx.r8.s64 + 8704;
	// stw r3,27476(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27476, ctx.r3.u32);
	// addi r3,r7,8668
	ctx.r3.s64 = ctx.r7.s64 + 8668;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,8664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8664);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDD18;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r8,r4,8560
	ctx.r8.s64 = ctx.r4.s64 + 8560;
	// stw r3,27460(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27460, ctx.r3.u32);
	// addi r3,r11,8532
	ctx.r3.s64 = ctx.r11.s64 + 8532;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,-14540(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -14540);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDD48;
	sub_822E1660(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r3,27552(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27552, ctx.r3.u32);
	// addi r3,r7,8496
	ctx.r3.s64 = ctx.r7.s64 + 8496;
	// addi r8,r8,8408
	ctx.r8.s64 = ctx.r8.s64 + 8408;
	// lfs f1,8528(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8528);
	ctx.f1.f64 = double(temp.f32);
	// li r7,4
	ctx.r7.s64 = 4;
	// bl 0x822e1660
	ctx.lr = 0x820DDD78;
	sub_822E1660(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r6,r4,8328
	ctx.r6.s64 = ctx.r4.s64 + 8328;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27592(r5)
	PPC_STORE_U32(ctx.r5.u32 + 27592, ctx.r3.u32);
	// addi r3,r11,8300
	ctx.r3.s64 = ctx.r11.s64 + 8300;
	// li r5,4
	ctx.r5.s64 = 4;
	// bl 0x822e15d0
	ctx.lr = 0x820DDD9C;
	sub_822E15D0(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r9,8232
	ctx.r6.s64 = ctx.r9.s64 + 8232;
	// li r5,68
	ctx.r5.s64 = 68;
	// stw r3,27520(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27520, ctx.r3.u32);
	// addi r3,r8,8212
	ctx.r3.s64 = ctx.r8.s64 + 8212;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820DDDC0;
	sub_822E15D0(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r6,8120
	ctx.r6.s64 = ctx.r6.s64 + 8120;
	// stw r3,27608(r7)
	PPC_STORE_U32(ctx.r7.u32 + 27608, ctx.r3.u32);
	// addi r3,r5,8180
	ctx.r3.s64 = ctx.r5.s64 + 8180;
	// li r5,68
	ctx.r5.s64 = 68;
	// bl 0x822e15d0
	ctx.lr = 0x820DDDE4;
	sub_822E15D0(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f3,5876(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5876);
	ctx.f3.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,8016
	ctx.r8.s64 = ctx.r10.s64 + 8016;
	// stw r3,27448(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27448, ctx.r3.u32);
	// addi r3,r9,7984
	ctx.r3.s64 = ctx.r9.s64 + 7984;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,8116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820DDE14;
	sub_822E1660(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r31,r7,7936
	ctx.r31.s64 = ctx.r7.s64 + 7936;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// stw r3,27508(r8)
	PPC_STORE_U32(ctx.r8.u32 + 27508, ctx.r3.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r3,r5,7908
	ctx.r3.s64 = ctx.r5.s64 + 7908;
	// lfs f29,7932(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7932);
	ctx.f29.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820DDE4C;
	sub_822E1660(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// addi r3,r4,7884
	ctx.r3.s64 = ctx.r4.s64 + 7884;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,27532(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27532, ctx.r11.u32);
	// bl 0x822e1660
	ctx.lr = 0x820DDE78;
	sub_822E1660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r31,r8,7836
	ctx.r31.s64 = ctx.r8.s64 + 7836;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r3,27488(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27488, ctx.r3.u32);
	// addi r3,r7,7812
	ctx.r3.s64 = ctx.r7.s64 + 7812;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DDEA8;
	sub_822E1660(ctx, base);
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r5,7788
	ctx.r3.s64 = ctx.r5.s64 + 7788;
	// stw r11,27456(r6)
	PPC_STORE_U32(ctx.r6.u32 + 27456, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820DDED4;
	sub_822E1660(ctx, base);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5488(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r8,r11,7704
	ctx.r8.s64 = ctx.r11.s64 + 7704;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r3,27616(r4)
	PPC_STORE_U32(ctx.r4.u32 + 27616, ctx.r3.u32);
	// addi r3,r10,7676
	ctx.r3.s64 = ctx.r10.s64 + 7676;
	// bl 0x822e1660
	ctx.lr = 0x820DDF00;
	sub_822E1660(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// stw r3,27624(r9)
	PPC_STORE_U32(ctx.r9.u32 + 27624, ctx.r3.u32);
	// bl 0x820f9c30
	ctx.lr = 0x820DDF0C;
	sub_820F9C30(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x820DDF18;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DD560) {
	__imp__sub_820DD560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DDF1C) {
	__imp__sub_820DDF1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF20) {
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
	// addi r6,r11,23360
	ctx.r6.s64 = ctx.r11.s64 + 23360;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
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

PPC_WEAK_FUNC(sub_820DDF20) {
	__imp__sub_820DDF20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DDF4C) {
	__imp__sub_820DDF4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF50) {
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
	// addi r6,r11,23360
	ctx.r6.s64 = ctx.r11.s64 + 23360;
	// lwzx r5,r7,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// srawi r4,r5,7
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7F) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 7;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DDF50) {
	__imp__sub_820DDF50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DDF7C) {
	__imp__sub_820DDF7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DDF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DDF88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820de000
	if (!ctx.cr6.eq) goto loc_820DE000;
	// bl 0x82141ca8
	ctx.lr = 0x820DDFA8;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820de000
	if (ctx.cr6.eq) goto loc_820DE000;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820ddfd4
	if (ctx.cr6.eq) goto loc_820DDFD4;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_820DDFD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820ddfe8
	if (ctx.cr6.eq) goto loc_820DDFE8;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820DDFE8:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f11,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_820DE000:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DDF80) {
	__imp__sub_820DDF80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f11,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f11.f64 = double(temp.f32);
	// bne cr6,0x820de06c
	if (!ctx.cr6.eq) goto loc_820DE06C;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lfs f12,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r11,27540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fmuls f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// fmuls f1,f6,f3
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f0,f9,f2
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f12,f5,f2
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fneg f10,f0
	ctx.f10.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmsubs f0,f9,f1,f12
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 - ctx.f12.f64));
	// fnmsubs f10,f5,f1,f10
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f1.f64 - ctx.f10.f64)));
	// b 0x820de0e8
	goto loc_820DE0E8;
loc_820DE06C:
	// addis r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 131072;
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lfs f10,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,20044
	ctx.r11.s64 = ctx.r11.s64 + 20044;
	// ori r3,r7,20036
	ctx.r3.u64 = ctx.r7.u64 | 20036;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r6,20032
	ctx.r8.u64 = ctx.r6.u64 | 20032;
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// fsubs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfsx f5,r4,r3
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// ori r3,r7,20052
	ctx.r3.u64 = ctx.r7.u64 | 20052;
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// ori r11,r6,20056
	ctx.r11.u64 = ctx.r6.u64 | 20056;
	// lfsx f4,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r4,r3
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f5,f8
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// fmuls f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fmsubs f9,f5,f6,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f0.f64));
	// fnmsubs f8,f4,f6,f12
	ctx.f8.f64 = double(float(-(ctx.f4.f64 * ctx.f6.f64 - ctx.f12.f64)));
	// fdivs f7,f9,f3
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f3.f64));
	// fdivs f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f2.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f0,f10,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
loc_820DE0E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820de1cc
	if (ctx.cr6.eq) goto loc_820DE1CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// blt cr6,0x820de1cc
	if (ctx.cr6.lt) goto loc_820DE1CC;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x820de1cc
	if (ctx.cr6.lt) goto loc_820DE1CC;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820de148
	if (!ctx.cr6.gt) goto loc_820DE148;
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x820de16c
	goto loc_820DE16C;
loc_820DE148:
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820de170
	if (!ctx.cr6.lt) goto loc_820DE170;
	// fdivs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f7,f12,f10
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_820DE16C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820DE170:
	// lfs f12,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x820de1a0
	if (!ctx.cr6.gt) goto loc_820DE1A0;
	// fdivs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// b 0x820de1c8
	goto loc_820DE1C8;
loc_820DE1A0:
	// fmuls f12,f12,f9
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x820de1cc
	if (!ctx.cr6.lt) goto loc_820DE1CC;
	// fdivs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f7,f13,f9
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
loc_820DE1C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820DE1CC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DE008) {
	__imp__sub_820DE008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820DE1E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820de298
	if (!ctx.cr6.eq) goto loc_820DE298;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f9,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// bl 0x820ddf80
	ctx.lr = 0x820DE260;
	sub_820DDF80(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// ble cr6,0x820de280
	if (!ctx.cr6.gt) goto loc_820DE280;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820de3e8
	if (ctx.cr6.gt) goto loc_820DE3E8;
loc_820DE280:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12196
	ctx.r4.s64 = ctx.r11.s64 + 12196;
	// bl 0x822830e8
	ctx.lr = 0x820DE290;
	sub_822830E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_820DE298:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820de2b8
	if (!ctx.cr6.gt) goto loc_820DE2B8;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820de2c8
	if (ctx.cr6.gt) goto loc_820DE2C8;
loc_820DE2B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12196
	ctx.r4.s64 = ctx.r11.s64 + 12196;
	// bl 0x822830e8
	ctx.lr = 0x820DE2C8;
	sub_822830E8(ctx, base);
loc_820DE2C8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// ori r9,r11,20052
	ctx.r9.u64 = ctx.r11.u64 | 20052;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// ori r8,r10,20056
	ctx.r8.u64 = ctx.r10.u64 | 20056;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f10,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r26,r9
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// lfsx f7,r26,r8
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820de344
	if (!ctx.cr6.gt) goto loc_820DE344;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f10,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fnmsubs f7,f8,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f7,0(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f6,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x820de370
	goto loc_820DE370;
loc_820DE344:
	// fdivs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fnmsubs f7,f8,f0,f9
	ctx.f7.f64 = double(float(-(ctx.f8.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f7,0(r28)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f8,0(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,0(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820DE370:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lfs f12,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lwz r11,27624(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27624);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820de398
	if (!ctx.cr6.gt) goto loc_820DE398;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DE398:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820de3ac
	if (!ctx.cr6.gt) goto loc_820DE3AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DE3AC:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,0(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_820DE3E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DE1E0) {
	__imp__sub_820DE1E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DE3F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820de41c
	if (ctx.cr6.eq) goto loc_820DE41C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820DE41C:
	// lis r29,-32168
	ctx.r29.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,22368(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22368);
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x820DE444;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,22368(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22368);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ff750
	ctx.lr = 0x820DE464;
	sub_820FF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DE3F0) {
	__imp__sub_820DE3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DE46C) {
	__imp__sub_820DE46C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE470) {
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
	// bl 0x820de3f0
	ctx.lr = 0x820DE48C;
	sub_820DE3F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8210fb78
	ctx.lr = 0x820DE498;
	sub_8210FB78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
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

PPC_WEAK_FUNC(sub_820DE470) {
	__imp__sub_820DE470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE4C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820DE4C8;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
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
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r27,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DE514;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x820de594
	if (ctx.cr6.eq) goto loc_820DE594;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DE54C;
	sub_820DE1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,17(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DE55C;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// lfs f3,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f4.f64 = double(temp.f32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DE594;
	sub_82120408(ctx, base);
loc_820DE594:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DE4C0) {
	__imp__sub_820DE4C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820DE5A8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de014
	ctx.lr = 0x820DE5B0;
	__savefpr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r4,r28,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DE5FC;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820de84c
	if (ctx.cr6.eq) goto loc_820DE84C;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DE634;
	sub_820DE1E0(ctx, base);
	// addis r10,r28,2
	ctx.r10.s64 = ctx.r28.s64 + 131072;
	// addis r9,r28,2
	ctx.r9.s64 = ctx.r28.s64 + 131072;
	// addi r10,r10,2116
	ctx.r10.s64 = ctx.r10.s64 + 2116;
	// addi r9,r9,20032
	ctx.r9.s64 = ctx.r9.s64 + 20032;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,27600(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27600);
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fdivs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fadds f25,f6,f8
	ctx.f25.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// bl 0x8238b698
	ctx.lr = 0x820DE67C;
	sub_8238B698(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lfs f30,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f30.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
	// lfd f5,128(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// lfs f29,6048(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// fdivs f24,f30,f3
	ctx.f24.f64 = double(float(ctx.f30.f64 / ctx.f3.f64));
	// fmuls f23,f24,f29
	ctx.f23.f64 = double(float(ctx.f24.f64 * ctx.f29.f64));
	// bl 0x82141160
	ctx.lr = 0x820DE6AC;
	sub_82141160(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fctiwz f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.s64 = (ctx.f25.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f25.f64));
	// li r4,100
	ctx.r4.s64 = 100;
	// stfd f2,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f2.u64);
	// addi r28,r5,12256
	ctx.r28.s64 = ctx.r5.s64 + 12256;
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// divw r4,r26,r4
	ctx.r4.s32 = ctx.r26.s32 / ctx.r4.s32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822e84f0
	ctx.lr = 0x820DE6D4;
	sub_822E84F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820DE6E4;
	sub_8238B5A8(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f1,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// lfs f26,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f26.f64 = double(temp.f32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f31,12252(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12252);
	ctx.f31.f64 = double(temp.f32);
	// lfs f27,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f27.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f28,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f28.f64 = double(temp.f32);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmadds f1,f30,f29,f26
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 + ctx.f26.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f5,f23
	ctx.f5.f64 = ctx.f23.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fadds f2,f27,f28
	ctx.f2.f64 = double(float(ctx.f27.f64 + ctx.f28.f64));
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fmuls f29,f13,f23
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f23.f64));
	// bl 0x82133728
	ctx.lr = 0x820DE74C;
	sub_82133728(ctx, base);
	// lis r8,20971
	ctx.r8.s64 = 1374355456;
	// ori r7,r8,34079
	ctx.r7.u64 = ctx.r8.u64 | 34079;
	// mulhw r6,r26,r7
	ctx.r6.s64 = (int64_t(ctx.r26.s32) * int64_t(ctx.r7.s32)) >> 32;
	// fsubs f29,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f27.f64 - ctx.f29.f64));
	// srawi r11,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r4,r5,100
	ctx.r4.s64 = ctx.r5.s64 * 100;
	// subf r4,r4,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r4.s64;
	// bl 0x822e84f0
	ctx.lr = 0x820DE778;
	sub_822E84F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820DE788;
	sub_8238B5A8(ctx, base);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// fadds f30,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f5,f24
	ctx.f5.f64 = ctx.f24.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// fadds f2,f29,f28
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmuls f27,f10,f24
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f24.f64));
	// bl 0x82133728
	ctx.lr = 0x820DE7E0;
	sub_82133728(ctx, base);
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// fsubs f29,f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f29.f64 - ctx.f27.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f9,144(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// addi r3,r9,12244
	ctx.r3.s64 = ctx.r9.s64 + 12244;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f1,f25,f7
	ctx.f1.f64 = double(float(ctx.f25.f64 - ctx.f7.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x820DE810;
	sub_822E84F0(ctx, base);
	// lbz r8,17(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fmr f5,f23
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f23.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fadds f2,f29,f28
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f28.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82133728
	ctx.lr = 0x820DE84C;
	sub_82133728(ctx, base);
loc_820DE84C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de060
	ctx.lr = 0x820DE858;
	__restfpr_23(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DE5A0) {
	__imp__sub_820DE5A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DE85C) {
	__imp__sub_820DE85C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DE860) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820DE868;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de01c
	ctx.lr = 0x820DE870;
	__savefpr_25(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
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
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DE8BC;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820deaf4
	if (ctx.cr6.eq) goto loc_820DEAF4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DE8F4;
	sub_820DE1E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 131072;
	// ori r8,r11,20036
	ctx.r8.u64 = ctx.r11.u64 | 20036;
	// addi r9,r9,2116
	ctx.r9.s64 = ctx.r9.s64 + 2116;
	// ori r7,r10,20032
	ctx.r7.u64 = ctx.r10.u64 | 20032;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfsx f0,r29,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f13,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,27600(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27600);
	// fmadds f6,f9,f11,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f10.f64));
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// fadds f27,f5,f7
	ctx.f27.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// bl 0x82141160
	ctx.lr = 0x820DE948;
	sub_82141160(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8238b698
	ctx.lr = 0x820DE954;
	sub_8238B698(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// lfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f31.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f4,128(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fctiwz f3,f27
	ctx.f3.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// li r11,100
	ctx.r11.s64 = 100;
	// stfd f3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f3.u64);
	// addi r26,r4,12256
	ctx.r26.s64 = ctx.r4.s64 + 12256;
	// lwz r25,132(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f30,12260(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12260);
	ctx.f30.f64 = double(temp.f32);
	// divw r4,r25,r11
	ctx.r4.s32 = ctx.r25.s32 / ctx.r11.s32;
	// fcfid f2,f4
	ctx.f2.f64 = double(ctx.f4.s64);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fdivs f26,f31,f1
	ctx.f26.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// fmuls f25,f26,f30
	ctx.f25.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// bl 0x822e84f0
	ctx.lr = 0x820DE9A0;
	sub_822E84F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820DE9B0;
	sub_8238B5A8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f29,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f29.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f28,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f28.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmadds f2,f31,f30,f29
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f30.f64 + ctx.f29.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmuls f30,f12,f25
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// bl 0x821336a0
	ctx.lr = 0x820DEA04;
	sub_821336A0(ctx, base);
	// lis r9,20971
	ctx.r9.s64 = 1374355456;
	// fadds f30,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// ori r8,r9,34079
	ctx.r8.u64 = ctx.r9.u64 | 34079;
	// mulhw r7,r25,r8
	ctx.r7.s64 = (int64_t(ctx.r25.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,100
	ctx.r5.s64 = ctx.r6.s64 * 100;
	// subf r4,r5,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r5.s64;
	// bl 0x822e84f0
	ctx.lr = 0x820DEA30;
	sub_822E84F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820DEA40;
	sub_8238B5A8(ctx, base);
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// fadds f31,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// lfd f11,128(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// fmuls f29,f9,f26
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// bl 0x821336a0
	ctx.lr = 0x820DEA90;
	sub_821336A0(ctx, base);
	// extsw r3,r25
	ctx.r3.s64 = ctx.r25.s32;
	// fadds f30,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f8,128(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r3,r11,12244
	ctx.r3.s64 = ctx.r11.s64 + 12244;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f1,f27,f6
	ctx.f1.f64 = double(float(ctx.f27.f64 - ctx.f6.f64));
	// stfd f1,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x822e84f0
	ctx.lr = 0x820DEAC0;
	sub_822E84F0(ctx, base);
	// addi r4,r3,2
	ctx.r4.s64 = ctx.r3.s64 + 2;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r5,40
	ctx.r5.s64 = 40;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f4,f25
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f25.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x821336a0
	ctx.lr = 0x820DEAF4;
	sub_821336A0(ctx, base);
loc_820DEAF4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de068
	ctx.lr = 0x820DEB00;
	__restfpr_25(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DE860) {
	__imp__sub_820DE860(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DEB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DEB04) {
	__imp__sub_820DEB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DEB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820DEB10;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de018
	ctx.lr = 0x820DEB18;
	__savefpr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r4,r29,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DEB64;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820ded70
	if (ctx.cr6.eq) goto loc_820DED70;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DEB9C;
	sub_820DE1E0(ctx, base);
	// addis r9,r29,2
	ctx.r9.s64 = ctx.r29.s64 + 131072;
	// addis r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 131072;
	// addi r9,r9,2116
	ctx.r9.s64 = ctx.r9.s64 + 2116;
	// addi r8,r8,20032
	ctx.r8.s64 = ctx.r8.s64 + 20032;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfs f12,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lwz r11,27600(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27600);
	// lfs f29,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f9,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r10,27540(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27540);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r3,12268
	ctx.r3.s64 = ctx.r3.s64 + 12268;
	// lfs f0,2416(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f8,f29,f10
	ctx.f8.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// lfs f5,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fdivs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 / ctx.f6.f64));
	// fmadds f3,f9,f7,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64 + ctx.f11.f64));
	// lfs f27,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f2,f6,f8
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f8.f64));
	// fmuls f28,f4,f26
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f26.f64));
	// fmadds f1,f3,f8,f5
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f5.f64));
	// fmadds f0,f2,f0,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f8,f29,f9
	ctx.f8.f64 = double(float(ctx.f29.f64 - ctx.f9.f64));
	// fnmsubs f31,f8,f28,f27
	ctx.f31.f64 = double(float(-(ctx.f8.f64 * ctx.f28.f64 - ctx.f27.f64)));
	// fadds f30,f8,f0
	ctx.f30.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// bl 0x8238b5a8
	ctx.lr = 0x820DEC54;
	sub_8238B5A8(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f25.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f7,128(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fdivs f24,f25,f5
	ctx.f24.f64 = double(float(ctx.f25.f64 / ctx.f5.f64));
	// bl 0x8238b698
	ctx.lr = 0x820DEC78;
	sub_8238B698(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f4,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// fmuls f1,f2,f24
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f24.f64));
	// fadds f0,f1,f27
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f27.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820decac
	if (!ctx.cr6.lt) goto loc_820DECAC;
loc_820DEC9C:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820dec9c
	if (ctx.cr6.lt) goto loc_820DEC9C;
loc_820DECAC:
	// fadds f27,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f26.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// bge cr6,0x820ded70
	if (!ctx.cr6.lt) goto loc_820DED70;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lfs f26,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f26.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r29,r10,34079
	ctx.r29.u64 = ctx.r10.u64 | 34079;
	// addi r26,r11,12264
	ctx.r26.s64 = ctx.r11.s64 + 12264;
loc_820DECCC:
	// fctiwz f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// mulhw r8,r9,r29
	ctx.r8.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,100
	ctx.r6.s64 = ctx.r7.s64 * 100;
	// subf r4,r6,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r6.s64;
	// bl 0x822e84f0
	ctx.lr = 0x820DECF8;
	sub_822E84F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820DED08;
	sub_8238B5A8(ctx, base);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r23,17(r30)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r22,16(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f24,f25,f11
	ctx.f24.f64 = double(float(ctx.f25.f64 / ctx.f11.f64));
	// bl 0x82141160
	ctx.lr = 0x820DED30;
	sub_82141160(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// fmr f3,f24
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f24.f64;
	// li r5,40
	ctx.r5.s64 = 40;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// bl 0x821336a0
	ctx.lr = 0x820DED60;
	sub_821336A0(ctx, base);
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// fsubs f30,f30,f29
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(ctx.f31.f64, ctx.f27.f64);
	// blt cr6,0x820deccc
	if (ctx.cr6.lt) goto loc_820DECCC;
loc_820DED70:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de064
	ctx.lr = 0x820DED7C;
	__restfpr_24(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DEB08) {
	__imp__sub_820DEB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DED80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x820DED88;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de01c
	ctx.lr = 0x820DED90;
	__savefpr_25(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
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
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DEDDC;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820df01c
	if (ctx.cr6.eq) goto loc_820DF01C;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DEE14;
	sub_820DE1E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// ori r8,r11,20036
	ctx.r8.u64 = ctx.r11.u64 | 20036;
	// addi r9,r9,2116
	ctx.r9.s64 = ctx.r9.s64 + 2116;
	// ori r7,r10,20032
	ctx.r7.u64 = ctx.r10.u64 | 20032;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfsx f12,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,-32189
	ctx.r4.s64 = -2109538304;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lfsx f11,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f10,f12
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f6,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,2416(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,27600(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27600);
	// lfs f28,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f1,f6,f9,f8
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f8.f64));
	// lwz r10,27540(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 27540);
	// lfs f27,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f27.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f5,f0,f7
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f7.f64));
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fdivs f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fmuls f0,f4,f5
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// fmadds f12,f1,f5,f3
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fmuls f30,f2,f27
	ctx.f30.f64 = double(float(ctx.f2.f64 * ctx.f27.f64));
	// fnmsubs f11,f0,f13,f12
	ctx.f11.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f10.u64);
	// lwz r31,124(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f9,120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fsubs f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fnmsubs f31,f6,f30,f28
	ctx.f31.f64 = double(float(-(ctx.f6.f64 * ctx.f30.f64 - ctx.f28.f64)));
	// bl 0x8238b698
	ctx.lr = 0x820DEEC4;
	sub_8238B698(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfs f25,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f25.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f5,128(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// addi r3,r9,12268
	ctx.r3.s64 = ctx.r9.s64 + 12268;
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// fdivs f29,f25,f3
	ctx.f29.f64 = double(float(ctx.f25.f64 / ctx.f3.f64));
	// bl 0x8238b5a8
	ctx.lr = 0x820DEEF4;
	sub_8238B5A8(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// lfd f2,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f26,f0,f29
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82141ca8
	ctx.lr = 0x820DEF10;
	sub_82141CA8(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820def4c
	if (ctx.cr6.eq) goto loc_820DEF4C;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// lwz r10,27472(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27472);
	// lwz r9,27620(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27620);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f28
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f11.f64 + ctx.f28.f64));
	// b 0x820def68
	goto loc_820DEF68;
loc_820DEF4C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lwz r10,27620(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27620);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f28.f64));
loc_820DEF68:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820def80
	if (!ctx.cr6.lt) goto loc_820DEF80;
loc_820DEF70:
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x820def70
	if (ctx.cr6.lt) goto loc_820DEF70;
loc_820DEF80:
	// fadds f0,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// fsubs f28,f0,f26
	ctx.f28.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x820df01c
	if (!ctx.cr6.lt) goto loc_820DF01C;
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f27,f0,f25
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// ori r29,r10,34079
	ctx.r29.u64 = ctx.r10.u64 | 34079;
	// addi r26,r11,12264
	ctx.r26.s64 = ctx.r11.s64 + 12264;
loc_820DEFA8:
	// mulhw r11,r31,r29
	ctx.r11.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32)) >> 32;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r9,r10,100
	ctx.r9.s64 = ctx.r10.s64 * 100;
	// subf r4,r9,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r9.s64;
	// bl 0x822e84f0
	ctx.lr = 0x820DEFC8;
	sub_822E84F0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r22,17(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r21,16(r30)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DEFDC;
	sub_82141160(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r5,40
	ctx.r5.s64 = 40;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// bl 0x821336a0
	ctx.lr = 0x820DF00C;
	sub_821336A0(ctx, base);
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// blt cr6,0x820defa8
	if (ctx.cr6.lt) goto loc_820DEFA8;
loc_820DF01C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de068
	ctx.lr = 0x820DF028;
	__restfpr_25(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DED80) {
	__imp__sub_820DED80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DF02C) {
	__imp__sub_820DF02C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820DF038;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de01c
	ctx.lr = 0x820DF040;
	__savefpr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DF084;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f1,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lfs f27,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, ctx.f27.f64);
	// beq cr6,0x820df2bc
	if (ctx.cr6.eq) goto loc_820DF2BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x820df244
	if (!ctx.cr6.eq) goto loc_820DF244;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// ori r7,r11,20032
	ctx.r7.u64 = ctx.r11.u64 | 20032;
	// ori r6,r10,20036
	ctx.r6.u64 = ctx.r10.u64 | 20036;
	// addi r9,r9,20044
	ctx.r9.s64 = ctx.r9.s64 + 20044;
	// addi r8,r8,2116
	ctx.r8.s64 = ctx.r8.s64 + 2116;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfsx f12,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lfsx f10,r31,r6
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f12
	ctx.f9.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// ori r11,r4,20056
	ctx.r11.u64 = ctx.r4.u64 | 20056;
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f7,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// ori r3,r5,20052
	ctx.r3.u64 = ctx.r5.u64 | 20052;
	// lfsx f13,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfsx f0,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f12,f29,f0
	ctx.f12.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// lwz r11,27540(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27540);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f4,f11,f9
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f3,f11,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fdivs f11,f29,f13
	ctx.f11.f64 = double(float(ctx.f29.f64 / ctx.f13.f64));
	// fmadds f2,f5,f10,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f1,f5,f9,f3
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmuls f25,f2,f12
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fmuls f26,f1,f11
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// ble cr6,0x820df158
	if (!ctx.cr6.gt) goto loc_820DF158;
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f31,f13,f30
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// b 0x820df170
	goto loc_820DF170;
loc_820DF158:
	// fmuls f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f13,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
loc_820DF170:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df1a8
	if (ctx.cr6.eq) goto loc_820DF1A8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,18320
	ctx.r9.u64 = ctx.r11.u64 | 18320;
	// ori r8,r10,20028
	ctx.r8.u64 = ctx.r10.u64 | 20028;
	// lfsx f0,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f28,f12
	ctx.f28.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x820df1ac
	goto loc_820DF1AC;
loc_820DF1A8:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f27.f64;
loc_820DF1AC:
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820de1e0
	ctx.lr = 0x820DF1D0;
	sub_820DE1E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,20040
	ctx.r10.u64 = ctx.r11.u64 | 20040;
	// lbz r29,17(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lwzx r31,r31,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DF1EC;
	sub_82141160(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f1,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// fmr f6,f26
	ctx.f6.f64 = ctx.f26.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f9,f27
	ctx.f9.f64 = ctx.f27.f64;
	// fmr f10,f29
	ctx.f10.f64 = ctx.f29.f64;
	// fmr f11,f27
	ctx.f11.f64 = ctx.f27.f64;
	// fmr f12,f29
	ctx.f12.f64 = ctx.f29.f64;
	// fmr f13,f28
	ctx.f13.f64 = ctx.f28.f64;
	// bl 0x82120678
	ctx.lr = 0x820DF234;
	sub_82120678(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x820DF240;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_820DF244:
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DF268;
	sub_820DE1E0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r10,r11,20040
	ctx.r10.u64 = ctx.r11.u64 | 20040;
	// lbz r29,17(r30)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lwzx r31,r31,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lbz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DF284;
	sub_82141160(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f1,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f2,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lfs f8,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f6,f27
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// bl 0x82120408
	ctx.lr = 0x820DF2BC;
	sub_82120408(ctx, base);
loc_820DF2BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de068
	ctx.lr = 0x820DF2C8;
	__restfpr_25(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DF030) {
	__imp__sub_820DF030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DF2CC) {
	__imp__sub_820DF2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DF2D8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de020
	ctx.lr = 0x820DF2E0;
	__savefpr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lwz r11,27536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27536);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f31,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lbz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x820df344
	if (ctx.cr6.eq) goto loc_820DF344;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,18320
	ctx.r8.u64 = ctx.r10.u64 | 18320;
	// ori r7,r9,20028
	ctx.r7.u64 = ctx.r9.u64 | 20028;
	// lfsx f0,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fneg f30,f12
	ctx.f30.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_820DF344:
	// lfs f29,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lbz r29,17(r4)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lfs f28,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lbz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lfs f27,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820DF360;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// lfs f8,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f8.f64 = double(temp.f32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fmr f6,f8
	ctx.f6.f64 = ctx.f8.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f11,f31
	ctx.f11.f64 = ctx.f31.f64;
	// fmr f13,f30
	ctx.f13.f64 = ctx.f30.f64;
	// bl 0x82120678
	ctx.lr = 0x820DF3B0;
	sub_82120678(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x820DF3BC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DF2D0) {
	__imp__sub_820DF2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF3C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820DF3C8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de010
	ctx.lr = 0x820DF3D0;
	__savefpr_22(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r28,r9
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addis r31,r29,1
	ctx.r31.s64 = ctx.r29.s64 + 65536;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r31,r31,23360
	ctx.r31.s64 = ctx.r31.s64 + 23360;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820df64c
	if (ctx.cr6.eq) goto loc_820DF64C;
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// addi r8,r1,180
	ctx.r8.s64 = ctx.r1.s64 + 180;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DF428;
	sub_820DE1E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r11,1205
	ctx.r3.s64 = ctx.r11.s64 + 1205;
	// bl 0x821201a0
	ctx.lr = 0x820DF43C;
	sub_821201A0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8238bd98
	ctx.lr = 0x820DF444;
	sub_8238BD98(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// lfd f13,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12272);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f8,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f8
	ctx.cr6.compare(ctx.f13.f64, ctx.f8.f64);
	// ble cr6,0x820df64c
	if (!ctx.cr6.gt) goto loc_820DF64C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,20016
	ctx.r9.u64 = ctx.r11.u64 | 20016;
	// lfs f9,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r10,20020
	ctx.r7.u64 = ctx.r10.u64 | 20020;
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f13,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fadds f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f6,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmadds f5,f6,f9,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 + ctx.f0.f64));
	// lfs f9,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f4,r29,r7
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmadds f3,f4,f12,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f31,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fdivs f2,f9,f7
	ctx.f2.f64 = double(float(ctx.f9.f64 / ctx.f7.f64));
	// fmr f12,f10
	ctx.f12.f64 = ctx.f10.f64;
	// fsubs f1,f0,f5
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fsubs f5,f11,f5
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f5.f64));
	// fsubs f7,f13,f3
	ctx.f7.f64 = double(float(ctx.f13.f64 - ctx.f3.f64));
	// fsubs f6,f10,f3
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmadds f30,f1,f2,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fmadds f25,f5,f2,f31
	ctx.f25.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fmadds f29,f7,f2,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fmadds f26,f6,f2,f31
	ctx.f26.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f31.f64));
	// fcmpu cr6,f30,f8
	ctx.cr6.compare(ctx.f30.f64, ctx.f8.f64);
	// bge cr6,0x820df51c
	if (!ctx.cr6.lt) goto loc_820DF51C;
	// fneg f10,f30
	ctx.f10.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fsubs f7,f25,f30
	ctx.f7.f64 = double(float(ctx.f25.f64 - ctx.f30.f64));
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmr f30,f8
	ctx.f30.f64 = ctx.f8.f64;
	// fdivs f5,f10,f7
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fmadds f27,f5,f6,f0
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f0.f64));
loc_820DF51C:
	// fcmpu cr6,f29,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f8.f64);
	// bge cr6,0x820df53c
	if (!ctx.cr6.lt) goto loc_820DF53C;
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fsubs f10,f26,f29
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fsubs f7,f12,f13
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmr f29,f8
	ctx.f29.f64 = ctx.f8.f64;
	// fdivs f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmadds f28,f6,f7,f13
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f13.f64));
loc_820DF53C:
	// fcmpu cr6,f25,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f9.f64);
	// ble cr6,0x820df55c
	if (!ctx.cr6.gt) goto loc_820DF55C;
	// fsubs f0,f25,f30
	ctx.f0.f64 = double(float(ctx.f25.f64 - ctx.f30.f64));
	// fsubs f13,f9,f30
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fsubs f11,f11,f27
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// fmr f25,f9
	ctx.f25.f64 = ctx.f9.f64;
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f11,f10,f11,f27
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f27.f64));
loc_820DF55C:
	// fcmpu cr6,f26,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f9.f64);
	// ble cr6,0x820df57c
	if (!ctx.cr6.gt) goto loc_820DF57C;
	// fsubs f0,f26,f29
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fsubs f13,f9,f29
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f29.f64));
	// fsubs f12,f12,f28
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fmr f26,f9
	ctx.f26.f64 = ctx.f9.f64;
	// fdivs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fmadds f12,f10,f12,f28
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f28.f64));
loc_820DF57C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r25,17(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r24,16(r30)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fsubs f24,f12,f28
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f12.f64 - ctx.f28.f64));
	// fsubs f23,f11,f27
	ctx.f23.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// bl 0x82141160
	ctx.lr = 0x820DF594;
	sub_82141160(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f6,f29
	ctx.f6.f64 = ctx.f29.f64;
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// fmr f8,f26
	ctx.f8.f64 = ctx.f26.f64;
	// bl 0x82120408
	ctx.lr = 0x820DF5C8;
	sub_82120408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// srawi r10,r11,7
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 7;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820df64c
	if (ctx.cr6.eq) goto loc_820DF64C;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lbz r27,17(r30)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lbz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// addi r9,r11,-22896
	ctx.r9.s64 = ctx.r11.s64 + -22896;
	// ori r8,r10,20024
	ctx.r8.u64 = ctx.r10.u64 | 20024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r31,16160(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16160);
	// lfsx f22,r29,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	ctx.f22.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820DF604;
	sub_82141160(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f9,f30
	ctx.f9.f64 = ctx.f30.f64;
	// fmr f10,f25
	ctx.f10.f64 = ctx.f25.f64;
	// fmr f11,f29
	ctx.f11.f64 = ctx.f29.f64;
	// fmr f12,f26
	ctx.f12.f64 = ctx.f26.f64;
	// fmr f13,f22
	ctx.f13.f64 = ctx.f22.f64;
	// bl 0x82120678
	ctx.lr = 0x820DF64C;
	sub_82120678(ctx, base);
loc_820DF64C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de05c
	ctx.lr = 0x820DF658;
	__restfpr_22(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DF3C0) {
	__imp__sub_820DF3C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DF65C) {
	__imp__sub_820DF65C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f1
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f3.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df68c
	if (!ctx.cr6.gt) goto loc_820DF68C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DF68C:
	// lfs f9,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f8,f10,f4
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f4.f64));
	// fsubs f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df6a8
	if (!ctx.cr6.gt) goto loc_820DF6A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DF6A8:
	// lfs f13,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// fadds f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f13,f5,f11
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df6c8
	if (!ctx.cr6.gt) goto loc_820DF6C8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DF6C8:
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f2,f4
	ctx.f12.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f13,f9,f8
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820df6e8
	if (!ctx.cr6.gt) goto loc_820DF6E8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820DF6E8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820df6f8
	if (!ctx.cr6.gt) goto loc_820DF6F8;
	// fsubs f1,f10,f10
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f10.f64));
	// blr 
	return;
loc_820DF6F8:
	// fsubs f1,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DF660) {
	__imp__sub_820DF660(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820DF708;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de020
	ctx.lr = 0x820DF710;
	__savefpr_26(ctx, base);
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
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r4,r31,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820DF758;
	sub_820DE3F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8210fb78
	ctx.lr = 0x820DF764;
	sub_8210FB78(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f13,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f26,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,12(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// fcmpu cr6,f10,f26
	ctx.cr6.compare(ctx.f10.f64, ctx.f26.f64);
	// beq cr6,0x820df968
	if (ctx.cr6.eq) goto loc_820DF968;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// bl 0x820de1e0
	ctx.lr = 0x820DF7BC;
	sub_820DE1E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f28,f0,f29,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// fmadds f27,f12,f29,f11
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f11.f64));
	// bne cr6,0x820df834
	if (!ctx.cr6.eq) goto loc_820DF834;
	// stfs f26,96(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// stfs f26,100(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r8,r28,28
	ctx.r8.s64 = ctx.r28.s64 + 28;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r28,27616(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27616);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r11,27456(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27456);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f30,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x820de008
	ctx.lr = 0x820DF828;
	sub_820DE008(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820df8b8
	goto loc_820DF8B8;
loc_820DF834:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lwz r10,27584(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27584);
	// lwz r9,27500(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27500);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82141ca8
	ctx.lr = 0x820DF864;
	sub_82141CA8(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820df884
	if (ctx.cr6.eq) goto loc_820DF884;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29932);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820DF884:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820df8b0
	if (!ctx.cr6.eq) goto loc_820DF8B0;
	// bl 0x82141ca8
	ctx.lr = 0x820DF890;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820df8b0
	if (ctx.cr6.eq) goto loc_820DF8B0;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f30,f0,f30
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
loc_820DF8B0:
	// fmr f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f26.f64;
	// fmr f13,f26
	ctx.f13.f64 = ctx.f26.f64;
loc_820DF8B8:
	// fnmsubs f12,f31,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(-(ctx.f31.f64 * ctx.f29.f64 - ctx.f28.f64)));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fnmsubs f11,f30,f29,f27
	ctx.f11.f64 = double(float(-(ctx.f30.f64 * ctx.f29.f64 - ctx.f27.f64)));
	// fadds f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f27,f11,f13
	ctx.f27.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bne cr6,0x820df8ec
	if (!ctx.cr6.eq) goto loc_820DF8EC;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820df8ec
	if (ctx.cr6.eq) goto loc_820DF8EC;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// b 0x820df930
	goto loc_820DF930;
loc_820DF8EC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,20028
	ctx.r9.u64 = ctx.r11.u64 | 20028;
	// ori r8,r10,18320
	ctx.r8.u64 = ctx.r10.u64 | 18320;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f0,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r31,r8
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f12,f0
	ctx.f26.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x820DF91C;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f26,f11
	ctx.f10.f64 = double(float(ctx.f26.f64 - ctx.f11.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
loc_820DF930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r31,17(r26)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r26.u32 + 17);
	// lbz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820DF940;
	sub_82141160(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// bl 0x820ea2f0
	ctx.lr = 0x820DF968;
	sub_820EA2F0(ctx, base);
loc_820DF968:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de06c
	ctx.lr = 0x820DF974;
	__restfpr_26(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DF700) {
	__imp__sub_820DF700(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DF978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820DF980;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de004
	ctx.lr = 0x820DF988;
	__savefpr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r11,27624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27624);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f28,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// ble cr6,0x820dfc58
	if (!ctx.cr6.gt) goto loc_820DFC58;
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
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwzx r4,r26,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r7.u32);
	// bl 0x820de3f0
	ctx.lr = 0x820DF9EC;
	sub_820DE3F0(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// beq cr6,0x820dfc58
	if (ctx.cr6.eq) goto loc_820DFC58;
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820DFA1C;
	sub_820DE1E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f24,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f24,f31
	ctx.f0.f64 = double(float(ctx.f24.f64 * ctx.f31.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x820dfa38
	if (!ctx.cr6.gt) goto loc_820DFA38;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_820DFA38:
	// lfs f25,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f0,f25,f31
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f31.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x820dfa4c
	if (!ctx.cr6.gt) goto loc_820DFA4C;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_820DFA4C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,5488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f23,f30,f0
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x820DFA60;
	sub_82141160(ctx, base);
	// lfs f27,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f27.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f0,f27,f25
	ctx.f0.f64 = double(float(ctx.f27.f64 + ctx.f25.f64));
	// lfs f26,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f22,f26,f30
	ctx.f22.f64 = double(float(ctx.f26.f64 - ctx.f30.f64));
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fsubs f21,f0,f30
	ctx.f21.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFAB4;
	sub_82120408(ctx, base);
	// fsubs f20,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f20.f64 = double(float(ctx.f27.f64 - ctx.f30.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFAF0;
	sub_82120408(ctx, base);
	// fadds f13,f26,f24
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f26.f64 + ctx.f24.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fsubs f19,f13,f30
	ctx.f19.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFB30;
	sub_82120408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f4,f23
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFB68;
	sub_82120408(ctx, base);
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fsubs f25,f25,f23
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f23.f64));
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fadds f27,f27,f30
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// fmr f1,f22
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFBA8;
	sub_82120408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f7,f29
	ctx.f7.f64 = ctx.f29.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFBE0;
	sub_82120408(ctx, base);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fsubs f27,f24,f23
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f24.f64 - ctx.f23.f64));
	// fadds f30,f26,f30
	ctx.f30.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFC20;
	sub_82120408(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f8,f29
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f29.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x820DFC58;
	sub_82120408(ctx, base);
loc_820DFC58:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de050
	ctx.lr = 0x820DFC64;
	__restfpr_19(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DF978) {
	__imp__sub_820DF978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27536);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dfc90
	if (ctx.cr6.eq) goto loc_820DFC90;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,18320
	ctx.r10.u64 = ctx.r11.u64 | 18320;
	// lfsx f1,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822d5368
	sub_822D5368(ctx, base);
	return;
loc_820DFC90:
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,20032
	ctx.r11.s64 = ctx.r11.s64 + 20032;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820DFC68) {
	__imp__sub_820DFC68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DFCAC) {
	__imp__sub_820DFCAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFCB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820DFCB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820dfd10
	if (!ctx.cr6.eq) goto loc_820DFD10;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r9,27588(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27588);
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lwz r8,27596(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27596);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x820dfd30
	goto loc_820DFD30;
loc_820DFD10:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r11,27492(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27492);
	// lwz r10,27568(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27568);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820DFD30:
	// bl 0x82141ca8
	ctx.lr = 0x820DFD34;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820dfda8
	if (ctx.cr6.eq) goto loc_820DFDA8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820dfda8
	if (!ctx.cr6.eq) goto loc_820DFDA8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-29932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29932);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82141ca8
	ctx.lr = 0x820DFD78;
	sub_82141CA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820dfda8
	if (ctx.cr6.eq) goto loc_820DFDA8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820DFDA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DFCB0) {
	__imp__sub_820DFCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFDB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820DFDB8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x820DFDC0;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,1124(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1124);
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r9,-15680
	ctx.r10.s64 = ctx.r9.s64 + -15680;
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ble cr6,0x820dff74
	if (!ctx.cr6.gt) goto loc_820DFF74;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// lwz r8,27496(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27496);
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820dff74
	if (!ctx.cr6.gt) goto loc_820DFF74;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// subf r7,r11,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r11.s64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r11,27628(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27628);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// li r4,2
	ctx.r4.s64 = 2;
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f31,f10
	ctx.f31.f64 = double(float(ctx.f10.f64));
	// fdivs f30,f12,f7
	ctx.f30.f64 = double(float(ctx.f12.f64 / ctx.f7.f64));
	// bl 0x82106d88
	ctx.lr = 0x820DFEA0;
	sub_82106D88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x820dfebc
	if (!ctx.cr6.gt) goto loc_820DFEBC;
loc_820DFEAC:
	// fsubs f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bgt cr6,0x820dfeac
	if (ctx.cr6.gt) goto loc_820DFEAC;
loc_820DFEBC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fdivs f0,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f30.f64));
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820dfeec
	if (!ctx.cr6.gt) goto loc_820DFEEC;
	// fsubs f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f13,f11,f13,f12
	ctx.f13.f64 = double(float(-(ctx.f11.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// b 0x820dfef0
	goto loc_820DFEF0;
loc_820DFEEC:
	// fmuls f13,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_820DFEF0:
	// stfs f13,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// bge cr6,0x820dff00
	if (!ctx.cr6.lt) goto loc_820DFF00;
	// stfs f29,124(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_820DFF00:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,27528(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27528);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// beq cr6,0x820dff1c
	if (ctx.cr6.eq) goto loc_820DFF1C;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
loc_820DFF1C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r3,1132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1132);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820fdca0
	ctx.lr = 0x820DFF38;
	sub_820FDCA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lbz r28,17(r29)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,16(r29)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// fnmsubs f29,f30,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(-(ctx.f30.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// bl 0x82141160
	ctx.lr = 0x820DFF50;
	sub_82141160(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// fnmsubs f1,f30,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f30.f64 * ctx.f31.f64 - ctx.f28.f64)));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820DFF74;
	sub_822B7F70(ctx, base);
loc_820DFF74:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x820DFF80;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820DFDB0) {
	__imp__sub_820DFDB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820DFF84) {
	__imp__sub_820DFF84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820DFF88) {
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
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,520(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r3,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// lfs f13,5816(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5816);
	ctx.f13.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x820DFFD8;
	sub_823DE720(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7656(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7656);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f0,f8
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fsubs f5,f13,f9
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f12,6020(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 6020);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fadds f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f1,f5,f2,f9
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f9.f64));
	// stfs f1,0(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f0,f6,f2,f8
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f8.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f13,f4,f2,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 + ctx.f7.f64));
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
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

PPC_WEAK_FUNC(sub_820DFF88) {
	__imp__sub_820DFF88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0048) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r11,27576(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27576);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e00cc
	if (!ctx.cr6.lt) goto loc_820E00CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r9,12280
	ctx.r5.s64 = ctx.r9.s64 + 12280;
	// lfs f0,5876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e8368
	ctx.lr = 0x820E00BC;
	sub_822E8368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E00CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r11,12276
	ctx.r5.s64 = ctx.r11.s64 + 12276;
	// bl 0x822e8368
	ctx.lr = 0x820E00E4;
	sub_822E8368(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E0048) {
	__imp__sub_820E0048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E00F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E00F4) {
	__imp__sub_820E00F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E00F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E0100;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x820E0108;
	__savefpr_28(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// li r5,64
	ctx.r5.s64 = 64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// fmr f28,f5
	ctx.f28.f64 = ctx.f5.f64;
	// lfs f0,7656(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7656);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lfs f12,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
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
	// bl 0x820e0048
	ctx.lr = 0x820E0160;
	sub_820E0048(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c1bf8
	ctx.lr = 0x820E0174;
	sub_822C1BF8(ctx, base);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r28,17(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f0,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lbz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fnmsubs f31,f11,f0,f31
	ctx.f31.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f31.f64)));
	// bl 0x82141160
	ctx.lr = 0x820E01A4;
	sub_82141160(ctx, base);
	// fadds f10,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// lfs f0,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// bl 0x822c1ef8
	ctx.lr = 0x820E01E8;
	sub_822C1EF8(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x820E01F4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E00F8) {
	__imp__sub_820E00F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E01F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820E0200;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82125710
	ctx.lr = 0x820E0250;
	sub_82125710(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e0344
	if (!ctx.cr6.eq) goto loc_820E0344;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x820e027c
	if (!ctx.cr6.gt) goto loc_820E027C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12312
	ctx.r3.s64 = ctx.r11.s64 + 12312;
	// b 0x820e0298
	goto loc_820E0298;
loc_820E027C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27612);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820e0344
	if (!ctx.cr6.lt) goto loc_820E0344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,12288
	ctx.r3.s64 = ctx.r11.s64 + 12288;
loc_820E0298:
	// bl 0x822c4080
	ctx.lr = 0x820E029C;
	sub_822C4080(ctx, base);
	// lis r25,-32191
	ctx.r25.s64 = -2109669376;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f1,528(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 528);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822c1bf8
	ctx.lr = 0x820E02B4;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r9,-32191
	ctx.r9.s64 = -2109669376;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f13,f0,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f7,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,524(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fadds f30,f7,f13
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fnmsubs f29,f9,f0,f8
	ctx.f29.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// bl 0x820dff88
	ctx.lr = 0x820E02FC;
	sub_820DFF88(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r28,17(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f31,528(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 528);
	ctx.f31.f64 = double(temp.f32);
	// lbz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E0310;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820E0344;
	sub_822C1CE8(ctx, base);
loc_820E0344:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
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

PPC_WEAK_FUNC(sub_820E01F8) {
	__imp__sub_820E01F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x820E0360;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823ddff0
	ctx.lr = 0x820E0368;
	__savefpr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f17,f1
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = ctx.f1.f64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r4,r27,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820E03B8;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lfs f30,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x820e0730
	if (ctx.cr6.eq) goto loc_820E0730;
	// lfs f0,12(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x820e03dc
	if (!ctx.cr6.gt) goto loc_820E03DC;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_820E03DC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f0,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addis r19,r27,2
	ctx.r19.s64 = ctx.r27.s64 + 131072;
	// lfs f13,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// ori r9,r11,18320
	ctx.r9.u64 = ctx.r11.u64 | 18320;
	// lfs f12,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r19,r19,20028
	ctx.r19.s64 = ctx.r19.s64 + 20028;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lis r28,-32189
	ctx.r28.s64 = -2109538304;
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f10,r27,r9
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lfs f11,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lwz r11,27436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27436);
	// lfs f23,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f23.f64 = double(temp.f32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lfs f0,2420(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f23
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// fneg f31,f9
	ctx.f31.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f6,f31,f0
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fsubs f25,f6,f7
	ctx.f25.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fadds f24,f7,f6
	ctx.f24.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// bl 0x820de1e0
	ctx.lr = 0x820E0468;
	sub_820DE1E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r26,17(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r22,16(r30)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E0478;
	sub_82141160(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f19,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f19.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f29,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f29.f64 = double(temp.f32);
	// lfs f18,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f18.f64 = double(temp.f32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lfs f28,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f28.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f19
	ctx.f1.f64 = ctx.f19.f64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// lfs f26,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f26.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f18
	ctx.f3.f64 = ctx.f18.f64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// fmr f5,f25
	ctx.f5.f64 = ctx.f25.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f7,f24
	ctx.f7.f64 = ctx.f24.f64;
	// fmr f8,f26
	ctx.f8.f64 = ctx.f26.f64;
	// bl 0x82120408
	ctx.lr = 0x820E04C8;
	sub_82120408(ctx, base);
	// lbz r3,559(r1)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r1.u32 + 559);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e0730
	if (ctx.cr6.eq) goto loc_820E0730;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820dfcb0
	ctx.lr = 0x820E04E4;
	sub_820DFCB0(ctx, base);
	// fmadds f28,f28,f23,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f23.f64 + ctx.f29.f64));
	// lwz r11,27436(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27436);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fneg f1,f31
	ctx.f1.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lfs f0,5812(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f13,f0
	ctx.f22.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f25,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f25.f64 = double(temp.f32);
	// fnmsubs f21,f25,f23,f28
	ctx.f21.f64 = double(float(-(ctx.f25.f64 * ctx.f23.f64 - ctx.f28.f64)));
	// bl 0x822d77c0
	ctx.lr = 0x820E050C;
	sub_822D77C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r26,548(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f24,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f24.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f16,f1
	ctx.f16.f64 = ctx.f1.f64;
	// addis r29,r27,2
	ctx.r29.s64 = ctx.r27.s64 + 131072;
	// fmr f14,f30
	ctx.f14.f64 = ctx.f30.f64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f20,6912(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f20.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// li r20,32
	ctx.r20.s64 = 32;
	// lfs f15,12336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12336);
	ctx.f15.f64 = double(temp.f32);
	// addi r29,r29,20100
	ctx.r29.s64 = ctx.r29.s64 + 20100;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// ori r25,r9,2116
	ctx.r25.u64 = ctx.r9.u64 | 2116;
	// lis r22,-32256
	ctx.r22.s64 = -2113929216;
	// ori r21,r8,2124
	ctx.r21.u64 = ctx.r8.u64 | 2124;
loc_820E0558:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e06f0
	if (!ctx.cr6.eq) goto loc_820E06F0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820E0568:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e44e0
	ctx.lr = 0x820E057C;
	sub_820E44E0(ctx, base);
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bne cr6,0x820e05a4
	if (!ctx.cr6.eq) goto loc_820E05A4;
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bne cr6,0x820e05a4
	if (!ctx.cr6.eq) goto loc_820E05A4;
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// beq cr6,0x820e06e4
	if (ctx.cr6.eq) goto loc_820E06E4;
loc_820E05A4:
	// lfsx f0,r27,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r27,r25
	ctx.r11.u64 = ctx.r27.u64 + ctx.r25.u64;
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,7672(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 7672);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f12,f2,f2
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmadds f10,f1,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fsqrts f9,f10
	ctx.f9.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmuls f29,f9,f0
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f20,f29
	ctx.cr6.compare(ctx.f20.f64, ctx.f29.f64);
	// ble cr6,0x820e05e0
	if (!ctx.cr6.gt) goto loc_820E05E0;
	// lfsx f0,r27,r21
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r21.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f20,f29
	ctx.f20.f64 = ctx.f29.f64;
	// fsubs f14,f0,f11
	ctx.f14.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
loc_820E05E0:
	// bl 0x823de9c8
	ctx.lr = 0x820E05E4;
	sub_823DE9C8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f15
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f15.f64));
	// fsubs f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820E05F8;
	sub_822D77C0(ctx, base);
	// fmr f2,f16
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f16.f64;
	// bl 0x822d7818
	ctx.lr = 0x820E0600;
	sub_822D7818(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f11,f22
	ctx.f11.u64 = ctx.f22.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820e0618
	if (!ctx.cr6.lt) goto loc_820E0618;
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
	// b 0x820e0638
	goto loc_820E0638;
loc_820E0618:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x820e0628
	if (!ctx.cr6.gt) goto loc_820E0628;
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// b 0x820e0638
	goto loc_820E0638;
loc_820E0628:
	// lfs f13,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f22
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f22.f64));
	// fmuls f11,f22,f13
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f13.f64));
	// fdivs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_820E0638:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1132(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1132);
	// bl 0x820fdca0
	ctx.lr = 0x820E0644;
	sub_820FDCA0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r17,17(r30)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r16,16(r30)
	ctx.r16.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// fmadds f31,f31,f18,f19
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f18.f64 + ctx.f19.f64));
	// bl 0x82141160
	ctx.lr = 0x820E065C;
	sub_82141160(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// fnmsubs f1,f24,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f24.f64 * ctx.f23.f64 - ctx.f31.f64)));
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f7,f26
	ctx.f7.f64 = ctx.f26.f64;
	// fmr f8,f26
	ctx.f8.f64 = ctx.f26.f64;
	// bl 0x82120408
	ctx.lr = 0x820E0694;
	sub_82120408(ctx, base);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stfs f27,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f5,f17
	ctx.f5.f64 = ctx.f17.f64;
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820e00f8
	ctx.lr = 0x820E06C4;
	sub_820E00F8(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dfdb0
	ctx.lr = 0x820E06E4;
	sub_820DFDB0(ctx, base);
loc_820E06E4:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// blt cr6,0x820e0568
	if (ctx.cr6.lt) goto loc_820E0568;
loc_820E06F0:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r29,r29,1160
	ctx.r29.s64 = ctx.r29.s64 + 1160;
	// bne 0x820e0558
	if (!ctx.cr0.eq) goto loc_820E0558;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27464);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f20,f0
	ctx.cr6.compare(ctx.f20.f64, ctx.f0.f64);
	// bgt cr6,0x820e0730
	if (ctx.cr6.gt) goto loc_820E0730;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f14
	ctx.f1.f64 = ctx.f14.f64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e01f8
	ctx.lr = 0x820E0730;
	sub_820E01F8(ctx, base);
loc_820E0730:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de03c
	ctx.lr = 0x820E073C;
	__restfpr_14(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E0358) {
	__imp__sub_820E0358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820E0748;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r28,r3,2
	ctx.r28.s64 = ctx.r3.s64 + 131072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lfs f31,12340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12340);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r27,0
	ctx.r27.s64 = 0;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// addi r28,r28,20100
	ctx.r28.s64 = ctx.r28.s64 + 20100;
	// li r25,32
	ctx.r25.s64 = 32;
	// ori r26,r11,2116
	ctx.r26.u64 = ctx.r11.u64 | 2116;
	// ori r29,r10,2124
	ctx.r29.u64 = ctx.r10.u64 | 2124;
loc_820E0794:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e0810
	if (!ctx.cr6.eq) goto loc_820E0810;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820E07A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820e44e0
	ctx.lr = 0x820E07B8;
	sub_820E44E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820e07dc
	if (!ctx.cr6.eq) goto loc_820E07DC;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x820e07dc
	if (!ctx.cr6.eq) goto loc_820E07DC;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x820e0804
	if (ctx.cr6.eq) goto loc_820E0804;
loc_820E07DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r4,r31,r26
	ctx.r4.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bl 0x822d48f0
	ctx.lr = 0x820E07E8;
	sub_822D48F0(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x820e0804
	if (!ctx.cr6.lt) goto loc_820E0804;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r27,1
	ctx.r27.s64 = 1;
	// lfsx f13,r31,r29
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fsubs f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_820E0804:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x820e07a4
	if (ctx.cr6.lt) goto loc_820E07A4;
loc_820E0810:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,1160
	ctx.r28.s64 = ctx.r28.s64 + 1160;
	// bne 0x820e0794
	if (!ctx.cr0.eq) goto loc_820E0794;
	// clrlwi r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e084c
	if (ctx.cr6.eq) goto loc_820E084C;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x820e0834
	if (ctx.cr6.eq) goto loc_820E0834;
	// stfs f29,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
loc_820E0834:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820E084C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2424(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f29,-96(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E0740) {
	__imp__sub_820E0740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E0870;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r7,r9,-15680
	ctx.r7.s64 = ctx.r9.s64 + -15680;
	// lwz r11,22368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22368);
	// ori r6,r8,61924
	ctx.r6.u64 = ctx.r8.u64 | 61924;
	// lfs f0,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// addis r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 131072;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mullw r4,r3,r6
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f0,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r10,20072
	ctx.r3.s64 = ctx.r10.s64 + 20072;
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lwzx r29,r4,r3
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// bl 0x823dde20
	ctx.lr = 0x820E08C0;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,22368(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22368);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ff750
	ctx.lr = 0x820E08E0;
	sub_820FF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E0868) {
	__imp__sub_820E0868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E08E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820E08F0;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de028
	ctx.lr = 0x820E08F8;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lwz r11,22368(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22368);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r4,r6,20072
	ctx.r4.u64 = ctx.r6.u64 | 20072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f29,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// fadds f1,f12,f29
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// lwzx r24,r28,r4
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	// bl 0x823dde20
	ctx.lr = 0x820E0960;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,22368(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22368);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x820ff750
	ctx.lr = 0x820E0980;
	sub_820FF750(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f31,5484(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x820e0bf4
	if (ctx.cr6.eq) goto loc_820E0BF4;
	// lfs f0,12(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bge cr6,0x820e09bc
	if (!ctx.cr6.lt) goto loc_820E09BC;
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_820E09BC:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820e0740
	ctx.lr = 0x820E09C8;
	sub_820E0740(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,7672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x820e0bf4
	if (ctx.cr6.lt) goto loc_820E0BF4;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r11,27464(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27464);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e0b04
	if (!ctx.cr6.lt) goto loc_820E0B04;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,27476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27476);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e0a28
	if (!ctx.cr6.gt) goto loc_820E0A28;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,12372
	ctx.r5.s64 = ctx.r11.s64 + 12372;
	// bl 0x822e8368
	ctx.lr = 0x820E0A24;
	sub_822E8368(ctx, base);
	// b 0x820e0a68
	goto loc_820E0A68;
loc_820E0A28:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,27612(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27612);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e0a54
	if (!ctx.cr6.lt) goto loc_820E0A54;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,12364
	ctx.r5.s64 = ctx.r11.s64 + 12364;
	// bl 0x822e8368
	ctx.lr = 0x820E0A50;
	sub_822E8368(ctx, base);
	// b 0x820e0a68
	goto loc_820E0A68;
loc_820E0A54:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,12356
	ctx.r5.s64 = ctx.r11.s64 + 12356;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e8368
	ctx.lr = 0x820E0A68;
	sub_822E8368(ctx, base);
loc_820E0A68:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c1bf8
	ctx.lr = 0x820E0A7C;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fmadds f31,f9,f29,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f29.f64 + ctx.f11.f64));
	// bl 0x820dff88
	ctx.lr = 0x820E0AAC;
	sub_820DFF88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f29,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lbz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E0AC0;
	sub_82141160(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820E0AF4;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820E0B00;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820E0B04:
	// stfd f1,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r11,12348
	ctx.r5.s64 = ctx.r11.s64 + 12348;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e8368
	ctx.lr = 0x820E0B18;
	sub_822E8368(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822c1bf8
	ctx.lr = 0x820E0B2C;
	sub_822C1BF8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lbz r28,17(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f31,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lbz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// frsp f28,f11
	ctx.f28.f64 = double(float(ctx.f11.f64));
	// fsubs f10,f0,f28
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// fmadds f29,f10,f29,f13
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f13.f64));
	// bl 0x82141160
	ctx.lr = 0x820E0B68;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820E0B9C;
	sub_822C1CE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lbz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E0BB0;
	sub_82141160(ctx, base);
	// fadds f9,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r4,r6,12344
	ctx.r4.s64 = ctx.r6.s64 + 12344;
	// lfs f0,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x820E0BF4;
	sub_822C1CE8(ctx, base);
loc_820E0BF4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de074
	ctx.lr = 0x820E0C00;
	__restfpr_28(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E08E8) {
	__imp__sub_820E08E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E0C04) {
	__imp__sub_820E0C04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E0C10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e0c68
	if (!ctx.cr6.eq) goto loc_820E0C68;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r9,27564(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27564);
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lwz r8,27444(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27444);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x820e0c88
	goto loc_820E0C88;
loc_820E0C68:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r11,27532(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27532);
	// lwz r10,27488(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27488);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E0C88:
	// bl 0x82141ca8
	ctx.lr = 0x820E0C8C;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e0d00
	if (ctx.cr6.eq) goto loc_820E0D00;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820e0d00
	if (!ctx.cr6.eq) goto loc_820E0D00;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-29932(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29932);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f9,0(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// bl 0x82141ca8
	ctx.lr = 0x820E0CD0;
	sub_82141CA8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e0d00
	if (ctx.cr6.eq) goto loc_820E0D00;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,21476(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21476);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_820E0D00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E0C08) {
	__imp__sub_820E0C08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E0D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x820E0D10;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823ddff0
	ctx.lr = 0x820E0D18;
	__savefpr_14(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
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
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,20072
	ctx.r7.u64 = ctx.r8.u64 | 20072;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r4,r30,r7
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x820de3f0
	ctx.lr = 0x820E0D60;
	sub_820DE3F0(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f14,f1
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = ctx.f1.f64;
	// lfs f25,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f1,f25
	ctx.cr6.compare(ctx.f1.f64, ctx.f25.f64);
	// beq cr6,0x820e1150
	if (ctx.cr6.eq) goto loc_820E1150;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820E0D98;
	sub_820DE1E0(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// lfs f21,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f21.f64 = double(temp.f32);
	// lwz r11,27536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27536);
	// lfs f20,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f20.f64 = double(temp.f32);
	// lfs f17,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f16,f0,f21,f20
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f21.f64 + ctx.f20.f64));
	// fmadds f15,f13,f21,f17
	ctx.f15.f64 = double(float(ctx.f13.f64 * ctx.f21.f64 + ctx.f17.f64));
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e0de8
	if (ctx.cr6.eq) goto loc_820E0DE8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r11,18320
	ctx.r10.u64 = ctx.r11.u64 | 18320;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lfsx f1,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x820E0DE4;
	sub_822D5368(ctx, base);
	// b 0x820e0e00
	goto loc_820E0E00;
loc_820E0DE8:
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r11,r11,20032
	ctx.r11.s64 = ctx.r11.s64 + 20032;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_820E0E00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r16,32
	ctx.r16.s64 = 32;
	// addi r24,r24,20100
	ctx.r24.s64 = ctx.r24.s64 + 20100;
	// lfs f22,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f22.f64 = double(temp.f32);
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// ori r26,r10,2116
	ctx.r26.u64 = ctx.r10.u64 | 2116;
	// lis r17,-32189
	ctx.r17.s64 = -2109538304;
	// lis r18,-32189
	ctx.r18.s64 = -2109538304;
	// lis r22,-32189
	ctx.r22.s64 = -2109538304;
	// lis r21,-32189
	ctx.r21.s64 = -2109538304;
loc_820E0E30:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x820e1144
	if (!ctx.cr6.eq) goto loc_820E1144;
	// li r19,0
	ctx.r19.s64 = 0;
loc_820E0E40:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x820e44e0
	ctx.lr = 0x820E0E54;
	sub_820E44E0(ctx, base);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bne cr6,0x820e0e78
	if (!ctx.cr6.eq) goto loc_820E0E78;
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// bne cr6,0x820e0e78
	if (!ctx.cr6.eq) goto loc_820E0E78;
	// lfs f12,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// beq cr6,0x820e1138
	if (ctx.cr6.eq) goto loc_820E1138;
loc_820E0E78:
	// lfsx f12,r30,r26
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r7,r30,r26
	ctx.r7.u64 = ctx.r30.u64 + ctx.r26.u64;
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,27580(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 27580);
	// lfs f8,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r10,27540(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 27540);
	// stfs f10,144(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f7,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f5,f11,f11
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fsqrts f0,f4
	ctx.f0.f64 = double(float(sqrt(ctx.f4.f64)));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820e0ed4
	if (ctx.cr6.gt) goto loc_820E0ED4;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820e0edc
	if (!ctx.cr6.lt) goto loc_820E0EDC;
loc_820E0ED4:
	// stfs f13,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E0EDC:
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// beq cr6,0x820e0f28
	if (ctx.cr6.eq) goto loc_820E0F28;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lwz r9,27516(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 27516);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f9,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f22
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f22.f64));
	// fmadds f7,f8,f0,f22
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f22.f64));
	// stfs f7,156(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// b 0x820e0f2c
	goto loc_820E0F2C;
loc_820E0F28:
	// stfs f25,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820E0F2C:
	// stfs f25,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stfs f25,108(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x820de008
	ctx.lr = 0x820E0F54;
	sub_820DE008(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fadds f26,f0,f16
	ctx.f26.f64 = double(float(ctx.f0.f64 + ctx.f16.f64));
	// stfs f26,112(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f31,f13,f15
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f15.f64));
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f19,f12,f16
	ctx.f19.f64 = double(float(ctx.f12.f64 + ctx.f16.f64));
	// fadds f18,f11,f15
	ctx.f18.f64 = double(float(ctx.f11.f64 + ctx.f15.f64));
	// bl 0x820dfcb0
	ctx.lr = 0x820E0F8C;
	sub_820DFCB0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1132(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1132);
	// bl 0x820fdca0
	ctx.lr = 0x820E0F98;
	sub_820FDCA0(ctx, base);
	// lfs f30,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcmpu cr6,f14,f30
	ctx.cr6.compare(ctx.f14.f64, ctx.f30.f64);
	// bge cr6,0x820e0fb0
	if (!ctx.cr6.lt) goto loc_820E0FB0;
	// stfs f14,156(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fmr f30,f14
	ctx.f30.f64 = ctx.f14.f64;
loc_820E0FB0:
	// lfs f29,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// fmr f0,f25
	ctx.f0.f64 = ctx.f25.f64;
	// fmuls f24,f29,f21
	ctx.f24.f64 = double(float(ctx.f29.f64 * ctx.f21.f64));
	// lfs f28,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f28.f64 = double(temp.f32);
	// fdivs f12,f22,f29
	ctx.f12.f64 = double(float(ctx.f22.f64 / ctx.f29.f64));
	// fmuls f23,f28,f21
	ctx.f23.f64 = double(float(ctx.f28.f64 * ctx.f21.f64));
	// fsubs f11,f26,f24
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f24.f64));
	// fsubs f10,f31,f23
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// fsubs f13,f20,f11
	ctx.f13.f64 = double(float(ctx.f20.f64 - ctx.f11.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// ble cr6,0x820e0fe4
	if (!ctx.cr6.gt) goto loc_820E0FE4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E0FE4:
	// fdivs f9,f22,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f22.f64 / ctx.f28.f64));
	// fsubs f13,f17,f10
	ctx.f13.f64 = double(float(ctx.f17.f64 - ctx.f10.f64));
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e0ffc
	if (!ctx.cr6.gt) goto loc_820E0FFC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E0FFC:
	// lfs f13,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f11,f29
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// fadds f27,f13,f20
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f20.f64));
	// fsubs f8,f11,f27
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f27.f64));
	// fmuls f13,f8,f12
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e101c
	if (!ctx.cr6.gt) goto loc_820E101C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E101C:
	// lfs f13,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f10,f28
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f28.f64));
	// fadds f12,f13,f17
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f17.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f10,f9
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e103c
	if (!ctx.cr6.gt) goto loc_820E103C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820E103C:
	// fcmpu cr6,f0,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x820e1048
	if (!ctx.cr6.gt) goto loc_820E1048;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
loc_820E1048:
	// fsubs f0,f22,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x820e1104
	if (!ctx.cr6.gt) goto loc_820E1104;
	// lwz r11,27544(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 27544);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1104
	if (ctx.cr6.eq) goto loc_820E1104;
	// fsubs f13,f0,f21
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// lfs f0,5488(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f17
	ctx.cr6.compare(ctx.f31.f64, ctx.f17.f64);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,156(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// blt cr6,0x820e10bc
	if (ctx.cr6.lt) goto loc_820E10BC;
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bgt cr6,0x820e10bc
	if (ctx.cr6.gt) goto loc_820E10BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r15,17(r29)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r14,16(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E1098;
	sub_82141160(ctx, base);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lfs f4,5488(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5488);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f3,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f3.f64 = double(temp.f32);
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// fsubs f2,f31,f22
	ctx.f2.f64 = double(float(ctx.f31.f64 - ctx.f22.f64));
	// bl 0x822b7f70
	ctx.lr = 0x820E10BC;
	sub_822B7F70(ctx, base);
loc_820E10BC:
	// fcmpu cr6,f26,f20
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f20.f64);
	// blt cr6,0x820e1100
	if (ctx.cr6.lt) goto loc_820E1100;
	// fcmpu cr6,f26,f27
	ctx.cr6.compare(ctx.f26.f64, ctx.f27.f64);
	// bgt cr6,0x820e1100
	if (ctx.cr6.gt) goto loc_820E1100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r15,17(r29)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r14,16(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E10DC;
	sub_82141160(ctx, base);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// lfs f3,5488(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 5488);
	ctx.f3.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lfs f4,172(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// fmr f2,f17
	ctx.f2.f64 = ctx.f17.f64;
	// bl 0x820ea610
	ctx.lr = 0x820E1100;
	sub_820EA610(ctx, base);
loc_820E1100:
	// stfs f30,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820E1104:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r15,17(r29)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r14,16(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820E1114;
	sub_82141160(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// fsubs f1,f19,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f19.f64 - ctx.f24.f64));
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// fsubs f2,f18,f23
	ctx.f2.f64 = double(float(ctx.f18.f64 - ctx.f23.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820E1138;
	sub_822B7F70(ctx, base);
loc_820E1138:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r19,8
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 8, ctx.xer);
	// blt cr6,0x820e0e40
	if (ctx.cr6.lt) goto loc_820E0E40;
loc_820E1144:
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r24,r24,1160
	ctx.r24.s64 = ctx.r24.s64 + 1160;
	// bne 0x820e0e30
	if (!ctx.cr0.eq) goto loc_820E0E30;
loc_820E1150:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de03c
	ctx.lr = 0x820E115C;
	__restfpr_14(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E0D08) {
	__imp__sub_820E0D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1160) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r5,1848
	ctx.r5.s64 = 1848;
	// addi r3,r11,27640
	ctx.r3.s64 = ctx.r11.s64 + 27640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823de090
	ctx.lr = 0x820E1180;
	sub_823DE090(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,29488
	ctx.r11.s64 = ctx.r9.s64 + 29488;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820E1198:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820e1198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E1198;
	// bl 0x820f9bb8
	ctx.lr = 0x820E11A4;
	sub_820F9BB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1160) {
	__imp__sub_820E1160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E11B4) {
	__imp__sub_820E11B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E11B8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E11B8) {
	__imp__sub_820E11B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E11C0) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lhz r6,334(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,29488
	ctx.r8.s64 = ctx.r11.s64 + 29488;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_820E11E0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x820e1278
	if (ctx.cr6.eq) goto loc_820E1278;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r8,32
	ctx.r9.s64 = ctx.r8.s64 + 32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820e11e0
	if (ctx.cr6.lt) goto loc_820E11E0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,6968
	ctx.r10.s64 = ctx.r11.s64 + 6968;
	// lwz r11,11308(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11308);
	// addi r11,r11,-800
	ctx.r11.s64 = ctx.r11.s64 + -800;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bge cr6,0x820e1220
	if (!ctx.cr6.lt) goto loc_820E1220;
	// li r7,1
	ctx.r7.s64 = 1;
loc_820E1220:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,27640
	ctx.r9.s64 = ctx.r11.s64 + 27640;
	// addi r11,r9,1500
	ctx.r11.s64 = ctx.r9.s64 + 1500;
loc_820E1230:
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x820e128c
	if (ctx.cr6.lt) goto loc_820E128C;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// addi r5,r9,1852
	ctx.r5.s64 = ctx.r9.s64 + 1852;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x820e1230
	if (ctx.cr6.lt) goto loc_820E1230;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,12384
	ctx.r4.s64 = ctx.r11.s64 + 12384;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x820E1264;
	sub_82280C30(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E1278:
	// addi r3,r10,34
	ctx.r3.s64 = ctx.r10.s64 + 34;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820E128C:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r10,34
	ctx.r3.s64 = ctx.r10.s64 + 34;
	// stwx r6,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r6.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E11C0) {
	__imp__sub_820E11C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E12A8) {
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
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r3,404
	ctx.r11.s64 = ctx.r3.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x820e12ec
	if (!ctx.cr6.eq) goto loc_820E12EC;
	// bl 0x821ad328
	ctx.lr = 0x820E12E4;
	sub_821AD328(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e1330
	goto loc_820E1330;
loc_820E12EC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x820e1310
	if (!ctx.cr6.eq) goto loc_820E1310;
	// lhz r11,334(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 334);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x820e1330
	goto loc_820E1330;
loc_820E1310:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x820e11c0
	ctx.lr = 0x820E1318;
	sub_820E11C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// xori r3,r9,1
	ctx.r3.u64 = ctx.r9.u64 ^ 1;
loc_820E1330:
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

PPC_WEAK_FUNC(sub_820E12A8) {
	__imp__sub_820E12A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1348) {
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
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x820e13f4
	if (ctx.cr6.eq) goto loc_820E13F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r3,334(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x820e12a8
	ctx.lr = 0x820E1380;
	sub_820E12A8(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x820e13f4
	if (ctx.cr6.eq) goto loc_820E13F4;
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x820e13f4
	if (ctx.cr6.eq) goto loc_820E13F4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// addi r7,r11,6968
	ctx.r7.s64 = ctx.r11.s64 + 6968;
	// addi r11,r9,27640
	ctx.r11.s64 = ctx.r9.s64 + 27640;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// lwz r10,11308(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 11308);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r6,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r6.u32);
	// beq cr6,0x820e13dc
	if (ctx.cr6.eq) goto loc_820E13DC;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x820e13dc
	if (ctx.cr6.eq) goto loc_820E13DC;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// b 0x820e13f4
	goto loc_820E13F4;
loc_820E13DC:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
loc_820E13F4:
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

PPC_WEAK_FUNC(sub_820E1348) {
	__imp__sub_820E1348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E140C) {
	__imp__sub_820E140C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E1418;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r3,404
	ctx.r10.s64 = ctx.r3.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820e12a8
	ctx.lr = 0x820E143C;
	sub_820E12A8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e155c
	if (ctx.cr6.eq) goto loc_820E155C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r10,27640
	ctx.r10.s64 = ctx.r10.s64 + 27640;
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x820fa220
	ctx.lr = 0x820E146C;
	sub_820FA220(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e14a8
	if (ctx.cr6.eq) goto loc_820E14A8;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e14a8
	if (!ctx.cr6.eq) goto loc_820E14A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e14a8
	if (ctx.cr6.eq) goto loc_820E14A8;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_820E14A8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// lfs f13,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lfs f11,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,11308(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stfs f11,32(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// bne cr6,0x820e14f4
	if (!ctx.cr6.eq) goto loc_820E14F4;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// b 0x820e1530
	goto loc_820E1530;
loc_820E14F4:
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// beq cr6,0x820e1528
	if (ctx.cr6.eq) goto loc_820E1528;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820e1528
	if (ctx.cr6.eq) goto loc_820E1528;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820e151c
	if (!ctx.cr6.eq) goto loc_820E151C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x820e152c
	goto loc_820E152C;
loc_820E151C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// b 0x820e152c
	goto loc_820E152C;
loc_820E1528:
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_820E152C:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_820E1530:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e155c
	if (ctx.cr6.eq) goto loc_820E155C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e155c
	if (!ctx.cr6.eq) goto loc_820E155C;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820fb8b8
	ctx.lr = 0x820E155C;
	sub_820FB8B8(ctx, base);
loc_820E155C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E1410) {
	__imp__sub_820E1410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1564) {
	__imp__sub_820E1564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,27472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27472);
	// lfs f0,5100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1568) {
	__imp__sub_820E1568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// lwz r10,27432(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27432);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r9,27540(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27540);
	// lwz r11,27560(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 27560);
	// lfs f0,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,27472(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 27472);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f13,5100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5100);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f6,0(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,0(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f2,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1590) {
	__imp__sub_820E1590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x820E1618;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de01c
	ctx.lr = 0x820E1620;
	__savefpr_25(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
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
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r8,32(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820e1b10
	if (ctx.cr6.eq) goto loc_820E1B10;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// ori r10,r11,20072
	ctx.r10.u64 = ctx.r11.u64 | 20072;
	// lwzx r4,r28,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// bl 0x820de470
	ctx.lr = 0x820E1674;
	sub_820DE470(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x820e1b10
	if (ctx.cr6.eq) goto loc_820E1B10;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820dfc68
	ctx.lr = 0x820E1694;
	sub_820DFC68(ctx, base);
	// addi r10,r1,188
	ctx.r10.s64 = ctx.r1.s64 + 188;
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// addi r8,r1,180
	ctx.r8.s64 = ctx.r1.s64 + 180;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x820de1e0
	ctx.lr = 0x820E16B8;
	sub_820DE1E0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,172(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lfs f31,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f10,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f29,f10,f31,f9
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f28,f8,f31,f7
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f7.f64));
	// bl 0x82141160
	ctx.lr = 0x820E1700;
	sub_82141160(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r20,r11,27640
	ctx.r20.s64 = ctx.r11.s64 + 27640;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lfs f27,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f25,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f25.f64 = double(temp.f32);
	// lis r30,-32189
	ctx.r30.s64 = -2109538304;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r4,r11,-22896
	ctx.r4.s64 = ctx.r11.s64 + -22896;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r21,34
	ctx.r21.s64 = 34;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r31,r20,4
	ctx.r31.s64 = ctx.r20.s64 + 4;
	// li r25,0
	ctx.r25.s64 = 0;
	// ori r22,r8,23180
	ctx.r22.u64 = ctx.r8.u64 | 23180;
	// ori r15,r7,2116
	ctx.r15.u64 = ctx.r7.u64 | 2116;
	// ori r23,r6,18320
	ctx.r23.u64 = ctx.r6.u64 | 18320;
	// ori r24,r5,20028
	ctx.r24.u64 = ctx.r5.u64 | 20028;
	// lis r17,-32189
	ctx.r17.s64 = -2109538304;
	// lis r26,-32189
	ctx.r26.s64 = -2109538304;
	// addi r27,r10,6968
	ctx.r27.s64 = ctx.r10.s64 + 6968;
	// b 0x820e1774
	goto loc_820E1774;
loc_820E1770:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_820E1774:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,11308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820e1788
	if (!ctx.cr6.gt) goto loc_820E1788;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_820E1788:
	// lwz r11,11308(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-800
	ctx.r9.s64 = ctx.r11.s64 + -800;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820e19a4
	if (ctx.cr6.lt) goto loc_820E19A4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e19a4
	if (!ctx.cr6.eq) goto loc_820E19A4;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lwzx r10,r28,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r22.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e19a4
	if (ctx.cr6.eq) goto loc_820E19A4;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r31,4
	ctx.r8.s64 = ctx.r31.s64 + 4;
	// add r7,r28,r15
	ctx.r7.u64 = ctx.r28.u64 + ctx.r15.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x820de008
	ctx.lr = 0x820E17E4;
	sub_820DE008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1800
	if (ctx.cr6.eq) goto loc_820E1800;
	// lwz r11,27524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 27524);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e19a4
	if (ctx.cr6.eq) goto loc_820E19A4;
loc_820E1800:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x820e0c08
	ctx.lr = 0x820E1810;
	sub_820E0C08(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f0,f31,f29
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64)));
	// fnmsubs f11,f13,f31,f28
	ctx.f11.f64 = double(float(-(ctx.f13.f64 * ctx.f31.f64 - ctx.f28.f64)));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f8,112(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// stfs f7,116(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne cr6,0x820e1858
	if (!ctx.cr6.eq) goto loc_820E1858;
	// lwz r11,27536(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 27536);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1858
	if (ctx.cr6.eq) goto loc_820E1858;
	// lfsx f13,r28,r23
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r23.u32);
	ctx.f13.f64 = double(temp.f32);
	// b 0x820e185c
	goto loc_820E185C;
loc_820E1858:
	// lfsx f13,r28,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	ctx.f13.f64 = double(temp.f32);
loc_820E185C:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820E1868;
	sub_822D77C0(ctx, base);
	// lwz r10,11308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r8,27504(r17)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r17.u32 + 27504);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r7,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r7.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fmuls f0,f11,f25
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// blt cr6,0x820e190c
	if (ctx.cr6.lt) goto loc_820E190C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820e18d8
	if (ctx.cr6.lt) goto loc_820E18D8;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfs f27,172(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// lwz r30,16020(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// b 0x820e1910
	goto loc_820E1910;
loc_820E18D8:
	// lwz r10,11308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r30,16020(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16020);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f0,f27,f10
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// b 0x820e1910
	goto loc_820E1910;
loc_820E190C:
	// lfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
loc_820E1910:
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f26,f13
	ctx.cr6.compare(ctx.f26.f64, ctx.f13.f64);
	// bge cr6,0x820e1920
	if (!ctx.cr6.lt) goto loc_820E1920;
	// stfs f26,12(r29)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_820E1920:
	// fcmpu cr6,f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x820e1930
	if (!ctx.cr6.lt) goto loc_820E1930;
	// stfs f26,172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f0,f26
	ctx.f0.f64 = ctx.f26.f64;
loc_820E1930:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e1940
	if (ctx.cr6.eq) goto loc_820E1940;
	// fcmpu cr6,f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x820e196c
	if (ctx.cr6.eq) goto loc_820E196C;
loc_820E1940:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r9,17(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 17);
	// lfs f4,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// lbz r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + 16);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// bl 0x820ea2f0
	ctx.lr = 0x820E196C;
	sub_820EA2F0(ctx, base);
loc_820E196C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e19a4
	if (ctx.cr6.eq) goto loc_820E19A4;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lbz r9,17(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 17);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + 16);
	// lfs f4,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f2,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f1,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820ea2f0
	ctx.lr = 0x820E19A4;
	sub_820EA2F0(ctx, base);
loc_820E19A4:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x820e1770
	if (!ctx.cr0.eq) goto loc_820E1770;
	// li r30,34
	ctx.r30.s64 = 34;
	// addi r31,r20,36
	ctx.r31.s64 = ctx.r20.s64 + 36;
loc_820E19B8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r31,-16
	ctx.r8.s64 = ctx.r31.s64 + -16;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e1b04
	if (ctx.cr6.eq) goto loc_820E1B04;
	// lwz r10,11308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r7,27504(r17)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r17.u32 + 27504);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f12,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f9,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fmadds f8,f9,f25,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f25.f64 + ctx.f11.f64));
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// blt cr6,0x820e1b04
	if (ctx.cr6.lt) goto loc_820E1B04;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1b04
	if (ctx.cr6.eq) goto loc_820E1B04;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r28,r15
	ctx.r7.u64 = ctx.r28.u64 + ctx.r15.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x820de008
	ctx.lr = 0x820E1A38;
	sub_820DE008(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e1a58
	if (ctx.cr6.eq) goto loc_820E1A58;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,27524(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27524);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1b04
	if (ctx.cr6.eq) goto loc_820E1B04;
loc_820E1A58:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x820e0c08
	ctx.lr = 0x820E1A68;
	sub_820E0C08(ctx, base);
	// lfs f3,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f4.f64 = double(temp.f32);
	// fnmsubs f0,f3,f31,f29
	ctx.f0.f64 = double(float(-(ctx.f3.f64 * ctx.f31.f64 - ctx.f29.f64)));
	// fnmsubs f13,f4,f31,f28
	ctx.f13.f64 = double(float(-(ctx.f4.f64 * ctx.f31.f64 - ctx.f28.f64)));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,11308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11308);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// blt cr6,0x820e1aa8
	if (ctx.cr6.lt) goto loc_820E1AA8;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x820e1ad4
	goto loc_820E1AD4;
loc_820E1AA8:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,27504(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 27504);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f25
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f25.f64));
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// fdivs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fsubs f0,f27,f9
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
loc_820E1AD4:
	// stfs f0,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x820e1ae4
	if (!ctx.cr6.lt) goto loc_820E1AE4;
	// stfs f26,172(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
loc_820E1AE4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r9,17(r19)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r19.u32 + 17);
	// lbz r8,16(r19)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r19.u32 + 16);
	// lwz r11,16028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16028);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822b7f70
	ctx.lr = 0x820E1B04;
	sub_822B7F70(ctx, base);
loc_820E1B04:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x820e19b8
	if (!ctx.cr0.eq) goto loc_820E19B8;
loc_820E1B10:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de068
	ctx.lr = 0x820E1B1C;
	__restfpr_25(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E1610) {
	__imp__sub_820E1610(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1B20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820E1B28;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r27,r11,27640
	ctx.r27.s64 = ctx.r11.s64 + 27640;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r27,4
	ctx.r31.s64 = ctx.r27.s64 + 4;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,11308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
loc_820E1B5C:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820e1ba8
	if (!ctx.cr6.eq) goto loc_820E1BA8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820e1b80
	if (!ctx.cr6.gt) goto loc_820E1B80;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_820E1B80:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,-800
	ctx.r9.s64 = ctx.r11.s64 + -800;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x820e1ba8
	if (ctx.cr6.lt) goto loc_820E1BA8;
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x820E1BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,11308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
loc_820E1BA8:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r10,r27,1500
	ctx.r10.s64 = ctx.r27.s64 + 1500;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820e1b5c
	if (ctx.cr6.lt) goto loc_820E1B5C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E1B20) {
	__imp__sub_820E1B20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1BC4) {
	__imp__sub_820E1BC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820E1BD0;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r28,r11,27640
	ctx.r28.s64 = ctx.r11.s64 + 27640;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f31,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// addi r31,r28,36
	ctx.r31.s64 = ctx.r28.s64 + 36;
	// lis r29,-32189
	ctx.r29.s64 = -2109538304;
	// addi r30,r11,6968
	ctx.r30.s64 = ctx.r11.s64 + 6968;
loc_820E1C0C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e1c80
	if (ctx.cr6.eq) goto loc_820E1C80;
	// lwz r10,11308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11308);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lwz r8,27504(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 27504);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lfs f10,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// fmadds f7,f10,f31,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f9.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// blt cr6,0x820e1c80
	if (ctx.cr6.lt) goto loc_820E1C80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e1c80
	if (ctx.cr6.eq) goto loc_820E1C80;
	// addi r4,r31,-16
	ctx.r4.s64 = ctx.r31.s64 + -16;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x820E1C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820E1C80:
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// addi r11,r28,1532
	ctx.r11.s64 = ctx.r28.s64 + 1532;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e1c0c
	if (ctx.cr6.lt) goto loc_820E1C0C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E1BC8) {
	__imp__sub_820E1BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1CA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x820e1cd4
	if (!ctx.cr6.lt) goto loc_820E1CD4;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
loc_820E1CD4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1CA0) {
	__imp__sub_820E1CA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1CE0) {
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
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1d18
	if (ctx.cr6.eq) goto loc_820E1D18;
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
loc_820E1D18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,12488
	ctx.r4.s64 = ctx.r11.s64 + 12488;
	// bl 0x82280900
	ctx.lr = 0x820E1D28;
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
}

PPC_WEAK_FUNC(sub_820E1CE0) {
	__imp__sub_820E1CE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1D3C) {
	__imp__sub_820E1D3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1D40) {
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
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e1e00
	if (ctx.cr6.eq) goto loc_820E1E00;
	// lis r9,-31937
	ctx.r9.s64 = -2093023232;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addi r10,r9,-17592
	ctx.r10.s64 = ctx.r9.s64 + -17592;
	// ori r7,r8,61924
	ctx.r7.u64 = ctx.r8.u64 | 61924;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// lwz r10,-17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -17592);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r31,r10,2124
	ctx.r31.u64 = ctx.r10.u64 | 2124;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwzx r3,r3,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// ori r6,r4,18320
	ctx.r6.u64 = ctx.r4.u64 | 18320;
	// ori r5,r5,18316
	ctx.r5.u64 = ctx.r5.u64 | 18316;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r9,2120
	ctx.r10.u64 = ctx.r9.u64 | 2120;
	// ori r9,r8,2116
	ctx.r9.u64 = ctx.r8.u64 | 2116;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfsx f5,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r8,12512
	ctx.r4.s64 = ctx.r8.s64 + 12512;
	// lfsx f4,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f1,r11,r9
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f3,r11,r31
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfd f5,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f5.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
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
	// bl 0x82280900
	ctx.lr = 0x820E1E00;
	sub_82280900(ctx, base);
loc_820E1E00:
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

PPC_WEAK_FUNC(sub_820E1D40) {
	__imp__sub_820E1D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1E14) {
	__imp__sub_820E1E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18524
	ctx.r9.u64 = ctx.r10.u64 | 18524;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,18524
	ctx.r6.u64 = ctx.r9.u64 | 18524;
	// ori r5,r7,18528
	ctx.r5.u64 = ctx.r7.u64 | 18528;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1E18) {
	__imp__sub_820E1E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1E6C) {
	__imp__sub_820E1E6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1E70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r11,r11,-15680
	ctx.r11.s64 = ctx.r11.s64 + -15680;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18524
	ctx.r9.u64 = ctx.r10.u64 | 18524;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r6,r9,18524
	ctx.r6.u64 = ctx.r9.u64 | 18524;
	// ori r5,r7,18528
	ctx.r5.u64 = ctx.r7.u64 | 18528;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// stwx r9,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E1E70) {
	__imp__sub_820E1E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E1EC4) {
	__imp__sub_820E1EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E1EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820E1ED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2034
	if (ctx.cr6.eq) goto loc_820E2034;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x820e2034
	if (ctx.cr6.lt) goto loc_820E2034;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// addi r27,r9,-28736
	ctx.r27.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x820e1f28
	if (!ctx.cr6.gt) goto loc_820E1F28;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x820e1f2c
	goto loc_820E1F2C;
loc_820E1F28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820E1F2C:
	// bl 0x823deaf8
	ctx.lr = 0x820E1F30;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x820e1f5c
	if (!ctx.cr6.gt) goto loc_820E1F5C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x820e1f60
	goto loc_820E1F60;
loc_820E1F5C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820E1F60:
	// bl 0x823deaf8
	ctx.lr = 0x820E1F64;
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
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x820e1f90
	if (!ctx.cr6.gt) goto loc_820E1F90;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x820e1f94
	goto loc_820E1F94;
loc_820E1F90:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820E1F94:
	// bl 0x823deaf8
	ctx.lr = 0x820E1F98;
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
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x820e1fc4
	if (!ctx.cr6.gt) goto loc_820E1FC4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x820e1fc8
	goto loc_820E1FC8;
loc_820E1FC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820E1FC8:
	// bl 0x823deaf8
	ctx.lr = 0x820E1FCC;
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
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x820e1ff8
	if (!ctx.cr6.gt) goto loc_820E1FF8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x820e1ffc
	goto loc_820E1FFC;
loc_820E1FF8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_820E1FFC:
	// bl 0x823deaf8
	ctx.lr = 0x820E2000;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,6968
	ctx.r6.s64 = ctx.r10.s64 + 6968;
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// mulli r9,r3,1000
	ctx.r9.s64 = ctx.r3.s64 * 1000;
	// lwz r8,11308(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11308);
	// lwzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x820e3878
	ctx.lr = 0x820E2034;
	sub_820E3878(ctx, base);
loc_820E2034:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E1EC8) {
	__imp__sub_820E1EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E203C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E203C) {
	__imp__sub_820E203C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E2048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r29,r11,-15680
	ctx.r29.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2180
	if (ctx.cr6.eq) goto loc_820E2180;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820e20d4
	if (ctx.cr6.eq) goto loc_820E20D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820e20a8
	if (ctx.cr6.eq) goto loc_820E20A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12544
	ctx.r4.s64 = ctx.r11.s64 + 12544;
	// bl 0x82280900
	ctx.lr = 0x820E20A0;
	sub_82280900(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E20A8:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820e20c0
	if (!ctx.cr6.gt) goto loc_820E20C0;
	// addi r11,r31,100
	ctx.r11.s64 = ctx.r31.s64 + 100;
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x820e20c4
	goto loc_820E20C4;
loc_820E20C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820E20C4:
	// bl 0x82321740
	ctx.lr = 0x820E20C8;
	sub_82321740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e2180
	if (ctx.cr6.eq) goto loc_820E2180;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_820E20D4:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x820e20f8
	if (!ctx.cr6.gt) goto loc_820E20F8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x820e20fc
	goto loc_820E20FC;
loc_820E20F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820E20FC:
	// bl 0x823dec00
	ctx.lr = 0x820E2100;
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
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E2120;
	sub_823DDE20(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// lwzx r5,r8,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82321c38
	ctx.lr = 0x820E2158;
	sub_82321C38(ctx, base);
	// bl 0x82321888
	ctx.lr = 0x820E215C;
	sub_82321888(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r11,r4,22912
	ctx.r11.u64 = ctx.r4.u64 | 22912;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r3,58156
	ctx.r9.u64 = ctx.r3.u64 | 58156;
	// ori r8,r10,58160
	ctx.r8.u64 = ctx.r10.u64 | 58160;
	// lwzx r7,r31,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r7,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r7.u32);
loc_820E2180:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2040) {
	__imp__sub_820E2040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2188) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// beq cr6,0x820e21cc
	if (ctx.cr6.eq) goto loc_820E21CC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12592
	ctx.r4.s64 = ctx.r11.s64 + 12592;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
loc_820E21CC:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82321740
	sub_82321740(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2188) {
	__imp__sub_820E2188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E21DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E21DC) {
	__imp__sub_820E21DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E21E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// beq cr6,0x820e2224
	if (ctx.cr6.eq) goto loc_820E2224;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12628
	ctx.r4.s64 = ctx.r11.s64 + 12628;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
loc_820E2224:
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82321c30
	sub_82321C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E21E0) {
	__imp__sub_820E21E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2234) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2234) {
	__imp__sub_820E2234(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E2240;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2320
	if (ctx.cr6.eq) goto loc_820E2320;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e2274
	if (ctx.cr6.eq) goto loc_820E2274;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820e2290
	goto loc_820E2290;
loc_820E2274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,12712
	ctx.r5.s64 = ctx.r11.s64 + 12712;
	// addi r4,r10,12488
	ctx.r4.s64 = ctx.r10.s64 + 12488;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x820E228C;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E2290:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2320
	if (ctx.cr6.eq) goto loc_820E2320;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// lwz r3,-30052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30052);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e22e4
	if (!ctx.cr6.eq) goto loc_820E22E4;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12696
	ctx.r30.s64 = ctx.r11.s64 + 12696;
	// lwz r11,6964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6964);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x820e22f0
	if (!ctx.cr6.eq) goto loc_820E22F0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e1f80
	ctx.lr = 0x820E22DC;
	sub_822E1F80(ctx, base);
	// lwz r3,-30052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30052);
	// b 0x820e22f0
	goto loc_820E22F0;
loc_820E22E4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r30,r11,12680
	ctx.r30.s64 = ctx.r11.s64 + 12680;
loc_820E22F0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e1f80
	ctx.lr = 0x820E22F8;
	sub_822E1F80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12664
	ctx.r4.s64 = ctx.r11.s64 + 12664;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b7268
	ctx.lr = 0x820E230C;
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
	ctx.lr = 0x820E2320;
	sub_82280900(ctx, base);
loc_820E2320:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2238) {
	__imp__sub_820E2238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E2330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2410
	if (ctx.cr6.eq) goto loc_820E2410;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -368);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e2364
	if (ctx.cr6.eq) goto loc_820E2364;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820e2380
	goto loc_820E2380;
loc_820E2364:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r11,12760
	ctx.r5.s64 = ctx.r11.s64 + 12760;
	// addi r4,r10,12488
	ctx.r4.s64 = ctx.r10.s64 + 12488;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280900
	ctx.lr = 0x820E237C;
	sub_82280900(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E2380:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2410
	if (ctx.cr6.eq) goto loc_820E2410;
	// lis r29,-32155
	ctx.r29.s64 = -2107310080;
	// lwz r3,-30052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30052);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820e23d4
	if (!ctx.cr6.eq) goto loc_820E23D4;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,12748
	ctx.r30.s64 = ctx.r11.s64 + 12748;
	// lwz r11,6964(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6964);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x820e23e0
	if (!ctx.cr6.eq) goto loc_820E23E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822e1f80
	ctx.lr = 0x820E23CC;
	sub_822E1F80(ctx, base);
	// lwz r3,-30052(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30052);
	// b 0x820e23e0
	goto loc_820E23E0;
loc_820E23D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r30,r11,12736
	ctx.r30.s64 = ctx.r11.s64 + 12736;
loc_820E23E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e1f80
	ctx.lr = 0x820E23E8;
	sub_822E1F80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,12724
	ctx.r4.s64 = ctx.r11.s64 + 12724;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822b7268
	ctx.lr = 0x820E23FC;
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
	ctx.lr = 0x820E2410;
	sub_82280900(ctx, base);
loc_820E2410:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2328) {
	__imp__sub_820E2328(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2418) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
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
	// beq cr6,0x820e245c
	if (ctx.cr6.eq) goto loc_820E245C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,12768
	ctx.r4.s64 = ctx.r11.s64 + 12768;
	// b 0x82280900
	sub_82280900(ctx, base);
	return;
loc_820E245C:
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r3,r10,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82104bb0
	sub_82104BB0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2418) {
	__imp__sub_820E2418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2474) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2474) {
	__imp__sub_820E2474(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2478) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x820e4220
	sub_820E4220(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2478) {
	__imp__sub_820E2478(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2498) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31937
	ctx.r10.s64 = -2093023232;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r10,-17592
	ctx.r11.s64 = ctx.r10.s64 + -17592;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r11,-17592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -17592);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x820e4220
	sub_820E4220(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2498) {
	__imp__sub_820E2498(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E24B8) {
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
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,30104
	ctx.r5.s64 = ctx.r11.s64 + 30104;
	// addi r3,r9,13084
	ctx.r3.s64 = ctx.r9.s64 + 13084;
	// addi r4,r10,7488
	ctx.r4.s64 = ctx.r10.s64 + 7488;
	// bl 0x8227da10
	ctx.lr = 0x820E24E0;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,30084
	ctx.r5.s64 = ctx.r8.s64 + 30084;
	// addi r3,r6,13076
	ctx.r3.s64 = ctx.r6.s64 + 13076;
	// addi r4,r7,7792
	ctx.r4.s64 = ctx.r7.s64 + 7792;
	// bl 0x8227da10
	ctx.lr = 0x820E24FC;
	sub_8227DA10(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r5,r5,30064
	ctx.r5.s64 = ctx.r5.s64 + 30064;
	// addi r3,r3,13068
	ctx.r3.s64 = ctx.r3.s64 + 13068;
	// addi r4,r4,7704
	ctx.r4.s64 = ctx.r4.s64 + 7704;
	// bl 0x8227da10
	ctx.lr = 0x820E2518;
	sub_8227DA10(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,30044
	ctx.r5.s64 = ctx.r11.s64 + 30044;
	// addi r3,r9,13056
	ctx.r3.s64 = ctx.r9.s64 + 13056;
	// addi r4,r10,-10240
	ctx.r4.s64 = ctx.r10.s64 + -10240;
	// bl 0x8227da10
	ctx.lr = 0x820E2534;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,30024
	ctx.r5.s64 = ctx.r8.s64 + 30024;
	// addi r3,r6,13044
	ctx.r3.s64 = ctx.r6.s64 + 13044;
	// addi r4,r7,-10232
	ctx.r4.s64 = ctx.r7.s64 + -10232;
	// bl 0x8227da10
	ctx.lr = 0x820E2550;
	sub_8227DA10(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r5,r5,30004
	ctx.r5.s64 = ctx.r5.s64 + 30004;
	// addi r3,r3,13036
	ctx.r3.s64 = ctx.r3.s64 + 13036;
	// addi r4,r4,7880
	ctx.r4.s64 = ctx.r4.s64 + 7880;
	// bl 0x8227da10
	ctx.lr = 0x820E256C;
	sub_8227DA10(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,29984
	ctx.r5.s64 = ctx.r11.s64 + 29984;
	// addi r3,r9,13024
	ctx.r3.s64 = ctx.r9.s64 + 13024;
	// addi r4,r10,-12408
	ctx.r4.s64 = ctx.r10.s64 + -12408;
	// bl 0x8227da10
	ctx.lr = 0x820E2588;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,29964
	ctx.r5.s64 = ctx.r8.s64 + 29964;
	// addi r3,r6,13012
	ctx.r3.s64 = ctx.r6.s64 + 13012;
	// addi r4,r7,-25656
	ctx.r4.s64 = ctx.r7.s64 + -25656;
	// bl 0x8227da10
	ctx.lr = 0x820E25A4;
	sub_8227DA10(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r5,r5,29944
	ctx.r5.s64 = ctx.r5.s64 + 29944;
	// addi r3,r3,12996
	ctx.r3.s64 = ctx.r3.s64 + 12996;
	// addi r4,r4,8256
	ctx.r4.s64 = ctx.r4.s64 + 8256;
	// bl 0x8227da10
	ctx.lr = 0x820E25C0;
	sub_8227DA10(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,29924
	ctx.r5.s64 = ctx.r11.s64 + 29924;
	// addi r3,r9,12976
	ctx.r3.s64 = ctx.r9.s64 + 12976;
	// addi r4,r10,8584
	ctx.r4.s64 = ctx.r10.s64 + 8584;
	// bl 0x8227da10
	ctx.lr = 0x820E25DC;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,29904
	ctx.r5.s64 = ctx.r8.s64 + 29904;
	// addi r3,r6,12956
	ctx.r3.s64 = ctx.r6.s64 + 12956;
	// addi r4,r7,8672
	ctx.r4.s64 = ctx.r7.s64 + 8672;
	// bl 0x8227da10
	ctx.lr = 0x820E25F8;
	sub_8227DA10(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// addi r5,r5,29884
	ctx.r5.s64 = ctx.r5.s64 + 29884;
	// addi r4,r4,8760
	ctx.r4.s64 = ctx.r4.s64 + 8760;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r3,r3,12712
	ctx.r3.s64 = ctx.r3.s64 + 12712;
	// bl 0x8227da10
	ctx.lr = 0x820E2614;
	sub_8227DA10(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,29864
	ctx.r5.s64 = ctx.r11.s64 + 29864;
	// addi r3,r9,12760
	ctx.r3.s64 = ctx.r9.s64 + 12760;
	// addi r4,r10,9000
	ctx.r4.s64 = ctx.r10.s64 + 9000;
	// bl 0x8227da10
	ctx.lr = 0x820E2630;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r8,29844
	ctx.r5.s64 = ctx.r8.s64 + 29844;
	// addi r3,r6,12944
	ctx.r3.s64 = ctx.r6.s64 + 12944;
	// addi r4,r7,9240
	ctx.r4.s64 = ctx.r7.s64 + 9240;
	// bl 0x8227da10
	ctx.lr = 0x820E264C;
	sub_8227DA10(ctx, base);
	// lis r5,-32189
	ctx.r5.s64 = -2109538304;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r5,r5,29824
	ctx.r5.s64 = ctx.r5.s64 + 29824;
	// addi r3,r3,12936
	ctx.r3.s64 = ctx.r3.s64 + 12936;
	// addi r4,r4,9368
	ctx.r4.s64 = ctx.r4.s64 + 9368;
	// bl 0x8227da10
	ctx.lr = 0x820E2668;
	sub_8227DA10(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r11,29804
	ctx.r5.s64 = ctx.r11.s64 + 29804;
	// addi r3,r9,12928
	ctx.r3.s64 = ctx.r9.s64 + 12928;
	// addi r4,r10,9336
	ctx.r4.s64 = ctx.r10.s64 + 9336;
	// bl 0x8227da10
	ctx.lr = 0x820E2684;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r5,r8,29784
	ctx.r5.s64 = ctx.r8.s64 + 29784;
	// addi r3,r7,12920
	ctx.r3.s64 = ctx.r7.s64 + 12920;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E269C;
	sub_8227DA10(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r3,r4,12912
	ctx.r3.s64 = ctx.r4.s64 + 12912;
	// addi r5,r6,29764
	ctx.r5.s64 = ctx.r6.s64 + 29764;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E26B4;
	sub_8227DA10(ctx, base);
	// lis r3,-32189
	ctx.r3.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r3,29744
	ctx.r5.s64 = ctx.r3.s64 + 29744;
	// addi r3,r11,12904
	ctx.r3.s64 = ctx.r11.s64 + 12904;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E26CC;
	sub_8227DA10(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r10,29724
	ctx.r5.s64 = ctx.r10.s64 + 29724;
	// addi r3,r9,12900
	ctx.r3.s64 = ctx.r9.s64 + 12900;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E26E4;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r5,r8,29704
	ctx.r5.s64 = ctx.r8.s64 + 29704;
	// addi r3,r7,12892
	ctx.r3.s64 = ctx.r7.s64 + 12892;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E26FC;
	sub_8227DA10(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r3,r4,12880
	ctx.r3.s64 = ctx.r4.s64 + 12880;
	// addi r5,r6,29684
	ctx.r5.s64 = ctx.r6.s64 + 29684;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E2714;
	sub_8227DA10(ctx, base);
	// lis r3,-32189
	ctx.r3.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r3,29664
	ctx.r5.s64 = ctx.r3.s64 + 29664;
	// addi r3,r11,12872
	ctx.r3.s64 = ctx.r11.s64 + 12872;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E272C;
	sub_8227DA10(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r10,29644
	ctx.r5.s64 = ctx.r10.s64 + 29644;
	// addi r3,r9,12868
	ctx.r3.s64 = ctx.r9.s64 + 12868;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E2744;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// addi r5,r8,29624
	ctx.r5.s64 = ctx.r8.s64 + 29624;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r7,12856
	ctx.r3.s64 = ctx.r7.s64 + 12856;
	// bl 0x8227da10
	ctx.lr = 0x820E275C;
	sub_8227DA10(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r3,r4,12844
	ctx.r3.s64 = ctx.r4.s64 + 12844;
	// addi r5,r6,29604
	ctx.r5.s64 = ctx.r6.s64 + 29604;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E2774;
	sub_8227DA10(ctx, base);
	// lis r3,-32189
	ctx.r3.s64 = -2109538304;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r3,29584
	ctx.r5.s64 = ctx.r3.s64 + 29584;
	// addi r3,r11,12832
	ctx.r3.s64 = ctx.r11.s64 + 12832;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E278C;
	sub_8227DA10(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r10,29564
	ctx.r5.s64 = ctx.r10.s64 + 29564;
	// addi r3,r9,12824
	ctx.r3.s64 = ctx.r9.s64 + 12824;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E27A4;
	sub_8227DA10(ctx, base);
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r5,r8,29544
	ctx.r5.s64 = ctx.r8.s64 + 29544;
	// addi r3,r7,12816
	ctx.r3.s64 = ctx.r7.s64 + 12816;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E27BC;
	sub_8227DA10(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r6,-32189
	ctx.r6.s64 = -2109538304;
	// addi r3,r4,12800
	ctx.r3.s64 = ctx.r4.s64 + 12800;
	// addi r5,r6,29524
	ctx.r5.s64 = ctx.r6.s64 + 29524;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227da10
	ctx.lr = 0x820E27D4;
	sub_8227DA10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E24B8) {
	__imp__sub_820E24B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E27E4) {
	__imp__sub_820E27E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E27E8) {
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
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mulli r10,r3,1028
	ctx.r10.s64 = ctx.r3.s64 * 1028;
	// addi r11,r8,30136
	ctx.r11.s64 = ctx.r8.s64 + 30136;
	// addi r4,r7,13092
	ctx.r4.s64 = ctx.r7.s64 + 13092;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822b7268
	ctx.lr = 0x820E2820;
	sub_822B7268(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x822e7e98
	ctx.lr = 0x820E2830;
	sub_822E7E98(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// addi r5,r6,6968
	ctx.r5.s64 = ctx.r6.s64 + 6968;
	// lwz r11,11308(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11308);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_820E27E8) {
	__imp__sub_820E27E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E2854) {
	__imp__sub_820E2854(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820E2860;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mulli r10,r3,1028
	ctx.r10.s64 = ctx.r3.s64 * 1028;
	// addi r11,r11,30136
	ctx.r11.s64 = ctx.r11.s64 + 30136;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r8,r9,6968
	ctx.r8.s64 = ctx.r9.s64 + 6968;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r3,11308(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820e2a04
	if (ctx.cr6.eq) goto loc_820E2A04;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e2a04
	if (!ctx.cr6.eq) goto loc_820E2A04;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,100
	ctx.r6.s64 = 100;
	// lwz r11,-17004(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17004);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x820eabe0
	ctx.lr = 0x820E28F0;
	sub_820EABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820e2914
	if (!ctx.cr6.eq) goto loc_820E2914;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_820E2914:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f5,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// stfs f3,12(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x822c1bf8
	ctx.lr = 0x820E296C;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f2,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820E2994;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lfs f10,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r28,17(r30)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f30,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fsubs f29,f10,f6
	ctx.f29.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// bl 0x82141160
	ctx.lr = 0x820E29D4;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820E2A04;
	sub_822C1CE8(ctx, base);
loc_820E2A04:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_820E2858) {
	__imp__sub_820E2858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2A18) {
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
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lfs f30,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f30.f64 = double(temp.f32);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e2a5c
	if (ctx.cr6.eq) goto loc_820E2A5C;
loc_820E2A54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820e2b78
	goto loc_820E2B78;
loc_820E2A5C:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e2a54
	if (ctx.cr6.eq) goto loc_820E2A54;
	// rlwinm r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820e2a54
	if (!ctx.cr6.eq) goto loc_820E2A54;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e2a54
	if (!ctx.cr6.eq) goto loc_820E2A54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x820E2A94;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x820E2AA0;
	sub_82332C28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x820e2ac0
	if (ctx.cr6.eq) goto loc_820E2AC0;
	// lfs f0,704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x820e2a54
	if (ctx.cr6.gt) goto loc_820E2A54;
loc_820E2AC0:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e6ed0
	ctx.lr = 0x820E2AD0;
	sub_820E6ED0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// fmuls f11,f13,f30
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,3844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820E2B00;
	sub_82141160(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// bl 0x82140bc8
	ctx.lr = 0x820E2B1C;
	sub_82140BC8(ctx, base);
	// lis r8,-32181
	ctx.r8.s64 = -2109014016;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r8,-22896
	ctx.r6.s64 = ctx.r8.s64 + -22896;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// fnmsubs f1,f3,f0,f10
	ctx.f1.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f10.f64)));
	// lfs f8,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f2,f4,f0,f9
	ctx.f2.f64 = double(float(-(ctx.f4.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821202c8
	ctx.lr = 0x820E2B74;
	sub_821202C8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820E2B78:
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

PPC_WEAK_FUNC(sub_820E2A18) {
	__imp__sub_820E2A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2B98) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,32192
	ctx.r11.s64 = ctx.r11.s64 + 32192;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r9,6968
	ctx.r8.s64 = ctx.r9.s64 + 6968;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e2ca4
	if (ctx.cr6.lt) goto loc_820E2CA4;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820e2ca8
	if (ctx.cr6.eq) goto loc_820E2CA8;
	// bl 0x82310110
	ctx.lr = 0x820E2BF0;
	sub_82310110(ctx, base);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r11,32224(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32224);
	// stw r3,32224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32224, ctx.r3.u32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// bge cr6,0x820e2ca8
	if (!ctx.cr6.lt) goto loc_820E2CA8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e2ca8
	if (!ctx.cr6.gt) goto loc_820E2CA8;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x820e2c64
	if (!ctx.cr6.gt) goto loc_820E2C64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f11
	ctx.f8.f64 = double(float(ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fsubs f5,f13,f6
	ctx.f5.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x820e2ca8
	if (!ctx.cr6.lt) goto loc_820E2CA8;
	// b 0x820e2ca4
	goto loc_820E2CA4;
loc_820E2C64:
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
	// fadds f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// ble cr6,0x820e2ca8
	if (!ctx.cr6.gt) goto loc_820E2CA8;
loc_820E2CA4:
	// stfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
loc_820E2CA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820e2d1c
	if (!ctx.cr6.gt) goto loc_820E2D1C;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stfs f31,120(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x8211f990
	ctx.lr = 0x820E2CDC;
	sub_8211F990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x822b8090
	ctx.lr = 0x820E2D1C;
	sub_822B8090(ctx, base);
loc_820E2D1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_820E2B98) {
	__imp__sub_820E2B98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E2D34) {
	__imp__sub_820E2D34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2D38) {
	PPC_FUNC_PROLOGUE();
	// std r3,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.r3.u64);
	// addi r11,r1,24
	ctx.r11.s64 = ctx.r1.s64 + 24;
	// std r4,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
loc_820E2D64:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820e2d84
	if (!ctx.cr0.eq) goto loc_820E2D84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820e2d64
	if (!ctx.cr6.eq) goto loc_820E2D64;
loc_820E2D84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820e2da8
	if (!ctx.cr6.eq) goto loc_820E2DA8;
	// lbz r11,106(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 106);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e2da8
	if (!ctx.cr6.eq) goto loc_820E2DA8;
	// lbz r11,107(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 107);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820E2DA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2D38) {
	__imp__sub_820E2D38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2DB0) {
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
	// rlwinm r11,r5,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1F00;
	// rlwinm r11,r11,0,22,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2de8
	if (ctx.cr6.eq) goto loc_820E2DE8;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82106d88
	ctx.lr = 0x820E2DD4;
	sub_82106D88(ctx, base);
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
loc_820E2DE8:
	// rlwinm r11,r4,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1F00;
	// rlwinm r11,r11,0,22,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2e00
	if (ctx.cr6.eq) goto loc_820E2E00;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82106d88
	ctx.lr = 0x820E2E00;
	sub_82106D88(ctx, base);
loc_820E2E00:
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

PPC_WEAK_FUNC(sub_820E2DB0) {
	__imp__sub_820E2DB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E2E14) {
	__imp__sub_820E2E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2E18) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2e70
	if (ctx.cr6.eq) goto loc_820E2E70;
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
	// ori r7,r8,22936
	ctx.r7.u64 = ctx.r8.u64 | 22936;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820e2e70
	if (!ctx.cr6.eq) goto loc_820E2E70;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r10,23096
	ctx.r9.u64 = ctx.r10.u64 | 23096;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820E2E70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2E18) {
	__imp__sub_820E2E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2E78) {
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
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x820e2ec4
	if (!ctx.cr6.eq) goto loc_820E2EC4;
	// rlwinm r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2ebc
	if (ctx.cr6.eq) goto loc_820E2EBC;
	// lwz r11,724(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 724);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820e2ec4
	if (ctx.cr6.eq) goto loc_820E2EC4;
loc_820E2EBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820e2ec8
	goto loc_820E2EC8;
loc_820E2EC4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820E2EC8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e2ee8
	if (ctx.cr6.eq) goto loc_820E2EE8;
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820E2EE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2E78) {
	__imp__sub_820E2E78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2EF0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x820e2e78
	ctx.lr = 0x820E2F04;
	sub_820E2E78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e2f74
	if (!ctx.cr6.eq) goto loc_820E2F74;
	// rlwinm r11,r4,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2f60
	if (ctx.cr6.eq) goto loc_820E2F60;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r6,r9
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r7,r8,22936
	ctx.r7.u64 = ctx.r8.u64 | 22936;
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r4,r5,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820e2f60
	if (!ctx.cr6.eq) goto loc_820E2F60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,23096
	ctx.r9.u64 = ctx.r10.u64 | 23096;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,20,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820e2f74
	if (ctx.cr6.eq) goto loc_820E2F74;
loc_820E2F60:
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
loc_820E2F74:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E2F80;
	sub_82106D88(ctx, base);
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

PPC_WEAK_FUNC(sub_820E2EF0) {
	__imp__sub_820E2EF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E2F94) {
	__imp__sub_820E2F94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2F98) {
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
	// rlwinm r11,r4,0,16,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e2fcc
	if (ctx.cr6.eq) goto loc_820E2FCC;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82106d88
	ctx.lr = 0x820E2FB8;
	sub_82106D88(ctx, base);
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
loc_820E2FCC:
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

PPC_WEAK_FUNC(sub_820E2F98) {
	__imp__sub_820E2F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2FE0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r3,r3,0,24,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r3,r3,0,20,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E2FE0) {
	__imp__sub_820E2FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E2FEC) {
	__imp__sub_820E2FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E2FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820E2FF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8211fa80
	ctx.lr = 0x820E3004;
	sub_8211FA80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x820e3120
	if (!ctx.cr6.gt) goto loc_820E3120;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x820E3020;
	sub_8211F9E8(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x820E3030;
	sub_8211F9E8(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// xor r28,r30,r11
	ctx.r28.u64 = ctx.r30.u64 ^ ctx.r11.u64;
	// bl 0x823de1f0
	ctx.lr = 0x820E304C;
	sub_823DE1F0(ctx, base);
	// ld r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// ld r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// ld r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r6,168(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r8,184(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r9,192(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// bl 0x820e2d38
	ctx.lr = 0x820E3070;
	sub_820E2D38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2ef0
	ctx.lr = 0x820E3080;
	sub_820E2EF0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e308c
	if (ctx.cr6.eq) goto loc_820E308C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_820E308C:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e30ac
	if (ctx.cr6.eq) goto loc_820E30AC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E30A8;
	sub_82106D88(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
loc_820E30AC:
	// rlwinm r11,r28,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1F00;
	// rlwinm r11,r11,0,22,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e30dc
	if (ctx.cr6.eq) goto loc_820E30DC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E30C8;
	sub_82106D88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E30D4;
	sub_82106D88(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820E30DC:
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// rlwinm r10,r11,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// rlwinm r10,r10,0,22,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e30fc
	if (ctx.cr6.eq) goto loc_820E30FC;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E30FC;
	sub_82106D88(ctx, base);
loc_820E30FC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820e3114
	if (!ctx.cr6.eq) goto loc_820E3114;
	// rlwinm r11,r28,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3120
	if (ctx.cr6.eq) goto loc_820E3120;
loc_820E3114:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E3120;
	sub_82106D88(ctx, base);
loc_820E3120:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E2FF0) {
	__imp__sub_820E2FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E3130;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820fd920
	ctx.lr = 0x820E315C;
	sub_820FD920(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r11,22348(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22348);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820e3184
	if (!ctx.cr6.lt) goto loc_820E3184;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E317C;
	sub_82106D88(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E3184:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,22392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22392);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e3210
	if (ctx.cr6.eq) goto loc_820E3210;
	// addis r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 131072;
	// addi r29,r29,20076
	ctx.r29.s64 = ctx.r29.s64 + 20076;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3210
	if (ctx.cr6.eq) goto loc_820E3210;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lfs f13,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e3210
	if (!ctx.cr6.gt) goto loc_820E3210;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r30,3712
	ctx.r10.s64 = ctx.r30.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,13108
	ctx.r4.s64 = ctx.r9.s64 + 13108;
	// bl 0x822c69a0
	ctx.lr = 0x820E3208;
	sub_822C69A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
loc_820E3210:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3128) {
	__imp__sub_820E3128(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E3220;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc3f0
	ctx.lr = 0x820E3248;
	sub_820FC3F0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820e326c
	if (!ctx.cr6.eq) goto loc_820E326C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc520
	ctx.lr = 0x820E3260;
	sub_820FC520(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3278
	if (ctx.cr6.eq) goto loc_820E3278;
loc_820E326C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E3278;
	sub_82106D88(ctx, base);
loc_820E3278:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,22340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22340);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e3318
	if (ctx.cr6.eq) goto loc_820E3318;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,20080
	ctx.r30.s64 = ctx.r30.s64 + 20080;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3318
	if (ctx.cr6.eq) goto loc_820E3318;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lfs f13,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e3318
	if (!ctx.cr6.gt) goto loc_820E3318;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r29,3712
	ctx.r10.s64 = ctx.r29.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,13136
	ctx.r4.s64 = ctx.r9.s64 + 13136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c69a0
	ctx.lr = 0x820E3300;
	sub_822C69A0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r8,13116
	ctx.r4.s64 = ctx.r8.s64 + 13116;
	// bl 0x822c69a0
	ctx.lr = 0x820E3310;
	sub_822C69A0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
loc_820E3318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3218) {
	__imp__sub_820E3218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3320) {
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
	// lwz r11,22368(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22368);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e33d0
	if (ctx.cr6.eq) goto loc_820E33D0;
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
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,20072
	ctx.r10.s64 = ctx.r10.s64 + 20072;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e33d0
	if (ctx.cr6.eq) goto loc_820E33D0;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r6,r8,22912
	ctx.r6.u64 = ctx.r8.u64 | 22912;
	// lfs f13,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// subf r4,r9,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r9.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e33d0
	if (!ctx.cr6.gt) goto loc_820E33D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r10,r3,3712
	ctx.r10.s64 = ctx.r3.s64 * 3712;
	// addi r11,r9,-1216
	ctx.r11.s64 = ctx.r9.s64 + -1216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r8,13148
	ctx.r4.s64 = ctx.r8.s64 + 13148;
	// bl 0x822c69a0
	ctx.lr = 0x820E33D0;
	sub_822C69A0(ctx, base);
loc_820E33D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3320) {
	__imp__sub_820E3320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E33E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E33E8;
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r8,r8,22924
	ctx.r8.s64 = ctx.r8.s64 + 22924;
	// lwz r11,172(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 172);
	// rlwinm r7,r11,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x820e342c
	if (ctx.cr6.eq) goto loc_820E342C;
	// rlwinm r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e3444
	if (!ctx.cr6.eq) goto loc_820E3444;
loc_820E342C:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e3450
	if (ctx.cr6.eq) goto loc_820E3450;
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3450
	if (ctx.cr6.eq) goto loc_820E3450;
loc_820E3444:
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E3450;
	sub_82106D88(ctx, base);
loc_820E3450:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,22356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22356);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e34dc
	if (ctx.cr6.eq) goto loc_820E34DC;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,20084
	ctx.r30.s64 = ctx.r30.s64 + 20084;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e34dc
	if (ctx.cr6.eq) goto loc_820E34DC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// lfs f13,12240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e34dc
	if (!ctx.cr6.gt) goto loc_820E34DC;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r29,3712
	ctx.r10.s64 = ctx.r29.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,13156
	ctx.r4.s64 = ctx.r9.s64 + 13156;
	// bl 0x822c69a0
	ctx.lr = 0x820E34D4;
	sub_822C69A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_820E34DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E33E0) {
	__imp__sub_820E33E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E34E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E34E4) {
	__imp__sub_820E34E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E34E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820E34F0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
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
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f31,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// ori r29,r7,22912
	ctx.r29.u64 = ctx.r7.u64 | 22912;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// beq cr6,0x820e3584
	if (ctx.cr6.eq) goto loc_820E3584;
	// lwz r3,692(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 692);
	// bl 0x82332af8
	ctx.lr = 0x820E3540;
	sub_82332AF8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r31,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lwz r11,-6420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6420);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82322a20
	ctx.lr = 0x820E3570;
	sub_82322A20(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x820e3584
	if (!ctx.cr6.lt) goto loc_820E3584;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E3584;
	sub_82106D88(ctx, base);
loc_820E3584:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x820e35bc
	if (ctx.cr6.eq) goto loc_820E35BC;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,23376
	ctx.r9.u64 = ctx.r11.u64 | 23376;
	// ori r8,r10,23372
	ctx.r8.u64 = ctx.r10.u64 | 23372;
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r6,r31,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x820e35bc
	if (!ctx.cr6.gt) goto loc_820E35BC;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82106d88
	ctx.lr = 0x820E35BC;
	sub_82106D88(ctx, base);
loc_820E35BC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,22316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22316);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x820e3644
	if (ctx.cr6.eq) goto loc_820E3644;
	// addis r30,r31,2
	ctx.r30.s64 = ctx.r31.s64 + 131072;
	// addi r30,r30,20088
	ctx.r30.s64 = ctx.r30.s64 + 20088;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e3644
	if (ctx.cr6.eq) goto loc_820E3644;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// lwz r10,22356(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22356);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// ble cr6,0x820e3644
	if (!ctx.cr6.gt) goto loc_820E3644;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r28,3712
	ctx.r10.s64 = ctx.r28.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,13164
	ctx.r4.s64 = ctx.r9.s64 + 13164;
	// bl 0x822c69a0
	ctx.lr = 0x820E363C;
	sub_822C69A0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_820E3644:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E34E8) {
	__imp__sub_820E34E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3650) {
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
	// lwz r11,22328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22328);
	// lfs f13,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x820e3700
	if (ctx.cr6.eq) goto loc_820E3700;
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
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// addi r10,r10,20092
	ctx.r10.s64 = ctx.r10.s64 + 20092;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e3700
	if (ctx.cr6.eq) goto loc_820E3700;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// ori r6,r8,22912
	ctx.r6.u64 = ctx.r8.u64 | 22912;
	// lfs f13,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r5,r11,r6
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// subf r4,r9,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r9.s64;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x820e3700
	if (!ctx.cr6.gt) goto loc_820E3700;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r10,r3,3712
	ctx.r10.s64 = ctx.r3.s64 * 3712;
	// addi r11,r9,-1216
	ctx.r11.s64 = ctx.r9.s64 + -1216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r8,13176
	ctx.r4.s64 = ctx.r8.s64 + 13176;
	// bl 0x822c69a0
	ctx.lr = 0x820E3700;
	sub_822C69A0(ctx, base);
loc_820E3700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3650) {
	__imp__sub_820E3650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3710) {
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
	// ori r7,r8,18524
	ctx.r7.u64 = ctx.r8.u64 | 18524;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e3758
	if (ctx.cr6.eq) goto loc_820E3758;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r3,3712
	ctx.r10.s64 = ctx.r3.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r9,13188
	ctx.r4.s64 = ctx.r9.s64 + 13188;
	// b 0x822c69e8
	sub_822C69E8(ctx, base);
	return;
loc_820E3758:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// ori r7,r9,18528
	ctx.r7.u64 = ctx.r9.u64 | 18528;
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// subf r4,r5,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r5.s64;
	// cmpwi cr6,r4,300
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 300, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mulli r11,r3,3712
	ctx.r11.s64 = ctx.r3.s64 * 3712;
	// addi r10,r10,-1216
	ctx.r10.s64 = ctx.r10.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,13188
	ctx.r4.s64 = ctx.r9.s64 + 13188;
	// b 0x822c69a0
	sub_822C69A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3710) {
	__imp__sub_820E3710(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3798) {
	__imp__sub_820E3798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E379C) {
	__imp__sub_820E379C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E37A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// addi r30,r30,18628
	ctx.r30.s64 = ctx.r30.s64 + 18628;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e3820
	if (ctx.cr6.eq) goto loc_820E3820;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r9,22912
	ctx.r8.u64 = ctx.r9.u64 | 22912;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpwi cr6,r6,2500
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2500, ctx.xer);
	// ble cr6,0x820e3820
	if (!ctx.cr6.gt) goto loc_820E3820;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mulli r11,r3,3712
	ctx.r11.s64 = ctx.r3.s64 * 3712;
	// addi r10,r10,-1216
	ctx.r10.s64 = ctx.r10.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,13204
	ctx.r4.s64 = ctx.r9.s64 + 13204;
	// bl 0x822cca88
	ctx.lr = 0x820E3818;
	sub_822CCA88(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_820E3820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e2ff0
	ctx.lr = 0x820E3828;
	sub_820E2FF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3128
	ctx.lr = 0x820E3830;
	sub_820E3128(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3218
	ctx.lr = 0x820E3838;
	sub_820E3218(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3320
	ctx.lr = 0x820E3840;
	sub_820E3320(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e33e0
	ctx.lr = 0x820E3848;
	sub_820E33E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3650
	ctx.lr = 0x820E3850;
	sub_820E3650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e3710
	ctx.lr = 0x820E3858;
	sub_820E3710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e34e8
	ctx.lr = 0x820E3860;
	sub_820E34E8(ctx, base);
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

PPC_WEAK_FUNC(sub_820E37A0) {
	__imp__sub_820E37A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r7,32192
	ctx.r11.s64 = ctx.r7.s64 + 32192;
	// addi r5,r6,6968
	ctx.r5.s64 = ctx.r6.s64 + 6968;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r10,11308(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11308);
	// lfs f0,6232(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 6232);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3878) {
	__imp__sub_820E3878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E38D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E38D4) {
	__imp__sub_820E38D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E38D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-16988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16988);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821271c8
	sub_821271C8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E38D8) {
	__imp__sub_820E38D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3904) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3904) {
	__imp__sub_820E3904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82127348
	sub_82127348(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3908) {
	__imp__sub_820E3908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3920) {
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
	// addis r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 196608;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,-4424
	ctx.r6.s64 = ctx.r11.s64 + -4424;
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e39b4
	if (ctx.cr6.eq) goto loc_820E39B4;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r8,r10,6968
	ctx.r8.s64 = ctx.r10.s64 + 6968;
	// lwz r11,22384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22384);
	// lwz r10,11308(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820e39b4
	if (ctx.cr6.gt) goto loc_820E39B4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f1,f0,f8
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// bl 0x8238d9c0
	ctx.lr = 0x820E39B4;
	sub_8238D9C0(ctx, base);
loc_820E39B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E3920) {
	__imp__sub_820E3920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E39C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E39C4) {
	__imp__sub_820E39C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E39C8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x8238d4b8
	ctx.lr = 0x820E39E8;
	sub_8238D4B8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e39f8
	if (ctx.cr6.eq) goto loc_820E39F8;
	// li r31,1
	ctx.r31.s64 = 1;
loc_820E39F8:
	// bl 0x8238d9d8
	ctx.lr = 0x820E39FC;
	sub_8238D9D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a38
	if (ctx.cr6.eq) goto loc_820E3A38;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// addi r8,r10,6968
	ctx.r8.s64 = ctx.r10.s64 + 6968;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// addis r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 196608;
	// ori r6,r7,61924
	ctx.r6.u64 = ctx.r7.u64 | 61924;
	// addi r5,r10,-4424
	ctx.r5.s64 = ctx.r10.s64 + -4424;
	// lwz r11,11308(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11308);
	// mullw r4,r30,r6
	ctx.r4.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r6.s32);
	// stwx r11,r4,r5
	PPC_STORE_U32(ctx.r4.u32 + ctx.r5.u32, ctx.r11.u32);
	// bl 0x8238d5d0
	ctx.lr = 0x820E3A38;
	sub_8238D5D0(ctx, base);
loc_820E3A38:
	// bl 0x8238da10
	ctx.lr = 0x820E3A3C;
	sub_8238DA10(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820e3a58
	if (!ctx.cr6.eq) goto loc_820E3A58;
	// bl 0x8238da68
	ctx.lr = 0x820E3A4C;
	sub_8238DA68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a5c
	if (ctx.cr6.eq) goto loc_820E3A5C;
loc_820E3A58:
	// li r31,1
	ctx.r31.s64 = 1;
loc_820E3A5C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,18812(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18812);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e3a8c
	if (ctx.cr6.eq) goto loc_820E3A8C;
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3a88
	if (ctx.cr6.eq) goto loc_820E3A88;
	// bl 0x8238d9c8
	ctx.lr = 0x820E3A84;
	sub_8238D9C8(ctx, base);
	// b 0x820e3a8c
	goto loc_820E3A8C;
loc_820E3A88:
	// bl 0x820e3920
	ctx.lr = 0x820E3A8C;
	sub_820E3920(ctx, base);
loc_820E3A8C:
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

PPC_WEAK_FUNC(sub_820E39C8) {
	__imp__sub_820E39C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E3AA4) {
	__imp__sub_820E3AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820E3AB0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e3d84
	if (!ctx.cr6.eq) goto loc_820E3D84;
	// bl 0x8210b820
	ctx.lr = 0x820E3AD8;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e3d84
	if (!ctx.cr6.eq) goto loc_820E3D84;
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,61824
	ctx.r7.u64 = ctx.r8.u64 | 61824;
	// lbzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x820e3d84
	if (!ctx.cr6.eq) goto loc_820E3D84;
	// bl 0x82141ca8
	ctx.lr = 0x820E3B10;
	sub_82141CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3b28
	if (ctx.cr6.eq) goto loc_820E3B28;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17072);
	// b 0x820e3b30
	goto loc_820E3B30;
loc_820E3B28:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17020(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17020);
loc_820E3B30:
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r11,r30,6
	ctx.r11.s64 = ctx.r30.s64 + 6;
	// rlwinm r26,r11,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821201a0
	ctx.lr = 0x820E3B44;
	sub_821201A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r25,r11,13236
	ctx.r25.s64 = ctx.r11.s64 + 13236;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x820E3B6C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-17032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17032);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e3d84
	if (!ctx.cr6.eq) goto loc_820E3D84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,13224
	ctx.r4.s64 = ctx.r11.s64 + 13224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b7268
	ctx.lr = 0x820E3B9C;
	sub_822B7268(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r7,r9,23624
	ctx.r7.u64 = ctx.r9.u64 | 23624;
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r11,-30088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30088);
	// lwzx r6,r28,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// rlwinm r4,r6,0,27,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10;
	// subfic r3,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r3.s64 = 0 - ctx.r5.s64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// subfe r10,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 & ctx.r8.u64;
	// beq cr6,0x820e3be8
	if (ctx.cr6.eq) goto loc_820E3BE8;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lwz r10,-1232(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1232);
	// lwz r11,21472(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21472);
	// b 0x820e3bf8
	goto loc_820E3BF8;
loc_820E3BE8:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lwz r10,-30008(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30008);
	// lwz r11,-15684(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -15684);
loc_820E3BF8:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,180(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,184(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// lfs f11,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,188(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,192(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// lfs f9,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,196(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,200(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,204(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820E3C40;
	sub_82141160(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x820E3C50;
	sub_822C2068(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f30,13220(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f30.f64 = double(temp.f32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lfs f2,13216(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13216);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stb r31,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r31.u8);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x822c1db0
	ctx.lr = 0x820E3CC8;
	sub_822C1DB0(ctx, base);
	// addi r3,r26,1
	ctx.r3.s64 = ctx.r26.s64 + 1;
	// bl 0x821201a0
	ctx.lr = 0x820E3CD0;
	sub_821201A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x820E3CF0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820e3d84
	if (ctx.cr6.eq) goto loc_820E3D84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c4080
	ctx.lr = 0x820E3D00;
	sub_822C4080(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stb r31,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r31.u8);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f13,7036(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f2,5996(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5996);
	ctx.f2.f64 = double(temp.f32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stb r31,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r31.u8);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r31.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// bl 0x822c1db0
	ctx.lr = 0x820E3D84;
	sub_822C1DB0(ctx, base);
loc_820E3D84:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3AA8) {
	__imp__sub_820E3AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E3D94) {
	__imp__sub_820E3D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x820E3DA0;
	__savegprlr_17(ctx, base);
	// stfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f29.u64);
	// stfd f30,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f30.u64);
	// stfd f31,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// bl 0x8210b820
	ctx.lr = 0x820E3DB8;
	sub_8210B820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820e3fd8
	if (!ctx.cr6.eq) goto loc_820E3FD8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82141160
	ctx.lr = 0x820E3DC8;
	sub_82141160(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,-30088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30088);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r6,r10
	ctx.r31.u64 = ctx.r6.u64 & ctx.r10.u64;
	// bl 0x82141ca8
	ctx.lr = 0x820E3DEC;
	sub_82141CA8(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e3e04
	if (ctx.cr6.eq) goto loc_820E3E04;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19440(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19440);
	// b 0x820e3e0c
	goto loc_820E3E0C;
loc_820E3E04:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,6208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6208);
loc_820E3E0C:
	// lfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c2068
	ctx.lr = 0x820E3E20;
	sub_822C2068(ctx, base);
	// lis r9,-32153
	ctx.r9.s64 = -2107179008;
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lfs f13,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lfs f12,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r8,9240
	ctx.r10.s64 = ctx.r8.s64 + 9240;
	// addi r19,r11,-5696
	ctx.r19.s64 = ctx.r11.s64 + -5696;
	// lfs f0,-16788(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lis r25,-32190
	ctx.r25.s64 = -2109603840;
	// fmuls f11,f0,f31
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f10,f0,f31
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// addi r20,r10,24
	ctx.r20.s64 = ctx.r10.s64 + 24;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r27,r10,65535
	ctx.r27.u64 = ctx.r10.u64 | 65535;
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
	// lfs f29,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r30,r19,36
	ctx.r30.s64 = ctx.r19.s64 + 36;
	// li r22,3
	ctx.r22.s64 = 3;
	// lis r18,-32166
	ctx.r18.s64 = -2108030976;
	// fmuls f30,f11,f12
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lis r24,-32168
	ctx.r24.s64 = -2108162048;
	// fmuls f31,f10,f13
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r23,-32187
	ctx.r23.s64 = -2109407232;
loc_820E3E8C:
	// lbz r9,29088(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e3eb0
	if (!ctx.cr6.eq) goto loc_820E3EB0;
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
	// b 0x820e3ec0
	goto loc_820E3EC0;
loc_820E3EB0:
	// lwz r11,-8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_820E3EC0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e3ee8
	if (ctx.cr6.eq) goto loc_820E3EE8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e3edc
	if (!ctx.cr6.eq) goto loc_820E3EDC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x820e3ee0
	goto loc_820E3EE0;
loc_820E3EDC:
	// lhz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
loc_820E3EE0:
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820e3fc0
	if (ctx.cr6.eq) goto loc_820E3FC0;
loc_820E3EE8:
	// lwz r11,344(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 344);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820e3fc0
	if (ctx.cr6.eq) goto loc_820E3FC0;
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r30,-36
	ctx.r3.s64 = ctx.r30.s64 + -36;
	// lfs f13,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f12,168(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x820f41c0
	ctx.lr = 0x820E3F18;
	sub_820F41C0(ctx, base);
	// lfs f11,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,168(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x820eb798
	ctx.lr = 0x820E3F38;
	sub_820EB798(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82133078
	ctx.lr = 0x820E3F40;
	sub_82133078(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// bl 0x8238b5a8
	ctx.lr = 0x820E3F50;
	sub_8238B5A8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lwz r11,-15684(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -15684);
	// lfs f9,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f9.f64 = double(temp.f32);
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f8,152(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r10,-30008(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + -30008);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// fnmsubs f1,f5,f29,f9
	ctx.f1.f64 = double(float(-(ctx.f5.f64 * ctx.f29.f64 - ctx.f9.f64)));
	// bl 0x82133638
	ctx.lr = 0x820E3FBC;
	sub_82133638(ctx, base);
	// lwz r10,-32312(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -32312);
loc_820E3FC0:
	// addi r30,r30,404
	ctx.r30.s64 = ctx.r30.s64 + 404;
	// addi r11,r19,844
	ctx.r11.s64 = ctx.r19.s64 + 844;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r20,r20,9780
	ctx.r20.s64 = ctx.r20.s64 + 9780;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820e3e8c
	if (ctx.cr6.lt) goto loc_820E3E8C;
loc_820E3FD8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f30,-144(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3D98) {
	__imp__sub_820E3D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E3FEC) {
	__imp__sub_820E3FEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E3FF0) {
	PPC_FUNC_PROLOGUE();
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
	// beq cr6,0x820e401c
	if (ctx.cr6.eq) goto loc_820E401C;
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e401c
	if (ctx.cr6.eq) goto loc_820E401C;
	// b 0x82107030
	sub_82107030(ctx, base);
	return;
loc_820E401C:
	// lbz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82106fd0
	sub_82106FD0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E3FF0) {
	__imp__sub_820E3FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E402C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E402C) {
	__imp__sub_820E402C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4030) {
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
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82310110
	ctx.lr = 0x820E4074;
	sub_82310110(ctx, base);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// ori r4,r8,18532
	ctx.r4.u64 = ctx.r8.u64 | 18532;
	// ori r11,r7,18536
	ctx.r11.u64 = ctx.r7.u64 | 18536;
	// ori r10,r6,18540
	ctx.r10.u64 = ctx.r6.u64 | 18540;
	// ori r9,r5,18544
	ctx.r9.u64 = ctx.r5.u64 | 18544;
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stwx r3,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r3.u32);
	// stwx r8,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r8.u32);
	// stfsx f31,r31,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// stfsx f30,r31,r9
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
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

PPC_WEAK_FUNC(sub_820E4030) {
	__imp__sub_820E4030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E40C8) {
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
	// bl 0x82310110
	ctx.lr = 0x820E40E0;
	sub_82310110(ctx, base);
	// addis r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 131072;
	// addi r8,r8,18532
	ctx.r8.s64 = ctx.r8.s64 + 18532;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e4190
	if (ctx.cr6.eq) goto loc_820E4190;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x820e4190
	if (!ctx.cr6.lt) goto loc_820E4190;
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// addi r10,r10,18536
	ctx.r10.s64 = ctx.r10.s64 + 18536;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820e4174
	if (!ctx.cr6.lt) goto loc_820E4174;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
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
	// lis r6,2
	ctx.r6.s64 = 131072;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// ori r5,r6,18544
	ctx.r5.u64 = ctx.r6.u64 | 18544;
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r11,r3,18540
	ctx.r11.u64 = ctx.r3.u64 | 18540;
	// lfsx f9,r31,r5
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,12168(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f8,r31,r11
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 / ctx.f7.f64));
	// fsubs f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fmuls f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmadds f1,f5,f8,f4
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f4.f64));
	// b 0x820e418c
	goto loc_820E418C;
loc_820E4174:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r9,18544
	ctx.r7.u64 = ctx.r9.u64 | 18544;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lfsx f1,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
loc_820E418C:
	// bl 0x82280d20
	ctx.lr = 0x820E4190;
	sub_82280D20(ctx, base);
loc_820E4190:
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

PPC_WEAK_FUNC(sub_820E40C8) {
	__imp__sub_820E40C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E41A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E41A4) {
	__imp__sub_820E41A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E41A8) {
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
	// ori r7,r8,18608
	ctx.r7.u64 = ctx.r8.u64 | 18608;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820e4218
	if (ctx.cr6.eq) goto loc_820E4218;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22940
	ctx.r9.u64 = ctx.r10.u64 | 22940;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820e4218
	if (!ctx.cr6.eq) goto loc_820E4218;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30204);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820e4218
	if (ctx.cr6.eq) goto loc_820E4218;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,21488(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21488);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820E4218:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E41A8) {
	__imp__sub_820E41A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4220) {
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
	// addi r6,r11,18608
	ctx.r6.s64 = ctx.r11.s64 + 18608;
	// stwx r4,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820E4220) {
	__imp__sub_820E4220(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4244) {
	__imp__sub_820E4244(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r3,3712
	ctx.r10.s64 = ctx.r3.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822d1530
	sub_822D1530(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4248) {
	__imp__sub_820E4248(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E425C) {
	__imp__sub_820E425C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4260) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mulli r10,r3,3712
	ctx.r10.s64 = ctx.r3.s64 * 3712;
	// addi r11,r11,-1216
	ctx.r11.s64 = ctx.r11.s64 + -1216;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822d1618
	sub_822D1618(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4260) {
	__imp__sub_820E4260(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4274) {
	__imp__sub_820E4274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820E4280;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,1152(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1152);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r28,r9,-2072
	ctx.r28.s64 = ctx.r9.s64 + -2072;
	// lis r27,-32187
	ctx.r27.s64 = -2109407232;
	// lwz r29,1156(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1156);
	// lwz r10,-30040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30040);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,-2072(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2072);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r26,-32187
	ctx.r26.s64 = -2109407232;
	// lfs f0,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r25,r9,-22896
	ctx.r25.s64 = ctx.r9.s64 + -22896;
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,-19412(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -19412);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lis r28,-32168
	ctx.r28.s64 = -2108162048;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lbz r7,12(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// addic r6,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// lwz r10,876(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 876);
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r9,-17084(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -17084);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// and r6,r7,r5
	ctx.r6.u64 = ctx.r7.u64 & ctx.r5.u64;
	// lwz r10,-30012(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + -30012);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,13244(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 13244);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// stfs f12,124(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stb r11,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r11.u8);
	// stfs f1,144(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r7,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r7.u8);
	// stb r11,137(r1)
	PPC_STORE_U8(ctx.r1.u32 + 137, ctx.r11.u8);
	// stb r7,138(r1)
	PPC_STORE_U8(ctx.r1.u32 + 138, ctx.r7.u8);
	// stb r11,139(r1)
	PPC_STORE_U8(ctx.r1.u32 + 139, ctx.r11.u8);
	// stb r11,140(r1)
	PPC_STORE_U8(ctx.r1.u32 + 140, ctx.r11.u8);
	// stb r8,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r8.u8);
	// bl 0x820f4768
	ctx.lr = 0x820E436C;
	sub_820F4768(ctx, base);
	// lwz r5,152(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stw r5,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r5.u32);
	// stw r4,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r4.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4278) {
	__imp__sub_820E4278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820E4384) {
	__imp__sub_820E4384(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820E4388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820E4390;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e43b0
	if (ctx.cr6.eq) goto loc_820E43B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r11.u8);
loc_820E43B0:
	// lwz r11,1136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820e43f8
	if (!ctx.cr6.gt) goto loc_820E43F8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x820e43f8
	if (ctx.cr6.gt) goto loc_820E43F8;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// mulli r10,r5,404
	ctx.r10.s64 = ctx.r5.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820e442c
	if (!ctx.cr6.eq) goto loc_820E442C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,13248
	ctx.r4.s64 = ctx.r11.s64 + 13248;
	// bl 0x82280c30
	ctx.lr = 0x820E43F8;
	sub_82280C30(ctx, base);
loc_820E43F8:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E442C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820e4448
	if (ctx.cr6.eq) goto loc_820E4448;
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x820e4448
	if (!ctx.cr6.eq) goto loc_820E4448;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r10.u8);
loc_820E4448:
	// lbz r10,208(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r10,13
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 13, ctx.xer);
	// bne cr6,0x820e44a4
	if (!ctx.cr6.eq) goto loc_820E44A4;
	// lis r10,-32155
	ctx.r10.s64 = -2107310080;
	// rlwinm r9,r3,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,-30024
	ctx.r10.s64 = ctx.r10.s64 + -30024;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 6, ctx.xer);
	// bne cr6,0x820e44a4
	if (!ctx.cr6.eq) goto loc_820E44A4;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// bl 0x820f41c0
	ctx.lr = 0x820E4490;
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820E44A4:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1140(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1140);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,1144(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1144);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f8,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,1148(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1148);
	ctx.f7.f64 = double(temp.f32);
	// fadds f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820E4388) {
	__imp__sub_820E4388(ctx, base);
}

