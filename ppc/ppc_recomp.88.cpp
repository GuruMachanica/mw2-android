#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_82353A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82353A18;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82352f30
	ctx.lr = 0x82353A2C;
	sub_82352F30(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// sth r11,52(r31)
	PPC_STORE_U16(ctx.r31.u32 + 52, ctx.r11.u16);
	// lfs f13,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f13.f64 = double(temp.f32);
	// sth r11,54(r31)
	PPC_STORE_U16(ctx.r31.u32 + 54, ctx.r11.u16);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// sth r11,56(r31)
	PPC_STORE_U16(ctx.r31.u32 + 56, ctx.r11.u16);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// sth r11,58(r31)
	PPC_STORE_U16(ctx.r31.u32 + 58, ctx.r11.u16);
	// sth r10,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r10.u16);
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// addi r6,r7,-31796
	ctx.r6.s64 = ctx.r7.s64 + -31796;
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// addi r30,r31,120
	ctx.r30.s64 = ctx.r31.s64 + 120;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f12,-31796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31796);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,100(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// sth r10,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r10.u16);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// sth r10,114(r31)
	PPC_STORE_U16(ctx.r31.u32 + 114, ctx.r10.u16);
	// sth r10,116(r31)
	PPC_STORE_U16(ctx.r31.u32 + 116, ctx.r10.u16);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// sth r11,120(r31)
	PPC_STORE_U16(ctx.r31.u32 + 120, ctx.r11.u16);
	// sth r11,122(r31)
	PPC_STORE_U16(ctx.r31.u32 + 122, ctx.r11.u16);
	// sth r11,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r11.u16);
	// sth r11,126(r31)
	PPC_STORE_U16(ctx.r31.u32 + 126, ctx.r11.u16);
	// sth r10,128(r31)
	PPC_STORE_U16(ctx.r31.u32 + 128, ctx.r10.u16);
	// sth r11,130(r31)
	PPC_STORE_U16(ctx.r31.u32 + 130, ctx.r11.u16);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// lfs f13,-31796(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -31796);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// lfs f13,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,172(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// sth r10,180(r31)
	PPC_STORE_U16(ctx.r31.u32 + 180, ctx.r10.u16);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// sth r10,182(r31)
	PPC_STORE_U16(ctx.r31.u32 + 182, ctx.r10.u16);
	// sth r10,184(r31)
	PPC_STORE_U16(ctx.r31.u32 + 184, ctx.r10.u16);
	// blt cr6,0x82353be0
	if (ctx.cr6.lt) goto loc_82353BE0;
	// extsh r26,r27
	ctx.r26.s64 = ctx.r27.s16;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82353be0
	if (ctx.cr6.lt) goto loc_82353BE0;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// mulli r11,r9,68
	ctx.r11.s64 = ctx.r9.s64 * 68;
	// addi r28,r10,3896
	ctx.r28.s64 = ctx.r10.s64 + 3896;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823515d0
	ctx.lr = 0x82353B44;
	sub_823515D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823515d0
	ctx.lr = 0x82353B50;
	sub_823515D0(ctx, base);
	// mulli r10,r26,68
	ctx.r10.s64 = ctx.r26.s64 * 68;
	// sth r27,112(r31)
	PPC_STORE_U16(ctx.r31.u32 + 112, ctx.r27.u16);
	// lfs f12,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r28,20
	ctx.r11.s64 = ctx.r28.s64 + 20;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmr f4,f11
	ctx.f4.f64 = ctx.f11.f64;
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmuls f1,f8,f8
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// stfs f8,88(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f2,f8
	ctx.f2.f64 = ctx.f8.f64;
	// lfs f6,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmadds f13,f11,f11,f1
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f5,92(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmadds f12,f5,f5,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f13.f64));
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f9,f10,f0,f11
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f11.f64;
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fmuls f7,f4,f8
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f7,84(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// fmuls f6,f2,f8
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f5,92(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f11,108(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
loc_82353BE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353A10) {
	__imp__sub_82353A10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82353BF0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31815
	ctx.r30.s64 = -2085027840;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r8,3888(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3888);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpwi cr6,r11,4000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4000, ctx.xer);
	// blt cr6,0x82353c28
	if (ctx.cr6.lt) goto loc_82353C28;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r5,4000
	ctx.r5.s64 = 4000;
	// addi r4,r11,-10620
	ctx.r4.s64 = ctx.r11.s64 + -10620;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82353C24;
	sub_822830E8(ctx, base);
	// lhz r8,3888(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 3888);
loc_82353C28:
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mulli r6,r10,68
	ctx.r6.s64 = ctx.r10.s64 * 68;
	// addi r7,r11,3896
	ctx.r7.s64 = ctx.r11.s64 + 3896;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// add r31,r6,r7
	ctx.r31.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r9,-31796
	ctx.r3.s64 = ctx.r9.s64 + -31796;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-31796(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31796);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lfs f31,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// sth r11,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// sth r11,6(r31)
	PPC_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// sthx r11,r6,r7
	PPC_STORE_U16(ctx.r6.u32 + ctx.r7.u32, ctx.r11.u16);
	// stfs f31,20(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f31,24(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// sth r10,3888(r30)
	PPC_STORE_U16(ctx.r30.u32 + 3888, ctx.r10.u16);
	// stfs f31,28(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f31,32(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f31,36(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f31,40(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,44(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f12,52(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// sth r9,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r9.u16);
	// stfs f31,56(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// sth r9,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r9.u16);
	// sth r9,64(r31)
	PPC_STORE_U16(ctx.r31.u32 + 64, ctx.r9.u16);
	// bl 0x82351480
	ctx.lr = 0x82353CCC;
	sub_82351480(ctx, base);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r9,-10648
	ctx.r4.s64 = ctx.r9.s64 + -10648;
	// bl 0x822ea1c0
	ctx.lr = 0x82353CDC;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353cf0
	if (ctx.cr6.eq) goto loc_82353CF0;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
loc_82353CF0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,-10676
	ctx.r4.s64 = ctx.r11.s64 + -10676;
	// bl 0x822ea1c0
	ctx.lr = 0x82353D00;
	sub_822EA1C0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82353d14
	if (ctx.cr6.eq) goto loc_82353D14;
	// lhz r10,10(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// sth r9,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r9.u16);
loc_82353D14:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82353d54
	if (!ctx.cr6.eq) goto loc_82353D54;
	// lfs f3,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,-10732
	ctx.r4.s64 = ctx.r11.s64 + -10732;
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
	ctx.lr = 0x82353D54;
	sub_822830E8(ctx, base);
loc_82353D54:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82353d70
	if (ctx.cr6.lt) goto loc_82353D70;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,5624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82353D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353BE8) {
	__imp__sub_82353BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82353D7C) {
	__imp__sub_82353D7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82353D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// ble cr6,0x82353de0
	if (!ctx.cr6.gt) goto loc_82353DE0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// addi r30,r10,3896
	ctx.r30.s64 = ctx.r10.s64 + 3896;
loc_82353DB0:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// bl 0x822a88e0
	ctx.lr = 0x82353DC4;
	sub_822A88E0(ctx, base);
	// lhz r10,3888(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 3888);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82353db0
	if (ctx.cr6.lt) goto loc_82353DB0;
loc_82353DE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353D80) {
	__imp__sub_82353D80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353DE8) {
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
	ctx.lr = 0x82353E00;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82353e28
	if (!ctx.cr6.eq) goto loc_82353E28;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
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
loc_82353E28:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10580
	ctx.r4.s64 = ctx.r11.s64 + -10580;
	// bl 0x822ad4e0
	ctx.lr = 0x82353E38;
	sub_822AD4E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
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

PPC_WEAK_FUNC(sub_82353DE8) {
	__imp__sub_82353DE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353E50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82353E58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r30,r11,-31784
	ctx.r30.s64 = ctx.r11.s64 + -31784;
	// lwz r4,-31784(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82353e98
	if (ctx.cr6.eq) goto loc_82353E98;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,12
	ctx.r29.s64 = 12;
loc_82353E78:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,3
	ctx.r3.s64 = 3;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822a8a78
	ctx.lr = 0x82353E88;
	sub_822A8A78(ctx, base);
	// lwzu r4,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82353e78
	if (!ctx.cr6.eq) goto loc_82353E78;
loc_82353E98:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353E50) {
	__imp__sub_82353E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353EA0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,-31784
	ctx.r11.s64 = ctx.r9.s64 + -31784;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 * 68;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r11,r8,3896
	ctx.r11.s64 = ctx.r8.s64 + 3896;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353EA0) {
	__imp__sub_82353EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82353ED4) {
	__imp__sub_82353ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82353EE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82353EEC;
	sub_822B20B8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82353EF8;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822a3ec0
	ctx.lr = 0x82353F04;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82353fd0
	if (ctx.cr6.lt) goto loc_82353FD0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-31784
	ctx.r11.s64 = ctx.r10.s64 + -31784;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82353f40
	if (ctx.cr6.eq) goto loc_82353F40;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82353F40;
	sub_822AD4E0(ctx, base);
loc_82353F40:
	// lis r26,-31815
	ctx.r26.s64 = -2085027840;
	// li r8,0
	ctx.r8.s64 = 0;
	// lhz r9,3888(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 3888);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353fd0
	if (!ctx.cr6.gt) goto loc_82353FD0;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r10,3896
	ctx.r29.s64 = ctx.r10.s64 + 3896;
	// addi r27,r11,-10560
	ctx.r27.s64 = ctx.r11.s64 + -10560;
loc_82353F6C:
	// mulli r11,r30,68
	ctx.r11.s64 = ctx.r30.s64 * 68;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353fa4
	if (ctx.cr6.eq) goto loc_82353FA4;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82353fa4
	if (!ctx.cr6.eq) goto loc_82353FA4;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82353fa0
	if (ctx.cr6.eq) goto loc_82353FA0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ad350
	ctx.lr = 0x82353F9C;
	sub_822AD350(ctx, base);
	// lhz r9,3888(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 3888);
loc_82353FA0:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82353FA4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82353f6c
	if (ctx.cr6.lt) goto loc_82353F6C;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82353fd0
	if (ctx.cr6.eq) goto loc_82353FD0;
	// lhz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822ace70
	ctx.lr = 0x82353FD0;
	sub_822ACE70(ctx, base);
loc_82353FD0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353ED8) {
	__imp__sub_82353ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82353FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82353FE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82353FEC;
	sub_822B20B8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82353FF8;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822a3ec0
	ctx.lr = 0x82354004;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823540a8
	if (ctx.cr6.lt) goto loc_823540A8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-31784
	ctx.r11.s64 = ctx.r10.s64 + -31784;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x82354040
	if (ctx.cr6.eq) goto loc_82354040;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82354040;
	sub_822AD4E0(ctx, base);
loc_82354040:
	// bl 0x822ad190
	ctx.lr = 0x82354044;
	sub_822AD190(ctx, base);
	// lis r28,-31815
	ctx.r28.s64 = -2085027840;
	// li r30,0
	ctx.r30.s64 = 0;
	// lhz r10,3888(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 3888);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823540a8
	if (!ctx.cr6.gt) goto loc_823540A8;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// addi r31,r11,3896
	ctx.r31.s64 = ctx.r11.s64 + 3896;
loc_82354064:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354094
	if (ctx.cr6.eq) goto loc_82354094;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82354094
	if (!ctx.cr6.eq) goto loc_82354094;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r4,3
	ctx.r4.s64 = 3;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// bl 0x822ace70
	ctx.lr = 0x8235408C;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82354090;
	sub_822AD208(ctx, base);
	// lhz r10,3888(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 3888);
loc_82354094:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82354064
	if (ctx.cr6.lt) goto loc_82354064;
loc_823540A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82353FD8) {
	__imp__sub_82353FD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823540B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823540B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822ad190
	ctx.lr = 0x823540C0;
	sub_822AD190(ctx, base);
	// lis r29,-31815
	ctx.r29.s64 = -2085027840;
	// lhz r11,3888(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 3888);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354118
	if (!ctx.cr6.gt) goto loc_82354118;
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r10,-31815
	ctx.r10.s64 = -2085027840;
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// addi r30,r10,3896
	ctx.r30.s64 = ctx.r10.s64 + 3896;
loc_823540E4:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lhzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r3,r9
	ctx.r3.s64 = ctx.r9.s16;
	// bl 0x822ace70
	ctx.lr = 0x823540F8;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x823540FC;
	sub_822AD208(ctx, base);
	// lhz r10,3888(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 3888);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// extsh r31,r8
	ctx.r31.s64 = ctx.r8.s16;
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x823540e4
	if (ctx.cr6.lt) goto loc_823540E4;
loc_82354118:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823540B0) {
	__imp__sub_823540B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82354128;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,188
	ctx.r5.s64 = 188;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,-1
	ctx.r31.s64 = -1;
	// bl 0x823de1f0
	ctx.lr = 0x82354154;
	sub_823DE1F0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82354164;
	sub_823DE1F0(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-31800(r10)
	PPC_STORE_U32(ctx.r10.u32 + -31800, ctx.r11.u32);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r28,r11,50000
	ctx.r28.u64 = ctx.r11.u64 | 50000;
loc_82354178:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82354214
	if (ctx.cr6.gt) goto loc_82354214;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 352);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823541a0
	if (ctx.cr6.eq) goto loc_823541A0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_823541A0:
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x823de1f0
	ctx.lr = 0x823541B0;
	sub_823DE1F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82353178
	ctx.lr = 0x823541BC;
	sub_82353178(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2047
	ctx.r5.s64 = 2047;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82353620
	ctx.lr = 0x823541D8;
	sub_82353620(ctx, base);
	// lhz r10,162(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 162);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823541f4
	if (!ctx.cr6.eq) goto loc_823541F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823541f8
	if (ctx.cr6.eq) goto loc_823541F8;
loc_823541F4:
	// li r29,1
	ctx.r29.s64 = 1;
loc_823541F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82350fa8
	ctx.lr = 0x82354208;
	sub_82350FA8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82354178
	if (ctx.cr6.eq) goto loc_82354178;
	// b 0x82354224
	goto loc_82354224;
loc_82354214:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-10516
	ctx.r4.s64 = ctx.r11.s64 + -10516;
	// bl 0x82280c30
	ctx.lr = 0x82354224;
	sub_82280C30(ctx, base);
loc_82354224:
	// lis r28,-31815
	ctx.r28.s64 = -2085027840;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r30,r11,3896
	ctx.r30.s64 = ctx.r11.s64 + 3896;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhz r11,3888(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 3888);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// li r29,0
	ctx.r29.s64 = 0;
	// mulli r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 * 68;
	// lfs f31,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f31,132(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// ble cr6,0x82354354
	if (!ctx.cr6.gt) goto loc_82354354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f30.f64 = double(temp.f32);
loc_8235429C:
	// mulli r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 * 68;
	// lfs f1,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x823542e4
	if (ctx.cr6.eq) goto loc_823542E4;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
loc_823542E4:
	// bl 0x821f2d40
	ctx.lr = 0x823542E8;
	sub_821F2D40(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8235431c
	if (ctx.cr6.lt) goto loc_8235431C;
	// mulli r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 * 68;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lfs f1,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f2d40
	ctx.lr = 0x8235431C;
	sub_821F2D40(ctx, base);
loc_8235431C:
	// lhz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 60);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82354354
	if (ctx.cr6.lt) goto loc_82354354;
	// lhz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82354354
	if (ctx.cr6.eq) goto loc_82354354;
	// lhz r11,3888(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 3888);
	// mulli r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 * 68;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235429c
	if (ctx.cr6.lt) goto loc_8235429C;
loc_82354354:
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354120) {
	__imp__sub_82354120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354364) {
	__imp__sub_82354364(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82354370;
	__savegprlr_26(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32032
	ctx.r28.s64 = -2099249152;
	// lwz r11,-6092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6092);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82354478
	if (ctx.cr6.eq) goto loc_82354478;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// beq cr6,0x82354478
	if (ctx.cr6.eq) goto loc_82354478;
	// lis r26,-31815
	ctx.r26.s64 = -2085027840;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lhz r10,3888(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 3888);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354478
	if (!ctx.cr6.gt) goto loc_82354478;
	// lis r11,-31815
	ctx.r11.s64 = -2085027840;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// addi r29,r11,3896
	ctx.r29.s64 = ctx.r11.s64 + 3896;
loc_823543C0:
	// mulli r11,r31,68
	ctx.r11.s64 = ctx.r31.s64 * 68;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// rlwinm r8,r9,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82354418
	if (!ctx.cr6.eq) goto loc_82354418;
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// bl 0x822a13a0
	ctx.lr = 0x823543E0;
	sub_822A13A0(ctx, base);
	// lwz r11,-6092(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -6092);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_823543E8:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq cr6,0x8235440c
	if (ctx.cr6.eq) goto loc_8235440C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823543e8
	if (ctx.cr6.eq) goto loc_823543E8;
loc_8235440C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82354438
	if (ctx.cr6.eq) goto loc_82354438;
	// lhz r10,3888(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 3888);
loc_82354418:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823543c0
	if (ctx.cr6.lt) goto loc_823543C0;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_82354438:
	// sth r27,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r27.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// sth r27,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r27.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r27,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r27.u16);
	// sth r27,138(r1)
	PPC_STORE_U16(ctx.r1.u32 + 138, ctx.r27.u16);
	// sth r27,200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 200, ctx.r27.u16);
	// sth r27,202(r1)
	PPC_STORE_U16(ctx.r1.u32 + 202, ctx.r27.u16);
	// sth r27,204(r1)
	PPC_STORE_U16(ctx.r1.u32 + 204, ctx.r27.u16);
	// sth r27,206(r1)
	PPC_STORE_U16(ctx.r1.u32 + 206, ctx.r27.u16);
	// bl 0x82352fc8
	ctx.lr = 0x82354464;
	sub_82352FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354478
	if (ctx.cr6.eq) goto loc_82354478;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82354120
	ctx.lr = 0x82354478;
	sub_82354120(ctx, base);
loc_82354478:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354368) {
	__imp__sub_82354368(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354480) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f9,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f31,f8,f9,f11
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fmadds f29,f7,f9,f10
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + ctx.f10.f64));
	// bl 0x8225d7d0
	ctx.lr = 0x823544D0;
	sub_8225D7D0(ctx, base);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8225d7d8
	ctx.lr = 0x823544DC;
	sub_8225D7D8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x8235450c
	if (!ctx.cr6.eq) goto loc_8235450C;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82354534
	if (!ctx.cr6.lt) goto loc_82354534;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82354534
	if (!ctx.cr6.lt) goto loc_82354534;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82354534
	if (!ctx.cr6.gt) goto loc_82354534;
	// b 0x82354524
	goto loc_82354524;
loc_8235450C:
	// fcmpu cr6,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// ble cr6,0x82354534
	if (!ctx.cr6.gt) goto loc_82354534;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82354534
	if (!ctx.cr6.gt) goto loc_82354534;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82354534
	if (!ctx.cr6.lt) goto loc_82354534;
loc_82354524:
	// fabs f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f29.u64 & ~0x8000000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82354538
	if (ctx.cr6.lt) goto loc_82354538;
loc_82354534:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354538:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

PPC_WEAK_FUNC(sub_82354480) {
	__imp__sub_82354480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235455C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235455C) {
	__imp__sub_8235455C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82354568;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de01c
	ctx.lr = 0x82354570;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// fmr f25,f3
	ctx.f25.f64 = ctx.f3.f64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// bl 0x82342948
	ctx.lr = 0x82354594;
	sub_82342948(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f29,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,544(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// lfs f1,248(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x823545B8;
	sub_822D5368(ctx, base);
	// lwz r9,204(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823545e0
	if (ctx.cr6.eq) goto loc_823545E0;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823545e0
	if (ctx.cr6.eq) goto loc_823545E0;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225d778
	ctx.lr = 0x823545DC;
	sub_8225D778(ctx, base);
	// b 0x82354600
	goto loc_82354600;
loc_823545E0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823545fc
	if (!ctx.cr6.eq) goto loc_823545FC;
	// bl 0x8225d708
	ctx.lr = 0x823545F8;
	sub_8225D708(ctx, base);
	// b 0x82354600
	goto loc_82354600;
loc_823545FC:
	// bl 0x8225d6b0
	ctx.lr = 0x82354600;
	sub_8225D6B0(ctx, base);
loc_82354600:
	// lis r11,-32032
	ctx.r11.s64 = -2099249152;
	// lwz r11,-5884(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5884);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235462c
	if (ctx.cr6.eq) goto loc_8235462C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,-2264
	ctx.r5.s64 = ctx.r11.s64 + -2264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821f2d08
	ctx.lr = 0x8235462C;
	sub_821F2D08(ctx, base);
loc_8235462C:
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82354480
	ctx.lr = 0x82354660;
	sub_82354480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354678
	if (ctx.cr6.eq) goto loc_82354678;
	// stfs f29,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// b 0x823547d0
	goto loc_823547D0;
loc_82354678:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235469c
	if (!ctx.cr6.eq) goto loc_8235469C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8235469C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4ac8
	ctx.lr = 0x823546A4;
	sub_822D4AC8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2424(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2424);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f9,f10,f11,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fsubs f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f30.f64));
	// fsubs f7,f31,f9
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f9.f64));
	// fsel f6,f8,f30,f9
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f30.f64 : ctx.f9.f64;
	// fsel f1,f7,f31,f6
	ctx.f1.f64 = ctx.f7.f64 >= 0.0 ? ctx.f31.f64 : ctx.f6.f64;
	// bl 0x823dedc8
	ctx.lr = 0x823546E0;
	sub_823DEDC8(ctx, base);
	// lfs f5,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmuls f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// lis r8,-31815
	ctx.r8.s64 = -2085027840;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,-4636(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4636);
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f11,f1,f13,f2
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f0,532(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// fcmpu cr6,f11,f29
	ctx.cr6.compare(ctx.f11.f64, ctx.f29.f64);
	// ble cr6,0x82354730
	if (!ctx.cr6.gt) goto loc_82354730;
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82354730:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-10456(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82354750
	if (!ctx.cr6.lt) goto loc_82354750;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82354750:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,364(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f28,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f28.f64 + ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823547b4
	if (!ctx.cr6.eq) goto loc_823547B4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-10460(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -10460);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,14192(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fsubs f11,f31,f13
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsel f10,f12,f30,f13
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f30.f64 : ctx.f13.f64;
	// fsel f9,f11,f31,f10
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f10.f64;
	// stfs f9,0(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f8,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// fabs f7,f9
	ctx.f7.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fsel f5,f6,f8,f29
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f29.f64;
	// stfs f5,532(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// b 0x823547d0
	goto loc_823547D0;
loc_823547B4:
	// lfs f13,364(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f9,f11,f13,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fsel f8,f10,f12,f9
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f9.f64;
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_823547D0:
	// fmuls f0,f25,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f25.f64 * ctx.f27.f64));
	// stfs f26,536(r31)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stfs f27,548(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f29,552(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// bl 0x8225d968
	ctx.lr = 0x823547EC;
	sub_8225D968(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de068
	ctx.lr = 0x823547F8;
	__restfpr_25(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354560) {
	__imp__sub_82354560(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823547FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823547FC) {
	__imp__sub_823547FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354800) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// bge cr6,0x82354838
	if (!ctx.cr6.lt) goto loc_82354838;
	// fmuls f0,f1,f1
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8235483c
	goto loc_8235483C;
loc_82354838:
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
loc_8235483C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f3,368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f2.f64 = double(temp.f32);
	// lfs f31,-23144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x822d44d0
	ctx.lr = 0x82354854;
	sub_822D44D0(ctx, base);
	// fabs f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// stfs f1,532(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82354868
	if (!ctx.cr6.lt) goto loc_82354868;
	// stfs f30,532(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_82354868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82354800) {
	__imp__sub_82354800(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354884) {
	__imp__sub_82354884(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354888) {
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
	// lfs f3,368(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 368);
	ctx.f3.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bne cr6,0x823548f8
	if (!ctx.cr6.eq) goto loc_823548F8;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// bge cr6,0x823548e0
	if (!ctx.cr6.lt) goto loc_823548E0;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,532(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
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
loc_823548E0:
	// stfs f12,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
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
loc_823548F8:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82354948
	if (!ctx.cr6.lt) goto loc_82354948;
	// lfs f13,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f2,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// bge cr6,0x82354930
	if (!ctx.cr6.lt) goto loc_82354930;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82354970
	if (ctx.cr6.gt) goto loc_82354970;
loc_82354924:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f4,-23144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23144);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x822d44d0
	ctx.lr = 0x82354930;
	sub_822D44D0(ctx, base);
loc_82354930:
	// stfs f1,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
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
loc_82354948:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82354930
	if (!ctx.cr6.gt) goto loc_82354930;
	// lfs f13,364(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f2,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// fcmpu cr6,f1,f2
	ctx.cr6.compare(ctx.f1.f64, ctx.f2.f64);
	// ble cr6,0x82354930
	if (!ctx.cr6.gt) goto loc_82354930;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x82354924
	if (!ctx.cr6.lt) goto loc_82354924;
loc_82354970:
	// stfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
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

PPC_WEAK_FUNC(sub_82354888) {
	__imp__sub_82354888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82354990;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x82354998;
	__savefpr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823549A8;
	sub_82342948(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r9,26552
	ctx.r11.s64 = ctx.r9.s64 + 26552;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lhz r6,256(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 256);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// mulli r10,r6,624
	ctx.r10.s64 = ctx.r6.s64 * 624;
	// lfs f29,17312(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17312);
	ctx.f29.f64 = double(temp.f32);
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,-360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// addi r29,r29,-21336
	ctx.r29.s64 = ctx.r29.s64 + -21336;
	// lbz r10,27(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 27);
	// extsb r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// bne cr6,0x82354a24
	if (!ctx.cr6.eq) goto loc_82354A24;
	// bl 0x82354800
	ctx.lr = 0x82354A20;
	sub_82354800(ctx, base);
	// b 0x82354ab8
	goto loc_82354AB8;
loc_82354A24:
	// bl 0x82354888
	ctx.lr = 0x82354A28;
	sub_82354888(ctx, base);
	// lfs f13,372(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x82354a6c
	if (ctx.cr6.eq) goto loc_82354A6C;
	// lfs f0,376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82354a6c
	if (!ctx.cr6.gt) goto loc_82354A6C;
	// lfs f12,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f10,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f30
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f30,f11
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f30.f64 : ctx.f11.f64;
	// fsel f6,f8,f31,f7
	ctx.f6.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f7.f64;
	// fsubs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// fmadds f4,f13,f6,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// stfs f3,532(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_82354A6C:
	// lbz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// bge cr6,0x82354aa4
	if (!ctx.cr6.lt) goto loc_82354AA4;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,552(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// b 0x82354aa8
	goto loc_82354AA8;
loc_82354AA4:
	// stfs f0,552(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
loc_82354AA8:
	// lfs f0,364(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,552(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 552);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,552(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
loc_82354AB8:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225e0f0
	ctx.lr = 0x82354AC0;
	sub_8225E0F0(ctx, base);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// bl 0x8225e0f8
	ctx.lr = 0x82354ACC;
	sub_8225E0F8(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82354b30
	if (ctx.cr6.eq) goto loc_82354B30;
	// lbz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 28);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f11,872(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r8,r9,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82354b0c
	if (ctx.cr6.eq) goto loc_82354B0C;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x82354b10
	goto loc_82354B10;
loc_82354B0C:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_82354B10:
	// lfs f13,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f0,876(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f11,536(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f12,540(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// b 0x82354bb8
	goto loc_82354BB8;
loc_82354B30:
	// lbz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82354b78
	if (!ctx.cr6.gt) goto loc_82354B78;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f31,548(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f11,872(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// fmuls f9,f11,f28
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f28.f64));
	// stfs f9,536(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// b 0x82354bb8
	goto loc_82354BB8;
loc_82354B78:
	// stfs f31,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// lbz r11,26(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 26);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// stfs f31,536(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f11,876(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// stfs f11,548(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// stfs f9,540(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
loc_82354BB8:
	// stfs f31,544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225d968
	ctx.lr = 0x82354BC8;
	sub_8225D968(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x82354BD4;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354988) {
	__imp__sub_82354988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354BD8) {
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
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82354BF4;
	sub_82342948(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r11,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82354c1c
	if (ctx.cr6.eq) goto loc_82354C1C;
	// lfs f13,364(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,532(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// b 0x82354c3c
	goto loc_82354C3C;
loc_82354C1C:
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354c38
	if (ctx.cr6.eq) goto loc_82354C38;
	// lfs f13,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,532(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
	// b 0x82354c3c
	goto loc_82354C3C;
loc_82354C38:
	// stfs f0,532(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 532, temp.u32);
loc_82354C3C:
	// lfs f13,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r31,532
	ctx.r4.s64 = ctx.r31.s64 + 532;
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// bl 0x8225d968
	ctx.lr = 0x82354C60;
	sub_8225D968(ctx, base);
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

PPC_WEAK_FUNC(sub_82354BD8) {
	__imp__sub_82354BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354C74) {
	__imp__sub_82354C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82354C80;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de028
	ctx.lr = 0x82354C88;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82354C98;
	sub_82342948(ctx, base);
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// bge cr6,0x82354dec
	if (!ctx.cr6.lt) goto loc_82354DEC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353168
	ctx.lr = 0x82354CB4;
	sub_82353168(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354dec
	if (!ctx.cr6.eq) goto loc_82354DEC;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225ae78
	ctx.lr = 0x82354CC8;
	sub_8225AE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82354cf8
	if (ctx.cr6.eq) goto loc_82354CF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// b 0x82354d78
	goto loc_82354D78;
loc_82354CF8:
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// lfs f0,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 872);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// beq cr6,0x82354d40
	if (ctx.cr6.eq) goto loc_82354D40;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f13,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82354d6c
	if (!ctx.cr6.eq) goto loc_82354D6C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82354d78
	goto loc_82354D78;
loc_82354D40:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f13,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,5484
	ctx.r11.s64 = ctx.r11.s64 + 5484;
	// lfs f31,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82354d6c
	if (!ctx.cr6.eq) goto loc_82354D6C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// lfs f29,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// b 0x82354d78
	goto loc_82354D78;
loc_82354D6C:
	// lfs f29,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f29.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82354D78:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82354d98
	if (ctx.cr6.eq) goto loc_82354D98;
	// lwz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82354d98
	if (ctx.cr6.eq) goto loc_82354D98;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82354db4
	goto loc_82354DB4;
loc_82354D98:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82354db0
	if (!ctx.cr6.eq) goto loc_82354DB0;
	// bl 0x8225d768
	ctx.lr = 0x82354DAC;
	sub_8225D768(ctx, base);
	// b 0x82354db4
	goto loc_82354DB4;
loc_82354DB0:
	// bl 0x8225d760
	ctx.lr = 0x82354DB4;
	sub_8225D760(ctx, base);
loc_82354DB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// bl 0x82353470
	ctx.lr = 0x82354DC0;
	sub_82353470(ctx, base);
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82354560
	ctx.lr = 0x82354DDC;
	sub_82354560(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x82354DE8;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82354DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82354bd8
	ctx.lr = 0x82354DF4;
	sub_82354BD8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de074
	ctx.lr = 0x82354E00;
	__restfpr_28(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354C78) {
	__imp__sub_82354C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354E04) {
	__imp__sub_82354E04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E08) {
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
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,-8300
	ctx.r3.s64 = ctx.r11.s64 + -8300;
	// bl 0x822e84f0
	ctx.lr = 0x82354E24;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82354E28;
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

PPC_WEAK_FUNC(sub_82354E08) {
	__imp__sub_82354E08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,576(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x822acc78
	sub_822ACC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354E38) {
	__imp__sub_82354E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354E4C) {
	__imp__sub_82354E4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,580(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 580);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9176(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x822acc78
	sub_822ACC78(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354E50) {
	__imp__sub_82354E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354E64) {
	__imp__sub_82354E64(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354E68) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82354E84;
	sub_822B20B8(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82354ebc
	if (!ctx.cr6.eq) goto loc_82354EBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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
loc_82354EBC:
	// lhz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354ee4
	if (!ctx.cr6.eq) goto loc_82354EE4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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
loc_82354EE4:
	// bl 0x822a13a0
	ctx.lr = 0x82354EE8;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8264
	ctx.r3.s64 = ctx.r11.s64 + -8264;
	// bl 0x822e84f0
	ctx.lr = 0x82354EF8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82354EFC;
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
}

PPC_WEAK_FUNC(sub_82354E68) {
	__imp__sub_82354E68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354F10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82354f2c
	if (!ctx.cr6.eq) goto loc_82354F2C;
	// lhz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_82354F2C:
	// lhz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 148);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354F10) {
	__imp__sub_82354F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354F34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82354F34) {
	__imp__sub_82354F34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354F38) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82354F54;
	sub_822B20B8(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r10,-25976
	ctx.r10.s64 = ctx.r10.s64 + -25976;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r9,76(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82354f8c
	if (!ctx.cr6.eq) goto loc_82354F8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
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
loc_82354F8C:
	// lhz r11,148(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354fb4
	if (!ctx.cr6.eq) goto loc_82354FB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
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
loc_82354FB4:
	// bl 0x822a13a0
	ctx.lr = 0x82354FB8;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8184
	ctx.r3.s64 = ctx.r11.s64 + -8184;
	// bl 0x822e84f0
	ctx.lr = 0x82354FC8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82354FCC;
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
}

PPC_WEAK_FUNC(sub_82354F38) {
	__imp__sub_82354F38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82354FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,204(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// bne cr6,0x82354ffc
	if (!ctx.cr6.eq) goto loc_82354FFC;
	// lhz r3,76(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 76);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_82354FFC:
	// lhz r3,148(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 148);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82354FE0) {
	__imp__sub_82354FE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355004) {
	__imp__sub_82355004(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82355010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82355020;
	sub_822B20B8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-25976
	ctx.r30.s64 = ctx.r11.s64 + -25976;
	// lhz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 424);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235505c
	if (!ctx.cr6.eq) goto loc_8235505C;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 968, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82355104
	if (!ctx.cr6.eq) goto loc_82355104;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8235505C:
	// lhz r3,426(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 426);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x823550c8
	if (!ctx.cr6.eq) goto loc_823550C8;
	// lwz r11,528(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235508c
	if (!ctx.cr6.eq) goto loc_8235508C;
	// bl 0x822a13a0
	ctx.lr = 0x82355078;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8048
	ctx.r3.s64 = ctx.r11.s64 + -8048;
	// bl 0x822e84f0
	ctx.lr = 0x82355088;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8235508C;
	sub_822AD350(ctx, base);
loc_8235508C:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,968(r29)
	PPC_STORE_U32(ctx.r29.u32 + 968, ctx.r10.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82355104
	if (!ctx.cr6.eq) goto loc_82355104;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,872(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 872, temp.u32);
	// stfs f13,876(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 876, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823550C8:
	// bl 0x822a13a0
	ctx.lr = 0x823550CC;
	sub_822A13A0(ctx, base);
	// lhz r11,424(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 424);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x822a13a0
	ctx.lr = 0x823550DC;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x823550E8;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-8104
	ctx.r3.s64 = ctx.r11.s64 + -8104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82355100;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82355104;
	sub_822AD350(ctx, base);
loc_82355104:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355008) {
	__imp__sub_82355008(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235510C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235510C) {
	__imp__sub_8235510C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,968(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 968);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82355130
	if (ctx.cr6.lt) goto loc_82355130;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,424(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 424);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
loc_82355130:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// lhz r3,426(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 426);
	// b 0x822acff0
	sub_822ACFF0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355110) {
	__imp__sub_82355110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355140) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82355140) {
	__imp__sub_82355140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355144) {
	__imp__sub_82355144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355148) {
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
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355178
	if (!ctx.cr6.eq) goto loc_82355178;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7920
	ctx.r3.s64 = ctx.r11.s64 + -7920;
	// bl 0x822ad350
	ctx.lr = 0x82355178;
	sub_822AD350(ctx, base);
loc_82355178:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82355180;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x823551ac
	if (!ctx.cr6.lt) goto loc_823551AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-7952
	ctx.r4.s64 = ctx.r11.s64 + -7952;
	// bl 0x822ad4e0
	ctx.lr = 0x823551AC;
	sub_822AD4E0(ctx, base);
loc_823551AC:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8225e0d0
	ctx.lr = 0x823551B8;
	sub_8225E0D0(ctx, base);
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

PPC_WEAK_FUNC(sub_82355148) {
	__imp__sub_82355148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823551D0) {
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
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235520c
	if (ctx.cr6.eq) goto loc_8235520C;
	// bl 0x8225e0f0
	ctx.lr = 0x823551EC;
	sub_8225E0F0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,9176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x823551FC;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235520C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x82355218;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823551D0) {
	__imp__sub_823551D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355228) {
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
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355258
	if (!ctx.cr6.eq) goto loc_82355258;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7836
	ctx.r3.s64 = ctx.r11.s64 + -7836;
	// bl 0x822ad350
	ctx.lr = 0x82355258;
	sub_822AD350(ctx, base);
loc_82355258:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82355260;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82355284
	if (ctx.cr6.lt) goto loc_82355284;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82355290
	if (!ctx.cr6.gt) goto loc_82355290;
loc_82355284:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7872
	ctx.r3.s64 = ctx.r11.s64 + -7872;
	// bl 0x822ad350
	ctx.lr = 0x82355290;
	sub_822AD350(ctx, base);
loc_82355290:
	// stfs f31,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
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

PPC_WEAK_FUNC(sub_82355228) {
	__imp__sub_82355228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823552AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823552AC) {
	__imp__sub_823552AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823552B0) {
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
	// lwz r11,528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823552e0
	if (!ctx.cr6.eq) goto loc_823552E0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7696
	ctx.r3.s64 = ctx.r11.s64 + -7696;
	// bl 0x822ad350
	ctx.lr = 0x823552E0;
	sub_822AD350(ctx, base);
loc_823552E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x823552f8
	if (ctx.cr6.eq) goto loc_823552F8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7760
	ctx.r3.s64 = ctx.r11.s64 + -7760;
	// bl 0x822ad350
	ctx.lr = 0x823552F8;
	sub_822AD350(ctx, base);
loc_823552F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82355300;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82355320
	if (!ctx.cr6.lt) goto loc_82355320;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7792
	ctx.r3.s64 = ctx.r11.s64 + -7792;
	// bl 0x822ad350
	ctx.lr = 0x82355320;
	sub_822AD350(ctx, base);
loc_82355320:
	// stfs f31,872(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
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

PPC_WEAK_FUNC(sub_823552B0) {
	__imp__sub_823552B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235533C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235533C) {
	__imp__sub_8235533C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82355348;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r30,r11,-9216
	ctx.r30.s64 = ctx.r11.s64 + -9216;
	// lwz r4,-9216(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -9216);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8235538c
	if (ctx.cr6.eq) goto loc_8235538C;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,20
	ctx.r29.s64 = 20;
loc_82355368:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// ori r5,r10,32768
	ctx.r5.u64 = ctx.r10.u64 | 32768;
	// bl 0x822a8a78
	ctx.lr = 0x8235537C;
	sub_822A8A78(ctx, base);
	// lwzu r4,20(r30)
	ea = 20 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82355368
	if (!ctx.cr6.eq) goto loc_82355368;
loc_8235538C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355340) {
	__imp__sub_82355340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355394) {
	__imp__sub_82355394(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355398) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-9216
	ctx.r10.s64 = ctx.r10.s64 + -9216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823553c4
	if (ctx.cr6.eq) goto loc_823553C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823553C4:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222aa38
	sub_8222AA38(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355398) {
	__imp__sub_82355398(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823553D0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r10,-9216
	ctx.r10.s64 = ctx.r10.s64 + -9216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823553fc
	if (ctx.cr6.eq) goto loc_823553FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_823553FC:
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823553D0) {
	__imp__sub_823553D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82355410;
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
	// beq cr6,0x82355454
	if (ctx.cr6.eq) goto loc_82355454;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x8235543C;
	sub_822AD548(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82355454:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r8,624
	ctx.r10.s64 = ctx.r8.s64 * 624;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r9,-24004
	ctx.r30.s64 = ctx.r9.s64 + -24004;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// bne cr6,0x823554e8
	if (!ctx.cr6.eq) goto loc_823554E8;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355494
	if (ctx.cr6.eq) goto loc_82355494;
	// bl 0x822a13a0
	ctx.lr = 0x8235548C;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82355498
	goto loc_82355498;
loc_82355494:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82355498:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x823554AC;
	sub_822A13A0(ctx, base);
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-7544
	ctx.r3.s64 = ctx.r11.s64 + -7544;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x823554E4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823554E8;
	sub_822AD350(ctx, base);
loc_823554E8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,334(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 334);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82355564
	if (ctx.cr6.eq) goto loc_82355564;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355514
	if (ctx.cr6.eq) goto loc_82355514;
	// bl 0x822a13a0
	ctx.lr = 0x82355510;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82355514:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x82355528;
	sub_822A13A0(ctx, base);
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-7648
	ctx.r3.s64 = ctx.r11.s64 + -7648;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82355560;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82355564;
	sub_822AD350(ctx, base);
loc_82355564:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82355408) {
	__imp__sub_82355408(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235557C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235557C) {
	__imp__sub_8235557C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82355588;
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
	// beq cr6,0x823555b4
	if (ctx.cr6.eq) goto loc_823555B4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,-17496
	ctx.r3.s64 = ctx.r11.s64 + -17496;
	// bl 0x822ad548
	ctx.lr = 0x823555B4;
	sub_822AD548(ctx, base);
loc_823555B4:
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// lhz r8,164(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 164);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r10,26552
	ctx.r11.s64 = ctx.r10.s64 + 26552;
	// mulli r10,r8,624
	ctx.r10.s64 = ctx.r8.s64 * 624;
	// lbzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r9,-24004
	ctx.r30.s64 = ctx.r9.s64 + -24004;
	// cmplwi cr6,r7,12
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 12, ctx.xer);
	// beq cr6,0x82355648
	if (ctx.cr6.eq) goto loc_82355648;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823555f4
	if (ctx.cr6.eq) goto loc_823555F4;
	// bl 0x822a13a0
	ctx.lr = 0x823555EC;
	sub_822A13A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823555f8
	goto loc_823555F8;
loc_823555F4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823555F8:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x8235560C;
	sub_822A13A0(ctx, base);
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82355644;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82355648;
	sub_822AD350(ctx, base);
loc_82355648:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lhz r10,292(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// lhz r8,334(r9)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + 334);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823556c4
	if (ctx.cr6.eq) goto loc_823556C4;
	// lhz r3,302(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 302);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355674
	if (ctx.cr6.eq) goto loc_82355674;
	// bl 0x822a13a0
	ctx.lr = 0x82355670;
	sub_822A13A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82355674:
	// lfs f31,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lhz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 292);
	// lfs f30,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822a13a0
	ctx.lr = 0x82355688;
	sub_822A13A0(ctx, base);
	// stfd f29,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f29.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f30.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f31,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f31.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r3,r11,-7464
	ctx.r3.s64 = ctx.r11.s64 + -7464;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822e84f0
	ctx.lr = 0x823556C0;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823556C4;
	sub_822AD350(ctx, base);
loc_823556C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_82355580) {
	__imp__sub_82355580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823556DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823556DC) {
	__imp__sub_823556DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823556E0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_823556FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343610
	ctx.lr = 0x82355704;
	sub_82343610(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355714
	if (ctx.cr6.eq) goto loc_82355714;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82355714:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x823556fc
	if (ctx.cr6.lt) goto loc_823556FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822acbf8
	ctx.lr = 0x82355728;
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

PPC_WEAK_FUNC(sub_823556E0) {
	__imp__sub_823556E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355740) {
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
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// addi r10,r11,9624
	ctx.r10.s64 = ctx.r11.s64 + 9624;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235576c
	if (!ctx.cr6.eq) goto loc_8235576C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7264
	ctx.r3.s64 = ctx.r11.s64 + -7264;
	// bl 0x822ad350
	ctx.lr = 0x8235576C;
	sub_822AD350(ctx, base);
loc_8235576C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82355774;
	sub_822B2288(ctx, base);
	// bl 0x82342858
	ctx.lr = 0x82355778;
	sub_82342858(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82355740) {
	__imp__sub_82355740(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82355790;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x8235579C;
	sub_822B2288(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b20b8
	ctx.lr = 0x823557A8;
	sub_822B20B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b20b8
	ctx.lr = 0x823557B4;
	sub_822B20B8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b2498
	ctx.lr = 0x823557C4;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822b2498
	ctx.lr = 0x823557D0;
	sub_822B2498(ctx, base);
	// bl 0x8222f3a8
	ctx.lr = 0x823557D4;
	sub_8222F3A8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-25976
	ctx.r27.s64 = ctx.r11.s64 + -25976;
	// addi r3,r3,292
	ctx.r3.s64 = ctx.r3.s64 + 292;
	// lhz r4,334(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 334);
	// bl 0x822a24e0
	ctx.lr = 0x823557EC;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// lhz r4,334(r27)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r27.u32 + 334);
	// bl 0x822a24e0
	ctx.lr = 0x823557F8;
	sub_822A24E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8222eb90
	ctx.lr = 0x82355804;
	sub_8222EB90(ctx, base);
	// addi r3,r31,302
	ctx.r3.s64 = ctx.r31.s64 + 302;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822a24e0
	ctx.lr = 0x82355810;
	sub_822A24E0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,232(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,236(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,240(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,244(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,248(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,252(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// bl 0x822a13a0
	ctx.lr = 0x82355848;
	sub_822A13A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x82348750
	ctx.lr = 0x8235585C;
	sub_82348750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x82355864;
	sub_82229B60(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355788) {
	__imp__sub_82355788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235586C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235586C) {
	__imp__sub_8235586C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355870) {
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
	// bl 0x822acb68
	ctx.lr = 0x82355884;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355898
	if (ctx.cr6.eq) goto loc_82355898;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// bl 0x822ad350
	ctx.lr = 0x82355898;
	sub_822AD350(ctx, base);
loc_82355898:
	// bl 0x822ad190
	ctx.lr = 0x8235589C;
	sub_822AD190(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_823558A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343610
	ctx.lr = 0x823558A8;
	sub_82343610(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823558c8
	if (ctx.cr6.eq) goto loc_823558C8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x823558c8
	if (ctx.cr6.eq) goto loc_823558C8;
	// bl 0x82229b60
	ctx.lr = 0x823558C4;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x823558C8;
	sub_822AD208(ctx, base);
loc_823558C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x823558a0
	if (ctx.cr6.lt) goto loc_823558A0;
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

PPC_WEAK_FUNC(sub_82355870) {
	__imp__sub_82355870(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823558E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823558F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x822acb68
	ctx.lr = 0x823558F8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235590c
	if (ctx.cr6.eq) goto loc_8235590C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7144
	ctx.r3.s64 = ctx.r11.s64 + -7144;
	// bl 0x822ad350
	ctx.lr = 0x8235590C;
	sub_822AD350(ctx, base);
loc_8235590C:
	// bl 0x822ad190
	ctx.lr = 0x82355910;
	sub_822AD190(ctx, base);
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,9624
	ctx.r30.s64 = ctx.r11.s64 + 9624;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82355970
	if (!ctx.cr6.gt) goto loc_82355970;
	// lis r11,-32024
	ctx.r11.s64 = -2098724864;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r28,r11,11296
	ctx.r28.s64 = ctx.r11.s64 + 11296;
loc_82355934:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x82355960
	if (!ctx.cr6.eq) goto loc_82355960;
	// lbzx r11,r28,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355960
	if (ctx.cr6.eq) goto loc_82355960;
	// bl 0x82229b60
	ctx.lr = 0x82355958;
	sub_82229B60(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x8235595C;
	sub_822AD208(ctx, base);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_82355960:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,624
	ctx.r31.s64 = ctx.r31.s64 + 624;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82355934
	if (ctx.cr6.lt) goto loc_82355934;
loc_82355970:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823558E8) {
	__imp__sub_823558E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x82355980;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r3,560(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 560);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// bl 0x82342948
	ctx.lr = 0x82355998;
	sub_82342948(ctx, base);
	// lwz r27,0(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r26,216
	ctx.r31.s64 = ctx.r26.s64 + 216;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// xori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 ^ 2;
	// stw r10,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r10.u32);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,216(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 216, temp.u32);
	// lfs f13,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,220(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 220, temp.u32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,224(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 224, temp.u32);
	// lfs f11,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,240(r26)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r26.u32 + 240, temp.u32);
	// lfs f10,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,244(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 244, temp.u32);
	// lfs f9,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,248(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 248, temp.u32);
	// bl 0x82343958
	ctx.lr = 0x823559F8;
	sub_82343958(ctx, base);
	// lfs f8,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,228(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 228, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f7,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f7,232(r26)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r26.u32 + 232, temp.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lfs f6,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// stfs f6,236(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 236, temp.u32);
	// lfs f5,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,252(r26)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r26.u32 + 252, temp.u32);
	// lfs f4,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,256(r26)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r26.u32 + 256, temp.u32);
	// lfs f3,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,260(r26)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r26.u32 + 260, temp.u32);
	// bl 0x82343900
	ctx.lr = 0x82355A3C;
	sub_82343900(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355a50
	if (ctx.cr6.eq) goto loc_82355A50;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82355a60
	if (!ctx.cr6.eq) goto loc_82355A60;
loc_82355A50:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82344ae0
	ctx.lr = 0x82355A60;
	sub_82344AE0(ctx, base);
loc_82355A60:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r25,r11,-5928
	ctx.r25.s64 = ctx.r11.s64 + -5928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82343958
	ctx.lr = 0x82355A7C;
	sub_82343958(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r29)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r28)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,4(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,8(r28)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// lwz r3,528(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355acc
	if (ctx.cr6.eq) goto loc_82355ACC;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225ba60
	ctx.lr = 0x82355ACC;
	sub_8225BA60(ctx, base);
loc_82355ACC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355978) {
	__imp__sub_82355978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355AD4) {
	__imp__sub_82355AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355AD8) {
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
	// bl 0x82355408
	ctx.lr = 0x82355AEC;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b2498
	ctx.lr = 0x82355B00;
	sub_822B2498(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x82355B0C;
	sub_822B2498(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355978
	ctx.lr = 0x82355B1C;
	sub_82355978(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82355b30
	if (ctx.cr6.eq) goto loc_82355B30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82355b60
	if (!ctx.cr6.eq) goto loc_82355B60;
loc_82355B30:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
loc_82355B60:
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

PPC_WEAK_FUNC(sub_82355AD8) {
	__imp__sub_82355AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355B74) {
	__imp__sub_82355B74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355B78) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x82355B90;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x82353de8
	ctx.lr = 0x82355BA0;
	sub_82353DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82352fc8
	ctx.lr = 0x82355BAC;
	sub_82352FC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82355bc4
	if (!ctx.cr6.eq) goto loc_82355BC4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7088
	ctx.r3.s64 = ctx.r11.s64 + -7088;
	// bl 0x822ad350
	ctx.lr = 0x82355BC4;
	sub_822AD350(ctx, base);
loc_82355BC4:
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82355c28
	if (!ctx.cr6.eq) goto loc_82355C28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82355C10;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82355C28:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82355978
	ctx.lr = 0x82355C38;
	sub_82355978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82355B78) {
	__imp__sub_82355B78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82355C58;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x82355C64;
	sub_82355408(ctx, base);
	// lwz r30,276(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82355C74;
	sub_82342948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82353de8
	ctx.lr = 0x82355C80;
	sub_82353DE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82352fc8
	ctx.lr = 0x82355C8C;
	sub_82352FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355ca4
	if (!ctx.cr6.eq) goto loc_82355CA4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7044
	ctx.r3.s64 = ctx.r11.s64 + -7044;
	// bl 0x822ad350
	ctx.lr = 0x82355CA4;
	sub_822AD350(ctx, base);
loc_82355CA4:
	// li r5,312
	ctx.r5.s64 = 312;
	// addi r4,r30,216
	ctx.r4.s64 = ctx.r30.s64 + 216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dd768
	ctx.lr = 0x82355CB4;
	sub_822DD768(ctx, base);
	// lfs f13,432(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,428(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,436(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	ctx.f9.f64 = double(temp.f32);
	// stfs f13,108(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f11,88(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f10,104(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82355d30
	if (!ctx.cr6.eq) goto loc_82355D30;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5812(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f0,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82355D18;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82355D30:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82343900
	ctx.lr = 0x82355D3C;
	sub_82343900(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82355d50
	if (ctx.cr6.eq) goto loc_82355D50;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82355d60
	if (!ctx.cr6.eq) goto loc_82355D60;
loc_82355D50:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82344ae0
	ctx.lr = 0x82355D60;
	sub_82344AE0(ctx, base);
loc_82355D60:
	// bl 0x822ad190
	ctx.lr = 0x82355D64;
	sub_822AD190(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ad078
	ctx.lr = 0x82355D6C;
	sub_822AD078(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82355D70;
	sub_822AD208(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x822ad078
	ctx.lr = 0x82355D78;
	sub_822AD078(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82355D7C;
	sub_822AD208(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82355C50) {
	__imp__sub_82355C50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355D88) {
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
	// bl 0x82355408
	ctx.lr = 0x82355DA0;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x822acb68
	ctx.lr = 0x82355DA8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355e14
	if (ctx.cr6.eq) goto loc_82355E14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82353de8
	ctx.lr = 0x82355DB8;
	sub_82353DE8(ctx, base);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82352fc8
	ctx.lr = 0x82355DC8;
	sub_82352FC8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355de0
	if (!ctx.cr6.eq) goto loc_82355DE0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6900
	ctx.r3.s64 = ctx.r11.s64 + -6900;
	// bl 0x822ad350
	ctx.lr = 0x82355DE0;
	sub_822AD350(ctx, base);
loc_82355DE0:
	// lfs f0,216(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f13,220(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f12,224(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f11,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,44(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f10,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,48(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f9,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,52(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x82355e30
	goto loc_82355E30;
loc_82355E14:
	// lhz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// blt cr6,0x82355e30
	if (ctx.cr6.lt) goto loc_82355E30;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-7000
	ctx.r3.s64 = ctx.r11.s64 + -7000;
	// bl 0x822ad350
	ctx.lr = 0x82355E30;
	sub_822AD350(ctx, base);
loc_82355E30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82353150
	ctx.lr = 0x82355E38;
	sub_82353150(ctx, base);
	// lwz r11,968(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 968);
	// lfs f0,576(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82355e7c
	if (ctx.cr6.eq) goto loc_82355E7C;
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82355e7c
	if (ctx.cr6.eq) goto loc_82355E7C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,872(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 872, temp.u32);
	// stfs f13,876(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// b 0x82355e84
	goto loc_82355E84;
loc_82355E7C:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82355E84:
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

PPC_WEAK_FUNC(sub_82355D88) {
	__imp__sub_82355D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355E9C) {
	__imp__sub_82355E9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355EA0) {
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
	// bl 0x82355408
	ctx.lr = 0x82355EB4;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82355ed0
	if (!ctx.cr6.eq) goto loc_82355ED0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6856
	ctx.r3.s64 = ctx.r11.s64 + -6856;
	// bl 0x822ad350
	ctx.lr = 0x82355ED0;
	sub_822AD350(ctx, base);
loc_82355ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823584d8
	ctx.lr = 0x82355ED8;
	sub_823584D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82359f78
	ctx.lr = 0x82355EE4;
	sub_82359F78(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82355EA0) {
	__imp__sub_82355EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355F00) {
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
	// bl 0x82355408
	ctx.lr = 0x82355F18;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x82353de8
	ctx.lr = 0x82355F28;
	sub_82353DE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82353de8
	ctx.lr = 0x82355F34;
	sub_82353DE8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82353a10
	ctx.lr = 0x82355F44;
	sub_82353A10(ctx, base);
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

PPC_WEAK_FUNC(sub_82355F00) {
	__imp__sub_82355F00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355F5C) {
	__imp__sub_82355F5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355F60) {
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
	// bl 0x82355408
	ctx.lr = 0x82355F74;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x82353de8
	ctx.lr = 0x82355F84;
	sub_82353DE8(ctx, base);
	// sth r3,584(r31)
	PPC_STORE_U16(ctx.r31.u32 + 584, ctx.r3.u16);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r10,-6816
	ctx.r4.s64 = ctx.r10.s64 + -6816;
	// bl 0x82280c30
	ctx.lr = 0x82355F98;
	sub_82280C30(ctx, base);
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

PPC_WEAK_FUNC(sub_82355F60) {
	__imp__sub_82355F60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82355FAC) {
	__imp__sub_82355FAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82355FB0) {
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
	// bl 0x82355408
	ctx.lr = 0x82355FC4;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82355FD4;
	sub_822B1FB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,588(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 588, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82356004
	if (!ctx.cr6.lt) goto loc_82356004;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6728
	ctx.r4.s64 = ctx.r11.s64 + -6728;
	// bl 0x822ad4e0
	ctx.lr = 0x82356004;
	sub_822AD4E0(ctx, base);
loc_82356004:
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

PPC_WEAK_FUNC(sub_82355FB0) {
	__imp__sub_82355FB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82356020;
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
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x8235603C;
	sub_82342948(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82356050;
	sub_822B1FB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,5624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// lfs f30,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,724(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82356084
	if (!ctx.cr6.lt) goto loc_82356084;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6516
	ctx.r4.s64 = ctx.r11.s64 + -6516;
	// bl 0x822ad4e0
	ctx.lr = 0x82356080;
	sub_822AD4E0(ctx, base);
	// stfs f30,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
loc_82356084:
	// bl 0x822acb68
	ctx.lr = 0x82356088;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x823560bc
	if (!ctx.cr6.gt) goto loc_823560BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82356098;
	sub_822B1FB0(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823560d8
	if (ctx.cr6.gt) goto loc_823560D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6544
	ctx.r4.s64 = ctx.r11.s64 + -6544;
	// bl 0x822ad4e0
	ctx.lr = 0x823560B8;
	sub_822AD4E0(ctx, base);
	// b 0x823560d4
	goto loc_823560D4;
loc_823560BC:
	// lfs f0,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823560d8
	if (ctx.cr6.gt) goto loc_823560D8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6588
	ctx.r3.s64 = ctx.r11.s64 + -6588;
	// bl 0x822ad350
	ctx.lr = 0x823560D4;
	sub_822AD350(ctx, base);
loc_823560D4:
	// stfs f31,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
loc_823560D8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8235611c
	if (!ctx.cr6.eq) goto loc_8235611C;
	// lfs f0,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,576(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8235611c
	if (!ctx.cr6.gt) goto loc_8235611C;
	// lfs f13,728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8235611c
	if (!ctx.cr6.lt) goto loc_8235611C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lhz r5,126(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r4,r11,-6652
	ctx.r4.s64 = ctx.r11.s64 + -6652;
	// bl 0x82280c30
	ctx.lr = 0x82356114;
	sub_82280C30(ctx, base);
	// lfs f0,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
loc_8235611C:
	// bl 0x822acb68
	ctx.lr = 0x82356120;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82356164
	if (!ctx.cr6.gt) goto loc_82356164;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82356130;
	sub_822B1FB0(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// stfs f0,732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82356178
	if (ctx.cr6.gt) goto loc_82356178;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-6680
	ctx.r4.s64 = ctx.r11.s64 + -6680;
	// bl 0x822ad4e0
	ctx.lr = 0x82356150;
	sub_822AD4E0(ctx, base);
	// stfs f31,732(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82356164:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,732(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
loc_82356178:
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

PPC_WEAK_FUNC(sub_82356018) {
	__imp__sub_82356018(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356188) {
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
	// bl 0x82355408
	ctx.lr = 0x82356198;
	sub_82355408(ctx, base);
	// bl 0x82356018
	ctx.lr = 0x8235619C;
	sub_82356018(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356188) {
	__imp__sub_82356188(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823561AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823561AC) {
	__imp__sub_823561AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823561B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823561B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x823561C0;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823561D0;
	sub_82342948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82356018
	ctx.lr = 0x823561DC;
	sub_82356018(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82356294
	if (!ctx.cr6.eq) goto loc_82356294;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82356294
	if (!ctx.cr6.eq) goto loc_82356294;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,232
	ctx.r11.s64 = ctx.r30.s64 + 232;
	// lfs f13,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82356228
	if (!ctx.cr6.eq) goto loc_82356228;
	// lfs f0,820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82356228
	if (!ctx.cr6.eq) goto loc_82356228;
	// lfs f0,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82356294
	if (ctx.cr6.eq) goto loc_82356294;
loc_82356228:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,816(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f12,820(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 820);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f9,824(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 824);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fmadds f6,f7,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f10.f64));
	// lfs f12,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f2,f3,f12,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f12.f64 : ctx.f4.f64;
	// fdivs f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f2.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x823562a8
	goto loc_823562A8;
loc_82356294:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x823562A8;
	sub_822DA518(ctx, base);
loc_823562A8:
	// lfs f0,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,308
	ctx.r4.s64 = ctx.r31.s64 + 308;
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 576, temp.u32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 580, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,308(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,312(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 312, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,316(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 316, temp.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823562ec
	if (ctx.cr6.eq) goto loc_823562EC;
	// bl 0x8225b9c0
	ctx.lr = 0x823562EC;
	sub_8225B9C0(ctx, base);
loc_823562EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823561B0) {
	__imp__sub_823561B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823562F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823562F4) {
	__imp__sub_823562F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823562F8) {
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
	// bl 0x82355408
	ctx.lr = 0x82356314;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82356320;
	sub_82342948(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8235633c
	if (!ctx.cr6.eq) goto loc_8235633C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82356348
	if (ctx.cr6.eq) goto loc_82356348;
loc_8235633C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6452
	ctx.r3.s64 = ctx.r11.s64 + -6452;
	// bl 0x822ad350
	ctx.lr = 0x82356348;
	sub_822AD350(ctx, base);
loc_82356348:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,740(r31)
	PPC_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x82356358;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2420(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x82356374;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,744(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 744, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82356390;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x823563c8
	if (!ctx.cr6.gt) goto loc_823563C8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x823563A0;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,748(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x823563d0
	if (!ctx.cr6.lt) goto loc_823563D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6476
	ctx.r4.s64 = ctx.r11.s64 + -6476;
	// bl 0x822ad4e0
	ctx.lr = 0x823563C4;
	sub_822AD4E0(ctx, base);
	// b 0x823563d0
	goto loc_823563D0;
loc_823563C8:
	// lfs f0,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,748(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 748, temp.u32);
loc_823563D0:
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

PPC_WEAK_FUNC(sub_823562F8) {
	__imp__sub_823562F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823563EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823563EC) {
	__imp__sub_823563EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823563F0) {
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
	// bl 0x82355408
	ctx.lr = 0x82356400;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x82356418;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823563F0) {
	__imp__sub_823563F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356428) {
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
	// bl 0x82355408
	ctx.lr = 0x82356438;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r3,r11,308
	ctx.r3.s64 = ctx.r11.s64 + 308;
	// bl 0x822ad078
	ctx.lr = 0x82356444;
	sub_822AD078(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356428) {
	__imp__sub_82356428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356454) {
	__imp__sub_82356454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356458) {
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
	// bl 0x82355408
	ctx.lr = 0x82356468;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
	// bl 0x822ad078
	ctx.lr = 0x82356474;
	sub_822AD078(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356458) {
	__imp__sub_82356458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356484) {
	__imp__sub_82356484(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356488) {
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
	// bl 0x82355408
	ctx.lr = 0x8235649C;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823564AC;
	sub_82342948(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,364(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823564c8
	if (!ctx.cr6.gt) goto loc_823564C8;
	// lfs f13,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_823564C8:
	// fmr f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x822acc78
	ctx.lr = 0x823564D0;
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

PPC_WEAK_FUNC(sub_82356488) {
	__imp__sub_82356488(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823564E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823564E4) {
	__imp__sub_823564E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823564E8) {
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
	// bl 0x82355408
	ctx.lr = 0x823564F8;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lfs f1,872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 872);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822acc78
	ctx.lr = 0x82356504;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823564E8) {
	__imp__sub_823564E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356514) {
	__imp__sub_82356514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356518) {
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
	// bl 0x82355408
	ctx.lr = 0x82356528;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// ori r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 | 32;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356518) {
	__imp__sub_82356518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235654C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235654C) {
	__imp__sub_8235654C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356550) {
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
	// bl 0x82355408
	ctx.lr = 0x82356560;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,27,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356550) {
	__imp__sub_82356550(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356584) {
	__imp__sub_82356584(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356588) {
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
	// bl 0x82355408
	ctx.lr = 0x82356598;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f13,724(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,9176(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9176);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822acc78
	ctx.lr = 0x823565B0;
	sub_822ACC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356588) {
	__imp__sub_82356588(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823565C0) {
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
	// bl 0x82355408
	ctx.lr = 0x823565D4;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x823565E4;
	sub_822B1FB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,5624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,728(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
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

PPC_WEAK_FUNC(sub_823565C0) {
	__imp__sub_823565C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356608) {
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
	// bl 0x82355408
	ctx.lr = 0x8235661C;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x8235662C;
	sub_822B1FB0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,5624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,732(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 732, temp.u32);
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

PPC_WEAK_FUNC(sub_82356608) {
	__imp__sub_82356608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356650) {
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
	// bl 0x82355408
	ctx.lr = 0x82356664;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x8235667C;
	sub_822B1FB0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5624(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,728(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 728, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823566ac
	if (!ctx.cr6.lt) goto loc_823566AC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6400
	ctx.r4.s64 = ctx.r11.s64 + -6400;
	// bl 0x822ad4e0
	ctx.lr = 0x823566AC;
	sub_822AD4E0(ctx, base);
loc_823566AC:
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

PPC_WEAK_FUNC(sub_82356650) {
	__imp__sub_82356650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823566C0) {
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
	// bl 0x82355408
	ctx.lr = 0x823566D8;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x823566E8;
	sub_822B1FB0(ctx, base);
	// stfs f1,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x823566F4;
	sub_822B1FB0(ctx, base);
	// stfs f1,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x823566FC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82356714
	if (!ctx.cr6.gt) goto loc_82356714;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x8235670C;
	sub_822B1FB0(ctx, base);
	// stfs f1,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// b 0x8235671c
	goto loc_8235671C;
loc_82356714:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_8235671C:
	// bl 0x822acb68
	ctx.lr = 0x82356720;
	sub_822ACB68(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// ble cr6,0x82356764
	if (!ctx.cr6.gt) goto loc_82356764;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82356738;
	sub_822B1FB0(ctx, base);
	// stfs f1,836(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 836, temp.u32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// blt cr6,0x82356754
	if (ctx.cr6.lt) goto loc_82356754;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82356764
	if (!ctx.cr6.gt) goto loc_82356764;
loc_82356754:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-6264
	ctx.r4.s64 = ctx.r11.s64 + -6264;
	// bl 0x822ad4e0
	ctx.lr = 0x82356764;
	sub_822AD4E0(ctx, base);
loc_82356764:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82356780
	if (!ctx.cr6.lt) goto loc_82356780;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6308
	ctx.r4.s64 = ctx.r11.s64 + -6308;
	// bl 0x822ad4e0
	ctx.lr = 0x82356780;
	sub_822AD4E0(ctx, base);
loc_82356780:
	// lfs f0,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8235679c
	if (!ctx.cr6.lt) goto loc_8235679C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6356
	ctx.r4.s64 = ctx.r11.s64 + -6356;
	// bl 0x822ad4e0
	ctx.lr = 0x8235679C;
	sub_822AD4E0(ctx, base);
loc_8235679C:
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

PPC_WEAK_FUNC(sub_823566C0) {
	__imp__sub_823566C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823567B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823567B4) {
	__imp__sub_823567B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823567B8) {
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
	// bl 0x82355408
	ctx.lr = 0x823567D0;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823567DC;
	sub_82342948(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x823567f4
	if (ctx.cr6.eq) goto loc_823567F4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6164
	ctx.r3.s64 = ctx.r11.s64 + -6164;
	// bl 0x822ad350
	ctx.lr = 0x823567F4;
	sub_822AD350(ctx, base);
loc_823567F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x823567FC;
	sub_822B1FB0(ctx, base);
	// stfs f1,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82356808;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,376(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,380(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 380, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82356830
	if (!ctx.cr6.lt) goto loc_82356830;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6196
	ctx.r4.s64 = ctx.r11.s64 + -6196;
	// bl 0x822ad4e0
	ctx.lr = 0x82356830;
	sub_822AD4E0(ctx, base);
loc_82356830:
	// lfs f0,380(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x8235684c
	if (!ctx.cr6.lt) goto loc_8235684C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6228
	ctx.r4.s64 = ctx.r11.s64 + -6228;
	// bl 0x822ad4e0
	ctx.lr = 0x8235684C;
	sub_822AD4E0(ctx, base);
loc_8235684C:
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

PPC_WEAK_FUNC(sub_823567B8) {
	__imp__sub_823567B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356864) {
	__imp__sub_82356864(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356868) {
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
	// bl 0x82355408
	ctx.lr = 0x82356880;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82356890;
	sub_822B1FB0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,752(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 752);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823568c4
	if (!ctx.cr6.lt) goto loc_823568C4;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6120
	ctx.r4.s64 = ctx.r11.s64 + -6120;
	// bl 0x822ad4e0
	ctx.lr = 0x823568B4;
	sub_822AD4E0(ctx, base);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfs f0,5624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// b 0x823568d0
	goto loc_823568D0;
loc_823568C4:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_823568D0:
	// stfs f0,752(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 752, temp.u32);
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

PPC_WEAK_FUNC(sub_82356868) {
	__imp__sub_82356868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823568EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823568EC) {
	__imp__sub_823568EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823568F0) {
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
	// bl 0x82355408
	ctx.lr = 0x82356904;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82356914;
	sub_822B1FB0(ctx, base);
	// stfs f1,756(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 756, temp.u32);
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

PPC_WEAK_FUNC(sub_823568F0) {
	__imp__sub_823568F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235692C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235692C) {
	__imp__sub_8235692C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356930) {
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
	// bl 0x82355408
	ctx.lr = 0x82356948;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r4,r31,624
	ctx.r4.s64 = ctx.r31.s64 + 624;
	// bl 0x822b2498
	ctx.lr = 0x8235695C;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82356960;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82356974
	if (!ctx.cr6.gt) goto loc_82356974;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82356970;
	sub_822B1FB0(ctx, base);
	// b 0x8235697c
	goto loc_8235697C;
loc_82356974:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f1.f64 = double(temp.f32);
loc_8235697C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,612
	ctx.r10.s64 = 612;
	// lfs f31,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.f13.u32);
	// bl 0x822acb68
	ctx.lr = 0x82356998;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x823569ac
	if (!ctx.cr6.gt) goto loc_823569AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x823569A8;
	sub_822B1FB0(ctx, base);
	// b 0x823569b4
	goto loc_823569B4;
loc_823569AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
loc_823569B4:
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// li r11,616
	ctx.r11.s64 = 616;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r10.u32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f13.u32);
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

PPC_WEAK_FUNC(sub_82356930) {
	__imp__sub_82356930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823569E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823569E4) {
	__imp__sub_823569E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823569E8) {
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
	// bl 0x82355408
	ctx.lr = 0x823569FC;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82356A0C;
	sub_822B1FB0(ctx, base);
	// stfs f1,672(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 672, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82356A14;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82356a40
	if (!ctx.cr6.gt) goto loc_82356A40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82356A24;
	sub_822B1FB0(ctx, base);
	// stfs f1,676(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 676, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82356A2C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82356a40
	if (!ctx.cr6.gt) goto loc_82356A40;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82356A3C;
	sub_822B1FB0(ctx, base);
	// stfs f1,680(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 680, temp.u32);
loc_82356A40:
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

PPC_WEAK_FUNC(sub_823569E8) {
	__imp__sub_823569E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356A54) {
	__imp__sub_82356A54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356A58) {
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
	ctx.lr = 0x82356A70;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x82356A78;
	sub_82355408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822acb68
	ctx.lr = 0x82356A80;
	sub_822ACB68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82356A90;
	sub_822B2498(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82356A98;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// ble cr6,0x82356b10
	if (!ctx.cr6.gt) goto loc_82356B10;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b1fb0
	ctx.lr = 0x82356AB4;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfs f28,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f1,f28
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// blt cr6,0x82356ad0
	if (ctx.cr6.lt) goto loc_82356AD0;
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// ble cr6,0x82356ae0
	if (!ctx.cr6.gt) goto loc_82356AE0;
loc_82356AD0:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r4,r11,-6044
	ctx.r4.s64 = ctx.r11.s64 + -6044;
	// bl 0x822ad4e0
	ctx.lr = 0x82356AE0;
	sub_822AD4E0(ctx, base);
loc_82356AE0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x82356AE8;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f28
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x82356b1c
	if (!ctx.cr6.lt) goto loc_82356B1C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r4,r11,-6076
	ctx.r4.s64 = ctx.r11.s64 + -6076;
	// bl 0x822ad4e0
	ctx.lr = 0x82356B0C;
	sub_822AD4E0(ctx, base);
	// b 0x82356b1c
	goto loc_82356B1C;
loc_82356B10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fmr f31,f30
	ctx.f31.f64 = ctx.f30.f64;
loc_82356B1C:
	// lfs f0,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f11,236(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f10,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f8,240(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmadds f6,f7,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f12,f4
	ctx.f12.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f11,f12,f29,f4
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f29.f64 : ctx.f4.f64;
	// fdivs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 / ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// stfs f8,84(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// stfs f7,88(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82343ef0
	ctx.lr = 0x82356B94;
	sub_82343EF0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de070
	ctx.lr = 0x82356BA0;
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

PPC_WEAK_FUNC(sub_82356A58) {
	__imp__sub_82356A58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356BB4) {
	__imp__sub_82356BB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356BB8) {
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
	// bl 0x82355408
	ctx.lr = 0x82356BD0;
	sub_82355408(ctx, base);
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356bf0
	if (ctx.cr6.eq) goto loc_82356BF0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-6004
	ctx.r3.s64 = ctx.r11.s64 + -6004;
	// bl 0x822e84f0
	ctx.lr = 0x82356BEC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82356BF0;
	sub_822AD350(ctx, base);
loc_82356BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823434b0
	ctx.lr = 0x82356BF8;
	sub_823434B0(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r3,r31,292
	ctx.r3.s64 = ctx.r31.s64 + 292;
	// addi r30,r10,-25976
	ctx.r30.s64 = ctx.r10.s64 + -25976;
	// lhz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 340);
	// bl 0x822a24e0
	ctx.lr = 0x82356C14;
	sub_822A24E0(ctx, base);
	// addi r3,r31,294
	ctx.r3.s64 = ctx.r31.s64 + 294;
	// lhz r4,340(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 340);
	// bl 0x822a24e0
	ctx.lr = 0x82356C20;
	sub_822A24E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,46(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 46);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229da8
	ctx.lr = 0x82356C30;
	sub_82229DA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82356BB8) {
	__imp__sub_82356BB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82356C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x82356C58;
	sub_82355408(ctx, base);
	// lwz r28,276(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,560(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82356C64;
	sub_82342948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82356C70;
	sub_822B20B8(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82356c94
	if (ctx.cr6.eq) goto loc_82356C94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82356c94
	if (ctx.cr6.eq) goto loc_82356C94;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82356ca8
	if (!ctx.cr6.eq) goto loc_82356CA8;
loc_82356C94:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r11,-5824
	ctx.r3.s64 = ctx.r11.s64 + -5824;
	// bl 0x822e84f0
	ctx.lr = 0x82356CA4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82356CA8;
	sub_822AD350(ctx, base);
loc_82356CA8:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-25976
	ctx.r11.s64 = ctx.r11.s64 + -25976;
	// lhz r10,396(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 396);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356cc4
	if (!ctx.cr6.eq) goto loc_82356CC4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356CC4:
	// lhz r10,398(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 398);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356cd8
	if (!ctx.cr6.eq) goto loc_82356CD8;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356CD8:
	// lhz r10,400(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 400);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356cec
	if (!ctx.cr6.eq) goto loc_82356CEC;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356CEC:
	// lhz r10,402(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 402);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356d00
	if (!ctx.cr6.eq) goto loc_82356D00;
	// li r30,3
	ctx.r30.s64 = 3;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356D00:
	// lhz r10,404(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 404);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82356d14
	if (!ctx.cr6.eq) goto loc_82356D14;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356D14:
	// lhz r11,406(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 406);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82356d28
	if (!ctx.cr6.eq) goto loc_82356D28;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x82356d38
	goto loc_82356D38;
loc_82356D28:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5928
	ctx.r4.s64 = ctx.r11.s64 + -5928;
	// bl 0x822ad4e0
	ctx.lr = 0x82356D38;
	sub_822AD4E0(ctx, base);
loc_82356D38:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82356d5c
	if (!ctx.cr6.eq) goto loc_82356D5C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// ble cr6,0x82356d5c
	if (!ctx.cr6.gt) goto loc_82356D5C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-5960
	ctx.r4.s64 = ctx.r11.s64 + -5960;
	// bl 0x822ad4e0
	ctx.lr = 0x82356D5C;
	sub_822AD4E0(ctx, base);
loc_82356D5C:
	// addi r11,r30,108
	ctx.r11.s64 = ctx.r30.s64 + 108;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82356d80
	if (ctx.cr6.eq) goto loc_82356D80;
	// bl 0x822ec0a0
	ctx.lr = 0x82356D74;
	sub_822EC0A0(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82356D78;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82356D80:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,13236
	ctx.r3.s64 = ctx.r11.s64 + 13236;
	// bl 0x822aced0
	ctx.lr = 0x82356D8C;
	sub_822ACED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356C48) {
	__imp__sub_82356C48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356D94) {
	__imp__sub_82356D94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356D98) {
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
	// bl 0x82355408
	ctx.lr = 0x82356DA8;
	sub_82355408(ctx, base);
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82356dcc
	if (ctx.cr6.eq) goto loc_82356DCC;
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
	// bl 0x82229b60
	ctx.lr = 0x82356DCC;
	sub_82229B60(ctx, base);
loc_82356DCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356D98) {
	__imp__sub_82356D98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356DDC) {
	__imp__sub_82356DDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356DE0) {
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
	// bl 0x82355408
	ctx.lr = 0x82356DF4;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b20b8
	ctx.lr = 0x82356E04;
	sub_822B20B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,716
	ctx.r3.s64 = ctx.r31.s64 + 716;
	// bl 0x822a24e0
	ctx.lr = 0x82356E10;
	sub_822A24E0(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82356E14;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82356e30
	if (!ctx.cr6.gt) goto loc_82356E30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2390
	ctx.lr = 0x82356E24;
	sub_822B2390(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,718
	ctx.r3.s64 = ctx.r31.s64 + 718;
	// bl 0x822a24e0
	ctx.lr = 0x82356E30;
	sub_822A24E0(ctx, base);
loc_82356E30:
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

PPC_WEAK_FUNC(sub_82356DE0) {
	__imp__sub_82356DE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356E44) {
	__imp__sub_82356E44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E48) {
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
	// bl 0x82355408
	ctx.lr = 0x82356E5C;
	sub_82355408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82356E68;
	sub_822B20B8(ctx, base);
	// bl 0x8222fca8
	ctx.lr = 0x82356E6C;
	sub_8222FCA8(ctx, base);
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// stw r3,564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 564, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_82356E48) {
	__imp__sub_82356E48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356E88) {
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
	// bl 0x82355408
	ctx.lr = 0x82356E9C;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82356EAC;
	sub_822B1FB0(ctx, base);
	// stfs f1,844(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 844, temp.u32);
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

PPC_WEAK_FUNC(sub_82356E88) {
	__imp__sub_82356E88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356EC4) {
	__imp__sub_82356EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82356ED0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x82356ED8;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// stw r29,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r29.u32);
	// bl 0x822b2498
	ctx.lr = 0x82356EF4;
	sub_822B2498(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x82356EF8;
	sub_822ACB68(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82356f1c
	if (!ctx.cr6.gt) goto loc_82356F1C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x82356F0C;
	sub_822B1C50(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r10.u32);
	// b 0x82356f20
	goto loc_82356F20;
loc_82356F1C:
	// stw r30,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r30.u32);
loc_82356F20:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,724(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 724);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82356f4c
	if (ctx.cr6.eq) goto loc_82356F4C;
	// lfs f13,728(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 728);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82356f4c
	if (ctx.cr6.eq) goto loc_82356F4C;
	// lfs f13,732(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82356f58
	if (!ctx.cr6.eq) goto loc_82356F58;
loc_82356F4C:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5760
	ctx.r3.s64 = ctx.r11.s64 + -5760;
	// bl 0x822ad350
	ctx.lr = 0x82356F58;
	sub_822AD350(ctx, base);
loc_82356F58:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 572, ctx.r29.u32);
	// stw r30,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82356EC8) {
	__imp__sub_82356EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356F70) {
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
	// bl 0x82355408
	ctx.lr = 0x82356F84;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82356F94;
	sub_822B1FB0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,828(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 828, temp.u32);
	// stw r10,768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 768, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82356F70) {
	__imp__sub_82356F70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82356FB4) {
	__imp__sub_82356FB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356FB8) {
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
	// bl 0x82355408
	ctx.lr = 0x82356FC8;
	sub_82355408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,828(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 828, temp.u32);
	// stw r9,768(r10)
	PPC_STORE_U32(ctx.r10.u32 + 768, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82356FB8) {
	__imp__sub_82356FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82356FF0) {
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
	// bl 0x82355408
	ctx.lr = 0x82357004;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bl 0x822b1fb0
	ctx.lr = 0x82357014;
	sub_822B1FB0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,812(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// stw r10,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82356FF0) {
	__imp__sub_82356FF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357034) {
	__imp__sub_82357034(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357038) {
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
	// bl 0x82355408
	ctx.lr = 0x82357048;
	sub_82355408(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,812(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 812, temp.u32);
	// stw r9,764(r10)
	PPC_STORE_U32(ctx.r10.u32 + 764, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82357038) {
	__imp__sub_82357038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357070) {
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
	// bl 0x82355408
	ctx.lr = 0x8235708C;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823570b0
	if (!ctx.cr6.eq) goto loc_823570B0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5648
	ctx.r3.s64 = ctx.r11.s64 + -5648;
	// bl 0x822e84f0
	ctx.lr = 0x823570AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823570B0;
	sub_822AD350(ctx, base);
loc_823570B0:
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x823570e8
	if (ctx.cr6.gt) goto loc_823570E8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// bl 0x822e84f0
	ctx.lr = 0x823570E4;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823570E8;
	sub_822AD350(ctx, base);
loc_823570E8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2047
	ctx.r10.s64 = 2047;
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82357104;
	sub_822B2498(ctx, base);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,788(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,792(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,796(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// stfs f31,800(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// stfs f31,804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// stfs f31,808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
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

PPC_WEAK_FUNC(sub_82357070) {
	__imp__sub_82357070(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357144) {
	__imp__sub_82357144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357148) {
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
	// bl 0x82355408
	ctx.lr = 0x82357160;
	sub_82355408(ctx, base);
	// lwz r10,332(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
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
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// bgt cr6,0x8235719c
	if (ctx.cr6.gt) goto loc_8235719C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// bl 0x822e84f0
	ctx.lr = 0x82357198;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8235719C;
	sub_822AD350(ctx, base);
loc_8235719C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x823571A4;
	sub_82229BF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 760, ctx.r11.u32);
	// beq cr6,0x823571bc
	if (ctx.cr6.eq) goto loc_823571BC;
	// lhz r11,126(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
	// b 0x823571c0
	goto loc_823571C0;
loc_823571BC:
	// li r11,2047
	ctx.r11.s64 = 2047;
loc_823571C0:
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823571d8
	if (ctx.cr6.eq) goto loc_823571D8;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// oris r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 16777216;
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
loc_823571D8:
	// bl 0x822acb68
	ctx.lr = 0x823571DC;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x823571f4
	if (!ctx.cr6.gt) goto loc_823571F4;
	// addi r4,r31,800
	ctx.r4.s64 = ctx.r31.s64 + 800;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2498
	ctx.lr = 0x823571F0;
	sub_822B2498(ctx, base);
	// b 0x82357200
	goto loc_82357200;
loc_823571F4:
	// stfs f31,800(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 800, temp.u32);
	// stfs f31,804(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 804, temp.u32);
	// stfs f31,808(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 808, temp.u32);
loc_82357200:
	// stfs f31,788(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 788, temp.u32);
	// stfs f31,792(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 792, temp.u32);
	// stfs f31,796(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
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

PPC_WEAK_FUNC(sub_82357148) {
	__imp__sub_82357148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357224) {
	__imp__sub_82357224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357228) {
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
	// bl 0x82355408
	ctx.lr = 0x82357238;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// beq cr6,0x82357250
	if (ctx.cr6.eq) goto loc_82357250;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 760, ctx.r10.u32);
loc_82357250:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// stw r9,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r9.u32);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,788(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 788, temp.u32);
	// stfs f0,792(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 792, temp.u32);
	// stfs f0,796(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 796, temp.u32);
	// stfs f0,800(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 800, temp.u32);
	// stfs f0,804(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 804, temp.u32);
	// stfs f0,808(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 808, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82357228) {
	__imp__sub_82357228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82357290;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x82357298;
	__savefpr_28(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x823572A0;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823572B0;
	sub_82342948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x823572C0;
	sub_822B2498(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x823572C8;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x823572dc
	if (!ctx.cr6.gt) goto loc_823572DC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1c50
	ctx.lr = 0x823572D8;
	sub_822B1C50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_823572DC:
	// li r27,2047
	ctx.r27.s64 = 2047;
	// bl 0x822acb68
	ctx.lr = 0x823572E4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x823572f8
	if (!ctx.cr6.gt) goto loc_823572F8;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82229bf0
	ctx.lr = 0x823572F4;
	sub_82229BF0(ctx, base);
	// lhz r27,126(r3)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r3.u32 + 126);
loc_823572F8:
	// lwz r4,908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 908);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge cr6,0x82357320
	if (!ctx.cr6.lt) goto loc_82357320;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5600
	ctx.r3.s64 = ctx.r11.s64 + -5600;
	// bl 0x822ad350
	ctx.lr = 0x82357310;
	sub_822AD350(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x8235731C;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82357320:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222eee0
	ctx.lr = 0x8235732C;
	sub_8222EEE0(ctx, base);
	// lwz r4,904(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 904);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82357348
	if (ctx.cr6.eq) goto loc_82357348;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222edc8
	ctx.lr = 0x82357344;
	sub_8222EDC8(ctx, base);
	// b 0x82357354
	goto loc_82357354;
loc_82357348:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x822da650
	ctx.lr = 0x82357354;
	sub_822DA650(ctx, base);
loc_82357354:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
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
	// fmuls f10,f11,f6
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f8,f12,f11
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmuls f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f7,136(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x823573C0;
	sub_822D50F8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822da650
	ctx.lr = 0x823573CC;
	sub_822DA650(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6378
	ctx.lr = 0x823573D8;
	sub_822D6378(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// bl 0x822d5c30
	ctx.lr = 0x823573E8;
	sub_822D5C30(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822d7c78
	ctx.lr = 0x823573F4;
	sub_822D7C78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f29,f6,f31
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// lfs f30,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fadds f1,f29,f30
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82357414;
	sub_823DDE20(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f28,f4,f31
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// lfs f31,2412(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2412);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f3,f29,f5
	ctx.f3.f64 = double(float(ctx.f29.f64 - ctx.f5.f64));
	// fadds f1,f28,f30
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f30.f64));
	// fmuls f2,f3,f31
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// stfs f2,80(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x823dde20
	ctx.lr = 0x8235743C;
	sub_823DDE20(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f28,f1
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f1.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,424(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x823574ec
	if (ctx.cr6.lt) goto loc_823574EC;
	// lfs f12,428(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 428);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x823574ec
	if (ctx.cr6.gt) goto loc_823574EC;
	// lfs f13,420(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823574ec
	if (ctx.cr6.lt) goto loc_823574EC;
	// lfs f13,416(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823574ec
	if (ctx.cr6.gt) goto loc_823574EC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823574a8
	if (!ctx.cr6.eq) goto loc_823574A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822acbf8
	ctx.lr = 0x82357498;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x823574A4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823574A8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lhz r7,126(r30)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r30.u32 + 126);
	// li r9,2049
	ctx.r9.s64 = 2049;
	// addi r6,r11,-9672
	ctx.r6.s64 = ctx.r11.s64 + -9672;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82342160
	ctx.lr = 0x823574CC;
	sub_82342160(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bl 0x822acbf8
	ctx.lr = 0x823574DC;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x823574E8;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_823574EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822acbf8
	ctx.lr = 0x823574F4;
	sub_822ACBF8(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x82357500;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357288) {
	__imp__sub_82357288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357504) {
	__imp__sub_82357504(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357508) {
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
	// bl 0x82355408
	ctx.lr = 0x82357520;
	sub_82355408(ctx, base);
	// lwz r30,276(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82357544
	if (!ctx.cr6.eq) goto loc_82357544;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5512
	ctx.r3.s64 = ctx.r11.s64 + -5512;
	// bl 0x822e84f0
	ctx.lr = 0x82357540;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82357544;
	sub_822AD350(ctx, base);
loc_82357544:
	// lwz r11,332(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8235757c
	if (ctx.cr6.gt) goto loc_8235757C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5548
	ctx.r3.s64 = ctx.r11.s64 + -5548;
	// bl 0x822e84f0
	ctx.lr = 0x82357578;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8235757C;
	sub_822AD350(ctx, base);
loc_8235757C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82357584;
	sub_82229BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823575a0
	if (!ctx.cr6.eq) goto loc_823575A0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5564
	ctx.r3.s64 = ctx.r11.s64 + -5564;
	// bl 0x822e84f0
	ctx.lr = 0x8235759C;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823575A0;
	sub_822AD350(ctx, base);
loc_823575A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,784
	ctx.r3.s64 = ctx.r30.s64 + 784;
	// bl 0x821e2e18
	ctx.lr = 0x823575AC;
	sub_821E2E18(ctx, base);
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

PPC_WEAK_FUNC(sub_82357508) {
	__imp__sub_82357508(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823575C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823575C4) {
	__imp__sub_823575C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823575C8) {
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
	// bl 0x82355408
	ctx.lr = 0x823575D8;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// bl 0x821e2e18
	ctx.lr = 0x823575E8;
	sub_821E2E18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823575C8) {
	__imp__sub_823575C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823575F8) {
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
	// bl 0x82355408
	ctx.lr = 0x8235760C;
	sub_82355408(ctx, base);
	// lhz r11,256(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 256);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357628
	if (!ctx.cr6.eq) goto loc_82357628;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5472
	ctx.r3.s64 = ctx.r11.s64 + -5472;
	// bl 0x822ad350
	ctx.lr = 0x82357628;
	sub_822AD350(ctx, base);
loc_82357628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347ea8
	ctx.lr = 0x82357630;
	sub_82347EA8(ctx, base);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823575F8) {
	__imp__sub_823575F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357650) {
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
	// bl 0x82355408
	ctx.lr = 0x82357664;
	sub_82355408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x82357670;
	sub_822B2288(ctx, base);
	// bl 0x82332b40
	ctx.lr = 0x82357674;
	sub_82332B40(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r3,124(r31)
	PPC_STORE_U16(ctx.r31.u32 + 124, ctx.r3.u16);
	// stb r10,168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 168, ctx.r10.u8);
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

PPC_WEAK_FUNC(sub_82357650) {
	__imp__sub_82357650(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357694) {
	__imp__sub_82357694(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823576A0;
	__savegprlr_18(ctx, base);
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x823576B0;
	sub_82355408(ctx, base);
	// lwz r29,276(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,560(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x823576C0;
	sub_82342948(ctx, base);
	// lwz r11,332(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 332);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r9.u64);
	// lfd f0,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// bgt cr6,0x823576fc
	if (ctx.cr6.gt) goto loc_823576FC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5696
	ctx.r3.s64 = ctx.r11.s64 + -5696;
	// bl 0x822e84f0
	ctx.lr = 0x823576F8;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823576FC;
	sub_822AD350(ctx, base);
loc_823576FC:
	// lhz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357724
	if (!ctx.cr6.eq) goto loc_82357724;
	// lhz r3,302(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x82357710;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5328
	ctx.r3.s64 = ctx.r11.s64 + -5328;
	// bl 0x822e84f0
	ctx.lr = 0x82357720;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x82357724;
	sub_822AD350(ctx, base);
loc_82357724:
	// lhz r11,124(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332af8
	ctx.lr = 0x82357734;
	sub_82332AF8(ctx, base);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332b10
	ctx.lr = 0x82357740;
	sub_82332B10(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235776c
	if (ctx.cr6.eq) goto loc_8235776C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8235776c
	if (ctx.cr6.eq) goto loc_8235776C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5384
	ctx.r3.s64 = ctx.r11.s64 + -5384;
	// bl 0x822e84f0
	ctx.lr = 0x82357768;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x8235776C;
	sub_822AD350(ctx, base);
loc_8235776C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lfs f31,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82357824
	if (ctx.cr6.eq) goto loc_82357824;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82357824
	if (ctx.cr6.eq) goto loc_82357824;
	// lwz r11,908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x823577b0
	if (!ctx.cr6.lt) goto loc_823577B0;
	// lhz r3,302(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 302);
	// bl 0x822a13a0
	ctx.lr = 0x8235779C;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5408
	ctx.r3.s64 = ctx.r11.s64 + -5408;
	// bl 0x822e84f0
	ctx.lr = 0x823577AC;
	sub_822E84F0(ctx, base);
	// bl 0x822ad350
	ctx.lr = 0x823577B0;
	sub_822AD350(ctx, base);
loc_823577B0:
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// lwz r4,908(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 908);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222edc8
	ctx.lr = 0x823577C0;
	sub_8222EDC8(ctx, base);
	// bl 0x822acb68
	ctx.lr = 0x823577C4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// ble cr6,0x823577e8
	if (!ctx.cr6.gt) goto loc_823577E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b28d0
	ctx.lr = 0x823577D4;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823577e8
	if (ctx.cr6.eq) goto loc_823577E8;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822b1fb0
	ctx.lr = 0x823577E4;
	sub_822B1FB0(ctx, base);
	// b 0x823577ec
	goto loc_823577EC;
loc_823577E8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_823577EC:
	// lfs f0,304(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lfs f13,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,312(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,240(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f10,244(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f9,248(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82343ef0
	ctx.lr = 0x82357824;
	sub_82343EF0(ctx, base);
loc_82357824:
	// bl 0x822acb68
	ctx.lr = 0x82357828;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235788c
	if (ctx.cr6.eq) goto loc_8235788C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x82357838;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235788c
	if (ctx.cr6.eq) goto loc_8235788C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2168
	ctx.lr = 0x82357848;
	sub_822B2168(ctx, base);
	// clrlwi r4,r3,16
	ctx.r4.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8233d278
	ctx.lr = 0x82357858;
	sub_8233D278(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82357890
	if (!ctx.cr6.lt) goto loc_82357890;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a13a0
	ctx.lr = 0x8235786C;
	sub_822A13A0(ctx, base);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-5428
	ctx.r3.s64 = ctx.r11.s64 + -5428;
	// bl 0x822e84f0
	ctx.lr = 0x8235787C;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822ad4e0
	ctx.lr = 0x82357888;
	sub_822AD4E0(ctx, base);
	// b 0x82357890
	goto loc_82357890;
loc_8235788C:
	// li r19,-1
	ctx.r19.s64 = -1;
loc_82357890:
	// bl 0x822acb68
	ctx.lr = 0x82357894;
	sub_822ACB68(ctx, base);
	// li r20,1
	ctx.r20.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823578b4
	if (ctx.cr6.eq) goto loc_823578B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b28d0
	ctx.lr = 0x823578AC;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823578c0
	if (!ctx.cr6.eq) goto loc_823578C0;
loc_823578B4:
	// lwz r11,16(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823578d0
	if (!ctx.cr6.eq) goto loc_823578D0;
loc_823578C0:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// li r21,30
	ctx.r21.s64 = 30;
	// b 0x823578f4
	goto loc_823578F4;
loc_823578D0:
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// li r24,2
	ctx.r24.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// and r11,r6,r24
	ctx.r11.u64 = ctx.r6.u64 & ctx.r24.u64;
	// addi r21,r10,48
	ctx.r21.s64 = ctx.r10.s64 + 48;
loc_823578F4:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82357c44
	if (!ctx.cr6.gt) goto loc_82357C44;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// lis r10,-32020
	ctx.r10.s64 = -2098462720;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// lis r23,-31815
	ctx.r23.s64 = -2085027840;
	// addi r26,r11,26552
	ctx.r26.s64 = ctx.r11.s64 + 26552;
	// addi r27,r10,9624
	ctx.r27.s64 = ctx.r10.s64 + 9624;
loc_82357918:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82343770
	ctx.lr = 0x82357924;
	sub_82343770(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222edc8
	ctx.lr = 0x82357934;
	sub_8222EDC8(ctx, base);
	// lhz r10,256(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 256);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82357ab0
	if (ctx.cr6.eq) goto loc_82357AB0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82357ab0
	if (!ctx.cr6.eq) goto loc_82357AB0;
	// lwz r11,604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82357ab0
	if (!ctx.cr6.eq) goto loc_82357AB0;
	// lwz r11,780(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 780);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// bne cr6,0x82357ab0
	if (!ctx.cr6.eq) goto loc_82357AB0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x823579b8
	if (!ctx.cr6.eq) goto loc_823579B8;
	// lwz r11,-4640(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4640);
	// lbz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823579b8
	if (ctx.cr6.eq) goto loc_823579B8;
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x823579b8
	if (!ctx.cr6.eq) goto loc_823579B8;
	// mulli r11,r10,624
	ctx.r11.s64 = ctx.r10.s64 * 624;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r10,-360(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -360);
	// lwz r9,172(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 172);
	// rlwinm r8,r9,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823579b8
	if (ctx.cr6.eq) goto loc_823579B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r30,244
	ctx.r3.s64 = ctx.r30.s64 + 244;
	// bl 0x822da518
	ctx.lr = 0x823579B4;
	sub_822DA518(ctx, base);
	// b 0x82357ac8
	goto loc_82357AC8;
loc_823579B8:
	// lfs f0,788(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 788);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f12,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,792(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 792);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f8,796(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 796);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f6,f7,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f9.f64));
	// fmadds f5,f0,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsqrts f4,f5
	ctx.f4.f64 = double(float(sqrt(ctx.f5.f64)));
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// fsel f2,f3,f31,f4
	ctx.f2.f64 = ctx.f3.f64 >= 0.0 ? ctx.f31.f64 : ctx.f4.f64;
	// fdivs f1,f31,f2
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fmuls f12,f7,f1
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f1.f64));
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x822d50f8
	ctx.lr = 0x82357A24;
	sub_822D50F8(ctx, base);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d50f8
	ctx.lr = 0x82357A30;
	sub_822D50F8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822d7700
	ctx.lr = 0x82357A40;
	sub_822D7700(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lfs f11,748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsel f8,f10,f11,f0
	ctx.f8.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f0.f64;
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fsel f6,f7,f9,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f9.f64 : ctx.f8.f64;
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f5,748(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 748);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fsel f2,f4,f5,f0
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f0.f64;
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsel f0,f1,f3,f2
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d7700
	ctx.lr = 0x82357A98;
	sub_822D7700(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822da518
	ctx.lr = 0x82357AAC;
	sub_822DA518(ctx, base);
	// b 0x82357ac8
	goto loc_82357AC8;
loc_82357AB0:
	// lfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,196(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
loc_82357AC8:
	// lfs f9,216(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f8.f64 = double(temp.f32);
	// stfs f9,120(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,128(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,204(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f11,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r11,604(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 604);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357b4c
	if (ctx.cr6.eq) goto loc_82357B4C;
	// lfs f11,600(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 600);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f10,f0,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f5,f13,f10,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f4,f12,f10,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,140(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x82357b64
	goto loc_82357B64;
loc_82357B4C:
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,232(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,236(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f12,140(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_82357B64:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82357b90
	if (!ctx.cr6.eq) goto loc_82357B90;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,52(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 52);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f1,1216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e2978
	ctx.lr = 0x82357B8C;
	sub_821E2978(ctx, base);
	// b 0x82357c38
	goto loc_82357C38;
loc_82357B90:
	// bl 0x822acb68
	ctx.lr = 0x82357B94;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82357c0c
	if (!ctx.cr6.gt) goto loc_82357C0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b28d0
	ctx.lr = 0x82357BA4;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357c0c
	if (ctx.cr6.eq) goto loc_82357C0C;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r31,r1,256
	ctx.r31.s64 = ctx.r1.s64 + 256;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// stb r20,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r20.u8);
	// bl 0x82229bf0
	ctx.lr = 0x82357BCC;
	sub_82229BF0(ctx, base);
	// stw r3,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r3.u32);
	// bl 0x822acb68
	ctx.lr = 0x82357BD4;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x82357bfc
	if (!ctx.cr6.gt) goto loc_82357BFC;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b28d0
	ctx.lr = 0x82357BE4;
	sub_822B28D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357bfc
	if (ctx.cr6.eq) goto loc_82357BFC;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82357BF8;
	sub_822B2498(ctx, base);
	// b 0x82357c10
	goto loc_82357C10;
loc_82357BFC:
	// stfs f30,264(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// stfs f30,268(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// stfs f30,272(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// b 0x82357c10
	goto loc_82357C10;
loc_82357C0C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82357C10:
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lhz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// addi r7,r29,308
	ctx.r7.s64 = ctx.r29.s64 + 308;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,1216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82231a78
	ctx.lr = 0x82357C34;
	sub_82231A78(ctx, base);
	// bl 0x82229b60
	ctx.lr = 0x82357C38;
	sub_82229B60(ctx, base);
loc_82357C38:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// bne 0x82357918
	if (!ctx.cr0.eq) goto loc_82357918;
loc_82357C44:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82357c60
	if (ctx.cr6.lt) goto loc_82357C60;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhz r4,124(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82333d68
	ctx.lr = 0x82357C58;
	sub_82333D68(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// b 0x82357c64
	goto loc_82357C64;
loc_82357C60:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82357C64:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8222f978
	ctx.lr = 0x82357C70;
	sub_8222F978(ctx, base);
	// lhz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82332b28
	ctx.lr = 0x82357C78;
	sub_82332B28(ctx, base);
	// bl 0x822aced0
	ctx.lr = 0x82357C7C;
	sub_822ACED0(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,278(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 278);
	// bl 0x82229da8
	ctx.lr = 0x82357C94;
	sub_82229DA8(ctx, base);
	// lwz r9,164(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r8,596(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r6,40(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// stw r5,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r5.u32);
	// stw r6,592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 592, ctx.r6.u32);
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357698) {
	__imp__sub_82357698(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357CC0) {
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
	// bl 0x82355408
	ctx.lr = 0x82357CD4;
	sub_82355408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82357CE0;
	sub_82229BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82347fa8
	ctx.lr = 0x82357CEC;
	sub_82347FA8(ctx, base);
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

PPC_WEAK_FUNC(sub_82357CC0) {
	__imp__sub_82357CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357D00) {
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
	// bl 0x82355408
	ctx.lr = 0x82357D14;
	sub_82355408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82229bf0
	ctx.lr = 0x82357D20;
	sub_82229BF0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82348210
	ctx.lr = 0x82357D2C;
	sub_82348210(ctx, base);
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

PPC_WEAK_FUNC(sub_82357D00) {
	__imp__sub_82357D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357D40) {
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
	// bl 0x82355408
	ctx.lr = 0x82357D54;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82357d74
	if (ctx.cr6.eq) goto loc_82357D74;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5292
	ctx.r3.s64 = ctx.r11.s64 + -5292;
	// bl 0x822e84f0
	ctx.lr = 0x82357D70;
	sub_822E84F0(ctx, base);
	// bl 0x822ad548
	ctx.lr = 0x82357D74;
	sub_822AD548(ctx, base);
loc_82357D74:
	// lwz r11,592(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 592);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82357d88
	if (!ctx.cr6.gt) goto loc_82357D88;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82357D88:
	// bl 0x822acbf8
	ctx.lr = 0x82357D8C;
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

PPC_WEAK_FUNC(sub_82357D40) {
	__imp__sub_82357D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357DA0) {
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
	// bl 0x82355408
	ctx.lr = 0x82357DB4;
	sub_82355408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r31,276(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// addi r4,r31,816
	ctx.r4.s64 = ctx.r31.s64 + 816;
	// bl 0x822b2498
	ctx.lr = 0x82357DC8;
	sub_822B2498(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r10.u32);
	// bl 0x822b1fb0
	ctx.lr = 0x82357DD8;
	sub_822B1FB0(ctx, base);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5624(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,724(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 724, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82357e24
	if (!ctx.cr6.lt) goto loc_82357E24;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-5244
	ctx.r4.s64 = ctx.r11.s64 + -5244;
	// bl 0x822ad4e0
	ctx.lr = 0x82357E08;
	sub_822AD4E0(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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
loc_82357E24:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_82357DA0) {
	__imp__sub_82357DA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82357E48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355580
	ctx.lr = 0x82357E50;
	sub_82355580(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82357E5C;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357e70
	if (ctx.cr6.eq) goto loc_82357E70;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b20b8
	ctx.lr = 0x82357E6C;
	sub_822B20B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82357E70:
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x822acb68
	ctx.lr = 0x82357E78;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82357eb0
	if (!ctx.cr6.gt) goto loc_82357EB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82229bf0
	ctx.lr = 0x82357E88;
	sub_82229BF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357eb0
	if (ctx.cr6.eq) goto loc_82357EB0;
	// lwz r11,264(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357eb0
	if (!ctx.cr6.eq) goto loc_82357EB0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-5220
	ctx.r4.s64 = ctx.r11.s64 + -5220;
	// bl 0x822ad4e0
	ctx.lr = 0x82357EB0;
	sub_822AD4E0(ctx, base);
loc_82357EB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358410
	ctx.lr = 0x82357EC0;
	sub_82358410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357ecc
	if (ctx.cr6.eq) goto loc_82357ECC;
	// bl 0x82229b60
	ctx.lr = 0x82357ECC;
	sub_82229B60(ctx, base);
loc_82357ECC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82357E40) {
	__imp__sub_82357E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357ED4) {
	__imp__sub_82357ED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357ED8) {
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
	// bl 0x82355408
	ctx.lr = 0x82357EE8;
	sub_82355408(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r3,560(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82357EF4;
	sub_82342948(ctx, base);
	// lwz r3,168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x822acb78
	ctx.lr = 0x82357EFC;
	sub_822ACB78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82357ED8) {
	__imp__sub_82357ED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82357F0C) {
	__imp__sub_82357F0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357F10) {
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
	// bl 0x82355408
	ctx.lr = 0x82357F24;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357f40
	if (!ctx.cr6.eq) goto loc_82357F40;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x82357F40;
	sub_822AD548(ctx, base);
loc_82357F40:
	// bl 0x822acb68
	ctx.lr = 0x82357F44;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82357f68
	if (ctx.cr6.eq) goto loc_82357F68;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1c50
	ctx.lr = 0x82357F54;
	sub_822B1C50(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82357f68
	if (ctx.cr6.eq) goto loc_82357F68;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225ae88
	ctx.lr = 0x82357F64;
	sub_8225AE88(ctx, base);
	// b 0x82357f70
	goto loc_82357F70;
loc_82357F68:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225ad38
	ctx.lr = 0x82357F70;
	sub_8225AD38(ctx, base);
loc_82357F70:
	// bl 0x8222fd60
	ctx.lr = 0x82357F74;
	sub_8222FD60(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf. r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// oris r8,r9,1024
	ctx.r8.u64 = ctx.r9.u64 | 67108864;
	// bne 0x82357f9c
	if (!ctx.cr0.eq) goto loc_82357F9C;
	// oris r8,r9,2048
	ctx.r8.u64 = ctx.r9.u64 | 134217728;
loc_82357F9C:
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

PPC_WEAK_FUNC(sub_82357F10) {
	__imp__sub_82357F10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82357FB8) {
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
	// bl 0x82355408
	ctx.lr = 0x82357FCC;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82357fe8
	if (!ctx.cr6.eq) goto loc_82357FE8;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x82357FE8;
	sub_822AD548(ctx, base);
loc_82357FE8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2498
	ctx.lr = 0x82357FF4;
	sub_822B2498(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,5624(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822acb68
	ctx.lr = 0x82358024;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// ble cr6,0x8235805c
	if (!ctx.cr6.gt) goto loc_8235805C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x822b2498
	ctx.lr = 0x82358038;
	sub_822B2498(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225df88
	ctx.lr = 0x82358048;
	sub_8225DF88(ctx, base);
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
loc_8235805C:
	// bl 0x822acb68
	ctx.lr = 0x82358060;
	sub_822ACB68(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82358074
	if (!ctx.cr6.gt) goto loc_82358074;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82358070;
	sub_822B1FB0(ctx, base);
	// b 0x8235807c
	goto loc_8235807C;
loc_82358074:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
loc_8235807C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225afe0
	ctx.lr = 0x82358088;
	sub_8225AFE0(ctx, base);
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

PPC_WEAK_FUNC(sub_82357FB8) {
	__imp__sub_82357FB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235809C) {
	__imp__sub_8235809C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823580A0) {
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
	// bl 0x82355408
	ctx.lr = 0x823580B4;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823580d0
	if (!ctx.cr6.eq) goto loc_823580D0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x823580D0;
	sub_822AD548(ctx, base);
loc_823580D0:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225ae78
	ctx.lr = 0x823580D8;
	sub_8225AE78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823580f0
	if (ctx.cr6.eq) goto loc_823580F0;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5144
	ctx.r3.s64 = ctx.r11.s64 + -5144;
	// bl 0x822ad548
	ctx.lr = 0x823580F0;
	sub_822AD548(ctx, base);
loc_823580F0:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225de00
	ctx.lr = 0x823580F8;
	sub_8225DE00(ctx, base);
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

PPC_WEAK_FUNC(sub_823580A0) {
	__imp__sub_823580A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235810C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235810C) {
	__imp__sub_8235810C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358110) {
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
	// bl 0x82355408
	ctx.lr = 0x82358124;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358140
	if (!ctx.cr6.eq) goto loc_82358140;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x82358140;
	sub_822AD548(ctx, base);
loc_82358140:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225de10
	ctx.lr = 0x82358148;
	sub_8225DE10(ctx, base);
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

PPC_WEAK_FUNC(sub_82358110) {
	__imp__sub_82358110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235815C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235815C) {
	__imp__sub_8235815C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358160) {
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
	// bl 0x82355408
	ctx.lr = 0x82358178;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358194
	if (!ctx.cr6.eq) goto loc_82358194;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x82358194;
	sub_822AD548(ctx, base);
loc_82358194:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x8235819C;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x823581cc
	if (!ctx.cr6.lt) goto loc_823581CC;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,-6516
	ctx.r4.s64 = ctx.r11.s64 + -6516;
	// bl 0x822ad4e0
	ctx.lr = 0x823581C8;
	sub_822AD4E0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_823581CC:
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225b9c8
	ctx.lr = 0x823581D4;
	sub_8225B9C8(ctx, base);
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

PPC_WEAK_FUNC(sub_82358160) {
	__imp__sub_82358160(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823581EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823581EC) {
	__imp__sub_823581EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823581F0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82355408
	ctx.lr = 0x8235820C;
	sub_82355408(ctx, base);
	// lwz r31,276(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358228
	if (!ctx.cr6.eq) goto loc_82358228;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// addi r3,r11,-5184
	ctx.r3.s64 = ctx.r11.s64 + -5184;
	// bl 0x822ad548
	ctx.lr = 0x82358228;
	sub_822AD548(ctx, base);
loc_82358228:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b1fb0
	ctx.lr = 0x82358230;
	sub_822B1FB0(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5624);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82358260
	if (!ctx.cr6.lt) goto loc_82358260;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-6516
	ctx.r4.s64 = ctx.r11.s64 + -6516;
	// bl 0x822ad4e0
	ctx.lr = 0x8235825C;
	sub_822AD4E0(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82358260:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b1fb0
	ctx.lr = 0x82358268;
	sub_822B1FB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5524);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de720
	ctx.lr = 0x8235827C;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x823de800
	ctx.lr = 0x8235828C;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r3,528(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 528);
	// bl 0x8225e0b8
	ctx.lr = 0x823582B0;
	sub_8225E0B8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823581F0) {
	__imp__sub_823581F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823582CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823582CC) {
	__imp__sub_823582CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823582D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// bne cr6,0x8235832c
	if (!ctx.cr6.eq) goto loc_8235832C;
	// addi r11,r11,-9032
	ctx.r11.s64 = ctx.r11.s64 + -9032;
	// li r30,61
	ctx.r30.s64 = 61;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
loc_823582FC:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwzu r4,12(r31)
	ea = 12 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82295358
	ctx.lr = 0x82358308;
	sub_82295358(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x823582fc
	if (!ctx.cr0.eq) goto loc_823582FC;
loc_82358310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82358314:
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
loc_8235832C:
	// addi r4,r11,-9032
	ctx.r4.s64 = ctx.r11.s64 + -9032;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_82358340:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82358348:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// beq cr6,0x8235836c
	if (ctx.cr6.eq) goto loc_8235836C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82358348
	if (ctx.cr6.eq) goto loc_82358348;
loc_8235836C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8235838c
	if (ctx.cr6.eq) goto loc_8235838C;
	// addi r6,r6,12
	ctx.r6.s64 = ctx.r6.s64 + 12;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r6,732
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 732, ctx.xer);
	// blt cr6,0x82358340
	if (ctx.cr6.lt) goto loc_82358340;
	// b 0x82358310
	goto loc_82358310;
loc_8235838C:
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// b 0x82358314
	goto loc_82358314;
}

PPC_WEAK_FUNC(sub_823582D0) {
	__imp__sub_823582D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823583AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823583AC) {
	__imp__sub_823583AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823583B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
	// stb r10,174(r3)
	PPC_STORE_U8(ctx.r3.u32 + 174, ctx.r10.u8);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r8,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r8.u32);
	// bl 0x82342858
	ctx.lr = 0x823583F4;
	sub_82342858(ctx, base);
	// stw r3,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823583B0) {
	__imp__sub_823583B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235840C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235840C) {
	__imp__sub_8235840C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82358418;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32020
	ctx.r11.s64 = -2098462720;
	// lwz r10,356(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 356);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r9,r11,9624
	ctx.r9.s64 = ctx.r11.s64 + 9624;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,52(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235844c
	if (ctx.cr6.lt) goto loc_8235844C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_8235844C:
	// stw r11,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r11.u32);
	// bl 0x8222f3a8
	ctx.lr = 0x82358454;
	sub_8222F3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,360(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 360);
	// bl 0x82342948
	ctx.lr = 0x82358460;
	sub_82342948(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82229728
	ctx.lr = 0x82358470;
	sub_82229728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82229860
	ctx.lr = 0x8235847C;
	sub_82229860(ctx, base);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r3,r31,302
	ctx.r3.s64 = ctx.r31.s64 + 302;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// bl 0x822a24e0
	ctx.lr = 0x82358494;
	sub_822A24E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82348750
	ctx.lr = 0x823584A8;
	sub_82348750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82229b60
	ctx.lr = 0x823584B0;
	sub_82229B60(ctx, base);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r9,-25976
	ctx.r8.s64 = ctx.r9.s64 + -25976;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,174(r8)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + 174);
	// bl 0x82229da8
	ctx.lr = 0x823584C8;
	sub_82229DA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358410) {
	__imp__sub_82358410(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823584D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823584D4) {
	__imp__sub_823584D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823584D8) {
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
	ctx.lr = 0x823584F0;
	sub_822B2678(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x82358518
	if (!ctx.cr6.eq) goto loc_82358518;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
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
loc_82358518:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-5108
	ctx.r4.s64 = ctx.r11.s64 + -5108;
	// bl 0x822ad4e0
	ctx.lr = 0x82358528;
	sub_822AD4E0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
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

PPC_WEAK_FUNC(sub_823584D8) {
	__imp__sub_823584D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82358548;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r30,r11,-31676
	ctx.r30.s64 = ctx.r11.s64 + -31676;
	// lwz r4,-31676(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -31676);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82358588
	if (ctx.cr6.eq) goto loc_82358588;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,12
	ctx.r29.s64 = 12;
loc_82358568:
	// divw r11,r31,r29
	ctx.r11.s32 = ctx.r31.s32 / ctx.r29.s32;
	// li r3,4
	ctx.r3.s64 = 4;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x822a8a78
	ctx.lr = 0x82358578;
	sub_822A8A78(ctx, base);
	// lwzu r4,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82358568
	if (!ctx.cr6.eq) goto loc_82358568;
loc_82358588:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358540) {
	__imp__sub_82358540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358590) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32052
	ctx.r10.s64 = -2100559872;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,-18804
	ctx.r6.s64 = ctx.r10.s64 + -18804;
	// addi r11,r7,-31676
	ctx.r11.s64 = ctx.r7.s64 + -31676;
	// mulli r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 * 44;
	// lwz r10,44(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8222ac08
	sub_8222AC08(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358590) {
	__imp__sub_82358590(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823585C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x823585D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x823585DC;
	sub_822B2288(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x823585E8;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a3ec0
	ctx.lr = 0x823585F4;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823586d8
	if (ctx.cr6.lt) goto loc_823586D8;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-31676
	ctx.r11.s64 = ctx.r10.s64 + -31676;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82358630
	if (ctx.cr6.eq) goto loc_82358630;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82358630;
	sub_822AD4E0(ctx, base);
loc_82358630:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823586c0
	if (ctx.cr6.eq) goto loc_823586C0;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r25,r10,-5080
	ctx.r25.s64 = ctx.r10.s64 + -5080;
loc_82358664:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823586a4
	if (ctx.cr6.eq) goto loc_823586A4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822e8058
	ctx.lr = 0x82358680;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823586a4
	if (!ctx.cr6.eq) goto loc_823586A4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235869c
	if (ctx.cr6.eq) goto loc_8235869C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822ad350
	ctx.lr = 0x8235869C;
	sub_822AD350(ctx, base);
loc_8235869C:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_823586A4:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// blt cr6,0x82358664
	if (ctx.cr6.lt) goto loc_82358664;
loc_823586C0:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823586d8
	if (ctx.cr6.eq) goto loc_823586D8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822ace70
	ctx.lr = 0x823586D8;
	sub_822ACE70(ctx, base);
loc_823586D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823585C8) {
	__imp__sub_823585C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823586E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823586E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822b2288
	ctx.lr = 0x823586F4;
	sub_822B2288(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b2288
	ctx.lr = 0x82358700;
	sub_822B2288(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822a3ec0
	ctx.lr = 0x8235870C;
	sub_822A3EC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823587c0
	if (ctx.cr6.lt) goto loc_823587C0;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-31676
	ctx.r11.s64 = ctx.r10.s64 + -31676;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x82358748
	if (ctx.cr6.eq) goto loc_82358748;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r4,r11,-11100
	ctx.r4.s64 = ctx.r11.s64 + -11100;
	// bl 0x822ad4e0
	ctx.lr = 0x82358748;
	sub_822AD4E0(ctx, base);
loc_82358748:
	// bl 0x822ad190
	ctx.lr = 0x8235874C;
	sub_822AD190(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-18804
	ctx.r29.s64 = ctx.r11.s64 + -18804;
	// lwz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823587c0
	if (ctx.cr6.eq) goto loc_823587C0;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
loc_82358770:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lbz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823587a4
	if (ctx.cr6.eq) goto loc_823587A4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x822e8058
	ctx.lr = 0x8235878C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823587a4
	if (!ctx.cr6.eq) goto loc_823587A4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ace70
	ctx.lr = 0x823587A0;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x823587A4;
	sub_822AD208(ctx, base);
loc_823587A4:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// blt cr6,0x82358770
	if (ctx.cr6.lt) goto loc_82358770;
loc_823587C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823586E0) {
	__imp__sub_823586E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823587C8) {
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
	// bl 0x822ad190
	ctx.lr = 0x823587E0;
	sub_822AD190(ctx, base);
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-18804
	ctx.r30.s64 = ctx.r11.s64 + -18804;
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358818
	if (ctx.cr6.eq) goto loc_82358818;
loc_823587F8:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ace70
	ctx.lr = 0x82358804;
	sub_822ACE70(ctx, base);
	// bl 0x822ad208
	ctx.lr = 0x82358808;
	sub_822AD208(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823587f8
	if (ctx.cr6.lt) goto loc_823587F8;
loc_82358818:
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

PPC_WEAK_FUNC(sub_823587C8) {
	__imp__sub_823587C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358830) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f9,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f11
	ctx.f8.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f0,f2
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fadds f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fsubs f12,f12,f6
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f31,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f29,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fsubs f7,f7,f11
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f11.f64));
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// fadds f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 + ctx.f4.f64));
	// fmsubs f1,f30,f29,f1
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64 - ctx.f1.f64));
	// fmuls f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// fmadds f6,f12,f2,f6
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f2.f64 + ctx.f6.f64));
	// stfs f6,80(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmadds f5,f10,f2,f5
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f2.f64 + ctx.f5.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmadds f2,f8,f3,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f3.f64 + ctx.f13.f64));
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f13,f7,f3,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f3.f64 + ctx.f11.f64));
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmsubs f2,f4,f0,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f9.f64));
	// bl 0x822d8ea0
	ctx.lr = 0x823588F0;
	sub_822D8EA0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_82358830) {
	__imp__sub_82358830(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235890C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235890C) {
	__imp__sub_8235890C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358910) {
	__imp__sub_82358910(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358924) {
	__imp__sub_82358924(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358928) {
	__imp__sub_82358928(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235893C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235893C) {
	__imp__sub_8235893C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235896c
	if (!ctx.cr6.eq) goto loc_8235896C;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
loc_8235896C:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358940) {
	__imp__sub_82358940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823589A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823589A4) {
	__imp__sub_823589A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823589A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823589f8
	if (!ctx.cr6.eq) goto loc_823589F8;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823589d4
	if (!ctx.cr6.eq) goto loc_823589D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823589D4:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_823589F8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823589A8) {
	__imp__sub_823589A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82358a74
	if (!ctx.cr6.eq) goto loc_82358A74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82358a3c
	if (!ctx.cr6.eq) goto loc_82358A3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82358A3C:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// mulli r10,r7,60
	ctx.r10.s64 = ctx.r7.s64 * 60;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// blr 
	return;
loc_82358A74:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82358A18) {
	__imp__sub_82358A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358A94) {
	__imp__sub_82358A94(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82358AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,208
	ctx.r29.s64 = ctx.r3.s64 + 208;
	// lwz r7,212(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// addi r5,r3,212
	ctx.r5.s64 = ctx.r3.s64 + 212;
	// addi r31,r11,232
	ctx.r31.s64 = ctx.r11.s64 + 232;
	// mulli r8,r7,60
	ctx.r8.s64 = ctx.r7.s64 * 60;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82358b04
	if (!ctx.cr6.eq) goto loc_82358B04;
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// b 0x82358b1c
	goto loc_82358B1C;
loc_82358B04:
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
loc_82358B1C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f7,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bge cr6,0x82358b44
	if (!ctx.cr6.lt) goto loc_82358B44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823589a8
	ctx.lr = 0x82358B40;
	sub_823589A8(ctx, base);
	// b 0x82358b7c
	goto loc_82358B7C;
loc_82358B44:
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f9,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f11.f64));
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// bge cr6,0x82358b80
	if (!ctx.cr6.lt) goto loc_82358B80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358a18
	ctx.lr = 0x82358B7C;
	sub_82358A18(ctx, base);
loc_82358B7C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82358B80:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82358bbc
	if (!ctx.cr6.eq) goto loc_82358BBC;
	// lfs f13,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// b 0x82358bd4
	goto loc_82358BD4;
loc_82358BBC:
	// lfs f13,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
loc_82358BD4:
	// stfs f7,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f0,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// stfs f7,0(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f13,f6,f5,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fsubs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f10,f9,f5
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fsubs f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f8.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// stfs f2,8(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358A98) {
	__imp__sub_82358A98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82358C5C) {
	__imp__sub_82358C5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82358C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82358C68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x82358c8c
	if (ctx.cr6.lt) goto loc_82358C8C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358C8C:
	// lfs f6,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f6,f0
	ctx.cr6.compare(ctx.f6.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82358ca4
	if (ctx.cr6.lt) goto loc_82358CA4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358CA4:
	// lfs f8,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f8,f0
	ctx.cr6.compare(ctx.f8.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82358cbc
	if (ctx.cr6.lt) goto loc_82358CBC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358CBC:
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82358cd4
	if (ctx.cr6.lt) goto loc_82358CD4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82358CD4:
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,212(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// mulli r8,r9,60
	ctx.r8.s64 = ctx.r9.s64 * 60;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f9,26572(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 26572);
	ctx.f9.f64 = double(temp.f32);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fsubs f7,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fsubs f10,f13,f9
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82358d24
	if (!ctx.cr6.eq) goto loc_82358D24;
	// lfs f0,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f5,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// b 0x82358d54
	goto loc_82358D54;
loc_82358D24:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r9,r9,60
	ctx.r9.s64 = ctx.r9.s64 * 60;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fneg f5,f12
	ctx.f5.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_82358D54:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82358e54
	if (ctx.cr6.eq) goto loc_82358E54;
	// lfs f11,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f3,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f3,f11,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fcmpu cr6,f1,f6
	ctx.cr6.compare(ctx.f1.f64, ctx.f6.f64);
	// ble cr6,0x82358dc4
	if (!ctx.cr6.gt) goto loc_82358DC4;
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82358dc0
	if (!ctx.cr6.eq) goto loc_82358DC0;
loc_82358D98:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fadds f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// bl 0x822d8ea0
	ctx.lr = 0x82358DB4;
	sub_822D8EA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358DC0:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82358DC4:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82358e54
	if (!ctx.cr6.eq) goto loc_82358E54;
	// lfs f4,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// fmuls f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f11,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmuls f11,f1,f7
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// fcmpu cr6,f11,f8
	ctx.cr6.compare(ctx.f11.f64, ctx.f8.f64);
	// bge cr6,0x82358e20
	if (!ctx.cr6.lt) goto loc_82358E20;
	// fneg f0,f7
	ctx.f0.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f11,236(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,4(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358E20:
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82358e54
	if (!ctx.cr6.eq) goto loc_82358E54;
loc_82358E2C:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// fadds f2,f0,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f1,f13,f9
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// bl 0x822d8ea0
	ctx.lr = 0x82358E48;
	sub_822D8EA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358E54:
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82358f14
	if (ctx.cr6.eq) goto loc_82358F14;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82358f18
	if (!ctx.cr6.eq) goto loc_82358F18;
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f3,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmuls f12,f1,f8
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// bgt cr6,0x82358e2c
	if (ctx.cr6.gt) goto loc_82358E2C;
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f13,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fcmpu cr6,f2,f10
	ctx.cr6.compare(ctx.f2.f64, ctx.f10.f64);
	// bge cr6,0x82358ee4
	if (!ctx.cr6.lt) goto loc_82358EE4;
	// fneg f0,f8
	ctx.f0.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f10,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f9,f0,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f8,4(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358EE4:
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82358f18
	if (!ctx.cr6.eq) goto loc_82358F18;
loc_82358EF0:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bl 0x822d8ea0
	ctx.lr = 0x82358F08;
	sub_822D8EA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358F14:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82358F18:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82358fcc
	if (ctx.cr6.eq) goto loc_82358FCC;
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82358fcc
	if (!ctx.cr6.eq) goto loc_82358FCC;
	// lfs f12,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// fmuls f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f4,f13,f11
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fcmpu cr6,f2,f8
	ctx.cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// bgt cr6,0x82358ef0
	if (ctx.cr6.gt) goto loc_82358EF0;
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f8,f13,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fcmpu cr6,f3,f6
	ctx.cr6.compare(ctx.f3.f64, ctx.f6.f64);
	// bge cr6,0x82358f9c
	if (!ctx.cr6.lt) goto loc_82358F9C;
	// fneg f12,f10
	ctx.f12.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f11,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f0,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f10,0(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f12,f13,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f9.f64));
	// stfs f8,4(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358F9C:
	// clrlwi r9,r30,24
	ctx.r9.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82358fcc
	if (!ctx.cr6.eq) goto loc_82358FCC;
loc_82358FA8:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fadds f1,f0,f9
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// bl 0x822d8ea0
	ctx.lr = 0x82358FC0;
	sub_822D8EA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82358FCC:
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82359050
	if (ctx.cr6.eq) goto loc_82359050;
	// lfs f12,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f4,f8,f13,f11
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// bgt cr6,0x82358fa8
	if (ctx.cr6.gt) goto loc_82358FA8;
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f11,f10,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmuls f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fcmpu cr6,f5,f7
	ctx.cr6.compare(ctx.f5.f64, ctx.f7.f64);
	// bge cr6,0x82358d98
	if (!ctx.cr6.lt) goto loc_82358D98;
	// fneg f0,f6
	ctx.f0.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f12,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f10,f0,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f9.f64));
	// stfs f8,4(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82359050:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82358C60) {
	__imp__sub_82358C60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235905C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235905C) {
	__imp__sub_8235905C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359060) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de028
	ctx.lr = 0x82359074;
	__savefpr_28(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r10,r4,60
	ctx.r10.s64 = ctx.r4.s64 * 60;
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f28,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
loc_8235909C:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f4,f12,f0
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f3,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f6,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f31,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f2,f3,f5
	ctx.f5.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 + ctx.f5.f64));
	// fmadds f4,f12,f3,f4
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f3.f64 + ctx.f4.f64));
	// fmadds f3,f11,f0,f13
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fsubs f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fsubs f13,f4,f31
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f31.f64));
	// fsubs f12,f3,f9
	ctx.f12.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// fsubs f5,f2,f1
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f30,f13,f1
	ctx.f30.f64 = double(float(ctx.f13.f64 - ctx.f1.f64));
	// bne cr6,0x82359114
	if (!ctx.cr6.eq) goto loc_82359114;
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// b 0x8235913c
	goto loc_8235913C;
loc_82359114:
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r7,r7,60
	ctx.r7.s64 = ctx.r7.s64 * 60;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fneg f3,f3
	ctx.f3.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_8235913C:
	// lfs f13,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f31,f13,f3
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmr f13,f29
	ctx.f13.f64 = ctx.f29.f64;
	// fcmpu cr6,f12,f28
	ctx.cr6.compare(ctx.f12.f64, ctx.f28.f64);
	// fmadds f0,f0,f4,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f4.f64 + ctx.f31.f64));
	// fsubs f31,f0,f2
	ctx.f31.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// bge cr6,0x82359180
	if (!ctx.cr6.lt) goto loc_82359180;
	// fmuls f0,f11,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmadds f11,f10,f7,f0
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fsubs f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// fdivs f0,f10,f9
	ctx.f0.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82359180
	if (!ctx.cr6.lt) goto loc_82359180;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82359180:
	// fcmpu cr6,f5,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f5.f64, ctx.f28.f64);
	// bge cr6,0x823591d4
	if (!ctx.cr6.lt) goto loc_823591D4;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f11,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f7,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fsubs f9,f10,f6
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fsubs f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f1.f64));
	// fsubs f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fdivs f0,f6,f5
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f5.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823591d4
	if (!ctx.cr6.lt) goto loc_823591D4;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f11,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_823591D4:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bge cr6,0x8235922c
	if (!ctx.cr6.lt) goto loc_8235922C;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f11,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f7,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f12.f64));
	// fsubs f6,f9,f10
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fsubs f5,f6,f1
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f1.f64));
	// fsubs f0,f5,f30
	ctx.f0.f64 = double(float(ctx.f5.f64 - ctx.f30.f64));
	// fdivs f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 / ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8235922c
	if (!ctx.cr6.lt) goto loc_8235922C;
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// stfs f10,16(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_8235922C:
	// fcmpu cr6,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f28.f64);
	// bge cr6,0x82359284
	if (!ctx.cr6.lt) goto loc_82359284;
	// fmuls f0,f4,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmadds f12,f3,f7,f0
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fsubs f11,f12,f2
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fdivs f0,f11,f10
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82359284
	if (!ctx.cr6.lt) goto loc_82359284;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82359254:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x823593bc
	if (ctx.cr6.eq) goto loc_823593BC;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82359300
	if (!ctx.cr6.eq) goto loc_82359300;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823592ec
	if (!ctx.cr6.eq) goto loc_823592EC;
	// b 0x8235930c
	goto loc_8235930C;
loc_82359284:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82359384
	if (ctx.cr6.eq) goto loc_82359384;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8235938c
	if (ctx.cr6.eq) goto loc_8235938C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82359254
	if (!ctx.cr6.eq) goto loc_82359254;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82359398
	if (ctx.cr6.eq) goto loc_82359398;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823592e0
	if (!ctx.cr6.eq) goto loc_823592E0;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235930c
	if (ctx.cr6.eq) goto loc_8235930C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mulli r11,r10,60
	ctx.r11.s64 = ctx.r10.s64 * 60;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82359308
	goto loc_82359308;
loc_823592E0:
	// addi r11,r11,-60
	ctx.r11.s64 = ctx.r11.s64 + -60;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// b 0x82359308
	goto loc_82359308;
loc_823592EC:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x82359308
	goto loc_82359308;
loc_82359300:
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
loc_82359308:
	// li r5,1
	ctx.r5.s64 = 1;
loc_8235930C:
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82359384
	if (ctx.cr6.eq) goto loc_82359384;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// fsubs f12,f0,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f7
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f6,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f1,f5
	ctx.f4.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fmadds f8,f12,f13,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f8.f64));
	// fmadds f7,f10,f13,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fmuls f3,f9,f8
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmadds f2,f6,f7,f3
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f4
	ctx.cr6.compare(ctx.f2.f64, ctx.f4.f64);
	// blt cr6,0x823593d4
	if (ctx.cr6.lt) goto loc_823593D4;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r11,24
	ctx.r5.s64 = ctx.r11.s64 + 24;
	// fmuls f13,f8,f0
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// fmadds f9,f12,f7,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blt cr6,0x823593f8
	if (ctx.cr6.lt) goto loc_823593F8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// b 0x8235909c
	goto loc_8235909C;
loc_82359384:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82359420
	goto loc_82359420;
loc_8235938C:
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// b 0x8235941c
	goto loc_8235941C;
loc_82359398:
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,16(r9)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// b 0x8235941c
	goto loc_8235941C;
loc_823593BC:
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stfs f4,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f3,12(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f2,16(r9)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// b 0x8235941c
	goto loc_8235941C;
loc_823593D4:
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// b 0x82359418
	goto loc_82359418;
loc_823593F8:
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f12,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f1
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
loc_82359418:
	// stfs f11,16(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
loc_8235941C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82359420:
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x82359428;
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

PPC_WEAK_FUNC(sub_82359060) {
	__imp__sub_82359060(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82359440;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x82359448;
	__savefpr_28(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82358c60
	ctx.lr = 0x82359470;
	sub_82358C60(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235976c
	if (!ctx.cr6.eq) goto loc_8235976C;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,208(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// mulli r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 * 60;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f29,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fdivs f28,f13,f9
	ctx.f28.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// bne cr6,0x823594c4
	if (!ctx.cr6.eq) goto loc_823594C4;
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
loc_823594C4:
	// lfs f13,36(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmadds f0,f13,f0,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f30.f64));
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lfs f31,26572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 26572);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823595a0
	if (!ctx.cr6.gt) goto loc_823595A0;
loc_823594E4:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bne cr6,0x82359534
	if (!ctx.cr6.eq) goto loc_82359534;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82359528
	if (!ctx.cr6.eq) goto loc_82359528;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82359570
	if (ctx.cr6.eq) goto loc_82359570;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mulli r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 * 60;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x8235956c
	goto loc_8235956C;
loc_82359528:
	// addi r3,r3,-60
	ctx.r3.s64 = ctx.r3.s64 + -60;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// b 0x8235956c
	goto loc_8235956C;
loc_82359534:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82359564
	if (!ctx.cr6.eq) goto loc_82359564;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82359570
	if (ctx.cr6.eq) goto loc_82359570;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8235956c
	goto loc_8235956C;
loc_82359564:
	// addi r3,r3,60
	ctx.r3.s64 = ctx.r3.s64 + 60;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8235956C:
	// li r9,1
	ctx.r9.s64 = 1;
loc_82359570:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235958c
	if (ctx.cr6.eq) goto loc_8235958C;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x823594e4
	if (ctx.cr6.gt) goto loc_823594E4;
	// b 0x823595a0
	goto loc_823595A0;
loc_8235958C:
	// fsubs f0,f30,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
loc_823595A0:
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// fdivs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// bne cr6,0x823595b4
	if (!ctx.cr6.eq) goto loc_823595B4;
	// fsubs f2,f29,f2
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f2.f64));
loc_823595B4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823595dc
	if (!ctx.cr6.eq) goto loc_823595DC;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8235960c
	goto loc_8235960C;
loc_823595DC:
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r11,r9,60
	ctx.r11.s64 = ctx.r9.s64 * 60;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_8235960C:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x82358830
	ctx.lr = 0x82359620;
	sub_82358830(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82359060
	ctx.lr = 0x82359648;
	sub_82359060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235974c
	if (!ctx.cr6.eq) goto loc_8235974C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r31,r11,-2232
	ctx.r31.s64 = ctx.r11.s64 + -2232;
loc_82359660:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,232
	ctx.r3.s64 = ctx.r11.s64 + 232;
	// lfs f12,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82359690;
	sub_821F2D08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r8,r10,60
	ctx.r8.s64 = ctx.r10.s64 * 60;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823596cc
	if (!ctx.cr6.eq) goto loc_823596CC;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x823596ec
	goto loc_823596EC;
loc_823596CC:
	// lfs f0,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fneg f1,f11
	ctx.f1.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_823596EC:
	// lfs f0,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// bne cr6,0x82359700
	if (!ctx.cr6.eq) goto loc_82359700;
	// fdivs f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// b 0x82359708
	goto loc_82359708;
loc_82359700:
	// fdivs f13,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// fsubs f2,f29,f13
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
loc_82359708:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x82358830
	ctx.lr = 0x8235971C;
	sub_82358830(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r4,212(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// bl 0x82359060
	ctx.lr = 0x82359740;
	sub_82359060(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359660
	if (ctx.cr6.eq) goto loc_82359660;
loc_8235974C:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235976c
	if (ctx.cr6.eq) goto loc_8235976C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,232
	ctx.r4.s64 = ctx.r11.s64 + 232;
	// bl 0x822d48f0
	ctx.lr = 0x82359768;
	sub_822D48F0(ctx, base);
	// stfs f1,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_8235976C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x82359778;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82359438) {
	__imp__sub_82359438(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235977C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235977C) {
	__imp__sub_8235977C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82359788;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,0(r5)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823597d4
	if (!ctx.cr6.lt) goto loc_823597D4;
loc_823597BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_823597D4:
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823597bc
	if (ctx.cr6.lt) goto loc_823597BC;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823597bc
	if (ctx.cr6.lt) goto loc_823597BC;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823597bc
	if (ctx.cr6.lt) goto loc_823597BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,320(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f1,244(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lfs f0,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d52c8
	ctx.lr = 0x82359818;
	sub_822D52C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f10,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f9,236(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f30,f12,f29,f10
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f10.f64));
	// fmadds f29,f11,f29,f9
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f29.f64 + ctx.f9.f64));
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f1,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82359060
	ctx.lr = 0x82359860;
	sub_82359060(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82359884
	if (!ctx.cr6.eq) goto loc_82359884;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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
loc_82359884:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,13220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823598e0
	if (!ctx.cr6.lt) goto loc_823598E0;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-5024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f7,f10,f11,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// b 0x823599bc
	goto loc_823599BC;
loc_823598E0:
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82359934
	if (!ctx.cr6.lt) goto loc_82359934;
	// lwz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// mulli r10,r10,60
	ctx.r10.s64 = ctx.r10.s64 * 60;
	// lfs f11,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lfs f0,-5024(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -5024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// fmadds f7,f10,f11,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// b 0x823599bc
	goto loc_823599BC;
loc_82359934:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,232
	ctx.r5.s64 = ctx.r11.s64 + 232;
	// lfs f1,-23592(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23592);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82359060
	ctx.lr = 0x8235995C;
	sub_82359060(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823597bc
	if (!ctx.cr6.eq) goto loc_823597BC;
	// lfs f0,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// lfs f12,-5024(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -5024);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f13,f29,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f11.f64));
	// fmadds f5,f13,f7,f8
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fsubs f4,f10,f6
	ctx.f4.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// fcmpu cr6,f5,f31
	ctx.cr6.compare(ctx.f5.f64, ctx.f31.f64);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fsubs f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fsel f0,f2,f0,f3
	ctx.f0.f64 = ctx.f2.f64 >= 0.0 ? ctx.f0.f64 : ctx.f3.f64;
	// fsel f0,f1,f31,f0
	ctx.f0.f64 = ctx.f1.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_823599BC:
	// ble cr6,0x823599c8
	if (!ctx.cr6.gt) goto loc_823599C8;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_823599C8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

PPC_WEAK_FUNC(sub_82359780) {
	__imp__sub_82359780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823599E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823599E8;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r4,12
	ctx.r30.s64 = ctx.r4.s64 + 12;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f2,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f1,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// bl 0x822d8ea0
	ctx.lr = 0x82359A28;
	sub_822D8EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359cac
	if (ctx.cr6.eq) goto loc_82359CAC;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r27,r31,24
	ctx.r27.s64 = ctx.r31.s64 + 24;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d8ea0
	ctx.lr = 0x82359A50;
	sub_822D8EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359cac
	if (ctx.cr6.eq) goto loc_82359CAC;
	// stfs f31,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82358940
	ctx.lr = 0x82359A70;
	sub_82358940(ctx, base);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// lfs f1,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822d8ea0
	ctx.lr = 0x82359A8C;
	sub_822D8EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359cac
	if (ctx.cr6.eq) goto loc_82359CAC;
	// stfs f31,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822d8ea0
	ctx.lr = 0x82359AB0;
	sub_822D8EA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82359cac
	if (ctx.cr6.eq) goto loc_82359CAC;
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// stfs f31,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r30,r11,-2280
	ctx.r30.s64 = ctx.r11.s64 + -2280;
	// beq cr6,0x82359ae4
	if (ctx.cr6.eq) goto loc_82359AE4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f2d08
	ctx.lr = 0x82359AE4;
	sub_821F2D08(ctx, base);
loc_82359AE4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821f2d08
	ctx.lr = 0x82359AF8;
	sub_821F2D08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821f2d08
	ctx.lr = 0x82359B0C;
	sub_821F2D08(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x821f2d08
	ctx.lr = 0x82359B20;
	sub_821F2D08(ctx, base);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f9,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f8,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f6,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fadds f5,f6,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f2,104(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// bl 0x822d48f0
	ctx.lr = 0x82359B70;
	sub_822D48F0(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f12,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f10,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-31648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -31648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmadds f9,f13,f30,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f11.f64));
	// stfs f9,144(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmadds f8,f12,f30,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f10.f64));
	// stfs f8,148(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82359BB4;
	sub_821F2D08(ctx, base);
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lfs f6,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f4,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f3,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,-31652(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -31652);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fneg f30,f6
	ctx.f30.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fneg f7,f31
	ctx.f7.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fmuls f2,f30,f31
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// fmuls f1,f5,f31
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f0,f5,f7,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f2.f64));
	// fmadds f13,f6,f7,f1
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fadds f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f11,f13,f3
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82359C10;
	sub_821F2D08(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,13216(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13216);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f31,f0
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f9,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f8,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f10,f30,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// fmadds f6,f29,f10,f8
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821f2d08
	ctx.lr = 0x82359C48;
	sub_821F2D08(ctx, base);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// ble cr6,0x82359cac
	if (!ctx.cr6.gt) goto loc_82359CAC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r28,r11,-2232
	ctx.r28.s64 = ctx.r11.s64 + -2232;
loc_82359C64:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f35e0
	ctx.lr = 0x82359C98;
	sub_821F35E0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82359c64
	if (ctx.cr6.lt) goto loc_82359C64;
loc_82359CAC:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

PPC_WEAK_FUNC(sub_823599E0) {
	__imp__sub_823599E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82359CC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,-11880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11880);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82359e58
	if (ctx.cr6.eq) goto loc_82359E58;
	// lwz r31,208(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r30,212(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// lis r26,-32190
	ctx.r26.s64 = -2109603840;
	// mulli r10,r30,60
	ctx.r10.s64 = ctx.r30.s64 * 60;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82359D04:
	// lwz r9,-31644(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31644);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82359d18
	if (ctx.cr6.eq) goto loc_82359D18;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82359D18:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82359d80
	if (!ctx.cr6.lt) goto loc_82359D80;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823599e0
	ctx.lr = 0x82359D3C;
	sub_823599E0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82359d70
	if (!ctx.cr6.eq) goto loc_82359D70;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359d78
	if (ctx.cr6.eq) goto loc_82359D78;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82359d04
	goto loc_82359D04;
loc_82359D70:
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82359D78:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82359d04
	goto loc_82359D04;
loc_82359D80:
	// lwz r31,208(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 208);
	// lwz r30,212(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82359dc8
	if (!ctx.cr6.eq) goto loc_82359DC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359dd0
	if (ctx.cr6.eq) goto loc_82359DD0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82359dd0
	goto loc_82359DD0;
loc_82359DC8:
	// addi r29,r29,-60
	ctx.r29.s64 = ctx.r29.s64 + -60;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82359DD0:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82359DD4:
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x82359de4
	if (ctx.cr6.eq) goto loc_82359DE4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82359DE4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82359e58
	if (!ctx.cr6.lt) goto loc_82359E58;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823599e0
	ctx.lr = 0x82359E08;
	sub_823599E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82359e44
	if (!ctx.cr6.eq) goto loc_82359E44;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82359e4c
	if (ctx.cr6.eq) goto loc_82359E4C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r9,-31644(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31644);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// mulli r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 * 60;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82359dd4
	goto loc_82359DD4;
loc_82359E44:
	// addi r29,r29,-60
	ctx.r29.s64 = ctx.r29.s64 + -60;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
loc_82359E4C:
	// lwz r9,-31644(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -31644);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x82359dd4
	goto loc_82359DD4;
loc_82359E58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82359CC0) {
	__imp__sub_82359CC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82359E68;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31811
	ctx.r30.s64 = -2084765696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,13788(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13788);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r4,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82359cc0
	ctx.lr = 0x82359E90;
	sub_82359CC0(ctx, base);
	// lwz r3,560(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x82342948
	ctx.lr = 0x82359E98;
	sub_82342948(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f31,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,876(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
	// bl 0x82358a98
	ctx.lr = 0x82359EB4;
	sub_82358A98(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82359780
	ctx.lr = 0x82359EC4;
	sub_82359780(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// lfs f30,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x82359ed8
	if (!ctx.cr6.eq) goto loc_82359ED8;
	// stfs f30,876(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
loc_82359ED8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f13.f64 = double(temp.f32);
	// lbz r9,13788(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 13788);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addic r6,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,26572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 26572);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// subfe r5,r6,r9
	temp.u8 = (~ctx.r6.u32 + ctx.r9.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fsel f29,f12,f13,f0
	ctx.f29.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82359438
	ctx.lr = 0x82359F10;
	sub_82359438(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f29
	ctx.cr6.compare(ctx.f2.f64, ctx.f29.f64);
	// bge cr6,0x82359f2c
	if (!ctx.cr6.lt) goto loc_82359F2C;
	// fcmpu cr6,f2,f31
	ctx.cr6.compare(ctx.f2.f64, ctx.f31.f64);
	// bgt cr6,0x82359f30
	if (ctx.cr6.gt) goto loc_82359F30;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// b 0x82359f30
	goto loc_82359F30;
loc_82359F2C:
	// lfs f2,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
loc_82359F30:
	// lfs f0,320(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// ble cr6,0x82359f40
	if (!ctx.cr6.gt) goto loc_82359F40;
	// stfs f30,876(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 876, temp.u32);
loc_82359F40:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f4,876(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 876);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f0,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x82354560
	ctx.lr = 0x82359F64;
	sub_82354560(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

PPC_WEAK_FUNC(sub_82359E60) {
	__imp__sub_82359E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359F78) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-32052
	ctx.r9.s64 = -2100559872;
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// addi r8,r9,-18804
	ctx.r8.s64 = ctx.r9.s64 + -18804;
	// mulli r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 * 44;
	// lwz r11,44(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82359F78) {
	__imp__sub_82359F78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359FA0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82359fac
	if (!ctx.cr6.eq) goto loc_82359FAC;
	// blr 
	return;
loc_82359FAC:
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r10,44
	ctx.r10.s64 = 44;
	// addi r9,r11,-18804
	ctx.r9.s64 = ctx.r11.s64 + -18804;
	// lwz r11,44(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82359FA0) {
	__imp__sub_82359FA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82359FCC) {
	__imp__sub_82359FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82359FD0) {
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
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-18804
	ctx.r30.s64 = ctx.r11.s64 + -18804;
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8235a010
	if (!ctx.cr6.gt) goto loc_8235A010;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-5020
	ctx.r4.s64 = ctx.r11.s64 + -5020;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x8235A010;
	sub_822830E8(ctx, base);
loc_8235A010:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235a020
	if (!ctx.cr6.eq) goto loc_8235A020;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8235a030
	goto loc_8235A030;
loc_8235A020:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mulli r10,r31,44
	ctx.r10.s64 = ctx.r31.s64 * 44;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,-44
	ctx.r3.s64 = ctx.r11.s64 + -44;
loc_8235A030:
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

PPC_WEAK_FUNC(sub_82359FD0) {
	__imp__sub_82359FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x8235A050;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31816
	ctx.r11.s64 = -2085093376;
	// lwz r11,-11880(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11880);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235a0fc
	if (ctx.cr6.eq) goto loc_8235A0FC;
	// lis r11,-32052
	ctx.r11.s64 = -2100559872;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r11,-18804
	ctx.r27.s64 = ctx.r11.s64 + -18804;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r30,44(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235a0fc
	if (ctx.cr6.eq) goto loc_8235A0FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_8235A090:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8235a0ec
	if (!ctx.cr6.gt) goto loc_8235A0EC;
loc_8235A0A4:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235a0bc
	if (!ctx.cr6.eq) goto loc_8235A0BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq cr6,0x8235a0c0
	if (ctx.cr6.eq) goto loc_8235A0C0;
loc_8235A0BC:
	// li r6,0
	ctx.r6.s64 = 0;
loc_8235A0C0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823599e0
	ctx.lr = 0x8235A0D4;
	sub_823599E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235a0a4
	if (ctx.cr6.lt) goto loc_8235A0A4;
	// lwz r11,48(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
loc_8235A0EC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235a090
	if (ctx.cr6.lt) goto loc_8235A090;
loc_8235A0FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A048) {
	__imp__sub_8235A048(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A108) {
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
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r4,r10,-4760
	ctx.r4.s64 = ctx.r10.s64 + -4760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822801e0
	ctx.lr = 0x8235A130;
	sub_822801E0(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,27040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27040, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,27016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27016, ctx.r11.u32);
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// stb r9,27032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27032, ctx.r9.u8);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// stw r11,27036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27036, ctx.r11.u32);
	// addi r3,r7,-4776
	ctx.r3.s64 = ctx.r7.s64 + -4776;
	// stw r11,27024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27024, ctx.r11.u32);
	// addi r8,r9,-4832
	ctx.r8.s64 = ctx.r9.s64 + -4832;
	// stw r11,27028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27028, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,27020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27020, ctx.r11.u32);
	// li r6,1800
	ctx.r6.s64 = 1800;
	// stw r11,27096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27096, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,27076(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27076, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,27080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27080, ctx.r11.u32);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,27084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27084, ctx.r11.u32);
	// stw r11,27088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27088, ctx.r11.u32);
	// stw r11,27092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27092, ctx.r11.u32);
	// addi r11,r31,27076
	ctx.r11.s64 = ctx.r31.s64 + 27076;
	// bl 0x822e1618
	ctx.lr = 0x8235A19C;
	sub_822E1618(ctx, base);
	// lis r6,-31810
	ctx.r6.s64 = -2084700160;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r4,-32190
	ctx.r4.s64 = -2109603840;
	// addi r7,r5,-4896
	ctx.r7.s64 = ctx.r5.s64 + -4896;
	// stw r3,-2720(r6)
	PPC_STORE_U32(ctx.r6.u32 + -2720, ctx.r3.u32);
	// addi r4,r4,-31640
	ctx.r4.s64 = ctx.r4.s64 + -31640;
	// addi r3,r11,-4908
	ctx.r3.s64 = ctx.r11.s64 + -4908;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1828
	ctx.lr = 0x8235A1C8;
	sub_822E1828(ctx, base);
	// lis r10,-31811
	ctx.r10.s64 = -2084765696;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// li r6,100
	ctx.r6.s64 = 100;
	// addi r8,r9,-4952
	ctx.r8.s64 = ctx.r9.s64 + -4952;
	// stw r3,13796(r10)
	PPC_STORE_U32(ctx.r10.u32 + 13796, ctx.r3.u32);
	// addi r3,r7,-4920
	ctx.r3.s64 = ctx.r7.s64 + -4920;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x822e1618
	ctx.lr = 0x8235A1F4;
	sub_822E1618(ctx, base);
	// lis r6,-31811
	ctx.r6.s64 = -2084765696;
	// stw r3,13792(r6)
	PPC_STORE_U32(ctx.r6.u32 + 13792, ctx.r3.u32);
	// bl 0x823097f0
	ctx.lr = 0x8235A200;
	sub_823097F0(ctx, base);
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

PPC_WEAK_FUNC(sub_8235A108) {
	__imp__sub_8235A108(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A214) {
	__imp__sub_8235A214(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r3,r11,13800
	ctx.r3.s64 = ctx.r11.s64 + 13800;
	// b 0x82280470
	sub_82280470(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A218) {
	__imp__sub_8235A218(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A224) {
	__imp__sub_8235A224(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r10,r11,13800
	ctx.r10.s64 = ctx.r11.s64 + 13800;
	// stw r4,27028(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27028, ctx.r4.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A228) {
	__imp__sub_8235A228(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// addi r10,r11,13800
	ctx.r10.s64 = ctx.r11.s64 + 13800;
	// lbz r11,27033(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27033);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,27028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27028);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r9,27034(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 27034);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8235a298
	if (ctx.cr6.eq) goto loc_8235A298;
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subfc r4,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfe r9,r6,r3
	temp.u8 = (~ctx.r6.u32 + ctx.r3.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r6.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 & ctx.r11.u64;
	// stw r7,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r7.u32);
	// stb r8,27034(r10)
	PPC_STORE_U8(ctx.r10.u32 + 27034, ctx.r8.u8);
	// blr 
	return;
loc_8235A298:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8235a2b4
	if (ctx.cr6.gt) goto loc_8235A2B4;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8235A2B4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A238) {
	__imp__sub_8235A238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A2BC) {
	__imp__sub_8235A2BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31811
	ctx.r10.s64 = -2084765696;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r10,13800
	ctx.r9.s64 = ctx.r10.s64 + 13800;
	// stb r11,27032(r9)
	PPC_STORE_U8(ctx.r9.u32 + 27032, ctx.r11.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A2C0) {
	__imp__sub_8235A2C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A2D4) {
	__imp__sub_8235A2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A2D8) {
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
	// bl 0x8235a7f8
	ctx.lr = 0x8235A2F4;
	sub_8235A7F8(ctx, base);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// stw r3,27020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 27020, ctx.r3.u32);
	// bne cr6,0x8235a31c
	if (!ctx.cr6.eq) goto loc_8235A31C;
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-4752
	ctx.r4.s64 = ctx.r11.s64 + -4752;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x82280b08
	ctx.lr = 0x8235A31C;
	sub_82280B08(ctx, base);
loc_8235A31C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,27032(r31)
	PPC_STORE_U8(ctx.r31.u32 + 27032, ctx.r11.u8);
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

PPC_WEAK_FUNC(sub_8235A2D8) {
	__imp__sub_8235A2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A33C) {
	__imp__sub_8235A33C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A340) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8235a398
	if (!ctx.cr6.gt) goto loc_8235A398;
	// lwz r6,20(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r6,20
	ctx.r11.s64 = ctx.r6.s64 + 20;
loc_8235A35C:
	// lbz r5,-8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8235a37c
	if (ctx.cr6.eq) goto loc_8235A37C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x8235a37c
	if (ctx.cr6.eq) goto loc_8235A37C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x8235a388
	if (!ctx.cr6.eq) goto loc_8235A388;
loc_8235A37C:
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x8235a3a0
	if (ctx.cr6.eq) goto loc_8235A3A0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8235A388:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235a35c
	if (ctx.cr6.lt) goto loc_8235A35C;
loc_8235A398:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235A3A0:
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A340) {
	__imp__sub_8235A340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A3AC) {
	__imp__sub_8235A3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x8235A3B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,13800
	ctx.r10.s64 = ctx.r11.s64 + 13800;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r3,27020(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 27020);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235a41c
	if (ctx.cr6.eq) goto loc_8235A41C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8235a41c
	if (ctx.cr6.lt) goto loc_8235A41C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8235a41c
	if (!ctx.cr6.lt) goto loc_8235A41C;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x8235a340
	ctx.lr = 0x8235A3F8;
	sub_8235A340(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235a41c
	if (ctx.cr6.eq) goto loc_8235A41C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230a648
	ctx.lr = 0x8235A414;
	sub_8230A648(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8235A41C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A3B0) {
	__imp__sub_8235A3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A42C) {
	__imp__sub_8235A42C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A430) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A430) {
	__imp__sub_8235A430(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A43C) {
	__imp__sub_8235A43C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A440) {
	__imp__sub_8235A440(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A44C) {
	__imp__sub_8235A44C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x8235A458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235a4a4
	if (!ctx.cr6.gt) goto loc_8235A4A4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235A478:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x822e8058
	ctx.lr = 0x8235A488;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8235a4b0
	if (ctx.cr6.eq) goto loc_8235A4B0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8235a478
	if (ctx.cr6.lt) goto loc_8235A478;
loc_8235A4A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8235A4B0:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_8235A450) {
	__imp__sub_8235A450(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A4C4) {
	__imp__sub_8235A4C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A4C8) {
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
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8235a534
	if (ctx.cr6.eq) goto loc_8235A534;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f1,5876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8223b938
	ctx.lr = 0x8235A4FC;
	sub_8223B938(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r5,r9,-4712
	ctx.r5.s64 = ctx.r9.s64 + -4712;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f12,f1
	ctx.f1.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x822e8368
	ctx.lr = 0x8235A530;
	sub_822E8368(ctx, base);
	// b 0x8235a550
	goto loc_8235A550;
loc_8235A534:
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r31,r11,13800
	ctx.r31.s64 = ctx.r11.s64 + 13800;
	// addi r5,r10,20464
	ctx.r5.s64 = ctx.r10.s64 + 20464;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8235A550;
	sub_822E8368(ctx, base);
loc_8235A550:
	// addi r3,r31,27044
	ctx.r3.s64 = ctx.r31.s64 + 27044;
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

PPC_WEAK_FUNC(sub_8235A4C8) {
	__imp__sub_8235A4C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A568) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lwz r4,24(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfs f1,5876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5876);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8223b938
	ctx.lr = 0x8235A598;
	sub_8223B938(ctx, base);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f31,f12,f1
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f1.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8235a5c4
	if (!ctx.cr6.lt) goto loc_8235A5C4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_8235A5C4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,8220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235A5D4;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,1440
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1440, ctx.xer);
	// blt cr6,0x8235a664
	if (ctx.cr6.lt) goto loc_8235A664;
	// lis r11,-30584
	ctx.r11.s64 = -2004353024;
	// lis r10,-18933
	ctx.r10.s64 = -1240793088;
	// ori r9,r11,34953
	ctx.r9.u64 = ctx.r11.u64 | 34953;
	// ori r8,r10,24759
	ctx.r8.u64 = ctx.r10.u64 | 24759;
	// mulhw r11,r31,r9
	ctx.r11.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulhw r10,r31,r8
	ctx.r10.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32)) >> 32;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r11,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// srawi r10,r6,10
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 10;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// mulli r3,r4,1440
	ctx.r3.s64 = ctx.r4.s64 * 1440;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mulli r11,r5,60
	ctx.r11.s64 = ctx.r5.s64 * 60;
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// li r9,60
	ctx.r9.s64 = 60;
	// li r6,1440
	ctx.r6.s64 = 1440;
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// subf r8,r11,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addi r5,r5,-4672
	ctx.r5.s64 = ctx.r5.s64 + -4672;
	// divw r7,r10,r9
	ctx.r7.s32 = ctx.r10.s32 / ctx.r9.s32;
	// divw r6,r31,r6
	ctx.r6.s32 = ctx.r31.s32 / ctx.r6.s32;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,27044
	ctx.r3.s64 = ctx.r30.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8235A660;
	sub_822E8368(ctx, base);
	// b 0x8235a744
	goto loc_8235A744;
loc_8235A664:
	// cmpwi cr6,r31,60
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 60, ctx.xer);
	// blt cr6,0x8235a6ac
	if (ctx.cr6.lt) goto loc_8235A6AC;
	// lis r10,-30584
	ctx.r10.s64 = -2004353024;
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// ori r9,r10,34953
	ctx.r9.u64 = ctx.r10.u64 | 34953;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// mulhw r10,r31,r9
	ctx.r10.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r8,r10,r31
	ctx.r8.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lis r6,-32251
	ctx.r6.s64 = -2113601536;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// li r7,60
	ctx.r7.s64 = 60;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r5,r6,-4684
	ctx.r5.s64 = ctx.r6.s64 + -4684;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r6,r31,r7
	ctx.r6.s32 = ctx.r31.s32 / ctx.r7.s32;
	// mulli r3,r4,60
	ctx.r3.s64 = ctx.r4.s64 * 60;
	// subf r7,r3,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r3.s64;
	// b 0x8235a738
	goto loc_8235A738;
loc_8235A6AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,6024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6024);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x8235a6e8
	if (!ctx.cr6.lt) goto loc_8235A6E8;
	// stfd f31,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// addi r5,r10,-4692
	ctx.r5.s64 = ctx.r10.s64 + -4692;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,27044
	ctx.r3.s64 = ctx.r30.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8235A6E4;
	sub_822E8368(ctx, base);
	// b 0x8235a744
	goto loc_8235A744;
loc_8235A6E8:
	// mulli r11,r31,60
	ctx.r11.s64 = ctx.r31.s64 * 60;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f31,f12
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f12.f64));
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x8235A714;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r11,-31811
	ctx.r11.s64 = -2084765696;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// addi r30,r11,13800
	ctx.r30.s64 = ctx.r11.s64 + 13800;
	// addi r5,r8,-4704
	ctx.r5.s64 = ctx.r8.s64 + -4704;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8235A738:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,27044
	ctx.r3.s64 = ctx.r30.s64 + 27044;
	// bl 0x822e8368
	ctx.lr = 0x8235A744;
	sub_822E8368(ctx, base);
loc_8235A744:
	// addi r3,r30,27044
	ctx.r3.s64 = ctx.r30.s64 + 27044;
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

PPC_WEAK_FUNC(sub_8235A568) {
	__imp__sub_8235A568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A764) {
	__imp__sub_8235A764(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A768) {
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
	// bl 0x8235a4c8
	ctx.lr = 0x8235A77C;
	sub_8235A4C8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r5,r11,-16572
	ctx.r5.s64 = ctx.r11.s64 + -16572;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e8280
	ctx.lr = 0x8235A790;
	sub_822E8280(ctx, base);
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

PPC_WEAK_FUNC(sub_8235A768) {
	__imp__sub_8235A768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A7A8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82177148
	ctx.lr = 0x8235A7C4;
	sub_82177148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82172b20
	ctx.lr = 0x8235A7D4;
	sub_82172B20(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_8235A7A8) {
	__imp__sub_8235A7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A7F4) {
	__imp__sub_8235A7F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A7F8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82177148
	ctx.lr = 0x8235A814;
	sub_82177148(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82172b20
	ctx.lr = 0x8235A824;
	sub_82172B20(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 & ctx.r31.u64;
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

PPC_WEAK_FUNC(sub_8235A7F8) {
	__imp__sub_8235A7F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A844) {
	__imp__sub_8235A844(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A848) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,232
	ctx.r11.s64 = ctx.r3.s64 + 232;
loc_8235A850:
	// lbz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235a868
	if (ctx.cr6.eq) goto loc_8235A868;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8235a880
	if (ctx.cr6.eq) goto loc_8235A880;
loc_8235A868:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8235a850
	if (ctx.cr6.lt) goto loc_8235A850;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8235A880:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A848) {
	__imp__sub_8235A848(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A888) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r3,r10,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A888) {
	__imp__sub_8235A888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A898) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,120
	ctx.r11.s64 = ctx.r3.s64 + 120;
loc_8235A8A0:
	// lbz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235a8b8
	if (ctx.cr6.eq) goto loc_8235A8B8;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r4
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x8235a8d0
	if (ctx.cr6.eq) goto loc_8235A8D0;
loc_8235A8B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x8235a8a0
	if (ctx.cr6.lt) goto loc_8235A8A0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8235A8D0:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A898) {
	__imp__sub_8235A898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A8D8) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235a8ec
	if (ctx.cr6.eq) goto loc_8235A8EC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235A8EC:
	// lbz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A8D8) {
	__imp__sub_8235A8D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A904) {
	__imp__sub_8235A904(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
loc_8235A920:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235a940
	if (!ctx.cr0.eq) goto loc_8235A940;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235a920
	if (!ctx.cr6.eq) goto loc_8235A920;
loc_8235A940:
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A908) {
	__imp__sub_8235A908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235A94C) {
	__imp__sub_8235A94C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8235a960
	if (!ctx.cr6.eq) goto loc_8235A960;
loc_8235A958:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235A960:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235a958
	if (ctx.cr6.eq) goto loc_8235A958;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// std r7,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r7.u64);
loc_8235A984:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8235a9a4
	if (!ctx.cr0.eq) goto loc_8235A9A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8235a984
	if (!ctx.cr6.eq) goto loc_8235A984;
loc_8235A9A4:
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r3,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A950) {
	__imp__sub_8235A950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A9B0) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235a9c4
	if (ctx.cr6.eq) goto loc_8235A9C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235A9C4:
	// lbz r10,160(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 160);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235a9d4
	if (ctx.cr6.eq) goto loc_8235A9D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8235A9D4:
	// lwz r9,96(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r3,r8,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A9B0) {
	__imp__sub_8235A9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235A9F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
loc_8235A9F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf. r3,r8,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235a9f8
	if (!ctx.cr6.eq) goto loc_8235A9F8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235A9F0) {
	__imp__sub_8235A9F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AA1C) {
	__imp__sub_8235AA1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA20) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,104(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA20) {
	__imp__sub_8235AA20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA28) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA28) {
	__imp__sub_8235AA28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA30) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA30) {
	__imp__sub_8235AA30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA38) {
	__imp__sub_8235AA38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA48) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,112(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 112);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA48) {
	__imp__sub_8235AA48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA60) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ld r3,120(r10)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + 120);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA60) {
	__imp__sub_8235AA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AA78) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 112);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235aa9c
	if (ctx.cr6.eq) goto loc_8235AA9C;
	// ld r3,120(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + 120);
	// blr 
	return;
loc_8235AA9C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AA78) {
	__imp__sub_8235AA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AAA4) {
	__imp__sub_8235AAA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AAA8) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235aad4
	if (ctx.cr6.eq) goto loc_8235AAD4;
	// bl 0x82142e90
	ctx.lr = 0x8235AAD4;
	sub_82142E90(ctx, base);
loc_8235AAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82142948
	ctx.lr = 0x8235AADC;
	sub_82142948(ctx, base);
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823de090
	ctx.lr = 0x8235AAEC;
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

PPC_WEAK_FUNC(sub_8235AAA8) {
	__imp__sub_8235AAA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AB04) {
	__imp__sub_8235AB04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,-1128
	ctx.r9.s64 = ctx.r11.s64 + -1128;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8235AB18:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8235ab40
	if (ctx.cr6.eq) goto loc_8235AB40;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// addi r8,r9,768
	ctx.r8.s64 = ctx.r9.s64 + 768;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8235ab18
	if (ctx.cr6.lt) goto loc_8235AB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235AB40:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AB08) {
	__imp__sub_8235AB08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8235AB54) {
	__imp__sub_8235AB54(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8235AB58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31810
	ctx.r11.s64 = -2084700160;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// addi r11,r11,-104
	ctx.r11.s64 = ctx.r11.s64 + -104;
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8235ab88
	if (!ctx.cr6.gt) goto loc_8235AB88;
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bgt cr6,0x8235ab88
	if (ctx.cr6.gt) goto loc_8235AB88;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822807d0
	sub_822807D0(ctx, base);
	return;
loc_8235AB88:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_8235AB58) {
	__imp__sub_8235AB58(ctx, base);
}

