#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_821E16C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fneg f9,f9
	ctx.f9.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f8,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x821e1734
	if (!ctx.cr6.lt) goto loc_821E1734;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f8.f64 = double(temp.f32);
	// fadds f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// lfs f8,6020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f8.f64 = double(temp.f32);
	// fcmpu cr6,f0,f8
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// ble cr6,0x821e1714
	if (!ctx.cr6.gt) goto loc_821E1714;
	// fmr f0,f8
	ctx.f0.f64 = ctx.f8.f64;
loc_821E1714:
	// fmuls f8,f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f12,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmadds f6,f0,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// frsqrte f5,f6
	ctx.f5.f64 = 1.0 / sqrt(ctx.f6.f64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f13,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// fmuls f0,f4,f0
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
loc_821E1734:
	// fmuls f8,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmsubs f5,f13,f10,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 - ctx.f8.f64));
	// fmsubs f4,f12,f9,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 - ctx.f7.f64));
	// fmsubs f3,f11,f0,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f6.f64));
	// fmuls f2,f5,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fmuls f1,f4,f10
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmsubs f13,f9,f4,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 - ctx.f2.f64));
	// fmsubs f12,f3,f11,f1
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 - ctx.f1.f64));
	// fmsubs f11,f5,f10,f0
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 - ctx.f0.f64));
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// frsqrte f7,f8
	ctx.f7.f64 = 1.0 / sqrt(ctx.f8.f64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f5,0(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f4,f13,f6
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// stfs f4,4(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f3,f12,f6
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// stfs f3,8(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E16C0) {
	__imp__sub_821E16C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E1794) {
	__imp__sub_821E1794(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1798) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E1798) {
	__imp__sub_821E1798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E179C) {
	__imp__sub_821E179C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E17A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821E17A8;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E17D8;
	sub_82332AF8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e17e4
	if (!ctx.cr6.eq) goto loc_821E17E4;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_821E17E4:
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e1918
	if (!ctx.cr6.eq) goto loc_821E1918;
	// lbz r11,1633(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1633);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1918
	if (!ctx.cr6.eq) goto loc_821E1918;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e1918
	if (ctx.cr6.eq) goto loc_821E1918;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f0,1088(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1088);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,-6712(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6712);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82327ea8
	ctx.lr = 0x821E1824;
	sub_82327EA8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x821e1918
	if (ctx.cr6.gt) goto loc_821E1918;
	// lfs f0,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,5484(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bgt cr6,0x821e1918
	if (ctx.cr6.gt) goto loc_821E1918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E1868;
	sub_82332AF8(ctx, base);
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x821E1878;
	sub_82332B10(ctx, base);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e16c0
	ctx.lr = 0x821E188C;
	sub_821E16C0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// lfs f1,5484(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f12,f8
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f6,124(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821e2978
	ctx.lr = 0x821E18EC;
	sub_821E2978(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x822304f8
	ctx.lr = 0x821E18F8;
	sub_822304F8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r31,124(r3)
	PPC_STORE_U16(ctx.r3.u32 + 124, ctx.r31.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8222fbe8
	ctx.lr = 0x821E1910;
	sub_8222FBE8(ctx, base);
	// lhz r9,126(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 126);
	// sth r9,128(r30)
	PPC_STORE_U16(ctx.r30.u32 + 128, ctx.r9.u16);
loc_821E1918:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E17A0) {
	__imp__sub_821E17A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E1924) {
	__imp__sub_821E1924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821E1930;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,44(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x821e1970
	if (!ctx.cr6.eq) goto loc_821E1970;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,492(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 492);
	// bl 0x82229da8
	ctx.lr = 0x821E1970;
	sub_82229DA8(ctx, base);
loc_821E1970:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821e1988
	if (ctx.cr6.eq) goto loc_821E1988;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x821e19cc
	if (!ctx.cr6.eq) goto loc_821E19CC;
loc_821E1988:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e19cc
	if (ctx.cr6.eq) goto loc_821E19CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82232528
	ctx.lr = 0x821E199C;
	sub_82232528(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r9,r28,52
	ctx.r9.s64 = ctx.r28.s64 + 52;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r31,48
	ctx.r7.s64 = ctx.r31.s64 + 48;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e17a0
	ctx.lr = 0x821E19C0;
	sub_821E17A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_821E19CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E1928) {
	__imp__sub_821E1928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E19D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x821E19E0;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E1A0C;
	sub_82332AF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r10,272(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 272);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1a40
	if (ctx.cr6.eq) goto loc_821E1A40;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0b68
	ctx.lr = 0x821E1A40;
	sub_821E0B68(ctx, base);
loc_821E1A40:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0a38
	ctx.lr = 0x821E1A50;
	sub_821E0A38(ctx, base);
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r23,r30,28
	ctx.r23.s64 = ctx.r30.s64 + 28;
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222d808
	ctx.lr = 0x821E1A7C;
	sub_8222D808(ctx, base);
	// lbz r10,375(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 375);
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// beq cr6,0x821e1ab8
	if (ctx.cr6.eq) goto loc_821E1AB8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821e10e0
	ctx.lr = 0x821E1AB4;
	sub_821E10E0(ctx, base);
	// lwz r18,112(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_821E1AB8:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822760d8
	ctx.lr = 0x821E1AC4;
	sub_822760D8(ctx, base);
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1d0c
	if (!ctx.cr6.eq) goto loc_821E1D0C;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e1cd8
	if (ctx.cr6.eq) goto loc_821E1CD8;
	// lhz r11,38(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821e1b0c
	if (!ctx.cr6.eq) goto loc_821E1B0C;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821e1928
	ctx.lr = 0x821E1B04;
	sub_821E1928(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x821e1cd8
	goto loc_821E1CD8;
loc_821E1B0C:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1b3c
	if (ctx.cr6.eq) goto loc_821E1B3C;
	// addi r6,r30,40
	ctx.r6.s64 = ctx.r30.s64 + 40;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821e0f38
	ctx.lr = 0x821E1B28;
	sub_821E0F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1b3c
	if (ctx.cr6.eq) goto loc_821E1B3C;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x821e1cd8
	goto loc_821E1CD8;
loc_821E1B3C:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r10,289(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 289);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1cd8
	if (ctx.cr6.eq) goto loc_821E1CD8;
	// lbz r10,1629(r20)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r20.u32 + 1629);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1b5c
	if (ctx.cr6.eq) goto loc_821E1B5C;
	// ori r21,r21,2
	ctx.r21.u64 = ctx.r21.u64 | 2;
loc_821E1B5C:
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// lhz r25,38(r31)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// andc r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r24,r9,1,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// beq cr6,0x821e1b80
	if (ctx.cr6.eq) goto loc_821E1B80;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x821e1b8c
	if (!ctx.cr6.eq) goto loc_821E1B8C;
loc_821E1B80:
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r10.u32);
loc_821E1B8C:
	// lis r10,-32021
	ctx.r10.s64 = -2098528256;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r26,r11,-2280
	ctx.r26.s64 = ctx.r11.s64 + -2280;
	// lwz r11,-19088(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19088);
	// lhz r8,126(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 126);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821e1bc4
	if (!ctx.cr6.eq) goto loc_821E1BC4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82128080
	ctx.lr = 0x821E1BC4;
	sub_82128080(ctx, base);
loc_821E1BC4:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r11,-6116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6116);
	// lhz r10,126(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e1c54
	if (!ctx.cr6.eq) goto loc_821E1C54;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// bl 0x8222ec90
	ctx.lr = 0x821E1BFC;
	sub_8222EC90(ctx, base);
	// lis r16,-32024
	ctx.r16.s64 = -2098724864;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r10,-2200
	ctx.r4.s64 = ctx.r10.s64 + -2200;
	// lwz r11,5544(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5544);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8233d480
	ctx.lr = 0x821E1C18;
	sub_8233D480(ctx, base);
	// lwz r11,5544(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5544);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r9,-2264
	ctx.r5.s64 = ctx.r9.s64 + -2264;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82127ea8
	ctx.lr = 0x821E1C3C;
	sub_82127EA8(ctx, base);
	// lwz r11,5544(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 5544);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82128080
	ctx.lr = 0x821E1C54;
	sub_82128080(ctx, base);
loc_821E1C54:
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lhz r26,34(r31)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r31.u32 + 34);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x821f1080
	ctx.lr = 0x821E1C90;
	sub_821F1080(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lbz r10,176(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1cb0
	if (ctx.cr6.eq) goto loc_821E1CB0;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x821e1cb4
	if (ctx.cr6.gt) goto loc_821E1CB4;
loc_821E1CB0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E1CB4:
	// clrlwi r10,r24,24
	ctx.r10.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1cd8
	if (ctx.cr6.eq) goto loc_821E1CD8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1cd8
	if (!ctx.cr6.eq) goto loc_821E1CD8;
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r10.u32);
loc_821E1CD8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e1d0c
	if (!ctx.cr6.eq) goto loc_821E1D0C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e1d0c
	if (!ctx.cr6.eq) goto loc_821E1D0C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0d98
	ctx.lr = 0x821E1D08;
	sub_821E0D98(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
loc_821E1D0C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// beq cr6,0x821e1d28
	if (ctx.cr6.eq) goto loc_821E1D28;
	// lbz r11,2(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 2);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r9,2(r18)
	PPC_STORE_U8(ctx.r18.u32 + 2, ctx.r9.u8);
loc_821E1D28:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E19D8) {
	__imp__sub_821E19D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821E1D38;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E1D68;
	sub_82332AF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// lfs f30,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// li r24,1
	ctx.r24.s64 = 1;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r22,-31834
	ctx.r22.s64 = -2086273024;
	// lfs f29,-21928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21928);
	ctx.f29.f64 = double(temp.f32);
loc_821E1D90:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e14c0
	ctx.lr = 0x821E1DA8;
	sub_821E14C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq cr6,0x821e1ef0
	if (ctx.cr6.eq) goto loc_821E1EF0;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x821e19d8
	ctx.lr = 0x821E1DDC;
	sub_821E19D8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e1e68
	if (ctx.cr6.eq) goto loc_821E1E68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276118
	ctx.lr = 0x821E1E00;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1e48
	if (ctx.cr6.eq) goto loc_821E1E48;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r21,r30,52
	ctx.r21.s64 = ctx.r30.s64 + 52;
	// addi r20,r31,48
	ctx.r20.s64 = ctx.r31.s64 + 48;
	// bl 0x821e0a38
	ctx.lr = 0x821E1E24;
	sub_821E0A38(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276118
	ctx.lr = 0x821E1E30;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x821f3cc8
	ctx.lr = 0x821E1E48;
	sub_821F3CC8(ctx, base);
loc_821E1E48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823332c8
	ctx.lr = 0x821E1E58;
	sub_823332C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// b 0x821e1ed0
	goto loc_821E1ED0;
loc_821E1E68:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lbz r11,289(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 289);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1ec0
	if (!ctx.cr6.eq) goto loc_821E1EC0;
	// lwz r11,-6476(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + -6476);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lbz r11,1628(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1628);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lwz r11,272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// lfs f0,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_821E1EC0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823332c8
	ctx.lr = 0x821E1ED0;
	sub_823332C8(ctx, base);
loc_821E1ED0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,12
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 12, ctx.xer);
	// blt cr6,0x821e1d90
	if (ctx.cr6.lt) goto loc_821E1D90;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_821E1EF0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// bl 0x821e10e0
	ctx.lr = 0x821E1F04;
	sub_821E10E0(ctx, base);
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1f28
	if (ctx.cr6.eq) goto loc_821E1F28;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0b68
	ctx.lr = 0x821E1F28;
	sub_821E0B68(ctx, base);
loc_821E1F28:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E1D30) {
	__imp__sub_821E1D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E1F3C) {
	__imp__sub_821E1F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E1F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x821E1F48;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de018
	ctx.lr = 0x821E1F50;
	__savefpr_24(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E1F74;
	sub_82332AF8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332b10
	ctx.lr = 0x821E1F80;
	sub_82332B10(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e14c0
	ctx.lr = 0x821E1F9C;
	sub_821E14C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x821e2000
	if (!ctx.cr6.eq) goto loc_821E2000;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r31,4
	ctx.r6.s64 = ctx.r31.s64 + 4;
	// bl 0x821e10e0
	ctx.lr = 0x821E1FCC;
	sub_821E10E0(ctx, base);
	// lwz r11,272(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0b68
	ctx.lr = 0x821E1FF0;
	sub_821E0B68(ctx, base);
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de064
	ctx.lr = 0x821E1FFC;
	__restfpr_24(ctx, base);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
loc_821E2000:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x821e19d8
	ctx.lr = 0x821E201C;
	sub_821E19D8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r16,0
	ctx.r16.s64 = 0;
	// lfs f25,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f25.f64 = double(temp.f32);
	// li r15,2047
	ctx.r15.s64 = 2047;
	// lfs f28,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f28.f64 = double(temp.f32);
	// lis r19,-31834
	ctx.r19.s64 = -2086273024;
	// lfs f24,-21928(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -21928);
	ctx.f24.f64 = double(temp.f32);
	// lis r17,-31834
	ctx.r17.s64 = -2086273024;
	// lfs f26,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
loc_821E205C:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82332918
	ctx.lr = 0x821E2068;
	sub_82332918(ctx, base);
	// lfs f0,48(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f0,f1
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f27,f26
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// ble cr6,0x821e24c4
	if (!ctx.cr6.gt) goto loc_821E24C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// lfs f29,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x82276118
	ctx.lr = 0x821E2090;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e20d4
	if (ctx.cr6.eq) goto loc_821E20D4;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r30,52
	ctx.r29.s64 = ctx.r30.s64 + 52;
	// bl 0x821e0a38
	ctx.lr = 0x821E20B0;
	sub_821E0A38(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276118
	ctx.lr = 0x821E20BC;
	sub_82276118(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x821f3cc8
	ctx.lr = 0x821E20D4;
	sub_821F3CC8(ctx, base);
loc_821E20D4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f24.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823332c8
	ctx.lr = 0x821E20E4;
	sub_823332C8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r7,64(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e14c0
	ctx.lr = 0x821E2108;
	sub_821E14C0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e214c
	if (ctx.cr6.eq) goto loc_821E214C;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e24c4
	if (!ctx.cr6.eq) goto loc_821E24C4;
	// lwz r11,268(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e214c
	if (ctx.cr6.eq) goto loc_821E214C;
	// lwz r11,268(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e24c4
	if (!ctx.cr6.eq) goto loc_821E24C4;
	// lwz r11,-6448(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + -6448);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
loc_821E214C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822dd768
	ctx.lr = 0x821E215C;
	sub_822DD768(ctx, base);
	// lfs f0,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,56(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,60(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// li r5,68
	ctx.r5.s64 = 68;
	// lfs f9,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f0,244(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stfs f13,248(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// addi r28,r30,52
	ctx.r28.s64 = ctx.r30.s64 + 52;
	// stfs f12,252(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f11,220(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f10,224(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fmadds f8,f0,f28,f31
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f31.f64));
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fmadds f7,f13,f28,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f30.f64));
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// fmadds f6,f12,f28,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f29.f64));
	// stfs f7,236(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f6,240(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// bl 0x822dd768
	ctx.lr = 0x821E21C4;
	sub_822DD768(ctx, base);
	// lfs f5,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f4.f64 = double(temp.f32);
	// clrlwi r22,r29,24
	ctx.r22.u64 = ctx.r29.u32 & 0xFF;
	// lfs f2,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f2.f64 = double(temp.f32);
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fneg f1,f4
	ctx.f1.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e2208
	if (ctx.cr6.eq) goto loc_821E2208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823332c8
	ctx.lr = 0x821E2204;
	sub_823332C8(ctx, base);
	// b 0x821e220c
	goto loc_821E220C;
loc_821E2208:
	// stw r15,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r15.u32);
loc_821E220C:
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r7,176(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821e14c0
	ctx.lr = 0x821E2224;
	sub_821E14C0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e223c
	if (ctx.cr6.eq) goto loc_821E223C;
	// lbz r9,152(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e2254
	if (!ctx.cr6.eq) goto loc_821E2254;
loc_821E223C:
	// lbz r11,41(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 41);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e225c
	if (ctx.cr6.eq) goto loc_821E225C;
	// lbz r9,153(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 153);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e225c
	if (ctx.cr6.eq) goto loc_821E225C;
loc_821E2254:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821e2260
	goto loc_821E2260;
loc_821E225C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E2260:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e2300
	if (!ctx.cr6.eq) goto loc_821E2300;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e2300
	if (!ctx.cr6.eq) goto loc_821E2300;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// beq cr6,0x821e22d0
	if (ctx.cr6.eq) goto loc_821E22D0;
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16968(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16968);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// lfs f10,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f7,f8,f8
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmuls f6,f13,f13
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f7
	ctx.cr6.compare(ctx.f4.f64, ctx.f7.f64);
	// ble cr6,0x821e22d4
	if (!ctx.cr6.gt) goto loc_821E22D4;
loc_821E22D0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E22D4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r11,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r11.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e19d8
	ctx.lr = 0x821E22FC;
	sub_821E19D8(ctx, base);
	// b 0x821e24a0
	goto loc_821E24A0;
loc_821E2300:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e2344
	if (ctx.cr6.eq) goto loc_821E2344;
	// lfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f31,f3
	ctx.f31.f64 = double(float(sqrt(ctx.f3.f64)));
	// b 0x821e236c
	goto loc_821E236C;
loc_821E2344:
	// lfs f0,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// lfs f12,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f29,f12
	ctx.f11.f64 = double(float(ctx.f29.f64 - ctx.f12.f64));
	// lfs f10,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f31,f10
	ctx.f9.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmuls f8,f13,f13
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f7,f11,f11,f8
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f6,f9,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f7.f64));
	// fsqrts f31,f6
	ctx.f31.f64 = double(float(sqrt(ctx.f6.f64)));
loc_821E236C:
	// fcmpu cr6,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f25.f64);
	// bge cr6,0x821e2378
	if (!ctx.cr6.lt) goto loc_821E2378;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
loc_821E2378:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e23a4
	if (ctx.cr6.eq) goto loc_821E23A4;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x82332918
	ctx.lr = 0x821E238C;
	sub_82332918(ctx, base);
	// fsubs f13,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f27.f64));
	// lfs f0,48(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsel f12,f13,f27,f1
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f27.f64 : ctx.f1.f64;
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f27,f26
	ctx.cr6.compare(ctx.f27.f64, ctx.f26.f64);
	// ble cr6,0x821e24c4
	if (!ctx.cr6.gt) goto loc_821E24C4;
loc_821E23A4:
	// fdivs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f27.f64));
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// fcmpu cr6,f12,f26
	ctx.cr6.compare(ctx.f12.f64, ctx.f26.f64);
	// ble cr6,0x821e24c4
	if (!ctx.cr6.gt) goto loc_821E24C4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821e24a4
	if (!ctx.cr6.eq) goto loc_821E24A4;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// srawi r10,r11,20
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 20;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// cmplwi cr6,r9,7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7, ctx.xer);
	// beq cr6,0x821e2420
	if (ctx.cr6.eq) goto loc_821E2420;
	// lfs f0,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-16968(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -16968);
	// lfs f13,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,168(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f5
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f5.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f3,f12,f12
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f2,f9,f9,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f6,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f2.f64));
	// fcmpu cr6,f1,f4
	ctx.cr6.compare(ctx.f1.f64, ctx.f4.f64);
	// ble cr6,0x821e2424
	if (!ctx.cr6.gt) goto loc_821E2424;
loc_821E2420:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E2424:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e2470
	if (ctx.cr6.eq) goto loc_821E2470;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e2448
	if (ctx.cr6.eq) goto loc_821E2448;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e2470
	if (!ctx.cr6.eq) goto loc_821E2470;
loc_821E2448:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e10e0
	ctx.lr = 0x821E2470;
	sub_821E10E0(ctx, base);
loc_821E2470:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// li r8,8
	ctx.r8.s64 = 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821e19d8
	ctx.lr = 0x821E24A0;
	sub_821E19D8(ctx, base);
loc_821E24A0:
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_821E24A4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// clrlwi r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e24c4
	if (ctx.cr6.eq) goto loc_821E24C4;
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// blt cr6,0x821e205c
	if (ctx.cr6.lt) goto loc_821E205C;
loc_821E24C4:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de064
	ctx.lr = 0x821E24D0;
	__restfpr_24(ctx, base);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E1F40) {
	__imp__sub_821E1F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E24D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E24D4) {
	__imp__sub_821E24D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E24D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821E24E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// addi r31,r5,40
	ctx.r31.s64 = ctx.r5.s64 + 40;
	// addi r29,r5,28
	ctx.r29.s64 = ctx.r5.s64 + 28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r8,640
	ctx.r8.s64 = 41943040;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lhz r6,126(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 126);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// addi r5,r11,-9672
	ctx.r5.s64 = ctx.r11.s64 + -9672;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,59441
	ctx.r8.u64 = ctx.r8.u64 | 59441;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lhz r7,126(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// bl 0x82341f80
	ctx.lr = 0x821E2538;
	sub_82341F80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e2624
	if (ctx.cr6.eq) goto loc_821E2624;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f11,52(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f8,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,56(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lwz r5,64(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f4,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f3,60(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lhz r7,124(r26)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r26.u32 + 124);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stfs f10,164(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f9,168(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821e0a38
	ctx.lr = 0x821E25AC;
	sub_821E0A38(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x821f1080
	ctx.lr = 0x821E25E0;
	sub_821F1080(ctx, base);
	// lis r6,-32032
	ctx.r6.s64 = -2099249152;
	// lwz r11,-6052(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -6052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e25fc
	if (ctx.cr6.eq) goto loc_821E25FC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e2618
	if (!ctx.cr6.eq) goto loc_821E2618;
loc_821E25FC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,100
	ctx.r7.s64 = 100;
	// addi r5,r11,-2008
	ctx.r5.s64 = ctx.r11.s64 + -2008;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2d18
	ctx.lr = 0x821E2618;
	sub_821F2D18(ctx, base);
loc_821E2618:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_821E2624:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-6052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e2640
	if (ctx.cr6.eq) goto loc_821E2640;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e265c
	if (!ctx.cr6.eq) goto loc_821E265C;
loc_821E2640:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r7,100
	ctx.r7.s64 = 100;
	// addi r5,r11,-2280
	ctx.r5.s64 = ctx.r11.s64 + -2280;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f2d18
	ctx.lr = 0x821E265C;
	sub_821F2D18(ctx, base);
loc_821E265C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E24D8) {
	__imp__sub_821E24D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2668) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e26d8
	if (ctx.cr6.eq) goto loc_821E26D8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// slw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// not r7,r9
	ctx.r7.u64 = ~ctx.r9.u64;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// bge cr6,0x821e26d8
	if (!ctx.cr6.lt) goto loc_821E26D8;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// addi r8,r10,9624
	ctx.r8.s64 = ctx.r10.s64 + 9624;
	// lwz r10,20(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_821E26A8:
	// lbz r5,102(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 102);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e26c8
	if (ctx.cr6.eq) goto loc_821E26C8;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// and r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 & ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e26e0
	if (!ctx.cr6.eq) goto loc_821E26E0;
loc_821E26C8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,112
	ctx.r10.s64 = ctx.r10.s64 + 112;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x821e26a8
	if (ctx.cr6.lt) goto loc_821E26A8;
loc_821E26D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E26E0:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mulli r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 * 112;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// lwzx r3,r9,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E2668) {
	__imp__sub_821E2668(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E26F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821E2700;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmuls f29,f1,f1
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lfs f0,5524(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bl 0x823de800
	ctx.lr = 0x821E2734;
	sub_823DE800(ctx, base);
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x821E2750;
	sub_822D4AC8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r11,2046
	ctx.r11.s64 = 2046;
	// beq cr6,0x821e2760
	if (ctx.cr6.eq) goto loc_821E2760;
	// lhz r11,126(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 126);
loc_821E2760:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r3,64(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82334960
	ctx.lr = 0x821E277C;
	sub_82334960(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,36(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lfs f13,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f12,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r29,r28,36
	ctx.r29.s64 = ctx.r28.s64 + 36;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x821e2668
	ctx.lr = 0x821E27C8;
	sub_821E2668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e2960
	if (ctx.cr6.eq) goto loc_821E2960;
loc_821E27D4:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f12,f8,f10
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f6,f0,f0,f7
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f29
	ctx.cr6.compare(ctx.f6.f64, ctx.f29.f64);
	// bgt cr6,0x821e2948
	if (ctx.cr6.gt) goto loc_821E2948;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d4ac8
	ctx.lr = 0x821E2824;
	sub_822D4AC8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fcmpu cr6,f9,f30
	ctx.cr6.compare(ctx.f9.f64, ctx.f30.f64);
	// blt cr6,0x821e2948
	if (ctx.cr6.lt) goto loc_821E2948;
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f12,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,160(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2894
	if (ctx.cr6.eq) goto loc_821E2894;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0f38
	ctx.lr = 0x821E2888;
	sub_821E0F38(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e2948
	if (!ctx.cr6.eq) goto loc_821E2948;
loc_821E2894:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e28b4
	if (ctx.cr6.eq) goto loc_821E28B4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x821aa030
	ctx.lr = 0x821E28A8;
	sub_821AA030(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e2948
	if (!ctx.cr6.eq) goto loc_821E2948;
loc_821E28B4:
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// bl 0x822d9c68
	ctx.lr = 0x821E28CC;
	sub_822D9C68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e28fc
	if (ctx.cr6.eq) goto loc_821E28FC;
	// li r8,5
	ctx.r8.s64 = 5;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e24d8
	ctx.lr = 0x821E28F4;
	sub_821E24D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e2948
	if (!ctx.cr6.eq) goto loc_821E2948;
loc_821E28FC:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8223fae0
	ctx.lr = 0x821E2908;
	sub_8223FAE0(ctx, base);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822d9c68
	ctx.lr = 0x821E2920;
	sub_822D9C68(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2948
	if (ctx.cr6.eq) goto loc_821E2948;
	// li r8,2
	ctx.r8.s64 = 2;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e24d8
	ctx.lr = 0x821E2948;
	sub_821E24D8(ctx, base);
loc_821E2948:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821e2668
	ctx.lr = 0x821E2954;
	sub_821E2668(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e27d4
	if (!ctx.cr6.eq) goto loc_821E27D4;
loc_821E2960:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_821E26F8) {
	__imp__sub_821E26F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2974) {
	__imp__sub_821E2974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821E2980;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82232b28
	ctx.lr = 0x821E29A8;
	sub_82232B28(ctx, base);
	// lis r20,-32032
	ctx.r20.s64 = -2099249152;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r11,-6032(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6032);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e29d4
	if (ctx.cr6.eq) goto loc_821E29D4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e29d4
	if (!ctx.cr6.eq) goto loc_821E29D4;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82230ae8
	ctx.lr = 0x821E29D4;
	sub_82230AE8(ctx, base);
loc_821E29D4:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82334308
	ctx.lr = 0x821E29DC;
	sub_82334308(ctx, base);
	// clrlwi r21,r3,24
	ctx.r21.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821e29fc
	if (ctx.cr6.eq) goto loc_821E29FC;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r11,544(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// lfs f31,1444(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 1444);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// b 0x821e2a08
	goto loc_821E2A08;
loc_821E29FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,-21924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21924);
	ctx.f31.f64 = double(temp.f32);
loc_821E2A08:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r24,r10,44440
	ctx.r24.u64 = ctx.r10.u64 | 44440;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2a40
	if (ctx.cr6.eq) goto loc_821E2A40;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2a40
	if (ctx.cr6.eq) goto loc_821E2A40;
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r23,204(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// stw r10,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r10.u32);
loc_821E2A40:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82329b68
	ctx.lr = 0x821E2A4C;
	sub_82329B68(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821e2b48
	if (!ctx.cr6.gt) goto loc_821E2B48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r31,r30,36
	ctx.r31.s64 = ctx.r30.s64 + 36;
	// lis r27,-32032
	ctx.r27.s64 = -2099249152;
	// addi r26,r11,-2072
	ctx.r26.s64 = ctx.r11.s64 + -2072;
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_821E2A6C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r11,2046
	ctx.r11.s64 = 2046;
	// beq cr6,0x821e2a7c
	if (ctx.cr6.eq) goto loc_821E2A7C;
	// lhz r11,126(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 126);
loc_821E2A7C:
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82334960
	ctx.lr = 0x821E2A90;
	sub_82334960(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x821e08b0
	ctx.lr = 0x821E2AE0;
	sub_821E08B0(ctx, base);
	// lwz r11,-6052(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -6052);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e2b08
	if (!ctx.cr6.eq) goto loc_821E2B08;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x821f2d18
	ctx.lr = 0x821E2B08;
	sub_821F2D18(ctx, base);
loc_821E2B08:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x82334358
	ctx.lr = 0x821E2B10;
	sub_82334358(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x821e2b3c
	if (ctx.cr6.eq) goto loc_821E2B3C;
	// bl 0x821e1f40
	ctx.lr = 0x821E2B38;
	sub_821E1F40(ctx, base);
	// b 0x821e2b40
	goto loc_821E2B40;
loc_821E2B3C:
	// bl 0x821e1d30
	ctx.lr = 0x821E2B40;
	sub_821E1D30(ctx, base);
loc_821E2B40:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x821e2a6c
	if (!ctx.cr0.eq) goto loc_821E2A6C;
loc_821E2B48:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821e2b68
	if (ctx.cr6.eq) goto loc_821E2B68;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e26f8
	ctx.lr = 0x821E2B68;
	sub_821E26F8(ctx, base);
loc_821E2B68:
	// lwz r11,264(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2b84
	if (ctx.cr6.eq) goto loc_821E2B84;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2b84
	if (ctx.cr6.eq) goto loc_821E2B84;
	// stw r23,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r23.u32);
loc_821E2B84:
	// lwz r11,-6032(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + -6032);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2ba4
	if (ctx.cr6.eq) goto loc_821E2BA4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bne cr6,0x821e2ba4
	if (!ctx.cr6.eq) goto loc_821E2BA4;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82230c50
	ctx.lr = 0x821E2BA4;
	sub_82230C50(ctx, base);
loc_821E2BA4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2978) {
	__imp__sub_821E2978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2BBC) {
	__imp__sub_821E2BBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2BC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r9,4095
	ctx.r9.s64 = 4095;
	// addi r8,r11,13952
	ctx.r8.s64 = ctx.r11.s64 + 13952;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E2BD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sthu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x821e2bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E2BD8;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,9744
	ctx.r9.s64 = ctx.r10.s64 + 9744;
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r11,32764(r8)
	PPC_STORE_U16(ctx.r8.u32 + 32764, ctx.r11.u16);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,4096(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4096, ctx.r10.u32);
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2BC0) {
	__imp__sub_821E2BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E2C10) {
	__imp__sub_821E2C10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2C14) {
	__imp__sub_821E2C14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r3,r11,13848
	ctx.r3.s64 = ctx.r11.s64 + 13848;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823de090
	sub_823DE090(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2C18) {
	__imp__sub_821E2C18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2C2C) {
	__imp__sub_821E2C2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C30) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sth r8,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// addi r9,r9,13952
	ctx.r9.s64 = ctx.r9.s64 + 13952;
loc_821E2C50:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821e2c50
	if (!ctx.cr6.eq) goto loc_821E2C50;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r9,6
	ctx.r8.s64 = ctx.r9.s64 + 6;
	// lis r7,-32053
	ctx.r7.s64 = -2100625408;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// lhzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,13840(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 13840);
	// rotlwi r4,r5,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r10,13840(r7)
	PPC_STORE_U32(ctx.r7.u32 + 13840, ctx.r10.u32);
	// sthx r11,r4,r6
	PPC_STORE_U16(ctx.r4.u32 + ctx.r6.u32, ctx.r11.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E2C30) {
	__imp__sub_821E2C30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2C94) {
	__imp__sub_821E2C94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,624
	ctx.r10.s64 = 624;
	// addi r9,r11,26552
	ctx.r9.s64 = ctx.r11.s64 + 26552;
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r8,9744
	ctx.r11.s64 = ctx.r8.s64 + 9744;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821e2c30
	sub_821E2C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2C98) {
	__imp__sub_821E2C98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2CC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r10,112
	ctx.r10.s64 = 112;
	// addi r9,r11,5560
	ctx.r9.s64 = ctx.r11.s64 + 5560;
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// subf r7,r9,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r9.s64;
	// addi r11,r8,13848
	ctx.r11.s64 = ctx.r8.s64 + 13848;
	// divw r6,r7,r10
	ctx.r6.s32 = ctx.r7.s32 / ctx.r10.s32;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821e2c30
	sub_821E2C30(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2CC0) {
	__imp__sub_821E2CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// addi r10,r11,13952
	ctx.r10.s64 = ctx.r11.s64 + 13952;
	// bne cr6,0x821e2d24
	if (!ctx.cr6.eq) goto loc_821E2D24;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lhzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r11,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 & ctx.r8.u64;
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
loc_821E2D24:
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r8,-32053
	ctx.r8.s64 = -2100625408;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// lwz r3,13840(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13840);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// rotlwi r9,r6,3
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// stw r4,13840(r8)
	PPC_STORE_U32(ctx.r8.u32 + 13840, ctx.r4.u32);
	// rotlwi r8,r5,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// sthx r6,r8,r7
	PPC_STORE_U16(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u16);
	// lhz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// sth r7,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r7.u16);
	// sth r3,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r3.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E2CE8) {
	__imp__sub_821E2CE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2D64) {
	__imp__sub_821E2D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2D68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E2D70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32053
	ctx.r11.s64 = -2100625408;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,13952
	ctx.r31.s64 = ctx.r11.s64 + 13952;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r30,-112(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -112);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e2da0
	if (!ctx.cr6.eq) goto loc_821E2DA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21920
	ctx.r4.s64 = ctx.r11.s64 + -21920;
	// bl 0x822830e8
	ctx.lr = 0x821E2DA0;
	sub_822830E8(ctx, base);
loc_821E2DA0:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,-112(r31)
	PPC_STORE_U32(ctx.r31.u32 + -112, ctx.r9.u32);
	// beq cr6,0x821e2dfc
	if (ctx.cr6.eq) goto loc_821E2DFC;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r7,r31,6
	ctx.r7.s64 = ctx.r31.s64 + 6;
	// clrlwi r6,r30,16
	ctx.r6.u64 = ctx.r30.u32 & 0xFFFF;
	// lhz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// sth r5,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r5.u16);
	// lhz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// rotlwi r11,r4,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// sthx r6,r11,r7
	PPC_STORE_U16(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u16);
	// sth r6,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r6.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E2DFC:
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// sth r10,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r10.u16);
	// sth r10,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r10.u16);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2D68) {
	__imp__sub_821E2D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E2E14) {
	__imp__sub_821E2E14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821E2E20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lis r10,-32053
	ctx.r10.s64 = -2100625408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,624
	ctx.r27.s64 = 624;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r9,26552
	ctx.r29.s64 = ctx.r9.s64 + 26552;
	// addi r28,r10,9744
	ctx.r28.s64 = ctx.r10.s64 + 9744;
	// beq cr6,0x821e2e94
	if (ctx.cr6.eq) goto loc_821E2E94;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-624
	ctx.r11.s64 = ctx.r11.s64 + -624;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e2ec0
	if (ctx.cr6.eq) goto loc_821E2EC0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// divw r10,r11,r27
	ctx.r10.s32 = ctx.r11.s32 / ctx.r27.s32;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821e2ce8
	ctx.lr = 0x821E2E78;
	sub_821E2CE8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e2e9c
	if (!ctx.cr6.eq) goto loc_821E2E9C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821E2E94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e2ec0
	if (ctx.cr6.eq) goto loc_821E2EC0;
loc_821E2E9C:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// divw r30,r11,r27
	ctx.r30.s32 = ctx.r11.s32 / ctx.r27.s32;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821e2d68
	ctx.lr = 0x821E2EB4;
	sub_821E2D68(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_821E2EC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2E18) {
	__imp__sub_821E2E18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2EC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821E2ED0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lis r9,-32053
	ctx.r9.s64 = -2100625408;
	// lis r10,-32024
	ctx.r10.s64 = -2098724864;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,112
	ctx.r27.s64 = 112;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r9,13848
	ctx.r28.s64 = ctx.r9.s64 + 13848;
	// addi r29,r10,5560
	ctx.r29.s64 = ctx.r10.s64 + 5560;
	// beq cr6,0x821e2f44
	if (ctx.cr6.eq) goto loc_821E2F44;
	// mulli r11,r11,112
	ctx.r11.s64 = ctx.r11.s64 * 112;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e2f70
	if (ctx.cr6.eq) goto loc_821E2F70;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lhz r4,2(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2);
	// divw r10,r11,r27
	ctx.r10.s32 = ctx.r11.s32 / ctx.r27.s32;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821e2ce8
	ctx.lr = 0x821E2F28;
	sub_821E2CE8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e2f4c
	if (!ctx.cr6.eq) goto loc_821E2F4C;
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821E2F44:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e2f70
	if (ctx.cr6.eq) goto loc_821E2F70;
loc_821E2F4C:
	// subf r11,r29,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// divw r30,r11,r27
	ctx.r30.s32 = ctx.r11.s32 / ctx.r27.s32;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x821e2d68
	ctx.lr = 0x821E2F64;
	sub_821E2D68(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// sth r3,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r3.u16);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
loc_821E2F70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2EC8) {
	__imp__sub_821E2EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E2F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E2F80;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x821e316c
	if (!ctx.cr6.lt) goto loc_821E316C;
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lwz r11,-22140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22140);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e3054
	if (ctx.cr6.eq) goto loc_821E3054;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44572
	ctx.r10.u64 = ctx.r11.u64 | 44572;
	// lbzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e3054
	if (ctx.cr6.eq) goto loc_821E3054;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// ori r8,r10,44568
	ctx.r8.u64 = ctx.r10.u64 | 44568;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// lwzx r7,r31,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821e3054
	if (!ctx.cr6.lt) goto loc_821E3054;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x821e6c48
	ctx.lr = 0x821E2FEC;
	sub_821E6C48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6bc0
	ctx.lr = 0x821E2FF8;
	sub_821E6BC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r9,-2200
	ctx.r5.s64 = ctx.r9.s64 + -2200;
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f9,f0,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f5,f7,f0,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f6,92(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f5,96(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lfs f1,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f35e0
	ctx.lr = 0x821E3054;
	sub_821F35E0(ctx, base);
loc_821E3054:
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r28,-21124
	ctx.r28.s64 = ctx.r28.s64 + -21124;
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e316c
	if (!ctx.cr6.gt) goto loc_821E316C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44328
	ctx.r9.u64 = ctx.r10.u64 | 44328;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x821e316c
	if (!ctx.cr6.gt) goto loc_821E316C;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// divw r30,r11,r10
	ctx.r30.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmpwi cr6,r30,127
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 127, ctx.xer);
	// ble cr6,0x821e3098
	if (!ctx.cr6.gt) goto loc_821E3098;
	// li r30,127
	ctx.r30.s64 = 127;
loc_821E3098:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfs f12,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// lfs f0,3100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f9,708(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// fcmpu cr6,f9,f0
	ctx.cr6.compare(ctx.f9.f64, ctx.f0.f64);
	// ble cr6,0x821e30cc
	if (!ctx.cr6.gt) goto loc_821E30CC;
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
loc_821E30CC:
	// lfs f12,708(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,708(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// ble cr6,0x821e30e4
	if (!ctx.cr6.gt) goto loc_821E30E4;
	// stfs f0,708(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
loc_821E30E4:
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-21104
	ctx.r11.s64 = ctx.r11.s64 + -21104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e310c
	if (ctx.cr6.eq) goto loc_821E310C;
	// li r10,255
	ctx.r10.s64 = 255;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// stw r10,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r10.u32);
	// stw r10,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r10.u32);
	// b 0x821e314c
	goto loc_821E314C;
loc_821E310C:
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r3,-21116
	ctx.r3.s64 = ctx.r3.s64 + -21116;
	// bl 0x822d50f8
	ctx.lr = 0x821E311C;
	sub_822D50F8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// li r10,320
	ctx.r10.s64 = 320;
	// li r9,316
	ctx.r9.s64 = 316;
	// lfs f0,-21876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -21876);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f11.u32);
	// lfs f10,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f8.u32);
loc_821E314C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// ori r9,r10,44416
	ctx.r9.u64 = ctx.r10.u64 | 44416;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r8.u32);
	// stwx r29,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r29.u32);
loc_821E316C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E2F78) {
	__imp__sub_821E2F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3174) {
	__imp__sub_821E3174(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821E3180;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821e32a4
	if (!ctx.cr6.gt) goto loc_821E32A4;
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r26,r10,8272
	ctx.r26.s64 = ctx.r10.s64 + 8272;
	// addi r27,r9,-25976
	ctx.r27.s64 = ctx.r9.s64 + -25976;
	// addi r25,r11,26552
	ctx.r25.s64 = ctx.r11.s64 + 26552;
loc_821E31B8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x821e31e8
	if (!ctx.cr6.gt) goto loc_821E31E8;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_821E31CC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821e31e8
	if (ctx.cr6.eq) goto loc_821E31E8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821e31cc
	if (ctx.cr6.lt) goto loc_821E31CC;
loc_821E31E8:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x821e3294
	if (!ctx.cr6.eq) goto loc_821E3294;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x822ac8c0
	ctx.lr = 0x821E3204;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e323c
	if (ctx.cr6.eq) goto loc_821E323C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x821E3214;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,264(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x821E3224;
	sub_82229DA8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229b60
	ctx.lr = 0x821E322C;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,264(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x821E323C;
	sub_82229DA8(ctx, base);
loc_821E323C:
	// lbz r11,291(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 291);
	// addi r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 + 12;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3268
	if (ctx.cr6.eq) goto loc_821E3268;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x821E3268;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E3268:
	// lbz r11,291(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r10,r26,12
	ctx.r10.s64 = ctx.r26.s64 + 12;
	// mulli r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 * 44;
	// lwzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3294
	if (ctx.cr6.eq) goto loc_821E3294;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821E3294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E3294:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x821e31b8
	if (ctx.cr6.lt) goto loc_821E31B8;
loc_821E32A4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3178) {
	__imp__sub_821E3178(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E32AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E32AC) {
	__imp__sub_821E32AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E32B0) {
	PPC_FUNC_PROLOGUE();
	// addi r5,r4,140
	ctx.r5.s64 = ctx.r4.s64 + 140;
	// lwz r4,136(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 136);
	// b 0x821e3178
	sub_821E3178(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E32B0) {
	__imp__sub_821E32B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E32BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E32BC) {
	__imp__sub_821E32BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E32C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821E32C8;
	__savegprlr_22(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8400(r1)
	ea = -8400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e32ec
	if (ctx.cr6.eq) goto loc_821E32EC;
	// li r6,8
	ctx.r6.s64 = 8;
	// b 0x821e334c
	goto loc_821E334C;
loc_821E32EC:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e3300
	if (!ctx.cr6.eq) goto loc_821E3300;
	// lis r6,64
	ctx.r6.s64 = 4194304;
	// b 0x821e334c
	goto loc_821E334C;
loc_821E3300:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e3314
	if (ctx.cr6.eq) goto loc_821E3314;
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// b 0x821e334c
	goto loc_821E334C;
loc_821E3314:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e3328
	if (!ctx.cr6.eq) goto loc_821E3328;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// b 0x821e334c
	goto loc_821E334C;
loc_821E3328:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e3338
	if (!ctx.cr6.eq) goto loc_821E3338;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// b 0x821e334c
	goto loc_821E334C;
loc_821E3338:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e3348
	if (ctx.cr6.eq) goto loc_821E3348;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e3540
	if (!ctx.cr6.eq) goto loc_821E3540;
loc_821E3348:
	// lis r6,16
	ctx.r6.s64 = 1048576;
loc_821E334C:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r31,204
	ctx.r11.s64 = ctx.r31.s64 + 204;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E335C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821e335c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E335C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5996(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,92(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f9,96(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x821E33A4;
	sub_8227BFF0(ctx, base);
	// lfs f7,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,196(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lfs f4,200(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	ctx.f4.f64 = double(temp.f32);
	// lbz r10,291(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 291);
	// addi r25,r11,8272
	ctx.r25.s64 = ctx.r11.s64 + 8272;
	// lfs f3,180(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// lfs f2,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f3,f2
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lfs f10,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsel f8,f5,f7,f6
	ctx.f8.f64 = ctx.f5.f64 >= 0.0 ? ctx.f7.f64 : ctx.f6.f64;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r8,r25,12
	ctx.r8.s64 = ctx.r25.s64 + 12;
	// stfs f8,92(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwzx r23,r9,r8
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// fsubs f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fsel f6,f7,f8,f4
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f4.f64;
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ble cr6,0x821e3540
	if (!ctx.cr6.gt) goto loc_821E3540;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// addi r27,r1,112
	ctx.r27.s64 = ctx.r1.s64 + 112;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r28,r11,-25976
	ctx.r28.s64 = ctx.r11.s64 + -25976;
	// addi r24,r10,9624
	ctx.r24.s64 = ctx.r10.s64 + 9624;
	// addi r26,r9,26552
	ctx.r26.s64 = ctx.r9.s64 + 26552;
loc_821E3440:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r25,12
	ctx.r10.s64 = ctx.r25.s64 + 12;
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lbz r9,291(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 291);
	// mulli r8,r9,44
	ctx.r8.s64 = ctx.r9.s64 * 44;
	// lwzx r29,r8,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821e346c
	if (!ctx.cr6.eq) goto loc_821E346C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
loc_821E346C:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821e349c
	if (!ctx.cr6.eq) goto loc_821E349C;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,52(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// bl 0x82322290
	ctx.lr = 0x821E3490;
	sub_82322290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e34b0
	if (!ctx.cr6.eq) goto loc_821E34B0;
	// b 0x821e3534
	goto loc_821E3534;
loc_821E349C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8233cbf8
	ctx.lr = 0x821E34A8;
	sub_8233CBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
loc_821E34B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822ac8c0
	ctx.lr = 0x821E34B8;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e34f0
	if (ctx.cr6.eq) goto loc_821E34F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x821E34C8;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,264(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x821E34D8;
	sub_82229DA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82229b60
	ctx.lr = 0x821E34E0;
	sub_82229B60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,264(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 264);
	// bl 0x82229da8
	ctx.lr = 0x821E34F0;
	sub_82229DA8(ctx, base);
loc_821E34F0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821e350c
	if (ctx.cr6.eq) goto loc_821E350C;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x821E350C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E350C:
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e3534
	if (ctx.cr6.eq) goto loc_821E3534;
	// li r5,1
	ctx.r5.s64 = 1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x821E3534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821E3534:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x821e3440
	if (!ctx.cr0.eq) goto loc_821E3440;
loc_821E3540:
	// addi r1,r1,8400
	ctx.r1.s64 = ctx.r1.s64 + 8400;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E32C0) {
	__imp__sub_821E32C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3548) {
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
	// bl 0x82332b28
	ctx.lr = 0x821E3564;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E3568;
	sub_822ACED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,98(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 98);
	// bl 0x82229da8
	ctx.lr = 0x821E3580;
	sub_82229DA8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E3548) {
	__imp__sub_821E3548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3594) {
	__imp__sub_821E3594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E35A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// lbz r10,291(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 291);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,8272
	ctx.r11.s64 = ctx.r11.s64 + 8272;
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3640
	if (ctx.cr6.eq) goto loc_821E3640;
	// lhz r10,324(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 324);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r10,-1
	ctx.r28.s64 = ctx.r10.s64 + -1;
	// bne cr6,0x821e35e0
	if (!ctx.cr6.eq) goto loc_821E35E0;
	// li r28,2046
	ctx.r28.s64 = 2046;
loc_821E35E0:
	// lis r10,20971
	ctx.r10.s64 = 1374355456;
	// lhz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 132);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r8,r10,34079
	ctx.r8.u64 = ctx.r10.u64 | 34079;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r6,200
	ctx.r11.s64 = ctx.r6.s64 * 200;
	// subf r29,r11,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r11.s64;
	// bctrl 
	ctx.lr = 0x821E3618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e3640
	if (!ctx.cr6.eq) goto loc_821E3640;
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r28,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// stw r29,680(r10)
	PPC_STORE_U32(ctx.r10.u32 + 680, ctx.r29.u32);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// stw r8,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
loc_821E3640:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3598) {
	__imp__sub_821E3598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3648) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821e3674
	if (ctx.cr6.eq) goto loc_821E3674;
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
loc_821E3674:
	// lis r11,20971
	ctx.r11.s64 = 1374355456;
	// lhz r9,132(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 132);
	// ori r8,r11,34079
	ctx.r8.u64 = ctx.r11.u64 | 34079;
	// mulhw r7,r9,r8
	ctx.r7.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32)) >> 32;
	// srawi r11,r7,6
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r5,r6,200
	ctx.r5.s64 = ctx.r6.s64 * 200;
	// subf r3,r5,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r5.s64;
	// bl 0x82332af8
	ctx.lr = 0x821E369C;
	sub_82332AF8(ctx, base);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r3,r3,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E3648) {
	__imp__sub_821E3648(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E36BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E36BC) {
	__imp__sub_821E36BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E36C0) {
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
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// lwz r9,424(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e3648
	ctx.lr = 0x821E36F8;
	sub_821E3648(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e3720
	if (ctx.cr6.eq) goto loc_821E3720;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3720
	if (ctx.cr6.eq) goto loc_821E3720;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3598
	ctx.lr = 0x821E3720;
	sub_821E3598(ctx, base);
loc_821E3720:
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

PPC_WEAK_FUNC(sub_821E36C0) {
	__imp__sub_821E36C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3738) {
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
	// bl 0x82332b28
	ctx.lr = 0x821E3754;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E3758;
	sub_822ACED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,280(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 280);
	// bl 0x82229da8
	ctx.lr = 0x821E3770;
	sub_82229DA8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E3738) {
	__imp__sub_821E3738(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3784) {
	__imp__sub_821E3784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x821E3790;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,264(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,176(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821e37b8
	if (!ctx.cr6.lt) goto loc_821E37B8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_821E37B8:
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821e3bc8
	if (!ctx.cr6.lt) goto loc_821E3BC8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r8,0
	ctx.r8.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f30,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// li r21,-1
	ctx.r21.s64 = -1;
	// lfs f31,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// li r22,12
	ctx.r22.s64 = 12;
	// li r23,10
	ctx.r23.s64 = 10;
	// li r24,6
	ctx.r24.s64 = 6;
	// ori r20,r8,44204
	ctx.r20.u64 = ctx.r8.u64 | 44204;
	// addi r26,r11,-25976
	ctx.r26.s64 = ctx.r11.s64 + -25976;
loc_821E37F8:
	// clrlwi r11,r25,30
	ctx.r11.u64 = ctx.r25.u32 & 0x3;
	// addi r10,r11,45
	ctx.r10.s64 = ctx.r11.s64 + 45;
	// addi r9,r11,49
	ctx.r9.s64 = ctx.r11.s64 + 49;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r8,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// lwzx r4,r7,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// cmpwi cr6,r31,141
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 141, ctx.xer);
	// blt cr6,0x821e38b0
	if (ctx.cr6.lt) goto loc_821E38B0;
	// cmpwi cr6,r31,172
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 172, ctx.xer);
	// bge cr6,0x821e38b0
	if (!ctx.cr6.lt) goto loc_821E38B0;
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821e3bc8
	if (!ctx.cr6.eq) goto loc_821E3BC8;
	// rlwinm r11,r4,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// lwz r11,340(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 340);
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r6,0
	ctx.r6.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x821f1080
	ctx.lr = 0x821E38AC;
	sub_821F1080(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E38B0:
	// cmpwi cr6,r31,36
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 36, ctx.xer);
	// bgt cr6,0x821e3990
	if (ctx.cr6.gt) goto loc_821E3990;
	// cmpwi cr6,r31,35
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 35, ctx.xer);
	// bge cr6,0x821e3a3c
	if (!ctx.cr6.lt) goto loc_821E3A3C;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x821e3aac
	if (ctx.cr6.gt) goto loc_821E3AAC;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14564
	ctx.r12.s64 = ctx.r12.s64 + 14564;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821E3BB8;
	case 1:
		goto loc_821E3AAC;
	case 2:
		goto loc_821E3AAC;
	case 3:
		goto loc_821E3AAC;
	case 4:
		goto loc_821E3AAC;
	case 5:
		goto loc_821E3AAC;
	case 6:
		goto loc_821E3AAC;
	case 7:
		goto loc_821E3AAC;
	case 8:
		goto loc_821E3AAC;
	case 9:
		goto loc_821E3AAC;
	case 10:
		goto loc_821E3AAC;
	case 11:
		goto loc_821E3AAC;
	case 12:
		goto loc_821E3AAC;
	case 13:
		goto loc_821E3AAC;
	case 14:
		goto loc_821E3AAC;
	case 15:
		goto loc_821E3978;
	case 16:
		goto loc_821E3AAC;
	case 17:
		goto loc_821E3AAC;
	case 18:
		goto loc_821E3AAC;
	case 19:
		goto loc_821E3AAC;
	case 20:
		goto loc_821E3AAC;
	case 21:
		goto loc_821E396C;
	case 22:
		goto loc_821E3984;
	case 23:
		goto loc_821E3AAC;
	case 24:
		goto loc_821E3AAC;
	case 25:
		goto loc_821E3AAC;
	case 26:
		goto loc_821E3AAC;
	case 27:
		goto loc_821E3960;
	case 28:
		goto loc_821E39C0;
	case 29:
		goto loc_821E3A3C;
	case 30:
		goto loc_821E3A3C;
	default:
		return;
	}
	// lwz r16,15288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15288);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,14712(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14712);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,14700(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14700);
	// lwz r16,14724(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14724);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,15020(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15020);
	// lwz r16,14688(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14688);
	// lwz r16,14784(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14784);
	// lwz r16,14908(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14908);
	// lwz r16,14908(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14908);
loc_821E3960:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e3738
	ctx.lr = 0x821E3968;
	sub_821E3738(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E396C:
	// lhz r4,144(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821e3bb0
	goto loc_821E3BB0;
loc_821E3978:
	// lhz r4,62(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 62);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821e3bb0
	goto loc_821E3BB0;
loc_821E3984:
	// lhz r4,142(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 142);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x821e3bb0
	goto loc_821E3BB0;
loc_821E3990:
	// cmpwi cr6,r31,42
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 42, ctx.xer);
	// bgt cr6,0x821e3a20
	if (ctx.cr6.gt) goto loc_821E3A20;
	// beq cr6,0x821e39dc
	if (ctx.cr6.eq) goto loc_821E39DC;
	// cmpwi cr6,r31,39
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 39, ctx.xer);
	// beq cr6,0x821e39cc
	if (ctx.cr6.eq) goto loc_821E39CC;
	// cmpwi cr6,r31,40
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 40, ctx.xer);
	// beq cr6,0x821e39c0
	if (ctx.cr6.eq) goto loc_821E39C0;
	// cmpwi cr6,r31,41
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 41, ctx.xer);
	// bne cr6,0x821e3aac
	if (!ctx.cr6.eq) goto loc_821E3AAC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82231fb8
	ctx.lr = 0x821E39BC;
	sub_82231FB8(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E39C0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e3548
	ctx.lr = 0x821E39C8;
	sub_821E3548(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E39CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82232038
	ctx.lr = 0x821E39D8;
	sub_82232038(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E39DC:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// lwz r11,424(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 424);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E3A00;
	sub_82332AF8(ctx, base);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r9,684(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821e3bb8
	if (!ctx.cr6.eq) goto loc_821E3BB8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e36c0
	ctx.lr = 0x821E3A1C;
	sub_821E36C0(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E3A20:
	// cmpwi cr6,r31,86
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 86, ctx.xer);
	// bgt cr6,0x821e3aa4
	if (ctx.cr6.gt) goto loc_821E3AA4;
	// beq cr6,0x821e3a4c
	if (ctx.cr6.eq) goto loc_821E3A4C;
	// cmpwi cr6,r31,46
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 46, ctx.xer);
	// blt cr6,0x821e3aac
	if (ctx.cr6.lt) goto loc_821E3AAC;
	// cmpwi cr6,r31,49
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 49, ctx.xer);
	// bgt cr6,0x821e3aac
	if (ctx.cr6.gt) goto loc_821E3AAC;
loc_821E3A3C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82231d48
	ctx.lr = 0x821E3A48;
	sub_82231D48(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E3A4C:
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// lwz r11,312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 312);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e3bb8
	if (!ctx.cr6.eq) goto loc_821E3BB8;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// ori r8,r8,34464
	ctx.r8.u64 = ctx.r8.u64 | 34464;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f1080
	ctx.lr = 0x821E3AA0;
	sub_821F1080(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E3AA4:
	// cmpwi cr6,r31,87
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 87, ctx.xer);
	// beq cr6,0x821e3b98
	if (ctx.cr6.eq) goto loc_821E3B98;
loc_821E3AAC:
	// cmpwi cr6,r31,105
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 105, ctx.xer);
	// beq cr6,0x821e3aec
	if (ctx.cr6.eq) goto loc_821E3AEC;
	// cmpwi cr6,r31,106
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 106, ctx.xer);
	// beq cr6,0x821e3aec
	if (ctx.cr6.eq) goto loc_821E3AEC;
	// cmpwi cr6,r31,107
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 107, ctx.xer);
	// beq cr6,0x821e3aec
	if (ctx.cr6.eq) goto loc_821E3AEC;
	// cmpwi cr6,r31,109
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 109, ctx.xer);
	// beq cr6,0x821e3aec
	if (ctx.cr6.eq) goto loc_821E3AEC;
	// cmpwi cr6,r31,110
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 110, ctx.xer);
	// blt cr6,0x821e3adc
	if (ctx.cr6.lt) goto loc_821E3ADC;
	// cmpwi cr6,r31,140
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 140, ctx.xer);
	// ble cr6,0x821e3aec
	if (!ctx.cr6.gt) goto loc_821E3AEC;
loc_821E3ADC:
	// cmpwi cr6,r31,141
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 141, ctx.xer);
	// blt cr6,0x821e3bb8
	if (ctx.cr6.lt) goto loc_821E3BB8;
	// cmpwi cr6,r31,140
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 140, ctx.xer);
	// bgt cr6,0x821e3bb8
	if (ctx.cr6.gt) goto loc_821E3BB8;
loc_821E3AEC:
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stw r22,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r22.u32);
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r28.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r23,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r23.u32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r28,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r28.u32);
	// lwzx r30,r9,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821e3bb8
	if (ctx.cr6.eq) goto loc_821E3BB8;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x8223fa40
	ctx.lr = 0x821E3B30;
	sub_8223FA40(ctx, base);
	// cmpwi cr6,r31,105
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 105, ctx.xer);
	// bne cr6,0x821e3b50
	if (!ctx.cr6.eq) goto loc_821E3B50;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821be0d8
	ctx.lr = 0x821E3B4C;
	sub_821BE0D8(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E3B50:
	// cmpwi cr6,r31,107
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 107, ctx.xer);
	// beq cr6,0x821e3b80
	if (ctx.cr6.eq) goto loc_821E3B80;
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e3b80
	if (!ctx.cr6.eq) goto loc_821E3B80;
	// lwzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3b84
	if (ctx.cr6.eq) goto loc_821E3B84;
loc_821E3B80:
	// li r4,3
	ctx.r4.s64 = 3;
loc_821E3B84:
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821be0d8
	ctx.lr = 0x821E3B94;
	sub_821BE0D8(ctx, base);
	// b 0x821e3bb8
	goto loc_821E3BB8;
loc_821E3B98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82332c00
	ctx.lr = 0x821E3BA0;
	sub_82332C00(ctx, base);
	// bl 0x82332b28
	ctx.lr = 0x821E3BA4;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E3BA8;
	sub_822ACED0(ctx, base);
	// lhz r4,50(r26)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r26.u32 + 50);
	// li r5,1
	ctx.r5.s64 = 1;
loc_821E3BB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82229da8
	ctx.lr = 0x821E3BB8;
	sub_82229DA8(ctx, base);
loc_821E3BB8:
	// lwz r11,176(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 176);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e37f8
	if (ctx.cr6.lt) goto loc_821E37F8;
loc_821E3BC8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3788) {
	__imp__sub_821E3788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E3BE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,272(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// bl 0x8223fb90
	ctx.lr = 0x821E3BF0;
	sub_8223FB90(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// bl 0x8223fa40
	ctx.lr = 0x821E3C00;
	sub_8223FA40(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e3c28
	if (ctx.cr6.eq) goto loc_821E3C28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x821E3C14;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-19192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x821e3c28
	if (!ctx.cr6.gt) goto loc_821E3C28;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E3C28:
	// lwz r3,272(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e3cf8
	if (ctx.cr6.eq) goto loc_821E3CF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3c9c
	if (ctx.cr6.eq) goto loc_821E3C9C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// ori r9,r11,44444
	ctx.r9.u64 = ctx.r11.u64 | 44444;
	// lhzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3c98
	if (ctx.cr6.eq) goto loc_821E3C98;
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
	// beq cr6,0x821e3c98
	if (ctx.cr6.eq) goto loc_821E3C98;
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e3c98
	if (ctx.cr6.eq) goto loc_821E3C98;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e3c98
	if (!ctx.cr6.eq) goto loc_821E3C98;
	// bl 0x82238210
	ctx.lr = 0x821E3C94;
	sub_82238210(ctx, base);
	// b 0x821e3c9c
	goto loc_821E3C9C;
loc_821E3C98:
	// bl 0x82238208
	ctx.lr = 0x821E3C9C;
	sub_82238208(ctx, base);
loc_821E3C9C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e3cf8
	if (ctx.cr6.eq) goto loc_821E3CF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822360f8
	ctx.lr = 0x821E3CAC;
	sub_822360F8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e3cec
	if (ctx.cr6.eq) goto loc_821E3CEC;
	// lwz r11,272(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821e3cf8
	if (ctx.cr6.eq) goto loc_821E3CF8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8223fa40
	ctx.lr = 0x821E3CCC;
	sub_8223FA40(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x821E3CDC;
	sub_822D4918(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,24828(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24828);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x821e3cf8
	if (ctx.cr6.lt) goto loc_821E3CF8;
loc_821E3CEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,272(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	// bl 0x82238770
	ctx.lr = 0x821E3CF8;
	sub_82238770(ctx, base);
loc_821E3CF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3BD8) {
	__imp__sub_821E3BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3D00) {
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
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stfs f0,40(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 40, temp.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stfs f13,44(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 44, temp.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfs f12,48(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 48, temp.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// bl 0x823224f0
	ctx.lr = 0x821E3D48;
	sub_823224F0(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821E3D00) {
	__imp__sub_821E3D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3D64) {
	__imp__sub_821E3D64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3D68) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3d80
	if (ctx.cr6.eq) goto loc_821E3D80;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E3D80:
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E3D68) {
	__imp__sub_821E3D68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3D8C) {
	__imp__sub_821E3D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3D90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E3D98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e3e00
	if (!ctx.cr6.eq) goto loc_821E3E00;
	// lwz r30,692(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e3e00
	if (ctx.cr6.eq) goto loc_821E3E00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E3DC8;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333718
	ctx.lr = 0x821E3DD8;
	sub_82333718(ctx, base);
	// lwz r10,472(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	// lwz r9,264(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r8,r3,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x3FC;
	// lwzx r30,r10,r8
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r3,144(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 144);
	// bl 0x82319958
	ctx.lr = 0x821E3DF0;
	sub_82319958(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e3e04
	if (ctx.cr6.eq) goto loc_821E3E04;
	// lwz r9,488(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 488);
	// b 0x821e3e08
	goto loc_821E3E08;
loc_821E3E00:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E3E04:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821E3E08:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-20548
	ctx.r10.s64 = ctx.r10.s64 + -20548;
	// ori r11,r11,44992
	ctx.r11.u64 = ctx.r11.u64 | 44992;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821e3e30
	if (!ctx.cr6.eq) goto loc_821E3E30;
	// lwzx r8,r31,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e3e50
	if (ctx.cr6.eq) goto loc_821E3E50;
loc_821E3E30:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stwx r9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,620(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 620);
	// bl 0x82229da8
	ctx.lr = 0x821E3E50;
	sub_82229DA8(ctx, base);
loc_821E3E50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3D90) {
	__imp__sub_821E3D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3E58) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x821e3ec0
	if (!ctx.cr6.gt) goto loc_821E3EC0;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// lwz r9,68(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mulli r11,r9,624
	ctx.r11.s64 = ctx.r9.s64 * 624;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,452(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 452);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e3ec0
	if (ctx.cr6.eq) goto loc_821E3EC0;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821e3ec0
	if (!ctx.cr6.eq) goto loc_821E3EC0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82321f30
	ctx.lr = 0x821E3EA8;
	sub_82321F30(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f13,68(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,248(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f12,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,252(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
loc_821E3EC0:
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

PPC_WEAK_FUNC(sub_821E3E58) {
	__imp__sub_821E3E58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E3ED4) {
	__imp__sub_821E3ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E3ED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821E3EE0;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r29,264(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r11,44196
	ctx.r10.u64 = ctx.r11.u64 | 44196;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x821e44f4
	if (!ctx.cr6.eq) goto loc_821E44F4;
	// addis r23,r29,1
	ctx.r23.s64 = ctx.r29.s64 + 65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r23,r23,-21336
	ctx.r23.s64 = ctx.r23.s64 + -21336;
	// ori r9,r11,44372
	ctx.r9.u64 = ctx.r11.u64 | 44372;
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwzx r11,r29,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// subf r21,r10,r8
	ctx.r21.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r7,r11,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821e3f44
	if (!ctx.cr6.eq) goto loc_821E3F44;
	// rlwinm r9,r10,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
loc_821E3F44:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r9,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r9.u32);
	// li r24,3
	ctx.r24.s64 = 3;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3f6c
	if (ctx.cr6.eq) goto loc_821E3F6C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x821e4000
	goto loc_821E4000;
loc_821E3F6C:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e3f80
	if (ctx.cr6.eq) goto loc_821E3F80;
	// stw r24,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r24.u32);
	// b 0x821e4000
	goto loc_821E4000;
loc_821E3F80:
	// lwz r11,332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821e3fb8
	if (ctx.cr6.gt) goto loc_821E3FB8;
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3fac
	if (ctx.cr6.eq) goto loc_821E3FAC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// li r11,7
	ctx.r11.s64 = 7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e3fb0
	if (ctx.cr6.eq) goto loc_821E3FB0;
loc_821E3FAC:
	// li r11,6
	ctx.r11.s64 = 6;
loc_821E3FB0:
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x821e4000
	goto loc_821E4000;
loc_821E3FB8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44996
	ctx.r10.u64 = ctx.r11.u64 | 44996;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e3fd8
	if (ctx.cr6.eq) goto loc_821E3FD8;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x821e4000
	goto loc_821E4000;
loc_821E3FD8:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e3ffc
	if (ctx.cr6.eq) goto loc_821E3FFC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e3ffc
	if (!ctx.cr6.eq) goto loc_821E3FFC;
	// stw r26,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// b 0x821e4000
	goto loc_821E4000;
loc_821E3FFC:
	// stw r22,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r22.u32);
loc_821E4000:
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,-16972(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16972);
	// lfs f0,2416(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821E401C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r9,84
	ctx.r9.s64 = 84;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,708(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	ctx.f11.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lwz r25,176(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// lis r6,-32024
	ctx.r6.s64 = -2098724864;
	// ori r10,r7,44436
	ctx.r10.u64 = ctx.r7.u64 | 44436;
	// li r5,320
	ctx.r5.s64 = 320;
	// lfs f31,6232(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6232);
	ctx.f31.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f9,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.f9.u32);
	// lwz r11,11272(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11272);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfsx f10,r29,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// stw r9,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r9.u32);
	// bl 0x823de090
	ctx.lr = 0x821E406C;
	sub_823DE090(ctx, base);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821E4080;
	sub_823DE1F0(ctx, base);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// addi r4,r4,-21272
	ctx.r4.s64 = ctx.r4.s64 + -21272;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x823de1f0
	ctx.lr = 0x821E4094;
	sub_823DE1F0(ctx, base);
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// blt cr6,0x821e40b0
	if (ctx.cr6.lt) goto loc_821E40B0;
	// lis r11,129
	ctx.r11.s64 = 8454144;
	// ori r10,r11,17
	ctx.r10.u64 = ctx.r11.u64 | 17;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// b 0x821e40b8
	goto loc_821E40B8;
loc_821E40B0:
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// stw r11,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
loc_821E40B8:
	// lwz r28,0(r13)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r27,24
	ctx.r27.s64 = 24;
	// stb r26,428(r1)
	PPC_STORE_U8(ctx.r1.u32 + 428, ctx.r26.u8);
	// addi r30,r11,-5864
	ctx.r30.s64 = ctx.r11.s64 + -5864;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stwx r30,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r30.u32);
	// bl 0x8232a540
	ctx.lr = 0x821E40D8;
	sub_8232A540(ctx, base);
	// stwx r22,r27,r28
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r22.u32);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r26,r11,9624
	ctx.r26.s64 = ctx.r11.s64 + 9624;
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x821e40fc
	if (ctx.cr6.eq) goto loc_821E40FC;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_821E40FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f12,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bl 0x823224f0
	ctx.lr = 0x821E4134;
	sub_823224F0(ctx, base);
	// addis r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 524288;
	// lfs f11,420(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// addi r9,r11,10620
	ctx.r9.s64 = ctx.r11.s64 + 10620;
	// lfs f10,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,126(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfs f11,132(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// stfs f10,136(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// bl 0x821e3d90
	ctx.lr = 0x821E416C;
	sub_821E3D90(ctx, base);
	// lfs f9,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,232(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lfs f8,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// addi r10,r1,376
	ctx.r10.s64 = ctx.r1.s64 + 376;
	// stfs f8,236(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// addi r30,r31,232
	ctx.r30.s64 = ctx.r31.s64 + 232;
	// lfs f7,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r31,176
	ctx.r9.s64 = ctx.r31.s64 + 176;
	// stfs f7,240(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E4198:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821e4198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E4198;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3788
	ctx.lr = 0x821E41B0;
	sub_821E3788(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821E41B8;
	sub_82340D30(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r9,172(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r8,r9,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821e421c
	if (!ctx.cr6.eq) goto loc_821E421C;
	// stfs f30,244(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f30,248(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f30,252(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e4214
	if (ctx.cr6.eq) goto loc_821E4214;
	// lfs f0,384(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e4218
	goto loc_821E4218;
loc_821E4214:
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
loc_821E4218:
	// stfs f0,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
loc_821E421C:
	// addi r5,r1,252
	ctx.r5.s64 = ctx.r1.s64 + 252;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3178
	ctx.lr = 0x821E422C;
	sub_821E3178(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// ori r9,r10,44540
	ctx.r9.u64 = ctx.r10.u64 | 44540;
	// lwzx r10,r29,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// addi r8,r10,500
	ctx.r8.s64 = ctx.r10.s64 + 500;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821e4258
	if (ctx.cr6.lt) goto loc_821E4258;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44536
	ctx.r9.u64 = ctx.r10.u64 | 44536;
	// stwx r11,r29,r9
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
loc_821E4258:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,176(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 176);
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x821e426c
	if (ctx.cr6.eq) goto loc_821E426C;
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
loc_821E426C:
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// addi r28,r28,-21160
	ctx.r28.s64 = ctx.r28.s64 + -21160;
	// addi r9,r9,-20984
	ctx.r9.s64 = ctx.r9.s64 + -20984;
	// addis r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 65536;
	// addi r11,r11,-21156
	ctx.r11.s64 = ctx.r11.s64 + -21156;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x821e42a4
	if (!ctx.cr6.eq) goto loc_821E42A4;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r10,r10,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821E42A4:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r8,r10,0,26,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x38;
	// rlwinm r8,r8,0,28,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821e42c0
	if (!ctx.cr6.eq) goto loc_821E42C0;
	// stw r22,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r22.u32);
loc_821E42C0:
	// addis r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 65536;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addis r27,r29,1
	ctx.r27.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,-21148
	ctx.r30.s64 = ctx.r30.s64 + -21148;
	// lwz r9,436(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// andc r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// addi r27,r27,-21152
	ctx.r27.s64 = ctx.r27.s64 + -21152;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// or r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821e442c
	if (ctx.cr6.eq) goto loc_821E442C;
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e43d8
	if (ctx.cr6.eq) goto loc_821E43D8;
	// lbz r11,58(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 58);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,57(r23)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r23.u32 + 57);
	// addi r3,r26,16340
	ctx.r3.s64 = ctx.r26.s64 + 16340;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// extsb r5,r9
	ctx.r5.s64 = ctx.r9.s8;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfs f0,3096(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3096);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmuls f29,f7,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmuls f31,f6,f31
	ctx.f31.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// bl 0x822d4ed0
	ctx.lr = 0x821E4354;
	sub_822D4ED0(ctx, base);
	// lbz r11,59(r23)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r23.u32 + 59);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lfs f0,-29232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -29232);
	ctx.f0.f64 = double(temp.f32);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f2,f3,f1
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x821E437C;
	sub_822D77C0(ctx, base);
	// lfs f0,16332(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16332);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f29
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,16336(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16336);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// lfs f0,16344(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16344);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16340(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16340);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16324(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16324);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,16328(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16328);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f8,f0,f10,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fnmsubs f7,f13,f10,f12
	ctx.f7.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 - ctx.f12.f64)));
	// fnmsubs f6,f13,f9,f8
	ctx.f6.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fnmsubs f5,f0,f9,f7
	ctx.f5.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f7.f64)));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822acc78
	ctx.lr = 0x821E43BC;
	sub_822ACC78(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822ad078
	ctx.lr = 0x821E43C4;
	sub_822AD078(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// lhz r4,36(r9)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r9.u32 + 36);
	// b 0x821e43f4
	goto loc_821E43F4;
loc_821E43D8:
	// rlwinm r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e43fc
	if (ctx.cr6.eq) goto loc_821E43FC;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r4,32(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
loc_821E43F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229da8
	ctx.lr = 0x821E43FC;
	sub_82229DA8(ctx, base);
loc_821E43FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r11,0,19,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// rlwinm r7,r10,0,19,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// rlwinm r6,r9,0,19,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// rlwinm r8,r8,0,22,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// rlwinm r7,r7,0,22,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// rlwinm r6,r6,0,22,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF3FF;
	// stw r8,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r8.u32);
	// stw r7,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
loc_821E442C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfs f0,32(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,44392
	ctx.r9.u64 = ctx.r11.u64 | 44392;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,44396
	ctx.r7.u64 = ctx.r10.u64 | 44396;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r8,44400
	ctx.r5.u64 = ctx.r8.u64 | 44400;
	// lis r4,0
	ctx.r4.s64 = 0;
	// stfsx f0,r29,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, temp.u32);
	// ori r11,r6,44404
	ctx.r11.u64 = ctx.r6.u64 | 44404;
	// lfs f13,36(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f13,r29,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, temp.u32);
	// ori r10,r4,44408
	ctx.r10.u64 = ctx.r4.u64 | 44408;
	// lfs f12,40(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfsx f12,r29,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, temp.u32);
	// lfs f11,44(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r29,r11
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// lfs f10,48(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// stfsx f10,r29,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// bl 0x822399e8
	ctx.lr = 0x821E4484;
	sub_822399E8(ctx, base);
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821e44b0
	if (ctx.cr6.eq) goto loc_821E44B0;
	// lwz r11,68(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 68);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x821e44b0
	if (ctx.cr6.eq) goto loc_821E44B0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3e58
	ctx.lr = 0x821E44B0;
	sub_821E3E58(ctx, base);
loc_821E44B0:
	// lwz r9,1140(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1140);
	// lwz r10,1136(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1136);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821e44d8
	if (!ctx.cr6.lt) goto loc_821E44D8;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r10,r11,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r10,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 52);
loc_821E44D8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x821e44f4
	if (ctx.cr6.lt) goto loc_821E44F4;
	// lwz r10,64(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 64);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821e44f4
	if (!ctx.cr6.gt) goto loc_821E44F4;
	// bl 0x821e6ec0
	ctx.lr = 0x821E44F4;
	sub_821E6EC0(ctx, base);
loc_821E44F4:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E3ED8) {
	__imp__sub_821E3ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E4510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lis r9,0
	ctx.r9.s64 = 0;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r30,r9,44200
	ctx.r30.u64 = ctx.r9.u64 | 44200;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 65536;
	// add r4,r8,r30
	ctx.r4.u64 = ctx.r8.u64 + ctx.r30.u64;
	// addi r3,r3,-21272
	ctx.r3.s64 = ctx.r3.s64 + -21272;
	// bl 0x823de1f0
	ctx.lr = 0x821E4548;
	sub_823DE1F0(ctx, base);
	// lwz r7,264(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + ctx.r30.u64;
	// bl 0x8233cec8
	ctx.lr = 0x821E4558;
	sub_8233CEC8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3ed8
	ctx.lr = 0x821E4560;
	sub_821E3ED8(ctx, base);
	// lwz r5,264(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,88(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821e4588
	if (ctx.cr6.eq) goto loc_821E4588;
	// bl 0x821e7558
	ctx.lr = 0x821E4580;
	sub_821E7558(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E4588:
	// bl 0x821e7618
	ctx.lr = 0x821E458C;
	sub_821E7618(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E4508) {
	__imp__sub_821E4508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E4594) {
	__imp__sub_821E4594(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,168(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,104(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,108(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// lfs f10,264(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,112(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// lfs f9,268(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,116(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
	// lfs f8,272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 120, temp.u32);
	// lwz r9,136(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// stw r9,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r9.u32);
	// lwz r8,144(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// stw r8,128(r4)
	PPC_STORE_U32(ctx.r4.u32 + 128, ctx.r8.u32);
	// lwz r11,724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r5,r6,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r5,372(r4)
	PPC_STORE_U32(ctx.r4.u32 + 372, ctx.r5.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E4598) {
	__imp__sub_821E4598(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E45FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E45FC) {
	__imp__sub_821E45FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821E4608;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// lis r9,-32032
	ctx.r9.s64 = -2099249152;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r8,r9,-5864
	ctx.r8.s64 = ctx.r9.s64 + -5864;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 524288;
	// rlwinm r11,r7,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r9,10620
	ctx.r10.s64 = ctx.r9.s64 + 10620;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822846c0
	ctx.lr = 0x821E4638;
	sub_822846C0(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,31368
	ctx.r29.s64 = ctx.r11.s64 + 31368;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r27,254
	ctx.r27.s64 = 254;
loc_821E4650:
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stbx r27,r30,r11
	PPC_STORE_U8(ctx.r30.u32 + ctx.r11.u32, ctx.r27.u8);
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// bl 0x822efc98
	ctx.lr = 0x821E466C;
	sub_822EFC98(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821e4650
	if (ctx.cr6.lt) goto loc_821E4650;
	// addi r11,r25,140
	ctx.r11.s64 = ctx.r25.s64 + 140;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82101908
	ctx.lr = 0x821E4698;
	sub_82101908(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E4600) {
	__imp__sub_821E4600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E46A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32032
	ctx.r10.s64 = -2099249152;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r10,-5864
	ctx.r9.s64 = ctx.r10.s64 + -5864;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addis r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 524288;
	// rlwinm r11,r8,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// addi r10,r10,10760
	ctx.r10.s64 = ctx.r10.s64 + 10760;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E46A0) {
	__imp__sub_821E46A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E46C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E46C4) {
	__imp__sub_821E46C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E46C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-20897
	ctx.r10.s64 = ctx.r10.s64 + -20897;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e4708
	if (!ctx.cr6.eq) goto loc_821E4708;
	// lbz r9,392(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 392);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e4708
	if (!ctx.cr6.eq) goto loc_821E4708;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r9,0,23,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_821E4708:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,392(r3)
	PPC_STORE_U8(ctx.r3.u32 + 392, ctx.r11.u8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E46C8) {
	__imp__sub_821E46C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E4724) {
	__imp__sub_821E4724(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821E4730;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r11,44372
	ctx.r10.u64 = ctx.r11.u64 | 44372;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// clrlwi r8,r9,30
	ctx.r8.u64 = ctx.r9.u32 & 0x3;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821e4824
	if (!ctx.cr6.eq) goto loc_821E4824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822332d8
	ctx.lr = 0x821E4760;
	sub_822332D8(ctx, base);
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-20897
	ctx.r10.s64 = ctx.r10.s64 + -20897;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e4790
	if (!ctx.cr6.eq) goto loc_821E4790;
	// lbz r9,392(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 392);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e4790
	if (!ctx.cr6.eq) goto loc_821E4790;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r9,0,23,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// b 0x821e4798
	goto loc_821E4798;
loc_821E4790:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 512;
loc_821E4798:
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stb r22,392(r30)
	PPC_STORE_U8(ctx.r30.u32 + 392, ctx.r22.u8);
	// stb r22,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r22.u8);
	// lwz r11,468(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e47fc
	if (ctx.cr6.eq) goto loc_821E47FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e47d8
	if (!ctx.cr6.eq) goto loc_821E47D8;
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// ble cr6,0x821e47d4
	if (!ctx.cr6.gt) goto loc_821E47D4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E47D4:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821E47D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82233af0
	ctx.lr = 0x821E47E0;
	sub_82233AF0(ctx, base);
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f13,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f12,240(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x821e4824
	goto loc_821E4824;
loc_821E47FC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r9,r10,44464
	ctx.r9.u64 = ctx.r10.u64 | 44464;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stbx r22,r31,r9
	PPC_STORE_U8(ctx.r31.u32 + ctx.r9.u32, ctx.r22.u8);
	// beq cr6,0x821e481c
	if (ctx.cr6.eq) goto loc_821E481C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821e4824
	if (!ctx.cr6.eq) goto loc_821E4824;
loc_821E481C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821E4824:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r23,r11,9624
	ctx.r23.s64 = ctx.r11.s64 + 9624;
	// beq cr6,0x821e4854
	if (ctx.cr6.eq) goto loc_821E4854;
	// lwz r11,52(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 52);
	// cmpwi cr6,r11,500
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 500, ctx.xer);
	// ble cr6,0x821e4854
	if (!ctx.cr6.gt) goto loc_821E4854;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b2c0
	ctx.lr = 0x821E484C;
	sub_8223B2C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223a7f0
	ctx.lr = 0x821E4854;
	sub_8223A7F0(ctx, base);
loc_821E4854:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8223b7a8
	ctx.lr = 0x821E485C;
	sub_8223B7A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e2f78
	ctx.lr = 0x821E4864;
	sub_821E2F78(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,44332
	ctx.r9.u64 = ctx.r11.u64 | 44332;
	// ori r8,r10,44336
	ctx.r8.u64 = ctx.r10.u64 | 44336;
	// li r7,50
	ctx.r7.s64 = 50;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfsx f0,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,332(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f12,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lfs f11,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,48(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// stw r7,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r7.u32);
	// bl 0x823224f0
	ctx.lr = 0x821E48D0;
	sub_823224F0(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r25,0(r13)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r13.u32 + 0);
	// addi r28,r11,-5864
	ctx.r28.s64 = ctx.r11.s64 + -5864;
	// stw r7,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r7.u32);
	// li r24,24
	ctx.r24.s64 = 24;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// lwz r6,168(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lhz r26,126(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// addi r10,r11,10620
	ctx.r10.s64 = ctx.r11.s64 + 10620;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rotlwi r11,r26,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 1);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r27,r11,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// li r3,-1
	ctx.r3.s64 = -1;
	// add r29,r27,r10
	ctx.r29.u64 = ctx.r27.u64 + ctx.r10.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stfs f8,104(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 104, temp.u32);
	// lfs f7,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,108(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 108, temp.u32);
	// lfs f6,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,112(r29)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r29.u32 + 112, temp.u32);
	// lfs f5,268(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,116(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 116, temp.u32);
	// lfs f4,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,120(r29)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r29.u32 + 120, temp.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r10,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r10.u32);
	// lwz r9,144(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r9,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r9.u32);
	// lwz r11,724(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stwx r28,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r28.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r6,372(r29)
	PPC_STORE_U32(ctx.r29.u32 + 372, ctx.r6.u32);
	// bl 0x8231b2c8
	ctx.lr = 0x821E4978;
	sub_8231B2C8(ctx, base);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r4,r5,0,20,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821e499c
	if (ctx.cr6.eq) goto loc_821E499C;
	// lwz r10,364(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82247250
	ctx.lr = 0x821E499C;
	sub_82247250(ctx, base);
loc_821E499C:
	// addi r5,r29,140
	ctx.r5.s64 = ctx.r29.s64 + 140;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8231ac10
	ctx.lr = 0x821E49AC;
	sub_8231AC10(ctx, base);
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// stwx r22,r24,r25
	PPC_STORE_U32(ctx.r24.u32 + ctx.r25.u32, ctx.r22.u32);
	// lhz r9,126(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// lwz r11,-19088(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19088);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821e4a80
	if (!ctx.cr6.eq) goto loc_821E4A80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d878
	ctx.lr = 0x821E49D0;
	sub_8233D878(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e4a80
	if (ctx.cr6.eq) goto loc_821E4A80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// bl 0x8222ec90
	ctx.lr = 0x821E49F8;
	sub_8222EC90(ctx, base);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r9,-2072
	ctx.r4.s64 = ctx.r9.s64 + -2072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233d480
	ctx.lr = 0x821E4A0C;
	sub_8233D480(ctx, base);
	// addis r9,r28,8
	ctx.r9.s64 = ctx.r28.s64 + 524288;
	// addis r10,r28,8
	ctx.r10.s64 = ctx.r28.s64 + 524288;
	// addis r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 524288;
	// addi r7,r10,10628
	ctx.r7.s64 = ctx.r10.s64 + 10628;
	// addi r6,r11,10676
	ctx.r6.s64 = ctx.r11.s64 + 10676;
	// addi r8,r9,10736
	ctx.r8.s64 = ctx.r9.s64 + 10736;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfsx f1,r27,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r7.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r5,-21872
	ctx.r3.s64 = ctx.r5.s64 + -21872;
	// lfsx f2,r27,r6
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f3,r27,r8
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x821E4A58;
	sub_822E84F0(ctx, base);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r4,-2200
	ctx.r4.s64 = ctx.r4.s64 + -2200;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f1,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r30,232
	ctx.r3.s64 = ctx.r30.s64 + 232;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// bl 0x82127f30
	ctx.lr = 0x821E4A80;
	sub_82127F30(ctx, base);
loc_821E4A80:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44388
	ctx.r10.u64 = ctx.r11.u64 | 44388;
	// stwx r22,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r22.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E4728) {
	__imp__sub_821E4728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E4A94) {
	__imp__sub_821E4A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821E4AA0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31823
	ctx.r11.s64 = -2085552128;
	// lwz r3,-31448(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31448);
	// bl 0x8233a398
	ctx.lr = 0x821E4AB0;
	sub_8233A398(ctx, base);
	// bl 0x82133028
	ctx.lr = 0x821E4AB4;
	sub_82133028(ctx, base);
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r27,r10,9624
	ctx.r27.s64 = ctx.r10.s64 + 9624;
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lwz r9,-32312(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
	// lis r25,-32166
	ctx.r25.s64 = -2108030976;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
loc_821E4AE4:
	// lbz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4b4c
	if (ctx.cr6.eq) goto loc_821E4B4C;
	// lbz r8,29088(r25)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r25.u32 + 29088);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e4b14
	if (!ctx.cr6.eq) goto loc_821E4B14;
	// subfc r11,r9,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r9.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r9.s64;
	// eqv r7,r9,r30
	ctx.r7.u64 = ~(ctx.r9.u64 ^ ctx.r30.u64);
	// rlwinm r6,r7,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// b 0x821e4b24
	goto loc_821E4B24;
loc_821E4B14:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_821E4B24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4b4c
	if (ctx.cr6.eq) goto loc_821E4B4C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x821e4b40
	if (ctx.cr6.eq) goto loc_821E4B40;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_821E4B40:
	// bl 0x8212ca88
	ctx.lr = 0x821E4B44;
	sub_8212CA88(ctx, base);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,-32312(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -32312);
loc_821E4B4C:
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r29,r29,624
	ctx.r29.s64 = ctx.r29.s64 + 624;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// blt cr6,0x821e4ae4
	if (ctx.cr6.lt) goto loc_821E4AE4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E4A98) {
	__imp__sub_821E4A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4B70) {
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
	// bl 0x823383a0
	ctx.lr = 0x821E4B80;
	sub_823383A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4bb0
	if (ctx.cr6.eq) goto loc_821E4BB0;
	// bl 0x82338360
	ctx.lr = 0x821E4B90;
	sub_82338360(ctx, base);
	// bl 0x8233ad70
	ctx.lr = 0x821E4B94;
	sub_8233AD70(ctx, base);
	// bl 0x822814e8
	ctx.lr = 0x821E4B98;
	sub_822814E8(ctx, base);
	// bl 0x8233b408
	ctx.lr = 0x821E4B9C;
	sub_8233B408(ctx, base);
	// bl 0x82338370
	ctx.lr = 0x821E4BA0;
	sub_82338370(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E4BB0:
	// bl 0x82338370
	ctx.lr = 0x821E4BB4;
	sub_82338370(ctx, base);
	// bl 0x822814e8
	ctx.lr = 0x821E4BB8;
	sub_822814E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E4B70) {
	__imp__sub_821E4B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x821E4BD0;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db808
	ctx.lr = 0x821E4BE0;
	sub_822DB808(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8f0
	ctx.lr = 0x821E4BE8;
	sub_822DB8F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823383a0
	ctx.lr = 0x821E4BF0;
	sub_823383A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4e30
	if (ctx.cr6.eq) goto loc_821E4E30;
	// bl 0x8233b688
	ctx.lr = 0x821E4C00;
	sub_8233B688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e4e30
	if (!ctx.cr6.eq) goto loc_821E4E30;
	// bl 0x8233c7f8
	ctx.lr = 0x821E4C10;
	sub_8233C7F8(ctx, base);
	// bl 0x82310110
	ctx.lr = 0x821E4C14;
	sub_82310110(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,-5940(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5940);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// lwz r24,12(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82287b40
	ctx.lr = 0x821E4C40;
	sub_82287B40(ctx, base);
	// bl 0x8233a3e0
	ctx.lr = 0x821E4C44;
	sub_8233A3E0(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// lis r19,-31823
	ctx.r19.s64 = -2085552128;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e4e1c
	if (!ctx.cr6.eq) goto loc_821E4E1C;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8228a2e8
	ctx.lr = 0x821E4C60;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e4c90
	if (ctx.cr6.eq) goto loc_821E4C90;
loc_821E4C68:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233c500
	ctx.lr = 0x821E4C7C;
	sub_8233C500(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8228a2e8
	ctx.lr = 0x821E4C88;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e4c68
	if (!ctx.cr6.eq) goto loc_821E4C68;
loc_821E4C90:
	// lwz r3,-31448(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -31448);
	// bl 0x8233a398
	ctx.lr = 0x821E4C98;
	sub_8233A398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821fc2b8
	ctx.lr = 0x821E4CA0;
	sub_821FC2B8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821e4e1c
	if (!ctx.cr6.lt) goto loc_821E4E1C;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// li r20,1000
	ctx.r20.s64 = 1000;
	// lis r22,-32166
	ctx.r22.s64 = -2108030976;
	// lis r26,-31833
	ctx.r26.s64 = -2086207488;
	// addi r27,r10,9240
	ctx.r27.s64 = ctx.r10.s64 + 9240;
	// addi r21,r9,4128
	ctx.r21.s64 = ctx.r9.s64 + 4128;
	// addi r23,r11,-29824
	ctx.r23.s64 = ctx.r11.s64 + -29824;
loc_821E4CCC:
	// bl 0x8233b688
	ctx.lr = 0x821E4CD0;
	sub_8233B688(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e4e30
	if (!ctx.cr6.eq) goto loc_821E4E30;
	// bl 0x8233b698
	ctx.lr = 0x821E4CE0;
	sub_8233B698(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e4e30
	if (!ctx.cr6.eq) goto loc_821E4E30;
	// bl 0x8230b5e0
	ctx.lr = 0x821E4CF0;
	sub_8230B5E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e4e30
	if (!ctx.cr6.eq) goto loc_821E4E30;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8228a2e8
	ctx.lr = 0x821E4D08;
	sub_8228A2E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e4d24
	if (ctx.cr6.eq) goto loc_821E4D24;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// ld r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// rldicr r4,r11,32,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x8233c500
	ctx.lr = 0x821E4D24;
	sub_8233C500(ctx, base);
loc_821E4D24:
	// bl 0x82310110
	ctx.lr = 0x821E4D28;
	sub_82310110(ctx, base);
	// lwz r11,5700(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 5700);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x821e4d3c
	if (!ctx.cr6.gt) goto loc_821E4D3C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_821E4D3C:
	// subf. r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821e4dc4
	if (!ctx.cr0.gt) goto loc_821E4DC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r27,24
	ctx.r31.s64 = ctx.r27.s64 + 24;
loc_821E4D4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d9060
	ctx.lr = 0x821E4D54;
	sub_820D9060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4d78
	if (ctx.cr6.eq) goto loc_821E4D78;
	// lbz r11,29088(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 29088);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4d74
	if (ctx.cr6.eq) goto loc_821E4D74;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_821E4D74:
	// bl 0x821275a0
	ctx.lr = 0x821E4D78;
	sub_821275A0(ctx, base);
loc_821E4D78:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r27,19584
	ctx.r11.s64 = ctx.r27.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821e4d4c
	if (ctx.cr6.lt) goto loc_821E4D4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mulli r4,r25,50
	ctx.r4.s64 = ctx.r25.s64 * 50;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82327e68
	ctx.lr = 0x821E4D9C;
	sub_82327E68(ctx, base);
	// lwz r11,17048(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 17048);
	// add r31,r3,r29
	ctx.r31.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e4dc0
	if (ctx.cr6.eq) goto loc_821E4DC0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821e4dc4
	if (!ctx.cr6.eq) goto loc_821E4DC4;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x821e4dc4
	goto loc_821E4DC4;
loc_821E4DC0:
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_821E4DC4:
	// subf r11,r28,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r28.s64;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// ble cr6,0x821e4e00
	if (!ctx.cr6.gt) goto loc_821E4E00;
	// addi r10,r24,1000
	ctx.r10.s64 = ctx.r24.s64 + 1000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821e4dfc
	if (ctx.cr6.gt) goto loc_821E4DFC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822c4080
	ctx.lr = 0x821E4DE4;
	sub_822C4080(ctx, base);
	// divw r4,r24,r20
	ctx.r4.s32 = ctx.r24.s32 / ctx.r20.s32;
	// bl 0x822c5380
	ctx.lr = 0x821E4DEC;
	sub_822C5380(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8230ab38
	ctx.lr = 0x821E4DF8;
	sub_8230AB38(ctx, base);
	// b 0x821e4e00
	goto loc_821E4E00;
loc_821E4DFC:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821E4E00:
	// bl 0x822eb580
	ctx.lr = 0x821E4E04;
	sub_822EB580(ctx, base);
	// lwz r3,-31448(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + -31448);
	// bl 0x8233a398
	ctx.lr = 0x821E4E0C;
	sub_8233A398(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821fc2b8
	ctx.lr = 0x821E4E14;
	sub_821FC2B8(ctx, base);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821e4ccc
	if (ctx.cr6.lt) goto loc_821E4CCC;
loc_821E4E1C:
	// bl 0x821fc2b8
	ctx.lr = 0x821E4E20;
	sub_821FC2B8(ctx, base);
	// lwz r11,-31448(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + -31448);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8233a530
	ctx.lr = 0x821E4E30;
	sub_8233A530(ctx, base);
loc_821E4E30:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822db8d8
	ctx.lr = 0x821E4E38;
	sub_822DB8D8(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E4BC8) {
	__imp__sub_821E4BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4E40) {
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
	// lbz r10,29088(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e4e94
	if (ctx.cr6.eq) goto loc_821E4E94;
	// bl 0x82339ee0
	ctx.lr = 0x821E4E60;
	sub_82339EE0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4e94
	if (ctx.cr6.eq) goto loc_821E4E94;
	// lis r11,-31833
	ctx.r11.s64 = -2086207488;
	// lbz r10,17033(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17033);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e4e90
	if (ctx.cr6.eq) goto loc_821E4E90;
	// bl 0x821e4b70
	ctx.lr = 0x821E4E80;
	sub_821E4B70(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E4E90:
	// bl 0x821e4bc8
	ctx.lr = 0x821E4E94;
	sub_821E4BC8(ctx, base);
loc_821E4E94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E4E40) {
	__imp__sub_821E4E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E4EA4) {
	__imp__sub_821E4EA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4EA8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
loc_821E4EC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e4ee0
	if (ctx.cr6.eq) goto loc_821E4EE0;
	// bl 0x82240438
	ctx.lr = 0x821E4EE0;
	sub_82240438(ctx, base);
loc_821E4EE0:
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpwi cr6,r31,1248
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1248, ctx.xer);
	// blt cr6,0x821e4ec8
	if (ctx.cr6.lt) goto loc_821E4EC8;
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

PPC_WEAK_FUNC(sub_821E4EA8) {
	__imp__sub_821E4EA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E4F04) {
	__imp__sub_821E4F04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E4F08) {
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
	// lbz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e503c
	if (ctx.cr6.eq) goto loc_821E503C;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// addi r30,r3,232
	ctx.r30.s64 = ctx.r3.s64 + 232;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x821E4F40;
	sub_822D4918(ctx, base);
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
	// bge cr6,0x821e4f58
	if (!ctx.cr6.lt) goto loc_821E4F58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E4F58:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r7,r10,44588
	ctx.r7.u64 = ctx.r10.u64 | 44588;
	// stbx r11,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r11.u8);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821e4fa0
	if (!ctx.cr6.eq) goto loc_821E4FA0;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821e4fa0
	if (!ctx.cr6.eq) goto loc_821E4FA0;
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821e4fa4
	if (ctx.cr6.eq) goto loc_821E4FA4;
loc_821E4FA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E4FA4:
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
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
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x82240688
	ctx.lr = 0x821E4FD0;
	sub_82240688(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e4fe4
	if (ctx.cr6.eq) goto loc_821E4FE4;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x8223fcb0
	ctx.lr = 0x821E4FE4;
	sub_8223FCB0(ctx, base);
loc_821E4FE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e3bd8
	ctx.lr = 0x821E4FEC;
	sub_821E3BD8(ctx, base);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x822401e8
	ctx.lr = 0x821E4FF4;
	sub_822401E8(ctx, base);
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,13400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13400);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e5024
	if (!ctx.cr6.eq) goto loc_821E5024;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// ori r9,r11,44372
	ctx.r9.u64 = ctx.r11.u64 | 44372;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x821e503c
	if (!ctx.cr6.eq) goto loc_821E503C;
loc_821E5024:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bge cr6,0x821e503c
	if (!ctx.cr6.lt) goto loc_821E503C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e32c0
	ctx.lr = 0x821E503C;
	sub_821E32C0(ctx, base);
loc_821E503C:
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

PPC_WEAK_FUNC(sub_821E4F08) {
	__imp__sub_821E4F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E5054) {
	__imp__sub_821E5054(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,404
	ctx.r3.s64 = ctx.r3.s64 + 404;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5058) {
	__imp__sub_821E5058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5060) {
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,268(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e50d0
	if (!ctx.cr6.eq) goto loc_821E50D0;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821e50bc
	if (!ctx.cr6.eq) goto loc_821E50BC;
	// bl 0x821b7590
	ctx.lr = 0x821E5098;
	sub_821B7590(ctx, base);
	// lis r10,-32018
	ctx.r10.s64 = -2098331648;
	// rlwinm r11,r3,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r10,r10,6688
	ctx.r10.s64 = ctx.r10.s64 + 6688;
	// addi r10,r10,7972
	ctx.r10.s64 = ctx.r10.s64 + 7972;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E50BC:
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
loc_821E50D0:
	// addi r3,r11,404
	ctx.r3.s64 = ctx.r11.s64 + 404;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5060) {
	__imp__sub_821E5060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E50E4) {
	__imp__sub_821E50E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E50E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,2052
	ctx.r10.s64 = ctx.r11.s64 + 2052;
	// lbzx r11,r9,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r8,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E50E8) {
	__imp__sub_821E50E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// addi r11,r11,-18976
	ctx.r11.s64 = ctx.r11.s64 + -18976;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r11,3204
	ctx.r10.s64 = ctx.r11.s64 + 3204;
	// lbzx r8,r9,r3
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// rotlwi r11,r8,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 4);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5110) {
	__imp__sub_821E5110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,400
	ctx.r11.s64 = ctx.r3.s64 + 400;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821E5140:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821e5140
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E5140;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5130) {
	__imp__sub_821E5130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E514C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E514C) {
	__imp__sub_821E514C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821E5158;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r29,r3,404
	ctx.r29.s64 = ctx.r3.s64 + 404;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821E5180;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e51f8
	if (ctx.cr6.eq) goto loc_821E51F8;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5284
	if (ctx.cr6.eq) goto loc_821E5284;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e5284
	if (ctx.cr6.eq) goto loc_821E5284;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823170e8
	ctx.lr = 0x821E51A8;
	sub_823170E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e51e8
	if (!ctx.cr6.lt) goto loc_821E51E8;
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
loc_821E51E8:
	// stw r28,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r28.u32);
	// stb r27,391(r31)
	PPC_STORE_U8(ctx.r31.u32 + 391, ctx.r27.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821E51F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stb r11,406(r31)
	PPC_STORE_U8(ctx.r31.u32 + 406, ctx.r11.u8);
	// stw r28,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r28.u32);
	// stb r11,3524(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3524, ctx.r11.u8);
	// stb r27,391(r31)
	PPC_STORE_U8(ctx.r31.u32 + 391, ctx.r27.u8);
	// stw r10,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// bne cr6,0x821e5230
	if (!ctx.cr6.eq) goto loc_821E5230;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,26572(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f4.f64 = double(temp.f32);
	// b 0x821e5238
	goto loc_821E5238;
loc_821E5230:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,13220(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13220);
	ctx.f4.f64 = double(temp.f32);
loc_821E5238:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r9,r31,424
	ctx.r9.s64 = ctx.r31.s64 + 424;
	// stb r5,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r5.u8);
	// lfs f2,14004(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14004);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r31,420
	ctx.r8.s64 = ctx.r31.s64 + 420;
	// addi r4,r7,232
	ctx.r4.s64 = ctx.r7.s64 + 232;
	// lfs f1,7932(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7932);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,248(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 248);
	ctx.f3.f64 = double(temp.f32);
	// lhz r3,126(r7)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r7.u32 + 126);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82320340
	ctx.lr = 0x821E5280;
	sub_82320340(ctx, base);
	// stb r3,390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 390, ctx.r3.u8);
loc_821E5284:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5150) {
	__imp__sub_821E5150(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E528C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E528C) {
	__imp__sub_821E528C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E5298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r29,r3,404
	ctx.r29.s64 = ctx.r3.s64 + 404;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82317030
	ctx.lr = 0x821E52BC;
	sub_82317030(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e5334
	if (ctx.cr6.eq) goto loc_821E5334;
	// lwz r11,412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e5324
	if (ctx.cr6.eq) goto loc_821E5324;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821e5324
	if (ctx.cr6.eq) goto loc_821E5324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,52(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x823170e8
	ctx.lr = 0x821E52E4;
	sub_823170E8(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
	// stw r8,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r8.u32);
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E5324:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// neg r11,r28
	ctx.r11.s64 = -ctx.r28.s64;
	// stw r11,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
loc_821E5334:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5290) {
	__imp__sub_821E5290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E533C) {
	__imp__sub_821E533C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E5348;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822d67f0
	ctx.lr = 0x821E5368;
	sub_822D67F0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d6a38
	ctx.lr = 0x821E5374;
	sub_822D6A38(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d5c30
	ctx.lr = 0x821E5384;
	sub_822D5C30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d7c78
	ctx.lr = 0x821E5390;
	sub_822D7C78(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5340) {
	__imp__sub_821E5340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E53A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x822f4478
	ctx.lr = 0x821E53BC;
	sub_822F4478(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d67f0
	ctx.lr = 0x821E53CC;
	sub_822D67F0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d6a38
	ctx.lr = 0x821E53D8;
	sub_822D6A38(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822d5c30
	ctx.lr = 0x821E53E8;
	sub_822D5C30(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822d7c78
	ctx.lr = 0x821E53F4;
	sub_822D7C78(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5398) {
	__imp__sub_821E5398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E53FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E53FC) {
	__imp__sub_821E53FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E5408;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x822f46b8
	ctx.lr = 0x821E542C;
	sub_822F46B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d67f0
	ctx.lr = 0x821E543C;
	sub_822D67F0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6a38
	ctx.lr = 0x821E5448;
	sub_822D6A38(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d5c30
	ctx.lr = 0x821E5458;
	sub_822D5C30(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d7c78
	ctx.lr = 0x821E5464;
	sub_822D7C78(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5400) {
	__imp__sub_821E5400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E546C) {
	__imp__sub_821E546C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5470) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821E5478;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r11,24524
	ctx.r28.s64 = ctx.r11.s64 + 24524;
	// lfs f13,7640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7640);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// ori r26,r8,21
	ctx.r26.u64 = ctx.r8.u64 | 21;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r31,476(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lhz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821E5504;
	sub_821FE618(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lbz r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f30,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x821e5568
	if (!ctx.cr6.eq) goto loc_821E5568;
	// lfs f0,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821e5568
	if (!ctx.cr6.lt) goto loc_821E5568;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fmadds f9,f10,f0,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fmadds f6,f7,f12,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f6,40(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// fmadds f3,f4,f12,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f3,44(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x821e5580
	goto loc_821E5580;
loc_821E5568:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_821E5580:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,80(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821E55AC;
	sub_822DA650(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f46b8
	ctx.lr = 0x821E55C4;
	sub_822F46B8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d67f0
	ctx.lr = 0x821E55D4;
	sub_822D67F0(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d6a38
	ctx.lr = 0x821E55E0;
	sub_822D6A38(ctx, base);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822d5c30
	ctx.lr = 0x821E55F0;
	sub_822D5C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d7c78
	ctx.lr = 0x821E55FC;
	sub_822D7C78(ctx, base);
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,27440(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27440);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f9,3096(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 3096);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lhz r7,126(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// fmadds f6,f12,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f7.f64));
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f11,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f6.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fadds f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fadds f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fadds f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f1,104(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f0,f8,f2
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821E5678;
	sub_821FE618(ctx, base);
	// lbz r7,216(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 216);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821e56f0
	if (!ctx.cr6.eq) goto loc_821E56F0;
	// lfs f0,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x821e56f0
	if (!ctx.cr6.lt) goto loc_821E56F0;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lhz r3,126(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,160(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,164(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,168(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// bl 0x821b82d0
	ctx.lr = 0x821E56EC;
	sub_821B82D0(ctx, base);
	// b 0x821e56f8
	goto loc_821E56F8;
loc_821E56F0:
	// stfs f31,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f31,88(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_821E56F8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822f3f10
	ctx.lr = 0x821E5704;
	sub_822F3F10(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x821e5728
	if (!ctx.cr6.lt) goto loc_821E5728;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821E5728:
	// stfs f31,92(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5470) {
	__imp__sub_821E5470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E573C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E573C) {
	__imp__sub_821E573C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E5748;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de028
	ctx.lr = 0x821E5750;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821e582c
	if (ctx.cr6.eq) goto loc_821E582C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,496(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f29,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x821e582c
	if (ctx.cr6.eq) goto loc_821E582C;
	// lbz r11,523(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 523);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e582c
	if (ctx.cr6.eq) goto loc_821E582C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r4,516(r6)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r6.u32 + 516);
	// bl 0x822f4098
	ctx.lr = 0x821E5798;
	sub_822F4098(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,518(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x822f4098
	ctx.lr = 0x821E57A8;
	sub_822F4098(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,6040(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x821e57c8
	if (!ctx.cr6.gt) goto loc_821E57C8;
	// lhz r4,518(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 518);
	// b 0x821e57e0
	goto loc_821E57E0;
loc_821E57C8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lhz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 520);
	// bl 0x822f4098
	ctx.lr = 0x821E57D4;
	sub_822F4098(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x821e57f8
	if (!ctx.cr6.gt) goto loc_821E57F8;
	// lhz r4,520(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 520);
loc_821E57E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f80f0
	ctx.lr = 0x821E57F8;
	sub_822F80F0(ctx, base);
loc_821E57F8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lhz r4,516(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 516);
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822f75d8
	ctx.lr = 0x821E581C;
	sub_822F75D8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821e5840
	if (ctx.cr6.eq) goto loc_821E5840;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x821e5834
	goto loc_821E5834;
loc_821E582C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,6040(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f1.f64 = double(temp.f32);
loc_821E5834:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f4cb8
	ctx.lr = 0x821E5840;
	sub_822F4CB8(ctx, base);
loc_821E5840:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de074
	ctx.lr = 0x821E584C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5740) {
	__imp__sub_821E5740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821E5858;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e58ac
	if (!ctx.cr6.eq) goto loc_821E58AC;
	// lhz r3,292(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 292);
	// bl 0x822a13a0
	ctx.lr = 0x821E5898;
	sub_822A13A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-21824
	ctx.r3.s64 = ctx.r11.s64 + -21824;
	// bl 0x822e84f0
	ctx.lr = 0x821E58A8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E58AC;
	sub_822AD548(ctx, base);
loc_821E58AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bb38
	ctx.lr = 0x821E58B4;
	sub_8220BB38(ctx, base);
	// lwz r30,476(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821e58d8
	if (!ctx.cr6.eq) goto loc_821E58D8;
	// li r4,19
	ctx.r4.s64 = 19;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8229e0e8
	ctx.lr = 0x821E58D0;
	sub_8229E0E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r3.u32);
loc_821E58D8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r29,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r29.u8);
	// sth r28,72(r30)
	PPC_STORE_U16(ctx.r30.u32 + 72, ctx.r28.u16);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stb r11,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r11.u8);
	// sth r24,74(r30)
	PPC_STORE_U16(ctx.r30.u32 + 74, ctx.r24.u16);
	// bl 0x822f29c8
	ctx.lr = 0x821E58F4;
	sub_822F29C8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5910
	if (ctx.cr6.eq) goto loc_821E5910;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// oris r9,r10,16
	ctx.r9.u64 = ctx.r10.u64 | 1048576;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_821E5910:
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821e5938
	if (!ctx.cr6.eq) goto loc_821E5938;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5470
	ctx.lr = 0x821E5934;
	sub_821E5470(ctx, base);
	// b 0x821e595c
	goto loc_821E595C;
loc_821E5938:
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,44(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821E595C;
	sub_822DA650(ctx, base);
loc_821E595C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822846c0
	ctx.lr = 0x821E5964;
	sub_822846C0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r6,268(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821e5740
	ctx.lr = 0x821E5978;
	sub_821E5740(ctx, base);
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r8,126(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f30,6040(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6040);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,-6136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6136);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821e59c8
	if (!ctx.cr6.eq) goto loc_821E59C8;
	// lwz r11,476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r10,-21848
	ctx.r3.s64 = ctx.r10.s64 + -21848;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lhz r5,72(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 72);
	// bl 0x8220bf58
	ctx.lr = 0x821E59C8;
	sub_8220BF58(ctx, base);
loc_821E59C8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f5640
	ctx.lr = 0x821E59D4;
	sub_822F5640(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f75d8
	ctx.lr = 0x821E5A00;
	sub_822F75D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220bbd8
	ctx.lr = 0x821E5A08;
	sub_8220BBD8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f4478
	ctx.lr = 0x821E5A1C;
	sub_822F4478(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d67f0
	ctx.lr = 0x821E5A2C;
	sub_822D67F0(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d6a38
	ctx.lr = 0x821E5A38;
	sub_822D6A38(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d5c30
	ctx.lr = 0x821E5A48;
	sub_822D5C30(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d7c78
	ctx.lr = 0x821E5A54;
	sub_822D7C78(ctx, base);
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r30,60
	ctx.r5.s64 = ctx.r30.s64 + 60;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,48(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f9,52(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfs f6,56(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// bl 0x822d7700
	ctx.lr = 0x821E5A94;
	sub_822D7700(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5850) {
	__imp__sub_821E5850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E5AA4) {
	__imp__sub_821E5AA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f12,f12
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f13,f11,f11,f9
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// frsqrte f13,f13
	ctx.f13.f64 = 1.0 / sqrt(ctx.f13.f64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f8,f1
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bge cr6,0x821e5b4c
	if (!ctx.cr6.lt) goto loc_821E5B4C;
	// lfs f10,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f13,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f6,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f4,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fadds f5,f6,f12
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f3,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f4,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f11.f64));
	// fmadds f1,f13,f3,f6
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f6.f64));
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f12,f7,f9
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f9.f64));
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f5,f11
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f2,f9
	ctx.f8.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
loc_821E5B4C:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// stfs f5,8(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f10,4(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f10,8(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5AA8) {
	__imp__sub_821E5AA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E5B90;
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// subf r30,r4,r3
	ctx.r30.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r29,3
	ctx.r29.s64 = 3;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_821E5BB4:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x821e5c1c
	if (ctx.cr6.eq) goto loc_821E5C1C;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x821e5be4
	if (!ctx.cr6.gt) goto loc_821E5BE4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfsx f13,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x822d77c0
	ctx.lr = 0x821E5BDC;
	sub_822D77C0(ctx, base);
	// stfsx f1,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// b 0x821e5c1c
	goto loc_821E5C1C;
loc_821E5BE4:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e5c0c
	if (!ctx.cr6.lt) goto loc_821E5C0C;
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfsx f13,r30,r31
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// bl 0x822d77c0
	ctx.lr = 0x821E5C04;
	sub_822D77C0(ctx, base);
	// stfsx f1,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// b 0x821e5c1c
	goto loc_821E5C1C;
loc_821E5C0C:
	// lfsx f13,r30,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f12,r30,r31
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, temp.u32);
	// stfs f30,0(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_821E5C1C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821e5bb4
	if (!ctx.cr0.eq) goto loc_821E5BB4;
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

PPC_WEAK_FUNC(sub_821E5B88) {
	__imp__sub_821E5B88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E5C40;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,476(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r8,130
	ctx.r8.s64 = 8519680;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f9,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f13,7640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7640);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fadds f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r6,r9,24524
	ctx.r6.s64 = ctx.r9.s64 + 24524;
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// ori r8,r8,21
	ctx.r8.u64 = ctx.r8.u64 | 21;
	// lfs f6,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fadds f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lhz r7,126(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 126);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821fe618
	ctx.lr = 0x821E5CCC;
	sub_821FE618(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbz r6,152(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 152);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f10,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f10.f64 = double(temp.f32);
	// bne cr6,0x821e5d34
	if (!ctx.cr6.eq) goto loc_821E5D34;
	// lfs f0,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x821e5d34
	if (!ctx.cr6.lt) goto loc_821E5D34;
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f9,f0,f13
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f2,f6,f0,f12
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// fmadds f1,f5,f0,f11
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fsubs f0,f3,f4
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// stfs f2,0(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// stfs f1,4(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_821E5D34:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x821e5d58
	if (!ctx.cr6.lt) goto loc_821E5D58;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,72(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// bl 0x822f4038
	ctx.lr = 0x821E5D54;
	sub_822F4038(ctx, base);
	// b 0x821e5d78
	goto loc_821E5D78;
loc_821E5D58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-23144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x821e5d74
	if (!ctx.cr6.gt) goto loc_821E5D74;
	// stfs f10,92(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
loc_821E5D74:
	// lfs f1,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
loc_821E5D78:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f1,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f10,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f1,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f9,8(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5C38) {
	__imp__sub_821E5C38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E5DA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5e38
	if (ctx.cr6.eq) goto loc_821E5E38;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x82232d10
	ctx.lr = 0x821E5DCC;
	sub_82232D10(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f12,172(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821E5DF0;
	sub_822DA650(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822d60b8
	ctx.lr = 0x821E5E00;
	sub_822D60B8(ctx, base);
	// lfs f11,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
	// lfs f9,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f11,232(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f10,236(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// stfs f9,240(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// bl 0x822d7c78
	ctx.lr = 0x821E5E24;
	sub_822D7C78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82232d60
	ctx.lr = 0x821E5E30;
	sub_82232D60(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E5E38:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f9,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5DA0) {
	__imp__sub_821E5DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E5E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,476(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 476);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e5fac
	if (ctx.cr6.eq) goto loc_821E5FAC;
	// bl 0x8222ea68
	ctx.lr = 0x821E5E90;
	sub_8222EA68(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e5f98
	if (ctx.cr6.eq) goto loc_821E5F98;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5f98
	if (ctx.cr6.eq) goto loc_821E5F98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822846c0
	ctx.lr = 0x821E5EB0;
	sub_822846C0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lhz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x821e5398
	ctx.lr = 0x821E5EC8;
	sub_821E5398(ctx, base);
	// lbz r11,77(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 77);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821e5ee8
	if (!ctx.cr6.eq) goto loc_821E5EE8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e5c38
	ctx.lr = 0x821E5EE8;
	sub_821E5C38(ctx, base);
loc_821E5EE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f1,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e5aa8
	ctx.lr = 0x821E5EFC;
	sub_821E5AA8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,612(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,60
	ctx.r4.s64 = ctx.r31.s64 + 60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,-23144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23144);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x821e5b88
	ctx.lr = 0x821E5F18;
	sub_821E5B88(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e5da0
	ctx.lr = 0x821E5F28;
	sub_821E5DA0(ctx, base);
	// lbz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e5f44
	if (!ctx.cr6.eq) goto loc_821E5F44;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E5F44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// bl 0x822f40f8
	ctx.lr = 0x821E5F50;
	sub_822F40F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e5fac
	if (ctx.cr6.eq) goto loc_821E5FAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f3,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f2,6040(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6040);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x822f75d8
	ctx.lr = 0x821E5F88;
	sub_822F75D8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// sth r6,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r6.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E5F98:
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229e118
	ctx.lr = 0x821E5FA4;
	sub_8229E118(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,476(r30)
	PPC_STORE_U32(ctx.r30.u32 + 476, ctx.r11.u32);
loc_821E5FAC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E5E70) {
	__imp__sub_821E5E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E5FB4) {
	__imp__sub_821E5FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E5FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E5FD0;
	sub_822B2498(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821E5FDC;
	sub_822B2498(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1d30
	ctx.lr = 0x821E5FE8;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x821E5FF4;
	sub_82293548(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f46b8
	ctx.lr = 0x821E600C;
	sub_822F46B8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821E6030;
	sub_822DA650(ctx, base);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822d67f0
	ctx.lr = 0x821E6040;
	sub_822D67F0(ctx, base);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822ad078
	ctx.lr = 0x821E6048;
	sub_822AD078(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E5FB8) {
	__imp__sub_821E5FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E6070;
	sub_822B2498(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x821E607C;
	sub_822B2498(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1d30
	ctx.lr = 0x821E6088;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x821E6094;
	sub_82293548(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lfs f1,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f46b8
	ctx.lr = 0x821E60AC;
	sub_822F46B8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f13,200(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x822da650
	ctx.lr = 0x821E60D0;
	sub_822DA650(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6a38
	ctx.lr = 0x821E60DC;
	sub_822D6A38(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822d5c30
	ctx.lr = 0x821E60EC;
	sub_822D5C30(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822d7c78
	ctx.lr = 0x821E60F8;
	sub_822D7C78(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x822ad078
	ctx.lr = 0x821E6100;
	sub_822AD078(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6058) {
	__imp__sub_821E6058(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6110) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E6130;
	sub_822B2498(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1d30
	ctx.lr = 0x821E613C;
	sub_822B1D30(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x822da650
	ctx.lr = 0x821E614C;
	sub_822DA650(ctx, base);
	// lhz r3,82(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// bl 0x82293548
	ctx.lr = 0x821E6154;
	sub_82293548(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f46b8
	ctx.lr = 0x821E6174;
	sub_822F46B8(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822f46b8
	ctx.lr = 0x821E6190;
	sub_822F46B8(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// lfs f4,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f13,f6,f11
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f10,f4,f11
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f7,f3,f9
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f0,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f2,f5,f13
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f13.f64));
	// lfs f8,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f1,f5,f10
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f10.f64));
	// lfs f6,184(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f2,f0,f5,f7
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f5.f64 + ctx.f7.f64));
	// fmadds f1,f12,f9,f4
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f4.f64));
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f0,f8,f9,f3
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f3.f64));
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmadds f13,f6,f11,f2
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x821E6210;
	sub_822AD078(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

PPC_WEAK_FUNC(sub_821E6110) {
	__imp__sub_821E6110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E6230;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,240(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,232(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,641
	ctx.r10.s64 = 42008576;
	// lfs f11,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ori r30,r10,49169
	ctx.r30.u64 = ctx.r10.u64 | 49169;
	// lfs f0,3096(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3096);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r9,-27184
	ctx.r29.s64 = ctx.r9.s64 + -27184;
	// fadds f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f7,120(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f10,f13
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// bl 0x821fe618
	ctx.lr = 0x821E62A0;
	sub_821FE618(ctx, base);
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f4,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f4.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfs f3,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f3.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f12.f64));
	// lfs f10,20476(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20476);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmadds f11,f5,f0,f11
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f13,f2,f0,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f0,f1,f0,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsubs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821fe618
	ctx.lr = 0x821E6314;
	sub_821FE618(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82276090
	ctx.lr = 0x821E631C;
	sub_82276090(ctx, base);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsubs f5,f7,f11
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// lfs f0,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// sth r3,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r3.u16);
	// mulli r10,r10,624
	ctx.r10.s64 = ctx.r10.s64 * 624;
	// fmadds f4,f8,f0,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmadds f3,f6,f0,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmadds f2,f5,f0,f11
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r11,r11,312
	ctx.r11.s64 = ctx.r11.s64 + 312;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// oris r7,r9,32
	ctx.r7.u64 = ctx.r9.u64 | 2097152;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stwx r7,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lhz r7,126(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x821fe618
	ctx.lr = 0x821E639C;
	sub_821FE618(ctx, base);
	// lbz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 168);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e63ec
	if (ctx.cr6.eq) goto loc_821E63EC;
	// lfs f13,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f10,f13
	ctx.f10.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f11,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fctiwz f12,f0
	ctx.f12.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f9,f11
	ctx.f9.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// addi r4,r11,-21752
	ctx.r4.s64 = ctx.r11.s64 + -21752;
	// li r3,15
	ctx.r3.s64 = 15;
	// stfd f12,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r5,126(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82280c30
	ctx.lr = 0x821E63EC;
	sub_82280C30(ctx, base);
loc_821E63EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821E63F8;
	sub_8222FB90(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6228) {
	__imp__sub_821E6228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6400) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stb r10,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r10.u8);
	// addi r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 + 100;
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6400) {
	__imp__sub_821E6400(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6420) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r10,15
	ctx.r10.s64 = 15;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// stb r10,291(r3)
	PPC_STORE_U8(ctx.r3.u32 + 291, ctx.r10.u8);
	// addi r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 + 100;
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6420) {
	__imp__sub_821E6420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8320(r1)
	ea = -8320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lis r6,512
	ctx.r6.s64 = 33554432;
	// addi r10,r11,-27184
	ctx.r10.s64 = ctx.r11.s64 + -27184;
	// lfs f11,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// ori r6,r6,49152
	ctx.r6.u64 = ctx.r6.u64 | 49152;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lfs f0,-27184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27184);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x8227bff0
	ctx.lr = 0x821E64BC;
	sub_8227BFF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e6520
	if (!ctx.cr6.gt) goto loc_821E6520;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r11,26552
	ctx.r7.s64 = ctx.r11.s64 + 26552;
loc_821E64D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mulli r11,r11,624
	ctx.r11.s64 = ctx.r11.s64 * 624;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r10,264(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e64f8
	if (ctx.cr6.eq) goto loc_821E64F8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x821e6534
	if (ctx.cr6.lt) goto loc_821E6534;
loc_821E64F8:
	// lwz r10,268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6510
	if (ctx.cr6.eq) goto loc_821E6510;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821e6534
	if (ctx.cr6.gt) goto loc_821E6534;
loc_821E6510:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821e64d4
	if (ctx.cr6.lt) goto loc_821E64D4;
loc_821E6520:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E6534:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,8320
	ctx.r1.s64 = ctx.r1.s64 + 8320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6440) {
	__imp__sub_821E6440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E6550;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r31,r11,-25976
	ctx.r31.s64 = ctx.r11.s64 + -25976;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f31,-21692(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21692);
	ctx.f31.f64 = double(temp.f32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 540);
	// bl 0x8222f160
	ctx.lr = 0x821E6580;
	sub_8222F160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e65e0
	if (ctx.cr6.eq) goto loc_821E65E0;
loc_821E6588:
	// lfs f0,232(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,240(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,236(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f0,f3
	ctx.f0.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x821e65cc
	if (!ctx.cr6.lt) goto loc_821E65CC;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821E65CC:
	// li r4,292
	ctx.r4.s64 = 292;
	// lhz r5,540(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 540);
	// bl 0x8222f160
	ctx.lr = 0x821E65D8;
	sub_8222F160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e6588
	if (!ctx.cr6.eq) goto loc_821E6588;
loc_821E65E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6548) {
	__imp__sub_821E6548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E65F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E65F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r4,292
	ctx.r4.s64 = 292;
	// addi r29,r11,-25976
	ctx.r29.s64 = ctx.r11.s64 + -25976;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r5,540(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 540);
	// bl 0x8222f160
	ctx.lr = 0x821E6618;
	sub_8222F160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6668
	if (ctx.cr6.eq) goto loc_821E6668;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_821E662C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6440
	ctx.lr = 0x821E6634;
	sub_821E6440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e6644
	if (!ctx.cr6.eq) goto loc_821E6644;
	// stwu r31,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r28.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_821E6644:
	// li r4,292
	ctx.r4.s64 = 292;
	// lhz r5,540(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 540);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222f160
	ctx.lr = 0x821E6654;
	sub_8222F160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e662c
	if (!ctx.cr6.eq) goto loc_821E662C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821e6680
	if (!ctx.cr6.eq) goto loc_821E6680;
loc_821E6668:
	// li r4,292
	ctx.r4.s64 = 292;
	// lhz r5,540(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 540);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8222f160
	ctx.lr = 0x821E6678;
	sub_8222F160(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E6680:
	// bl 0x8222fd60
	ctx.lr = 0x821E6684;
	sub_8222FD60(ctx, base);
	// divw r10,r3,r30
	ctx.r10.s32 = ctx.r3.s32 / ctx.r30.s32;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E65F0) {
	__imp__sub_821E65F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E66A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E66A4) {
	__imp__sub_821E66A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E66A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E66B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821e6548
	ctx.lr = 0x821E66C0;
	sub_821E6548(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821e65f0
	ctx.lr = 0x821E66C8;
	sub_821E65F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821e66ec
	if (!ctx.cr6.eq) goto loc_821E66EC;
	// bl 0x821e65f0
	ctx.lr = 0x821E66D8;
	sub_821E65F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x821e66ec
	if (!ctx.cr6.eq) goto loc_821E66EC;
	// bl 0x821e65f0
	ctx.lr = 0x821E66E8;
	sub_821E65F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821E66EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821e6704
	if (!ctx.cr6.eq) goto loc_821E6704;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21688
	ctx.r4.s64 = ctx.r11.s64 + -21688;
	// bl 0x822830e8
	ctx.lr = 0x821E6704;
	sub_822830E8(ctx, base);
loc_821E6704:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,26116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f10,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E66A8) {
	__imp__sub_821E66A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E674C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E674C) {
	__imp__sub_821E674C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E6758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,292
	ctx.r4.s64 = 292;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r5,540(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 540);
	// bl 0x8222f160
	ctx.lr = 0x821E677C;
	sub_8222F160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e67b4
	if (ctx.cr6.eq) goto loc_821E67B4;
loc_821E6788:
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e67d0
	if (!ctx.cr6.eq) goto loc_821E67D0;
	// li r4,292
	ctx.r4.s64 = 292;
	// lhz r5,540(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 540);
	// bl 0x8222f160
	ctx.lr = 0x821E67A8;
	sub_8222F160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e6788
	if (!ctx.cr6.eq) goto loc_821E6788;
loc_821E67B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821e66a8
	ctx.lr = 0x821E67C8;
	sub_821E66A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E67D0:
	// bl 0x821e6440
	ctx.lr = 0x821E67D4;
	sub_821E6440(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e67b4
	if (!ctx.cr6.eq) goto loc_821E67B4;
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,26116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 26116);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f10,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,4(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f8,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,8(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6750) {
	__imp__sub_821E6750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E6824) {
	__imp__sub_821E6824(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6828) {
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
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,36(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// stfs f10,36(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r8,172(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// xori r7,r8,2
	ctx.r7.u64 = ctx.r8.u64 ^ 2;
	// stw r7,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r7.u32);
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// bl 0x823224f0
	ctx.lr = 0x821E6890;
	sub_823224F0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f9,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,232(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,236(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f7,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,240(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
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

PPC_WEAK_FUNC(sub_821E6828) {
	__imp__sub_821E6828(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E68C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E68C8;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de024
	ctx.lr = 0x821E68D0;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// ori r29,r11,44116
	ctx.r29.u64 = ctx.r11.u64 | 44116;
	// lfs f28,2412(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// addi r31,r3,92
	ctx.r31.s64 = ctx.r3.s64 + 92;
	// lfs f29,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
	// lfs f30,2420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// lfs f31,-29228(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -29228);
	ctx.f31.f64 = double(temp.f32);
loc_821E6908:
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lfs f0,172(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fnmsubs f10,f11,f31,f0
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f0.f64)));
	// fmuls f27,f10,f30
	ctx.f27.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fadds f1,f27,f29
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821E6934;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fmuls f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// stfsu f7,4(r31)
	ea = 4 + ctx.r31.u32;
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// bne 0x821e6908
	if (!ctx.cr0.eq) goto loc_821E6908;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de070
	ctx.lr = 0x821E695C;
	__restfpr_27(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E68C0) {
	__imp__sub_821E68C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6960) {
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
	// bl 0x823de018
	ctx.lr = 0x821E6974;
	__savefpr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lfs f28,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f25,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e6af4
	if (ctx.cr6.eq) goto loc_821E6AF4;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e6af4
	if (!ctx.cr6.eq) goto loc_821E6AF4;
	// lfs f1,348(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 348);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// bl 0x822d7818
	ctx.lr = 0x821E69B8;
	sub_822D7818(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2420(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f24,f1,f31
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f24,f30
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821E69D4;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// lwz r11,-6620(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6620);
	// lfs f26,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f26.f64 = double(temp.f32);
	// fsubs f13,f24,f0
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f0.f64));
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821e6a10
	if (ctx.cr6.gt) goto loc_821E6A10;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821e6a58
	if (!ctx.cr6.lt) goto loc_821E6A58;
loc_821E6A10:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821e6a20
	if (!ctx.cr6.gt) goto loc_821E6A20;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821e6a24
	goto loc_821E6A24;
loc_821E6A20:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_821E6A24:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fcmpu cr6,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// lfs f13,100(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,100(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,348(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 348);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x821e6a4c
	if (!ctx.cr6.gt) goto loc_821E6A4C;
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821e6a50
	goto loc_821E6A50;
loc_821E6A4C:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_821E6A50:
	// bl 0x822d77c0
	ctx.lr = 0x821E6A54;
	sub_822D77C0(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
loc_821E6A58:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f1,356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d7818
	ctx.lr = 0x821E6A68;
	sub_822D7818(ctx, base);
	// fmuls f24,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f24,f30
	ctx.f1.f64 = double(float(ctx.f24.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821E6A74;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6028(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6028);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f24,f13
	ctx.f12.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fmuls f13,f12,f29
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821e6aa8
	if (ctx.cr6.gt) goto loc_821E6AA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,24816(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24816);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x821e6af4
	if (!ctx.cr6.lt) goto loc_821E6AF4;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821e6ab0
	if (!ctx.cr6.gt) goto loc_821E6AB0;
loc_821E6AA8:
	// fsubs f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821e6ab4
	goto loc_821E6AB4;
loc_821E6AB0:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_821E6AB4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// lfs f12,96(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f11,96(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f13,356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 356);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x821e6ad8
	if (!ctx.cr6.gt) goto loc_821E6AD8;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821e6adc
	goto loc_821E6ADC;
loc_821E6AD8:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_821E6ADC:
	// fmuls f31,f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821E6AE8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f28,f10,f29
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
loc_821E6AF4:
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f28,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f27,248(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// stfs f25,252(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// fmr f0,f28
	ctx.f0.f64 = ctx.f28.f64;
	// stfs f28,264(r3)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r3.u32 + 264, temp.u32);
	// lfs f13,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,268(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 268, temp.u32);
	// lfs f12,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,272(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 272, temp.u32);
	// bl 0x821e68c0
	ctx.lr = 0x821E6B24;
	sub_821E68C0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de064
	ctx.lr = 0x821E6B30;
	__restfpr_24(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6960) {
	__imp__sub_821E6960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6B40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e6b7c
	if (ctx.cr6.eq) goto loc_821E6B7C;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r9,364(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// addi r7,r10,-25976
	ctx.r7.s64 = ctx.r10.s64 + -25976;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// lhz r4,222(r7)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r7.u32 + 222);
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x8222f0a8
	sub_8222F0A8(ctx, base);
	return;
loc_821E6B7C:
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f11,280(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfs f4,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,6056(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6056);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822e97d8
	sub_822E97D8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6B40) {
	__imp__sub_821E6B40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6BC0) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e6c30
	if (ctx.cr6.eq) goto loc_821E6C30;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r9,392(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r8,-32052
	ctx.r8.s64 = -2100559872;
	// addi r7,r11,-25976
	ctx.r7.s64 = ctx.r11.s64 + -25976;
	// addi r10,r8,26552
	ctx.r10.s64 = ctx.r8.s64 + 26552;
	// mulli r9,r9,624
	ctx.r9.s64 = ctx.r9.s64 * 624;
	// lhz r11,222(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 222);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8222f018
	ctx.lr = 0x821E6C08;
	sub_8222F018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821e6c34
	if (!ctx.cr6.eq) goto loc_821E6C34;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21656
	ctx.r4.s64 = ctx.r11.s64 + -21656;
	// bl 0x822830e8
	ctx.lr = 0x821E6C20;
	sub_822830E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_821E6C30:
	// bl 0x821e6b40
	ctx.lr = 0x821E6C34;
	sub_821E6B40(ctx, base);
loc_821E6C34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E6BC0) {
	__imp__sub_821E6BC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E6C44) {
	__imp__sub_821E6C44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// b 0x82321048
	sub_82321048(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6C48) {
	__imp__sub_821E6C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6C50) {
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
	// lwz r11,204(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e6d5c
	if (ctx.cr6.eq) goto loc_821E6D5C;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,172(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r9,r11,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e6d5c
	if (!ctx.cr6.eq) goto loc_821E6D5C;
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6d5c
	if (!ctx.cr6.eq) goto loc_821E6D5C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32020
	ctx.r9.s64 = -2098462720;
	// ori r8,r11,44540
	ctx.r8.u64 = ctx.r11.u64 | 44540;
	// addi r7,r9,9624
	ctx.r7.s64 = ctx.r9.s64 + 9624;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r6,r11,500
	ctx.r6.s64 = ctx.r11.s64 + 500;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x821e6cdc
	if (!ctx.cr6.lt) goto loc_821E6CDC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,44536
	ctx.r8.u64 = ctx.r9.u64 | 44536;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r7,r10,20000
	ctx.r7.s64 = ctx.r10.s64 + 20000;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821e6cdc
	if (ctx.cr6.lt) goto loc_821E6CDC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821e6d60
	goto loc_821E6D60;
loc_821E6CDC:
	// lfs f13,232(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,236(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,24820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24820);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x821e6d5c
	if (!ctx.cr6.lt) goto loc_821E6D5C;
	// fsqrts f12,f0
	ctx.f12.f64 = double(float(sqrt(ctx.f0.f64)));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5808(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f31,f11,f13
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x822d4ac8
	ctx.lr = 0x821E6D38;
	sub_822D4AC8(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f9,40(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,44(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// b 0x821e6d60
	goto loc_821E6D60;
loc_821E6D5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E6D60:
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

PPC_WEAK_FUNC(sub_821E6C50) {
	__imp__sub_821E6C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E6D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821e6c50
	ctx.lr = 0x821E6D90;
	sub_821E6C50(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r11,r11,9624
	ctx.r11.s64 = ctx.r11.s64 + 9624;
	// bne cr6,0x821e6db4
	if (!ctx.cr6.eq) goto loc_821E6DB4;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r7,r9,44536
	ctx.r7.u64 = ctx.r9.u64 | 44536;
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
loc_821E6DB4:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// ori r8,r10,44540
	ctx.r8.u64 = ctx.r10.u64 | 44540;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r3,268(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6eb4
	if (ctx.cr6.eq) goto loc_821E6EB4;
	// lhz r11,4824(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4824);
	// addi r29,r3,4824
	ctx.r29.s64 = ctx.r3.s64 + 4824;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e6eb4
	if (!ctx.cr6.eq) goto loc_821E6EB4;
	// lwz r11,4776(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e6eb4
	if (!ctx.cr6.eq) goto loc_821E6EB4;
	// lwz r11,3528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3528);
	// rlwinm r10,r11,0,6,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e6eb4
	if (ctx.cr6.eq) goto loc_821E6EB4;
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
	// beq cr6,0x821e6eb4
	if (ctx.cr6.eq) goto loc_821E6EB4;
	// bl 0x821ac230
	ctx.lr = 0x821E6E1C;
	sub_821AC230(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e6e50
	if (ctx.cr6.eq) goto loc_821E6E50;
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// addi r3,r31,232
	ctx.r3.s64 = ctx.r31.s64 + 232;
	// addi r4,r11,20
	ctx.r4.s64 = ctx.r11.s64 + 20;
	// bl 0x822d4918
	ctx.lr = 0x821E6E34;
	sub_822D4918(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821e6eb4
	if (!ctx.cr6.lt) goto loc_821E6EB4;
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// bl 0x822401c8
	ctx.lr = 0x821E6E50;
	sub_822401C8(ctx, base);
loc_821E6E50:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,272(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,272(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
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
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
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
	// bne cr6,0x821e6eb4
	if (!ctx.cr6.eq) goto loc_821E6EB4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821e2e18
	ctx.lr = 0x821E6EB4;
	sub_821E2E18(ctx, base);
loc_821E6EB4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E6D78) {
	__imp__sub_821E6D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E6EBC) {
	__imp__sub_821E6EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E6EC0) {
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
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r3,13380(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13380);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e7024
	if (!ctx.cr6.eq) goto loc_821E7024;
	// lis r11,-32021
	ctx.r11.s64 = -2098528256;
	// lwz r11,-19084(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19084);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6f10
	if (ctx.cr6.eq) goto loc_821E6F10;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// lwz r11,5548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5548);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x821e7024
	if (ctx.cr6.lt) goto loc_821E7024;
loc_821E6F10:
	// lis r11,-31822
	ctx.r11.s64 = -2085486592;
	// lwz r11,-376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -376);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7024
	if (!ctx.cr6.eq) goto loc_821E7024;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822e1f80
	ctx.lr = 0x821E6F2C;
	sub_822E1F80(ctx, base);
	// lis r30,-32024
	ctx.r30.s64 = -2098724864;
	// lwz r31,5556(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5556);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// bl 0x82310110
	ctx.lr = 0x821E6F3C;
	sub_82310110(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r8,r11,9624
	ctx.r8.s64 = ctx.r11.s64 + 9624;
	// add r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r3,r9,-21480
	ctx.r3.s64 = ctx.r9.s64 + -21480;
	// stw r11,2656(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2656, ctx.r11.u32);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822e84f0
	ctx.lr = 0x821E6F60;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821E6F6C;
	sub_8233CAE8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r4,r7,-25816
	ctx.r4.s64 = ctx.r7.s64 + -25816;
	// bl 0x8233cae8
	ctx.lr = 0x821E6F7C;
	sub_8233CAE8(ctx, base);
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lwz r11,5556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5556);
	// lis r4,-32254
	ctx.r4.s64 = -2113798144;
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r3,r4,-21512
	ctx.r3.s64 = ctx.r4.s64 + -21512;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfd f1,-21488(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r5.u32 + -21488);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822e84f0
	ctx.lr = 0x821E6FA8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821E6FB4;
	sub_8233CAE8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,5556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5556);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r3,r8,-21552
	ctx.r3.s64 = ctx.r8.s64 + -21552;
	// lfd f2,-21520(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r10.u32 + -21520);
	// lfd f1,-21528(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + -21528);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x821E6FE8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821E6FF4;
	sub_8233CAE8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r3,r7,-29452
	ctx.r3.s64 = ctx.r7.s64 + -29452;
	// bl 0x822e0220
	ctx.lr = 0x821E7000;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7024
	if (ctx.cr6.eq) goto loc_821E7024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,12(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r11,-21572
	ctx.r3.s64 = ctx.r11.s64 + -21572;
	// bl 0x822e84f0
	ctx.lr = 0x821E7018;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x8233cae8
	ctx.lr = 0x821E7024;
	sub_8233CAE8(ctx, base);
loc_821E7024:
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

PPC_WEAK_FUNC(sub_821E6EC0) {
	__imp__sub_821E6EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E703C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E703C) {
	__imp__sub_821E703C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821E7048;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// ori r5,r10,45016
	ctx.r5.u64 = ctx.r10.u64 | 45016;
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// mullw r10,r3,r5
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// lwz r11,9624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9624);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x823de090
	ctx.lr = 0x821E7084;
	sub_823DE090(ctx, base);
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r8,-5864
	ctx.r7.s64 = ctx.r8.s64 + -5864;
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addis r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 524288;
	// rlwinm r10,r6,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,10620
	ctx.r11.s64 = ctx.r11.s64 + 10620;
	// li r5,384
	ctx.r5.s64 = 384;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r27,356(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 356);
	// bl 0x823de090
	ctx.lr = 0x821E70B8;
	sub_823DE090(ctx, base);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r27,356(r29)
	PPC_STORE_U32(ctx.r29.u32 + 356, ctx.r27.u32);
	// ori r3,r5,44196
	ctx.r3.u64 = ctx.r5.u64 | 44196;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,-32032
	ctx.r8.s64 = -2099249152;
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r6,r4,44328
	ctx.r6.u64 = ctx.r4.u64 | 44328;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// ori r5,r10,44332
	ctx.r5.u64 = ctx.r10.u64 | 44332;
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// ori r4,r9,44336
	ctx.r4.u64 = ctx.r9.u64 | 44336;
	// lwz r10,-5900(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -5900);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stfsx f0,r31,r5
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, temp.u32);
	// stfs f0,468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// stwx r11,r31,r4
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// stwx r10,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r10.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// bl 0x82133078
	ctx.lr = 0x821E7120;
	sub_82133078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r3,r3,-21196
	ctx.r3.s64 = ctx.r3.s64 + -21196;
	// bl 0x822e7e98
	ctx.lr = 0x821E7134;
	sub_822E7E98(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222f1e0
	ctx.lr = 0x821E713C;
	sub_8222F1E0(ctx, base);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r31,264(r28)
	PPC_STORE_U32(ctx.r28.u32 + 264, ctx.r31.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,291(r28)
	PPC_STORE_U8(ctx.r28.u32 + 291, ctx.r9.u8);
	// bl 0x82240a90
	ctx.lr = 0x821E7150;
	sub_82240A90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e716c
	if (!ctx.cr6.eq) goto loc_821E716C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-21464
	ctx.r4.s64 = ctx.r11.s64 + -21464;
	// bl 0x822830e8
	ctx.lr = 0x821E716C;
	sub_822830E8(ctx, base);
loc_821E716C:
	// stw r31,272(r28)
	PPC_STORE_U32(ctx.r28.u32 + 272, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822408e8
	ctx.lr = 0x821E7180;
	sub_822408E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7040) {
	__imp__sub_821E7040(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E718C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E718C) {
	__imp__sub_821E718C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821E7198;
	__savegprlr_25(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,264(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e6750
	ctx.lr = 0x821E71B0;
	sub_821E6750(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,-21340
	ctx.r29.s64 = ctx.r29.s64 + -21340;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,176
	ctx.r5.s64 = 176;
	// rlwinm r28,r10,0,30,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// bl 0x823de1f0
	ctx.lr = 0x821E71D4;
	sub_823DE1F0(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r26,260(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// ori r27,r9,45016
	ctx.r27.u64 = ctx.r9.u64 | 45016;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x823de090
	ctx.lr = 0x821E71F0;
	sub_823DE090(ctx, base);
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addi r25,r25,-21064
	ctx.r25.s64 = ctx.r25.s64 + -21064;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82232fb0
	ctx.lr = 0x821E7200;
	sub_82232FB0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82232fd8
	ctx.lr = 0x821E7208;
	sub_82232FD8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,176
	ctx.r5.s64 = 176;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821E7218;
	sub_823DE1F0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lis r7,-32052
	ctx.r7.s64 = -2100559872;
	// stw r26,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r26.u32);
	// ori r6,r8,44328
	ctx.r6.u64 = ctx.r8.u64 | 44328;
	// stw r28,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r28.u32);
	// addi r5,r7,26552
	ctx.r5.s64 = ctx.r7.s64 + 26552;
	// lis r4,0
	ctx.r4.s64 = 0;
	// subf r3,r5,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r5.s64;
	// ori r11,r4,44640
	ctx.r11.u64 = ctx.r4.u64 | 44640;
	// li r10,624
	ctx.r10.s64 = 624;
	// li r28,2047
	ctx.r28.s64 = 2047;
	// divw r26,r3,r10
	ctx.r26.s32 = ctx.r3.s32 / ctx.r10.s32;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
	// stwx r28,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// stw r26,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r26.u32);
	// addi r3,r30,292
	ctx.r3.s64 = ctx.r30.s64 + 292;
	// stw r28,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r28.u32);
	// addi r29,r9,-25976
	ctx.r29.s64 = ctx.r9.s64 + -25976;
	// lwzx r8,r31,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stw r8,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r8.u32);
	// sth r28,130(r30)
	PPC_STORE_U16(ctx.r30.u32 + 130, ctx.r28.u16);
	// stb r25,289(r30)
	PPC_STORE_U8(ctx.r30.u32 + 289, ctx.r25.u8);
	// lhz r4,130(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 130);
	// bl 0x822a24e0
	ctx.lr = 0x821E7280;
	sub_822A24E0(ctx, base);
	// addi r3,r30,294
	ctx.r3.s64 = ctx.r30.s64 + 294;
	// lhz r4,130(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 130);
	// bl 0x822a24e0
	ctx.lr = 0x821E728C;
	sub_822A24E0(ctx, base);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r6,641
	ctx.r6.s64 = 42008576;
	// addi r10,r7,-27184
	ctx.r10.s64 = ctx.r7.s64 + -27184;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// ori r4,r6,49169
	ctx.r4.u64 = ctx.r6.u64 | 49169;
	// li r3,3072
	ctx.r3.s64 = 3072;
	// stw r5,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r5.u32);
	// stw r4,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r4.u32);
	// addi r9,r30,176
	ctx.r9.s64 = ctx.r30.s64 + 176;
	// stw r3,312(r30)
	PPC_STORE_U32(ctx.r30.u32 + 312, ctx.r3.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E72C0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821e72c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E72C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r28,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,60
	ctx.r7.s64 = 60;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r29.u32);
	// lfs f13,23112(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23112);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r7.u32);
	// lfs f12,14212(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 14212);
	ctx.f12.f64 = double(temp.f32);
	// stw r29,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r29.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stw r29,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r29.u32);
	// stfs f13,1160(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1160, temp.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stfs f12,1164(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1164, temp.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r10,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821E732C;
	sub_8222FB90(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lis r6,-32020
	ctx.r6.s64 = -2098462720;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 + 28;
	// stfs f13,32(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r4,-21336
	ctx.r4.s64 = ctx.r4.s64 + -21336;
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// addi r28,r6,9624
	ctx.r28.s64 = ctx.r6.s64 + 9624;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r3,r5,1024
	ctx.r3.u64 = ctx.r5.u64 | 1024;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,9624(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 9624);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r3,r11,r27
	ctx.r3.s32 = ctx.r11.s32 / ctx.r27.s32;
	// bl 0x8233cec8
	ctx.lr = 0x821E7374;
	sub_8233CEC8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e6960
	ctx.lr = 0x821E7380;
	sub_821E6960(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82340d30
	ctx.lr = 0x821E7388;
	sub_82340D30(ctx, base);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r6,r9,44573
	ctx.r6.u64 = ctx.r9.u64 | 44573;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r10,44384
	ctx.r7.u64 = ctx.r10.u64 | 44384;
	// lfs f0,12168(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r5,0
	ctx.r5.s64 = 0;
	// stbx r25,r31,r6
	PPC_STORE_U8(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u8);
	// ori r6,r10,44608
	ctx.r6.u64 = ctx.r10.u64 | 44608;
	// ori r10,r5,44612
	ctx.r10.u64 = ctx.r5.u64 | 44612;
	// ori r4,r8,44584
	ctx.r4.u64 = ctx.r8.u64 | 44584;
	// stwx r29,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r29.u32);
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 65536;
	// li r3,100
	ctx.r3.s64 = 100;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r8,-20944
	ctx.r8.s64 = ctx.r8.s64 + -20944;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r7,r7,-20936
	ctx.r7.s64 = ctx.r7.s64 + -20936;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
	// stw r5,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r5.u32);
	// stw r25,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r25.u32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stwx r29,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// stwx r29,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r4,r11,-200
	ctx.r4.s64 = ctx.r11.s64 + -200;
	// stw r4,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
	// bl 0x821e4508
	ctx.lr = 0x821E7424;
	sub_821E4508(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823224f0
	ctx.lr = 0x821E7438;
	sub_823224F0(ctx, base);
	// lfs f11,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,232(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 232, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f10,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,236(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 236, temp.u32);
	// lfs f9,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,240(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 240, temp.u32);
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// lfs f8,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f7,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f6,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82340d30
	ctx.lr = 0x821E7474;
	sub_82340D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e4728
	ctx.lr = 0x821E747C;
	sub_821E4728(ctx, base);
	// stw r29,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823224f0
	ctx.lr = 0x821E7494;
	sub_823224F0(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7190) {
	__imp__sub_821E7190(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E749C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E749C) {
	__imp__sub_821E749C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E74A0) {
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
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lhz r8,256(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lis r7,-32052
	ctx.r7.s64 = -2100559872;
	// mulli r8,r8,624
	ctx.r8.s64 = ctx.r8.s64 * 624;
	// addi r11,r7,26552
	ctx.r11.s64 = ctx.r7.s64 + 26552;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// ori r8,r3,34463
	ctx.r8.u64 = ctx.r3.u64 | 34463;
	// addi r3,r11,-624
	ctx.r3.s64 = ctx.r11.s64 + -624;
	// stw r8,332(r30)
	PPC_STORE_U32(ctx.r30.u32 + 332, ctx.r8.u32);
	// lbz r7,-335(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -335);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821e7520
	if (ctx.cr6.eq) goto loc_821E7520;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x821f1080
	ctx.lr = 0x821E7520;
	sub_821F1080(ctx, base);
loc_821E7520:
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

PPC_WEAK_FUNC(sub_821E74A0) {
	__imp__sub_821E74A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7538) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r6,r3,232
	ctx.r6.s64 = ctx.r3.s64 + 232;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// b 0x821e74a0
	sub_821E74A0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7538) {
	__imp__sub_821E7538(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E7560;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,264(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// bl 0x821e6bc0
	ctx.lr = 0x821E7574;
	sub_821E6BC0(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// ori r30,r11,44440
	ctx.r30.u64 = ctx.r11.u64 | 44440;
	// lwzx r31,r10,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821e75fc
	if (!ctx.cr6.eq) goto loc_821E75FC;
	// bl 0x8222f3a8
	ctx.lr = 0x821E7590;
	sub_8222F3A8(ctx, base);
	// lwz r11,264(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,8320
	ctx.r8.s64 = 8320;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r7,264(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6016(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6016);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r31,r7,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// stfs f13,192(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// stfs f13,196(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f13,200(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// bl 0x821e2e18
	ctx.lr = 0x821E75E0;
	sub_821E2E18(ctx, base);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r5,18
	ctx.r5.s64 = 18;
	// ori r4,r6,34463
	ctx.r4.u64 = ctx.r6.u64 | 34463;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r5,291(r31)
	PPC_STORE_U8(ctx.r31.u32 + 291, ctx.r5.u8);
	// stw r4,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r4.u32);
	// stb r3,289(r31)
	PPC_STORE_U8(ctx.r31.u32 + 289, ctx.r3.u8);
loc_821E75FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222fb90
	ctx.lr = 0x821E7608;
	sub_8222FB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82340d30
	ctx.lr = 0x821E7610;
	sub_82340D30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7558) {
	__imp__sub_821E7558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7618) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r31,r11,44440
	ctx.r31.u64 = ctx.r11.u64 | 44440;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e7658
	if (ctx.cr6.eq) goto loc_821E7658;
	// bl 0x8222f680
	ctx.lr = 0x821E764C;
	sub_8222F680(ctx, base);
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
loc_821E7658:
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

PPC_WEAK_FUNC(sub_821E7618) {
	__imp__sub_821E7618(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7670) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// ori r8,r10,45016
	ctx.r8.u64 = ctx.r10.u64 | 45016;
	// lis r9,0
	ctx.r9.s64 = 0;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwz r11,9624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 9624);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r9,44196
	ctx.r7.u64 = ctx.r9.u64 | 44196;
	// lis r4,-32052
	ctx.r4.s64 = -2100559872;
	// li r5,2
	ctx.r5.s64 = 2;
	// mulli r10,r3,624
	ctx.r10.s64 = ctx.r3.s64 * 624;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// addi r11,r4,26552
	ctx.r11.s64 = ctx.r4.s64 + 26552;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821e7190
	sub_821E7190(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7670) {
	__imp__sub_821E7670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E76AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E76AC) {
	__imp__sub_821E76AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E76B0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-21196
	ctx.r3.s64 = ctx.r3.s64 + -21196;
	// b 0x822aced0
	sub_822ACED0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E76B0) {
	__imp__sub_821E76B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E76BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E76BC) {
	__imp__sub_821E76BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E76C0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,-21136
	ctx.r3.s64 = ctx.r11.s64 + -21136;
	// bl 0x822e84f0
	ctx.lr = 0x821E76DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821E76E0;
	sub_822AD350(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821E76C0) {
	__imp__sub_821E76C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E76F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E76F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r11,-21296
	ctx.r30.s64 = ctx.r11.s64 + -21296;
	// lwz r4,-21296(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21296);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821e773c
	if (ctx.cr6.eq) goto loc_821E773C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,20
	ctx.r29.s64 = 20;
loc_821E7718:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r10,24576
	ctx.r5.u64 = ctx.r10.u64 | 24576;
	// bl 0x822a8a78
	ctx.lr = 0x821E772C;
	sub_822A8A78(ctx, base);
	// lwzu r4,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821e7718
	if (!ctx.cr6.eq) goto loc_821E7718;
loc_821E773C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E76F0) {
	__imp__sub_821E76F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E7744) {
	__imp__sub_821E7744(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7748) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-21296
	ctx.r10.s64 = ctx.r10.s64 + -21296;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7774
	if (ctx.cr6.eq) goto loc_821E7774;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821E7774:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222aa38
	sub_8222AA38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7748) {
	__imp__sub_821E7748(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7780) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-21296
	ctx.r10.s64 = ctx.r10.s64 + -21296;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e77ac
	if (ctx.cr6.eq) goto loc_821E77AC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821E77AC:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7780) {
	__imp__sub_821E7780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E77B8) {
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
	// bl 0x82332af8
	ctx.lr = 0x821E77D4;
	sub_82332AF8(ctx, base);
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r31,848
	ctx.r11.s64 = ctx.r31.s64 + 848;
loc_821E77E0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x821e7814
	if (ctx.cr6.eq) goto loc_821E7814;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x821e77e0
	if (ctx.cr6.lt) goto loc_821E77E0;
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
loc_821E7814:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
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

PPC_WEAK_FUNC(sub_821E77B8) {
	__imp__sub_821E77B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E7834) {
	__imp__sub_821E7834(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7838) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821E7858;
	sub_822ACB68(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x821e78a0
	if (!ctx.cr6.gt) goto loc_821E78A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b20b8
	ctx.lr = 0x821E7868;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 140);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821e7884
	if (!ctx.cr6.eq) goto loc_821E7884;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e78a4
	goto loc_821E78A4;
loc_821E7884:
	// lhz r11,112(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 112);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x821e78a4
	if (ctx.cr6.eq) goto loc_821E78A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r11,-17904
	ctx.r4.s64 = ctx.r11.s64 + -17904;
	// bl 0x822ad4e0
	ctx.lr = 0x821E78A0;
	sub_822AD4E0(ctx, base);
loc_821E78A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821E78A4:
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

PPC_WEAK_FUNC(sub_821E7838) {
	__imp__sub_821E7838(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E78BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E78BC) {
	__imp__sub_821E78BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E78C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821E78C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,264(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da730
	ctx.lr = 0x821E78E0;
	sub_820DA730(ctx, base);
	// addi r23,r28,544
	ctx.r23.s64 = ctx.r28.s64 + 544;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r25,15
	ctx.r25.s64 = 15;
loc_821E78F0:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821e796c
	if (ctx.cr6.eq) goto loc_821E796C;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x821e796c
	if (ctx.cr6.eq) goto loc_821E796C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E790C;
	sub_82332AF8(ctx, base);
	// lwz r11,528(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 528);
	// lwz r10,528(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821e796c
	if (!ctx.cr6.eq) goto loc_821E796C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821E7930;
	sub_820DA6B8(ctx, base);
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r30,r3,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da648
	ctx.lr = 0x821E7944;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7968
	if (ctx.cr6.eq) goto loc_821E7968;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821E795C;
	sub_820DA6B8(ctx, base);
	// lwz r11,520(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 520);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r30,r3,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r3.s64;
loc_821E7968:
	// subf r27,r30,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r30.s64;
loc_821E796C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x821e78f0
	if (!ctx.cr0.eq) goto loc_821E78F0;
	// rlwinm r11,r27,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// and r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 & ctx.r27.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821E7994;
	sub_820DA6B8(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821e7a38
	if (ctx.cr6.eq) goto loc_821E7A38;
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5944(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5944);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e79c4
	if (ctx.cr6.eq) goto loc_821E79C4;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e79c4
	if (ctx.cr6.eq) goto loc_821E79C4;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821e7a00
	goto loc_821E7A00;
loc_821E79C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_821E79CC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821e79f8
	if (ctx.cr6.eq) goto loc_821E79F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821e79cc
	if (ctx.cr6.lt) goto loc_821E79CC;
	// lwz r11,520(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 520);
	// subf r3,r31,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_821E79F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821e7a38
	if (ctx.cr6.lt) goto loc_821E7A38;
loc_821E7A00:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,604
	ctx.r11.s64 = ctx.r11.s64 + 604;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7a38
	if (ctx.cr6.eq) goto loc_821E7A38;
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e7a38
	if (ctx.cr6.eq) goto loc_821E7A38;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x821E7A34;
	sub_820DA6B8(ctx, base);
	// add r31,r3,r31
	ctx.r31.u64 = ctx.r3.u64 + ctx.r31.u64;
loc_821E7A38:
	// lwz r11,520(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 520);
	// subf r3,r31,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E78C0) {
	__imp__sub_821E78C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7A48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821E7A50;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82332c40
	ctx.lr = 0x821E7A6C;
	sub_82332C40(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E7A78;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332b10
	ctx.lr = 0x821E7A84;
	sub_82332B10(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lis r23,-32032
	ctx.r23.s64 = -2099249152;
	// addi r22,r11,-17864
	ctx.r22.s64 = ctx.r11.s64 + -17864;
loc_821E7A94:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e78c0
	ctx.lr = 0x821E7AA4;
	sub_821E78C0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e7acc
	if (!ctx.cr6.gt) goto loc_821E7ACC;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f6e78
	ctx.lr = 0x821E7AC8;
	sub_821F6E78(ctx, base);
	// b 0x821e7ae0
	goto loc_821E7AE0;
loc_821E7ACC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x821e7ae0
	if (!ctx.cr6.eq) goto loc_821E7AE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x821f6d78
	ctx.lr = 0x821E7AE0;
	sub_821F6D78(ctx, base);
loc_821E7AE0:
	// lwz r31,64(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E7AEC;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b10
	ctx.lr = 0x821E7AF8;
	sub_82332B10(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bne 0x821e7b2c
	if (!ctx.cr0.eq) goto loc_821E7B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332b28
	ctx.lr = 0x821E7B0C;
	sub_82332B28(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82332b28
	ctx.lr = 0x821E7B18;
	sub_82332B28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// bl 0x822830e8
	ctx.lr = 0x821E7B2C;
	sub_822830E8(ctx, base);
loc_821E7B2C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821e7ba8
	if (ctx.cr6.eq) goto loc_821E7BA8;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// beq cr6,0x821e7ba8
	if (ctx.cr6.eq) goto loc_821E7BA8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821e7ba8
	if (ctx.cr6.lt) goto loc_821E7BA8;
	// lwz r11,-5944(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -5944);
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e7b60
	if (ctx.cr6.eq) goto loc_821E7B60;
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e7a94
	if (!ctx.cr6.eq) goto loc_821E7A94;
loc_821E7B60:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r9,544
	ctx.r10.s64 = ctx.r9.s64 + 544;
loc_821E7B68:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x821e7b8c
	if (ctx.cr6.eq) goto loc_821E7B8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x821e7b68
	if (ctx.cr6.lt) goto loc_821E7B68;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821E7B8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821e7ba8
	if (ctx.cr6.lt) goto loc_821E7BA8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addic. r11,r11,604
	ctx.xer.ca = ctx.r11.u32 > 4294966691;
	ctx.r11.s64 = ctx.r11.s64 + 604;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e7a94
	if (!ctx.cr0.eq) goto loc_821E7A94;
loc_821E7BA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7A48) {
	__imp__sub_821E7A48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821E7BB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r3.u32);
	// lhz r10,182(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 182);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7c00
	if (!ctx.cr6.eq) goto loc_821E7C00;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 180);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7c10
	if (!ctx.cr6.eq) goto loc_821E7C10;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E7BF8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E7BFC;
	sub_822AD548(ctx, base);
	// b 0x821e7c10
	goto loc_821E7C10;
loc_821E7C00:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E7C0C;
	sub_822AD548(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
loc_821E7C10:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E7C18;
	sub_822B2288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E7C20;
	sub_82232100(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E7C2C;
	sub_8220F168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,264(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 264);
	// bl 0x82332af8
	ctx.lr = 0x821E7C38;
	sub_82332AF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821E7C48;
	sub_820DA5B0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821E7C50;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x821e7c88
	if (ctx.cr6.lt) goto loc_821E7C88;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821E7C60;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821e7c88
	if (ctx.cr6.lt) goto loc_821E7C88;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bge cr6,0x821e7c88
	if (!ctx.cr6.lt) goto loc_821E7C88;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7c8c
	if (!ctx.cr6.eq) goto loc_821E7C8C;
loc_821E7C88:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E7C8C:
	// lbz r11,1643(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1643);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e7cb8
	if (!ctx.cr6.eq) goto loc_821E7CB8;
	// bl 0x822acb68
	ctx.lr = 0x821E7C9C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x821e7cb8
	if (ctx.cr6.lt) goto loc_821E7CB8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1c50
	ctx.lr = 0x821E7CAC;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// bne cr6,0x821e7cbc
	if (!ctx.cr6.eq) goto loc_821E7CBC;
loc_821E7CB8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821E7CBC:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821e7cf4
	if (!ctx.cr6.eq) goto loc_821E7CF4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8231f570
	ctx.lr = 0x821E7CD4;
	sub_8231F570(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e7cf4
	if (!ctx.cr6.eq) goto loc_821E7CF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-17632
	ctx.r4.s64 = ctx.r11.s64 + -17632;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82280c30
	ctx.lr = 0x821E7CF4;
	sub_82280C30(ctx, base);
loc_821E7CF4:
	// lwz r11,56(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e7d14
	if (!ctx.cr6.eq) goto loc_821E7D14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-17684
	ctx.r3.s64 = ctx.r11.s64 + -17684;
	// bl 0x822e84f0
	ctx.lr = 0x821E7D10;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821E7D14;
	sub_822AD350(ctx, base);
loc_821E7D14:
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822327b0
	ctx.lr = 0x821E7D2C;
	sub_822327B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e7d50
	if (ctx.cr6.eq) goto loc_821E7D50;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821e7a48
	ctx.lr = 0x821E7D48;
	sub_821E7A48(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_821E7D50:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r11,-17748
	ctx.r3.s64 = ctx.r11.s64 + -17748;
	// bl 0x822e84f0
	ctx.lr = 0x821E7D60;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821E7D6C;
	sub_822AD4E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7BB0) {
	__imp__sub_821E7BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E7D74) {
	__imp__sub_821E7D74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E7D80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7dc8
	if (!ctx.cr6.eq) goto loc_821E7DC8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7dd8
	if (!ctx.cr6.eq) goto loc_821E7DD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E7DC0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E7DC4;
	sub_822AD548(ctx, base);
	// b 0x821e7dd8
	goto loc_821E7DD8;
loc_821E7DC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E7DD4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E7DD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E7DE0;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E7DE8;
	sub_82232100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E7DF4;
	sub_8220F168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82232598
	ctx.lr = 0x821E7E00;
	sub_82232598(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7D78) {
	__imp__sub_821E7D78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7E08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E7E10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7e58
	if (!ctx.cr6.eq) goto loc_821E7E58;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7e68
	if (!ctx.cr6.eq) goto loc_821E7E68;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E7E50;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E7E54;
	sub_822AD548(ctx, base);
	// b 0x821e7e68
	goto loc_821E7E68;
loc_821E7E58:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E7E64;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E7E68:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r29,544
	ctx.r29.s64 = 544;
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
loc_821E7E78:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e7ea8
	if (ctx.cr6.eq) goto loc_821E7EA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E7E90;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821e7ea8
	if (ctx.cr6.eq) goto loc_821E7EA8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x82232598
	ctx.lr = 0x821E7EA8;
	sub_82232598(ctx, base);
loc_821E7EA8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,604
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 604, ctx.xer);
	// blt cr6,0x821e7e78
	if (ctx.cr6.lt) goto loc_821E7E78;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7E08) {
	__imp__sub_821E7E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E7EBC) {
	__imp__sub_821E7EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7EC0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7f14
	if (!ctx.cr6.eq) goto loc_821E7F14;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7f24
	if (!ctx.cr6.eq) goto loc_821E7F24;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E7F0C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E7F10;
	sub_822AD548(ctx, base);
	// b 0x821e7f24
	goto loc_821E7F24;
loc_821E7F14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E7F20;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E7F24:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,692(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 692);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e7f3c
	if (!ctx.cr6.gt) goto loc_821E7F3C;
loc_821E7F34:
	// bl 0x82332b28
	ctx.lr = 0x821E7F38;
	sub_82332B28(ctx, base);
	// b 0x821e7f68
	goto loc_821E7F68;
loc_821E7F3C:
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e7f60
	if (ctx.cr6.eq) goto loc_821E7F60;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,44220
	ctx.r9.u64 = ctx.r10.u64 | 44220;
	// lhzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e7f34
	if (!ctx.cr6.eq) goto loc_821E7F34;
loc_821E7F60:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
loc_821E7F68:
	// bl 0x822aced0
	ctx.lr = 0x821E7F6C;
	sub_822ACED0(ctx, base);
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

PPC_WEAK_FUNC(sub_821E7EC0) {
	__imp__sub_821E7EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E7F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E7F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e7fd0
	if (!ctx.cr6.eq) goto loc_821E7FD0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e7fe0
	if (!ctx.cr6.eq) goto loc_821E7FE0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E7FC8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E7FCC;
	sub_822AD548(ctx, base);
	// b 0x821e7fe0
	goto loc_821E7FE0;
loc_821E7FD0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E7FDC;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E7FE0:
	// lwz r31,264(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lwz r29,692(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x821e802c
	if (!ctx.cr6.gt) goto loc_821E802C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E7FF8;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e8018
	if (!ctx.cr6.eq) goto loc_821E8018;
	// lwz r3,696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 696);
	// bl 0x82332b28
	ctx.lr = 0x821E800C;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E8010;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8018:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332b28
	ctx.lr = 0x821E8020;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E8024;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E802C:
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e8098
	if (ctx.cr6.eq) goto loc_821E8098;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,44220
	ctx.r29.u64 = ctx.r11.u64 | 44220;
	// lhzx r3,r31,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e8098
	if (ctx.cr6.eq) goto loc_821E8098;
	// bl 0x82332af8
	ctx.lr = 0x821E8054;
	sub_82332AF8(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821e8080
	if (!ctx.cr6.eq) goto loc_821E8080;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// ori r9,r11,44222
	ctx.r9.u64 = ctx.r11.u64 | 44222;
	// lhzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x82332b28
	ctx.lr = 0x821E8074;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E8078;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8080:
	// lwz r11,264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// lhzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x82332b28
	ctx.lr = 0x821E808C;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x821E8090;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8098:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
	// bl 0x822aced0
	ctx.lr = 0x821E80A4;
	sub_822ACED0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E7F80) {
	__imp__sub_821E7F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E80AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E80AC) {
	__imp__sub_821E80AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E80B0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8104
	if (!ctx.cr6.eq) goto loc_821E8104;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8114
	if (!ctx.cr6.eq) goto loc_821E8114;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E80FC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8100;
	sub_822AD548(ctx, base);
	// b 0x821e8114
	goto loc_821E8114;
loc_821E8104:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8110;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8114:
	// lwz r31,264(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821e813c
	if (!ctx.cr6.gt) goto loc_821E813C;
	// bl 0x821e7838
	ctx.lr = 0x821E812C;
	sub_821E7838(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,692(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 692);
	// bl 0x820da6b8
	ctx.lr = 0x821E813C;
	sub_820DA6B8(ctx, base);
loc_821E813C:
	// bl 0x822acbf8
	ctx.lr = 0x821E8140;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E80B0) {
	__imp__sub_821E80B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E8154) {
	__imp__sub_821E8154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8158) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e81ac
	if (!ctx.cr6.eq) goto loc_821E81AC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e81bc
	if (!ctx.cr6.eq) goto loc_821E81BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E81A4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E81A8;
	sub_822AD548(ctx, base);
	// b 0x821e81bc
	goto loc_821E81BC;
loc_821E81AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E81B8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E81BC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,680(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 680);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x821e81d4
	if (!ctx.cr6.gt) goto loc_821E81D4;
	// bl 0x82332b28
	ctx.lr = 0x821E81D0;
	sub_82332B28(ctx, base);
	// b 0x821e81dc
	goto loc_821E81DC;
loc_821E81D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
loc_821E81DC:
	// bl 0x822aced0
	ctx.lr = 0x821E81E0;
	sub_822ACED0(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8158) {
	__imp__sub_821E8158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E81F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E81F4) {
	__imp__sub_821E81F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E81F8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e824c
	if (!ctx.cr6.eq) goto loc_821E824C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e825c
	if (!ctx.cr6.eq) goto loc_821E825C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8244;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8248;
	sub_822AD548(ctx, base);
	// b 0x821e825c
	goto loc_821E825C;
loc_821E824C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8258;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E825C:
	// bl 0x822acb68
	ctx.lr = 0x821E8260;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821e8274
	if (ctx.cr6.eq) goto loc_821E8274;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// bl 0x822ad350
	ctx.lr = 0x821E8274;
	sub_822AD350(ctx, base);
loc_821E8274:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821E827C;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7664
	ctx.r11.s64 = ctx.r11.s64 + 7664;
loc_821E8288:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e82c8
	if (ctx.cr6.eq) goto loc_821E82C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x821e8288
	if (ctx.cr6.lt) goto loc_821E8288;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17448
	ctx.r3.s64 = ctx.r11.s64 + -17448;
	// bl 0x822ad350
	ctx.lr = 0x821E82B4;
	sub_822AD350(ctx, base);
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
loc_821E82C8:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821E81F8) {
	__imp__sub_821E81F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E82E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E82E4) {
	__imp__sub_821E82E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E82E8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e833c
	if (!ctx.cr6.eq) goto loc_821E833C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e834c
	if (!ctx.cr6.eq) goto loc_821E834C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8334;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8338;
	sub_822AD548(ctx, base);
	// b 0x821e834c
	goto loc_821E834C;
loc_821E833C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8348;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E834C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7664
	ctx.r9.s64 = ctx.r10.s64 + 7664;
	// lwz r8,684(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 684);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821E836C;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_821E82E8) {
	__imp__sub_821E82E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8380) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e83d4
	if (!ctx.cr6.eq) goto loc_821E83D4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e83e4
	if (!ctx.cr6.eq) goto loc_821E83E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E83CC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E83D0;
	sub_822AD548(ctx, base);
	// b 0x821e83e4
	goto loc_821E83E4;
loc_821E83D4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E83E0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E83E4:
	// bl 0x822acb68
	ctx.lr = 0x821E83E8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821e83fc
	if (ctx.cr6.eq) goto loc_821E83FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17348
	ctx.r3.s64 = ctx.r11.s64 + -17348;
	// bl 0x822ad350
	ctx.lr = 0x821E83FC;
	sub_822AD350(ctx, base);
loc_821E83FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821E8404;
	sub_822B20B8(ctx, base);
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7664
	ctx.r11.s64 = ctx.r11.s64 + 7664;
loc_821E8410:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e8450
	if (ctx.cr6.eq) goto loc_821E8450;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x821e8410
	if (ctx.cr6.lt) goto loc_821E8410;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17312
	ctx.r3.s64 = ctx.r11.s64 + -17312;
	// bl 0x822ad350
	ctx.lr = 0x821E843C;
	sub_822AD350(ctx, base);
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
loc_821E8450:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 688, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821E8380) {
	__imp__sub_821E8380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E846C) {
	__imp__sub_821E846C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8470) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e84c4
	if (!ctx.cr6.eq) goto loc_821E84C4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e84d4
	if (!ctx.cr6.eq) goto loc_821E84D4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E84BC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E84C0;
	sub_822AD548(ctx, base);
	// b 0x821e84d4
	goto loc_821E84D4;
loc_821E84C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E84D0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E84D4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r10,-32191
	ctx.r10.s64 = -2109669376;
	// addi r9,r10,7664
	ctx.r9.s64 = ctx.r10.s64 + 7664;
	// lwz r8,688(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 688);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lhz r3,0(r6)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// bl 0x822acff0
	ctx.lr = 0x821E84F4;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8470) {
	__imp__sub_821E8470(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E8510;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8558
	if (!ctx.cr6.eq) goto loc_821E8558;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8568
	if (!ctx.cr6.eq) goto loc_821E8568;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8550;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8554;
	sub_822AD548(ctx, base);
	// b 0x821e8568
	goto loc_821E8568;
loc_821E8558:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8564;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8568:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E8570;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82332b40
	ctx.lr = 0x821E8578;
	sub_82332B40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E8584;
	sub_8220F168(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821e85a4
	if (ctx.cr6.eq) goto loc_821E85A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da5b0
	ctx.lr = 0x821E8598;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e85a8
	if (!ctx.cr6.eq) goto loc_821E85A8;
loc_821E85A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E85A8:
	// bl 0x822acb78
	ctx.lr = 0x821E85AC;
	sub_822ACB78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E8508) {
	__imp__sub_821E8508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E85B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E85B4) {
	__imp__sub_821E85B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E85B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E85C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822b2288
	ctx.lr = 0x821E85D4;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E85DC;
	sub_82232100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E85E8;
	sub_8220F168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da5b0
	ctx.lr = 0x821E85F4;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8640
	if (ctx.cr6.eq) goto loc_821E8640;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e8624
	if (ctx.cr6.eq) goto loc_821E8624;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,692(r11)
	PPC_STORE_U32(ctx.r11.u32 + 692, ctx.r10.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r9,700(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// oris r8,r9,2
	ctx.r8.u64 = ctx.r9.u64 | 131072;
	// stw r8,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r8.u32);
loc_821E8624:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r3,126(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 126);
	// bl 0x82232128
	ctx.lr = 0x821E8630;
	sub_82232128(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acb78
	ctx.lr = 0x821E8638;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E8640:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x821E8648;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E85B8) {
	__imp__sub_821E85B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8650) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e86a4
	if (!ctx.cr6.eq) goto loc_821E86A4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e86b4
	if (!ctx.cr6.eq) goto loc_821E86B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E869C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E86A0;
	sub_822AD548(ctx, base);
	// b 0x821e86b4
	goto loc_821E86B4;
loc_821E86A4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E86B0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E86B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e85b8
	ctx.lr = 0x821E86C0;
	sub_821E85B8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8650) {
	__imp__sub_821E8650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E86D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E86D4) {
	__imp__sub_821E86D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E86D8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e872c
	if (!ctx.cr6.eq) goto loc_821E872C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e873c
	if (!ctx.cr6.eq) goto loc_821E873C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8724;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8728;
	sub_822AD548(ctx, base);
	// b 0x821e873c
	goto loc_821E873C;
loc_821E872C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8738;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E873C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e85b8
	ctx.lr = 0x821E8748;
	sub_821E85B8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E86D8) {
	__imp__sub_821E86D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E875C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E875C) {
	__imp__sub_821E875C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E8768;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821e87b4
	if (!ctx.cr6.eq) goto loc_821E87B4;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e87c4
	if (!ctx.cr6.eq) goto loc_821E87C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E87AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E87B0;
	sub_822AD548(ctx, base);
	// b 0x821e87c4
	goto loc_821E87C4;
loc_821E87B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E87C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E87C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E87CC;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E87D4;
	sub_82232100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E87E0;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333598
	ctx.lr = 0x821E87E8;
	sub_82333598(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e8810
	if (!ctx.cr6.eq) goto loc_821E8810;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332b28
	ctx.lr = 0x821E87FC;
	sub_82332B28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-17208
	ctx.r3.s64 = ctx.r11.s64 + -17208;
	// bl 0x822e84f0
	ctx.lr = 0x821E880C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821E8810;
	sub_822AD350(ctx, base);
loc_821E8810:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da5b0
	ctx.lr = 0x821E881C;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8840
	if (ctx.cr6.eq) goto loc_821E8840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x82232198
	ctx.lr = 0x821E8830;
	sub_82232198(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acb78
	ctx.lr = 0x821E8838;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E8840:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acb78
	ctx.lr = 0x821E8848;
	sub_822ACB78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E8760) {
	__imp__sub_821E8760(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8850) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E8858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e88a0
	if (!ctx.cr6.eq) goto loc_821E88A0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e88b0
	if (!ctx.cr6.eq) goto loc_821E88B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8898;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E889C;
	sub_822AD548(ctx, base);
	// b 0x821e88b0
	goto loc_821E88B0;
loc_821E88A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E88AC;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E88B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E88B8;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E88C0;
	sub_82232100(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E88CC;
	sub_8220F168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r29,264(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821E88DC;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8904
	if (ctx.cr6.eq) goto loc_821E8904;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82333718
	ctx.lr = 0x821E88F0;
	sub_82333718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821e7a48
	ctx.lr = 0x821E8904;
	sub_821E7A48(ctx, base);
loc_821E8904:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E8850) {
	__imp__sub_821E8850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E890C) {
	__imp__sub_821E890C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E8918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8960
	if (!ctx.cr6.eq) goto loc_821E8960;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8970
	if (!ctx.cr6.eq) goto loc_821E8970;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8958;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E895C;
	sub_822AD548(ctx, base);
	// b 0x821e8970
	goto loc_821E8970;
loc_821E8960:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E896C;
	sub_822AD548(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821E8970:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r30,264(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	// bl 0x822b2288
	ctx.lr = 0x821E897C;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E8984;
	sub_82232100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E8990;
	sub_8220F168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821E899C;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e89f0
	if (ctx.cr6.eq) goto loc_821E89F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a58
	ctx.lr = 0x821E89B4;
	sub_82331A58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da730
	ctx.lr = 0x821E89C4;
	sub_820DA730(ctx, base);
	// subf. r28,r3,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r3.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble 0x821e89f0
	if (!ctx.cr0.gt) goto loc_821E89F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82333718
	ctx.lr = 0x821E89D8;
	sub_82333718(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x821f6e78
	ctx.lr = 0x821E89F0;
	sub_821F6E78(ctx, base);
loc_821E89F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E8910) {
	__imp__sub_821E8910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E89F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821E8A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8a48
	if (!ctx.cr6.eq) goto loc_821E8A48;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8a58
	if (!ctx.cr6.eq) goto loc_821E8A58;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8A40;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8A44;
	sub_822AD548(ctx, base);
	// b 0x821e8a58
	goto loc_821E8A58;
loc_821E8A48:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8A54;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E8A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r29,264(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x822b2288
	ctx.lr = 0x821E8A64;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E8A6C;
	sub_82232100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E8A78;
	sub_8220F168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// bl 0x820da5b0
	ctx.lr = 0x821E8A84;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8b04
	if (ctx.cr6.eq) goto loc_821E8B04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E8A94;
	sub_82332AF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820da730
	ctx.lr = 0x821E8AA4;
	sub_820DA730(ctx, base);
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821e8b04
	if (ctx.cr6.lt) goto loc_821E8B04;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bge cr6,0x821e8acc
	if (!ctx.cr6.lt) goto loc_821E8ACC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E8AC4;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E8ACC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
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
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x822acc78
	ctx.lr = 0x821E8AFC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821E8B04:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E8B10;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E89F8) {
	__imp__sub_821E89F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8B18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821E8B20;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8b68
	if (!ctx.cr6.eq) goto loc_821E8B68;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8b78
	if (!ctx.cr6.eq) goto loc_821E8B78;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8B60;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8B64;
	sub_822AD548(ctx, base);
	// b 0x821e8b78
	goto loc_821E8B78;
loc_821E8B68:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8B74;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E8B78:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E8B80;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821E8B88;
	sub_82232100(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821E8B94;
	sub_8220F168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r30,264(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da5b0
	ctx.lr = 0x821E8BA4;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e8c9c
	if (ctx.cr6.eq) goto loc_821E8C9C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821E8BB4;
	sub_82332AF8(ctx, base);
	// lbz r11,1635(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x821e8c4c
	if (ctx.cr6.eq) goto loc_821E8C4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x820da6b8
	ctx.lr = 0x821E8BD4;
	sub_820DA6B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823340b0
	ctx.lr = 0x821E8BE4;
	sub_823340B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821e8c9c
	if (ctx.cr6.lt) goto loc_821E8C9C;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x821e8c08
	if (!ctx.cr6.lt) goto loc_821E8C08;
loc_821E8BF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E8C00;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8C08:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x823340b0
	ctx.lr = 0x821E8C1C;
	sub_823340B0(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
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
	// fdivs f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// bl 0x822acc78
	ctx.lr = 0x821E8C44;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8C4C:
	// bl 0x820da730
	ctx.lr = 0x821E8C50;
	sub_820DA730(ctx, base);
	// lwz r11,540(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 540);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821e8c9c
	if (ctx.cr6.lt) goto loc_821E8C9C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x821e8bf4
	if (ctx.cr6.lt) goto loc_821E8BF4;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
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
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// bl 0x822acc78
	ctx.lr = 0x821E8C94;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821E8C9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E8CA8;
	sub_822ACC78(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821E8B18) {
	__imp__sub_821E8B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8CB0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8d04
	if (!ctx.cr6.eq) goto loc_821E8D04;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8d14
	if (!ctx.cr6.eq) goto loc_821E8D14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8CFC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8D00;
	sub_822AD548(ctx, base);
	// b 0x821e8d14
	goto loc_821E8D14;
loc_821E8D04:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8D10;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8D14:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,724(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821e8d2c
	if (ctx.cr6.eq) goto loc_821E8D2C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E8D2C:
	// bl 0x822acbf8
	ctx.lr = 0x821E8D30;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8CB0) {
	__imp__sub_821E8CB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E8D44) {
	__imp__sub_821E8D44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8D48) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8d9c
	if (!ctx.cr6.eq) goto loc_821E8D9C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8dac
	if (!ctx.cr6.eq) goto loc_821E8DAC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8D94;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8D98;
	sub_822AD548(ctx, base);
	// b 0x821e8dac
	goto loc_821E8DAC;
loc_821E8D9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8DA8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8DAC:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821e8e0c
	if (ctx.cr6.eq) goto loc_821E8E0C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x821e8e10
	if (!ctx.cr6.eq) goto loc_821E8E10;
loc_821E8E0C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E8E10:
	// bl 0x822acbf8
	ctx.lr = 0x821E8E14;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8D48) {
	__imp__sub_821E8D48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8E28) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8e7c
	if (!ctx.cr6.eq) goto loc_821E8E7C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8e8c
	if (!ctx.cr6.eq) goto loc_821E8E8C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8E74;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8E78;
	sub_822AD548(ctx, base);
	// b 0x821e8e8c
	goto loc_821E8E8C;
loc_821E8E7C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8E88;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8E8C:
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r11,504(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 504);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// lwz r11,532(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 532);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821e8eec
	if (ctx.cr6.eq) goto loc_821E8EEC;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x821e8ef0
	if (!ctx.cr6.eq) goto loc_821E8EF0;
loc_821E8EEC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E8EF0:
	// bl 0x822acbf8
	ctx.lr = 0x821E8EF4;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8E28) {
	__imp__sub_821E8E28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8F08) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8f5c
	if (!ctx.cr6.eq) goto loc_821E8F5C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8f6c
	if (!ctx.cr6.eq) goto loc_821E8F6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8F54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8F58;
	sub_822AD548(ctx, base);
	// b 0x821e8f6c
	goto loc_821E8F6C;
loc_821E8F5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8F68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8F6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E8F78;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6828
	ctx.lr = 0x821E8F84;
	sub_821E6828(ctx, base);
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

PPC_WEAK_FUNC(sub_821E8F08) {
	__imp__sub_821E8F08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E8F98) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e8fec
	if (!ctx.cr6.eq) goto loc_821E8FEC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e8ffc
	if (!ctx.cr6.eq) goto loc_821E8FFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E8FE4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E8FE8;
	sub_822AD548(ctx, base);
	// b 0x821e8ffc
	goto loc_821E8FFC;
loc_821E8FEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E8FF8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E8FFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E9008;
	sub_822B2498(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,44(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
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

PPC_WEAK_FUNC(sub_821E8F98) {
	__imp__sub_821E8F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9038) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e908c
	if (!ctx.cr6.eq) goto loc_821E908C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e909c
	if (!ctx.cr6.eq) goto loc_821E909C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9084;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9088;
	sub_822AD548(ctx, base);
	// b 0x821e909c
	goto loc_821E909C;
loc_821E908C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9098;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E909C:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821e90b4
	if (!ctx.cr6.gt) goto loc_821E90B4;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// b 0x821e90bc
	goto loc_821E90BC;
loc_821E90B4:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,-5928
	ctx.r3.s64 = ctx.r11.s64 + -5928;
loc_821E90BC:
	// bl 0x822ad078
	ctx.lr = 0x821E90C0;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9038) {
	__imp__sub_821E9038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E90D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E90D4) {
	__imp__sub_821E90D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E90D8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e912c
	if (!ctx.cr6.eq) goto loc_821E912C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e913c
	if (!ctx.cr6.eq) goto loc_821E913C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9124;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9128;
	sub_822AD548(ctx, base);
	// b 0x821e913c
	goto loc_821E913C;
loc_821E912C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9138;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E913C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x821E9148;
	sub_822B2498(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e6960
	ctx.lr = 0x821E9154;
	sub_821E6960(ctx, base);
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

PPC_WEAK_FUNC(sub_821E90D8) {
	__imp__sub_821E90D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9168) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e91bc
	if (!ctx.cr6.eq) goto loc_821E91BC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e91cc
	if (!ctx.cr6.eq) goto loc_821E91CC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E91B4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E91B8;
	sub_822AD548(ctx, base);
	// b 0x821e91cc
	goto loc_821E91CC;
loc_821E91BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E91C8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E91CC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addi r3,r11,264
	ctx.r3.s64 = ctx.r11.s64 + 264;
	// bl 0x822ad078
	ctx.lr = 0x821E91D8;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9168) {
	__imp__sub_821E9168(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E91EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E91EC) {
	__imp__sub_821E91EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E91F0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9244
	if (!ctx.cr6.eq) goto loc_821E9244;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9254
	if (!ctx.cr6.eq) goto loc_821E9254;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E923C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9240;
	sub_822AD548(ctx, base);
	// b 0x821e9254
	goto loc_821E9254;
loc_821E9244:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9250;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9254:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f1,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E9260;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_821E91F0) {
	__imp__sub_821E91F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9274) {
	__imp__sub_821E9274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9278) {
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
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e92cc
	if (!ctx.cr6.eq) goto loc_821E92CC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e92dc
	if (!ctx.cr6.eq) goto loc_821E92DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E92C4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E92C8;
	sub_822AD548(ctx, base);
	// b 0x821e92dc
	goto loc_821E92DC;
loc_821E92CC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E92D8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E92DC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r8,r11,44226
	ctx.r8.u64 = ctx.r11.u64 | 44226;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ori r5,r7,44227
	ctx.r5.u64 = ctx.r7.u64 | 44227;
	// lfs f0,17312(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17312);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// extsb r9,r4
	ctx.r9.s64 = ctx.r4.s8;
	// lfs f13,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lbzx r8,r10,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// extsb r6,r8
	ctx.r6.s64 = ctx.r8.s8;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x822ad078
	ctx.lr = 0x821E934C;
	sub_822AD078(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9278) {
	__imp__sub_821E9278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9360) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e93b4
	if (!ctx.cr6.eq) goto loc_821E93B4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e93c4
	if (!ctx.cr6.eq) goto loc_821E93C4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E93AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E93B0;
	sub_822AD548(ctx, base);
	// b 0x821e93c4
	goto loc_821E93C4;
loc_821E93B4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E93C0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E93C4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,26,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x38;
	// rlwinm r3,r3,0,28,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e93fc
	if (!ctx.cr6.eq) goto loc_821E93FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E93FC:
	// bl 0x822acbf8
	ctx.lr = 0x821E9400;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9360) {
	__imp__sub_821E9360(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9414) {
	__imp__sub_821E9414(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9418) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e946c
	if (!ctx.cr6.eq) goto loc_821E946C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e947c
	if (!ctx.cr6.eq) goto loc_821E947C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9464;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9468;
	sub_822AD548(ctx, base);
	// b 0x821e947c
	goto loc_821E947C;
loc_821E946C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9478;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E947C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e94b0
	if (!ctx.cr6.eq) goto loc_821E94B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E94B0:
	// bl 0x822acbf8
	ctx.lr = 0x821E94B4;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9418) {
	__imp__sub_821E9418(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E94C8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e951c
	if (!ctx.cr6.eq) goto loc_821E951C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e952c
	if (!ctx.cr6.eq) goto loc_821E952C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9514;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9518;
	sub_822AD548(ctx, base);
	// b 0x821e952c
	goto loc_821E952C;
loc_821E951C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9528;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E952C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e954c
	if (!ctx.cr6.eq) goto loc_821E954C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17172
	ctx.r3.s64 = ctx.r11.s64 + -17172;
	// bl 0x822ad350
	ctx.lr = 0x821E954C;
	sub_822AD350(ctx, base);
loc_821E954C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r9,r11,44229
	ctx.r9.u64 = ctx.r11.u64 | 44229;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e956c
	if (!ctx.cr6.eq) goto loc_821E956C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E956C:
	// bl 0x822acbf8
	ctx.lr = 0x821E9570;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E94C8) {
	__imp__sub_821E94C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9584) {
	__imp__sub_821E9584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9588) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e95dc
	if (!ctx.cr6.eq) goto loc_821E95DC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e95ec
	if (!ctx.cr6.eq) goto loc_821E95EC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E95D4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E95D8;
	sub_822AD548(ctx, base);
	// b 0x821e95ec
	goto loc_821E95EC;
loc_821E95DC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E95E8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E95EC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,20,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e9620
	if (!ctx.cr6.eq) goto loc_821E9620;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9620:
	// bl 0x822acbf8
	ctx.lr = 0x821E9624;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9588) {
	__imp__sub_821E9588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9638) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e968c
	if (!ctx.cr6.eq) goto loc_821E968C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e969c
	if (!ctx.cr6.eq) goto loc_821E969C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9684;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9688;
	sub_822AD548(ctx, base);
	// b 0x821e969c
	goto loc_821E969C;
loc_821E968C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9698;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E969C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,29,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e96d0
	if (!ctx.cr6.eq) goto loc_821E96D0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E96D0:
	// bl 0x822acbf8
	ctx.lr = 0x821E96D4;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9638) {
	__imp__sub_821E9638(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E96E8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e973c
	if (!ctx.cr6.eq) goto loc_821E973C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e974c
	if (!ctx.cr6.eq) goto loc_821E974C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9734;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9738;
	sub_822AD548(ctx, base);
	// b 0x821e974c
	goto loc_821E974C;
loc_821E973C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9748;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E974C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,17,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e9780
	if (!ctx.cr6.eq) goto loc_821E9780;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9780:
	// bl 0x822acbf8
	ctx.lr = 0x821E9784;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E96E8) {
	__imp__sub_821E96E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9798) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e97ec
	if (!ctx.cr6.eq) goto loc_821E97EC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e97fc
	if (!ctx.cr6.eq) goto loc_821E97FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E97E4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E97E8;
	sub_822AD548(ctx, base);
	// b 0x821e97fc
	goto loc_821E97FC;
loc_821E97EC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E97F8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E97FC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,44388
	ctx.r8.u64 = ctx.r11.u64 | 44388;
	// ori r7,r9,44376
	ctx.r7.u64 = ctx.r9.u64 | 44376;
	// lwzx r6,r10,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r10,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r3,r4,0,16,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821e9830
	if (!ctx.cr6.eq) goto loc_821E9830;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9830:
	// bl 0x822acbf8
	ctx.lr = 0x821E9834;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9798) {
	__imp__sub_821E9798(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9848) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x822ac8c0
	ctx.lr = 0x821E986C;
	sub_822AC8C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821e9890
	if (ctx.cr6.eq) goto loc_821E9890;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// mulli r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 * 624;
	// addi r10,r10,26552
	ctx.r10.s64 = ctx.r10.s64 + 26552;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82229da8
	ctx.lr = 0x821E9890;
	sub_82229DA8(ctx, base);
loc_821E9890:
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

PPC_WEAK_FUNC(sub_821E9848) {
	__imp__sub_821E9848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E98A8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e98fc
	if (!ctx.cr6.eq) goto loc_821E98FC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e990c
	if (!ctx.cr6.eq) goto loc_821E990C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E98F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E98F8;
	sub_822AD548(ctx, base);
	// b 0x821e990c
	goto loc_821E990C;
loc_821E98FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9908;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E990C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lfs f1,704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 704);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x821E9918;
	sub_822ACC78(ctx, base);
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

PPC_WEAK_FUNC(sub_821E98A8) {
	__imp__sub_821E98A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E992C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E992C) {
	__imp__sub_821E992C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9930) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9984
	if (!ctx.cr6.eq) goto loc_821E9984;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9994
	if (!ctx.cr6.eq) goto loc_821E9994;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E997C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9980;
	sub_822AD548(ctx, base);
	// b 0x821e9994
	goto loc_821E9994;
loc_821E9984:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9990;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9994:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e99bc
	if (!ctx.cr6.eq) goto loc_821E99BC;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x821e99bc
	if (!ctx.cr6.eq) goto loc_821E99BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E99BC:
	// bl 0x822acbf8
	ctx.lr = 0x821E99C0;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9930) {
	__imp__sub_821E9930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E99D4) {
	__imp__sub_821E99D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E99D8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9a2c
	if (!ctx.cr6.eq) goto loc_821E9A2C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9a3c
	if (!ctx.cr6.eq) goto loc_821E9A3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9A24;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9A28;
	sub_822AD548(ctx, base);
	// b 0x821e9a3c
	goto loc_821E9A3C;
loc_821E9A2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9A38;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9A3C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// rlwinm r9,r10,0,20,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e9a58
	if (!ctx.cr6.eq) goto loc_821E9A58;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E9A58:
	// bl 0x822acbf8
	ctx.lr = 0x821E9A5C;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E99D8) {
	__imp__sub_821E99D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9A70) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9ac8
	if (!ctx.cr6.eq) goto loc_821E9AC8;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9ad8
	if (!ctx.cr6.eq) goto loc_821E9AD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9AC0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9AC4;
	sub_822AD548(ctx, base);
	// b 0x821e9ad8
	goto loc_821E9AD8;
loc_821E9AC8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9AD4;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9AD8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821E9AE0;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9af8
	if (ctx.cr6.eq) goto loc_821E9AF8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e9b08
	if (!ctx.cr6.eq) goto loc_821E9B08;
loc_821E9AF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-17140
	ctx.r4.s64 = ctx.r11.s64 + -17140;
	// bl 0x822ad4e0
	ctx.lr = 0x821E9B08;
	sub_822AD4E0(ctx, base);
loc_821E9B08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222e230
	ctx.lr = 0x821E9B10;
	sub_8222E230(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r3,260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 260, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_821E9A70) {
	__imp__sub_821E9A70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9B30) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9b84
	if (!ctx.cr6.eq) goto loc_821E9B84;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9b94
	if (!ctx.cr6.eq) goto loc_821E9B94;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9B7C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9B80;
	sub_822AD548(ctx, base);
	// b 0x821e9b94
	goto loc_821E9B94;
loc_821E9B84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9B90;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9B94:
	// bl 0x822acb68
	ctx.lr = 0x821E9B98;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821e9bc0
	if (ctx.cr6.eq) goto loc_821E9BC0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17024
	ctx.r3.s64 = ctx.r11.s64 + -17024;
	// bl 0x822ad350
	ctx.lr = 0x821E9BAC;
	sub_822AD350(ctx, base);
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
loc_821E9BC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821E9BC8;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x821e9bf4
	if (ctx.cr6.gt) goto loc_821E9BF4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-17064
	ctx.r4.s64 = ctx.r11.s64 + -17064;
	// bl 0x822ad4e0
	ctx.lr = 0x821E9BE0;
	sub_822AD4E0(ctx, base);
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
loc_821E9BF4:
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// blt cr6,0x821e9c2c
	if (ctx.cr6.lt) goto loc_821E9C2C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,-17104
	ctx.r3.s64 = ctx.r11.s64 + -17104;
	// bl 0x822e84f0
	ctx.lr = 0x821E9C0C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x821E9C18;
	sub_822AD4E0(ctx, base);
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
loc_821E9C2C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r3,716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 716, ctx.r3.u32);
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stw r10,720(r9)
	PPC_STORE_U32(ctx.r9.u32 + 720, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_821E9B30) {
	__imp__sub_821E9B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9C54) {
	__imp__sub_821E9C54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9C58) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9cac
	if (!ctx.cr6.eq) goto loc_821E9CAC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9cbc
	if (!ctx.cr6.eq) goto loc_821E9CBC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9CA4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9CA8;
	sub_822AD548(ctx, base);
	// b 0x821e9cbc
	goto loc_821E9CBC;
loc_821E9CAC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9CB8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9CBC:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,720(r11)
	PPC_STORE_U32(ctx.r11.u32 + 720, ctx.r9.u32);
	// lfs f0,3100(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,264(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// stfs f0,708(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 708, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x821E9CDC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9cf0
	if (ctx.cr6.eq) goto loc_821E9CF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16976
	ctx.r3.s64 = ctx.r11.s64 + -16976;
	// bl 0x822ad350
	ctx.lr = 0x821E9CF0;
	sub_822AD350(ctx, base);
loc_821E9CF0:
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

PPC_WEAK_FUNC(sub_821E9C58) {
	__imp__sub_821E9C58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9D04) {
	__imp__sub_821E9D04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9D08) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9d5c
	if (!ctx.cr6.eq) goto loc_821E9D5C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821e9d6c
	if (!ctx.cr6.eq) goto loc_821E9D6C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9D54;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9D58;
	sub_822AD548(ctx, base);
	// b 0x821e9d6c
	goto loc_821E9D6C;
loc_821E9D5C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9D68;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9D6C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r3,260(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 260);
	// bl 0x8222e3b0
	ctx.lr = 0x821E9D78;
	sub_8222E3B0(ctx, base);
	// bl 0x822acff0
	ctx.lr = 0x821E9D7C;
	sub_822ACFF0(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9D08) {
	__imp__sub_821E9D08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9D90) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821e9dec
	if (!ctx.cr6.eq) goto loc_821E9DEC;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9dfc
	if (!ctx.cr6.eq) goto loc_821E9DFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9DE4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9DE8;
	sub_822AD548(ctx, base);
	// b 0x821e9dfc
	goto loc_821E9DFC;
loc_821E9DEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9DF8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9DFC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,44196
	ctx.r9.u64 = ctx.r11.u64 | 44196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821e9e40
	if (!ctx.cr6.eq) goto loc_821E9E40;
	// bl 0x822b2288
	ctx.lr = 0x821E9E1C;
	sub_822B2288(ctx, base);
	// bl 0x82212058
	ctx.lr = 0x821E9E20;
	sub_82212058(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// bl 0x822e84f0
	ctx.lr = 0x821E9E30;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821E9E3C;
	sub_8233CAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E9E40:
	// bl 0x822acbf8
	ctx.lr = 0x821E9E44;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9D90) {
	__imp__sub_821E9D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9E5C) {
	__imp__sub_821E9E5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9E60) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821e9ebc
	if (!ctx.cr6.eq) goto loc_821E9EBC;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e9ecc
	if (!ctx.cr6.eq) goto loc_821E9ECC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9EB4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821E9EB8;
	sub_822AD548(ctx, base);
	// b 0x821e9ecc
	goto loc_821E9ECC;
loc_821E9EBC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821E9EC8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821E9ECC:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,44196
	ctx.r9.u64 = ctx.r11.u64 | 44196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821e9f10
	if (!ctx.cr6.eq) goto loc_821E9F10;
	// bl 0x822b2288
	ctx.lr = 0x821E9EEC;
	sub_822B2288(ctx, base);
	// bl 0x82212058
	ctx.lr = 0x821E9EF0;
	sub_82212058(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16920
	ctx.r3.s64 = ctx.r11.s64 + -16920;
	// bl 0x822e84f0
	ctx.lr = 0x821E9F00;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821E9F0C;
	sub_8233CAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E9F10:
	// bl 0x822acbf8
	ctx.lr = 0x821E9F14;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9E60) {
	__imp__sub_821E9E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9F2C) {
	__imp__sub_821E9F2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9F30) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// bne cr6,0x821e9f84
	if (!ctx.cr6.eq) goto loc_821E9F84;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e9f90
	if (!ctx.cr6.eq) goto loc_821E9F90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821E9F80;
	sub_822E84F0(ctx, base);
	// b 0x821e9f8c
	goto loc_821E9F8C;
loc_821E9F84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821E9F8C:
	// bl 0x822ad548
	ctx.lr = 0x821E9F90;
	sub_822AD548(ctx, base);
loc_821E9F90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r3,r31,16
	ctx.r3.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r4,r11,-26000
	ctx.r4.s64 = ctx.r11.s64 + -26000;
	// bl 0x8233cae8
	ctx.lr = 0x821E9FA0;
	sub_8233CAE8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9F30) {
	__imp__sub_821E9F30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821E9FB4) {
	__imp__sub_821E9FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821E9FB8) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821ea014
	if (!ctx.cr6.eq) goto loc_821EA014;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea024
	if (!ctx.cr6.eq) goto loc_821EA024;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA00C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA010;
	sub_822AD548(ctx, base);
	// b 0x821ea024
	goto loc_821EA024;
loc_821EA014:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA020;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA024:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,44196
	ctx.r9.u64 = ctx.r11.u64 | 44196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821ea068
	if (!ctx.cr6.eq) goto loc_821EA068;
	// bl 0x822b2288
	ctx.lr = 0x821EA044;
	sub_822B2288(ctx, base);
	// bl 0x82212058
	ctx.lr = 0x821EA048;
	sub_82212058(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16904
	ctx.r3.s64 = ctx.r11.s64 + -16904;
	// bl 0x822e84f0
	ctx.lr = 0x821EA058;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EA064;
	sub_8233CAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EA068:
	// bl 0x822acbf8
	ctx.lr = 0x821EA06C;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821E9FB8) {
	__imp__sub_821E9FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EA084) {
	__imp__sub_821EA084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA088) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821ea0e4
	if (!ctx.cr6.eq) goto loc_821EA0E4;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea0f4
	if (!ctx.cr6.eq) goto loc_821EA0F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA0DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA0E0;
	sub_822AD548(ctx, base);
	// b 0x821ea0f4
	goto loc_821EA0F4;
loc_821EA0E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA0F0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA0F4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,264(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r9,r11,44196
	ctx.r9.u64 = ctx.r11.u64 | 44196;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x821ea138
	if (!ctx.cr6.eq) goto loc_821EA138;
	// bl 0x822b2288
	ctx.lr = 0x821EA114;
	sub_822B2288(ctx, base);
	// bl 0x82212058
	ctx.lr = 0x821EA118;
	sub_82212058(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16892
	ctx.r3.s64 = ctx.r11.s64 + -16892;
	// bl 0x822e84f0
	ctx.lr = 0x821EA128;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EA134;
	sub_8233CAE8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821EA138:
	// bl 0x822acbf8
	ctx.lr = 0x821EA13C;
	sub_822ACBF8(ctx, base);
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

PPC_WEAK_FUNC(sub_821EA088) {
	__imp__sub_821EA088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EA154) {
	__imp__sub_821EA154(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA158) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea1ac
	if (!ctx.cr6.eq) goto loc_821EA1AC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea1bc
	if (!ctx.cr6.eq) goto loc_821EA1BC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA1A4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA1A8;
	sub_822AD548(ctx, base);
	// b 0x821ea1bc
	goto loc_821EA1BC;
loc_821EA1AC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA1B8;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA1BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x821EA1C4;
	sub_822B1C50(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-21164
	ctx.r10.s64 = ctx.r10.s64 + -21164;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// bne cr6,0x821ea1e4
	if (!ctx.cr6.eq) goto loc_821EA1E4;
	// rlwinm r8,r9,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_821EA1E4:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821EA158) {
	__imp__sub_821EA158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EA1FC) {
	__imp__sub_821EA1FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA200) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea254
	if (!ctx.cr6.eq) goto loc_821EA254;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea264
	if (!ctx.cr6.eq) goto loc_821EA264;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA24C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA250;
	sub_822AD548(ctx, base);
	// b 0x821ea264
	goto loc_821EA264;
loc_821EA254:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA260;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA264:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-21164
	ctx.r10.s64 = ctx.r10.s64 + -21164;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821EA200) {
	__imp__sub_821EA200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA290) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea2e4
	if (!ctx.cr6.eq) goto loc_821EA2E4;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea2f4
	if (!ctx.cr6.eq) goto loc_821EA2F4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA2DC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA2E0;
	sub_822AD548(ctx, base);
	// b 0x821ea2f4
	goto loc_821EA2F4;
loc_821EA2E4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA2F0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA2F4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-21164
	ctx.r10.s64 = ctx.r10.s64 + -21164;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,29,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
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

PPC_WEAK_FUNC(sub_821EA290) {
	__imp__sub_821EA290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA320) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea374
	if (!ctx.cr6.eq) goto loc_821EA374;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea384
	if (!ctx.cr6.eq) goto loc_821EA384;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA36C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA370;
	sub_822AD548(ctx, base);
	// b 0x821ea384
	goto loc_821EA384;
loc_821EA374:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA380;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA384:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r9,r10,128
	ctx.r9.u64 = ctx.r10.u64 | 128;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA320) {
	__imp__sub_821EA320(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA3A8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea3fc
	if (!ctx.cr6.eq) goto loc_821EA3FC;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea40c
	if (!ctx.cr6.eq) goto loc_821EA40C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA3F4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA3F8;
	sub_822AD548(ctx, base);
	// b 0x821ea40c
	goto loc_821EA40C;
loc_821EA3FC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA408;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA40C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,25,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA3A8) {
	__imp__sub_821EA3A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA430) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea484
	if (!ctx.cr6.eq) goto loc_821EA484;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea494
	if (!ctx.cr6.eq) goto loc_821EA494;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA47C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA480;
	sub_822AD548(ctx, base);
	// b 0x821ea494
	goto loc_821EA494;
loc_821EA484:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA490;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA494:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r9,r10,4096
	ctx.r9.u64 = ctx.r10.u64 | 4096;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA430) {
	__imp__sub_821EA430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA4B8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea50c
	if (!ctx.cr6.eq) goto loc_821EA50C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea51c
	if (!ctx.cr6.eq) goto loc_821EA51C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA504;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA508;
	sub_822AD548(ctx, base);
	// b 0x821ea51c
	goto loc_821EA51C;
loc_821EA50C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA518;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA51C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,20,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA4B8) {
	__imp__sub_821EA4B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA540) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea594
	if (!ctx.cr6.eq) goto loc_821EA594;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea5a4
	if (!ctx.cr6.eq) goto loc_821EA5A4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA58C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA590;
	sub_822AD548(ctx, base);
	// b 0x821ea5a4
	goto loc_821EA5A4;
loc_821EA594:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA5A0;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA5A4:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// ori r9,r10,2048
	ctx.r9.u64 = ctx.r10.u64 | 2048;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA540) {
	__imp__sub_821EA540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA5C8) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea61c
	if (!ctx.cr6.eq) goto loc_821EA61C;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 116);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea62c
	if (!ctx.cr6.eq) goto loc_821EA62C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA614;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA618;
	sub_822AD548(ctx, base);
	// b 0x821ea62c
	goto loc_821EA62C;
loc_821EA61C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA628;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA62C:
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r10,700(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 700);
	// rlwinm r9,r10,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,700(r11)
	PPC_STORE_U32(ctx.r11.u32 + 700, ctx.r9.u32);
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

PPC_WEAK_FUNC(sub_821EA5C8) {
	__imp__sub_821EA5C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821EA658;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea6a0
	if (!ctx.cr6.eq) goto loc_821EA6A0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea6b0
	if (!ctx.cr6.eq) goto loc_821EA6B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA698;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA69C;
	sub_822AD548(ctx, base);
	// b 0x821ea6b0
	goto loc_821EA6B0;
loc_821EA6A0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA6AC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA6B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EA6B8;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821EA6C4;
	sub_822B1C50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82232100
	ctx.lr = 0x821EA6D0;
	sub_82232100(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EA6DC;
	sub_8220F168(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EA6E4;
	sub_82332AF8(ctx, base);
	// lwz r11,536(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ea7bc
	if (ctx.cr6.eq) goto loc_821EA7BC;
	// lwz r31,264(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823340b0
	ctx.lr = 0x821EA700;
	sub_823340B0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x821ea710
	if (!ctx.cr6.lt) goto loc_821EA710;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x821ea71c
	goto loc_821EA71C;
loc_821EA710:
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x821ea71c
	if (!ctx.cr6.gt) goto loc_821EA71C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821EA71C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EA724;
	sub_82332AF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x821EA72C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821ea780
	if (!ctx.cr6.gt) goto loc_821EA780;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x821e7838
	ctx.lr = 0x821EA73C;
	sub_821E7838(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821ea764
	if (!ctx.cr6.eq) goto loc_821EA764;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da648
	ctx.lr = 0x821EA754;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821ea764
	if (!ctx.cr6.eq) goto loc_821EA764;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821ea7ac
	goto loc_821EA7AC;
loc_821EA764:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EA778;
	sub_82331E38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EA780:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EA794;
	sub_82331E38(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da648
	ctx.lr = 0x821EA7A0;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ea7bc
	if (ctx.cr6.eq) goto loc_821EA7BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_821EA7AC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,536(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EA7BC;
	sub_82331E38(ctx, base);
loc_821EA7BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EA650) {
	__imp__sub_821EA650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EA7C4) {
	__imp__sub_821EA7C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA7C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x821EA7D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea818
	if (!ctx.cr6.eq) goto loc_821EA818;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea828
	if (!ctx.cr6.eq) goto loc_821EA828;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA810;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA814;
	sub_822AD548(ctx, base);
	// b 0x821ea828
	goto loc_821EA828;
loc_821EA818:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA824;
	sub_822AD548(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
loc_821EA828:
	// bl 0x822acb68
	ctx.lr = 0x821EA82C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x821ea840
	if (!ctx.cr6.gt) goto loc_821EA840;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16876
	ctx.r3.s64 = ctx.r11.s64 + -16876;
	// bl 0x822ad350
	ctx.lr = 0x821EA840;
	sub_822AD350(ctx, base);
loc_821EA840:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EA848;
	sub_822B2288(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x821EA854;
	sub_822B1C50(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82232100
	ctx.lr = 0x821EA860;
	sub_82232100(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,264(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EA870;
	sub_8220F168(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332af8
	ctx.lr = 0x821EA878;
	sub_82332AF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82331a00
	ctx.lr = 0x821EA884;
	sub_82331A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ea910
	if (ctx.cr6.eq) goto loc_821EA910;
	// lwz r11,536(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ea964
	if (ctx.cr6.eq) goto loc_821EA964;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823340b0
	ctx.lr = 0x821EA8A4;
	sub_823340B0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821ea8b4
	if (!ctx.cr6.lt) goto loc_821EA8B4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821EA8B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,536(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r29,r6,r11
	ctx.r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EA8E0;
	sub_82331E38(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820da648
	ctx.lr = 0x821EA8EC;
	sub_820DA648(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ea964
	if (ctx.cr6.eq) goto loc_821EA964;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,536(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 536);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331e38
	ctx.lr = 0x821EA908;
	sub_82331E38(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821EA910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823319d8
	ctx.lr = 0x821EA918;
	sub_823319D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ea964
	if (ctx.cr6.eq) goto loc_821EA964;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a58
	ctx.lr = 0x821EA930;
	sub_82331A58(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x821ea940
	if (!ctx.cr6.lt) goto loc_821EA940;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821EA940:
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r8,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r7,r10,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r6,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x82334578
	ctx.lr = 0x821EA964;
	sub_82334578(ctx, base);
loc_821EA964:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EA7C8) {
	__imp__sub_821EA7C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EA96C) {
	__imp__sub_821EA96C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EA970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EA978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821ea9c0
	if (!ctx.cr6.eq) goto loc_821EA9C0;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821ea9d0
	if (!ctx.cr6.eq) goto loc_821EA9D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EA9B8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EA9BC;
	sub_822AD548(ctx, base);
	// b 0x821ea9d0
	goto loc_821EA9D0;
loc_821EA9C0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EA9CC;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EA9D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EA9D8;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821EA9E0;
	sub_82232100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EA9EC;
	sub_8220F168(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821e7838
	ctx.lr = 0x821EA9F4;
	sub_821E7838(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x820da6b8
	ctx.lr = 0x821EAA04;
	sub_820DA6B8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821EAA08;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EA970) {
	__imp__sub_821EA970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EAA10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EAA18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eaa60
	if (!ctx.cr6.eq) goto loc_821EAA60;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eaa70
	if (!ctx.cr6.eq) goto loc_821EAA70;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EAA58;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EAA5C;
	sub_822AD548(ctx, base);
	// b 0x821eaa70
	goto loc_821EAA70;
loc_821EAA60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EAA6C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EAA70:
	// bl 0x822acb68
	ctx.lr = 0x821EAA74;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x821eaa88
	if (!ctx.cr6.gt) goto loc_821EAA88;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16876
	ctx.r3.s64 = ctx.r11.s64 + -16876;
	// bl 0x822ad350
	ctx.lr = 0x821EAA88;
	sub_822AD350(ctx, base);
loc_821EAA88:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EAA90;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821EAA98;
	sub_82232100(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EAAA4;
	sub_8220F168(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x821EAAAC;
	sub_82331A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x821eaacc
	if (ctx.cr6.eq) goto loc_821EAACC;
	// bl 0x821e77b8
	ctx.lr = 0x821EAAC0;
	sub_821E77B8(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821EAAC4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EAACC:
	// bl 0x820da730
	ctx.lr = 0x821EAAD0;
	sub_820DA730(ctx, base);
	// bl 0x822acbf8
	ctx.lr = 0x821EAAD4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EAA10) {
	__imp__sub_821EAA10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EAADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EAADC) {
	__imp__sub_821EAADC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EAAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EAAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eab30
	if (!ctx.cr6.eq) goto loc_821EAB30;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,264(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eab40
	if (!ctx.cr6.eq) goto loc_821EAB40;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EAB28;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x821EAB2C;
	sub_822AD548(ctx, base);
	// b 0x821eab40
	goto loc_821EAB40;
loc_821EAB30:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x821EAB3C;
	sub_822AD548(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_821EAB40:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EAB48;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82232100
	ctx.lr = 0x821EAB50;
	sub_82232100(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8220f168
	ctx.lr = 0x821EAB5C;
	sub_8220F168(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82332008
	ctx.lr = 0x821EAB68;
	sub_82332008(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82332b10
	ctx.lr = 0x821EAB74;
	sub_82332B10(ctx, base);
	// lwz r4,64(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eab8c
	if (ctx.cr6.eq) goto loc_821EAB8C;
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// bl 0x82332008
	ctx.lr = 0x821EAB88;
	sub_82332008(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_821EAB8C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821eab9c
	if (!ctx.cr6.eq) goto loc_821EAB9C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EAB9C:
	// bl 0x822acbf8
	ctx.lr = 0x821EABA0;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EAAE0) {
	__imp__sub_821EAAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EABA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EABB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,1156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1156, ctx.r3.u32);
	// lhz r10,1158(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1158);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,1156(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 1156);
	// bne cr6,0x821eabf8
	if (!ctx.cr6.eq) goto loc_821EABF8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eac04
	if (!ctx.cr6.eq) goto loc_821EAC04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EABF4;
	sub_822E84F0(ctx, base);
	// b 0x821eac00
	goto loc_821EAC00;
loc_821EABF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EAC00:
	// bl 0x822ad548
	ctx.lr = 0x821EAC04;
	sub_822AD548(ctx, base);
loc_821EAC04:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x821EAC0C;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x821EAC18;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821eac48
	if (!ctx.cr6.eq) goto loc_821EAC48;
	// bl 0x822acb68
	ctx.lr = 0x821EAC24;
	sub_822ACB68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r4,r3,-1
	ctx.r4.s64 = ctx.r3.s64 + -1;
	// addi r5,r11,-16764
	ctx.r5.s64 = ctx.r11.s64 + -16764;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r7,1024
	ctx.r7.s64 = 1024;
	// bl 0x8221ee40
	ctx.lr = 0x821EAC40;
	sub_8221EE40(ctx, base);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// b 0x821eac54
	goto loc_821EAC54;
loc_821EAC48:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EAC50;
	sub_822B2288(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821EAC54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de3b0
	ctx.lr = 0x821EAC5C;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eac84
	if (!ctx.cr6.eq) goto loc_821EAC84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16792
	ctx.r3.s64 = ctx.r11.s64 + -16792;
	// bl 0x822e84f0
	ctx.lr = 0x821EAC78;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EAC7C;
	sub_822AD350(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EAC84:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r11,-16816
	ctx.r3.s64 = ctx.r11.s64 + -16816;
	// bl 0x822e84f0
	ctx.lr = 0x821EAC94;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EACA0;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EABA8) {
	__imp__sub_821EABA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EACA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821EACB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r27,148(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821eacf8
	if (!ctx.cr6.eq) goto loc_821EACF8;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r27,16
	ctx.r4.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821ead04
	if (!ctx.cr6.eq) goto loc_821EAD04;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EACF4;
	sub_822E84F0(ctx, base);
	// b 0x821ead00
	goto loc_821EAD00;
loc_821EACF8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EAD00:
	// bl 0x822ad548
	ctx.lr = 0x821EAD04;
	sub_822AD548(ctx, base);
loc_821EAD04:
	// bl 0x822acb68
	ctx.lr = 0x821EAD08;
	sub_822ACB68(ctx, base);
	// clrlwi r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ead20
	if (ctx.cr6.eq) goto loc_821EAD20;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16704
	ctx.r3.s64 = ctx.r11.s64 + -16704;
	// bl 0x822ad350
	ctx.lr = 0x821EAD20;
	sub_822AD350(ctx, base);
loc_821EAD20:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x821EAD28;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821eada8
	if (ctx.cr6.eq) goto loc_821EADA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r28,r11,-16816
	ctx.r28.s64 = ctx.r11.s64 + -16816;
loc_821EAD38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822b2288
	ctx.lr = 0x821EAD40;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 1;
	// bl 0x822b2288
	ctx.lr = 0x821EAD4C;
	sub_822B2288(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822de3b0
	ctx.lr = 0x821EAD58;
	sub_822DE3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ead98
	if (ctx.cr6.eq) goto loc_821EAD98;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EAD74;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r27,16
	ctx.r3.u64 = ctx.r27.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EAD80;
	sub_8233CAE8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// bl 0x822acb68
	ctx.lr = 0x821EAD88;
	sub_822ACB68(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821ead38
	if (ctx.cr6.lt) goto loc_821EAD38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_821EAD98:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16744
	ctx.r3.s64 = ctx.r11.s64 + -16744;
	// bl 0x822e84f0
	ctx.lr = 0x821EADA4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x821EADA8;
	sub_822AD350(ctx, base);
loc_821EADA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EACA8) {
	__imp__sub_821EACA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EADB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EADB8;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lhz r10,166(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,164(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// bne cr6,0x821eae0c
	if (!ctx.cr6.eq) goto loc_821EAE0C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eae18
	if (!ctx.cr6.eq) goto loc_821EAE18;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EAE08;
	sub_822E84F0(ctx, base);
	// b 0x821eae14
	goto loc_821EAE14;
loc_821EAE0C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EAE14:
	// bl 0x822ad548
	ctx.lr = 0x821EAE18;
	sub_822AD548(ctx, base);
loc_821EAE18:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f29,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x822acb68
	ctx.lr = 0x821EAE34;
	sub_822ACB68(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x821eaf1c
	if (ctx.cr6.gt) goto loc_821EAF1C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821eae78
	if (ctx.cr6.eq) goto loc_821EAE78;
	// bdz 0x821eae6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EAE6C;
	// bdz 0x821eae60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_821EAE60;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b1fb0
	ctx.lr = 0x821EAE5C;
	sub_822B1FB0(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
loc_821EAE60:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x821EAE68;
	sub_822B1FB0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
loc_821EAE6C:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821EAE74;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821EAE78:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EAE80;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821EAE8C;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eaec4
	if (ctx.cr6.eq) goto loc_821EAEC4;
	// lhz r11,166(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eaeb8
	if (!ctx.cr6.eq) goto loc_821EAEB8;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821eaec4
	goto loc_821EAEC4;
loc_821EAEB8:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// bl 0x822ad350
	ctx.lr = 0x821EAEC4;
	sub_822AD350(ctx, base);
loc_821EAEC4:
	// stfd f29,56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-16216
	ctx.r3.s64 = ctx.r11.s64 + -16216;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822e84f0
	ctx.lr = 0x821EAEFC;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EAF08;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EAF1C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16584
	ctx.r3.s64 = ctx.r11.s64 + -16584;
	// bl 0x822ad350
	ctx.lr = 0x821EAF28;
	sub_822AD350(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EADB0) {
	__imp__sub_821EADB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EAF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EAF3C) {
	__imp__sub_821EAF3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EAF40) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lhz r10,134(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// bne cr6,0x821eaf9c
	if (!ctx.cr6.eq) goto loc_821EAF9C;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r30,16
	ctx.r4.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eafa8
	if (!ctx.cr6.eq) goto loc_821EAFA8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EAF98;
	sub_822E84F0(ctx, base);
	// b 0x821eafa4
	goto loc_821EAFA4;
loc_821EAF9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EAFA4:
	// bl 0x822ad548
	ctx.lr = 0x821EAFA8;
	sub_822AD548(ctx, base);
loc_821EAFA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822acb68
	ctx.lr = 0x821EAFB4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x821eafe0
	if (ctx.cr6.eq) goto loc_821EAFE0;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821eafd4
	if (ctx.cr6.eq) goto loc_821EAFD4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16088
	ctx.r3.s64 = ctx.r11.s64 + -16088;
	// bl 0x822ad350
	ctx.lr = 0x821EAFD0;
	sub_822AD350(ctx, base);
	// b 0x821eb048
	goto loc_821EB048;
loc_821EAFD4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x821EAFDC;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821EAFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821EAFE8;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r31,1
	ctx.r31.s64 = 1;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 164);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eb020
	if (ctx.cr6.eq) goto loc_821EB020;
	// lhz r11,166(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 166);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb014
	if (!ctx.cr6.eq) goto loc_821EB014;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821eb020
	goto loc_821EB020;
loc_821EB014:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-16192
	ctx.r3.s64 = ctx.r11.s64 + -16192;
	// bl 0x822ad350
	ctx.lr = 0x821EB020;
	sub_822AD350(ctx, base);
loc_821EB020:
	// stfd f31,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-16112
	ctx.r3.s64 = ctx.r11.s64 + -16112;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x822e84f0
	ctx.lr = 0x821EB03C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r30,16
	ctx.r3.u64 = ctx.r30.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB048;
	sub_8233CAE8(ctx, base);
loc_821EB048:
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

PPC_WEAK_FUNC(sub_821EAF40) {
	__imp__sub_821EAF40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB064) {
	__imp__sub_821EB064(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821EB070;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lhz r10,150(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 150);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lhz r29,148(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 148);
	// bne cr6,0x821eb0bc
	if (!ctx.cr6.eq) goto loc_821EB0BC;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// clrlwi r4,r29,16
	ctx.r4.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// mulli r10,r4,624
	ctx.r10.s64 = ctx.r4.s64 * 624;
	// addi r9,r11,264
	ctx.r9.s64 = ctx.r11.s64 + 264;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821eb0c8
	if (!ctx.cr6.eq) goto loc_821EB0C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17480
	ctx.r3.s64 = ctx.r11.s64 + -17480;
	// bl 0x822e84f0
	ctx.lr = 0x821EB0B8;
	sub_822E84F0(ctx, base);
	// b 0x821eb0c4
	goto loc_821EB0C4;
loc_821EB0BC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
loc_821EB0C4:
	// bl 0x822ad548
	ctx.lr = 0x821EB0C8;
	sub_822AD548(ctx, base);
loc_821EB0C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x822acb68
	ctx.lr = 0x821EB0D4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x821eb108
	if (ctx.cr6.eq) goto loc_821EB108;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x821eb0fc
	if (ctx.cr6.eq) goto loc_821EB0FC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15704
	ctx.r3.s64 = ctx.r11.s64 + -15704;
	// bl 0x822ad350
	ctx.lr = 0x821EB0F0;
	sub_822AD350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821EB0FC:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x821EB104;
	sub_822B1FB0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_821EB108:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x821EB110;
	sub_822B2288(ctx, base);
	// li r4,2776
	ctx.r4.s64 = 2776;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8222de40
	ctx.lr = 0x821EB124;
	sub_8222DE40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x821EB130;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r31,2
	ctx.r31.s64 = 2;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,168(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 168);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821eb17c
	if (ctx.cr6.eq) goto loc_821EB17C;
	// lhz r10,170(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 170);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821eb15c
	if (!ctx.cr6.eq) goto loc_821EB15C;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x821eb17c
	goto loc_821EB17C;
loc_821EB15C:
	// lhz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 172);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821eb170
	if (!ctx.cr6.eq) goto loc_821EB170;
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x821eb17c
	goto loc_821EB17C;
loc_821EB170:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-15824
	ctx.r3.s64 = ctx.r11.s64 + -15824;
	// bl 0x822ad350
	ctx.lr = 0x821EB17C;
	sub_822AD350(ctx, base);
loc_821EB17C:
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r11,-15852
	ctx.r3.s64 = ctx.r11.s64 + -15852;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e84f0
	ctx.lr = 0x821EB19C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// clrlwi r3,r29,16
	ctx.r3.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8233cae8
	ctx.lr = 0x821EB1A8;
	sub_8233CAE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821EB068) {
	__imp__sub_821EB068(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821EB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821EB1B4) {
	__imp__sub_821EB1B4(ctx, base);
}

