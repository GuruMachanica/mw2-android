#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_820FA574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA574) {
	__imp__sub_820FA574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA578) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82116388
	ctx.lr = 0x820FA58C;
	sub_82116388(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r11,-25976
	ctx.r9.s64 = ctx.r11.s64 + -25976;
	// addi r8,r10,22264
	ctx.r8.s64 = ctx.r10.s64 + 22264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lhz r5,246(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 246);
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// bl 0x820ee978
	ctx.lr = 0x820FA5AC;
	sub_820EE978(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FA578) {
	__imp__sub_820FA578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA5BC) {
	__imp__sub_820FA5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA5C0) {
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
	// bl 0x820ee1e0
	ctx.lr = 0x820FA5D0;
	sub_820EE1E0(ctx, base);
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

PPC_WEAK_FUNC(sub_820FA5C0) {
	__imp__sub_820FA5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FA5F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r5,-30176
	ctx.r4.s64 = ctx.r5.s64 + -30176;
	// rlwinm r3,r6,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// addis r29,r11,3
	ctx.r29.s64 = ctx.r11.s64 + 196608;
	// addi r30,r9,-25976
	ctx.r30.s64 = ctx.r9.s64 + -25976;
	// lwzx r28,r3,r4
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// addi r29,r29,-7320
	ctx.r29.s64 = ctx.r29.s64 + -7320;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lhz r5,240(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 240);
	// bl 0x820ee1e0
	ctx.lr = 0x820FA658;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fa66c
	if (!ctx.cr6.eq) goto loc_820FA66C;
loc_820FA660:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_820FA66C:
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lhz r5,242(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 242);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x820FA680;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fa660
	if (ctx.cr6.eq) goto loc_820FA660;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lhz r5,244(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 244);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820ee1e0
	ctx.lr = 0x820FA69C;
	sub_820EE1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fa660
	if (ctx.cr6.eq) goto loc_820FA660;
	// lfs f11,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// fsubs f7,f12,f11
	ctx.f7.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lfs f9,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// fmuls f2,f7,f7
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmr f3,f7
	ctx.f3.f64 = ctx.f7.f64;
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmr f5,f8
	ctx.f5.f64 = ctx.f8.f64;
	// fsubs f11,f11,f7
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f7.f64));
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fmadds f1,f8,f8,f2
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f2.f64));
	// lfs f8,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f2,f0,f8
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmadds f8,f4,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f1.f64));
	// fsqrts f1,f8
	ctx.f1.f64 = double(float(sqrt(ctx.f8.f64)));
	// fneg f8,f1
	ctx.f8.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f8,f8,f0,f1
	ctx.f8.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f1.f64;
	// fdivs f8,f0,f8
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmuls f3,f3,f8
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// stfs f3,28(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// fmuls f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// stfs f8,32(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f1,0(r25)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fmr f5,f2
	ctx.f5.f64 = ctx.f2.f64;
	// stfs f2,12(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f2,f11,f11
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmr f3,f11
	ctx.f3.f64 = ctx.f11.f64;
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmadds f1,f5,f5,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f11,f9,f9,f1
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f1.f64));
	// fsqrts f9,f11
	ctx.f9.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// fsel f2,f8,f0,f9
	ctx.f2.f64 = ctx.f8.f64 >= 0.0 ? ctx.f0.f64 : ctx.f9.f64;
	// fdivs f1,f0,f2
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// fmuls f0,f5,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f1.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fmuls f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// stfs f11,16(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmuls f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f1.f64));
	// stfs f8,20(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f9,0(r26)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lfs f5,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f0,f5,f4,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmsubs f3,f11,f9,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f4.f64));
	// stfs f3,4(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f2,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f8,f7,f12
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f12.f64));
	// lfs f1,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fadds f7,f6,f10
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmsubs f6,f11,f9,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 - ctx.f0.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f4,4(r27)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// fmuls f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f3,8(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FA5E8) {
	__imp__sub_820FA5E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FA81C) {
	__imp__sub_820FA81C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA820) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r10,r11,20524
	ctx.r10.s64 = ctx.r11.s64 + 20524;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lbz r11,20524(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fa88c
	if (!ctx.cr6.eq) goto loc_820FA88C;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x820fa850
	if (!ctx.cr6.eq) goto loc_820FA850;
loc_820FA848:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FA850:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820fa848
	if (!ctx.cr6.lt) goto loc_820FA848;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// blr 
	return;
loc_820FA88C:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x82394cb8
	sub_82394CB8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FA820) {
	__imp__sub_820FA820(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,18824(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18824);
	// lfs f0,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FA8A0) {
	__imp__sub_820FA8A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FA8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FA8F8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de000
	ctx.lr = 0x820FA900;
	__savefpr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// addi r10,r9,-15680
	ctx.r10.s64 = ctx.r9.s64 + -15680;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lfs f0,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwz r8,18824(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 18824);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// ori r7,r5,22912
	ctx.r7.u64 = ctx.r5.u64 | 22912;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne cr6,0x820fa964
	if (!ctx.cr6.eq) goto loc_820FA964;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x820fa998
	goto loc_820FA998;
loc_820FA964:
	// lwzx r9,r10,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lfs f13,12(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r6,r11,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r11.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r5.u64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fa998
	if (!ctx.cr6.lt) goto loc_820FA998;
	// li r9,1
	ctx.r9.s64 = 1;
loc_820FA998:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fac50
	if (ctx.cr6.eq) goto loc_820FAC50;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f27,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f27.f64 = double(temp.f32);
	// cmpwi cr6,r7,100
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 100, ctx.xer);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// stfs f27,192(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f27,196(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f27,200(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// lfs f12,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// fdivs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fsubs f8,f27,f9
	ctx.f8.f64 = double(float(ctx.f27.f64 - ctx.f9.f64));
	// fmuls f29,f8,f3
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// bge cr6,0x820faa00
	if (!ctx.cr6.lt) goto loc_820FAA00;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f13,f0
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_820FAA00:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f0,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,18832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18832);
	// lfs f30,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f20,f30,f31
	ctx.f20.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FAA20;
	sub_822D77C0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fdivs f19,f28,f31
	ctx.f19.f64 = double(float(ctx.f28.f64 / ctx.f31.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f22,f1
	ctx.f22.f64 = ctx.f1.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,22260(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22260);
	// lfs f0,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5524(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5524);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f24,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f24.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fmuls f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f31,f8,f13
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fdivs f7,f31,f11
	ctx.f7.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// fadds f1,f7,f24
	ctx.f1.f64 = double(float(ctx.f7.f64 + ctx.f24.f64));
	// bl 0x823dde20
	ctx.lr = 0x820FAA6C;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f5,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f5.u64);
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x820faa88
	if (!ctx.cr6.lt) goto loc_820FAA88;
	// li r30,1
	ctx.r30.s64 = 1;
loc_820FAA88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f21,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f21.f64 = double(temp.f32);
	// fcmpu cr6,f31,f21
	ctx.cr6.compare(ctx.f31.f64, ctx.f21.f64);
	// ble cr6,0x820faaa4
	if (!ctx.cr6.gt) goto loc_820FAAA4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bge cr6,0x820faaa4
	if (!ctx.cr6.lt) goto loc_820FAAA4;
	// li r30,3
	ctx.r30.s64 = 3;
loc_820FAAA4:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x820faab0
	if (!ctx.cr6.gt) goto loc_820FAAB0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_820FAAB0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f23,f13
	ctx.f23.f64 = double(float(ctx.f13.f64));
	// lfs f13,8116(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f26,6032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6032);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// fdivs f0,f29,f23
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f23.f64));
	// bge cr6,0x820faaec
	if (!ctx.cr6.lt) goto loc_820FAAEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f26,f31,f13
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f13.f64));
loc_820FAAEC:
	// fsubs f18,f27,f26
	ctx.fpscr.disableFlushMode();
	ctx.f18.f64 = double(float(ctx.f27.f64 - ctx.f26.f64));
	// fdivs f25,f0,f18
	ctx.f25.f64 = double(float(ctx.f0.f64 / ctx.f18.f64));
	// fcmpu cr6,f25,f27
	ctx.cr6.compare(ctx.f25.f64, ctx.f27.f64);
	// ble cr6,0x820fab00
	if (!ctx.cr6.gt) goto loc_820FAB00;
	// fmr f25,f27
	ctx.f25.f64 = ctx.f27.f64;
loc_820FAB00:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820fac50
	if (!ctx.cr6.gt) goto loc_820FAC50;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r27,492(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// fadds f29,f30,f24
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f30.f64 + ctx.f24.f64));
	// addi r31,r11,20524
	ctx.r31.s64 = ctx.r11.s64 + 20524;
loc_820FAB1C:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmr f3,f19
	ctx.f3.f64 = ctx.f19.f64;
	// fadds f10,f11,f24
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f24.f64));
	// fdivs f31,f10,f23
	ctx.f31.f64 = double(float(ctx.f10.f64 / ctx.f23.f64));
	// fmadds f2,f31,f22,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f22.f64 + ctx.f0.f64));
	// bl 0x820fa060
	ctx.lr = 0x820FAB50;
	sub_820FA060(ctx, base);
	// lfs f30,136(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f29
	ctx.cr6.compare(ctx.f30.f64, ctx.f29.f64);
	// bgt cr6,0x820fac44
	if (ctx.cr6.gt) goto loc_820FAC44;
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x820fac44
	if (ctx.cr6.lt) goto loc_820FAC44;
	// lfs f28,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f28.f64 = double(temp.f32);
	// fcmpu cr6,f28,f29
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// bgt cr6,0x820fac44
	if (ctx.cr6.gt) goto loc_820FAC44;
	// fneg f0,f29
	ctx.f0.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// blt cr6,0x820fac44
	if (ctx.cr6.lt) goto loc_820FAC44;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x820fa820
	ctx.lr = 0x820FAB90;
	sub_820FA820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fac50
	if (ctx.cr6.eq) goto loc_820FAC50;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bne cr6,0x820fac44
	if (!ctx.cr6.eq) goto loc_820FAC44;
	// stfs f25,204(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(ctx.f31.f64, ctx.f26.f64);
	// bge cr6,0x820fabd0
	if (!ctx.cr6.lt) goto loc_820FABD0;
	// fdivs f0,f31,f26
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f26.f64));
	// fmuls f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x820fabe8
	goto loc_820FABE8;
loc_820FABD0:
	// fcmpu cr6,f31,f18
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f18.f64);
	// ble cr6,0x820fabe8
	if (!ctx.cr6.gt) goto loc_820FABE8;
	// fsubs f0,f27,f31
	ctx.f0.f64 = double(float(ctx.f27.f64 - ctx.f31.f64));
	// fdivs f13,f0,f26
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f26.f64));
	// fmuls f12,f13,f25
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// stfs f12,204(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
loc_820FABE8:
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f21,152(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// stfs f28,160(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x822d67f0
	ctx.lr = 0x820FAC08;
	sub_822D67F0(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// lhz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// fmr f6,f27
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f27.f64;
	// fmr f5,f27
	ctx.f5.f64 = ctx.f27.f64;
	// fmr f4,f21
	ctx.f4.f64 = ctx.f21.f64;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// fmr f2,f20
	ctx.f2.f64 = ctx.f20.f64;
	// fmr f1,f20
	ctx.f1.f64 = ctx.f20.f64;
	// bl 0x82394fa0
	ctx.lr = 0x820FAC44;
	sub_82394FA0(ctx, base);
loc_820FAC44:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r30
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x820fab1c
	if (ctx.cr6.lt) goto loc_820FAB1C;
loc_820FAC50:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de04c
	ctx.lr = 0x820FAC5C;
	__restfpr_18(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FA8F0) {
	__imp__sub_820FA8F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FAC60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820FAC68;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x820FAC70;
	__savefpr_28(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x820fa820
	ctx.lr = 0x820FACA0;
	sub_820FA820(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fadb8
	if (ctx.cr6.eq) goto loc_820FADB8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r9,r11,20524
	ctx.r9.s64 = ctx.r11.s64 + 20524;
	// lbz r8,20524(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20524);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// bne cr6,0x820fadb8
	if (!ctx.cr6.eq) goto loc_820FADB8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fdivs f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f29.f64));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lwz r11,22308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22308);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lwz r10,22260(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22260);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f31,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lwz r9,22312(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 22312);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// lwz r8,20520(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20520);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f9,f28
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// lwz r9,22300(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22300);
	// lfs f30,5484(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stfs f30,136(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f7,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fdivs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f0.f64));
	// lfs f0,2416(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f8,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// stfs f6,140(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f5,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f8,f0,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f5.f64));
	// stfs f4,144(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x820FAD68;
	sub_822D67F0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r11,22264
	ctx.r9.s64 = ctx.r11.s64 + 22264;
	// lhz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 128);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// fmr f6,f31
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f0,5488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmuls f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82394fa0
	ctx.lr = 0x820FADB8;
	sub_82394FA0(ctx, base);
loc_820FADB8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x820FADC4;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FAC60) {
	__imp__sub_820FAC60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FADC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820FADD0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de024
	ctx.lr = 0x820FADD8;
	__savefpr_27(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r25,r11,20576
	ctx.r25.s64 = ctx.r11.s64 + 20576;
	// ori r9,r10,61924
	ctx.r9.u64 = ctx.r10.u64 | 61924;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lbz r6,-52(r25)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r25.u32 + -52);
	// lwz r10,-40(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -40);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r9,r7,-15680
	ctx.r9.s64 = ctx.r7.s64 + -15680;
	// and r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 & ctx.r10.u64;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r11,-40(r25)
	PPC_STORE_U32(ctx.r25.u32 + -40, ctx.r11.u32);
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// addi r5,r1,168
	ctx.r5.s64 = ctx.r1.s64 + 168;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r22,r8,r9
	ctx.r22.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x820fa5e8
	ctx.lr = 0x820FAE30;
	sub_820FA5E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fb520
	if (ctx.cr6.eq) goto loc_820FB520;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823949f8
	ctx.lr = 0x820FAE48;
	sub_823949F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fb520
	if (ctx.cr6.eq) goto loc_820FB520;
	// rlwinm r10,r24,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f28,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r25,-36
	ctx.r11.s64 = ctx.r25.s64 + -36;
	// lfs f27,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f27.f64 = double(temp.f32);
	// addis r30,r22,1
	ctx.r30.s64 = ctx.r22.s64 + 65536;
	// fdivs f0,f28,f27
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f27.f64));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r30,22912
	ctx.r30.s64 = ctx.r30.s64 + 22912;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,-44(r25)
	PPC_STORE_U32(ctx.r25.u32 + -44, ctx.r10.u32);
	// lfs f30,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// cmpwi cr6,r10,500
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 500, ctx.xer);
	// bge cr6,0x820faebc
	if (!ctx.cr6.lt) goto loc_820FAEBC;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,13988(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 13988);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
loc_820FAEBC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820faecc
	if (!ctx.cr6.eq) goto loc_820FAECC;
	// fsubs f29,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
loc_820FAECC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f30,212(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// stfs f30,216(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// stfs f29,220(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stfs f30,224(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f31,232(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f31,236(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// stfs f28,240(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f31,244(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f31,248(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f31,252(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f27,256(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// bl 0x822d5c30
	ctx.lr = 0x820FAF18;
	sub_822D5C30(ctx, base);
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lfs f12,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stfs f0,420(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f13,424(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f12,428(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f31,176(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f31,180(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x820FAF4C;
	sub_822D67F0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x820fa820
	ctx.lr = 0x820FAF5C;
	sub_820FA820(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fb514
	if (ctx.cr6.eq) goto loc_820FB514;
	// lwz r10,-44(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -44);
	// lhz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// lbz r9,-52(r25)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r25.u32 + -52);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// stw r11,-44(r25)
	PPC_STORE_U32(ctx.r25.u32 + -44, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r23,r10,22264
	ctx.r23.s64 = ctx.r10.s64 + 22264;
	// sth r4,-50(r25)
	PPC_STORE_U16(ctx.r25.u32 + -50, ctx.r4.u16);
	// stw r5,-48(r25)
	PPC_STORE_U32(ctx.r25.u32 + -48, ctx.r5.u32);
	// bne cr6,0x820fafd0
	if (!ctx.cr6.eq) goto loc_820FAFD0;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82394fa0
	ctx.lr = 0x820FAFD0;
	sub_82394FA0(ctx, base);
loc_820FAFD0:
	// mulli r11,r24,840
	ctx.r11.s64 = ctx.r24.s64 * 840;
	// addi r10,r25,-1736
	ctx.r10.s64 = ctx.r25.s64 + -1736;
	// addi r9,r25,-1736
	ctx.r9.s64 = ctx.r25.s64 + -1736;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// add r5,r11,r25
	ctx.r5.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r9,r25,36
	ctx.r9.s64 = ctx.r25.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r31,36
	ctx.r6.s64 = ctx.r31.s64 + 36;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r10,18824(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18824);
loc_820FB010:
	// lwz r11,-20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb050
	if (ctx.cr6.eq) goto loc_820FB050;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb050
	if (!ctx.cr6.lt) goto loc_820FB050;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB050:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb060
	if (ctx.cr6.eq) goto loc_820FB060;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB060:
	// lwz r11,-20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb0a0
	if (ctx.cr6.eq) goto loc_820FB0A0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r3.u64);
	// lfd f11,168(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb0a0
	if (!ctx.cr6.lt) goto loc_820FB0A0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB0A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb0b0
	if (ctx.cr6.eq) goto loc_820FB0B0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB0B0:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb0f0
	if (ctx.cr6.eq) goto loc_820FB0F0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,312(r1)
	PPC_STORE_U64(ctx.r1.u32 + 312, ctx.r3.u64);
	// lfd f11,312(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb0f0
	if (!ctx.cr6.lt) goto loc_820FB0F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB0F0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb100
	if (ctx.cr6.eq) goto loc_820FB100;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB100:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb140
	if (ctx.cr6.eq) goto loc_820FB140;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,304(r1)
	PPC_STORE_U64(ctx.r1.u32 + 304, ctx.r3.u64);
	// lfd f11,304(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 304);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb140
	if (!ctx.cr6.lt) goto loc_820FB140;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb150
	if (ctx.cr6.eq) goto loc_820FB150;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB150:
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb190
	if (ctx.cr6.eq) goto loc_820FB190;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,272(r1)
	PPC_STORE_U64(ctx.r1.u32 + 272, ctx.r3.u64);
	// lfd f11,272(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb190
	if (!ctx.cr6.lt) goto loc_820FB190;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB190:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb1a0
	if (ctx.cr6.eq) goto loc_820FB1A0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB1A0:
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb1e0
	if (ctx.cr6.eq) goto loc_820FB1E0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,280(r1)
	PPC_STORE_U64(ctx.r1.u32 + 280, ctx.r3.u64);
	// lfd f11,280(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb1e0
	if (!ctx.cr6.lt) goto loc_820FB1E0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB1E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb1f0
	if (ctx.cr6.eq) goto loc_820FB1F0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB1F0:
	// lwz r11,40(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb230
	if (ctx.cr6.eq) goto loc_820FB230;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r3.u64);
	// lfd f11,296(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb230
	if (!ctx.cr6.lt) goto loc_820FB230;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB230:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb240
	if (ctx.cr6.eq) goto loc_820FB240;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB240:
	// lwz r11,40(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb280
	if (ctx.cr6.eq) goto loc_820FB280;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r3.u64);
	// lfd f11,264(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb280
	if (!ctx.cr6.lt) goto loc_820FB280;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB280:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb290
	if (ctx.cr6.eq) goto loc_820FB290;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB290:
	// lwz r11,60(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb2d0
	if (ctx.cr6.eq) goto loc_820FB2D0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,328(r1)
	PPC_STORE_U64(ctx.r1.u32 + 328, ctx.r3.u64);
	// lfd f11,328(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb2d0
	if (!ctx.cr6.lt) goto loc_820FB2D0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB2D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb2e0
	if (ctx.cr6.eq) goto loc_820FB2E0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB2E0:
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb320
	if (ctx.cr6.eq) goto loc_820FB320;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r3.u64);
	// lfd f11,288(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb320
	if (!ctx.cr6.lt) goto loc_820FB320;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB320:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb330
	if (ctx.cr6.eq) goto loc_820FB330;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB330:
	// lwz r11,80(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb370
	if (ctx.cr6.eq) goto loc_820FB370;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r3.u64);
	// lfd f11,320(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb370
	if (!ctx.cr6.lt) goto loc_820FB370;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB370:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb380
	if (ctx.cr6.eq) goto loc_820FB380;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB380:
	// lwz r11,80(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fb3c0
	if (ctx.cr6.eq) goto loc_820FB3C0;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f13,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// subf r4,r11,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// bge cr6,0x820fb3c0
	if (!ctx.cr6.lt) goto loc_820FB3C0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB3C0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb3d0
	if (ctx.cr6.eq) goto loc_820FB3D0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820FB3D0:
	// addi r6,r6,120
	ctx.r6.s64 = ctx.r6.s64 + 120;
	// addi r9,r9,120
	ctx.r9.s64 = ctx.r9.s64 + 120;
	// bdnz 0x820fb010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB010;
	// rlwinm r11,r7,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r11,634
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 634, ctx.xer);
	// ble cr6,0x820fb3f4
	if (!ctx.cr6.gt) goto loc_820FB3F4;
	// li r11,634
	ctx.r11.s64 = 634;
	// divw r27,r11,r7
	ctx.r27.s32 = ctx.r11.s32 / ctx.r7.s32;
	// b 0x820fb3f8
	goto loc_820FB3F8;
loc_820FB3F4:
	// li r27,32
	ctx.r27.s64 = 32;
loc_820FB3F8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// subf r26,r31,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r11,r11,27640
	ctx.r11.s64 = ctx.r11.s64 + 27640;
	// li r30,42
	ctx.r30.s64 = 42;
	// addi r28,r11,40
	ctx.r28.s64 = ctx.r11.s64 + 40;
loc_820FB40C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fb424
	if (ctx.cr6.eq) goto loc_820FB424;
	// lwz r29,20(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// b 0x820fb428
	goto loc_820FB428;
loc_820FB424:
	// lwz r29,24(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
loc_820FB428:
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820fa8f0
	ctx.lr = 0x820FB454;
	sub_820FA8F0(ctx, base);
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// add r5,r31,r26
	ctx.r5.u64 = ctx.r31.u64 + ctx.r26.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x820fa8f0
	ctx.lr = 0x820FB480;
	sub_820FA8F0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x820fb40c
	if (!ctx.cr0.eq) goto loc_820FB40C;
	// addis r31,r22,2
	ctx.r31.s64 = ctx.r22.s64 + 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r31,20068
	ctx.r31.s64 = ctx.r31.s64 + 20068;
	// lfs f13,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820fb4dc
	if (!ctx.cr6.lt) goto loc_820FB4DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f13,7540(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7540);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f30
	ctx.f0.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f30.f64)));
	// fmuls f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x820fac60
	ctx.lr = 0x820FB4DC;
	sub_820FAC60(ctx, base);
loc_820FB4DC:
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x820fac60
	ctx.lr = 0x820FB500;
	sub_820FAC60(ctx, base);
	// lbz r11,-52(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + -52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb514
	if (ctx.cr6.eq) goto loc_820FB514;
	// lwz r11,-44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -44);
	// stw r11,-40(r25)
	PPC_STORE_U32(ctx.r25.u32 + -40, ctx.r11.u32);
loc_820FB514:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82394ba8
	ctx.lr = 0x820FB520;
	sub_82394BA8(ctx, base);
loc_820FB520:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de070
	ctx.lr = 0x820FB52C;
	__restfpr_27(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FADC8) {
	__imp__sub_820FADC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB530) {
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
	// bl 0x820f9ed0
	ctx.lr = 0x820FB544;
	sub_820F9ED0(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,22264
	ctx.r31.s64 = ctx.r11.s64 + 22264;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8217c690
	ctx.lr = 0x820FB554;
	sub_8217C690(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8217c690
	ctx.lr = 0x820FB55C;
	sub_8217C690(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8217c690
	ctx.lr = 0x820FB564;
	sub_8217C690(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8217c690
	ctx.lr = 0x820FB56C;
	sub_8217C690(ctx, base);
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

PPC_WEAK_FUNC(sub_820FB530) {
	__imp__sub_820FB530(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB580) {
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
	// bl 0x820f9ed0
	ctx.lr = 0x820FB598;
	sub_820F9ED0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20524(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20524, ctx.r11.u8);
	// bl 0x820fadc8
	ctx.lr = 0x820FB5AC;
	sub_820FADC8(ctx, base);
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

PPC_WEAK_FUNC(sub_820FB580) {
	__imp__sub_820FB580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB5C0) {
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
	// bl 0x820f9ed0
	ctx.lr = 0x820FB5D8;
	sub_820F9ED0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,20524(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20524, ctx.r11.u8);
	// bl 0x820fadc8
	ctx.lr = 0x820FB5EC;
	sub_820FADC8(ctx, base);
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

PPC_WEAK_FUNC(sub_820FB5C0) {
	__imp__sub_820FB5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820FB608;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r23,r4,2
	ctx.r23.s64 = ctx.r4.s64 + 131072;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r23,r23,18320
	ctx.r23.s64 = ctx.r23.s64 + 18320;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lfs f1,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bl 0x822d5368
	ctx.lr = 0x820FB644;
	sub_822D5368(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_820FB654:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x820fb654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FB654;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// rlwinm r10,r22,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,20540
	ctx.r11.s64 = ctx.r11.s64 + 20540;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f29,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820fb690
	if (!ctx.cr6.eq) goto loc_820FB690;
	// stfs f29,12(r28)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
loc_820FB690:
	// addis r31,r27,2
	ctx.r31.s64 = ctx.r27.s64 + 131072;
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// addi r31,r31,2116
	ctx.r31.s64 = ctx.r31.s64 + 2116;
	// lfs f12,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lis r24,-32168
	ctx.r24.s64 = -2108162048;
	// lwz r10,22260(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22260);
	// lfs f1,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfs f9,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fsubs f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// lwz r9,20520(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20520);
	// fsubs f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lwz r8,22300(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22300);
	// fsubs f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f6.f64));
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
	// fdivs f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 / ctx.f10.f64));
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,12(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmuls f10,f2,f7
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f7,f3,f4,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fmadds f6,f13,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f4,f12,f4,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f4.f64 + ctx.f10.f64));
	// fmuls f3,f7,f9
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// fsqrts f2,f6
	ctx.f2.f64 = double(float(sqrt(ctx.f6.f64)));
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fdivs f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f1.f64));
	// fmadds f30,f4,f9,f5
	ctx.f30.f64 = double(float(ctx.f4.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fadds f31,f1,f8
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f8.f64));
	// bl 0x822d4ed0
	ctx.lr = 0x820FB748;
	sub_822D4ED0(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x822d77c0
	ctx.lr = 0x820FB758;
	sub_822D77C0(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// stfs f1,12(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwzx r9,r27,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// lbz r8,8(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fb8a0
	if (!ctx.cr6.eq) goto loc_820FB8A0;
	// lwz r11,40(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fb8a0
	if (ctx.cr6.eq) goto loc_820FB8A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6004(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6004);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// blt cr6,0x820fb7c4
	if (ctx.cr6.lt) goto loc_820FB7C4;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x820fb7c4
	if (ctx.cr6.gt) goto loc_820FB7C4;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// blt cr6,0x820fb7c4
	if (ctx.cr6.lt) goto loc_820FB7C4;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x820fb7c4
	if (ctx.cr6.gt) goto loc_820FB7C4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FB7C4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb8a0
	if (ctx.cr6.eq) goto loc_820FB8A0;
	// lwz r11,20520(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20520);
	// lfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,22300(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 22300);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lwz r9,22260(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22260);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f8,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lwz r11,20572(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20572);
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lwz r10,18836(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 18836);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f9,f11
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f2,f6,f7
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsel f0,f3,f9,f11
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f9.f64 : ctx.f11.f64;
	// fsel f12,f2,f6,f7
	ctx.f12.f64 = ctx.f2.f64 >= 0.0 ? ctx.f6.f64 : ctx.f7.f64;
	// fmuls f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f10,f11,f11
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmadds f9,f12,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fsqrts f7,f9
	ctx.f7.f64 = double(float(sqrt(ctx.f9.f64)));
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fdivs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f6.f64));
	// fsubs f2,f29,f3
	ctx.f2.f64 = double(float(ctx.f29.f64 - ctx.f3.f64));
	// fmuls f0,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmadds f31,f2,f4,f0
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 + ctx.f0.f64));
	// bl 0x820fa2b0
	ctx.lr = 0x820FB854;
	sub_820FA2B0(ctx, base);
	// addi r5,r3,-1
	ctx.r5.s64 = ctx.r3.s64 + -1;
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// std r3,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f13,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r10,r4,22264
	ctx.r10.s64 = ctx.r4.s64 + 22264;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lwz r11,22304(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22304);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f10,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f29.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bl 0x820f8b58
	ctx.lr = 0x820FB898;
	sub_820F8B58(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r9.u8);
loc_820FB8A0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FB600) {
	__imp__sub_820FB600(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FB8B4) {
	__imp__sub_820FB8B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FB8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FB8C0;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r11,22308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22308);
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// ori r6,r7,20068
	ctx.r6.u64 = ctx.r7.u64 | 20068;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lis r3,-32168
	ctx.r3.s64 = -2108162048;
	// lfsx f13,r29,r6
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// mulli r10,r28,42
	ctx.r10.s64 = ctx.r28.s64 * 42;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwz r11,22312(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 22312);
	// lwz r9,22256(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22256);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// add r11,r10,r4
	ctx.r11.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// addi r10,r10,20576
	ctx.r10.s64 = ctx.r10.s64 + 20576;
	// lfd f0,-31416(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -31416);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmul f1,f10,f0
	ctx.f1.f64 = ctx.f10.f64 * ctx.f0.f64;
	// addi r8,r7,27640
	ctx.r8.s64 = ctx.r7.s64 + 27640;
	// addi r7,r10,-1736
	ctx.r7.s64 = ctx.r10.s64 + -1736;
	// mulli r9,r4,44
	ctx.r9.s64 = ctx.r4.s64 * 44;
	// fmuls f31,f9,f9
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// add r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r25,r11,r7
	ctx.r25.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x823de800
	ctx.lr = 0x820FB970;
	sub_823DE800(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r6,18320
	ctx.r3.u64 = ctx.r6.u64 | 18320;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfsx f1,r29,r3
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x820FB98C;
	sub_822D5368(ctx, base);
	// addis r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 131072;
	// lfs f8,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,2116
	ctx.r31.s64 = ctx.r31.s64 + 2116;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f4,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f5,f8,f7
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// fsubs f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f4.f64));
	// stfs f5,80(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f3,84(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x820FB9C0;
	sub_822D4AC8(ctx, base);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f13,f12,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, ctx.f30.f64);
	// blt cr6,0x820fba48
	if (ctx.cr6.lt) goto loc_820FBA48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822d4918
	ctx.lr = 0x820FB9EC;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820fb9fc
	if (!ctx.cr6.gt) goto loc_820FB9FC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FB9FC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fba48
	if (!ctx.cr6.eq) goto loc_820FBA48;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d4918
	ctx.lr = 0x820FBA14;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820fba24
	if (!ctx.cr6.gt) goto loc_820FBA24;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FBA24:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fba48
	if (ctx.cr6.eq) goto loc_820FBA48;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fb600
	ctx.lr = 0x820FBA48;
	sub_820FB600(ctx, base);
loc_820FBA48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FB8B8) {
	__imp__sub_820FB8B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FBA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820FBA60;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de024
	ctx.lr = 0x820FBA68;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// lwz r11,22308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22308);
	// ori r6,r8,61924
	ctx.r6.u64 = ctx.r8.u64 | 61924;
	// lwz r10,22312(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22312);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mullw r8,r3,r6
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// lwz r9,22256(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 22256);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f0,-31416(r5)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r5.u32 + -31416);
	// lfs f11,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmul f1,f11,f0
	ctx.f1.f64 = ctx.f11.f64 * ctx.f0.f64;
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addis r26,r31,2
	ctx.r26.s64 = ctx.r31.s64 + 131072;
	// fmuls f10,f12,f2
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// addis r23,r31,2
	ctx.r23.s64 = ctx.r31.s64 + 131072;
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// addi r26,r26,2116
	ctx.r26.s64 = ctx.r26.s64 + 2116;
	// addi r23,r23,20060
	ctx.r23.s64 = ctx.r23.s64 + 20060;
	// fmuls f29,f10,f10
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f28,f9,f9
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// bl 0x823de800
	ctx.lr = 0x820FBAE8;
	sub_823DE800(ctx, base);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r4,18320
	ctx.r3.u64 = ctx.r4.u64 | 18320;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfsx f1,r31,r3
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d5368
	ctx.lr = 0x820FBB04;
	sub_822D5368(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r9,r29,840
	ctx.r9.s64 = ctx.r29.s64 * 840;
	// addi r10,r11,20576
	ctx.r10.s64 = ctx.r11.s64 + 20576;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// addi r11,r10,-1736
	ctx.r11.s64 = ctx.r10.s64 + -1736;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r8,27640
	ctx.r8.s64 = ctx.r8.s64 + 27640;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// subf r24,r11,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r30,r8,4
	ctx.r30.s64 = ctx.r8.s64 + 4;
	// li r25,42
	ctx.r25.s64 = 42;
	// ori r22,r11,22912
	ctx.r22.u64 = ctx.r11.u64 | 22912;
loc_820FBB3C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fbc24
	if (ctx.cr6.eq) goto loc_820FBC24;
	// lwzx r10,r31,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// addi r10,r10,-800
	ctx.r10.s64 = ctx.r10.s64 + -800;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820fbc24
	if (ctx.cr6.lt) goto loc_820FBC24;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fbc24
	if (!ctx.cr6.eq) goto loc_820FBC24;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d4918
	ctx.lr = 0x820FBB78;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820fbb88
	if (!ctx.cr6.gt) goto loc_820FBB88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FBB88:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fbc24
	if (ctx.cr6.eq) goto loc_820FBC24;
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// blt cr6,0x820fbbc4
	if (ctx.cr6.lt) goto loc_820FBBC4;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d4918
	ctx.lr = 0x820FBBA8;
	sub_822D4918(ctx, base);
	// fcmpu cr6,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f28.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x820fbbb8
	if (!ctx.cr6.gt) goto loc_820FBBB8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FBBB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fbc24
	if (!ctx.cr6.eq) goto loc_820FBC24;
loc_820FBBC4:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
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
	ctx.lr = 0x820FBBEC;
	sub_822D4AC8(ctx, base);
	// lfs f8,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f5,f4,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f6.f64));
	// fcmpu cr6,f3,f27
	ctx.cr6.compare(ctx.f3.f64, ctx.f27.f64);
	// blt cr6,0x820fbc24
	if (ctx.cr6.lt) goto loc_820FBC24;
	// add r7,r24,r27
	ctx.r7.u64 = ctx.r24.u64 + ctx.r27.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r30,-4
	ctx.r5.s64 = ctx.r30.s64 + -4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fb600
	ctx.lr = 0x820FBC24;
	sub_820FB600(ctx, base);
loc_820FBC24:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// addi r27,r27,20
	ctx.r27.s64 = ctx.r27.s64 + 20;
	// bne 0x820fbb3c
	if (!ctx.cr0.eq) goto loc_820FBB3C;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de070
	ctx.lr = 0x820FBC40;
	__restfpr_27(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FBA58) {
	__imp__sub_820FBA58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FBC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FBC44) {
	__imp__sub_820FBC44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FBC48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FBC50;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r24,r29,1
	ctx.r24.s64 = ctx.r29.s64 + 65536;
	// addi r24,r24,22908
	ctx.r24.s64 = ctx.r24.s64 + 22908;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x820fbe70
	if (!ctx.cr6.gt) goto loc_820FBE70;
	// addis r31,r29,2
	ctx.r31.s64 = ctx.r29.s64 + 131072;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r31,20068
	ctx.r31.s64 = ctx.r31.s64 + 20068;
	// addi r11,r11,20540
	ctx.r11.s64 = ctx.r11.s64 + 20540;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f30,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x820fa220
	ctx.lr = 0x820FBCAC;
	sub_820FA220(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// addi r26,r11,22264
	ctx.r26.s64 = ctx.r11.s64 + 22264;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fbd3c
	if (!ctx.cr6.eq) goto loc_820FBD3C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r27,r10,22912
	ctx.r27.u64 = ctx.r10.u64 | 22912;
	// beq cr6,0x820fbd18
	if (ctx.cr6.eq) goto loc_820FBD18;
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x820f9ed0
	ctx.lr = 0x820FBCF0;
	sub_820F9ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82116388
	ctx.lr = 0x820FBCFC;
	sub_82116388(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r9,r10,-25976
	ctx.r9.s64 = ctx.r10.s64 + -25976;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r5,246(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 246);
	// bl 0x820ee978
	ctx.lr = 0x820FBD18;
	sub_820EE978(ctx, base);
loc_820FBD18:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r9,500
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 500, ctx.xer);
	// bgt cr6,0x820fbe70
	if (ctx.cr6.gt) goto loc_820FBE70;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820fbe70
	if (ctx.cr6.eq) goto loc_820FBE70;
	// b 0x820fbd8c
	goto loc_820FBD8C;
loc_820FBD3C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fbd8c
	if (!ctx.cr6.eq) goto loc_820FBD8C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// bl 0x820f9ed0
	ctx.lr = 0x820FBD64;
	sub_820F9ED0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82116388
	ctx.lr = 0x820FBD70;
	sub_82116388(ctx, base);
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r7,-25976
	ctx.r6.s64 = ctx.r7.s64 + -25976;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lhz r5,246(r6)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + 246);
	// bl 0x820ee908
	ctx.lr = 0x820FBD8C;
	sub_820EE908(ctx, base);
loc_820FBD8C:
	// bl 0x820f9ed0
	ctx.lr = 0x820FBD90;
	sub_820F9ED0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fa430
	ctx.lr = 0x820FBD98;
	sub_820FA430(ctx, base);
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lfs f10,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,22308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22308);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// ori r27,r8,2116
	ctx.r27.u64 = ctx.r8.u64 | 2116;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fdivs f6,f7,f11
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f11.f64));
	// fadds f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fcmpu cr6,f5,f13
	ctx.cr6.compare(ctx.f5.f64, ctx.f13.f64);
	// blt cr6,0x820fbe44
	if (ctx.cr6.lt) goto loc_820FBE44;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820fa220
	ctx.lr = 0x820FBDF8;
	sub_820FA220(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fbe18
	if (!ctx.cr6.eq) goto loc_820FBE18;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
loc_820FBE18:
	// stb r25,8(r30)
	PPC_STORE_U8(ctx.r30.u32 + 8, ctx.r25.u8);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823dde20
	ctx.lr = 0x820FBE24;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r4,r29,r27
	ctx.r4.u64 = ctx.r29.u64 + ctx.r27.u64;
	// li r3,2046
	ctx.r3.s64 = 2046;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// bl 0x820f9a68
	ctx.lr = 0x820FBE44;
	sub_820F9A68(ctx, base);
loc_820FBE44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f2,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820fba58
	ctx.lr = 0x820FBE54;
	sub_820FBA58(ctx, base);
	// addis r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 131072;
	// add r10,r29,r27
	ctx.r10.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lfsx f0,r29,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20060
	ctx.r11.s64 = ctx.r11.s64 + 20060;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_820FBE70:
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

PPC_WEAK_FUNC(sub_820FBC48) {
	__imp__sub_820FBC48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FBE80) {
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
	ctx.lr = 0x820FBE98;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
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
	// addi r3,r7,-29896
	ctx.r3.s64 = ctx.r7.s64 + -29896;
	// lfs f30,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r8,r8,-29932
	ctx.r8.s64 = ctx.r8.s64 + -29932;
	// lfs f28,6020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6020);
	ctx.f28.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FBED8;
	sub_822E1660(ctx, base);
	// lis r31,-32168
	ctx.r31.s64 = -2108162048;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r30,r31,22380
	ctx.r30.s64 = ctx.r31.s64 + 22380;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f29,5808(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5808);
	ctx.f29.f64 = double(temp.f32);
	// addi r8,r4,-29984
	ctx.r8.s64 = ctx.r4.s64 + -29984;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// addi r3,r11,-30008
	ctx.r3.s64 = ctx.r11.s64 + -30008;
	// lfs f27,6016(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6016);
	ctx.f27.f64 = double(temp.f32);
	// li r7,68
	ctx.r7.s64 = 68;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FBF18;
	sub_822E1660(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r3,22340(r10)
	PPC_STORE_U32(ctx.r10.u32 + 22340, ctx.r3.u32);
	// addi r3,r7,-30028
	ctx.r3.s64 = ctx.r7.s64 + -30028;
	// addi r8,r8,-30076
	ctx.r8.s64 = ctx.r8.s64 + -30076;
	// lfs f1,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f1.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820FBF48;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-30120
	ctx.r8.s64 = ctx.r5.s64 + -30120;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,22392(r6)
	PPC_STORE_U32(ctx.r6.u32 + 22392, ctx.r3.u32);
	// addi r3,r4,-30140
	ctx.r3.s64 = ctx.r4.s64 + -30140;
	// bl 0x822e1660
	ctx.lr = 0x820FBF74;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r3,22368(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22368, ctx.r3.u32);
	// addi r3,r7,-30156
	ctx.r3.s64 = ctx.r7.s64 + -30156;
	// lfs f26,14264(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14264);
	ctx.f26.f64 = double(temp.f32);
	// addi r8,r9,-30200
	ctx.r8.s64 = ctx.r9.s64 + -30200;
	// li r7,68
	ctx.r7.s64 = 68;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FBFA8;
	sub_822E1660(ctx, base);
	// lis r6,-32168
	ctx.r6.s64 = -2108162048;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r5,-30252
	ctx.r8.s64 = ctx.r5.s64 + -30252;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// li r7,68
	ctx.r7.s64 = 68;
	// stw r3,22356(r6)
	PPC_STORE_U32(ctx.r6.u32 + 22356, ctx.r3.u32);
	// addi r3,r4,-30272
	ctx.r3.s64 = ctx.r4.s64 + -30272;
	// bl 0x822e1660
	ctx.lr = 0x820FBFD4;
	sub_822E1660(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,22328(r11)
	PPC_STORE_U32(ctx.r11.u32 + 22328, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-30324
	ctx.r8.s64 = ctx.r10.s64 + -30324;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// addi r3,r9,-30340
	ctx.r3.s64 = ctx.r9.s64 + -30340;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822e1660
	ctx.lr = 0x820FC000;
	sub_822E1660(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,22316(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22316, ctx.r3.u32);
	// addi r8,r6,-30404
	ctx.r8.s64 = ctx.r6.s64 + -30404;
	// lfs f29,14220(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 14220);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r5,-30436
	ctx.r3.s64 = ctx.r5.s64 + -30436;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FC034;
	sub_822E1660(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-30504
	ctx.r8.s64 = ctx.r10.s64 + -30504;
	// stw r3,22348(r4)
	PPC_STORE_U32(ctx.r4.u32 + 22348, ctx.r3.u32);
	// addi r3,r9,-30536
	ctx.r3.s64 = ctx.r9.s64 + -30536;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,-30440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30440);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820FC064;
	sub_822E1660(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r3,22324(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22324, ctx.r3.u32);
	// addi r8,r6,-30584
	ctx.r8.s64 = ctx.r6.s64 + -30584;
	// lfs f29,7544(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7544);
	ctx.f29.f64 = double(temp.f32);
	// addi r3,r5,-30616
	ctx.r3.s64 = ctx.r5.s64 + -30616;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FC098;
	sub_822E1660(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,-30664
	ctx.r8.s64 = ctx.r10.s64 + -30664;
	// stw r3,22320(r4)
	PPC_STORE_U32(ctx.r4.u32 + 22320, ctx.r3.u32);
	// addi r3,r9,-30696
	ctx.r3.s64 = ctx.r9.s64 + -30696;
	// lfs f27,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f27.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x822e1660
	ctx.lr = 0x820FC0CC;
	sub_822E1660(ctx, base);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// stw r3,22376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 22376, ctx.r3.u32);
	// addi r8,r7,-30736
	ctx.r8.s64 = ctx.r7.s64 + -30736;
	// addi r3,r5,-30760
	ctx.r3.s64 = ctx.r5.s64 + -30760;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,34464
	ctx.r6.u64 = ctx.r6.u64 | 34464;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822e1618
	ctx.lr = 0x820FC0FC;
	sub_822E1618(ctx, base);
	// lis r4,-32168
	ctx.r4.s64 = -2108162048;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r8,r11,-30812
	ctx.r8.s64 = ctx.r11.s64 + -30812;
	// stw r3,22336(r4)
	PPC_STORE_U32(ctx.r4.u32 + 22336, ctx.r3.u32);
	// addi r3,r10,-30836
	ctx.r3.s64 = ctx.r10.s64 + -30836;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,34464
	ctx.r6.u64 = ctx.r6.u64 | 34464;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1000
	ctx.r4.s64 = 1000;
	// bl 0x822e1618
	ctx.lr = 0x820FC12C;
	sub_822E1618(ctx, base);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r3,22384(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22384, ctx.r3.u32);
	// addi r8,r5,-30876
	ctx.r8.s64 = ctx.r5.s64 + -30876;
	// lfs f3,-14540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14540);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r4,-30904
	ctx.r3.s64 = ctx.r4.s64 + -30904;
	// li r7,4
	ctx.r7.s64 = 4;
	// lfs f1,6032(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 6032);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822e1660
	ctx.lr = 0x820FC160;
	sub_822E1660(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// fmr f6,f30
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f30.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f29,6048(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f29.f64 = double(temp.f32);
	// addi r6,r8,-30964
	ctx.r6.s64 = ctx.r8.s64 + -30964;
	// addi r3,r7,-30988
	ctx.r3.s64 = ctx.r7.s64 + -30988;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r11,22364(r9)
	PPC_STORE_U32(ctx.r9.u32 + 22364, ctx.r11.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// bl 0x822e1790
	ctx.lr = 0x820FC1A8;
	sub_822E1790(ctx, base);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// addi r8,r10,-31052
	ctx.r8.s64 = ctx.r10.s64 + -31052;
	// lfs f27,6040(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 6040);
	ctx.f27.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f1,7036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7036);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r9,-31080
	ctx.r3.s64 = ctx.r9.s64 + -31080;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// stw r11,-20(r30)
	PPC_STORE_U32(ctx.r30.u32 + -20, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// bl 0x822e1790
	ctx.lr = 0x820FC1F0;
	sub_822E1790(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r3,-48(r30)
	PPC_STORE_U32(ctx.r30.u32 + -48, ctx.r3.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f3,f28
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f28.f64;
	// addi r6,r7,-31144
	ctx.r6.s64 = ctx.r7.s64 + -31144;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// addi r3,r5,-31172
	ctx.r3.s64 = ctx.r5.s64 + -31172;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x822e1790
	ctx.lr = 0x820FC228;
	sub_822E1790(ctx, base);
	// stw r3,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r6,r4,-31248
	ctx.r6.s64 = ctx.r4.s64 + -31248;
	// addi r3,r3,-31268
	ctx.r3.s64 = ctx.r3.s64 + -31268;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820FC248;
	sub_822E15D0(ctx, base);
	// stw r3,-28(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r6,r11,-31384
	ctx.r6.s64 = ctx.r11.s64 + -31384;
	// addi r3,r10,-31408
	ctx.r3.s64 = ctx.r10.s64 + -31408;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822e15d0
	ctx.lr = 0x820FC268;
	sub_822E15D0(ctx, base);
	// stw r3,22380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 22380, ctx.r3.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x820FC278;
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

PPC_WEAK_FUNC(sub_820FBE80) {
	__imp__sub_820FBE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FC28C) {
	__imp__sub_820FC28C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC290) {
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
	ctx.lr = 0x820FC2B8;
	sub_82332C40(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x820fc2e0
	if (!ctx.cr6.lt) goto loc_820FC2E0;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820da5b0
	ctx.lr = 0x820FC2D0;
	sub_820DA5B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fc2e0
	if (ctx.cr6.eq) goto loc_820FC2E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x820fc2ec
	goto loc_820FC2EC;
loc_820FC2E0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23616
	ctx.r10.u64 = ctx.r11.u64 | 23616;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
loc_820FC2EC:
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

PPC_WEAK_FUNC(sub_820FC290) {
	__imp__sub_820FC290(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FC304) {
	__imp__sub_820FC304(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fc334
	if (ctx.cr6.eq) goto loc_820FC334;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fc338
	if (ctx.cr6.eq) goto loc_820FC338;
loc_820FC334:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FC338:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FC308) {
	__imp__sub_820FC308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820FC348;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 65536;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// beq cr6,0x820fc3e0
	if (ctx.cr6.eq) goto loc_820FC3E0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332248
	ctx.lr = 0x820FC368;
	sub_82332248(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,999
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 999, ctx.xer);
	// ble cr6,0x820fc378
	if (!ctx.cr6.gt) goto loc_820FC378;
	// li r29,999
	ctx.r29.s64 = 999;
loc_820FC378:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a58
	ctx.lr = 0x820FC388;
	sub_82331A58(ctx, base);
	// cmpwi cr6,r3,999
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 999, ctx.xer);
	// ble cr6,0x820fc398
	if (!ctx.cr6.gt) goto loc_820FC398;
	// li r3,999
	ctx.r3.s64 = 999;
	// b 0x820fc3a0
	goto loc_820FC3A0;
loc_820FC398:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820fc3e0
	if (ctx.cr6.lt) goto loc_820FC3E0;
loc_820FC3A0:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
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
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,6040(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6040);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// ble cr6,0x820fc3e4
	if (!ctx.cr6.gt) goto loc_820FC3E4;
loc_820FC3E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FC3E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FC340) {
	__imp__sub_820FC340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FC3EC) {
	__imp__sub_820FC3EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC3F0) {
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
	// bl 0x820fc290
	ctx.lr = 0x820FC408;
	sub_820FC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc340
	ctx.lr = 0x820FC414;
	sub_820FC340(ctx, base);
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

PPC_WEAK_FUNC(sub_820FC3F0) {
	__imp__sub_820FC3F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820FC430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addis r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 65536;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r30,22924
	ctx.r30.s64 = ctx.r30.s64 + 22924;
	// bl 0x82332af8
	ctx.lr = 0x820FC450;
	sub_82332AF8(ctx, base);
	// lbz r10,1635(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1635);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fc510
	if (!ctx.cr6.eq) goto loc_820FC510;
	// lwz r9,536(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 536);
	// addi r11,r30,848
	ctx.r11.s64 = ctx.r30.s64 + 848;
loc_820FC468:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820fc4bc
	if (ctx.cr6.eq) goto loc_820FC4BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820fc468
	if (ctx.cr6.lt) goto loc_820FC468;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FC488:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820fc510
	if (ctx.cr6.lt) goto loc_820FC510;
	// cmpwi cr6,r11,999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 999, ctx.xer);
	// ble cr6,0x820fc4a0
	if (!ctx.cr6.gt) goto loc_820FC4A0;
	// li r31,999
	ctx.r31.s64 = 999;
loc_820FC4A0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823340b0
	ctx.lr = 0x820FC4AC;
	sub_823340B0(ctx, base);
	// cmpwi cr6,r3,999
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 999, ctx.xer);
	// ble cr6,0x820fc4cc
	if (!ctx.cr6.gt) goto loc_820FC4CC;
	// li r3,999
	ctx.r3.s64 = 999;
	// b 0x820fc4d4
	goto loc_820FC4D4;
loc_820FC4BC:
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// b 0x820fc488
	goto loc_820FC488;
loc_820FC4CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x820fc510
	if (!ctx.cr6.gt) goto loc_820FC510;
loc_820FC4D4:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// lfs f0,1084(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 1084);
	ctx.f0.f64 = double(temp.f32);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// li r3,1
	ctx.r3.s64 = 1;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x820fc514
	if (!ctx.cr6.gt) goto loc_820FC514;
loc_820FC510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FC514:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FC428) {
	__imp__sub_820FC428(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FC51C) {
	__imp__sub_820FC51C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC520) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820fc290
	ctx.lr = 0x820FC540;
	sub_820FC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fc428
	ctx.lr = 0x820FC550;
	sub_820FC428(ctx, base);
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

PPC_WEAK_FUNC(sub_820FC520) {
	__imp__sub_820FC520(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820FC570;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de028
	ctx.lr = 0x820FC578;
	__savefpr_28(ctx, base);
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,11,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820fc68c
	if (!ctx.cr6.eq) goto loc_820FC68C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc290
	ctx.lr = 0x820FC5C4;
	sub_820FC290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fc68c
	if (ctx.cr6.eq) goto loc_820FC68C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bne cr6,0x820fc5f4
	if (!ctx.cr6.eq) goto loc_820FC5F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-29868
	ctx.r3.s64 = ctx.r11.s64 + -29868;
	// bl 0x8238bd98
	ctx.lr = 0x820FC5F0;
	sub_8238BD98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820FC5F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc290
	ctx.lr = 0x820FC5FC;
	sub_820FC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fc340
	ctx.lr = 0x820FC608;
	sub_820FC340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc630
	if (ctx.cr6.eq) goto loc_820FC630;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,-29872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29872);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-29876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29876);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,11804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11804);
	ctx.f12.f64 = double(temp.f32);
	// b 0x820fc63c
	goto loc_820FC63C;
loc_820FC630:
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
loc_820FC63C:
	// stfs f12,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f31,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820FC668;
	sub_82141160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820FC68C;
	sub_822B7F70(ctx, base);
loc_820FC68C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de074
	ctx.lr = 0x820FC698;
	__restfpr_28(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FC568) {
	__imp__sub_820FC568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FC69C) {
	__imp__sub_820FC69C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FC6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x820FC6A8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
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
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r6,r29,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,11,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820fcbec
	if (!ctx.cr6.eq) goto loc_820FCBEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r22)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 12, temp.u32);
	// bl 0x820fc290
	ctx.lr = 0x820FC710;
	sub_820FC290(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fcbec
	if (ctx.cr6.eq) goto loc_820FCBEC;
	// addis r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r28,r28,22924
	ctx.r28.s64 = ctx.r28.s64 + 22924;
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x82332248
	ctx.lr = 0x820FC740;
	sub_82332248(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82331a00
	ctx.lr = 0x820FC74C;
	sub_82331A00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fc75c
	if (ctx.cr6.eq) goto loc_820FC75C;
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x820fc778
	goto loc_820FC778;
loc_820FC75C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820da6b8
	ctx.lr = 0x820FC76C;
	sub_820DA6B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x820fc77c
	if (!ctx.cr6.lt) goto loc_820FC77C;
loc_820FC778:
	// li r26,0
	ctx.r26.s64 = 0;
loc_820FC77C:
	// cmpwi cr6,r5,999
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 999, ctx.xer);
	// ble cr6,0x820fc788
	if (!ctx.cr6.gt) goto loc_820FC788;
	// li r5,999
	ctx.r5.s64 = 999;
loc_820FC788:
	// rlwinm r11,r25,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0x1;
	// cmpwi cr6,r25,999
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 999, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 & ctx.r27.u64;
	// ble cr6,0x820fc7a0
	if (!ctx.cr6.gt) goto loc_820FC7A0;
	// li r25,999
	ctx.r25.s64 = 999;
loc_820FC7A0:
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820fc808
	if (ctx.cr6.eq) goto loc_820FC808;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,12264
	ctx.r4.s64 = ctx.r11.s64 + 12264;
	// bl 0x823df2b0
	ctx.lr = 0x820FC7BC;
	sub_823DF2B0(ctx, base);
	// lwz r10,724(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820fc808
	if (ctx.cr6.lt) goto loc_820FC808;
loc_820FC7CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fc290
	ctx.lr = 0x820FC7D4;
	sub_820FC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fc428
	ctx.lr = 0x820FC7E4;
	sub_820FC428(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fc804
	if (!ctx.cr6.eq) goto loc_820FC804;
	// lwz r11,724(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 724);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x820fc7cc
	if (!ctx.cr6.gt) goto loc_820FC7CC;
	// b 0x820fc808
	goto loc_820FC808;
loc_820FC804:
	// li r23,1
	ctx.r23.s64 = 1;
loc_820FC808:
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fc840
	if (ctx.cr6.eq) goto loc_820FC840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,7320
	ctx.r4.s64 = ctx.r11.s64 + 7320;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823df2b0
	ctx.lr = 0x820FC828;
	sub_823DF2B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fc290
	ctx.lr = 0x820FC830;
	sub_820FC290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820fc340
	ctx.lr = 0x820FC83C;
	sub_820FC340(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_820FC840:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// clrlwi r28,r23,24
	ctx.r28.u64 = ctx.r23.u32 & 0xFF;
	// lfs f10,11804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f10.f64 = double(temp.f32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lfs f11,-29876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29876);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-29872(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29872);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x820fc8e0
	if (ctx.cr6.eq) goto loc_820FC8E0;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addis r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 131072;
	// ori r8,r11,22912
	ctx.r8.u64 = ctx.r11.u64 | 22912;
	// addi r10,r10,18576
	ctx.r10.s64 = ctx.r10.s64 + 18576;
	// lwzx r11,r29,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r8.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820fc890
	if (ctx.cr6.gt) goto loc_820FC890;
	// addi r9,r9,800
	ctx.r9.s64 = ctx.r9.s64 + 800;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820fc894
	if (!ctx.cr6.lt) goto loc_820FC894;
loc_820FC890:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_820FC894:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r8,r11,800
	ctx.r8.s64 = ctx.r11.s64 + 800;
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f13,-29852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29852);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f9,112(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820fc8e0
	if (!ctx.cr6.lt) goto loc_820FC8E0;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
loc_820FC8E0:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fc8fc
	if (ctx.cr6.eq) goto loc_820FC8FC;
	// stfs f12,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// b 0x820fc914
	goto loc_820FC914;
loc_820FC8FC:
	// lfs f0,0(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
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
loc_820FC914:
	// lfs f0,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820FC924;
	sub_82141160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820fcb70
	if (ctx.cr6.eq) goto loc_820FCB70;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fcaa4
	if (ctx.cr6.eq) goto loc_820FCAA4;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// ori r29,r11,65535
	ctx.r29.u64 = ctx.r11.u64 | 65535;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FC96C;
	sub_822C1CE8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fc9a8
	if (ctx.cr6.eq) goto loc_820FC9A8;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x822c1ce8
	ctx.lr = 0x820FC9A8;
	sub_822C1CE8(ctx, base);
loc_820FC9A8:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// fadds f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FC9C8;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// fsubs f1,f30,f10
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x820FCA10;
	sub_822C1CE8(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r28,r7,-29856
	ctx.r28.s64 = ctx.r7.s64 + -29856;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FCA2C;
	sub_822C1BF8(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfs f9,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfs f6,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// frsp f5,f7
	ctx.f5.f64 = double(float(ctx.f7.f64));
	// lfs f0,2416(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f13,7324(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7324);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fsubs f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmadds f1,f4,f0,f6
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f6.f64));
	// fsubs f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x820FCA94;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_820FCAA4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820fcb70
	if (ctx.cr6.eq) goto loc_820FCB70;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822c1bf8
	ctx.lr = 0x820FCAC0;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// ori r29,r8,65535
	ctx.r29.u64 = ctx.r8.u64 | 65535;
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmadds f30,f8,f0,f10
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FCB24;
	sub_822C1CE8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820fcbec
	if (ctx.cr6.eq) goto loc_820FCBEC;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FCB60;
	sub_822C1CE8(ctx, base);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_820FCB70:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fcbec
	if (ctx.cr6.eq) goto loc_820FCBEC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x822c1bf8
	ctx.lr = 0x820FCB8C;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f2,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fmadds f1,f8,f0,f12
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x820FCBEC;
	sub_822C1CE8(ctx, base);
loc_820FCBEC:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FC6A0) {
	__imp__sub_820FC6A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FCBFC) {
	__imp__sub_820FCBFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FCC08;
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,11,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820fcd5c
	if (!ctx.cr6.eq) goto loc_820FCD5C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,23624
	ctx.r10.u64 = ctx.r11.u64 | 23624;
	// lwzx r9,r3,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820fcd5c
	if (!ctx.cr6.eq) goto loc_820FCD5C;
	// bl 0x820fc290
	ctx.lr = 0x820FCC7C;
	sub_820FC290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fcd5c
	if (ctx.cr6.eq) goto loc_820FCD5C;
	// mulli r11,r30,200
	ctx.r11.s64 = ctx.r30.s64 * 200;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r9,8672
	ctx.r11.s64 = ctx.r9.s64 + 8672;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332af8
	ctx.lr = 0x820FCCA0;
	sub_82332AF8(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fccc8
	if (ctx.cr6.eq) goto loc_820FCCC8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// bl 0x822e84f0
	ctx.lr = 0x820FCCC4;
	sub_822E84F0(ctx, base);
	// b 0x820fccd4
	goto loc_820FCCD4;
loc_820FCCC8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x820FCCD4;
	sub_822E84F0(ctx, base);
loc_820FCCD4:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fadds f30,f0,f13
	ctx.f30.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FCCF4;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lbz r25,17(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f29,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfs f0,-29848(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29848);
	ctx.f0.f64 = double(temp.f32);
	// lbz r30,16(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fsubs f9,f30,f10
	ctx.f9.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fsubs f30,f9,f0
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// bl 0x82141160
	ctx.lr = 0x820FCD2C;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FCD5C;
	sub_822C1CE8(ctx, base);
loc_820FCD5C:
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

PPC_WEAK_FUNC(sub_820FCC00) {
	__imp__sub_820FCC00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCD70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820FCD78;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de028
	ctx.lr = 0x820FCD80;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fcdc8
	if (ctx.cr6.eq) goto loc_820FCDC8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fcdcc
	if (ctx.cr6.eq) goto loc_820FCDCC;
loc_820FCDC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FCDCC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fcefc
	if (!ctx.cr6.eq) goto loc_820FCEFC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820fcdf4
	if (!ctx.cr6.eq) goto loc_820FCDF4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-29868
	ctx.r3.s64 = ctx.r11.s64 + -29868;
	// bl 0x8238bd98
	ctx.lr = 0x820FCDF0;
	sub_8238BD98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_820FCDF4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r29,r9
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// lwzx r6,r3,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,11,11
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x820fcefc
	if (!ctx.cr6.eq) goto loc_820FCEFC;
	// bl 0x820fc290
	ctx.lr = 0x820FCE28;
	sub_820FC290(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fcefc
	if (ctx.cr6.eq) goto loc_820FCEFC;
	// mulli r11,r29,200
	ctx.r11.s64 = ctx.r29.s64 * 200;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r9,8672
	ctx.r11.s64 = ctx.r9.s64 + 8672;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82332af8
	ctx.lr = 0x820FCE4C;
	sub_82332AF8(ctx, base);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lbz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fce74
	if (ctx.cr6.eq) goto loc_820FCE74;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r11,-29840
	ctx.r3.s64 = ctx.r11.s64 + -29840;
	// bl 0x822e84f0
	ctx.lr = 0x820FCE70;
	sub_822E84F0(ctx, base);
	// b 0x820fce80
	goto loc_820FCE80;
loc_820FCE74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29844
	ctx.r3.s64 = ctx.r11.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x820FCE80;
	sub_822E84F0(ctx, base);
loc_820FCE80:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c1bf8
	ctx.lr = 0x820FCE90;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,6060(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6060);
	ctx.f0.f64 = double(temp.f32);
	// fadds f8,f13,f10
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f31,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fadds f29,f9,f0
	ctx.f29.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f28,f8,f29
	ctx.f28.f64 = double(float(ctx.f8.f64 - ctx.f29.f64));
	// bl 0x82141160
	ctx.lr = 0x820FCED8;
	sub_82141160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x822b7f70
	ctx.lr = 0x820FCEFC;
	sub_822B7F70(ctx, base);
loc_820FCEFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de074
	ctx.lr = 0x820FCF08;
	__restfpr_28(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FCD70) {
	__imp__sub_820FCD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FCF0C) {
	__imp__sub_820FCF0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCF10) {
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
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r10,r6,23096
	ctx.r10.u64 = ctx.r6.u64 | 23096;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r6,r9,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x820fcf9c
	if (!ctx.cr6.eq) goto loc_820FCF9C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,23624
	ctx.r9.u64 = ctx.r10.u64 | 23624;
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820fcf9c
	if (!ctx.cr6.eq) goto loc_820FCF9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
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
	// beq cr6,0x820fcf9c
	if (ctx.cr6.eq) goto loc_820FCF9C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x820fcc00
	ctx.lr = 0x820FCF9C;
	sub_820FCC00(ctx, base);
loc_820FCF9C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FCF10) {
	__imp__sub_820FCF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FCFAC) {
	__imp__sub_820FCFAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820FCFB8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fd000
	if (ctx.cr6.eq) goto loc_820FD000;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fd004
	if (ctx.cr6.eq) goto loc_820FD004;
loc_820FD000:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FD004:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fd0a0
	if (!ctx.cr6.eq) goto loc_820FD0A0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820fd02c
	if (!ctx.cr6.eq) goto loc_820FD02C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r11,-29868
	ctx.r3.s64 = ctx.r11.s64 + -29868;
	// bl 0x8238bd98
	ctx.lr = 0x820FD028;
	sub_8238BD98(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_820FD02C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r9,r11,-15680
	ctx.r9.s64 = ctx.r11.s64 + -15680;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// addis r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 65536;
	// mullw r6,r31,r7
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// addi r5,r11,23096
	ctx.r5.s64 = ctx.r11.s64 + 23096;
	// lwzx r4,r6,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// rlwinm r3,r4,0,11,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fd0a0
	if (!ctx.cr6.eq) goto loc_820FD0A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
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
	// beq cr6,0x820fd0a0
	if (ctx.cr6.eq) goto loc_820FD0A0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fcfb0
	ctx.lr = 0x820FD0A0;
	sub_820FCFB0(ctx, base);
loc_820FD0A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FCFB0) {
	__imp__sub_820FCFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FD0AC) {
	__imp__sub_820FD0AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD0B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820FD0B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,692(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 692);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82332af8
	ctx.lr = 0x820FD0D0;
	sub_82332AF8(ctx, base);
	// lis r11,-31834
	ctx.r11.s64 = -2086273024;
	// lfs f13,764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// lwz r11,-6420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -6420);
	// lfs f0,12240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// beq cr6,0x820fd20c
	if (ctx.cr6.eq) goto loc_820FD20C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820fd20c
	if (ctx.cr6.eq) goto loc_820FD20C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82322b98
	ctx.lr = 0x820FD118;
	sub_82322B98(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fd13c
	if (ctx.cr6.eq) goto loc_820FD13C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// bl 0x82322a20
	ctx.lr = 0x820FD138;
	sub_82322A20(ctx, base);
	// b 0x820fd140
	goto loc_820FD140;
loc_820FD13C:
	// bl 0x82322b28
	ctx.lr = 0x820FD140;
	sub_82322B28(ctx, base);
loc_820FD140:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fd1dc
	if (ctx.cr6.eq) goto loc_820FD1DC;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
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
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r8,r9,22372
	ctx.r8.s64 = ctx.r9.s64 + 22372;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lwz r11,-40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -40);
	// lwz r10,-12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfs f8,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fdivs f5,f10,f9
	ctx.f5.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fmadds f4,f6,f5,f8
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f0,f1,f5,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f13,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmadds f10,f11,f5,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f13.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f9,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f5,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f5.f64 + ctx.f9.f64));
	// stfs f6,12(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FD1DC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22372);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FD20C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r10,r11,22372
	ctx.r10.s64 = ctx.r11.s64 + 22372;
	// lwz r11,-12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FD0B0) {
	__imp__sub_820FD0B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FD240;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de024
	ctx.lr = 0x820FD248;
	__savefpr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f29,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lfs f28,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f28.f64 = double(temp.f32);
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,18616
	ctx.r7.u64 = ctx.r8.u64 | 18616;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820fd2ac
	if (ctx.cr6.eq) goto loc_820FD2AC;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r26,r11,-22896
	ctx.r26.s64 = ctx.r11.s64 + -22896;
	// lwz r30,856(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 856);
	// b 0x820fd2cc
	goto loc_820FD2CC;
loc_820FD2AC:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// addi r26,r11,-22896
	ctx.r26.s64 = ctx.r11.s64 + -22896;
	// beq cr6,0x820fd2c8
	if (ctx.cr6.eq) goto loc_820FD2C8;
	// lwz r30,852(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 852);
	// b 0x820fd2cc
	goto loc_820FD2CC;
loc_820FD2C8:
	// lwz r30,848(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 848);
loc_820FD2CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r25,17(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r24,16(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820FD2DC;
	sub_82141160(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820FD300;
	sub_822B7F70(ctx, base);
	// addis r30,r29,2
	ctx.r30.s64 = ctx.r29.s64 + 131072;
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// addi r30,r30,18620
	ctx.r30.s64 = ctx.r30.s64 + 18620;
	// addi r29,r29,22912
	ctx.r29.s64 = ctx.r29.s64 + 22912;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x820fd3b8
	if (!ctx.cr6.gt) goto loc_820FD3B8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-30212(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30212);
	// bl 0x822e0620
	ctx.lr = 0x820FD334;
	sub_822E0620(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r11,r7,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r7.s64;
	// addi r6,r11,1000
	ctx.r6.s64 = ctx.r11.s64 + 1000;
	// lfs f0,5804(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6048(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6048);
	ctx.f13.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f8,12(r28)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// fcmpu cr6,f27,f8
	ctx.cr6.compare(ctx.f27.f64, ctx.f8.f64);
	// bge cr6,0x820fd380
	if (!ctx.cr6.lt) goto loc_820FD380;
	// stfs f27,12(r28)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
loc_820FD380:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lwz r31,860(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 860);
	// bl 0x82141160
	ctx.lr = 0x820FD394;
	sub_82141160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f4,f28
	ctx.f4.f64 = ctx.f28.f64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x822b7f70
	ctx.lr = 0x820FD3B8;
	sub_822B7F70(ctx, base);
loc_820FD3B8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de070
	ctx.lr = 0x820FD3C4;
	__restfpr_27(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FD238) {
	__imp__sub_820FD238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD3C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x820FD3D0;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de020
	ctx.lr = 0x820FD3D8;
	__savefpr_26(ctx, base);
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,324
	ctx.r9.s64 = ctx.r1.s64 + 324;
	// stw r31,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r31.u32);
	// lis r8,2
	ctx.r8.s64 = 131072;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// ori r3,r8,61924
	ctx.r3.u64 = ctx.r8.u64 | 61924;
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// addi r8,r7,-29736
	ctx.r8.s64 = ctx.r7.s64 + -29736;
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// addi r7,r5,-29748
	ctx.r7.s64 = ctx.r5.s64 + -29748;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// addi r6,r1,168
	ctx.r6.s64 = ctx.r1.s64 + 168;
	// stw r7,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r7.u32);
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// std r31,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r31.u64);
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// std r31,8(r4)
	PPC_STORE_U64(ctx.r4.u32 + 8, ctx.r31.u64);
	// mullw r10,r24,r3
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r3.s32);
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r31,0(r6)
	PPC_STORE_U64(ctx.r6.u32 + 0, ctx.r31.u64);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// std r31,8(r6)
	PPC_STORE_U64(ctx.r6.u32 + 8, ctx.r31.u64);
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// fmr f27,f1
	ctx.f27.f64 = ctx.f1.f64;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// fmr f26,f2
	ctx.f26.f64 = ctx.f2.f64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// stw r31,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r31.u32);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r31,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r31.u32);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// stw r31,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r31.u32);
	// ori r6,r4,22912
	ctx.r6.u64 = ctx.r4.u64 | 22912;
	// stw r31,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r31.u32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r4,r3,18620
	ctx.r4.u64 = ctx.r3.u64 | 18620;
	// addi r9,r1,292
	ctx.r9.s64 = ctx.r1.s64 + 292;
	// std r31,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r31.u64);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// std r31,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r31.u64);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// lwzx r6,r30,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lwzx r8,r30,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r4.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// subf r11,r6,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r6.s64;
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r31.u32);
	// addi r8,r5,-29804
	ctx.r8.s64 = ctx.r5.s64 + -29804;
	// stw r7,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// addi r7,r4,-29832
	ctx.r7.s64 = ctx.r4.s64 + -29832;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// stw r31,16(r9)
	PPC_STORE_U32(ctx.r9.u32 + 16, ctx.r31.u32);
	// addi r9,r29,-29776
	ctx.r9.s64 = ctx.r29.s64 + -29776;
	// stw r31,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// cmpwi cr6,r11,1000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1000, ctx.xer);
	// std r31,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// std r31,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// ble cr6,0x820fd574
	if (!ctx.cr6.gt) goto loc_820FD574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x820fd598
	goto loc_820FD598;
loc_820FD574:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,140(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_820FD598:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822c1c70
	ctx.lr = 0x820FD5A4;
	sub_822C1C70(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// addi r27,r27,18616
	ctx.r27.s64 = ctx.r27.s64 + 18616;
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// addi r26,r1,112
	ctx.r26.s64 = ctx.r1.s64 + 112;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
loc_820FD5D0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fd5f0
	if (ctx.cr6.eq) goto loc_820FD5F0;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// b 0x820fd604
	goto loc_820FD604;
loc_820FD5F0:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x820fd604
	if (!ctx.cr6.eq) goto loc_820FD604;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_820FD604:
	// lwzx r30,r25,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_820FD60C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820fd674
	if (ctx.cr6.eq) goto loc_820FD674;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8212ed88
	ctx.lr = 0x820FD620;
	sub_8212ED88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fd66c
	if (!ctx.cr6.eq) goto loc_820FD66C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fd648
	if (ctx.cr6.eq) goto loc_820FD648;
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// b 0x820fd65c
	goto loc_820FD65C;
loc_820FD648:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x820fd65c
	if (!ctx.cr6.eq) goto loc_820FD65C;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_820FD65C:
	// lwzx r30,r29,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x820fd60c
	if (ctx.cr6.lt) goto loc_820FD60C;
	// b 0x820fd674
	goto loc_820FD674;
loc_820FD66C:
	// stw r30,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_820FD674:
	// addi r25,r25,24
	ctx.r25.s64 = ctx.r25.s64 + 24;
	// addi r23,r23,24
	ctx.r23.s64 = ctx.r23.s64 + 24;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpwi cr6,r25,72
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 72, ctx.xer);
	// blt cr6,0x820fd5d0
	if (ctx.cr6.lt) goto loc_820FD5D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f30,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f31,f11,f30
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f30.f64));
	// beq cr6,0x820fd6c4
	if (ctx.cr6.eq) goto loc_820FD6C4;
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x820fd6c8
	if (!ctx.cr6.eq) goto loc_820FD6C8;
	// fmadds f0,f29,f0,f30
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f30.f64));
	// fsubs f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// b 0x820fd6c8
	goto loc_820FD6C8;
loc_820FD6C4:
	// fmadds f31,f29,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f31.f64));
loc_820FD6C8:
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f26,f0
	ctx.cr6.compare(ctx.f26.f64, ctx.f0.f64);
	// bge cr6,0x820fd6d8
	if (!ctx.cr6.lt) goto loc_820FD6D8;
	// stfs f26,140(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_820FD6D8:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
loc_820FD6DC:
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820fd760
	if (ctx.cr6.eq) goto loc_820FD760;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FD6F8;
	sub_822CADD0(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x822c4080
	ctx.lr = 0x820FD704;
	sub_822C4080(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x822c5318
	ctx.lr = 0x820FD70C;
	sub_822C5318(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lbz r29,17(r22)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r22.u32 + 17);
	// lbz r28,16(r22)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r22.u32 + 16);
	// lfs f26,8(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820FD724;
	sub_82141160(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fadds f1,f26,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f27.f64));
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r19.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FD758;
	sub_822C1CE8(ctx, base);
	// fadds f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// fadds f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
loc_820FD760:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x820fd6dc
	if (ctx.cr6.lt) goto loc_820FD6DC;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x823de06c
	ctx.lr = 0x820FD77C;
	__restfpr_26(ctx, base);
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FD3C8) {
	__imp__sub_820FD3C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD780) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x820FD788;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// lwz r11,-17044(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17044);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fd90c
	if (ctx.cr6.eq) goto loc_820FD90C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// addi r11,r9,-15680
	ctx.r11.s64 = ctx.r9.s64 + -15680;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// ori r5,r7,23096
	ctx.r5.u64 = ctx.r7.u64 | 23096;
	// lwzx r9,r11,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r4,r9,0,11,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x820fd7fc
	if (ctx.cr6.eq) goto loc_820FD7FC;
	// rlwinm r9,r9,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820fd90c
	if (ctx.cr6.eq) goto loc_820FD90C;
loc_820FD7FC:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 131072;
	// ori r8,r9,22912
	ctx.r8.u64 = ctx.r9.u64 | 22912;
	// addi r5,r5,18620
	ctx.r5.s64 = ctx.r5.s64 + 18620;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r9,r4,18616
	ctx.r9.u64 = ctx.r4.u64 | 18616;
	// lwzx r4,r11,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// ori r7,r7,22936
	ctx.r7.u64 = ctx.r7.u64 | 22936;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x820fd840
	if (ctx.cr6.gt) goto loc_820FD840;
	// lwzx r8,r11,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820fd844
	if (ctx.cr6.eq) goto loc_820FD844;
loc_820FD840:
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_820FD844:
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// lis r28,-32189
	ctx.r28.s64 = -2109538304;
	// lis r27,-32256
	ctx.r27.s64 = -2113929216;
	// lwz r9,-19404(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19404);
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// stwx r7,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r7.u32);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r8,6968
	ctx.r3.s64 = ctx.r8.s64 + 6968;
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// lwz r7,27472(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 27472);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,12168(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// lfs f0,11328(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11328);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f13,7036(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7036);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmadds f30,f9,f13,f12
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// beq cr6,0x820fd8d0
	if (ctx.cr6.eq) goto loc_820FD8D0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,3000
	ctx.r11.s64 = ctx.r11.s64 + 3000;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820fd8d0
	if (!ctx.cr6.gt) goto loc_820FD8D0;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fd3c8
	ctx.lr = 0x820FD8D0;
	sub_820FD3C8(ctx, base);
loc_820FD8D0:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f11,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820fd238
	ctx.lr = 0x820FD90C;
	sub_820FD238(ctx, base);
loc_820FD90C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FD780) {
	__imp__sub_820FD780(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,332(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fd994
	if (ctx.cr6.eq) goto loc_820FD994;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fd994
	if (ctx.cr6.eq) goto loc_820FD994;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// beq cr6,0x820fd994
	if (ctx.cr6.eq) goto loc_820FD994;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
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
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fneg f6,f8
	ctx.f6.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// fsel f5,f7,f0,f8
	ctx.f5.f64 = ctx.f7.f64 >= 0.0 ? ctx.f0.f64 : ctx.f8.f64;
	// fsel f1,f6,f13,f5
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f13.f64 : ctx.f5.f64;
	// blr 
	return;
loc_820FD994:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FD920) {
	__imp__sub_820FD920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD9A0) {
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
	// addi r6,r11,22928
	ctx.r6.s64 = ctx.r11.s64 + 22928;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820fd9f0
	if (ctx.cr6.gt) goto loc_820FD9F0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820fd9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FD9E8;
	// bdzf 4*cr6+eq,0x820fd9f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FD9F0;
	// bdzf 4*cr6+eq,0x820fd9f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FD9F0;
	// bdzf 4*cr6+eq,0x820fd9e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FD9E8;
	// bne cr6,0x820fd9e8
	if (!ctx.cr6.eq) goto loc_820FD9E8;
loc_820FD9E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820FD9F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FD9A0) {
	__imp__sub_820FD9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FD9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 131072;
	// addi r11,r11,18612
	ctx.r11.s64 = ctx.r11.s64 + 18612;
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x820fda70
	if (!ctx.cr6.gt) goto loc_820FDA70;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,22364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22364);
	// lfs f12,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820fda6c
	if (!ctx.cr6.gt) goto loc_820FDA6C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,22908
	ctx.r8.u64 = ctx.r10.u64 | 22908;
	// lfs f12,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r7,r3,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fnmsubs f6,f7,f0,f13
	ctx.f6.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x820fda70
	goto loc_820FDA70;
loc_820FDA6C:
	// stfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_820FDA70:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FD9F8) {
	__imp__sub_820FD9F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDA84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FDA84) {
	__imp__sub_820FDA84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820FDA90;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de024
	ctx.lr = 0x820FDA98;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r10,r11,-15680
	ctx.r10.s64 = ctx.r11.s64 + -15680;
	// ori r8,r9,61924
	ctx.r8.u64 = ctx.r9.u64 | 61924;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r7,r11,22928
	ctx.r7.s64 = ctx.r11.s64 + 22928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820fdaf8
	if (ctx.cr6.gt) goto loc_820FDAF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820fdaf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDAF0;
	// bdzf 4*cr6+eq,0x820fdaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDAF8;
	// bdzf 4*cr6+eq,0x820fdaf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDAF8;
	// bdzf 4*cr6+eq,0x820fdaf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FDAF0;
	// bne cr6,0x820fdaf0
	if (!ctx.cr6.eq) goto loc_820FDAF0;
loc_820FDAF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fdafc
	goto loc_820FDAFC;
loc_820FDAF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FDAFC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fdbcc
	if (ctx.cr6.eq) goto loc_820FDBCC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addis r3,r5,1
	ctx.r3.s64 = ctx.r5.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820fd920
	ctx.lr = 0x820FDB18;
	sub_820FD920(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820fd9f8
	ctx.lr = 0x820FDB20;
	sub_820FD9F8(ctx, base);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,21480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21480);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdb58
	if (ctx.cr6.eq) goto loc_820FDB58;
	// ori r10,r11,18612
	ctx.r10.u64 = ctx.r11.u64 | 18612;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsx f1,r5,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9e08
	ctx.lr = 0x820FDB48;
	sub_820E9E08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x820FDB54;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FDB58:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,18612
	ctx.r9.u64 = ctx.r11.u64 | 18612;
	// lfs f31,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfsx f0,r5,r9
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820fdbcc
	if (ctx.cr6.eq) goto loc_820FDBCC;
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r31,17(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 17);
	// lfs f30,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lbz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 16);
	// lfs f29,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820FDB94;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// bl 0x82120408
	ctx.lr = 0x820FDBCC;
	sub_82120408(ctx, base);
loc_820FDBCC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de070
	ctx.lr = 0x820FDBD8;
	__restfpr_27(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FDA88) {
	__imp__sub_820FDA88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FDBDC) {
	__imp__sub_820FDBDC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,18612
	ctx.r9.u64 = ctx.r11.u64 | 18612;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r3,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FDBE0) {
	__imp__sub_820FDBE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDBF8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820fdc84
	if (!ctx.cr6.gt) goto loc_820FDC84;
	// cmpwi cr6,r4,128
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 128, ctx.xer);
	// bge cr6,0x820fdc84
	if (!ctx.cr6.lt) goto loc_820FDC84;
	// addi r3,r4,2824
	ctx.r3.s64 = ctx.r4.s64 + 2824;
	// bl 0x821201a0
	ctx.lr = 0x820FDC2C;
	sub_821201A0(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fdc84
	if (ctx.cr6.eq) goto loc_820FDC84;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_820FDC40:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fdc40
	if (!ctx.cr6.eq) goto loc_820FDC40;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x820fdc84
	if (!ctx.cr6.lt) goto loc_820FDC84;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_820FDC68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x820fdc68
	if (!ctx.cr6.eq) goto loc_820FDC68;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820fdc88
	goto loc_820FDC88;
loc_820FDC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FDC88:
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

PPC_WEAK_FUNC(sub_820FDBF8) {
	__imp__sub_820FDBF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDCA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fdcf8
	if (ctx.cr6.eq) goto loc_820FDCF8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820fdbf8
	ctx.lr = 0x820FDCD0;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fdcf8
	if (ctx.cr6.eq) goto loc_820FDCF8;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238bd98
	ctx.lr = 0x820FDCE4;
	sub_8238BD98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820FDCF8:
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,864
	ctx.r9.s64 = ctx.r11.s64 + 864;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FDCA0) {
	__imp__sub_820FDCA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDD20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x820fdbf8
	ctx.lr = 0x820FDD38;
	sub_820FDBF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fdd5c
	if (ctx.cr6.eq) goto loc_820FDD5C;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238bd98
	ctx.lr = 0x820FDD4C;
	sub_8238BD98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820FDD5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FDD20) {
	__imp__sub_820FDD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDD70) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
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
	// ori r7,r8,23340
	ctx.r7.u64 = ctx.r8.u64 | 23340;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820fde68
	if (ctx.cr6.eq) goto loc_820FDE68;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r7,r10,22912
	ctx.r7.u64 = ctx.r10.u64 | 22912;
	// ori r6,r8,18560
	ctx.r6.u64 = ctx.r8.u64 | 18560;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,-32181
	ctx.r4.s64 = -2109014016;
	// ori r3,r5,23348
	ctx.r3.u64 = ctx.r5.u64 | 23348;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// ori r31,r31,18572
	ctx.r31.u64 = ctx.r31.u64 | 18572;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r10,r4,-5696
	ctx.r10.s64 = ctx.r4.s64 + -5696;
	// lwz r8,-29916(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -29916);
	// ori r4,r7,23344
	ctx.r4.u64 = ctx.r7.u64 | 23344;
	// ori r3,r6,23352
	ctx.r3.u64 = ctx.r6.u64 | 23352;
	// mulli r7,r5,404
	ctx.r7.s64 = ctx.r5.s64 * 404;
	// lwzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r5,r11,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r4,r4,18564
	ctx.r4.u64 = ctx.r4.u64 | 18564;
	// lwz r30,380(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// ori r3,r3,18552
	ctx.r3.u64 = ctx.r3.u64 | 18552;
	// ori r7,r7,18568
	ctx.r7.u64 = ctx.r7.u64 | 18568;
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stwx r5,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r5.u32);
	// stwx r9,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// stwx r6,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// stwx r8,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
	// beq cr6,0x820fde58
	if (ctx.cr6.eq) goto loc_820FDE58;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lbz r8,208(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// ori r7,r9,18556
	ctx.r7.u64 = ctx.r9.u64 | 18556;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_820FDE58:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r8,r10,18556
	ctx.r8.u64 = ctx.r10.u64 | 18556;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_820FDE68:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FDD70) {
	__imp__sub_820FDD70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FDE74) {
	__imp__sub_820FDE74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x820FDE80;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
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
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,18552
	ctx.r7.u64 = ctx.r8.u64 | 18552;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwzx r11,r29,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r7.u32);
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x820FDEBC;
	sub_82332AF8(ctx, base);
	// mulli r11,r31,200
	ctx.r11.s64 = ctx.r31.s64 * 200;
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// add r6,r11,r30
	ctx.r6.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lis r5,-32188
	ctx.r5.s64 = -2109472768;
	// rlwinm r10,r6,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r11,r5,8672
	ctx.r11.s64 = ctx.r5.s64 + 8672;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x820fdf5c
	if (!ctx.cr6.eq) goto loc_820FDF5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29636
	ctx.r4.s64 = ctx.r11.s64 + -29636;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FDEF8;
	sub_822CADD0(ctx, base);
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x82333d90
	ctx.lr = 0x820FDF04;
	sub_82333D90(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x820fdf34
	if (!ctx.cr6.lt) goto loc_820FDF34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// bl 0x822c4080
	ctx.lr = 0x820FDF18;
	sub_822C4080(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x822c5318
	ctx.lr = 0x820FDF2C;
	sub_822C5318(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FDF34:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29688
	ctx.r3.s64 = ctx.r11.s64 + -29688;
	// bl 0x822c4080
	ctx.lr = 0x820FDF40;
	sub_822C4080(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x822c5318
	ctx.lr = 0x820FDF54;
	sub_822C5318(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FDF5C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18556
	ctx.r10.u64 = ctx.r11.u64 | 18556;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x820fdfb8
	if (!ctx.cr6.eq) goto loc_820FDFB8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x820fdfb8
	if (ctx.cr6.eq) goto loc_820FDFB8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29716
	ctx.r3.s64 = ctx.r11.s64 + -29716;
	// bl 0x822c4080
	ctx.lr = 0x820FDF88;
	sub_822C4080(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r10,-29724
	ctx.r4.s64 = ctx.r10.s64 + -29724;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FDFA4;
	sub_822CADD0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c5318
	ctx.lr = 0x820FDFB0;
	sub_822C5318(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_820FDFB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29664
	ctx.r3.s64 = ctx.r11.s64 + -29664;
	// bl 0x822c4080
	ctx.lr = 0x820FDFC4;
	sub_822C4080(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r10,-29636
	ctx.r4.s64 = ctx.r10.s64 + -29636;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FDFE0;
	sub_822CADD0(ctx, base);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// bl 0x822c5318
	ctx.lr = 0x820FDFF4;
	sub_822C5318(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FDE78) {
	__imp__sub_820FDE78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FDFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FDFFC) {
	__imp__sub_820FDFFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FE000) {
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
	// stwu r1,-1392(r1)
	ea = -1392 + ctx.r1.u32;
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
	// addis r11,r9,2
	ctx.r11.s64 = ctx.r9.s64 + 131072;
	// mullw r7,r3,r8
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// addi r6,r11,18568
	ctx.r6.s64 = ctx.r11.s64 + 18568;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r11,r7,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// bl 0x821201a0
	ctx.lr = 0x820FE040;
	sub_821201A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe0d8
	if (ctx.cr6.eq) goto loc_820FE0D8;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe0d8
	if (ctx.cr6.eq) goto loc_820FE0D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29636
	ctx.r4.s64 = ctx.r11.s64 + -29636;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FE070;
	sub_822CADD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fe094
	if (!ctx.cr6.eq) goto loc_820FE094;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29612
	ctx.r3.s64 = ctx.r11.s64 + -29612;
	// bl 0x822c4080
	ctx.lr = 0x820FE084;
	sub_822C4080(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x822e7e98
	ctx.lr = 0x820FE094;
	sub_822E7E98(ctx, base);
loc_820FE094:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-29624
	ctx.r4.s64 = ctx.r11.s64 + -29624;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822b7268
	ctx.lr = 0x820FE0A8;
	sub_822B7268(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5318
	ctx.lr = 0x820FE0B0;
	sub_822C5318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cda98
	ctx.lr = 0x820FE0C4;
	sub_822CDA98(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r10,-29844
	ctx.r3.s64 = ctx.r10.s64 + -29844;
	// bl 0x822e84f0
	ctx.lr = 0x820FE0D4;
	sub_822E84F0(ctx, base);
	// b 0x820fe0dc
	goto loc_820FE0DC;
loc_820FE0D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820FE0DC:
	// addi r1,r1,1392
	ctx.r1.s64 = ctx.r1.s64 + 1392;
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

PPC_WEAK_FUNC(sub_820FE000) {
	__imp__sub_820FE000(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FE0F4) {
	__imp__sub_820FE0F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FE0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x820FE100;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de008
	ctx.lr = 0x820FE108;
	__savefpr_20(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32168
	ctx.r28.s64 = -2108162048;
	// fmr f23,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = ctx.f1.f64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,18804(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18804);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fe868
	if (ctx.cr6.eq) goto loc_820FE868;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fe164
	if (ctx.cr6.eq) goto loc_820FE164;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe168
	if (ctx.cr6.eq) goto loc_820FE168;
loc_820FE164:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_820FE168:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fe868
	if (!ctx.cr6.eq) goto loc_820FE868;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fdd70
	ctx.lr = 0x820FE17C;
	sub_820FDD70(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r11,r10,-15680
	ctx.r11.s64 = ctx.r10.s64 + -15680;
	// mullw r10,r25,r9
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r9.s32);
	// add r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// addis r30,r24,2
	ctx.r30.s64 = ctx.r24.s64 + 131072;
	// addis r27,r24,1
	ctx.r27.s64 = ctx.r24.s64 + 65536;
	// ori r7,r8,18564
	ctx.r7.u64 = ctx.r8.u64 | 18564;
	// addi r30,r30,18560
	ctx.r30.s64 = ctx.r30.s64 + 18560;
	// addi r27,r27,22912
	ctx.r27.s64 = ctx.r27.s64 + 22912;
	// li r6,100
	ctx.r6.s64 = 100;
	// lwzx r5,r24,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r7.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x820eabe0
	ctx.lr = 0x820FE1C0;
	sub_820EABE0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820fe1e8
	if (!ctx.cr6.eq) goto loc_820FE1E8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18552
	ctx.r10.u64 = ctx.r11.u64 | 18552;
	// stwx r26,r24,r10
	PPC_STORE_U32(ctx.r24.u32 + ctx.r10.u32, ctx.r26.u32);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE1E4;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_820FE1E8:
	// lwz r11,18804(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 18804);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f30,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f29,f30
	ctx.f29.f64 = ctx.f30.f64;
	// lfs f28,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// fmr f27,f31
	ctx.f27.f64 = ctx.f31.f64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820fe228
	if (ctx.cr6.lt) goto loc_820FE228;
	// fmr f25,f31
	ctx.f25.f64 = ctx.f31.f64;
	// b 0x820fe2bc
	goto loc_820FE2BC;
loc_820FE228:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820fe278
	if (!ctx.cr6.eq) goto loc_820FE278;
	// lis r11,4194
	ctx.r11.s64 = 274857984;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r11,19923
	ctx.r7.u64 = ctx.r11.u64 | 19923;
	// mulhw r6,r9,r7
	ctx.r6.s64 = (int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32)) >> 32;
	// lfs f0,11804(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11804);
	ctx.f0.f64 = double(temp.f32);
	// srawi r11,r6,6
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 6;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r4,r5,1000
	ctx.r4.s64 = ctx.r5.s64 * 1000;
	// subf r3,r4,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r4.s64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// b 0x820fe2b8
	goto loc_820FE2B8;
loc_820FE278:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-29576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29576);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x823de720
	ctx.lr = 0x820FE2A0;
	sub_823DE720(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5876(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5876);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f30.f64));
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f31,f9,f0
	ctx.f31.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
loc_820FE2B8:
	// fmuls f25,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f28.f64));
loc_820FE2BC:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18552
	ctx.r10.u64 = ctx.r11.u64 | 18552;
	// lwzx r11,r24,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820fe7a0
	if (ctx.cr6.eq) goto loc_820FE7A0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820fe7a0
	if (ctx.cr6.eq) goto loc_820FE7A0;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-22896
	ctx.r10.s64 = ctx.r10.s64 + -22896;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// lwzx r27,r9,r8
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x820fe868
	if (ctx.cr6.eq) goto loc_820FE868;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// lfs f26,6004(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f26.f64 = double(temp.f32);
	// blt cr6,0x820fe3bc
	if (ctx.cr6.lt) goto loc_820FE3BC;
	// cmpwi cr6,r11,204
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 204, ctx.xer);
	// bgt cr6,0x820fe3bc
	if (ctx.cr6.gt) goto loc_820FE3BC;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82332af8
	ctx.lr = 0x820FE318;
	sub_82332AF8(ctx, base);
	// lwz r11,500(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 500);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe32c
	if (ctx.cr6.eq) goto loc_820FE32C;
	// lwz r11,504(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	// b 0x820fe33c
	goto loc_820FE33C;
loc_820FE32C:
	// lwz r11,492(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe35c
	if (ctx.cr6.eq) goto loc_820FE35C;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
loc_820FE33C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fe35c
	if (ctx.cr6.lt) goto loc_820FE35C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f27,f0,f26
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// lfs f29,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f29.f64 = double(temp.f32);
	// beq cr6,0x820fe35c
	if (ctx.cr6.eq) goto loc_820FE35C;
	// fmr f30,f28
	ctx.f30.f64 = ctx.f28.f64;
loc_820FE35C:
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x820fe3a8
	if (!ctx.cr6.eq) goto loc_820FE3A8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18568
	ctx.r10.u64 = ctx.r11.u64 | 18568;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820fe388
	if (ctx.cr6.lt) goto loc_820FE388;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fe000
	ctx.lr = 0x820FE384;
	sub_820FE000(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_820FE388:
	// mulli r11,r25,200
	ctx.r11.s64 = ctx.r25.s64 * 200;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r10,8672
	ctx.r11.s64 = ctx.r10.s64 + 8672;
	// rlwinm r8,r9,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwzx r28,r8,r7
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// b 0x820fe414
	goto loc_820FE414;
loc_820FE3A8:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fde78
	ctx.lr = 0x820FE3B4;
	sub_820FDE78(ctx, base);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x820fe410
	goto loc_820FE410;
loc_820FE3BC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18568
	ctx.r9.u64 = ctx.r10.u64 | 18568;
	// lwzx r8,r24,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x820fe3dc
	if (ctx.cr6.lt) goto loc_820FE3DC;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fe000
	ctx.lr = 0x820FE3D8;
	sub_820FE000(ctx, base);
	// b 0x820fe410
	goto loc_820FE410;
loc_820FE3DC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820fe414
	if (!ctx.cr6.eq) goto loc_820FE414;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29636
	ctx.r4.s64 = ctx.r11.s64 + -29636;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FE3FC;
	sub_822CADD0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-29600
	ctx.r3.s64 = ctx.r10.s64 + -29600;
	// bl 0x822c4080
	ctx.lr = 0x820FE408;
	sub_822C4080(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822c5318
	ctx.lr = 0x820FE410;
	sub_822C5318(ctx, base);
loc_820FE410:
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_820FE414:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82141160
	ctx.lr = 0x820FE41C;
	sub_82141160(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820fe750
	if (ctx.cr6.eq) goto loc_820FE750;
	// lbz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe750
	if (ctx.cr6.eq) goto loc_820FE750;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FE448;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f27,f13
	ctx.f27.f64 = double(float(ctx.f13.f64));
	// bl 0x822c1c70
	ctx.lr = 0x820FE468;
	sub_822C1C70(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f25,f11
	ctx.f25.f64 = double(float(ctx.f11.f64));
	// beq cr6,0x820fe66c
	if (ctx.cr6.eq) goto loc_820FE66C;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r11,6256(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6256);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe66c
	if (ctx.cr6.eq) goto loc_820FE66C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FE4AC;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f25,f28
	ctx.f22.f64 = double(float(ctx.f25.f64 * ctx.f28.f64));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f0,f30
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fadds f2,f22,f10
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f10.f64));
	// fadds f8,f11,f27
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f27.f64));
	// fnmsubs f24,f9,f28,f10
	ctx.f24.f64 = double(float(-(ctx.f9.f64 * ctx.f28.f64 - ctx.f10.f64)));
	// fmuls f21,f8,f26
	ctx.f21.f64 = double(float(ctx.f8.f64 * ctx.f26.f64));
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FE510;
	sub_822C1CE8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r10,-29604
	ctx.r3.s64 = ctx.r10.s64 + -29604;
	// lbz r28,17(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f20,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f20.f64 = double(temp.f32);
	// lbz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bl 0x822e84f0
	ctx.lr = 0x820FE52C;
	sub_822E84F0(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fadds f1,f21,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f21.f64 + ctx.f27.f64));
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fadds f2,f22,f20
	ctx.f2.f64 = double(float(ctx.f22.f64 + ctx.f20.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FE560;
	sub_822C1CE8(ctx, base);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r8,r9,18572
	ctx.r8.u64 = ctx.r9.u64 | 18572;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r7,r24,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// bne cr6,0x820fe5c4
	if (!ctx.cr6.eq) goto loc_820FE5C4;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,6820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmadds f4,f12,f30,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f2,f25,f0,f24
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f24.f64));
	// fadds f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fmuls f1,f11,f26
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f26.f64));
	// bl 0x822b7f70
	ctx.lr = 0x820FE5B4;
	sub_822B7F70(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE5C0;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_820FE5C4:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f25,f29
	ctx.f13.f64 = double(float(ctx.f25.f64 * ctx.f29.f64));
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f10,f29,f12
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lfs f0,6820(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6820);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lfs f27,2424(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// lfs f5,5188(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5188);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f26,f13,f0
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fsubs f8,f11,f10
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f3,f10,f31
	ctx.f3.f64 = double(float(ctx.f10.f64 + ctx.f31.f64));
	// fadds f2,f26,f24
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f24.f64));
	// fmuls f28,f8,f28
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// fmadds f1,f9,f27,f28
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f27.f64 + ctx.f28.f64));
	// bl 0x820ea2f0
	ctx.lr = 0x820FE618;
	sub_820EA2F0(ctx, base);
	// lfs f7,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// lfs f4,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f29,f4,f31
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f4.f64 + ctx.f31.f64));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f1,f6,f31
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f5,12252(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12252);
	ctx.f5.f64 = double(temp.f32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// fadds f2,f26,f24
	ctx.f2.f64 = double(float(ctx.f26.f64 + ctx.f24.f64));
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// fadds f4,f6,f31
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f31.f64));
	// fmuls f3,f3,f27
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// fsubs f1,f1,f28
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f28.f64));
	// bl 0x820ea2f0
	ctx.lr = 0x820FE65C;
	sub_820EA2F0(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE668;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_820FE66C:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmadds f13,f29,f0,f27
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f27.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f2,f25,f28,f10
	ctx.f2.f64 = double(float(ctx.f25.f64 * ctx.f28.f64 + ctx.f10.f64));
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fadds f9,f13,f31
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fnmsubs f25,f11,f28,f10
	ctx.f25.f64 = double(float(-(ctx.f11.f64 * ctx.f28.f64 - ctx.f10.f64)));
	// fmuls f28,f9,f26
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f26.f64));
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FE6C0;
	sub_822C1CE8(ctx, base);
	// lfs f8,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lfs f7,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fadds f1,f28,f27
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f27.f64));
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmadds f4,f8,f30,f31
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f30.f64 + ctx.f31.f64));
	// fmadds f3,f29,f7,f31
	ctx.f3.f64 = double(float(ctx.f29.f64 * ctx.f7.f64 + ctx.f31.f64));
	// bl 0x822b7f70
	ctx.lr = 0x820FE6F0;
	sub_822B7F70(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18572
	ctx.r10.u64 = ctx.r11.u64 | 18572;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820fe868
	if (ctx.cr6.eq) goto loc_820FE868;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmuls f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmadds f4,f12,f30,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fadds f11,f13,f28
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f1,f10,f27
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f27.f64));
	// bl 0x822b7f70
	ctx.lr = 0x820FE740;
	sub_822B7F70(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE74C;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_820FE750:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// fadds f13,f0,f25
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// lfs f12,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lfs f10,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmadds f4,f12,f30,f31
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f31.f64));
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmadds f3,f0,f29,f31
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f31.f64));
	// fnmsubs f2,f25,f30,f11
	ctx.f2.f64 = double(float(-(ctx.f25.f64 * ctx.f30.f64 - ctx.f11.f64)));
	// fadds f9,f13,f27
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fnmsubs f1,f9,f28,f10
	ctx.f1.f64 = double(float(-(ctx.f9.f64 * ctx.f28.f64 - ctx.f10.f64)));
	// bl 0x822b7f70
	ctx.lr = 0x820FE790;
	sub_822B7F70(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE79C;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
loc_820FE7A0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18568
	ctx.r10.u64 = ctx.r11.u64 | 18568;
	// lwzx r9,r24,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x820fe868
	if (ctx.cr6.lt) goto loc_820FE868;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x820fe000
	ctx.lr = 0x820FE7BC;
	sub_820FE000(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fe868
	if (ctx.cr6.eq) goto loc_820FE868;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fe868
	if (ctx.cr6.eq) goto loc_820FE868;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822c1bf8
	ctx.lr = 0x820FE7E4;
	sub_822C1BF8(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// fmr f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f23.f64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x822c1c70
	ctx.lr = 0x820FE804;
	sub_822C1C70(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lbz r28,17(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r27,16(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f29,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f29.f64 = double(temp.f32);
	// frsp f27,f11
	ctx.f27.f64 = double(float(ctx.f11.f64));
	// bl 0x82141160
	ctx.lr = 0x820FE82C;
	sub_82141160(ctx, base);
	// fadds f10,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 + ctx.f31.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmadds f2,f27,f28,f29
	ctx.f2.f64 = double(float(ctx.f27.f64 * ctx.f28.f64 + ctx.f29.f64));
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lfs f0,6004(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6004);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fmuls f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// bl 0x822c1ce8
	ctx.lr = 0x820FE868;
	sub_822C1CE8(ctx, base);
loc_820FE868:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de054
	ctx.lr = 0x820FE874;
	__restfpr_20(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FE0F8) {
	__imp__sub_820FE0F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FE878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820FE880;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,6220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6220);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820feae8
	if (ctx.cr6.eq) goto loc_820FEAE8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x820fe8fc
	if (ctx.cr6.eq) goto loc_820FE8FC;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r10,-29968(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29968);
	// lbz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820fe900
	if (ctx.cr6.eq) goto loc_820FE900;
loc_820FE8FC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_820FE900:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r8,r10,18524
	ctx.r8.u64 = ctx.r10.u64 | 18524;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// addis r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 65536;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// lwz r11,700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c00
	ctx.lr = 0x820FE958;
	sub_82332C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c28
	ctx.lr = 0x820FE964;
	sub_82332C28(ctx, base);
	// lwz r11,792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 792);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820feae8
	if (ctx.cr6.eq) goto loc_820FEAE8;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x820feae8
	if (ctx.cr6.eq) goto loc_820FEAE8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,704(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211fa80
	ctx.lr = 0x820FE998;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x820FE9A8;
	sub_8211F9E8(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820feae8
	if (!ctx.cr6.eq) goto loc_820FEAE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823334f8
	ctx.lr = 0x820FE9C0;
	sub_823334F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820feae8
	if (ctx.cr6.eq) goto loc_820FEAE8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29516
	ctx.r4.s64 = ctx.r11.s64 + -29516;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FE9E0;
	sub_822CADD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fea20
	if (!ctx.cr6.eq) goto loc_820FEA20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29532
	ctx.r4.s64 = ctx.r11.s64 + -29532;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FEA00;
	sub_822CADD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fea20
	if (!ctx.cr6.eq) goto loc_820FEA20;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29548
	ctx.r4.s64 = ctx.r11.s64 + -29548;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FEA20;
	sub_822CADD0(ctx, base);
loc_820FEA20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29572
	ctx.r3.s64 = ctx.r11.s64 + -29572;
	// bl 0x822c4080
	ctx.lr = 0x820FEA2C;
	sub_822C4080(ctx, base);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x822c5318
	ctx.lr = 0x820FEA34;
	sub_822C5318(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FEA48;
	sub_822C1BF8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadds f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820FEA70;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r30,17(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r26,16(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lfs f30,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fctiwz f8,f10
	ctx.f8.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fsubs f29,f9,f5
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// bl 0x82141160
	ctx.lr = 0x820FEAB0;
	sub_82141160(ctx, base);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r11,r6,-2072
	ctx.r11.s64 = ctx.r6.s64 + -2072;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FEAE8;
	sub_822C1CE8(ctx, base);
loc_820FEAE8:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
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

PPC_WEAK_FUNC(sub_820FE878) {
	__imp__sub_820FE878(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FEAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FEAFC) {
	__imp__sub_820FEAFC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FEB00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FEB08;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de024
	ctx.lr = 0x820FEB10;
	__savefpr_27(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,-29992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29992);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fed1c
	if (ctx.cr6.eq) goto loc_820FED1C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x820feb80
	if (ctx.cr6.eq) goto loc_820FEB80;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820feb84
	if (ctx.cr6.eq) goto loc_820FEB84;
loc_820FEB80:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FEB84:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820fed1c
	if (!ctx.cr6.eq) goto loc_820FED1C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r8,r11,18524
	ctx.r8.u64 = ctx.r11.u64 | 18524;
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820fed1c
	if (!ctx.cr6.eq) goto loc_820FED1C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820fed1c
	if (!ctx.cr6.eq) goto loc_820FED1C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,23408
	ctx.r9.u64 = ctx.r11.u64 | 23408;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x820febd8
	if (!ctx.cr6.eq) goto loc_820FEBD8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22380(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22380);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fed1c
	if (ctx.cr6.eq) goto loc_820FED1C;
loc_820FEBD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29480
	ctx.r4.s64 = ctx.r11.s64 + -29480;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FEBF0;
	sub_822CADD0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fec10
	if (!ctx.cr6.eq) goto loc_820FEC10;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r4,r11,-29488
	ctx.r4.s64 = ctx.r11.s64 + -29488;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cadd0
	ctx.lr = 0x820FEC10;
	sub_822CADD0(ctx, base);
loc_820FEC10:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29504
	ctx.r3.s64 = ctx.r11.s64 + -29504;
	// bl 0x822c4080
	ctx.lr = 0x820FEC1C;
	sub_822C4080(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822c5318
	ctx.lr = 0x820FEC24;
	sub_822C5318(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x820FEC38;
	sub_822C1BF8(ctx, base);
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f29,f13
	ctx.f29.f64 = double(float(ctx.f13.f64));
	// bl 0x822c1c70
	ctx.lr = 0x820FEC58;
	sub_822C1C70(ctx, base);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// lfs f12,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lfs f8,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// lfs f31,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r26,17(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fnmsubs f28,f11,f31,f8
	ctx.f28.f64 = double(float(-(ctx.f11.f64 * ctx.f31.f64 - ctx.f8.f64)));
	// lbz r25,16(r31)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmadds f27,f7,f31,f6
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f6.f64));
	// bl 0x82141160
	ctx.lr = 0x820FEC9C;
	sub_82141160(ctx, base);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// fmr f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f27.f64;
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// addi r24,r7,-2072
	ctx.r24.s64 = ctx.r7.s64 + -2072;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FECD4;
	sub_822C1CE8(ctx, base);
	// lis r6,-32181
	ctx.r6.s64 = -2109014016;
	// lfs f5,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r5,r6,-22896
	ctx.r5.s64 = ctx.r6.s64 + -22896;
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,888(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 888);
	// lfs f27,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// fnmsubs f31,f30,f31,f5
	ctx.f31.f64 = double(float(-(ctx.f30.f64 * ctx.f31.f64 - ctx.f5.f64)));
	// bl 0x82141160
	ctx.lr = 0x820FECF8;
	sub_82141160(ctx, base);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// fadds f1,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// li r9,2
	ctx.r9.s64 = 2;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// bl 0x822b7f70
	ctx.lr = 0x820FED1C;
	sub_822B7F70(ctx, base);
loc_820FED1C:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de070
	ctx.lr = 0x820FED28;
	__restfpr_27(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FEB00) {
	__imp__sub_820FEB00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FED2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FED2C) {
	__imp__sub_820FED2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FED30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FED30) {
	__imp__sub_820FED30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FED34) {
	__imp__sub_820FED34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FED38) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_820FED38) {
	__imp__sub_820FED38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FED40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820FED48;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x820FED50;
	__savefpr_27(ctx, base);
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r6,r10,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820fee6c
	if (ctx.cr6.eq) goto loc_820FEE6C;
	// rlwinm r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820fee6c
	if (!ctx.cr6.eq) goto loc_820FEE6C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// ori r8,r10,23288
	ctx.r8.u64 = ctx.r10.u64 | 23288;
	// addi r10,r9,-5696
	ctx.r10.s64 = ctx.r9.s64 + -5696;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// mulli r9,r7,404
	ctx.r9.s64 = ctx.r7.s64 * 404;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r6,208(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 208);
	// cmplwi cr6,r6,9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 9, ctx.xer);
	// bne cr6,0x820fee6c
	if (!ctx.cr6.eq) goto loc_820FEE6C;
	// lwz r9,220(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 220);
	// rlwinm r8,r9,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x820fee6c
	if (ctx.cr6.eq) goto loc_820FEE6C;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lfs f2,44(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// ori r8,r9,18320
	ctx.r8.u64 = ctx.r9.u64 | 18320;
	// lfsx f1,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x820FEDEC;
	sub_820D52C0(ctx, base);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lbz r27,17(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lfs f31,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lbz r26,16(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// addi r10,r5,6968
	ctx.r10.s64 = ctx.r5.s64 + 6968;
	// lfs f30,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,27472(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 27472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f28,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f12,7036(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 7036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,11328(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f27,f8,f12,f11
	ctx.f27.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f11.f64));
	// bl 0x82141160
	ctx.lr = 0x820FEE44;
	sub_82141160(ctx, base);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// fmr f5,f29
	ctx.f5.f64 = ctx.f29.f64;
	// bl 0x820ea2f0
	ctx.lr = 0x820FEE6C;
	sub_820EA2F0(ctx, base);
loc_820FEE6C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x820FEE78;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FED40) {
	__imp__sub_820FED40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FEE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FEE7C) {
	__imp__sub_820FEE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FEE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FEE88;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de024
	ctx.lr = 0x820FEE90;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,2
	ctx.r31.s64 = ctx.r3.s64 + 131072;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// addi r31,r31,18548
	ctx.r31.s64 = ctx.r31.s64 + 18548;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820fefc0
	if (ctx.cr6.eq) goto loc_820FEFC0;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,22912
	ctx.r29.s64 = ctx.r29.s64 + 22912;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820fefc0
	if (!ctx.cr6.lt) goto loc_820FEFC0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29452
	ctx.r3.s64 = ctx.r11.s64 + -29452;
	// bl 0x822e0220
	ctx.lr = 0x820FEEE8;
	sub_822E0220(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fefc0
	if (ctx.cr6.eq) goto loc_820FEFC0;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r11,22336(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22336);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x820fef40
	if (ctx.cr6.gt) goto loc_820FEF40;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
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
	// b 0x820fef48
	goto loc_820FEF48;
loc_820FEF40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
loc_820FEF48:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x820fef60
	if (!ctx.cr6.eq) goto loc_820FEF60;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_820FEF60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-29468
	ctx.r4.s64 = ctx.r11.s64 + -29468;
	// bl 0x822b7268
	ctx.lr = 0x820FEF70;
	sub_822B7268(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f28,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f27,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820FEF84;
	sub_82141160(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// fadds f1,f27,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// fadds f2,f28,f29
	ctx.f2.f64 = double(float(ctx.f28.f64 + ctx.f29.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// bl 0x822c9d98
	ctx.lr = 0x820FEFC0;
	sub_822C9D98(ctx, base);
loc_820FEFC0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de070
	ctx.lr = 0x820FEFCC;
	__restfpr_27(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FEE80) {
	__imp__sub_820FEE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FEFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820FEFD8;
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r6,r11,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820ff1d4
	if (ctx.cr6.eq) goto loc_820FF1D4;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ff1d4
	if (!ctx.cr6.eq) goto loc_820FF1D4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// ori r9,r11,23288
	ctx.r9.u64 = ctx.r11.u64 | 23288;
	// addi r11,r10,-5696
	ctx.r11.s64 = ctx.r10.s64 + -5696;
	// lwzx r8,r30,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// mulli r10,r8,404
	ctx.r10.s64 = ctx.r8.s64 * 404;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,208(r28)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r28.u32 + 208);
	// cmplwi cr6,r7,9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 9, ctx.xer);
	// bne cr6,0x820ff1d4
	if (!ctx.cr6.eq) goto loc_820FF1D4;
	// lwz r11,220(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 220);
	// rlwinm r10,r11,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820ff1d4
	if (ctx.cr6.eq) goto loc_820FF1D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,334(r28)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r28.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x820FF078;
	sub_82284650(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff1d4
	if (ctx.cr6.eq) goto loc_820FF1D4;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// addi r10,r11,-25976
	ctx.r10.s64 = ctx.r11.s64 + -25976;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r5,390(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 390);
	// bl 0x820ee078
	ctx.lr = 0x820FF0A0;
	sub_820EE078(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820ff1d4
	if (ctx.cr6.eq) goto loc_820FF1D4;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d7c78
	ctx.lr = 0x820FF0B4;
	sub_822D7C78(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// ori r10,r11,18320
	ctx.r10.u64 = ctx.r11.u64 | 18320;
	// lfsx f1,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820d52c0
	ctx.lr = 0x820FF0C8;
	sub_820D52C0(ctx, base);
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lfs f11,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// lfs f9,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// addi r5,r7,6968
	ctx.r5.s64 = ctx.r7.s64 + 6968;
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lwz r11,27472(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27472);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f0,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lbz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f12,7036(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 7036);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,11328(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11328);
	ctx.f13.f64 = double(temp.f32);
	// lfs f7,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f8,80(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmadds f4,f5,f12,f11
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f4,92(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820FF130;
	sub_82141160(ctx, base);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// bl 0x82140bc8
	ctx.lr = 0x820FF14C;
	sub_82140BC8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,8336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5880);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f0,2416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f13,f11
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f1,116(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fneg f13,f3
	ctx.f13.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f30,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f29.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f9,128(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82141160
	ctx.lr = 0x820FF1B8;
	sub_82141160(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x820ea3f0
	ctx.lr = 0x820FF1D4;
	sub_820EA3F0(ctx, base);
loc_820FF1D4:
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

PPC_WEAK_FUNC(sub_820FEFD0) {
	__imp__sub_820FEFD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x820FF1F0;
	__savegprlr_24(ctx, base);
	// stfd f29,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f29.u64);
	// stfd f30,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lis r9,-32187
	ctx.r9.s64 = -2109407232;
	// ori r8,r10,61924
	ctx.r8.u64 = ctx.r10.u64 | 61924;
	// lwz r11,21484(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21484);
	// addi r10,r9,-15680
	ctx.r10.s64 = ctx.r9.s64 + -15680;
	// mullw r9,r3,r8
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// addis r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 131072;
	// addis r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,18588
	ctx.r28.s64 = ctx.r28.s64 + 18588;
	// addi r27,r27,22912
	ctx.r27.s64 = ctx.r27.s64 + 22912;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ori r7,r7,18580
	ctx.r7.u64 = ctx.r7.u64 | 18580;
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x820ff270
	if (!ctx.cr6.lt) goto loc_820FF270;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
loc_820FF270:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22928
	ctx.r9.u64 = ctx.r10.u64 | 22928;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bge cr6,0x820ff46c
	if (!ctx.cr6.lt) goto loc_820FF46C;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bgt cr6,0x820ff46c
	if (ctx.cr6.gt) goto loc_820FF46C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820ff2c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF2C4;
	// bdzf 4*cr6+eq,0x820ff2fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF2FC;
	// bdzf 4*cr6+eq,0x820ff308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF308;
	// bdzf 4*cr6+eq,0x820ff314
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF314;
	// bdzf 4*cr6+eq,0x820ff348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF348;
	// bdzf 4*cr6+eq,0x820ff360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820FF360;
	// bne cr6,0x820ff354
	if (!ctx.cr6.eq) goto loc_820FF354;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = ctx.r11.s64 + 7600;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF2C4:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18584
	ctx.r9.u64 = ctx.r10.u64 | 18584;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82332b10
	ctx.lr = 0x820FF2D4;
	sub_82332B10(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r7,-29264
	ctx.r5.s64 = ctx.r7.s64 + -29264;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// bl 0x822e8368
	ctx.lr = 0x820FF2F0;
	sub_822E8368(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822c40d8
	ctx.lr = 0x820FF2F8;
	sub_822C40D8(ctx, base);
	// b 0x820ff36c
	goto loc_820FF36C;
loc_820FF2FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29284
	ctx.r3.s64 = ctx.r11.s64 + -29284;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF308:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29304
	ctx.r3.s64 = ctx.r11.s64 + -29304;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF314:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18584
	ctx.r9.u64 = ctx.r10.u64 | 18584;
	// lwzx r3,r11,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x823337d0
	ctx.lr = 0x820FF324;
	sub_823337D0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820ff33c
	if (ctx.cr6.eq) goto loc_820FF33C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29332
	ctx.r3.s64 = ctx.r11.s64 + -29332;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF33C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29352
	ctx.r3.s64 = ctx.r11.s64 + -29352;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF348:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29376
	ctx.r3.s64 = ctx.r11.s64 + -29376;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF354:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29412
	ctx.r3.s64 = ctx.r11.s64 + -29412;
	// b 0x820ff368
	goto loc_820FF368;
loc_820FF360:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-29436
	ctx.r3.s64 = ctx.r11.s64 + -29436;
loc_820FF368:
	// bl 0x822c4080
	ctx.lr = 0x820FF36C;
	sub_822C4080(ctx, base);
loc_820FF36C:
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,-15696(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -15696);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// divw r6,r8,r7
	ctx.r6.s32 = ctx.r8.s32 / ctx.r7.s32;
	// extsw r11,r7
	ctx.r11.s64 = ctx.r7.s32;
	// mullw r10,r6,r7
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f9,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f12.f64));
	// stfs f8,12(r25)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r25.u32 + 12, temp.u32);
	// bl 0x822c1bf8
	ctx.lr = 0x820FF3D4;
	sub_822C1BF8(ctx, base);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f7,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f0,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820FF3FC;
	sub_823DDE20(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r29,17(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f30,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f1,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fsubs f29,f2,f12
	ctx.f29.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// bl 0x82141160
	ctx.lr = 0x820FF43C;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bl 0x822c1ce8
	ctx.lr = 0x820FF46C;
	sub_822C1CE8(ctx, base);
loc_820FF46C:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
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

PPC_WEAK_FUNC(sub_820FF1E8) {
	__imp__sub_820FF1E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820FF488;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82117a88
	ctx.lr = 0x820FF4B0;
	sub_82117A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82111c50
	ctx.lr = 0x820FF4BC;
	sub_82111C50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820dcdc8
	ctx.lr = 0x820FF4C8;
	sub_820DCDC8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210b898
	ctx.lr = 0x820FF4D4;
	sub_8210B898(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82104eb0
	ctx.lr = 0x820FF4DC;
	sub_82104EB0(ctx, base);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20076
	ctx.r5.s64 = ctx.r5.s64 + 20076;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FF4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20080
	ctx.r5.s64 = ctx.r5.s64 + 20080;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FF514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20084
	ctx.r5.s64 = ctx.r5.s64 + 20084;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820FF530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20072
	ctx.r5.s64 = ctx.r5.s64 + 20072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20092
	ctx.r5.s64 = ctx.r5.s64 + 20092;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 131072;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,20088
	ctx.r5.s64 = ctx.r5.s64 + 20088;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820FF584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r5,-7356
	ctx.r5.s64 = ctx.r5.s64 + -7356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FF5A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7352
	ctx.r5.s64 = ctx.r5.s64 + -7352;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FF5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r5,-7348
	ctx.r5.s64 = ctx.r5.s64 + -7348;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820FF5D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r5,r5,-7340
	ctx.r5.s64 = ctx.r5.s64 + -7340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF5F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7332
	ctx.r5.s64 = ctx.r5.s64 + -7332;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7328
	ctx.r5.s64 = ctx.r5.s64 + -7328;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820FF62C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r5,r5,-7324
	ctx.r5.s64 = ctx.r5.s64 + -7324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FF648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,540
	ctx.r4.s64 = 540;
	// addi r5,r5,-6440
	ctx.r5.s64 = ctx.r5.s64 + -6440;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FF664;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,540
	ctx.r4.s64 = 540;
	// addi r5,r5,-5900
	ctx.r5.s64 = ctx.r5.s64 + -5900;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820FF680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,540
	ctx.r4.s64 = 540;
	// addi r5,r5,-5360
	ctx.r5.s64 = ctx.r5.s64 + -5360;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r5,r5,-4820
	ctx.r5.s64 = ctx.r5.s64 + -4820;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FF6B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r5,r5,-4760
	ctx.r5.s64 = ctx.r5.s64 + -4760;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820FF6D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r5,r5,-4356
	ctx.r5.s64 = ctx.r5.s64 + -4356;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FF6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,32(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r5,r5,-3712
	ctx.r5.s64 = ctx.r5.s64 + -3712;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FF70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// addi r5,r5,-3711
	ctx.r5.s64 = ctx.r5.s64 + -3711;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820FF728;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addis r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 196608;
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r5,r5,-3708
	ctx.r5.s64 = ctx.r5.s64 + -3708;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820FF744;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FF480) {
	__imp__sub_820FF480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FF74C) {
	__imp__sub_820FF74C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF750) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820ff794
	if (ctx.cr6.eq) goto loc_820FF794;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820ff798
	if (ctx.cr6.eq) goto loc_820FF798;
loc_820FF794:
	// li r11,0
	ctx.r11.s64 = 0;
loc_820FF798:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// beq cr6,0x820ff7c0
	if (ctx.cr6.eq) goto loc_820FF7C0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
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
loc_820FF7C0:
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x820ff7ec
	if (!ctx.cr6.eq) goto loc_820FF7EC;
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
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820FF7EC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r6,700
	ctx.r6.s64 = 700;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lwz r3,11308(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11308);
	// bl 0x820eabe0
	ctx.lr = 0x820FF804;
	sub_820EABE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ff824
	if (!ctx.cr6.eq) goto loc_820FF824;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
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
loc_820FF824:
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_820FF750) {
	__imp__sub_820FF750(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FF83C) {
	__imp__sub_820FF83C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x820FF848;
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23624
	ctx.r7.u64 = ctx.r8.u64 | 23624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r6,r30,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820ff890
	if (ctx.cr6.eq) goto loc_820FF890;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_820FF890:
	// lis r29,-32168
	ctx.r29.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,22340(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22340);
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
	ctx.lr = 0x820FF8B8;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,22340(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 22340);
	// ori r7,r8,20080
	ctx.r7.u64 = ctx.r8.u64 | 20080;
	// lwzx r5,r30,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820ff750
	ctx.lr = 0x820FF8E0;
	sub_820FF750(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FF840) {
	__imp__sub_820FF840(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF8E8) {
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23624
	ctx.r7.u64 = ctx.r8.u64 | 23624;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r5,r6,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x820ff924
	if (ctx.cr6.eq) goto loc_820FF924;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_820FF924:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// ori r8,r9,18636
	ctx.r8.u64 = ctx.r9.u64 | 18636;
	// li r6,1800
	ctx.r6.s64 = 1800;
	// lwz r4,22340(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 22340);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x820ff750
	sub_820FF750(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FF8E8) {
	__imp__sub_820FF8E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF940) {
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
	// lis r30,-32168
	ctx.r30.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,22356(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22356);
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
	ctx.lr = 0x820FF980;
	sub_823DDE20(ctx, base);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lwz r4,22356(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 22356);
	// addi r6,r8,-15680
	ctx.r6.s64 = ctx.r8.s64 + -15680;
	// ori r5,r7,61924
	ctx.r5.u64 = ctx.r7.u64 | 61924;
	// addis r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 131072;
	// mullw r10,r31,r5
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,20084
	ctx.r9.s64 = ctx.r11.s64 + 20084;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x820ff750
	ctx.lr = 0x820FF9BC;
	sub_820FF750(ctx, base);
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

PPC_WEAK_FUNC(sub_820FF940) {
	__imp__sub_820FF940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF9D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FF9D4) {
	__imp__sub_820FF9D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FF9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x820FF9E0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de024
	ctx.lr = 0x820FF9E8;
	__savefpr_27(ctx, base);
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
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwzx r11,r28,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// rlwinm r6,r11,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820ffa38
	if (ctx.cr6.eq) goto loc_820FFA38;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ffb18
	if (ctx.cr6.eq) goto loc_820FFB18;
loc_820FFA38:
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,22316(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22316);
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
	ctx.lr = 0x820FFA60;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,22316(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22316);
	// ori r7,r8,20088
	ctx.r7.u64 = ctx.r8.u64 | 20088;
	// lwzx r5,r28,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f9.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x820ff750
	ctx.lr = 0x820FFA88;
	sub_820FF750(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f31,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x820ffb18
	if (ctx.cr6.eq) goto loc_820FFB18;
	// lfs f0,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lbz r30,17(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lbz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x820FFADC;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// bl 0x82120408
	ctx.lr = 0x820FFB18;
	sub_82120408(ctx, base);
loc_820FFB18:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de070
	ctx.lr = 0x820FFB24;
	__restfpr_27(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FF9D8) {
	__imp__sub_820FF9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FFB28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FFB30;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de01c
	ctx.lr = 0x820FFB38;
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
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,23096
	ctx.r7.u64 = ctx.r8.u64 | 23096;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r27,r27,22924
	ctx.r27.s64 = ctx.r27.s64 + 22924;
	// rlwinm r6,r11,0,11,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x820ffb90
	if (ctx.cr6.eq) goto loc_820FFB90;
	// rlwinm r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820ffd10
	if (ctx.cr6.eq) goto loc_820FFD10;
loc_820FFB90:
	// lis r25,-32168
	ctx.r25.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r11,22316(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22316);
	// lfs f30,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f30.f64 = double(temp.f32);
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x820FFBB8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,22316(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 22316);
	// ori r7,r8,20088
	ctx.r7.u64 = ctx.r8.u64 | 20088;
	// lwzx r5,r31,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x820ff750
	ctx.lr = 0x820FFBE0;
	sub_820FF750(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x820ffd10
	if (ctx.cr6.eq) goto loc_820FFD10;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r10,r11,22912
	ctx.r10.u64 = ctx.r11.u64 | 22912;
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82322a20
	ctx.lr = 0x820FFC08;
	sub_82322A20(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,692(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 692);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// bl 0x82332af8
	ctx.lr = 0x820FFC1C;
	sub_82332AF8(ctx, base);
	// lis r7,-31834
	ctx.r7.s64 = -2086273024;
	// lfs f0,764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 764);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r11,-6420(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -6420);
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f10,f30
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f7.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fdivs f30,f9,f4
	ctx.f30.f64 = double(float(ctx.f9.f64 / ctx.f4.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x820ffd10
	if (!ctx.cr6.gt) goto loc_820FFD10;
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lfs f29,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f0,f30
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f27,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lfs f26,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// bne cr6,0x820ffc90
	if (!ctx.cr6.eq) goto loc_820FFC90;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r26,-22896(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22896);
loc_820FFC90:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fd0b0
	ctx.lr = 0x820FFCA0;
	sub_820FD0B0(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f25
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// lfs f11,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f10,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f12,156(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f11,148(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f10,152(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lbz r31,17(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lbz r29,16(r28)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820FFCD4;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lfs f8,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f8.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x820FFD10;
	sub_82120408(ctx, base);
loc_820FFD10:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de068
	ctx.lr = 0x820FFD1C;
	__restfpr_25(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FFB28) {
	__imp__sub_820FFB28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FFD20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FFD28;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de018
	ctx.lr = 0x820FFD30;
	__savefpr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,6248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6248);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fffd4
	if (ctx.cr6.eq) goto loc_820FFFD4;
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
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820fd920
	ctx.lr = 0x820FFD7C;
	sub_820FD920(ctx, base);
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,22392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22392);
	// lfs f0,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f28.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
	// bl 0x823dde20
	ctx.lr = 0x820FFDA8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r6,2
	ctx.r6.s64 = 131072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,22392(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22392);
	// ori r5,r6,20076
	ctx.r5.u64 = ctx.r6.u64 | 20076;
	// lwzx r5,r31,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f10.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x820ff750
	ctx.lr = 0x820FFDD0;
	sub_820FF750(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f30,5484(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// beq cr6,0x820fffd4
	if (ctx.cr6.eq) goto loc_820FFFD4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f1,12(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// lfs f29,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// fsel f12,f13,f29,f31
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f31.f64;
	// fsel f0,f0,f30,f12
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f12.f64;
	// ble cr6,0x820ffeb4
	if (!ctx.cr6.gt) goto loc_820FFEB4;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// lfs f28,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f13,f31
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f26,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// ble cr6,0x820ffe50
	if (!ctx.cr6.gt) goto loc_820FFE50;
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f8,0(r29)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,8(r29)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// b 0x820ffe70
	goto loc_820FFE70;
loc_820FFE50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6040(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6040);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,6032(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6032);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f10,f11,f12,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_820FFE70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r26,17(r30)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// lbz r25,16(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x820FFE80;
	sub_82141160(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// bl 0x82120408
	ctx.lr = 0x820FFEB4;
	sub_82120408(ctx, base);
loc_820FFEB4:
	// addis r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 131072;
	// addi r9,r9,18604
	ctx.r9.s64 = ctx.r9.s64 + 18604;
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x820fff44
	if (!ctx.cr6.lt) goto loc_820FFF44;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r11,r11,18596
	ctx.r11.s64 = ctx.r11.s64 + 18596;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820fff00
	if (ctx.cr6.eq) goto loc_820FFF00;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r7,r8,22908
	ctx.r7.u64 = ctx.r8.u64 | 22908;
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// subf. r5,r6,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// bge 0x820fff58
	if (!ctx.cr0.lt) goto loc_820FFF58;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fff58
	goto loc_820FFF58;
loc_820FFF00:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// ori r7,r10,22908
	ctx.r7.u64 = ctx.r10.u64 | 22908;
	// lfs f13,-29236(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29236);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r6,r31,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fnmsubs f9,f10,f13,f0
	ctx.f9.f64 = double(float(-(ctx.f10.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// bgt cr6,0x820fff58
	if (ctx.cr6.gt) goto loc_820FFF58;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x820fff54
	goto loc_820FFF54;
loc_820FFF44:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r11,18596
	ctx.r8.u64 = ctx.r11.u64 | 18596;
	// stwx r10,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r10.u32);
loc_820FFF54:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_820FFF58:
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x820fffd4
	if (!ctx.cr6.gt) goto loc_820FFFD4;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f28,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmadds f27,f13,f31,f11
	ctx.f27.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f11.f64));
	// lfs f26,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f26.f64 = double(temp.f32);
	// stfs f30,4(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stfs f30,8(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// stfs f29,0(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lbz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 16);
	// lfs f25,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// lbz r30,17(r30)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r30.u32 + 17);
	// fmuls f24,f12,f13
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bl 0x82141160
	ctx.lr = 0x820FFFA0;
	sub_82141160(ctx, base);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f7,f25
	ctx.f7.f64 = ctx.f25.f64;
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// bl 0x82120408
	ctx.lr = 0x820FFFD4;
	sub_82120408(ctx, base);
loc_820FFFD4:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de064
	ctx.lr = 0x820FFFE0;
	__restfpr_24(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FFD20) {
	__imp__sub_820FFD20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FFFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_820FFFE4) {
	__imp__sub_820FFFE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_820FFFE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x820FFFF0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de014
	ctx.lr = 0x820FFFF8;
	__savefpr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,6248(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6248);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82100278
	if (ctx.cr6.eq) goto loc_82100278;
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r9,61924
	ctx.r7.u64 = ctx.r9.u64 | 61924;
	// lwz r11,22392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22392);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// lfs f24,12240(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12240);
	ctx.f24.f64 = double(temp.f32);
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lfs f23,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f23.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// addi r11,r6,-15680
	ctx.r11.s64 = ctx.r6.s64 + -15680;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fadds f1,f13,f23
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// bl 0x823dde20
	ctx.lr = 0x82100060;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,22392(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 22392);
	// ori r11,r5,20076
	ctx.r11.u64 = ctx.r5.u64 | 20076;
	// lwzx r5,r30,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x820ff750
	ctx.lr = 0x82100088;
	sub_820FF750(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82100278
	if (ctx.cr6.eq) goto loc_82100278;
	// stfs f1,12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f28,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lbz r26,17(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lfs f27,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f27.f64 = double(temp.f32);
	// lbz r25,16(r29)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// lfs f26,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// lfs f25,12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f25.f64 = double(temp.f32);
	// bl 0x82141160
	ctx.lr = 0x821000C0;
	sub_82141160(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x821000FC;
	sub_82120408(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// bl 0x820fd920
	ctx.lr = 0x82100108;
	sub_820FD920(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x82100278
	if (ctx.cr6.eq) goto loc_82100278;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22324(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22324);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82100150
	if (!ctx.cr6.lt) goto loc_82100150;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22376(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22376);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fadds f1,f13,f23
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210013C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// b 0x8210018c
	goto loc_8210018C;
loc_82100150:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22348(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22348);
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82100278
	if (!ctx.cr6.lt) goto loc_82100278;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,22320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 22320);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// fadds f1,f13,f23
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f23.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210017C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8210018C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82100278
	if (ctx.cr6.eq) goto loc_82100278;
	// addis r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 65536;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// addi r7,r7,22912
	ctx.r7.s64 = ctx.r7.s64 + 22912;
	// addi r11,r11,18592
	ctx.r11.s64 = ctx.r11.s64 + 18592;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x821001c0
	if (ctx.cr6.gt) goto loc_821001C0;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821001c4
	if (!ctx.cr6.lt) goto loc_821001C4;
loc_821001C0:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821001C4:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfs f0,-29872(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29872);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f0,-29876(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// lfs f13,11804(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11804);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r10,r4,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f13
	ctx.f10.f64 = double(float(ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 / ctx.f10.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fcmpu cr6,f29,f8
	ctx.cr6.compare(ctx.f29.f64, ctx.f8.f64);
	// bge cr6,0x82100234
	if (!ctx.cr6.lt) goto loc_82100234;
	// stfs f29,12(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82100234:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r30,17(r29)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r29.u32 + 17);
	// lbz r29,16(r29)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + 16);
	// bl 0x82141160
	ctx.lr = 0x82100244;
	sub_82141160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// fmr f3,f26
	ctx.f3.f64 = ctx.f26.f64;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// fmr f4,f25
	ctx.f4.f64 = ctx.f25.f64;
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x82100278;
	sub_82120408(ctx, base);
loc_82100278:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de060
	ctx.lr = 0x82100284;
	__restfpr_23(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_820FFFE8) {
	__imp__sub_820FFFE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82100288) {
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
	ctx.lr = 0x821002A0;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r4,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r5,248(r1)
	PPC_STORE_U64(ctx.r1.u32 + 248, ctx.r5.u64);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// std r6,256(r1)
	PPC_STORE_U64(ctx.r1.u32 + 256, ctx.r6.u64);
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// fmr f26,f3
	ctx.f26.f64 = ctx.f3.f64;
	// fmr f25,f4
	ctx.f25.f64 = ctx.f4.f64;
	// fmr f30,f5
	ctx.f30.f64 = ctx.f5.f64;
	// fmr f29,f6
	ctx.f29.f64 = ctx.f6.f64;
	// fmr f31,f8
	ctx.f31.f64 = ctx.f8.f64;
	// bl 0x820e41a8
	ctx.lr = 0x821002D4;
	sub_820E41A8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82100e50
	if (ctx.cr6.eq) goto loc_82100E50;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r11,r31,r9
	ctx.r11.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x820f7dc8
	ctx.lr = 0x821002FC;
	sub_820F7DC8(ctx, base);
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r11,r8,-5
	ctx.r11.s64 = ctx.r8.s64 + -5;
	// lwz r10,688(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 688);
	// lwz r9,684(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 684);
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// cmplwi cr6,r11,193
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 193, ctx.xer);
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stb r7,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r7.u8);
	// stfs f25,108(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stb r6,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r6.u8);
	// bgt cr6,0x82100e50
	if (ctx.cr6.gt) goto loc_82100E50;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,844
	ctx.r12.s64 = ctx.r12.s64 + 844;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8210066C;
	case 1:
		goto loc_82100654;
	case 2:
		goto loc_82100E50;
	case 3:
		goto loc_82100E50;
	case 4:
		goto loc_82100E50;
	case 5:
		goto loc_82100E50;
	case 6:
		goto loc_82100E50;
	case 7:
		goto loc_82100E50;
	case 8:
		goto loc_82100E50;
	case 9:
		goto loc_82100E50;
	case 10:
		goto loc_82100E50;
	case 11:
		goto loc_82100E50;
	case 12:
		goto loc_82100E50;
	case 13:
		goto loc_82100E50;
	case 14:
		goto loc_82100E50;
	case 15:
		goto loc_82100708;
	case 16:
		goto loc_82100E50;
	case 17:
		goto loc_82100E50;
	case 18:
		goto loc_82100E50;
	case 19:
		goto loc_82100E50;
	case 20:
		goto loc_82100E50;
	case 21:
		goto loc_82100E50;
	case 22:
		goto loc_82100E50;
	case 23:
		goto loc_82100E50;
	case 24:
		goto loc_82100E50;
	case 25:
		goto loc_82100E50;
	case 26:
		goto loc_82100E50;
	case 27:
		goto loc_82100E50;
	case 28:
		goto loc_82100E50;
	case 29:
		goto loc_82100E50;
	case 30:
		goto loc_82100E50;
	case 31:
		goto loc_82100E50;
	case 32:
		goto loc_82100E50;
	case 33:
		goto loc_82100E50;
	case 34:
		goto loc_82100E50;
	case 35:
		goto loc_82100E50;
	case 36:
		goto loc_82100E50;
	case 37:
		goto loc_82100E50;
	case 38:
		goto loc_82100E50;
	case 39:
		goto loc_82100E50;
	case 40:
		goto loc_82100E50;
	case 41:
		goto loc_82100E50;
	case 42:
		goto loc_82100E50;
	case 43:
		goto loc_82100E50;
	case 44:
		goto loc_82100E50;
	case 45:
		goto loc_82100E50;
	case 46:
		goto loc_82100E50;
	case 47:
		goto loc_82100E50;
	case 48:
		goto loc_82100E50;
	case 49:
		goto loc_82100E50;
	case 50:
		goto loc_82100E50;
	case 51:
		goto loc_82100E50;
	case 52:
		goto loc_82100E50;
	case 53:
		goto loc_82100E50;
	case 54:
		goto loc_82100E50;
	case 55:
		goto loc_82100E50;
	case 56:
		goto loc_82100E50;
	case 57:
		goto loc_82100E50;
	case 58:
		goto loc_82100E50;
	case 59:
		goto loc_82100E50;
	case 60:
		goto loc_82100E50;
	case 61:
		goto loc_82100E50;
	case 62:
		goto loc_82100E50;
	case 63:
		goto loc_82100E50;
	case 64:
		goto loc_82100E50;
	case 65:
		goto loc_82100E50;
	case 66:
		goto loc_8210068C;
	case 67:
		goto loc_821006EC;
	case 68:
		goto loc_82100E50;
	case 69:
		goto loc_82100E50;
	case 70:
		goto loc_82100E50;
	case 71:
		goto loc_82100E50;
	case 72:
		goto loc_82100E50;
	case 73:
		goto loc_82100E50;
	case 74:
		goto loc_82100BB8;
	case 75:
		goto loc_821006D0;
	case 76:
		goto loc_82100728;
	case 77:
		goto loc_82100748;
	case 78:
		goto loc_82100768;
	case 79:
		goto loc_82100788;
	case 80:
		goto loc_82100E50;
	case 81:
		goto loc_82100E50;
	case 82:
		goto loc_82100E50;
	case 83:
		goto loc_82100E50;
	case 84:
		goto loc_82100E50;
	case 85:
		goto loc_82100D90;
	case 86:
		goto loc_82100E50;
	case 87:
		goto loc_82100E50;
	case 88:
		goto loc_82100E50;
	case 89:
		goto loc_82100E50;
	case 90:
		goto loc_82100C00;
	case 91:
		goto loc_82100C18;
	case 92:
		goto loc_821006A8;
	case 93:
		goto loc_82100BD0;
	case 94:
		goto loc_82100D10;
	case 95:
		goto loc_82100D30;
	case 96:
		goto loc_82100D00;
	case 97:
		goto loc_82100D50;
	case 98:
		goto loc_82100C30;
	case 99:
		goto loc_82100C74;
	case 100:
		goto loc_82100C9C;
	case 101:
		goto loc_82100C98;
	case 102:
		goto loc_82100CC0;
	case 103:
		goto loc_82100CBC;
	case 104:
		goto loc_82100C54;
	case 105:
		goto loc_82100CE0;
	case 106:
		goto loc_82100E50;
	case 107:
		goto loc_82100BE8;
	case 108:
		goto loc_82100D70;
	case 109:
		goto loc_821007A8;
	case 110:
		goto loc_821007C0;
	case 111:
		goto loc_82100A4C;
	case 112:
		goto loc_82100A64;
	case 113:
		goto loc_82100A94;
	case 114:
		goto loc_821009B8;
	case 115:
		goto loc_82100AA8;
	case 116:
		goto loc_82100A7C;
	case 117:
		goto loc_82100E50;
	case 118:
		goto loc_82100E50;
	case 119:
		goto loc_82100E50;
	case 120:
		goto loc_82100E50;
	case 121:
		goto loc_82100E50;
	case 122:
		goto loc_82100E50;
	case 123:
		goto loc_82100E50;
	case 124:
		goto loc_82100E50;
	case 125:
		goto loc_82100E50;
	case 126:
		goto loc_82100E50;
	case 127:
		goto loc_82100E50;
	case 128:
		goto loc_82100E50;
	case 129:
		goto loc_82100E50;
	case 130:
		goto loc_82100E50;
	case 131:
		goto loc_82100E50;
	case 132:
		goto loc_82100E50;
	case 133:
		goto loc_82100E50;
	case 134:
		goto loc_82100E50;
	case 135:
		goto loc_82100E50;
	case 136:
		goto loc_82100E50;
	case 137:
		goto loc_82100E50;
	case 138:
		goto loc_82100E50;
	case 139:
		goto loc_82100E50;
	case 140:
		goto loc_821008F0;
	case 141:
		goto loc_82100928;
	case 142:
		goto loc_82100E50;
	case 143:
		goto loc_82100E50;
	case 144:
		goto loc_82100E50;
	case 145:
		goto loc_82100998;
	case 146:
		goto loc_821007D8;
	case 147:
		goto loc_821008D0;
	case 148:
		goto loc_82100960;
	case 149:
		goto loc_82100E50;
	case 150:
		goto loc_82100980;
	case 151:
		goto loc_82100E50;
	case 152:
		goto loc_82100E50;
	case 153:
		goto loc_82100E50;
	case 154:
		goto loc_82100898;
	case 155:
		goto loc_821007F8;
	case 156:
		goto loc_82100820;
	case 157:
		goto loc_82100848;
	case 158:
		goto loc_82100870;
	case 159:
		goto loc_821009DC;
	case 160:
		goto loc_82100E50;
	case 161:
		goto loc_821008B8;
	case 162:
		goto loc_82100E50;
	case 163:
		goto loc_82100E50;
	case 164:
		goto loc_82100E50;
	case 165:
		goto loc_821009FC;
	case 166:
		goto loc_82100A14;
	case 167:
		goto loc_82100A14;
	case 168:
		goto loc_82100A14;
	case 169:
		goto loc_82100A14;
	case 170:
		goto loc_82100E50;
	case 171:
		goto loc_82100E50;
	case 172:
		goto loc_82100E50;
	case 173:
		goto loc_82100E50;
	case 174:
		goto loc_82100E50;
	case 175:
		goto loc_82100AD8;
	case 176:
		goto loc_82100AF8;
	case 177:
		goto loc_82100B38;
	case 178:
		goto loc_82100B78;
	case 179:
		goto loc_82100B58;
	case 180:
		goto loc_82100E50;
	case 181:
		goto loc_82100B18;
	case 182:
		goto loc_82100B98;
	case 183:
		goto loc_82100E50;
	case 184:
		goto loc_82100E50;
	case 185:
		goto loc_82100DB0;
	case 186:
		goto loc_82100DC4;
	case 187:
		goto loc_82100DDC;
	case 188:
		goto loc_82100E50;
	case 189:
		goto loc_82100E50;
	case 190:
		goto loc_82100E50;
	case 191:
		goto loc_82100E50;
	case 192:
		goto loc_82100DF4;
	case 193:
		goto loc_82100E24;
	default:
		return;
	}
	// lwz r16,1644(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1644);
	// lwz r16,1620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1620);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,1800(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1800);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,1676(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1676);
	// lwz r16,1772(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1772);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3000(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3000);
	// lwz r16,1744(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1744);
	// lwz r16,1832(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1832);
	// lwz r16,1864(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1864);
	// lwz r16,1896(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1896);
	// lwz r16,1928(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1928);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3472(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3472);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3072(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3072);
	// lwz r16,3096(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3096);
	// lwz r16,1704(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1704);
	// lwz r16,3024(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3024);
	// lwz r16,3344(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3344);
	// lwz r16,3376(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3376);
	// lwz r16,3328(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3328);
	// lwz r16,3408(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3408);
	// lwz r16,3120(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3120);
	// lwz r16,3188(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3188);
	// lwz r16,3228(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3228);
	// lwz r16,3224(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3224);
	// lwz r16,3264(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3264);
	// lwz r16,3260(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3260);
	// lwz r16,3156(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3156);
	// lwz r16,3296(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3296);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3048(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3048);
	// lwz r16,3440(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3440);
	// lwz r16,1960(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1960);
	// lwz r16,1984(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1984);
	// lwz r16,2636(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2636);
	// lwz r16,2660(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2660);
	// lwz r16,2708(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2708);
	// lwz r16,2488(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2488);
	// lwz r16,2728(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2728);
	// lwz r16,2684(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2684);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2288(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2288);
	// lwz r16,2344(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2344);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2456(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2456);
	// lwz r16,2008(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2008);
	// lwz r16,2256(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2256);
	// lwz r16,2400(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2400);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2432(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2432);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2200(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2200);
	// lwz r16,2040(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2040);
	// lwz r16,2080(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2080);
	// lwz r16,2120(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2120);
	// lwz r16,2160(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2160);
	// lwz r16,2524(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2524);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2232(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2232);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2556(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2556);
	// lwz r16,2580(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2580);
	// lwz r16,2580(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2580);
	// lwz r16,2580(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2580);
	// lwz r16,2580(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2580);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2776(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2776);
	// lwz r16,2808(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2808);
	// lwz r16,2872(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2872);
	// lwz r16,2936(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2936);
	// lwz r16,2904(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2904);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,2840(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2840);
	// lwz r16,2968(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 2968);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3504(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3504);
	// lwz r16,3524(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3524);
	// lwz r16,3548(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3548);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3664(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3664);
	// lwz r16,3572(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3572);
	// lwz r16,3620(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3620);
loc_82100654:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x820fc568
	ctx.lr = 0x82100668;
	sub_820FC568(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_8210066C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fc6a0
	ctx.lr = 0x82100688;
	sub_820FC6A0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_8210068C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fe878
	ctx.lr = 0x821006A4;
	sub_820FE878(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821006A8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fee80
	ctx.lr = 0x821006CC;
	sub_820FEE80(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821006D0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820feb00
	ctx.lr = 0x821006E8;
	sub_820FEB00(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821006EC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fe0f8
	ctx.lr = 0x82100704;
	sub_820FE0F8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100708:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,356(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fd780
	ctx.lr = 0x82100724;
	sub_820FD780(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100728:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fcf10
	ctx.lr = 0x82100744;
	sub_820FCF10(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100748:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fcfb0
	ctx.lr = 0x82100764;
	sub_820FCFB0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100768:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fcc00
	ctx.lr = 0x82100784;
	sub_820FCC00(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100788:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820fcd70
	ctx.lr = 0x821007A4;
	sub_820FCD70(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821007A8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820ffb28
	ctx.lr = 0x821007BC;
	sub_820FFB28(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821007C0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820ff9d8
	ctx.lr = 0x821007D4;
	sub_820FF9D8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821007D8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820de4c0
	ctx.lr = 0x821007F4;
	sub_820DE4C0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821007F8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x820de5a0
	ctx.lr = 0x8210081C;
	sub_820DE5A0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100820:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x820de860
	ctx.lr = 0x82100844;
	sub_820DE860(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100848:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x820deb08
	ctx.lr = 0x8210086C;
	sub_820DEB08(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100870:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,356(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x820ded80
	ctx.lr = 0x82100894;
	sub_820DED80(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100898:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df030
	ctx.lr = 0x821008B4;
	sub_820DF030(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821008B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820df2d0
	ctx.lr = 0x821008CC;
	sub_820DF2D0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821008D0:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e0d08
	ctx.lr = 0x821008EC;
	sub_820E0D08(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821008F0:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// bl 0x820e0358
	ctx.lr = 0x82100924;
	sub_820E0358(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100928:
	// lwz r11,388(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r10.u8);
	// bl 0x820e0358
	ctx.lr = 0x8210095C;
	sub_820E0358(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100960:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e1610
	ctx.lr = 0x8210097C;
	sub_820E1610(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100980:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350c88
	ctx.lr = 0x82100994;
	sub_82350C88(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100998:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df700
	ctx.lr = 0x821009B4;
	sub_820DF700(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821009B8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,388(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// bl 0x820db210
	ctx.lr = 0x821009D8;
	sub_820DB210(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821009DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e08e8
	ctx.lr = 0x821009F8;
	sub_820E08E8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_821009FC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x820db808
	ctx.lr = 0x82100A10;
	sub_820DB808(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100A14:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r7,r8,-171
	ctx.r7.s64 = ctx.r8.s64 + -171;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x820dba88
	ctx.lr = 0x82100A48;
	sub_820DBA88(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100A4C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x820dbf58
	ctx.lr = 0x82100A60;
	sub_820DBF58(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100A64:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc008
	ctx.lr = 0x82100A78;
	sub_820DC008(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100A7C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc008
	ctx.lr = 0x82100A90;
	sub_820DC008(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100A94:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820dc1d0
	ctx.lr = 0x82100AA4;
	sub_820DC1D0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100AA8:
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r7,388(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x820dc270
	ctx.lr = 0x82100AD4;
	sub_820DC270(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100AD8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820de4c0
	ctx.lr = 0x82100AF4;
	sub_820DE4C0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100AF8:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df030
	ctx.lr = 0x82100B14;
	sub_820DF030(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100B18:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df3c0
	ctx.lr = 0x82100B34;
	sub_820DF3C0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100B38:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e0d08
	ctx.lr = 0x82100B54;
	sub_820E0D08(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100B58:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820e1610
	ctx.lr = 0x82100B74;
	sub_820E1610(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100B78:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df700
	ctx.lr = 0x82100B94;
	sub_820DF700(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100B98:
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820df978
	ctx.lr = 0x82100BB4;
	sub_820DF978(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100BB8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820ffd20
	ctx.lr = 0x82100BCC;
	sub_820FFD20(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100BD0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820fffe8
	ctx.lr = 0x82100BE4;
	sub_820FFFE8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100BE8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820fda88
	ctx.lr = 0x82100BFC;
	sub_820FDA88(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C00:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820fed40
	ctx.lr = 0x82100C14;
	sub_820FED40(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C18:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,380(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// bl 0x820fefd0
	ctx.lr = 0x82100C2C;
	sub_820FEFD0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C30:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r9,1104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1104);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211ee80
	ctx.lr = 0x82100C50;
	sub_8211EE80(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C54:
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211f360
	ctx.lr = 0x82100C70;
	sub_8211F360(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C74:
	// lwz r9,1108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1108);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211ee80
	ctx.lr = 0x82100C94;
	sub_8211EE80(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100C98:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82100C9C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211f4d8
	ctx.lr = 0x82100CB8;
	sub_8211F4D8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100CBC:
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82100CC0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211f648
	ctx.lr = 0x82100CDC;
	sub_8211F648(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100CE0:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8211f360
	ctx.lr = 0x82100CFC;
	sub_8211F360(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x82105148
	ctx.lr = 0x82100D0C;
	sub_82105148(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D10:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821051e0
	ctx.lr = 0x82100D2C;
	sub_821051E0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D30:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82105490
	ctx.lr = 0x82100D4C;
	sub_82105490(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D50:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82105810
	ctx.lr = 0x82100D6C;
	sub_82105810(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D70:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820ff1e8
	ctx.lr = 0x82100D8C;
	sub_820FF1E8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100D90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820e2858
	ctx.lr = 0x82100DAC;
	sub_820E2858(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100DB0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210e938
	ctx.lr = 0x82100DC0;
	sub_8210E938(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100DC4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x8210dbe0
	ctx.lr = 0x82100DD8;
	sub_8210DBE0(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100DDC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,380(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,372(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// bl 0x8210dec8
	ctx.lr = 0x82100DF0;
	sub_8210DEC8(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100DF4:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8210eb60
	ctx.lr = 0x82100E20;
	sub_8210EB60(ctx, base);
	// b 0x82100e50
	goto loc_82100E50;
loc_82100E24:
	// lwz r11,396(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r6,372(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// lwz r5,356(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8210ec70
	ctx.lr = 0x82100E50;
	sub_8210EC70(ctx, base);
loc_82100E50:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de068
	ctx.lr = 0x82100E5C;
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

PPC_WEAK_FUNC(sub_82100288) {
	__imp__sub_82100288(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82100E70) {
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
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82100eb0
	if (ctx.cr6.eq) goto loc_82100EB0;
loc_82100E94:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
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
loc_82100EB0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,334(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 334);
	// bl 0x82284650
	ctx.lr = 0x82100EBC;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100e94
	if (ctx.cr6.eq) goto loc_82100E94;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820ebd30
	ctx.lr = 0x82100ECC;
	sub_820EBD30(ctx, base);
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

PPC_WEAK_FUNC(sub_82100E70) {
	__imp__sub_82100E70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82100EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82100EE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100ff0
	if (ctx.cr6.eq) goto loc_82100FF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,334(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 334);
	// addi r29,r30,208
	ctx.r29.s64 = ctx.r30.s64 + 208;
	// bl 0x82284650
	ctx.lr = 0x82100F10;
	sub_82284650(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x822f1d08
	ctx.lr = 0x82100F1C;
	sub_822F1D08(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r30,28
	ctx.r31.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// beq cr6,0x82100f50
	if (ctx.cr6.eq) goto loc_82100F50;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,13904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13904);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82100f70
	goto loc_82100F70;
loc_82100F50:
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82100f68
	if (ctx.cr6.eq) goto loc_82100F68;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82100f70
	goto loc_82100F70;
loc_82100F68:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,6044(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6044);
	ctx.f13.f64 = double(temp.f32);
loc_82100F70:
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rlwinm r9,r11,0,22,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F0;
	// lhz r5,126(r29)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r9,0,24,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// ori r6,r9,260
	ctx.r6.u64 = ctx.r9.u64 | 260;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82386568
	ctx.lr = 0x82100FA0;
	sub_82386568(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x822daa18
	ctx.lr = 0x82100FC4;
	sub_822DAA18(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,12168(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x82118d78
	ctx.lr = 0x82100FE8;
	sub_82118D78(ctx, base);
	// lhz r3,126(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 126);
	// bl 0x820e1410
	ctx.lr = 0x82100FF0;
	sub_820E1410(ctx, base);
loc_82100FF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82100EE0) {
	__imp__sub_82100EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82100FF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82101000;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// addi r27,r11,6968
	ctx.r27.s64 = ctx.r11.s64 + 6968;
	// addi r28,r10,-5696
	ctx.r28.s64 = ctx.r10.s64 + -5696;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,11336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11336, ctx.r11.u32);
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
loc_8210102C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d81a8
	ctx.lr = 0x82101034;
	sub_820D81A8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82101070
	if (ctx.cr6.eq) goto loc_82101070;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101070
	if (ctx.cr6.eq) goto loc_82101070;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82100ee0
	ctx.lr = 0x82101058;
	sub_82100EE0(ctx, base);
	// lwz r11,-30096(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30096);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82101070
	if (ctx.cr6.eq) goto loc_82101070;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f1658
	ctx.lr = 0x82101070;
	sub_820F1658(ctx, base);
loc_82101070:
	// addi r31,r31,404
	ctx.r31.s64 = ctx.r31.s64 + 404;
	// addi r11,r28,808
	ctx.r11.s64 = ctx.r28.s64 + 808;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210102c
	if (ctx.cr6.lt) goto loc_8210102C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11336(r27)
	PPC_STORE_U32(ctx.r27.u32 + 11336, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82100FF8) {
	__imp__sub_82100FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82101094) {
	__imp__sub_82101094(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101098) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821010A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-5696
	ctx.r29.s64 = ctx.r11.s64 + -5696;
	// addi r31,r29,334
	ctx.r31.s64 = ctx.r29.s64 + 334;
loc_821010B4:
	// lwz r11,46(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 46);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82101100
	if (ctx.cr6.eq) goto loc_82101100;
	// lwz r11,-114(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -114);
	// rlwinm r10,r11,0,26,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821010dc
	if (ctx.cr6.eq) goto loc_821010DC;
	// stw r30,-282(r31)
	PPC_STORE_U32(ctx.r31.u32 + -282, ctx.r30.u32);
	// b 0x82101100
	goto loc_82101100;
loc_821010DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// bl 0x82284650
	ctx.lr = 0x821010E8;
	sub_82284650(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821010f8
	if (!ctx.cr6.eq) goto loc_821010F8;
	// stw r30,-282(r31)
	PPC_STORE_U32(ctx.r31.u32 + -282, ctx.r30.u32);
	// b 0x82101100
	goto loc_82101100;
loc_821010F8:
	// addi r4,r31,-334
	ctx.r4.s64 = ctx.r31.s64 + -334;
	// bl 0x820ebd30
	ctx.lr = 0x82101100;
	sub_820EBD30(ctx, base);
loc_82101100:
	// addi r31,r31,404
	ctx.r31.s64 = ctx.r31.s64 + 404;
	// addi r11,r29,1142
	ctx.r11.s64 = ctx.r29.s64 + 1142;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821010b4
	if (ctx.cr6.lt) goto loc_821010B4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101098) {
	__imp__sub_82101098(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101118) {
	PPC_FUNC_PROLOGUE();
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,58180
	ctx.r11.u64 = ctx.r11.u64 | 58180;
	// stbx r10,r3,r11
	PPC_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101118) {
	__imp__sub_82101118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210112C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210112C) {
	__imp__sub_8210112C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,58180
	ctx.r8.u64 = ctx.r11.u64 | 58180;
	// ori r7,r10,58184
	ctx.r7.u64 = ctx.r10.u64 | 58184;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stbx r6,r3,r8
	PPC_STORE_U8(ctx.r3.u32 + ctx.r8.u32, ctx.r6.u8);
	// stfsx f0,r3,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101130) {
	__imp__sub_82101130(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// ori r7,r11,61924
	ctx.r7.u64 = ctx.r11.u64 | 61924;
	// addi r11,r8,-15680
	ctx.r11.s64 = ctx.r8.s64 + -15680;
	// mullw r10,r3,r7
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r5,r6,22908
	ctx.r5.u64 = ctx.r6.u64 | 22908;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// rlwinm r8,r9,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwzx r7,r11,r5
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// ori r9,r10,58180
	ctx.r9.u64 = ctx.r10.u64 | 58180;
	// lfs f0,5804(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5804);
	ctx.f0.f64 = double(temp.f32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f11,f0
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// beq cr6,0x821011bc
	if (ctx.cr6.eq) goto loc_821011BC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_821011BC:
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,16(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm r8,r9,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8210123c
	if (ctx.cr6.eq) goto loc_8210123C;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,-22904(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22904);
	// lfs f0,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82101224
	if (!ctx.cr6.gt) goto loc_82101224;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-7352
	ctx.r11.s64 = ctx.r11.s64 + -7352;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
loc_82101224:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r10,58184
	ctx.r8.u64 = ctx.r10.u64 | 58184;
	// lfs f0,12168(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, temp.u32);
	// blr 
	return;
loc_8210123C:
	// lis r9,-32188
	ctx.r9.s64 = -2109472768;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r9,-1228(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -1228);
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82101284
	if (!ctx.cr6.gt) goto loc_82101284;
	// addis r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 196608;
	// addi r11,r11,-7352
	ctx.r11.s64 = ctx.r11.s64 + -7352;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f10,f13,f12,f11
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f12.f64 - ctx.f11.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blr 
	return;
loc_82101284:
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r9,58184
	ctx.r7.u64 = ctx.r9.u64 | 58184;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// stfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101158) {
	__imp__sub_82101158(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210129C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210129C) {
	__imp__sub_8210129C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821012A0) {
	PPC_FUNC_PROLOGUE();
	// li r9,11
	ctx.r9.s64 = 11;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r6,r11,19060
	ctx.r6.u64 = ctx.r11.u64 | 19060;
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addis r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 131072;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,68
	ctx.r10.s64 = 68;
	// addi r9,r9,19128
	ctx.r9.s64 = ctx.r9.s64 + 19128;
	// add r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 + ctx.r3.u64;
loc_821012CC:
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x821012e4
	if (!ctx.cr6.lt) goto loc_821012E4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_821012E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// addi r9,r9,68
	ctx.r9.s64 = ctx.r9.s64 + 68;
	// add r7,r8,r3
	ctx.r7.u64 = ctx.r8.u64 + ctx.r3.u64;
	// bdnz 0x821012cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821012CC;
	// mulli r11,r5,68
	ctx.r11.s64 = ctx.r5.s64 * 68;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 + ctx.r6.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821012A0) {
	__imp__sub_821012A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82101310;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de028
	ctx.lr = 0x82101318;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r6
	ctx.r11.s64 = ctx.r6.s32;
	// lis r10,-31834
	ctx.r10.s64 = -2086273024;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-31834
	ctx.r9.s64 = -2086273024;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r11,-6564(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -6564);
	// lis r8,-31834
	ctx.r8.s64 = -2086273024;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-6672(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -6672);
	// lwz r10,-6372(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -6372);
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// ori r3,r7,61924
	ctx.r3.u64 = ctx.r7.u64 | 61924;
	// mullw r9,r28,r3
	ctx.r9.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r3.s32);
	// fmuls f0,f11,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r6,-15680
	ctx.r11.s64 = ctx.r6.s64 + -15680;
	// lfs f31,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bge cr6,0x82101388
	if (!ctx.cr6.lt) goto loc_82101388;
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// b 0x82101394
	goto loc_82101394;
loc_82101388:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82101394
	if (ctx.cr6.gt) goto loc_82101394;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82101394:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// bne cr6,0x821013cc
	if (!ctx.cr6.eq) goto loc_821013CC;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// bne cr6,0x821013cc
	if (!ctx.cr6.eq) goto loc_821013CC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,19908
	ctx.r8.u64 = ctx.r11.u64 | 19908;
	// ori r7,r10,19904
	ctx.r7.u64 = ctx.r10.u64 | 19904;
	// lfs f0,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r30,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, temp.u32);
	// stfsx f13,r30,r7
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r7.u32, temp.u32);
	// b 0x82101568
	goto loc_82101568;
loc_821013CC:
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
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
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f0,-29232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -29232);
	ctx.f0.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f30,f10,f0
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f30,100(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x822da518
	ctx.lr = 0x8210142C;
	sub_822DA518(ctx, base);
	// addis r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 131072;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addis r27,r30,2
	ctx.r27.s64 = ctx.r30.s64 + 131072;
	// addi r7,r7,2140
	ctx.r7.s64 = ctx.r7.s64 + 2140;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r27,2128
	ctx.r27.s64 = ctx.r27.s64 + 2128;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addis r31,r30,2
	ctx.r31.s64 = ctx.r30.s64 + 131072;
	// addis r26,r30,2
	ctx.r26.s64 = ctx.r30.s64 + 131072;
	// addi r31,r31,19908
	ctx.r31.s64 = ctx.r31.s64 + 19908;
	// lfs f7,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// addi r26,r26,19904
	ctx.r26.s64 = ctx.r26.s64 + 19904;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r25,-31834
	ctx.r25.s64 = -2086273024;
	// lfs f1,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,-6376(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -6376);
	// fmadds f11,f4,f13,f6
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fmadds f10,f2,f13,f3
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfs f0,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f29,f1,f12,f11
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fmadds f28,f0,f12,f10
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmuls f9,f29,f31
	ctx.f9.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f8,f28,f31
	ctx.f8.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// stfs f8,0(r26)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f6,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmr f2,f6
	ctx.f2.f64 = ctx.f6.f64;
	// fneg f1,f6
	ctx.f1.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// bl 0x822d9488
	ctx.lr = 0x821014B4;
	sub_822D9488(ctx, base);
	// fmuls f5,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// lfs f4,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,-6376(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -6376);
	// fmadds f3,f5,f31,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f4.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// bl 0x822d9488
	ctx.lr = 0x821014D8;
	sub_822D9488(ctx, base);
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// lfs f13,0(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmadds f12,f0,f31,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f13.f64));
	// stfs f12,0(r26)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// bl 0x821012a0
	ctx.lr = 0x821014F0;
	sub_821012A0(ctx, base);
	// lwz r6,28(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lwz r11,-29960(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -29960);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bl 0x822d3ea0
	ctx.lr = 0x82101514;
	sub_822D3EA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,5996(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5996);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f11,f0,f30
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f30.f64));
	// bl 0x822d77c0
	ctx.lr = 0x82101530;
	sub_822D77C0(ctx, base);
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,16(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// bl 0x822d7a78
	ctx.lr = 0x8210155C;
	sub_822D7A78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822d4ed0
	ctx.lr = 0x82101564;
	sub_822D4ED0(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_82101568:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ori r8,r10,19876
	ctx.r8.u64 = ctx.r10.u64 | 19876;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// ori r8,r10,19900
	ctx.r8.u64 = ctx.r10.u64 | 19900;
	// lwzx r11,r30,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// addi r7,r11,500
	ctx.r7.s64 = ctx.r11.s64 + 500;
	// bne cr6,0x821015a4
	if (!ctx.cr6.eq) goto loc_821015A4;
	// ori r8,r10,19896
	ctx.r8.u64 = ctx.r10.u64 | 19896;
loc_821015A4:
	// stwx r7,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r7.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82106d88
	ctx.lr = 0x821015B4;
	sub_82106D88(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x823de074
	ctx.lr = 0x821015C0;
	__restfpr_28(ctx, base);
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101308) {
	__imp__sub_82101308(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821015C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821015C4) {
	__imp__sub_821015C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821015C8) {
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
	// lis r8,2
	ctx.r8.s64 = 131072;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// ori r7,r8,2084
	ctx.r7.u64 = ctx.r8.u64 | 2084;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r6,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x820e4220
	ctx.lr = 0x82101610;
	sub_820E4220(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820dcdf0
	ctx.lr = 0x82101618;
	sub_820DCDF0(ctx, base);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ori r10,r5,18468
	ctx.r10.u64 = ctx.r5.u64 | 18468;
	// ori r9,r4,2088
	ctx.r9.u64 = ctx.r4.u64 | 2088;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,6912(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
	// stwx r8,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// stfsx f0,r31,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, temp.u32);
	// bl 0x82118578
	ctx.lr = 0x82101644;
	sub_82118578(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fdbe0
	ctx.lr = 0x8210164C;
	sub_820FDBE0(ctx, base);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// ori r4,r7,58180
	ctx.r4.u64 = ctx.r7.u64 | 58180;
	// ori r11,r6,58184
	ctx.r11.u64 = ctx.r6.u64 | 58184;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5484(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stbx r10,r31,r4
	PPC_STORE_U8(ctx.r31.u32 + ctx.r4.u32, ctx.r10.u8);
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// bl 0x820f9b38
	ctx.lr = 0x82101678;
	sub_820F9B38(ctx, base);
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

PPC_WEAK_FUNC(sub_821015C8) {
	__imp__sub_821015C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101690) {
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
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
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
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x82120788
	ctx.lr = 0x821016B8;
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

PPC_WEAK_FUNC(sub_82101690) {
	__imp__sub_82101690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821016C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821016D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// lwz r11,176(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r7,r10,-15680
	ctx.r7.s64 = ctx.r10.s64 + -15680;
	// ori r6,r9,61924
	ctx.r6.u64 = ctx.r9.u64 | 61924;
	// addis r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 131072;
	// mullw r9,r3,r6
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// addi r10,r10,1584
	ctx.r10.s64 = ctx.r10.s64 + 1584;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82101788
	if (!ctx.cr6.lt) goto loc_82101788;
	// subf r28,r8,r30
	ctx.r28.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r26,r30,r8
	ctx.r26.s64 = ctx.r8.s64 - ctx.r30.s64;
loc_8210171C:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r10,r11,45
	ctx.r10.s64 = ctx.r11.s64 + 45;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// bge cr6,0x82101750
	if (!ctx.cr6.lt) goto loc_82101750;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// bge cr6,0x82101770
	if (!ctx.cr6.lt) goto loc_82101770;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r25
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r25.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82101770
	if (ctx.cr6.eq) goto loc_82101770;
loc_82101750:
	// addi r11,r11,49
	ctx.r11.s64 = ctx.r11.s64 + 49;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stw r9,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r9.u32);
	// bl 0x820ef1d0
	ctx.lr = 0x82101770;
	sub_820EF1D0(ctx, base);
loc_82101770:
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8210171c
	if (ctx.cr6.lt) goto loc_8210171C;
loc_82101788:
	// lwz r30,28(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821017d8
	if (!ctx.cr6.lt) goto loc_821017D8;
loc_82101798:
	// clrlwi r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r11,r8,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r5,r7,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// stw r11,216(r29)
	PPC_STORE_U32(ctx.r29.u32 + 216, ctx.r11.u32);
	// bl 0x820ef1d0
	ctx.lr = 0x821017C8;
	sub_820EF1D0(ctx, base);
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82101798
	if (ctx.cr6.lt) goto loc_82101798;
loc_821017D8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821016C8) {
	__imp__sub_821016C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821017E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821017E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 312);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82101828
	if (ctx.cr6.eq) goto loc_82101828;
	// lwz r6,324(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 324);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82101828
	if (ctx.cr6.eq) goto loc_82101828;
	// lwz r11,328(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	// lwz r5,320(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 320);
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// lwz r4,316(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 316);
	// bl 0x82101308
	ctx.lr = 0x82101828;
	sub_82101308(ctx, base);
loc_82101828:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821016c8
	ctx.lr = 0x82101838;
	sub_821016C8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82101158
	ctx.lr = 0x82101844;
	sub_82101158(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821017E0) {
	__imp__sub_821017E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210184C) {
	__imp__sub_8210184C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101850) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101850) {
	__imp__sub_82101850(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101888) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,176(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,180(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r6,184(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 184);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r5,188(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 188);
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// lwz r11,192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// lwz r9,224(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r8,228(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// lwz r7,232(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// lwz r6,236(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101888) {
	__imp__sub_82101888(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821018F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821018F4) {
	__imp__sub_821018F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821018F8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821018F8) {
	__imp__sub_821018F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101900) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101900) {
	__imp__sub_82101900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82101910;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8210192C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lbzx r5,r27,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f2558
	ctx.lr = 0x82101940;
	sub_822F2558(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8210192c
	if (ctx.cr6.lt) goto loc_8210192C;
	// addi r7,r26,48
	ctx.r7.s64 = ctx.r26.s64 + 48;
	// addi r6,r26,60
	ctx.r6.s64 = ctx.r26.s64 + 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101968;
	sub_822F25A8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101908) {
	__imp__sub_82101908(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82101908
	sub_82101908(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101970) {
	__imp__sub_82101970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82101984) {
	__imp__sub_82101984(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82101990;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de020
	ctx.lr = 0x82101998;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f28,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x82101a28
	if (ctx.cr6.eq) goto loc_82101A28;
	// lwz r30,52(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lfs f0,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f31,2420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f27,f12,f31
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fadds f1,f27,f30
	ctx.f1.f64 = double(float(ctx.f27.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821019E8;
	sub_823DDE20(ctx, base);
	// lfs f11,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f1
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fsubs f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// lfs f29,2412(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f7,f27,f10
	ctx.f7.f64 = double(float(ctx.f27.f64 - ctx.f10.f64));
	// fmuls f26,f8,f31
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f27,f7,f29
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f29.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82101A14;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f0,f5,f29
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// b 0x82101a3c
	goto loc_82101A3C;
loc_82101A28:
	// lfs f13,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fmr f31,f13
	ctx.f31.f64 = ctx.f13.f64;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f27,f12,f13
	ctx.f27.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
loc_82101A3C:
	// lbz r5,67(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 67);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f28,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,88(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r30,r11,-5928
	ctx.r30.s64 = ctx.r11.s64 + -5928;
	// beq cr6,0x82101a74
	if (ctx.cr6.eq) goto loc_82101A74;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101A70;
	sub_822F25A8(ctx, base);
	// stfs f28,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82101A74:
	// stfs f27,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,65(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 65);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101A90;
	sub_822F25A8(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,66(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 66);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101AA8;
	sub_822F25A8(ctx, base);
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r5,68(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101AC8;
	sub_822F25A8(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f28,80(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r5,69(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// bl 0x822f25a8
	ctx.lr = 0x82101AF0;
	sub_822F25A8(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de06c
	ctx.lr = 0x82101AFC;
	__restfpr_26(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101988) {
	__imp__sub_82101988(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x82101B08;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de028
	ctx.lr = 0x82101B10;
	__savefpr_28(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823df5ec
	ctx.lr = 0x82101B18;
	__savevmx_119(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r6,54(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 54);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// lhz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// lhz r11,58(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 58);
	// extsh r7,r6
	ctx.r7.s64 = ctx.r6.s16;
	// lhz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lfs f0,-29228(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29228);
	ctx.f0.f64 = double(temp.f32);
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f9,104(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f12
	ctx.f4.f64 = double(ctx.f12.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f31,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// stfs f31,128(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// stfs f31,136(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f31,152(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r29,r11,-5928
	ctx.r29.s64 = ctx.r11.s64 + -5928;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 92);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// frsp f2,f7
	ctx.f2.f64 = double(float(ctx.f7.f64));
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// frsp f13,f5
	ctx.f13.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f7,92(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f11,f3,f0
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fmuls f10,f2,f0
	ctx.f10.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f9,112(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f8,f13,f0
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f8,132(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x822f25a8
	ctx.lr = 0x82101C18;
	sub_822F25A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r5,93(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// bl 0x822f25a8
	ctx.lr = 0x82101C30;
	sub_822F25A8(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lbz r5,94(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 94);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f25a8
	ctx.lr = 0x82101C48;
	sub_822F25A8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lfs f29,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f29.f64 = double(temp.f32);
	// bl 0x822da650
	ctx.lr = 0x82101C58;
	sub_822DA650(ctx, base);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v124,r0,r9
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r9.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,16
	ctx.r27.s64 = 16;
	// lfs f6,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// lfs f5,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// lfs f4,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// vupkd3d128 v60,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v60 = vTemp;
	// lvx128 v62,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stfs f6,212(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// stfs f5,216(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// vsldoi128 v127,v124,v62,12
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 4));
	// stfs f4,220(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// addi r3,r4,-5808
	ctx.r3.s64 = ctx.r4.s64 + -5808;
	// lvrx128 v58,r27,r6
	temp.u32 = ctx.r27.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// lvrx128 v57,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lis r11,-31852
	ctx.r11.s64 = -2087452672;
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v124,v60,1,3
	simde_mm_store_ps(ctx.v124.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v124.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 1));
	// lvx128 v61,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v126,v62,v61,8
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 8));
	// vrlimi128 v127,v60,1,3
	simde_mm_store_ps(ctx.v127.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v127.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 1));
	// addi r28,r11,-30336
	ctx.r28.s64 = ctx.r11.s64 + -30336;
	// vrlimi128 v126,v60,1,3
	simde_mm_store_ps(ctx.v126.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 57), 1));
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v123,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vor128 v53,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// li r4,0
	ctx.r4.s64 = 0;
	// vmrghw128 v55,v127,v63
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// vor128 v52,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vmrglw128 v54,v127,v63
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), simde_mm_load_si128((simde__m128i*)ctx.v127.u32)));
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghw128 v51,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmrglw128 v50,v124,v126
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v126.u32), simde_mm_load_si128((simde__m128i*)ctx.v124.u32)));
	// vrlimi128 v123,v61,14,1
	simde_mm_store_ps(ctx.v123.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v123.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v61.f32), 147), 14));
	// vand128 v122,v53,v63
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vand128 v125,v52,v63
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vmrghw128 v121,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v121.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrglw128 v120,v51,v55
	simde_mm_store_si128((simde__m128i*)ctx.v120.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v55.u32), simde_mm_load_si128((simde__m128i*)ctx.v51.u32)));
	// vmrghw128 v119,v50,v54
	simde_mm_store_si128((simde__m128i*)ctx.v119.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), simde_mm_load_si128((simde__m128i*)ctx.v50.u32)));
	// bl 0x822f1eb8
	ctx.lr = 0x82101D20;
	sub_822F1EB8(ctx, base);
	// bl 0x82300b40
	ctx.lr = 0x82101D24;
	sub_82300B40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// lfs f30,3844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3844);
	ctx.f30.f64 = double(temp.f32);
	// addi r22,r31,80
	ctx.r22.s64 = ctx.r31.s64 + 80;
	// lfs f28,-29224(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -29224);
	ctx.f28.f64 = double(temp.f32);
	// addi r23,r11,3844
	ctx.r23.s64 = ctx.r11.s64 + 3844;
loc_82101D48:
	// lbzx r31,r22,r25
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r22.u32 + ctx.r25.u32);
	// cmplwi cr6,r31,254
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 254, ctx.xer);
	// bge cr6,0x82101e54
	if (!ctx.cr6.lt) goto loc_82101E54;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1df8
	ctx.lr = 0x82101D64;
	sub_822F1DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82101e54
	if (ctx.cr6.eq) goto loc_82101E54;
	// lhz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// fadds f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f30.f64));
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lvx128 v63,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fsubs f13,f30,f29
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f29.f64));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lvlx128 v49,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v47,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// vand128 v46,v47,v63
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// fmuls f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// vspltw128 v0,v46,2
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0x55));
	// vspltw128 v13,v46,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xAA));
	// vspltw128 v12,v46,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v46.u32), 0xFF));
	// vmaddcfp128 v0,v126,v0,v123
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v126.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v123.f32)));
	// fmuls f7,f8,f28
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64));
	// vmaddfp128 v0,v13,v127,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v127.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fsubs f6,f7,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// vmaddfp128 v0,v12,v124,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v124.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fsel f5,f6,f7,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f7.f64 : ctx.f13.f64;
	// fneg f4,f5
	ctx.f4.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f4,80(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx128 v44,r0,r23
	temp.u32 = ctx.r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v44,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v44.u32), 0xFF));
	// vmaddfp128 v0,v13,v125,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v125.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// lvlx128 v45,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v13,v45,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v45.u32), 0xFF));
	// vmaddfp128 v0,v13,v125,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v125.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v43,v0,v122
	simde_mm_store_ps(ctx.v43.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v122.f32)));
	// vspltw128 v42,v43,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0x55));
	// vspltw128 v0,v43,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xAA));
	// vspltw128 v12,v43,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v43.u32), 0xFF));
	// vmulfp128 v13,v42,v119
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_load_ps(ctx.v119.f32)));
	// vmaddcfp128 v0,v120,v0,v13
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v120.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v12,v121,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v121.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vsubfp128 v41,v0,v46
	simde_mm_store_ps(ctx.v41.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v46.f32)));
	// stvx128 v41,r0,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// beq cr6,0x82101e40
	if (ctx.cr6.eq) goto loc_82101E40;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82101e38
	if (ctx.cr6.eq) goto loc_82101E38;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// bne cr6,0x82101e40
	if (!ctx.cr6.eq) goto loc_82101E40;
loc_82101E38:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// b 0x82101e44
	goto loc_82101E44;
loc_82101E40:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82101E44:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f24b8
	ctx.lr = 0x82101E54;
	sub_822F24B8(ctx, base);
loc_82101E54:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// blt cr6,0x82101d48
	if (ctx.cr6.lt) goto loc_82101D48;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823df884
	ctx.lr = 0x82101E70;
	__restvmx_119(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de074
	ctx.lr = 0x82101E78;
	__restfpr_28(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101B00) {
	__imp__sub_82101B00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82101E7C) {
	__imp__sub_82101E7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101E80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82101E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82101f34
	if (ctx.cr6.eq) goto loc_82101F34;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822f19e8
	ctx.lr = 0x82101EAC;
	sub_822F19E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101f34
	if (ctx.cr6.eq) goto loc_82101F34;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f1df8
	ctx.lr = 0x82101EC8;
	sub_822F1DF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82101f34
	if (ctx.cr6.eq) goto loc_82101F34;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82101f08
	if (!ctx.cr6.eq) goto loc_82101F08;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82102460
	ctx.lr = 0x82101EE8;
	sub_82102460(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821024d0
	ctx.lr = 0x82101EF4;
	sub_821024D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820d8f88
	ctx.lr = 0x82101F04;
	sub_820D8F88(ctx, base);
	// b 0x82101f10
	goto loc_82101F10;
loc_82101F08:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82102460
	ctx.lr = 0x82101F10;
	sub_82102460(ctx, base);
loc_82101F10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822f1fe0
	ctx.lr = 0x82101F34;
	sub_822F1FE0(ctx, base);
loc_82101F34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101E80) {
	__imp__sub_82101E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82101F3C) {
	__imp__sub_82101F3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82101F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82101F48;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de014
	ctx.lr = 0x82101F50;
	__savefpr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x822f23f0
	ctx.lr = 0x82101F68;
	sub_822F23F0(ctx, base);
	// addi r29,r3,-1
	ctx.r29.s64 = ctx.r3.s64 + -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// srawi. r10,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 5;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x82101f9c
	if (ctx.cr0.eq) goto loc_82101F9C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82101F80:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// bne cr6,0x82101fc0
	if (!ctx.cr6.eq) goto loc_82101FC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82101f80
	if (ctx.cr6.lt) goto loc_82101F80;
loc_82101F9C:
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// srw r7,r8,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r6,r10,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// or r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 | ctx.r6.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x821022bc
	if (ctx.cr6.eq) goto loc_821022BC;
loc_82101FC0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f19e8
	ctx.lr = 0x82101FC8;
	sub_822F19E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821022bc
	if (ctx.cr6.eq) goto loc_821022BC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r28,40
	ctx.r3.s64 = ctx.r28.s64 + 40;
	// bl 0x822daa18
	ctx.lr = 0x82101FE0;
	sub_822DAA18(ctx, base);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r7,r11,-15680
	ctx.r7.s64 = ctx.r11.s64 + -15680;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// addis r11,r7,2
	ctx.r11.s64 = ctx.r7.s64 + 131072;
	// stw r30,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r30.u32);
	// ori r5,r6,61924
	ctx.r5.u64 = ctx.r6.u64 | 61924;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// addi r9,r11,2168
	ctx.r9.s64 = ctx.r11.s64 + 2168;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// lwz r11,-19420(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19420);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// lfs f27,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// blt cr6,0x821022bc
	if (ctx.cr6.lt) goto loc_821022BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lfs f26,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f26.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
loc_82102064:
	// srawi r11,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821022a4
	if (!ctx.cr6.eq) goto loc_821022A4;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f1df8
	ctx.lr = 0x82102090;
	sub_822F1DF8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821020c8
	if (ctx.cr6.eq) goto loc_821020C8;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f0,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// b 0x8210227c
	goto loc_8210227C;
loc_821020C8:
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r28,28
	ctx.r4.s64 = ctx.r28.s64 + 28;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
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
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x822f1fe0
	ctx.lr = 0x821020F0;
	sub_822F1FE0(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f0,f12,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82102124
	if (ctx.cr6.eq) goto loc_82102124;
	// fdivs f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 / ctx.f0.f64));
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// b 0x8210212c
	goto loc_8210212C;
loc_82102124:
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f26,140(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8210212C:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f13
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lfs f12,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// lfs f3,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// lfs f11,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f2,f7,f12,f8
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f8.f64));
	// fmsubs f1,f9,f12,f6
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f6.f64));
	// fmadds f8,f10,f12,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + ctx.f5.f64));
	// fmsubs f6,f3,f12,f4
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f4.f64));
	// fmadds f5,f3,f13,f2
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f4,f7,f11,f1
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f1.f64));
	// fnmsubs f2,f7,f0,f8
	ctx.f2.f64 = double(float(-(ctx.f7.f64 * ctx.f0.f64 - ctx.f8.f64)));
	// fnmsubs f1,f9,f0,f6
	ctx.f1.f64 = double(float(-(ctx.f9.f64 * ctx.f0.f64 - ctx.f6.f64)));
	// fnmsubs f13,f9,f11,f5
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f11.f64 - ctx.f5.f64)));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f12,f3,f0,f4
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmadds f9,f3,f11,f2
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f9,8(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fnmsubs f8,f10,f11,f1
	ctx.f8.f64 = double(float(-(ctx.f10.f64 * ctx.f11.f64 - ctx.f1.f64)));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f3,f13,f12
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f4,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f2,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f11,f6
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f6
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f8,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f25,f12,f3
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f3.f64));
	// fmuls f24,f11,f3
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f3.f64));
	// fmuls f6,f0,f5
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fmuls f0,f11,f5
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f11,f5,f10
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// fadds f10,f1,f25
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f25.f64));
	// fadds f5,f24,f6
	ctx.f5.f64 = double(float(ctx.f24.f64 + ctx.f6.f64));
	// fsubs f23,f12,f9
	ctx.f23.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fsubs f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fadds f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fsubs f6,f6,f24
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f24.f64));
	// fsubs f0,f31,f10
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// fmuls f10,f7,f5
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fsubs f7,f31,f1
	ctx.f7.f64 = double(float(ctx.f31.f64 - ctx.f1.f64));
	// fsubs f5,f31,f11
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// fmadds f1,f13,f0,f10
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f10.f64));
	// fmadds f0,f4,f23,f1
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f23.f64 + ctx.f1.f64));
	// fadds f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f2.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f4,f13,f12,f9
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f2,f11,f7,f4
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fadds f13,f2,f8
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f8.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f1,f5
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// lfs f10,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f11,f6,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f12.f64));
	// fmadds f7,f10,f3,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f3.f64 + ctx.f9.f64));
	// lfs f8,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f8.f64 = double(temp.f32);
	// fadds f12,f7,f8
	ctx.f12.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
loc_8210227C:
	// fsubs f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f28.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsubs f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f1fe0
	ctx.lr = 0x821022A0;
	sub_822F1FE0(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_821022A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r10,r10,31
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 31);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82102064
	if (!ctx.cr6.gt) goto loc_82102064;
loc_821022BC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de060
	ctx.lr = 0x821022C8;
	__restfpr_23(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82101F40) {
	__imp__sub_82101F40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821022CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821022CC) {
	__imp__sub_821022CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821022D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821022D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822f1d48
	ctx.lr = 0x821022F4;
	sub_822F1D48(ctx, base);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bgt cr6,0x821023b0
	if (ctx.cr6.gt) goto loc_821023B0;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8988
	ctx.r12.s64 = ctx.r12.s64 + 8988;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82102358;
	case 1:
		goto loc_821023B0;
	case 2:
		goto loc_821023B0;
	case 3:
		goto loc_821023B0;
	case 4:
		goto loc_821023B0;
	case 5:
		goto loc_821023B0;
	case 6:
		goto loc_821023B0;
	case 7:
		goto loc_82102378;
	case 8:
		goto loc_8210238C;
	case 9:
		goto loc_821023B0;
	case 10:
		goto loc_8210238C;
	case 11:
		goto loc_821023B0;
	case 12:
		goto loc_821023A0;
	case 13:
		goto loc_821023B0;
	case 14:
		goto loc_821023A0;
	default:
		return;
	}
	// lwz r16,9048(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9048);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9080(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9080);
	// lwz r16,9100(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9100);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9100(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9100);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9120(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9120);
	// lwz r16,9136(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9136);
	// lwz r16,9120(r16)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r16.u32 + 9120);
loc_82102358:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821023b0
	if (ctx.cr6.eq) goto loc_821023B0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82101908
	ctx.lr = 0x82102374;
	sub_82101908(ctx, base);
	// b 0x821023b0
	goto loc_821023B0;
loc_82102378:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82101988
	ctx.lr = 0x82102388;
	sub_82101988(ctx, base);
	// b 0x821023b0
	goto loc_821023B0;
loc_8210238C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82101b00
	ctx.lr = 0x8210239C;
	sub_82101B00(ctx, base);
	// b 0x821023b0
	goto loc_821023B0;
loc_821023A0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82101e80
	ctx.lr = 0x821023B0;
	sub_82101E80(ctx, base);
loc_821023B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82101f40
	ctx.lr = 0x821023C0;
	sub_82101F40(ctx, base);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821023e8
	if (ctx.cr6.eq) goto loc_821023E8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821023e8
	if (ctx.cr6.eq) goto loc_821023E8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8228e9f8
	ctx.lr = 0x821023E8;
	sub_8228E9F8(ctx, base);
loc_821023E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821022D0) {
	__imp__sub_821022D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821023F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x821023F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135138
	ctx.lr = 0x82102418;
	sub_82135138(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82102448
	if (!ctx.cr6.eq) goto loc_82102448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2008
	ctx.lr = 0x8210242C;
	sub_822F2008(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821022d0
	ctx.lr = 0x8210243C;
	sub_821022D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f13a0
	ctx.lr = 0x82102448;
	sub_822F13A0(ctx, base);
loc_82102448:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821023F0) {
	__imp__sub_821023F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102454) {
	__imp__sub_82102454(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102458) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82102458) {
	__imp__sub_82102458(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210245C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210245C) {
	__imp__sub_8210245C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102460) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,-29220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x8210249C;
	sub_823DE720(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de800
	ctx.lr = 0x821024AC;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_82102460) {
	__imp__sub_82102460(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821024CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821024CC) {
	__imp__sub_821024CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821024D0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f0,-29220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f0,8(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823de720
	ctx.lr = 0x8210250C;
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
	ctx.lr = 0x8210251C;
	sub_823DE800(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
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

PPC_WEAK_FUNC(sub_821024D0) {
	__imp__sub_821024D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210253C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210253C) {
	__imp__sub_8210253C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82102540) {
	__imp__sub_82102540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102564) {
	__imp__sub_82102564(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102568) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,-19420(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19420);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82102568) {
	__imp__sub_82102568(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82102588;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de020
	ctx.lr = 0x82102590;
	__savefpr_26(ctx, base);
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
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// ble cr6,0x8210268c
	if (!ctx.cr6.gt) goto loc_8210268C;
	// lwz r31,40(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210268c
	if (!ctx.cr6.eq) goto loc_8210268C;
	// lwz r30,36(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// lfs f0,404(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r9,22904
	ctx.r7.u64 = ctx.r9.u64 | 22904;
	// lfs f28,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f28.f64 = double(temp.f32);
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// lfs f31,2420(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2420);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r29,23328
	ctx.r29.s64 = ctx.r29.s64 + 23328;
	// lfs f30,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// lfsx f27,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f26,f13,f31
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102618;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,2412(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2412);
	ctx.f29.f64 = double(temp.f32);
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f27
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f27.f64));
	// fmadds f9,f10,f29,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f9,0(r29)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f28,408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	ctx.f28.f64 = double(temp.f32);
	// lfs f8,408(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f28
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f28.f64));
	// fmuls f26,f7,f31
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fadds f1,f26,f30
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210264C;
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
	// stfs f3,4(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f28,412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f28.f64 = double(temp.f32);
	// lfs f2,412(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f28
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f28.f64));
	// fmuls f31,f1,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fadds f1,f31,f30
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102678;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// fmadds f11,f12,f29,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64 + ctx.f28.f64));
	// stfs f11,8(r29)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
loc_8210268C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de06c
	ctx.lr = 0x82102698;
	__restfpr_26(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82102580) {
	__imp__sub_82102580(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210269C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210269C) {
	__imp__sub_8210269C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821026A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x821026A8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de020
	ctx.lr = 0x821026B0;
	__savefpr_26(ctx, base);
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
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addis r31,r28,1
	ctx.r31.s64 = ctx.r28.s64 + 65536;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r31,22924
	ctx.r31.s64 = ctx.r31.s64 + 22924;
	// lwz r29,40(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// lwz r27,28(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// lwz r26,32(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82102700;
	sub_823DE1F0(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8210273c
	if (ctx.cr6.eq) goto loc_8210273C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211fa80
	ctx.lr = 0x82102710;
	sub_8211FA80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x82102720;
	sub_8211F9E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82327160
	ctx.lr = 0x8210273C;
	sub_82327160(ctx, base);
loc_8210273C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82102bc8
	if (!ctx.cr6.gt) goto loc_82102BC8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,36(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ori r10,r11,22904
	ctx.r10.u64 = ctx.r11.u64 | 22904;
	// lfsx f31,r28,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x821027fc
	if (ctx.cr6.eq) goto loc_821027FC;
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82102778
	if (!ctx.cr6.lt) goto loc_82102778;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
loc_82102778:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
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
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lfs f9,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,88(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fmadds f6,f7,f31,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f6,88(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lfs f5,708(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 708);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,708(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 708);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fmadds f2,f3,f31,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f2,708(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 708, temp.u32);
	// lfs f1,704(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 704);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,704(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmadds f12,f13,f31,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f1.f64));
	// stfs f12,704(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 704, temp.u32);
	// lfs f11,280(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,280(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f31,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64 + ctx.f11.f64));
	// stfs f8,280(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
loc_821027FC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82102814
	if (!ctx.cr6.eq) goto loc_82102814;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82102850
	if (ctx.cr6.eq) goto loc_82102850;
loc_82102814:
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f31,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f9,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmadds f7,f8,f31,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f9.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f5,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f31,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f6.f64));
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
loc_82102850:
	// lfs f0,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lfs f28,2412(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2412);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,2420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2420);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f11,f12,f31,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f11,40(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// lfs f10,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,44(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f31,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f7,44(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lfs f5,48(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// lfs f6,48(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmadds f3,f4,f31,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f5.f64));
	// stfs f3,48(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r28,r8,30,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x1;
	// bne cr6,0x82102a68
	if (!ctx.cr6.eq) goto loc_82102A68;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82102a68
	if (!ctx.cr6.eq) goto loc_82102A68;
	// lfs f27,404(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 404);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,404(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821028DC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f10,f28,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,404(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// lfs f27,408(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	ctx.f27.f64 = double(temp.f32);
	// lfs f8,408(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f26,f7,f30
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102908;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f4,f28,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f3,408(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 408, temp.u32);
	// lfs f27,412(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 412);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,412(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f27
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f26,f1,f30
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102934;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f11,f12,f28,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f11,412(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 412, temp.u32);
	// lfs f27,264(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 264);
	ctx.f27.f64 = double(temp.f32);
	// lfs f10,264(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 264);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f27.f64));
	// fmuls f26,f9,f30
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102960;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// fsubs f7,f26,f8
	ctx.f7.f64 = double(float(ctx.f26.f64 - ctx.f8.f64));
	// fmuls f6,f7,f31
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmadds f5,f6,f28,f27
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f5,264(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// lfs f27,268(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	ctx.f27.f64 = double(temp.f32);
	// lfs f4,268(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f27.f64));
	// fmuls f26,f3,f30
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210298C;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// fsubs f1,f26,f2
	ctx.f1.f64 = double(float(ctx.f26.f64 - ctx.f2.f64));
	// fmuls f0,f1,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fmadds f13,f0,f28,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// lfs f27,272(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	ctx.f27.f64 = double(temp.f32);
	// lfs f12,272(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 272);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f27.f64));
	// fmuls f26,f11,f30
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821029B8;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// fsubs f9,f26,f10
	ctx.f9.f64 = double(float(ctx.f26.f64 - ctx.f10.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f7,f8,f28,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f7,272(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821029e4
	if (ctx.cr6.eq) goto loc_821029E4;
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82102a68
	if (ctx.cr6.eq) goto loc_82102A68;
loc_821029E4:
	// lfs f27,368(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 368);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,368(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 368);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x821029FC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f10,f28,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,368(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lfs f8,372(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 372);
	ctx.f8.f64 = double(temp.f32);
	// lfs f27,372(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f26,f7,f30
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102A28;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f4,f28,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f3,372(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lfs f27,376(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 376);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,376(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 376);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f27
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f26,f1,f30
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102A54;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f11,f12,f28,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f11,376(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 376, temp.u32);
loc_82102A68:
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82102aa0
	if (!ctx.cr6.eq) goto loc_82102AA0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82102b24
	if (!ctx.cr6.eq) goto loc_82102B24;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// rlwinm r10,r11,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82102b24
	if (!ctx.cr6.eq) goto loc_82102B24;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82102b24
	if (!ctx.cr6.eq) goto loc_82102B24;
loc_82102AA0:
	// lfs f27,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,96(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102AB8;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f10,f28,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,96(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// lfs f27,100(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	ctx.f27.f64 = double(temp.f32);
	// lfs f8,100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f26,f7,f30
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102AE4;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f26,f6
	ctx.f5.f64 = double(float(ctx.f26.f64 - ctx.f6.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f4,f28,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f3,100(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// lfs f27,104(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	ctx.f27.f64 = double(temp.f32);
	// lfs f2,104(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 104);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f27
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// fmuls f26,f1,f30
	ctx.f26.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102B10;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 - ctx.f0.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmadds f11,f12,f28,f27
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f11,104(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
loc_82102B24:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82102b48
	if (!ctx.cr6.eq) goto loc_82102B48;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82102b48
	if (ctx.cr6.eq) goto loc_82102B48;
	// lwz r11,172(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 172);
	// rlwinm r10,r11,0,20,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82102bc8
	if (ctx.cr6.eq) goto loc_82102BC8;
loc_82102B48:
	// lfs f27,300(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 300);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,300(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fmuls f26,f13,f30
	ctx.f26.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fadds f1,f26,f29
	ctx.f1.f64 = double(float(ctx.f26.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102B60;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// fsubs f11,f26,f12
	ctx.f11.f64 = double(float(ctx.f26.f64 - ctx.f12.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f10,f28,f27
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f9,300(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// lfs f8,296(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 296);
	ctx.f8.f64 = double(temp.f32);
	// lfs f27,296(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 296);
	ctx.f27.f64 = double(temp.f32);
	// fsubs f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f27.f64));
	// fmuls f30,f7,f30
	ctx.f30.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fadds f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102B8C;
	sub_823DDE20(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fsubs f5,f30,f6
	ctx.f5.f64 = double(float(ctx.f30.f64 - ctx.f6.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// fmadds f3,f4,f28,f27
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f28.f64 + ctx.f27.f64));
	// stfs f3,296(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
	// lfs f2,304(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,304(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 304);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f13,f0,f31,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f2.f64));
	// stfs f13,304(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 304, temp.u32);
	// lfs f12,308(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,308(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 308);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f9,f10,f31,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f9,308(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 308, temp.u32);
loc_82102BC8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x823de06c
	ctx.lr = 0x82102BD4;
	__restfpr_26(ctx, base);
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821026A0) {
	__imp__sub_821026A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102BD8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821201c8
	ctx.lr = 0x82102BF4;
	sub_821201C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822d50f8
	ctx.lr = 0x82102C00;
	sub_822D50F8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,23188
	ctx.r11.s64 = ctx.r11.s64 + 23188;
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,23020
	ctx.r10.s64 = ctx.r10.s64 + 23020;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,22952
	ctx.r3.s64 = ctx.r3.s64 + 22952;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// bl 0x821201f0
	ctx.lr = 0x82102C40;
	sub_821201F0(ctx, base);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// ori r7,r9,23204
	ctx.r7.u64 = ctx.r9.u64 | 23204;
	// addi r8,r8,22960
	ctx.r8.s64 = ctx.r8.s64 + 22960;
	// lfsx f13,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f12,0(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
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

PPC_WEAK_FUNC(sub_82102BD8) {
	__imp__sub_82102BD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102C74) {
	__imp__sub_82102C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102C78) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ori r9,r11,22928
	ctx.r9.u64 = ctx.r11.u64 | 22928;
	// li r10,3
	ctx.r10.s64 = 3;
	// bne cr6,0x82102cbc
	if (!ctx.cr6.eq) goto loc_82102CBC;
	// li r10,2
	ctx.r10.s64 = 2;
loc_82102CBC:
	// stwx r10,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// ori r3,r9,22936
	ctx.r3.u64 = ctx.r9.u64 | 22936;
	// ori r4,r10,23632
	ctx.r4.u64 = ctx.r10.u64 | 23632;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// ori r5,r11,23096
	ctx.r5.u64 = ctx.r11.u64 | 23096;
	// ori r10,r8,23624
	ctx.r10.u64 = ctx.r8.u64 | 23624;
	// ori r9,r7,22940
	ctx.r9.u64 = ctx.r7.u64 | 22940;
	// lis r8,-32168
	ctx.r8.s64 = -2108162048;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r31,r4
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r4.u32, temp.u32);
	// stwx r11,r31,r5
	PPC_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r3,6964(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 6964);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82102d24
	if (!ctx.cr6.eq) goto loc_82102D24;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822e1f80
	ctx.lr = 0x82102D24;
	sub_822E1F80(ctx, base);
loc_82102D24:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r7,r10,22904
	ctx.r7.u64 = ctx.r10.u64 | 22904;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfsx f31,r31,r7
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,2420(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f10,f31,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64 + ctx.f12.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmadds f5,f6,f31,f8
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64 + ctx.f8.f64));
	// stfs f5,84(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f4,36(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f2,f31,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64 + ctx.f3.f64));
	// stfs f1,88(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f30,268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f30.f64 = double(temp.f32);
	// lfs f12,268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 268);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f30
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// fmuls f29,f11,f0
	ctx.f29.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fadds f1,f29,f13
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x82102D9C;
	sub_823DDE20(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r5,-32168
	ctx.r5.s64 = -2108162048;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,-30216(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + -30216);
	// lfs f0,2412(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f29,f10
	ctx.f9.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f1,f8,f0,f30
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f30.f64));
	// beq cr6,0x82102dec
	if (ctx.cr6.eq) goto loc_82102DEC;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r11,22408
	ctx.r11.s64 = ctx.r11.s64 + 22408;
	// addi r6,r10,-2280
	ctx.r6.s64 = ctx.r10.s64 + -2280;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r4,r11,268
	ctx.r4.s64 = ctx.r11.s64 + 268;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820eaf30
	ctx.lr = 0x82102DEC;
	sub_820EAF30(ctx, base);
loc_82102DEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

PPC_WEAK_FUNC(sub_82102C78) {
	__imp__sub_82102C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102E0C) {
	__imp__sub_82102E0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102E10) {
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
	// ori r7,r8,61116
	ctx.r7.u64 = ctx.r8.u64 | 61116;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r5,r5,-4416
	ctx.r5.s64 = ctx.r5.s64 + -4416;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 196608;
	// stwx r4,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r4.u32);
	// lfs f0,5484(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r3,-4404
	ctx.r3.s64 = ctx.r3.s64 + -4404;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f0,4(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// b 0x82101850
	sub_82101850(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82102E10) {
	__imp__sub_82102E10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102E60) {
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
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addis r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 + 196608;
	// addi r3,r3,22924
	ctx.r3.s64 = ctx.r3.s64 + 22924;
	// ori r7,r8,61116
	ctx.r7.u64 = ctx.r8.u64 | 61116;
	// addi r6,r6,-4416
	ctx.r6.s64 = ctx.r6.s64 + -4416;
	// addis r4,r11,3
	ctx.r4.s64 = ctx.r11.s64 + 196608;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r4,-4404
	ctx.r4.s64 = ctx.r4.s64 + -4404;
	// stwx r5,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r5.u32);
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f12,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// b 0x82101888
	sub_82101888(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82102E60) {
	__imp__sub_82102E60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102EBC) {
	__imp__sub_82102EBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102EC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82102ed8
	if (!ctx.cr6.eq) goto loc_82102ED8;
loc_82102ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82102ED8:
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmpwi cr6,r11,2047
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2047, ctx.xer);
	// beq cr6,0x82102ed0
	if (ctx.cr6.eq) goto loc_82102ED0;
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// mulli r11,r11,404
	ctx.r11.s64 = ctx.r11.s64 * 404;
	// addi r10,r10,-5696
	ctx.r10.s64 = ctx.r10.s64 + -5696;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,380(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82102ed0
	if (ctx.cr6.eq) goto loc_82102ED0;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82102EC0) {
	__imp__sub_82102EC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82102F24) {
	__imp__sub_82102F24(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82102F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82102F30;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820d81a8
	ctx.lr = 0x82102F60;
	sub_820D81A8(ctx, base);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lis r10,-32181
	ctx.r10.s64 = -2109014016;
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// mulli r9,r3,404
	ctx.r9.s64 = ctx.r3.s64 * 404;
	// lfs f0,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r26,r10,-5696
	ctx.r26.s64 = ctx.r10.s64 + -5696;
	// ori r7,r8,22904
	ctx.r7.u64 = ctx.r8.u64 | 22904;
	// add r31,r9,r26
	ctx.r31.u64 = ctx.r9.u64 + ctx.r26.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfsx f31,r30,r7
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	ctx.f31.f64 = double(temp.f32);
	// addi r28,r31,28
	ctx.r28.s64 = ctx.r31.s64 + 28;
	// fmadds f11,f12,f31,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lfs f10,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f31,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64 + ctx.f10.f64));
	// stfs f7,32(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f6,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f31,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 + ctx.f6.f64));
	// lfs f0,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f3,36(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// lfs f30,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f30.f64 = double(temp.f32);
	// lfs f2,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f30
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f30.f64));
	// lfs f0,2420(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2420);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f1,f0
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,2416(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f29,f0
	ctx.f1.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x82103000;
	sub_823DDE20(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r11,r11,2168
	ctx.r11.s64 = ctx.r11.s64 + 2168;
	// lfs f0,2412(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2412);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f29,f13
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f13.f64));
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmadds f10,f11,f0,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f30.f64));
	// stfs f10,44(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82103088
	if (ctx.cr6.eq) goto loc_82103088;
	// lwz r10,392(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 392);
	// cmpwi cr6,r10,2047
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2047, ctx.xer);
	// bne cr6,0x8210304c
	if (!ctx.cr6.eq) goto loc_8210304C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82103088
	goto loc_82103088;
loc_8210304C:
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r9,380(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8210306c
	if (!ctx.cr6.eq) goto loc_8210306C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82103088
	goto loc_82103088;
loc_8210306C:
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82103088:
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821030c4
	if (!ctx.cr6.eq) goto loc_821030C4;
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,2176
	ctx.r10.s64 = ctx.r10.s64 + 2176;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,280(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_821030C4:
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r11,2060
	ctx.r11.s64 = ctx.r11.s64 + 2060;
	// lis r26,-32155
	ctx.r26.s64 = -2107310080;
	// ori r31,r10,22924
	ctx.r31.u64 = ctx.r10.u64 | 22924;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8210313c
	if (!ctx.cr6.eq) goto loc_8210313C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x821030FC;
	sub_823DE1F0(ctx, base);
	// lwz r9,-30052(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30052);
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r8,-32187
	ctx.r8.s64 = -2109407232;
	// add r7,r27,r11
	ctx.r7.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r11,r8,-16984
	ctx.r11.s64 = ctx.r8.s64 + -16984;
	// lwz r6,12(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r10,r7,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0xFFFFFF80;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82103138
	if (ctx.cr6.eq) goto loc_82103138;
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103138
	if (ctx.cr6.eq) goto loc_82103138;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82102bd8
	ctx.lr = 0x82103138;
	sub_82102BD8(ctx, base);
loc_82103138:
	// stb r25,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r25.u8);
loc_8210313C:
	// lwz r11,-30052(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82103158
	if (ctx.cr6.eq) goto loc_82103158;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82102c78
	ctx.lr = 0x82103154;
	sub_82102C78(ctx, base);
	// b 0x8210323c
	goto loc_8210323C;
loc_82103158:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r9,r11,6968
	ctx.r9.s64 = ctx.r11.s64 + 6968;
	// lwz r10,6964(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 6964);
	// lwz r11,11324(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821031a4
	if (ctx.cr6.eq) goto loc_821031A4;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821031a4
	if (ctx.cr6.eq) goto loc_821031A4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821026a0
	ctx.lr = 0x82103190;
	sub_821026A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_821031A4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30068);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821031dc
	if (ctx.cr6.eq) goto loc_821031DC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821026a0
	ctx.lr = 0x821031C8;
	sub_821026A0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_821031DC:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8210323c
	if (ctx.cr6.eq) goto loc_8210323C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8210322c
	if (ctx.cr6.eq) goto loc_8210322C;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8210322c
	if (ctx.cr6.eq) goto loc_8210322C;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8210322c
	if (!ctx.cr6.eq) goto loc_8210322C;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ori r5,r5,44196
	ctx.r5.u64 = ctx.r5.u64 | 44196;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x823de1f0
	ctx.lr = 0x82103220;
	sub_823DE1F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82102580
	ctx.lr = 0x82103228;
	sub_82102580(ctx, base);
	// b 0x8210323c
	goto loc_8210323C;
loc_8210322C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821026a0
	ctx.lr = 0x8210323C;
	sub_821026A0(ctx, base);
loc_8210323C:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22920
	ctx.r9.u64 = ctx.r10.u64 | 22920;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stwx r8,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

PPC_WEAK_FUNC(sub_82102F28) {
	__imp__sub_82102F28(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103264) {
	__imp__sub_82103264(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf40
	ctx.lr = 0x82103270;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de020
	ctx.lr = 0x82103278;
	__savefpr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// stw r3,436(r1)
	PPC_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// addi r8,r11,6968
	ctx.r8.s64 = ctx.r11.s64 + 6968;
	// ori r7,r10,61924
	ctx.r7.u64 = ctx.r10.u64 | 61924;
	// lis r6,-32187
	ctx.r6.s64 = -2109407232;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// lwz r11,11324(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11324);
	// addi r10,r6,-15680
	ctx.r10.s64 = ctx.r6.s64 + -15680;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82103330
	if (ctx.cr6.eq) goto loc_82103330;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82103330
	if (ctx.cr6.eq) goto loc_82103330;
	// lis r11,-32155
	ctx.r11.s64 = -2107310080;
	// lwz r11,-30052(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30052);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82103330
	if (!ctx.cr6.eq) goto loc_82103330;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,23020
	ctx.r11.s64 = ctx.r11.s64 + 23020;
	// addi r10,r10,23188
	ctx.r10.s64 = ctx.r10.s64 + 23188;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f8,116(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f6,120(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82120788
	ctx.lr = 0x82103320;
	sub_82120788(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de06c
	ctx.lr = 0x8210332C;
	__restfpr_26(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_82103330:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-30068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30068);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82103930
	if (!ctx.cr6.eq) goto loc_82103930;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r27,r11,22408
	ctx.r27.s64 = ctx.r11.s64 + 22408;
	// addi r10,r10,22924
	ctx.r10.s64 = ctx.r10.s64 + 22924;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stb r11,316(r27)
	PPC_STORE_U8(ctx.r27.u32 + 316, ctx.r11.u8);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8210337c
	if (ctx.cr6.lt) goto loc_8210337C;
	// lis r11,129
	ctx.r11.s64 = 8454144;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// b 0x82103384
	goto loc_82103384;
loc_8210337C:
	// lis r11,641
	ctx.r11.s64 = 42008576;
	// ori r11,r11,49169
	ctx.r11.u64 = ctx.r11.u64 | 49169;
loc_82103384:
	// addis r23,r31,3
	ctx.r23.s64 = ctx.r31.s64 + 196608;
	// stw r11,132(r27)
	PPC_STORE_U32(ctx.r27.u32 + 132, ctx.r11.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r23,r23,-4432
	ctx.r23.s64 = ctx.r23.s64 + -4432;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lfs f27,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f27.f64 = double(temp.f32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stfs f27,304(r27)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r27.u32 + 304, temp.u32);
	// stw r11,300(r27)
	PPC_STORE_U32(ctx.r27.u32 + 300, ctx.r11.u32);
	// bl 0x8211fa80
	ctx.lr = 0x821033B0;
	sub_8211FA80(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8211f9e8
	ctx.lr = 0x821033C4;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82103930
	if (ctx.cr6.eq) goto loc_82103930;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addi r29,r29,22912
	ctx.r29.s64 = ctx.r29.s64 + 22912;
	// addi r30,r30,22920
	ctx.r30.s64 = ctx.r30.s64 + 22920;
	// addi r28,r28,23032
	ctx.r28.s64 = ctx.r28.s64 + 23032;
	// addi r25,r25,22952
	ctx.r25.s64 = ctx.r25.s64 + 22952;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x820ec928
	ctx.lr = 0x82103408;
	sub_820EC928(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8234dc18
	ctx.lr = 0x82103420;
	sub_8234DC18(ctx, base);
	// addi r21,r16,-63
	ctx.r21.s64 = ctx.r16.s64 + -63;
	// lis r26,-32168
	ctx.r26.s64 = -2108162048;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpw cr6,r21,r16
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r16.s32, ctx.xer);
	// bgt cr6,0x821036ec
	if (ctx.cr6.gt) goto loc_821036EC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lfs f26,6020(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6020);
	ctx.f26.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// ori r23,r8,22916
	ctx.r23.u64 = ctx.r8.u64 | 22916;
	// ori r24,r7,23024
	ctx.r24.u64 = ctx.r7.u64 | 23024;
	// ori r19,r6,61120
	ctx.r19.u64 = ctx.r6.u64 | 61120;
	// ori r22,r5,2064
	ctx.r22.u64 = ctx.r5.u64 | 2064;
	// lis r15,-32168
	ctx.r15.s64 = -2108162048;
	// ori r20,r4,2068
	ctx.r20.u64 = ctx.r4.u64 | 2068;
	// addi r14,r11,-29140
	ctx.r14.s64 = ctx.r11.s64 + -29140;
	// addi r18,r10,-29164
	ctx.r18.s64 = ctx.r10.s64 + -29164;
	// addi r17,r9,-29184
	ctx.r17.s64 = ctx.r9.s64 + -29184;
loc_82103480:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r5,r27,4
	ctx.r5.s64 = ctx.r27.s64 + 4;
	// bl 0x8211f9e8
	ctx.lr = 0x82103490;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821036d8
	if (ctx.cr6.eq) goto loc_821036D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x821036d8
	if (ctx.cr6.lt) goto loc_821036D8;
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821036d8
	if (ctx.cr6.gt) goto loc_821036D8;
	// addi r4,r21,-1
	ctx.r4.s64 = ctx.r21.s64 + -1;
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r5,r27,68
	ctx.r5.s64 = ctx.r27.s64 + 68;
	// bl 0x8211f9e8
	ctx.lr = 0x821034CC;
	sub_8211F9E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821036d8
	if (ctx.cr6.eq) goto loc_821036D8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r9,r11,61116
	ctx.r9.u64 = ctx.r11.u64 | 61116;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821036cc
	if (!ctx.cr6.eq) goto loc_821036CC;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwzx r6,r31,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// add r30,r31,r23
	ctx.r30.u64 = ctx.r31.u64 + ctx.r23.u64;
	// bl 0x820ec928
	ctx.lr = 0x82103510;
	sub_820EC928(ctx, base);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r6,r31,r23
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x8234dc18
	ctx.lr = 0x82103528;
	sub_8234DC18(ctx, base);
	// lwz r11,-29940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29940);
	// lfsx f0,r31,r24
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f12,r31,r24
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, temp.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8210358c
	if (ctx.cr6.eq) goto loc_8210358C;
	// lfsx f0,r31,r19
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r10,r31,r19
	ctx.r10.u64 = ctx.r31.u64 + ctx.r19.u64;
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8210357c
	if (!ctx.cr6.eq) goto loc_8210357C;
	// lfs f0,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8210357c
	if (!ctx.cr6.eq) goto loc_8210357C;
	// lfs f0,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8210358c
	if (ctx.cr6.eq) goto loc_8210358C;
loc_8210357C:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280b08
	ctx.lr = 0x82103588;
	sub_82280B08(ctx, base);
	// lwz r11,-29940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29940);
loc_8210358C:
	// add r10,r31,r19
	ctx.r10.u64 = ctx.r31.u64 + ctx.r19.u64;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r31,r19
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f29,f12,f11
	ctx.f29.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f30,f9,f13
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f8,f31,f31
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f7,f30,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f8.f64));
	// fmadds f6,f29,f29,f7
	ctx.f6.f64 = double(float(ctx.f29.f64 * ctx.f29.f64 + ctx.f7.f64));
	// fsqrts f1,f6
	ctx.f1.f64 = double(float(sqrt(ctx.f6.f64)));
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// ble cr6,0x821036cc
	if (!ctx.cr6.gt) goto loc_821036CC;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821035f0
	if (ctx.cr6.eq) goto loc_821035F0;
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x821035EC;
	sub_82280900(ctx, base);
	// lwz r11,-29940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29940);
loc_821035F0:
	// lwz r10,-30020(r15)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r15.u32 + -30020);
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// beq cr6,0x82103690
	if (ctx.cr6.eq) goto loc_82103690;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwzx r8,r31,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fdivs f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// fcmpu cr6,f28,f27
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// bge cr6,0x82103638
	if (!ctx.cr6.lt) goto loc_82103638;
	// fmr f28,f27
	ctx.f28.f64 = ctx.f27.f64;
	// b 0x82103664
	goto loc_82103664;
loc_82103638:
	// fcmpu cr6,f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f27.f64);
	// ble cr6,0x82103664
	if (!ctx.cr6.gt) goto loc_82103664;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82103664
	if (ctx.cr6.eq) goto loc_82103664;
	// stfd f28,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f28.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82280900
	ctx.lr = 0x82103664;
	sub_82280900(ctx, base);
loc_82103664:
	// lfsx f0,r31,r20
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// fmuls f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stfsx f13,r31,r20
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f28
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// b 0x821036a0
	goto loc_821036A0;
loc_82103690:
	// add r11,r31,r20
	ctx.r11.u64 = ctx.r31.u64 + ctx.r20.u64;
	// stfsx f27,r31,r20
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r20.u32, temp.u32);
	// stfs f27,4(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f27,8(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_821036A0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f30
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwx r11,r31,r22
	PPC_STORE_U32(ctx.r31.u32 + ctx.r22.u32, ctx.r11.u32);
loc_821036CC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232a540
	ctx.lr = 0x821036D4;
	sub_8232A540(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_821036D8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r16
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r16.s32, ctx.xer);
	// ble cr6,0x82103480
	if (!ctx.cr6.gt) goto loc_82103480;
	// lwz r24,436(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_821036EC:
	// lwz r11,-29940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29940);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82103718
	if (!ctx.cr6.gt) goto loc_82103718;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r3,17
	ctx.r3.s64 = 17;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,-29196
	ctx.r4.s64 = ctx.r11.s64 + -29196;
	// bl 0x82280900
	ctx.lr = 0x82103714;
	sub_82280900(ctx, base);
	// lwz r11,-29940(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + -29940);
loc_82103718:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8210373c
	if (!ctx.cr6.eq) goto loc_8210373C;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210373c
	if (ctx.cr6.eq) goto loc_8210373C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r4,r11,-29216
	ctx.r4.s64 = ctx.r11.s64 + -29216;
	// bl 0x82280900
	ctx.lr = 0x8210373C;
	sub_82280900(ctx, base);
loc_8210373C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,22936
	ctx.r10.u64 = ctx.r11.u64 | 22936;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r8,r9,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82103760
	if (ctx.cr6.eq) goto loc_82103760;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82129bb8
	ctx.lr = 0x82103760;
	sub_82129BB8(ctx, base);
loc_82103760:
	// lfs f12,304(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f27
	ctx.cr6.compare(ctx.f12.f64, ctx.f27.f64);
	// beq cr6,0x821038e4
	if (ctx.cr6.eq) goto loc_821038E4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r8,300(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 300);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821038e4
	if (ctx.cr6.eq) goto loc_821038E4;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,61100
	ctx.r9.u64 = ctx.r10.u64 | 61100;
	// lbzx r7,r31,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821038e4
	if (!ctx.cr6.eq) goto loc_821038E4;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,22928
	ctx.r9.u64 = ctx.r10.u64 | 22928;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821037b4
	if (ctx.cr6.eq) goto loc_821037B4;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821037b4
	if (ctx.cr6.eq) goto loc_821037B4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821038e4
	if (!ctx.cr6.eq) goto loc_821038E4;
loc_821037B4:
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// fabs f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r10,-19432(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19432);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821038cc
	if (ctx.cr6.lt) goto loc_821038CC;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r9,-30184(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30184);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f0,f27
	ctx.f0.f64 = ctx.f27.f64;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// ori r10,r5,61108
	ctx.r10.u64 = ctx.r5.u64 | 61108;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfs f13,12240(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12240);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fcmpu cr6,f9,f13
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x82103870
	if (!ctx.cr6.lt) goto loc_82103870;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// subf. r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// blt 0x82103870
	if (ctx.cr0.lt) goto loc_82103870;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82103870
	if (!ctx.cr6.lt) goto loc_82103870;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lfsx f13,r31,r10
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// fdivs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f6.f64));
	// fsubs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f5.f64));
	// fmuls f0,f4,f13
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
loc_82103870:
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// fadds f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lwz r11,6260(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6260);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x821038a8
	if (!ctx.cr6.gt) goto loc_821038A8;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stw r8,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r8.u32);
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfsx f11,r31,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de06c
	ctx.lr = 0x821038A4;
	__restfpr_26(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_821038A8:
	// fneg f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stw r8,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r8.u32);
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f10,f11,f12,f0
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// stfsx f10,r31,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de06c
	ctx.lr = 0x821038C8;
	__restfpr_26(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
loc_821038CC:
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,-30184(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30184);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x82103904
	goto loc_82103904;
loc_821038E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r9,0(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lwz r11,-30184(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -30184);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_82103904:
	// fcfid f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(ctx.f11.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12240(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f9,f12
	ctx.cr6.compare(ctx.f9.f64, ctx.f12.f64);
	// ble cr6,0x82103930
	if (!ctx.cr6.gt) goto loc_82103930;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,61108
	ctx.r10.u64 = ctx.r11.u64 | 61108;
	// stfsx f27,r31,r10
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, temp.u32);
loc_82103930:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x823de06c
	ctx.lr = 0x8210393C;
	__restfpr_26(ctx, base);
	// b 0x823ddf90
	__restgprlr_14(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103268) {
	__imp__sub_82103268(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103940) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82103948;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82103268
	ctx.lr = 0x82103954;
	sub_82103268(ctx, base);
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addis r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 65536;
	// addis r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 131072;
	// addi r29,r29,22924
	ctx.r29.s64 = ctx.r29.s64 + 22924;
	// addi r31,r31,1584
	ctx.r31.s64 = ctx.r31.s64 + 1584;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,208
	ctx.r4.s64 = ctx.r31.s64 + 208;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r8,256(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	// sth r8,334(r31)
	PPC_STORE_U16(ctx.r31.u32 + 334, ctx.r8.u16);
	// bl 0x823224f0
	ctx.lr = 0x82103998;
	sub_823224F0(ctx, base);
	// lwz r6,380(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
	// ori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 | 1;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// li r5,112
	ctx.r5.s64 = 112;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// bl 0x823de1f0
	ctx.lr = 0x821039B4;
	sub_823DE1F0(ctx, base);
	// lbz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,385(r31)
	PPC_STORE_U8(ctx.r31.u32 + 385, ctx.r10.u8);
	// bl 0x820ed828
	ctx.lr = 0x821039C4;
	sub_820ED828(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820d5c68
	ctx.lr = 0x821039D0;
	sub_820D5C68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103940) {
	__imp__sub_82103940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821039D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x821039E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lis r27,-32166
	ctx.r27.s64 = -2108030976;
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_82103A00:
	// lbz r9,29088(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 29088);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82103a24
	if (!ctx.cr6.eq) goto loc_82103A24;
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
	// b 0x82103a34
	goto loc_82103A34;
loc_82103A24:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
loc_82103A34:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103a58
	if (ctx.cr6.eq) goto loc_82103A58;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82103a50
	if (ctx.cr6.eq) goto loc_82103A50;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82103A50:
	// bl 0x82103940
	ctx.lr = 0x82103A54;
	sub_82103940(ctx, base);
	// lwz r10,-32312(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
loc_82103A58:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82103a00
	if (ctx.cr6.lt) goto loc_82103A00;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821039D8) {
	__imp__sub_821039D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103A74) {
	__imp__sub_82103A74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A78) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82103A78) {
	__imp__sub_82103A78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103A7C) {
	__imp__sub_82103A7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A80) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82103A80) {
	__imp__sub_82103A80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r3,15120
	ctx.r10.s64 = ctx.r3.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82103A88) {
	__imp__sub_82103A88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103A9C) {
	__imp__sub_82103A9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103AA0) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82103AA4:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne cr6,0x82103aa4
	if (!ctx.cr6.eq) goto loc_82103AA4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82103AA0) {
	__imp__sub_82103AA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103ABC) {
	__imp__sub_82103ABC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82103AC8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x822e5ed0
	ctx.lr = 0x82103AE4;
	sub_822E5ED0(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x822e6d10
	ctx.lr = 0x82103AEC;
	sub_822E6D10(ctx, base);
	// bl 0x823deaf8
	ctx.lr = 0x82103AF0;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// ble cr6,0x82103b20
	if (!ctx.cr6.gt) goto loc_82103B20;
	// bl 0x822e5fb0
	ctx.lr = 0x82103AFC;
	sub_822E5FB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29024
	ctx.r4.s64 = ctx.r11.s64 + -29024;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103B10;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82103B20:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82103b50
	if (!ctx.cr6.lt) goto loc_82103B50;
	// bl 0x822e5fb0
	ctx.lr = 0x82103B2C;
	sub_822E5FB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-29056
	ctx.r4.s64 = ctx.r11.s64 + -29056;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103B40;
	sub_822830E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82103B50:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,192(r29)
	PPC_STORE_U16(ctx.r29.u32 + 192, ctx.r11.u16);
	// beq cr6,0x82103bd0
	if (ctx.cr6.eq) goto loc_82103BD0;
	// addi r30,r29,60
	ctx.r30.s64 = ctx.r29.s64 + 60;
loc_82103B68:
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// bl 0x822e6d10
	ctx.lr = 0x82103B70;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82103bd0
	if (ctx.cr6.eq) goto loc_82103BD0;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82103bd0
	if (ctx.cr6.eq) goto loc_82103BD0;
	// bl 0x823dec00
	ctx.lr = 0x82103B8C;
	sub_823DEC00(ctx, base);
	// addi r3,r1,156
	ctx.r3.s64 = ctx.r1.s64 + 156;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x822e6d10
	ctx.lr = 0x82103B98;
	sub_822E6D10(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82103bd0
	if (ctx.cr6.eq) goto loc_82103BD0;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// beq cr6,0x82103bd0
	if (ctx.cr6.eq) goto loc_82103BD0;
	// bl 0x823dec00
	ctx.lr = 0x82103BB4;
	sub_823DEC00(ctx, base);
	// stfs f31,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f0,8(r30)
	ea = 8 + ctx.r30.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// lhz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 192);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82103b68
	if (ctx.cr6.lt) goto loc_82103B68;
loc_82103BD0:
	// bl 0x822e5fb0
	ctx.lr = 0x82103BD4;
	sub_822E5FB0(ctx, base);
	// lhz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 192);
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r3,r9,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103AC0) {
	__imp__sub_82103AC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103BF0) {
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
	// stwu r1,-8368(r1)
	ea = -8368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-28912
	ctx.r4.s64 = ctx.r11.s64 + -28912;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x82103C28;
	sub_823DF2B0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,-28928
	ctx.r5.s64 = ctx.r10.s64 + -28928;
	// addi r4,r9,-28948
	ctx.r4.s64 = ctx.r9.s64 + -28948;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8227fef8
	ctx.lr = 0x82103C44;
	sub_8227FEF8(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// sth r8,192(r31)
	PPC_STORE_U16(ctx.r31.u32 + 192, ctx.r8.u16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103ac0
	ctx.lr = 0x82103C5C;
	sub_82103AC0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82103c7c
	if (!ctx.cr6.eq) goto loc_82103C7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28992
	ctx.r4.s64 = ctx.r11.s64 + -28992;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103C7C;
	sub_822830E8(ctx, base);
loc_82103C7C:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82103C8C;
	sub_822E7E98(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,8368
	ctx.r1.s64 = ctx.r1.s64 + 8368;
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

PPC_WEAK_FUNC(sub_82103BF0) {
	__imp__sub_82103BF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82103CB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r26,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r26.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82103CD8:
	// lhz r11,192(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103d24
	if (ctx.cr6.eq) goto loc_82103D24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82103CF0;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82103cfc
	if (!ctx.cr6.eq) goto loc_82103CFC;
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_82103CFC:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e8058
	ctx.lr = 0x82103D08;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82103d14
	if (!ctx.cr6.eq) goto loc_82103D14;
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_82103D14:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,196
	ctx.r31.s64 = ctx.r31.s64 + 196;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// blt cr6,0x82103cd8
	if (ctx.cr6.lt) goto loc_82103CD8;
loc_82103D24:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103d3c
	if (ctx.cr6.eq) goto loc_82103D3C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82103e30
	if (!ctx.cr6.eq) goto loc_82103E30;
loc_82103D3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r29,64
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 64, ctx.xer);
	// addi r25,r11,-28900
	ctx.r25.s64 = ctx.r11.s64 + -28900;
	// bne cr6,0x82103d58
	if (!ctx.cr6.eq) goto loc_82103D58;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103D58;
	sub_822830E8(ctx, base);
loc_82103D58:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mulli r11,r29,196
	ctx.r11.s64 = ctx.r29.s64 * 196;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82103d80
	if (!ctx.cr6.eq) goto loc_82103D80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82103bf0
	ctx.lr = 0x82103D78;
	sub_82103BF0(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// b 0x82103d8c
	goto loc_82103D8C;
loc_82103D80:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82103bf0
	ctx.lr = 0x82103D88;
	sub_82103BF0(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_82103D8C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103da4
	if (ctx.cr6.eq) goto loc_82103DA4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82103e30
	if (!ctx.cr6.eq) goto loc_82103E30;
loc_82103DA4:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r11,r27,388
	ctx.r11.s64 = ctx.r27.s64 + 388;
loc_82103DAC:
	// lhz r9,-196(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -196);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103e04
	if (ctx.cr6.eq) goto loc_82103E04;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103df0
	if (ctx.cr6.eq) goto loc_82103DF0;
	// lhz r9,196(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 196);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103df8
	if (ctx.cr6.eq) goto loc_82103DF8;
	// lhz r9,392(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 392);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82103e00
	if (ctx.cr6.eq) goto loc_82103E00;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,784
	ctx.r11.s64 = ctx.r11.s64 + 784;
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// blt cr6,0x82103dac
	if (ctx.cr6.lt) goto loc_82103DAC;
	// b 0x82103e04
	goto loc_82103E04;
loc_82103DF0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82103e04
	goto loc_82103E04;
loc_82103DF8:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82103e04
	goto loc_82103E04;
loc_82103E00:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
loc_82103E04:
	// cmpwi cr6,r31,64
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 64, ctx.xer);
	// bne cr6,0x82103e18
	if (!ctx.cr6.eq) goto loc_82103E18;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103E18;
	sub_822830E8(ctx, base);
loc_82103E18:
	// mulli r11,r31,196
	ctx.r11.s64 = ctx.r31.s64 * 196;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82103bf0
	ctx.lr = 0x82103E2C;
	sub_82103BF0(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_82103E30:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103CA8) {
	__imp__sub_82103CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82103E3C) {
	__imp__sub_82103E3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103E40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82103E48;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8448(r1)
	ea = -8448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r11,-28912
	ctx.r3.s64 = ctx.r11.s64 + -28912;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822e84f0
	ctx.lr = 0x82103E74;
	sub_822E84F0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r5,r10,-28716
	ctx.r5.s64 = ctx.r10.s64 + -28716;
	// addi r4,r9,-28736
	ctx.r4.s64 = ctx.r9.s64 + -28736;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// bl 0x8227fef8
	ctx.lr = 0x82103E8C;
	sub_8227FEF8(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r8,-28752
	ctx.r4.s64 = ctx.r8.s64 + -28752;
	// bl 0x822e8678
	ctx.lr = 0x82103E9C;
	sub_822E8678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7e98
	ctx.lr = 0x82103EAC;
	sub_822E7E98(ctx, base);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r7,-28768
	ctx.r4.s64 = ctx.r7.s64 + -28768;
	// bl 0x822e8678
	ctx.lr = 0x82103EBC;
	sub_822E8678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e7e98
	ctx.lr = 0x82103ECC;
	sub_822E7E98(ctx, base);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// addi r9,r6,15008
	ctx.r9.s64 = ctx.r6.s64 + 15008;
	// addi r4,r5,612
	ctx.r4.s64 = ctx.r5.s64 + 612;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ea3f8
	ctx.lr = 0x82103EF4;
	sub_822EA3F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82103f08
	if (!ctx.cr6.eq) goto loc_82103F08;
loc_82103EFC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,8448
	ctx.r1.s64 = ctx.r1.s64 + 8448;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82103F08:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82103f3c
	if (ctx.cr6.eq) goto loc_82103F3C;
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
	// bne cr6,0x82103f3c
	if (!ctx.cr6.eq) goto loc_82103F3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28848
	ctx.r4.s64 = ctx.r11.s64 + -28848;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82103F3C;
	sub_822830E8(ctx, base);
loc_82103F3C:
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82103ca8
	ctx.lr = 0x82103F50;
	sub_82103CA8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82103efc
	if (ctx.cr6.eq) goto loc_82103EFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,12240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,8448
	ctx.r1.s64 = ctx.r1.s64 + 8448;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103E40) {
	__imp__sub_82103E40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82103F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82103F88;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r3,15120
	ctx.r10.s64 = ctx.r3.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// li r5,15120
	ctx.r5.s64 = 15120;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822dd778
	ctx.lr = 0x82103FAC;
	sub_822DD778(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r31,1170
	ctx.r31.s64 = 1170;
	// addi r29,r28,12572
	ctx.r29.s64 = ctx.r28.s64 + 12572;
	// li r27,31
	ctx.r27.s64 = 31;
	// addi r26,r11,-28708
	ctx.r26.s64 = ctx.r11.s64 + -28708;
loc_82103FC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821201a0
	ctx.lr = 0x82103FC8;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104008
	if (ctx.cr6.eq) goto loc_82104008;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82103e40
	ctx.lr = 0x82103FEC;
	sub_82103E40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82104008
	if (!ctx.cr6.eq) goto loc_82104008;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82104008;
	sub_822830E8(ctx, base);
loc_82104008:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82103fc0
	if (!ctx.cr0.eq) goto loc_82103FC0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82103F80) {
	__imp__sub_82103F80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104020) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104020) {
	__imp__sub_82104020(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,380(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82104050
	if (ctx.cr6.eq) goto loc_82104050;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// b 0x82104054
	goto loc_82104054;
loc_82104050:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82104054:
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// stw r9,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104038) {
	__imp__sub_82104038(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104074) {
	__imp__sub_82104074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// lwz r7,380(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// clrlwi r6,r7,31
	ctx.r6.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821040b8
	if (ctx.cr6.eq) goto loc_821040B8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u32);
	// blr 
	return;
loc_821040B8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104078) {
	__imp__sub_82104078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821040CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821040CC) {
	__imp__sub_821040CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821040D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,48(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
loc_821040E8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8210410c
	if (!ctx.cr6.eq) goto loc_8210410C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x821040e8
	if (ctx.cr6.lt) goto loc_821040E8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8210410C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821040D0) {
	__imp__sub_821040D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104114) {
	__imp__sub_82104114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,-32187
	ctx.r10.s64 = -2109407232;
	// ori r9,r11,61924
	ctx.r9.u64 = ctx.r11.u64 | 61924;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r10,-15680
	ctx.r10.s64 = ctx.r10.s64 + -15680;
	// mullw r9,r3,r9
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r7,r4,48
	ctx.r7.s64 = ctx.r4.s64 + 48;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r3,r10,22912
	ctx.r3.u64 = ctx.r10.u64 | 22912;
	// addi r5,r11,-5696
	ctx.r5.s64 = ctx.r11.s64 + -5696;
loc_8210415C:
	// lwz r11,-48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -48);
	// addi r10,r7,-48
	ctx.r10.s64 = ctx.r7.s64 + -48;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104294
	if (ctx.cr6.eq) goto loc_82104294;
	// lwz r11,-36(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82104228
	if (!ctx.cr6.eq) goto loc_82104228;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r9,-28(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r9,r9,404
	ctx.r9.s64 = ctx.r9.s64 * 404;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lwz r8,380(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821041b8
	if (ctx.cr6.eq) goto loc_821041B8;
	// lwz r8,328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// b 0x821041bc
	goto loc_821041BC;
loc_821041B8:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_821041BC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r9,380(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 380);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8210421c
	if (ctx.cr6.eq) goto loc_8210421C;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r11,r7,-16
	ctx.r11.s64 = ctx.r7.s64 + -16;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_821041F0:
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82104280
	if (!ctx.cr6.eq) goto loc_82104280;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x821041f0
	if (ctx.cr6.lt) goto loc_821041F0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82104210:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82104228
	if (!ctx.cr6.eq) goto loc_82104228;
loc_8210421C:
	// lbz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82104288
	if (!ctx.cr6.eq) goto loc_82104288;
loc_82104228:
	// lwzx r11,r31,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r8.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// fadds f8,f10,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f8,f7
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// bgt cr6,0x82104294
	if (ctx.cr6.gt) goto loc_82104294;
	// lbz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82104288
	if (ctx.cr6.eq) goto loc_82104288;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82104294
	goto loc_82104294;
loc_82104280:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// b 0x82104210
	goto loc_82104210;
loc_82104288:
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_82104294:
	// addi r7,r7,52
	ctx.r7.s64 = ctx.r7.s64 + 52;
	// bdnz 0x8210415c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210415C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104118) {
	__imp__sub_82104118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821042A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x821042B0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de018
	ctx.lr = 0x821042B8;
	__savefpr_24(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ori r8,r11,61924
	ctx.r8.u64 = ctx.r11.u64 | 61924;
	// lis r7,-32187
	ctx.r7.s64 = -2109407232;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f27,2424(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2424);
	ctx.f27.f64 = double(temp.f32);
	// fmr f25,f27
	ctx.f25.f64 = ctx.f27.f64;
	// addi r11,r7,-15680
	ctx.r11.s64 = ctx.r7.s64 + -15680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lfs f28,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lfs f26,6232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6232);
	ctx.f26.f64 = double(temp.f32);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lfs f29,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r31,r4,28
	ctx.r31.s64 = ctx.r4.s64 + 28;
	// li r25,32
	ctx.r25.s64 = 32;
	// ori r26,r7,22912
	ctx.r26.u64 = ctx.r7.u64 | 22912;
	// ori r24,r6,23180
	ctx.r24.u64 = ctx.r6.u64 | 23180;
	// addi r27,r11,-5696
	ctx.r27.s64 = ctx.r11.s64 + -5696;
loc_82104324:
	// lwz r30,-28(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821044b0
	if (ctx.cr6.eq) goto loc_821044B0;
	// lwz r11,-24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r10,r28,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
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
	// fdivs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// fsubs f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fneg f8,f10
	ctx.f8.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f7,f9,f29,f10
	ctx.f7.f64 = ctx.f9.f64 >= 0.0 ? ctx.f29.f64 : ctx.f10.f64;
	// fsel f30,f8,f28,f7
	ctx.f30.f64 = ctx.f8.f64 >= 0.0 ? ctx.f28.f64 : ctx.f7.f64;
	// beq cr6,0x82104428
	if (ctx.cr6.eq) goto loc_82104428;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821043c0
	if (!ctx.cr6.eq) goto loc_821043C0;
	// lwz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r27,28
	ctx.r11.s64 = ctx.r27.s64 + 28;
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mulli r10,r10,404
	ctx.r10.s64 = ctx.r10.s64 * 404;
	// lfs f13,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f11,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lfs f9,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f12,f7
	ctx.f6.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fmuls f5,f10,f10
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f4,f8,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f8.f64 + ctx.f5.f64));
	// b 0x821043ec
	goto loc_821043EC;
loc_821043C0:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfs f8,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f9,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
loc_821043EC:
	// fmadds f3,f6,f6,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// lfs f0,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsqrts f13,f3
	ctx.f13.f64 = double(float(sqrt(ctx.f3.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821044b0
	if (ctx.cr6.gt) goto loc_821044B0;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82104440
	if (ctx.cr6.eq) goto loc_82104440;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f29.f64));
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f11,f13,f29,f0
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
	// fsel f10,f12,f28,f11
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f28.f64 : ctx.f11.f64;
	// fsubs f31,f29,f10
	ctx.f31.f64 = double(float(ctx.f29.f64 - ctx.f10.f64));
	// b 0x82104444
	goto loc_82104444;
loc_82104428:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82104440
	if (!ctx.cr6.eq) goto loc_82104440;
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// lwzx r10,r28,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r24.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821044b0
	if (!ctx.cr6.eq) goto loc_821044B0;
loc_82104440:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
loc_82104444:
	// lbz r8,-12(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + -12);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lhz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 192);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f24,f12,f26
	ctx.f24.f64 = double(float(ctx.f12.f64 * ctx.f26.f64));
	// bl 0x822d45d8
	ctx.lr = 0x82104470;
	sub_822D45D8(ctx, base);
	// fmuls f11,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// lhz r3,192(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 192);
	// fmuls f30,f11,f31
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// bl 0x822d45d8
	ctx.lr = 0x8210448C;
	sub_822D45D8(ctx, base);
	// fmuls f10,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f24.f64));
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// fmuls f0,f10,f31
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// ble cr6,0x821044a0
	if (!ctx.cr6.gt) goto loc_821044A0;
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
loc_821044A0:
	// fcmpu cr6,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x821044ac
	if (!ctx.cr6.gt) goto loc_821044AC;
	// fmr f25,f0
	ctx.f25.f64 = ctx.f0.f64;
loc_821044AC:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_821044B0:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// bne 0x82104324
	if (!ctx.cr0.eq) goto loc_82104324;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bne cr6,0x821044e0
	if (!ctx.cr6.eq) goto loc_821044E0;
	// bl 0x82141340
	ctx.lr = 0x821044CC;
	sub_82141340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82308238
	ctx.lr = 0x821044D8;
	sub_82308238(ctx, base);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// b 0x821044f4
	goto loc_821044F4;
loc_821044E0:
	// bl 0x82141340
	ctx.lr = 0x821044E4;
	sub_82141340(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x82308238
	ctx.lr = 0x821044F0;
	sub_82308238(ctx, base);
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
loc_821044F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82308250
	ctx.lr = 0x821044FC;
	sub_82308250(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x823de064
	ctx.lr = 0x82104508;
	__restfpr_24(ctx, base);
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821042A8) {
	__imp__sub_821042A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210450C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210450C) {
	__imp__sub_8210450C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82104518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r3,15120
	ctx.r10.s64 = ctx.r3.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r31,13440
	ctx.r30.s64 = ctx.r31.s64 + 13440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82104118
	ctx.lr = 0x8210453C;
	sub_82104118(ctx, base);
	// addi r5,r31,15104
	ctx.r5.s64 = ctx.r31.s64 + 15104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821042a8
	ctx.lr = 0x8210454C;
	sub_821042A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104510) {
	__imp__sub_82104510(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104554) {
	__imp__sub_82104554(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104558) {
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
	// li r31,1
	ctx.r31.s64 = 1;
loc_82104574:
	// addi r3,r31,1169
	ctx.r3.s64 = ctx.r31.s64 + 1169;
	// bl 0x821201a0
	ctx.lr = 0x8210457C;
	sub_821201A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82104584:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x821045a8
	if (ctx.cr6.eq) goto loc_821045A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82104584
	if (ctx.cr6.eq) goto loc_82104584;
loc_821045A8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821045d8
	if (ctx.cr6.eq) goto loc_821045D8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// blt cr6,0x82104574
	if (ctx.cr6.lt) goto loc_82104574;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821045C0:
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
loc_821045D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821045c0
	goto loc_821045C0;
}

PPC_WEAK_FUNC(sub_82104558) {
	__imp__sub_82104558(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821045E0) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,22912
	ctx.r10.u64 = ctx.r10.u64 | 22912;
loc_8210460C:
	// lbz r6,-56(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -56);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210466c
	if (!ctx.cr6.eq) goto loc_8210466C;
	// lwz r7,-52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82104630
	if (!ctx.cr6.eq) goto loc_82104630;
	// lwz r7,-44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210466c
	if (ctx.cr6.eq) goto loc_8210466C;
loc_82104630:
	// lwz r7,-60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r5,-64(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fdivs f13,f10,f11
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8210466c
	if (!ctx.cr6.gt) goto loc_8210466C;
	// addi r3,r9,-2
	ctx.r3.s64 = ctx.r9.s64 + -2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8210466C:
	// lbz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821046cc
	if (!ctx.cr6.eq) goto loc_821046CC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82104690
	if (!ctx.cr6.eq) goto loc_82104690;
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x821046cc
	if (ctx.cr6.eq) goto loc_821046CC;
loc_82104690:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r5,-12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821046cc
	if (!ctx.cr6.gt) goto loc_821046CC;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821046CC:
	// lbz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 48);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210472c
	if (!ctx.cr6.eq) goto loc_8210472C;
	// lwz r7,52(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x821046f0
	if (!ctx.cr6.eq) goto loc_821046F0;
	// lwz r7,60(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210472c
	if (ctx.cr6.eq) goto loc_8210472C;
loc_821046F0:
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8210472c
	if (!ctx.cr6.gt) goto loc_8210472C;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8210472C:
	// lbz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 100);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8210478c
	if (!ctx.cr6.eq) goto loc_8210478C;
	// lwz r7,104(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82104750
	if (!ctx.cr6.eq) goto loc_82104750;
	// lwz r7,112(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8210478c
	if (ctx.cr6.eq) goto loc_8210478C;
loc_82104750:
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r5,92(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// subf r4,r7,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r7.s64;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8210478c
	if (!ctx.cr6.gt) goto loc_8210478C;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8210478C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// addi r7,r9,-2
	ctx.r7.s64 = ctx.r9.s64 + -2;
	// cmpwi cr6,r7,32
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32, ctx.xer);
	// blt cr6,0x8210460c
	if (ctx.cr6.lt) goto loc_8210460C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bne cr6,0x821047bc
	if (!ctx.cr6.eq) goto loc_821047BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,16
	ctx.r3.s64 = 16;
	// addi r4,r11,-28656
	ctx.r4.s64 = ctx.r11.s64 + -28656;
	// bl 0x82280c30
	ctx.lr = 0x821047B8;
	sub_82280C30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821047BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821045E0) {
	__imp__sub_821045E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821047CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821047CC) {
	__imp__sub_821047CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821047D0) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r4,108
	ctx.r11.s64 = ctx.r4.s64 + 108;
loc_821047EC:
	// lwz r8,-104(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -104);
	// addi r10,r11,-108
	ctx.r10.s64 = ctx.r11.s64 + -108;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82104854
	if (!ctx.cr6.gt) goto loc_82104854;
	// lwz r8,-52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// addi r10,r11,-56
	ctx.r10.s64 = ctx.r11.s64 + -56;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82104840
	if (!ctx.cr6.gt) goto loc_82104840;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82104848
	if (!ctx.cr6.gt) goto loc_82104848;
	// lwz r8,52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82104850
	if (!ctx.cr6.gt) goto loc_82104850;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 + 208;
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// blt cr6,0x821047ec
	if (ctx.cr6.lt) goto loc_821047EC;
	// b 0x82104854
	goto loc_82104854;
loc_82104840:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82104854
	goto loc_82104854;
loc_82104848:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// b 0x82104854
	goto loc_82104854;
loc_82104850:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
loc_82104854:
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// bne cr6,0x82104880
	if (!ctx.cr6.eq) goto loc_82104880;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821045e0
	ctx.lr = 0x82104864;
	sub_821045E0(ctx, base);
	// mulli r11,r3,52
	ctx.r11.s64 = ctx.r3.s64 * 52;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
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
loc_82104880:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
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

PPC_WEAK_FUNC(sub_821047D0) {
	__imp__sub_821047D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x821048A0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82104558
	ctx.lr = 0x821048E8;
	sub_82104558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82104908
	if (!ctx.cr6.lt) goto loc_82104908;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-28152
	ctx.r4.s64 = ctx.r11.s64 + -28152;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82104908;
	sub_822830E8(ctx, base);
loc_82104908:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r27,15120
	ctx.r10.s64 = ctx.r27.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// addi r9,r31,448
	ctx.r9.s64 = ctx.r31.s64 + 448;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r9,28
	ctx.r11.s64 = ctx.r9.s64 * 28;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r24,r26,13440
	ctx.r24.s64 = ctx.r26.s64 + 13440;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82104948
	if (!ctx.cr6.eq) goto loc_82104948;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-28288
	ctx.r4.s64 = ctx.r11.s64 + -28288;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x82104948;
	sub_822830E8(ctx, base);
loc_82104948:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821047d0
	ctx.lr = 0x82104954;
	sub_821047D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// bne cr6,0x82104a24
	if (!ctx.cr6.eq) goto loc_82104A24;
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mulli r10,r28,404
	ctx.r10.s64 = ctx.r28.s64 * 404;
	// addi r11,r11,-5696
	ctx.r11.s64 = ctx.r11.s64 + -5696;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x821049e4
	if (!ctx.cr6.eq) goto loc_821049E4;
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82104b1c
	if (ctx.cr6.eq) goto loc_82104B1C;
	// lbz r6,208(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 208);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// beq cr6,0x821049e4
	if (ctx.cr6.eq) goto loc_821049E4;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f3,120(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lfs f1,112(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r9,-28408
	ctx.r4.s64 = ctx.r9.s64 + -28408;
	// stfd f3,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f1,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280b08
	ctx.lr = 0x821049D4;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_821049E4:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82104a00
	if (ctx.cr6.eq) goto loc_82104A00;
	// lwz r11,328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// b 0x82104a04
	goto loc_82104A04;
loc_82104A00:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82104A04:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// b 0x82104a90
	goto loc_82104A90;
loc_82104A24:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82104a78
	if (!ctx.cr6.eq) goto loc_82104A78;
	// lfs f2,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r4,r11,-28504
	ctx.r4.s64 = ctx.r11.s64 + -28504;
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// li r3,16
	ctx.r3.s64 = 16;
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x82280b08
	ctx.lr = 0x82104A68;
	sub_82280B08(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82104A78:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,28(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82104A90:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,22912
	ctx.r9.u64 = ctx.r11.u64 | 22912;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r7,r22,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r9.u32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// lfs f30,12168(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stb r21,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r21.u8);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// blt cr6,0x82104acc
	if (ctx.cr6.lt) goto loc_82104ACC;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// ble cr6,0x82104af0
	if (!ctx.cr6.gt) goto loc_82104AF0;
loc_82104ACC:
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r11,-28552
	ctx.r4.s64 = ctx.r11.s64 + -28552;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82280c30
	ctx.lr = 0x82104AEC;
	sub_82280C30(ctx, base);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f30.f64;
loc_82104AF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r26,15104
	ctx.r5.s64 = ctx.r26.s64 + 15104;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f0,3100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fctidz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lbz r10,87(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
	// bl 0x821042a8
	ctx.lr = 0x82104B1C;
	sub_821042A8(ctx, base);
loc_82104B1C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104898) {
	__imp__sub_82104898(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104B2C) {
	__imp__sub_82104B2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104B30) {
	__imp__sub_82104B30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104B4C) {
	__imp__sub_82104B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104B50) {
	__imp__sub_82104B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104B6C) {
	__imp__sub_82104B6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104B70) {
	__imp__sub_82104B70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104B8C) {
	__imp__sub_82104B8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104B90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104B90) {
	__imp__sub_82104B90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104BAC) {
	__imp__sub_82104BAC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104BB0) {
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f1,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r11,23180
	ctx.r9.s64 = ctx.r11.s64 + 23180;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104BB0) {
	__imp__sub_82104BB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104BE8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82104558
	ctx.lr = 0x82104C0C;
	sub_82104558(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82104c2c
	if (!ctx.cr6.lt) goto loc_82104C2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-28076
	ctx.r4.s64 = ctx.r11.s64 + -28076;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280c30
	ctx.lr = 0x82104C28;
	sub_82280C30(ctx, base);
	// b 0x82104c6c
	goto loc_82104C6C;
loc_82104C2C:
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r5,r31,r8
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r8.s32);
	// lfs f1,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r11,23180
	ctx.r6.s64 = ctx.r11.s64 + 23180;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r5,r6
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82104898
	ctx.lr = 0x82104C6C;
	sub_82104898(ctx, base);
loc_82104C6C:
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

PPC_WEAK_FUNC(sub_82104BE8) {
	__imp__sub_82104BE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82104C84) {
	__imp__sub_82104C84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104C88) {
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
	// addi r11,r11,23180
	ctx.r11.s64 = ctx.r11.s64 + 23180;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104C88) {
	__imp__sub_82104C88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104CB8) {
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
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mullw r10,r3,r8
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// lfs f1,12168(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r11,23180
	ctx.r9.s64 = ctx.r11.s64 + 23180;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// b 0x82104898
	sub_82104898(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104CB8) {
	__imp__sub_82104CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104CF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82104CF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r3,15120
	ctx.r10.s64 = ctx.r3.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82104D24:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82104d88
	if (!ctx.cr6.gt) goto loc_82104D88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82104d88
	if (!ctx.cr6.eq) goto loc_82104D88;
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821201a0
	ctx.lr = 0x82104D48;
	sub_821201A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82104d88
	if (!ctx.cr6.eq) goto loc_82104D88;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82104D5C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq cr6,0x82104d80
	if (ctx.cr6.eq) goto loc_82104D80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82104d5c
	if (ctx.cr6.eq) goto loc_82104D5C;
loc_82104D80:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82104da0
	if (ctx.cr6.eq) goto loc_82104DA0;
loc_82104D88:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,52
	ctx.r31.s64 = ctx.r31.s64 + 52;
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// blt cr6,0x82104d24
	if (ctx.cr6.lt) goto loc_82104D24;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82104DA0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104CF0) {
	__imp__sub_82104CF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104DB8) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// mulli r9,r3,15120
	ctx.r9.s64 = ctx.r3.s64 * 15120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,13440
	ctx.r11.s64 = ctx.r11.s64 + 13440;
	// li r10,-1
	ctx.r10.s64 = -1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-40
	ctx.r11.s64 = ctx.r11.s64 + -40;
loc_82104DF4:
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r31,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r31.u32);
	// stwu r31,52(r11)
	ea = 52 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82104df4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82104DF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
loc_82104E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82308238
	ctx.lr = 0x82104E18;
	sub_82308238(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82308250
	ctx.lr = 0x82104E24;
	sub_82308250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82307c40
	ctx.lr = 0x82104E2C;
	sub_82307C40(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x82104e0c
	if (ctx.cr6.lt) goto loc_82104E0C;
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

PPC_WEAK_FUNC(sub_82104DB8) {
	__imp__sub_82104DB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mulli r10,r3,15120
	ctx.r10.s64 = ctx.r3.s64 * 15120;
	// addi r11,r11,22728
	ctx.r11.s64 = ctx.r11.s64 + 22728;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r4,15116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15116, ctx.r4.u32);
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,15104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15104, temp.u32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,15108(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15108, temp.u32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,15112(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 15112, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104E50) {
	__imp__sub_82104E50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104E80) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,12544
	ctx.r11.s64 = ctx.r3.s64 + 12544;
loc_82104E88:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82104ea8
	if (ctx.cr6.eq) goto loc_82104EA8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// blt cr6,0x82104e88
	if (ctx.cr6.lt) goto loc_82104E88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82104EA8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82104E80) {
	__imp__sub_82104E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82104EB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf68
	ctx.lr = 0x82104EB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822e4928
	ctx.lr = 0x82104EC4;
	sub_822E4928(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// clrlwi r24,r3,24
	ctx.r24.u64 = ctx.r3.u32 & 0xFF;
	// addi r28,r11,22728
	ctx.r28.s64 = ctx.r11.s64 + 22728;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r29,r28,13444
	ctx.r29.s64 = ctx.r28.s64 + 13444;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
loc_82104EE0:
	// addi r30,r29,-4
	ctx.r30.s64 = ctx.r29.s64 + -4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x82104fb0
	if (ctx.cr6.eq) goto loc_82104FB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104fa4
	if (ctx.cr6.eq) goto loc_82104FA4;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// bl 0x822e40f0
	ctx.lr = 0x82104F0C;
	sub_822E40F0(ctx, base);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r10,12544
	ctx.r10.s64 = 12544;
	// addi r11,r28,12544
	ctx.r11.s64 = ctx.r28.s64 + 12544;
loc_82104F1C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82104f3c
	if (ctx.cr6.eq) goto loc_82104F3C;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// cmpwi cr6,r10,13440
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13440, ctx.xer);
	// blt cr6,0x82104f1c
	if (ctx.cr6.lt) goto loc_82104F1C;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
loc_82104F3C:
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82104F50;
	sub_822E40F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e40f0
	ctx.lr = 0x82104F68;
	sub_822E40F0(ctx, base);
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// bl 0x822e40f0
	ctx.lr = 0x82104F80;
	sub_822E40F0(ctx, base);
	// addi r5,r30,12
	ctx.r5.s64 = ctx.r30.s64 + 12;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82104F90;
	sub_822E40F0(ctx, base);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e40f0
	ctx.lr = 0x82104FA0;
	sub_822E40F0(ctx, base);
	// b 0x82105048
	goto loc_82105048;
loc_82104FA4:
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// bl 0x822e40f0
	ctx.lr = 0x82104FAC;
	sub_822E40F0(ctx, base);
	// b 0x82105048
	goto loc_82105048;
loc_82104FB0:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// bl 0x822e4480
	ctx.lr = 0x82104FB8;
	sub_822E4480(ctx, base);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82104fd4
	if (!ctx.cr6.eq) goto loc_82104FD4;
	// stw r25,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r25.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x82105048
	goto loc_82105048;
loc_82104FD4:
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82104FE4;
	sub_822E4480(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82104FF4;
	sub_822E4480(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x822e4480
	ctx.lr = 0x8210500C;
	sub_822E4480(ctx, base);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// addi r5,r29,8
	ctx.r5.s64 = ctx.r29.s64 + 8;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r10.u8);
	// bl 0x822e4480
	ctx.lr = 0x82105024;
	sub_822E4480(ctx, base);
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4480
	ctx.lr = 0x82105034;
	sub_822E4480(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r28,12544
	ctx.r11.s64 = ctx.r28.s64 + 12544;
	// mulli r10,r9,28
	ctx.r10.s64 = ctx.r9.s64 * 28;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
loc_82105048:
	// addi r29,r29,52
	ctx.r29.s64 = ctx.r29.s64 + 52;
	// addi r11,r28,15108
	ctx.r11.s64 = ctx.r28.s64 + 15108;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82104ee0
	if (ctx.cr6.lt) goto loc_82104EE0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r28,15104
	ctx.r5.s64 = ctx.r28.s64 + 15104;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82105070;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r28,15116
	ctx.r5.s64 = ctx.r28.s64 + 15116;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82105088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb8
	__restgprlr_24(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82104EB0) {
	__imp__sub_82104EB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105090) {
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
	// bl 0x820fc308
	ctx.lr = 0x821050A8;
	sub_820FC308(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821050d0
	if (ctx.cr6.eq) goto loc_821050D0;
loc_821050B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
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
loc_821050D0:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r10,r11,18524
	ctx.r10.u64 = ctx.r11.u64 | 18524;
	// lwzx r9,r31,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82105100
	if (ctx.cr6.eq) goto loc_82105100;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,12168(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f1.f64 = double(temp.f32);
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
loc_82105100:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,18528
	ctx.r9.u64 = ctx.r11.u64 | 18528;
	// ori r8,r10,22912
	ctx.r8.u64 = ctx.r10.u64 | 22912;
	// li r6,300
	ctx.r6.s64 = 300;
	// li r5,300
	ctx.r5.s64 = 300;
	// lwzx r4,r31,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r3,r31,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// bl 0x820eabe0
	ctx.lr = 0x82105124;
	sub_820EABE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821050b4
	if (ctx.cr6.eq) goto loc_821050B4;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
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

PPC_WEAK_FUNC(sub_82105090) {
	__imp__sub_82105090(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82105144) {
	__imp__sub_82105144(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105148) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82105090
	ctx.lr = 0x82105164;
	sub_82105090(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// beq cr6,0x821051c4
	if (ctx.cr6.eq) goto loc_821051C4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f990
	ctx.lr = 0x82105184;
	sub_8211F990(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f3,f11
	ctx.f3.f64 = double(float(ctx.f11.f64));
	// frsp f4,f12
	ctx.f4.f64 = double(float(ctx.f12.f64));
	// bl 0x822b8090
	ctx.lr = 0x821051C4;
	sub_822B8090(ctx, base);
loc_821051C4:
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

PPC_WEAK_FUNC(sub_82105148) {
	__imp__sub_82105148(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821051DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821051DC) {
	__imp__sub_821051DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821051E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821051E8;
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
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82105090
	ctx.lr = 0x8210522C;
	sub_82105090(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82105334
	if (ctx.cr6.eq) goto loc_82105334;
	// stfs f1,12(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-28016
	ctx.r3.s64 = ctx.r11.s64 + -28016;
	// bl 0x822c4080
	ctx.lr = 0x8210524C;
	sub_822C4080(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82141160
	ctx.lr = 0x82105258;
	sub_82141160(ctx, base);
	// lis r5,32767
	ctx.r5.s64 = 2147418112;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// ori r5,r5,65535
	ctx.r5.u64 = ctx.r5.u64 | 65535;
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lfs f2,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x822c1ce8
	ctx.lr = 0x8210528C;
	sub_822C1CE8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82140648
	ctx.lr = 0x8210529C;
	sub_82140648(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82140648
	ctx.lr = 0x821052B4;
	sub_82140648(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f30,f1,f31
	ctx.f30.f64 = double(float(ctx.f1.f64 - ctx.f31.f64));
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5488(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fadds f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821052E4;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r5,17(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f1,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f7,112(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f29,f6
	ctx.f29.f64 = double(float(ctx.f6.f64));
	// bl 0x82140788
	ctx.lr = 0x82105318;
	sub_82140788(ctx, base);
	// fmr f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f1.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fadds f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
	// bl 0x822b8090
	ctx.lr = 0x82105334;
	sub_822B8090(ctx, base);
loc_82105334:
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

PPC_WEAK_FUNC(sub_821051E0) {
	__imp__sub_821051E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82105350;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8210542c
	if (ctx.cr6.eq) goto loc_8210542C;
loc_82105394:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// bl 0x822b7e18
	ctx.lr = 0x821053A4;
	sub_822B7E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10, ctx.xer);
	// beq cr6,0x82105448
	if (ctx.cr6.eq) goto loc_82105448;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821053d4
	if (ctx.cr6.eq) goto loc_821053D4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c1bf8
	ctx.lr = 0x821053D0;
	sub_822C1BF8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821053D4:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// ble cr6,0x82105414
	if (!ctx.cr6.gt) goto loc_82105414;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x82105464
	if (ctx.cr6.gt) goto loc_82105464;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821053f4
	if (ctx.cr6.eq) goto loc_821053F4;
	// cmpw cr6,r27,r22
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r22.s32, ctx.xer);
	// bgt cr6,0x82105464
	if (ctx.cr6.gt) goto loc_82105464;
loc_821053F4:
	// bl 0x822b7ae0
	ctx.lr = 0x821053F8;
	sub_822B7AE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82105414
	if (!ctx.cr6.eq) goto loc_82105414;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105394
	if (!ctx.cr6.eq) goto loc_82105394;
	// b 0x82105418
	goto loc_82105418;
loc_82105414:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82105418:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105394
	if (!ctx.cr6.eq) goto loc_82105394;
loc_8210542C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82105438
	if (ctx.cr6.eq) goto loc_82105438;
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
loc_82105438:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82105448:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82105454
	if (ctx.cr6.eq) goto loc_82105454;
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_82105454:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_82105464:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82105474
	if (!ctx.cr6.eq) goto loc_82105474;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// addi r25,r31,-1
	ctx.r25.s64 = ctx.r31.s64 + -1;
loc_82105474:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82105480
	if (ctx.cr6.eq) goto loc_82105480;
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
loc_82105480:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82105348) {
	__imp__sub_82105348(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf44
	ctx.lr = 0x82105498;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de004
	ctx.lr = 0x821054A0;
	__savefpr_19(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f1.f64;
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
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// bl 0x82105090
	ctx.lr = 0x821054DC;
	sub_82105090(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f22,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f22.f64 = double(temp.f32);
	// fcmpu cr6,f1,f22
	ctx.cr6.compare(ctx.f1.f64, ctx.f22.f64);
	// beq cr6,0x821057fc
	if (ctx.cr6.eq) goto loc_821057FC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,156(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,188(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f1,172(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f1,204(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// lfs f0,2832(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2832);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f23,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f23.f64 = double(temp.f32);
	// lfs f13,20208(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 20208);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4292(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4292);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,6032(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 6032);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f23,176(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f23,180(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f23,184(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,160(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f13,164(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f13,168(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f11,192(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f12,196(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f12,200(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// bl 0x822c1c70
	ctx.lr = 0x82105560;
	sub_822C1C70(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// std r6,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f28,f12
	ctx.f28.f64 = double(float(ctx.f12.f64));
	// fcmpu cr6,f28,f0
	ctx.cr6.compare(ctx.f28.f64, ctx.f0.f64);
	// ble cr6,0x82105588
	if (!ctx.cr6.gt) goto loc_82105588;
	// fmr f26,f28
	ctx.f26.f64 = ctx.f28.f64;
	// b 0x8210558c
	goto loc_8210558C;
loc_82105588:
	// fmr f26,f0
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f0.f64;
loc_8210558C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82141160
	ctx.lr = 0x82105594;
	sub_82141160(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsubs f19,f31,f28
	ctx.f19.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f30,f22
	ctx.f30.f64 = ctx.f22.f64;
	// addis r24,r30,2
	ctx.r24.s64 = ctx.r30.s64 + 131072;
	// lfs f24,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f24.f64 = double(temp.f32);
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// lfs f20,32272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32272);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32187
	ctx.r11.s64 = -2109407232;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f21,13904(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 13904);
	ctx.f21.f64 = double(temp.f32);
	// lis r9,-32181
	ctx.r9.s64 = -2109014016;
	// lfs f27,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f27.f64 = double(temp.f32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r24,r24,21232
	ctx.r24.s64 = ctx.r24.s64 + 21232;
	// li r15,32
	ctx.r15.s64 = 32;
	// ori r21,r6,65535
	ctx.r21.u64 = ctx.r6.u64 | 65535;
	// lis r17,-32188
	ctx.r17.s64 = -2109472768;
	// lis r16,-32187
	ctx.r16.s64 = -2109407232;
	// addi r19,r11,-16984
	ctx.r19.s64 = ctx.r11.s64 + -16984;
	// addi r18,r10,13348
	ctx.r18.s64 = ctx.r10.s64 + 13348;
	// addi r23,r9,-22896
	ctx.r23.s64 = ctx.r9.s64 + -22896;
loc_821055F8:
	// lwz r11,-1132(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + -1132);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x821057a8
	if (ctx.cr6.gt) goto loc_821057A8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82105630
	if (ctx.cr6.eq) goto loc_82105630;
	// bdz 0x82105624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82105624;
	// bdz 0x8210565c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8210565C;
	// bdz 0x82105668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82105668;
	// b 0x82105694
	goto loc_82105694;
loc_82105624:
	// fadds f0,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// fadds f31,f0,f27
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// b 0x821057a8
	goto loc_821057A8;
loc_82105630:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82105650
	if (ctx.cr6.eq) goto loc_82105650;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820fdca0
	ctx.lr = 0x82105644;
	sub_820FDCA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// b 0x8210569c
	goto loc_8210569C;
loc_82105650:
	// lwz r11,16004(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16004);
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
	// b 0x8210569c
	goto loc_8210569C;
loc_8210565C:
	// lwz r11,16012(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16012);
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// b 0x8210569c
	goto loc_8210569C;
loc_82105668:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82105688
	if (ctx.cr6.eq) goto loc_82105688;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820fdca0
	ctx.lr = 0x8210567C;
	sub_820FDCA0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// b 0x8210569c
	goto loc_8210569C;
loc_82105688:
	// lwz r11,16008(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16008);
	// addi r27,r1,176
	ctx.r27.s64 = ctx.r1.s64 + 176;
	// b 0x8210569c
	goto loc_8210569C;
loc_82105694:
	// lwz r11,16016(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16016);
	// addi r27,r1,192
	ctx.r27.s64 = ctx.r1.s64 + 192;
loc_8210569C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821056e0
	if (ctx.cr6.eq) goto loc_821056E0;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// fsubs f30,f31,f4
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lfs f3,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lfs f1,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fmr f8,f23
	ctx.f8.f64 = ctx.f23.f64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// fmr f7,f23
	ctx.f7.f64 = ctx.f23.f64;
	// fmr f6,f22
	ctx.f6.f64 = ctx.f22.f64;
	// fmr f5,f22
	ctx.f5.f64 = ctx.f22.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82120408
	ctx.lr = 0x821056E0;
	sub_82120408(ctx, base);
loc_821056E0:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r24,-1032
	ctx.r3.s64 = ctx.r24.s64 + -1032;
	// bl 0x822b7268
	ctx.lr = 0x821056F0;
	sub_822B7268(ctx, base);
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r19,16
	ctx.r10.s64 = ctx.r19.s64 + 16;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r22,r11
	ctx.r9.u64 = ctx.r22.u64 + ctx.r11.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r8,r9,7,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// lfsx f11,r8,r10
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f20
	ctx.cr6.compare(ctx.f11.f64, ctx.f20.f64);
	// fadds f29,f12,f21
	ctx.f29.f64 = double(float(ctx.f12.f64 + ctx.f21.f64));
	// ble cr6,0x82105728
	if (!ctx.cr6.gt) goto loc_82105728;
	// lwz r11,-17024(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + -17024);
	// b 0x8210572c
	goto loc_8210572C;
loc_82105728:
	// lwz r11,21500(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 21500);
loc_8210572C:
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82105730:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// fmr f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f25.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105348
	ctx.lr = 0x8210574C;
	sub_82105348(ctx, base);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8210579c
	if (ctx.cr6.eq) goto loc_8210579C;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// fsubs f13,f28,f0
	ctx.f13.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r10,17(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// lbz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// fmadds f30,f13,f24,f31
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f24.f64 + ctx.f31.f64));
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822c1ce8
	ctx.lr = 0x82105794;
	sub_822C1CE8(ctx, base);
	// fadds f12,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// fadds f31,f12,f27
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
loc_8210579C:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82105730
	if (!ctx.cr6.eq) goto loc_82105730;
loc_821057A8:
	// addic. r15,r15,-1
	ctx.xer.ca = ctx.r15.u32 > 0;
	ctx.r15.s64 = ctx.r15.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// addi r24,r24,1160
	ctx.r24.s64 = ctx.r24.s64 + 1160;
	// bne 0x821055f8
	if (!ctx.cr0.eq) goto loc_821055F8;
	// fcmpu cr6,f30,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f22.f64);
	// beq cr6,0x821057fc
	if (ctx.cr6.eq) goto loc_821057FC;
	// fsubs f4,f30,f19
	ctx.f4.f64 = double(float(ctx.f30.f64 - ctx.f19.f64));
	// fcmpu cr6,f4,f22
	ctx.cr6.compare(ctx.f4.f64, ctx.f22.f64);
	// beq cr6,0x821057fc
	if (ctx.cr6.eq) goto loc_821057FC;
	// lfs f0,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmr f2,f19
	ctx.f2.f64 = ctx.f19.f64;
	// lfs f0,-27992(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bl 0x822b80e0
	ctx.lr = 0x821057FC;
	sub_822B80E0(ctx, base);
loc_821057FC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x823de050
	ctx.lr = 0x82105808;
	__restfpr_19(ctx, base);
	// b 0x823ddf94
	__restgprlr_15(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82105490) {
	__imp__sub_82105490(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210580C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210580C) {
	__imp__sub_8210580C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82105818;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82105090
	ctx.lr = 0x82105858;
	sub_82105090(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,5484(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82105928
	if (ctx.cr6.eq) goto loc_82105928;
	// stfs f1,12(r29)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822c1c70
	ctx.lr = 0x82105878;
	sub_822C1C70(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f31,f12
	ctx.f31.f64 = double(float(ctx.f12.f64));
	// fsubs f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x82141160
	ctx.lr = 0x8210589C;
	sub_82141160(ctx, base);
	// lis r10,-32153
	ctx.r10.s64 = -2107179008;
	// lfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f0,-16788(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16788);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// bl 0x823dde20
	ctx.lr = 0x821058C0;
	sub_823DDE20(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f8,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f7,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lbz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// fmuls f31,f8,f31
	ctx.f31.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// lfs f0,23112(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23112);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f7,f0
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// fctiwz f6,f9
	ctx.f6.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f29,f4
	ctx.f29.f64 = double(float(ctx.f4.f64));
	// bl 0x82140648
	ctx.lr = 0x82105908;
	sub_82140648(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lbz r9,17(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// li r8,5
	ctx.r8.s64 = 5;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x822b80e0
	ctx.lr = 0x82105928;
	sub_822B80E0(ctx, base);
loc_82105928:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

PPC_WEAK_FUNC(sub_82105810) {
	__imp__sub_82105810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210593C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210593C) {
	__imp__sub_8210593C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105940) {
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
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,6964(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6964);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82105988
	if (ctx.cr6.eq) goto loc_82105988;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-29968(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -29968);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82105988
	if (ctx.cr6.eq) goto loc_82105988;
loc_82105974:
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
loc_82105988:
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
	// ori r7,r8,22928
	ctx.r7.u64 = ctx.r8.u64 | 22928;
	// lwzx r6,r11,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,6
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 6, ctx.xer);
	// bge cr6,0x82105974
	if (!ctx.cr6.lt) goto loc_82105974;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r10,18524
	ctx.r9.u64 = ctx.r10.u64 | 18524;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82105974
	if (ctx.cr6.eq) goto loc_82105974;
	// bl 0x82107030
	ctx.lr = 0x821059CC;
	sub_82107030(ctx, base);
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

PPC_WEAK_FUNC(sub_82105940) {
	__imp__sub_82105940(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821059E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x821059E8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821201a0
	ctx.lr = 0x82105A14;
	sub_821201A0(ctx, base);
	// mulli r11,r31,1160
	ctx.r11.s64 = ctx.r31.s64 * 1160;
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// add r7,r11,r23
	ctx.r7.u64 = ctx.r11.u64 + ctx.r23.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addis r31,r7,2
	ctx.r31.s64 = ctx.r7.s64 + 131072;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r31,r31,1540
	ctx.r31.s64 = ctx.r31.s64 + 1540;
	// bne cr6,0x82105a40
	if (!ctx.cr6.eq) goto loc_82105A40;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82105aac
	goto loc_82105AAC;
loc_82105A40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27920
	ctx.r4.s64 = ctx.r11.s64 + -27920;
	// bl 0x822e8678
	ctx.lr = 0x82105A54;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105a6c
	if (!ctx.cr6.eq) goto loc_82105A6C;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// b 0x82105a74
	goto loc_82105A74;
loc_82105A6C:
	// bl 0x823deaf8
	ctx.lr = 0x82105A70;
	sub_823DEAF8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82105A74:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ori r24,r11,22912
	ctx.r24.u64 = ctx.r11.u64 | 22912;
	// beq cr6,0x82105aa0
	if (ctx.cr6.eq) goto loc_82105AA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82105aa0
	if (!ctx.cr6.eq) goto loc_82105AA0;
	// lwzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// stw r26,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r26.u32);
	// stw r26,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r26.u32);
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
loc_82105AA0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82105b4c
	if (!ctx.cr6.eq) goto loc_82105B4C;
loc_82105AAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,-1
	ctx.r10.s64 = -1;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stb r26,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r26.u8);
	// stw r10,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
	// stw r26,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r26.u32);
	// stw r26,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r26.u32);
	// stw r26,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r26.u32);
	// stfs f0,1140(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// stfs f0,1144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// stfs f0,1148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// stw r26,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r26.u32);
	// stw r26,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_82105B4C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27924
	ctx.r4.s64 = ctx.r11.s64 + -27924;
	// bl 0x822e8678
	ctx.lr = 0x82105B5C;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105b74
	if (!ctx.cr6.eq) goto loc_82105B74;
	// stb r26,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r26.u8);
	// b 0x82105b80
	goto loc_82105B80;
loc_82105B74:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x822e7e98
	ctx.lr = 0x82105B80;
	sub_822E7E98(ctx, base);
loc_82105B80:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lfs f31,5484(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r25,r11,-27936
	ctx.r25.s64 = ctx.r11.s64 + -27936;
	// addi r28,r10,-27944
	ctx.r28.s64 = ctx.r10.s64 + -27944;
loc_82105BA0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823df2b0
	ctx.lr = 0x82105BB0;
	sub_823DF2B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e8678
	ctx.lr = 0x82105BBC;
	sub_822E8678(ctx, base);
	// stfs f31,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f31,-8(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + -8, temp.u32);
	// addi r5,r30,-8
	ctx.r5.s64 = ctx.r30.s64 + -8;
	// stfs f31,-4(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// addi r6,r30,-4
	ctx.r6.s64 = ctx.r30.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82105be8
	if (ctx.cr6.eq) goto loc_82105BE8;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823deeb8
	ctx.lr = 0x82105BE8;
	sub_823DEEB8(ctx, base);
loc_82105BE8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x82105ba0
	if (ctx.cr6.lt) goto loc_82105BA0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r30,1128(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27952
	ctx.r4.s64 = ctx.r11.s64 + -27952;
	// bl 0x822e8678
	ctx.lr = 0x82105C0C;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105c20
	if (!ctx.cr6.eq) goto loc_82105C20;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82105c24
	goto loc_82105C24;
loc_82105C20:
	// bl 0x823deaf8
	ctx.lr = 0x82105C24;
	sub_823DEAF8(ctx, base);
loc_82105C24:
	// stw r3,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r3.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82105c40
	if (ctx.cr6.eq) goto loc_82105C40;
	// lwzx r11,r23,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r24.u32);
	// stw r26,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r26.u32);
	// stw r26,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r26.u32);
	// stw r11,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r11.u32);
loc_82105C40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27960
	ctx.r4.s64 = ctx.r11.s64 + -27960;
	// bl 0x822e8678
	ctx.lr = 0x82105C50;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105c64
	if (!ctx.cr6.eq) goto loc_82105C64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82105c68
	goto loc_82105C68;
loc_82105C64:
	// bl 0x823deaf8
	ctx.lr = 0x82105C68;
	sub_823DEAF8(ctx, base);
loc_82105C68:
	// stw r3,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27976
	ctx.r4.s64 = ctx.r11.s64 + -27976;
	// bl 0x822e8678
	ctx.lr = 0x82105C7C;
	sub_822E8678(ctx, base);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82105c90
	if (!ctx.cr6.eq) goto loc_82105C90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82105cb4
	goto loc_82105CB4;
loc_82105C90:
	// bl 0x823deaf8
	ctx.lr = 0x82105C94;
	sub_823DEAF8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82105cb4
	if (ctx.cr6.eq) goto loc_82105CB4;
	// lwz r11,1136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82105cb4
	if (ctx.cr6.eq) goto loc_82105CB4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r26,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r26.u32);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
loc_82105CB4:
	// stw r3,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-27988
	ctx.r4.s64 = ctx.r11.s64 + -27988;
	// bl 0x822e8678
	ctx.lr = 0x82105CC8;
	sub_822E8678(ctx, base);
	// stfs f31,1140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1140, temp.u32);
	// stfs f31,1144(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1144, temp.u32);
	// addi r5,r31,1140
	ctx.r5.s64 = ctx.r31.s64 + 1140;
	// stfs f31,1148(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1148, temp.u32);
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82105cf4
	if (ctx.cr6.eq) goto loc_82105CF4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r7,r31,1148
	ctx.r7.s64 = ctx.r31.s64 + 1148;
	// addi r6,r31,1144
	ctx.r6.s64 = ctx.r31.s64 + 1144;
	// bl 0x823deeb8
	ctx.lr = 0x82105CF4;
	sub_823DEEB8(ctx, base);
loc_82105CF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821059E0) {
	__imp__sub_821059E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105D00) {
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
	// addi r3,r11,-27912
	ctx.r3.s64 = ctx.r11.s64 + -27912;
	// bl 0x822e04f8
	ctx.lr = 0x82105D18;
	sub_822E04F8(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r11,r10,6968
	ctx.r11.s64 = ctx.r10.s64 + 6968;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x822d3e08
	ctx.lr = 0x82105D30;
	sub_822D3E08(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82105D00) {
	__imp__sub_82105D00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105D40) {
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
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821201a0
	ctx.lr = 0x82105D54;
	sub_821201A0(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x82105D58;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8239b910
	ctx.lr = 0x82105D60;
	sub_8239B910(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82105D40) {
	__imp__sub_82105D40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105D70) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x821201a0
	ctx.lr = 0x82105D84;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82105da4
	if (!ctx.cr6.eq) goto loc_82105DA4;
	// bl 0x8239c9a0
	ctx.lr = 0x82105D94;
	sub_8239C9A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82105DA4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-27904
	ctx.r4.s64 = ctx.r11.s64 + -27904;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823deeb8
	ctx.lr = 0x82105DBC;
	sub_823DEEB8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239c970
	ctx.lr = 0x82105DC4;
	sub_8239C970(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82105D70) {
	__imp__sub_82105D70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105DD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82105DD4) {
	__imp__sub_82105DD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x821201a0
	ctx.lr = 0x82105DEC;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82105e0c
	if (!ctx.cr6.eq) goto loc_82105E0C;
	// bl 0x8239ca48
	ctx.lr = 0x82105DFC;
	sub_8239CA48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82105E0C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,-27892
	ctx.r4.s64 = ctx.r11.s64 + -27892;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// bl 0x823deeb8
	ctx.lr = 0x82105E40;
	sub_823DEEB8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bne cr6,0x82105e60
	if (!ctx.cr6.eq) goto loc_82105E60;
	// bl 0x8239c9b8
	ctx.lr = 0x82105E50;
	sub_8239C9B8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82105E60:
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x8239c9f0
	ctx.lr = 0x82105E70;
	sub_8239C9F0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82105DD8) {
	__imp__sub_82105DD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105E80) {
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
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x821201a0
	ctx.lr = 0x82105E9C;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// beq cr6,0x82105ec4
	if (ctx.cr6.eq) goto loc_82105EC4;
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x82105ebc
	if (ctx.cr6.eq) goto loc_82105EBC;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82105ec8
	goto loc_82105EC8;
loc_82105EBC:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82105ec8
	goto loc_82105EC8;
loc_82105EC4:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82105EC8:
	// bl 0x82112870
	ctx.lr = 0x82105ECC;
	sub_82112870(ctx, base);
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

PPC_WEAK_FUNC(sub_82105E80) {
	__imp__sub_82105E80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105EE0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x821201a0
	ctx.lr = 0x82105EFC;
	sub_821201A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-27868
	ctx.r4.s64 = ctx.r11.s64 + -27868;
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
	ctx.lr = 0x82105F20;
	sub_823DEEB8(ctx, base);
	// addi r10,r3,-6
	ctx.r10.s64 = ctx.r3.s64 + -6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// bl 0x82112898
	ctx.lr = 0x82105F3C;
	sub_82112898(ctx, base);
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

PPC_WEAK_FUNC(sub_82105EE0) {
	__imp__sub_82105EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105F50) {
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
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821201a0
	ctx.lr = 0x82105F6C;
	sub_821201A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821128d8
	ctx.lr = 0x82105F84;
	sub_821128D8(ctx, base);
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

PPC_WEAK_FUNC(sub_82105F50) {
	__imp__sub_82105F50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82105F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x82105FA0;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de024
	ctx.lr = 0x82105FA8;
	__savefpr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r31,r11,-17592
	ctx.r31.s64 = ctx.r11.s64 + -17592;
	// addi r26,r10,-28736
	ctx.r26.s64 = ctx.r10.s64 + -28736;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// lwz r11,-17592(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -17592);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x82105fe8
	if (!ctx.cr6.gt) goto loc_82105FE8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82105fec
	goto loc_82105FEC;
loc_82105FE8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82105FEC:
	// bl 0x823dec00
	ctx.lr = 0x82105FF0;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x8210605c
	if (!ctx.cr6.gt) goto loc_8210605C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821064b8
	if (ctx.cr6.eq) goto loc_821064B8;
loc_82106020:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821064b8
	if (ctx.cr6.eq) goto loc_821064B8;
	// bl 0x823dec00
	ctx.lr = 0x82106030;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82106064
	if (!ctx.cr6.gt) goto loc_82106064;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82106068
	goto loc_82106068;
loc_8210605C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// b 0x82106020
	goto loc_82106020;
loc_82106064:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106068:
	// bl 0x823dec00
	ctx.lr = 0x8210606C;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x8210608C;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r22,r7,24
	ctx.r22.u64 = ctx.r7.u32 & 0xFF;
	// ble cr6,0x821060c8
	if (!ctx.cr6.gt) goto loc_821060C8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x821060cc
	goto loc_821060CC;
loc_821060C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821060CC:
	// bl 0x823dec00
	ctx.lr = 0x821060D0;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821060E0;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r23,r8,24
	ctx.r23.u64 = ctx.r8.u32 & 0xFF;
	// ble cr6,0x8210611c
	if (!ctx.cr6.gt) goto loc_8210611C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82106120
	goto loc_82106120;
loc_8210611C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106120:
	// bl 0x823dec00
	ctx.lr = 0x82106124;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82106134;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r24,r8,24
	ctx.r24.u64 = ctx.r8.u32 & 0xFF;
	// ble cr6,0x82106170
	if (!ctx.cr6.gt) goto loc_82106170;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x82106174
	goto loc_82106174;
loc_82106170:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106174:
	// bl 0x823dec00
	ctx.lr = 0x82106178;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x821061a4
	if (!ctx.cr6.gt) goto loc_821061A4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x821061a8
	goto loc_821061A8;
loc_821061A4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821061A8:
	// bl 0x823deaf8
	ctx.lr = 0x821061AC;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// ble cr6,0x821061d8
	if (!ctx.cr6.gt) goto loc_821061D8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,32(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// b 0x821061dc
	goto loc_821061DC;
loc_821061D8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821061DC:
	// bl 0x823deaf8
	ctx.lr = 0x821061E0;
	sub_823DEAF8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r27,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82106440
	if (ctx.cr6.eq) goto loc_82106440;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// ble cr6,0x8210621c
	if (!ctx.cr6.gt) goto loc_8210621C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,36(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// b 0x82106220
	goto loc_82106220;
loc_8210621C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106220:
	// bl 0x823dec00
	ctx.lr = 0x82106224;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82106234;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 10, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r28,r8,24
	ctx.r28.u64 = ctx.r8.u32 & 0xFF;
	// ble cr6,0x82106270
	if (!ctx.cr6.gt) goto loc_82106270;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,40(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 40);
	// b 0x82106274
	goto loc_82106274;
loc_82106270:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106274:
	// bl 0x823dec00
	ctx.lr = 0x82106278;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x82106288;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 11, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// ble cr6,0x821062c4
	if (!ctx.cr6.gt) goto loc_821062C4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,44(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// b 0x821062c8
	goto loc_821062C8;
loc_821062C4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821062C8:
	// bl 0x823dec00
	ctx.lr = 0x821062CC;
	sub_823DEC00(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fadds f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// bl 0x823dde20
	ctx.lr = 0x821062DC;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f11.u64);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// ble cr6,0x82106318
	if (!ctx.cr6.gt) goto loc_82106318;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,48(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// b 0x8210631c
	goto loc_8210631C;
loc_82106318:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210631C:
	// bl 0x823dec00
	ctx.lr = 0x82106320;
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
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,13
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 13, ctx.xer);
	// ble cr6,0x82106350
	if (!ctx.cr6.gt) goto loc_82106350;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,52(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 52);
	// b 0x82106354
	goto loc_82106354;
loc_82106350:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_82106354:
	// bl 0x823dec00
	ctx.lr = 0x82106358;
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
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,14
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 14, ctx.xer);
	// ble cr6,0x82106388
	if (!ctx.cr6.gt) goto loc_82106388;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,56(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// b 0x8210638c
	goto loc_8210638C;
loc_82106388:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8210638C:
	// bl 0x823dec00
	ctx.lr = 0x82106390;
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
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// ble cr6,0x821063c0
	if (!ctx.cr6.gt) goto loc_821063C0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,60(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// b 0x821063c4
	goto loc_821063C4;
loc_821063C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821063C4:
	// bl 0x823dec00
	ctx.lr = 0x821063C8;
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
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x821063f4
	if (!ctx.cr6.gt) goto loc_821063F4;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,64(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// b 0x821063f8
	goto loc_821063F8;
loc_821063F4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821063F8:
	// bl 0x823dec00
	ctx.lr = 0x821063FC;
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
	// cmpwi cr6,r9,17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 17, ctx.xer);
	// ble cr6,0x82106430
	if (!ctx.cr6.gt) goto loc_82106430;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,68(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 68);
	// bl 0x823dec00
	ctx.lr = 0x82106428;
	sub_823DEC00(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// b 0x82106470
	goto loc_82106470;
loc_82106430:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823dec00
	ctx.lr = 0x82106438;
	sub_823DEC00(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// b 0x82106470
	goto loc_82106470;
loc_82106440:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f6.f64 = double(temp.f32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82106470:
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// stb r30,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r30.u8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// fmr f5,f31
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = ctx.f31.f64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stb r29,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r29.u8);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// fmr f3,f29
	ctx.f3.f64 = ctx.f29.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8239cd08
	ctx.lr = 0x821064AC;
	sub_8239CD08(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821064c8
	goto loc_821064C8;
loc_821064B8:
	// fctiwz f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f27.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821064C8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x8239cd88
	ctx.lr = 0x821064D0;
	sub_8239CD88(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x823de070
	ctx.lr = 0x821064DC;
	__restfpr_27(ctx, base);
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82105F98) {
	__imp__sub_82105F98(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821064E0) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821064f0
	if (ctx.cr6.eq) goto loc_821064F0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x821125f8
	sub_821125F8(ctx, base);
	return;
loc_821064F0:
	// b 0x821126e0
	sub_821126E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821064E0) {
	__imp__sub_821064E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821064F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821064F4) {
	__imp__sub_821064F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821064F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82106500;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x821201a0
	ctx.lr = 0x82106508;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821065c8
	if (ctx.cr6.eq) goto loc_821065C8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,9240
	ctx.r28.s64 = ctx.r11.s64 + 9240;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
	// lis r29,-32190
	ctx.r29.s64 = -2109603840;
	// lis r26,-32166
	ctx.r26.s64 = -2108030976;
	// addi r27,r11,-27848
	ctx.r27.s64 = ctx.r11.s64 + -27848;
loc_82106538:
	// lbz r10,29088(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 29088);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82106564
	if (!ctx.cr6.eq) goto loc_82106564;
	// lwz r11,-32312(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -32312);
	// subfc r8,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
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
	// b 0x82106574
	goto loc_82106574;
loc_82106564:
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
loc_82106574:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821065b4
	if (ctx.cr6.eq) goto loc_821065B4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82106590
	if (ctx.cr6.eq) goto loc_82106590;
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
loc_82106590:
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x822c27d8
	ctx.lr = 0x8210659C;
	sub_822C27D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821065b4
	if (!ctx.cr6.eq) goto loc_821065B4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822830e8
	ctx.lr = 0x821065B4;
	sub_822830E8(ctx, base);
loc_821065B4:
	// addi r31,r31,9780
	ctx.r31.s64 = ctx.r31.s64 + 9780;
	// addi r11,r28,19584
	ctx.r11.s64 = ctx.r28.s64 + 19584;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82106538
	if (ctx.cr6.lt) goto loc_82106538;
loc_821065C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821064F8) {
	__imp__sub_821064F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821065D0) {
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
	// bl 0x821201a0
	ctx.lr = 0x821065E0;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821065f4
	if (ctx.cr6.eq) goto loc_821065F4;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8238bd98
	ctx.lr = 0x821065F4;
	sub_8238BD98(ctx, base);
loc_821065F4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_821065D0) {
	__imp__sub_821065D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82106604) {
	__imp__sub_82106604(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106608) {
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
	// li r31,2825
	ctx.r31.s64 = 2825;
loc_8210661C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821201a0
	ctx.lr = 0x82106624;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106638
	if (ctx.cr6.eq) goto loc_82106638;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8238bd98
	ctx.lr = 0x82106638;
	sub_8238BD98(ctx, base);
loc_82106638:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2952
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2952, ctx.xer);
	// blt cr6,0x8210661c
	if (ctx.cr6.lt) goto loc_8210661C;
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

PPC_WEAK_FUNC(sub_82106608) {
	__imp__sub_82106608(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106658) {
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
	// bl 0x821201a0
	ctx.lr = 0x8210667C;
	sub_821201A0(ctx, base);
	// cmpwi cr6,r31,3016
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3016, ctx.xer);
	// bne cr6,0x821066bc
	if (!ctx.cr6.eq) goto loc_821066BC;
	// bl 0x822dc088
	ctx.lr = 0x82106688;
	sub_822DC088(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821066a4
	if (!ctx.cr6.eq) goto loc_821066A4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27808
	ctx.r4.s64 = ctx.r11.s64 + -27808;
	// bl 0x82280c30
	ctx.lr = 0x821066A0;
	sub_82280C30(ctx, base);
	// bl 0x822dbe08
	ctx.lr = 0x821066A4;
	sub_822DBE08(ctx, base);
loc_821066A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82117c38
	ctx.lr = 0x821066AC;
	sub_82117C38(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82106894
	if (!ctx.cr6.eq) goto loc_82106894;
	// bl 0x822dbf48
	ctx.lr = 0x821066B8;
	sub_822DBF48(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_821066BC:
	// cmpwi cr6,r31,1167
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1167, ctx.xer);
	// bne cr6,0x821066d0
	if (!ctx.cr6.eq) goto loc_821066D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f86b8
	ctx.lr = 0x821066CC;
	sub_820F86B8(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_821066D0:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bne cr6,0x821066f0
	if (!ctx.cr6.eq) goto loc_821066F0;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x821201a0
	ctx.lr = 0x821066E0;
	sub_821201A0(ctx, base);
	// bl 0x823dec00
	ctx.lr = 0x821066E4;
	sub_823DEC00(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8239b910
	ctx.lr = 0x821066EC;
	sub_8239B910(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_821066F0:
	// cmpwi cr6,r31,7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 7, ctx.xer);
	// bne cr6,0x82106704
	if (!ctx.cr6.eq) goto loc_82106704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105d70
	ctx.lr = 0x82106700;
	sub_82105D70(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106704:
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// bne cr6,0x82106718
	if (!ctx.cr6.eq) goto loc_82106718;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105dd8
	ctx.lr = 0x82106714;
	sub_82105DD8(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106718:
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// bne cr6,0x8210672c
	if (!ctx.cr6.eq) goto loc_8210672C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105e80
	ctx.lr = 0x82106728;
	sub_82105E80(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_8210672C:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x82106740
	if (!ctx.cr6.eq) goto loc_82106740;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105ee0
	ctx.lr = 0x8210673C;
	sub_82105EE0(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106740:
	// cmpwi cr6,r31,11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11, ctx.xer);
	// bne cr6,0x82106754
	if (!ctx.cr6.eq) goto loc_82106754;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82105f50
	ctx.lr = 0x82106750;
	sub_82105F50(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106754:
	// cmpwi cr6,r31,1208
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1208, ctx.xer);
	// blt cr6,0x8210676c
	if (ctx.cr6.lt) goto loc_8210676C;
	// cmpwi cr6,r31,1720
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1720, ctx.xer);
	// bge cr6,0x82106774
	if (!ctx.cr6.lt) goto loc_82106774;
	// bl 0x82393fe8
	ctx.lr = 0x82106768;
	sub_82393FE8(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_8210676C:
	// cmpwi cr6,r31,1720
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1720, ctx.xer);
	// blt cr6,0x82106788
	if (ctx.cr6.lt) goto loc_82106788;
loc_82106774:
	// cmpwi cr6,r31,1752
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1752, ctx.xer);
	// bge cr6,0x82106788
	if (!ctx.cr6.lt) goto loc_82106788;
	// addi r4,r31,-1720
	ctx.r4.s64 = ctx.r31.s64 + -1720;
	// bl 0x8234d468
	ctx.lr = 0x82106784;
	sub_8234D468(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106788:
	// cmpwi cr6,r31,2264
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2264, ctx.xer);
	// blt cr6,0x821067b4
	if (ctx.cr6.lt) goto loc_821067B4;
	// cmpwi cr6,r31,2520
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2520, ctx.xer);
	// bge cr6,0x821067b4
	if (!ctx.cr6.lt) goto loc_821067B4;
	// bl 0x82198070
	ctx.lr = 0x8210679C;
	sub_82198070(ctx, base);
	// lis r11,-32181
	ctx.r11.s64 = -2109014016;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-22896
	ctx.r11.s64 = ctx.r11.s64 + -22896;
	// addi r9,r11,7112
	ctx.r9.s64 = ctx.r11.s64 + 7112;
	// stwx r3,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u32);
	// b 0x82106894
	goto loc_82106894;
loc_821067B4:
	// cmpwi cr6,r31,2776
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2776, ctx.xer);
	// blt cr6,0x821067ec
	if (ctx.cr6.lt) goto loc_821067EC;
	// cmpwi cr6,r31,2792
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2792, ctx.xer);
	// bge cr6,0x821067ec
	if (!ctx.cr6.lt) goto loc_821067EC;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106894
	if (ctx.cr6.eq) goto loc_82106894;
	// bl 0x82321740
	ctx.lr = 0x821067D4;
	sub_82321740(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82106894
	if (ctx.cr6.eq) goto loc_82106894;
	// addi r3,r31,-2776
	ctx.r3.s64 = ctx.r31.s64 + -2776;
	// bl 0x82321c38
	ctx.lr = 0x821067E4;
	sub_82321C38(ctx, base);
	// bl 0x82321888
	ctx.lr = 0x821067E8;
	sub_82321888(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_821067EC:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8210680c
	if (ctx.cr6.lt) goto loc_8210680C;
	// cmpwi cr6,r31,48
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 48, ctx.xer);
	// bge cr6,0x8210680c
	if (!ctx.cr6.lt) goto loc_8210680C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821059e0
	ctx.lr = 0x82106808;
	sub_821059E0(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_8210680C:
	// cmpwi cr6,r31,2824
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2824, ctx.xer);
	// blt cr6,0x8210683c
	if (ctx.cr6.lt) goto loc_8210683C;
	// cmpwi cr6,r31,2952
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2952, ctx.xer);
	// bge cr6,0x8210683c
	if (!ctx.cr6.lt) goto loc_8210683C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821201a0
	ctx.lr = 0x82106824;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106894
	if (ctx.cr6.eq) goto loc_82106894;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x8238bd98
	ctx.lr = 0x82106838;
	sub_8238BD98(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_8210683C:
	// cmpwi cr6,r31,1201
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1201, ctx.xer);
	// bne cr6,0x82106850
	if (!ctx.cr6.eq) goto loc_82106850;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eadd0
	ctx.lr = 0x8210684C;
	sub_820EADD0(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106850:
	// cmpwi cr6,r31,1202
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1202, ctx.xer);
	// bne cr6,0x82106864
	if (!ctx.cr6.eq) goto loc_82106864;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eac80
	ctx.lr = 0x82106860;
	sub_820EAC80(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106864:
	// cmpwi cr6,r31,1203
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1203, ctx.xer);
	// bne cr6,0x82106878
	if (!ctx.cr6.eq) goto loc_82106878;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820eae80
	ctx.lr = 0x82106874;
	sub_820EAE80(ctx, base);
	// b 0x82106894
	goto loc_82106894;
loc_82106878:
	// cmpwi cr6,r31,80
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 80, ctx.xer);
	// blt cr6,0x82106894
	if (ctx.cr6.lt) goto loc_82106894;
	// cmpwi cr6,r31,112
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 112, ctx.xer);
	// bge cr6,0x82106894
	if (!ctx.cr6.lt) goto loc_82106894;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8210e9f0
	ctx.lr = 0x82106894;
	sub_8210E9F0(ctx, base);
loc_82106894:
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

PPC_WEAK_FUNC(sub_82106658) {
	__imp__sub_82106658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821068AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821068AC) {
	__imp__sub_821068AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821068B0) {
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x821068f4
	if (!ctx.cr6.gt) goto loc_821068F4;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x821068fc
	goto loc_821068FC;
loc_821068F4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_821068FC:
	// bl 0x823deaf8
	ctx.lr = 0x82106900;
	sub_823DEAF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82106658
	ctx.lr = 0x8210690C;
	sub_82106658(ctx, base);
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

PPC_WEAK_FUNC(sub_821068B0) {
	__imp__sub_821068B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106920) {
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
	// bl 0x8217ef70
	ctx.lr = 0x82106938;
	sub_8217EF70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821a3cf8
	ctx.lr = 0x82106940;
	sub_821A3CF8(ctx, base);
	// bl 0x82189960
	ctx.lr = 0x82106944;
	sub_82189960(ctx, base);
	// bl 0x82258700
	ctx.lr = 0x82106948;
	sub_82258700(ctx, base);
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

PPC_WEAK_FUNC(sub_82106920) {
	__imp__sub_82106920(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210695C) {
	__imp__sub_8210695C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x82106968;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// ble cr6,0x821069a8
	if (!ctx.cr6.gt) goto loc_821069A8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x821069ac
	goto loc_821069AC;
loc_821069A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821069AC:
	// bl 0x823deaf8
	ctx.lr = 0x821069B0;
	sub_823DEAF8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82106adc
	if (ctx.cr6.lt) goto loc_82106ADC;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x82106adc
	if (!ctx.cr6.lt) goto loc_82106ADC;
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x821201a0
	ctx.lr = 0x821069CC;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821069e8
	if (!ctx.cr6.eq) goto loc_821069E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27684
	ctx.r4.s64 = ctx.r11.s64 + -27684;
	// b 0x82106ae4
	goto loc_82106AE4;
loc_821069E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82106a40
	if (!ctx.cr6.gt) goto loc_82106A40;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82106a40
	if (ctx.cr6.eq) goto loc_82106A40;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82106a2c
	if (!ctx.cr6.gt) goto loc_82106A2C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82106a30
	goto loc_82106A30;
loc_82106A2C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82106A30:
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82106a44
	if (!ctx.cr6.eq) goto loc_82106A44;
loc_82106A40:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82106A44:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822c44e0
	ctx.lr = 0x82106A54;
	sub_822C44E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82106b0c
	if (!ctx.cr6.eq) goto loc_82106B0C;
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r11,-32167
	ctx.r11.s64 = -2108096512;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addi r31,r11,-12552
	ctx.r31.s64 = ctx.r11.s64 + -12552;
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r30,r31
	ctx.r29.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbzx r9,r30,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82106ab4
	if (ctx.cr6.eq) goto loc_82106AB4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822e8058
	ctx.lr = 0x82106A8C;
	sub_822E8058(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82106b0c
	if (ctx.cr6.eq) goto loc_82106B0C;
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r3,r10,-27700
	ctx.r3.s64 = ctx.r10.s64 + -27700;
	// lwzx r4,r30,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x822e84f0
	ctx.lr = 0x82106AA8;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82106AB4;
	sub_8227CF18(ctx, base);
loc_82106AB4:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e7e98
	ctx.lr = 0x82106AC4;
	sub_822E7E98(ctx, base);
	// addi r11,r31,64
	ctx.r11.s64 = ctx.r31.s64 + 64;
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// stwx r26,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r26.u32);
	// stbx r27,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r27.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_82106ADC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27752
	ctx.r4.s64 = ctx.r11.s64 + -27752;
loc_82106AE4:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82106AF0;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r10,-27768
	ctx.r3.s64 = ctx.r10.s64 + -27768;
	// bl 0x822e84f0
	ctx.lr = 0x82106B00;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82106B0C;
	sub_8227CF18(ctx, base);
loc_82106B0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82106960) {
	__imp__sub_82106960(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82106B14) {
	__imp__sub_82106B14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106B18) {
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
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r10,-12552
	ctx.r11.s64 = ctx.r10.s64 + -12552;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82106b6c
	if (ctx.cr6.eq) goto loc_82106B6C;
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lbzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x822c44e0
	ctx.lr = 0x82106B5C;
	sub_822C44E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82106b6c
	if (ctx.cr6.eq) goto loc_82106B6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82106B6C:
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

PPC_WEAK_FUNC(sub_82106B18) {
	__imp__sub_82106B18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106B80) {
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
	// bl 0x822c45d8
	ctx.lr = 0x82106B98;
	sub_822C45D8(ctx, base);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-32167
	ctx.r10.s64 = -2108096512;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r8,r10,-12552
	ctx.r8.s64 = ctx.r10.s64 + -12552;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// stbx r6,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u8);
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

PPC_WEAK_FUNC(sub_82106B80) {
	__imp__sub_82106B80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106BC8) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82106c10
	if (!ctx.cr6.gt) goto loc_82106C10;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82106c18
	goto loc_82106C18;
loc_82106C10:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82106C18:
	// bl 0x823deaf8
	ctx.lr = 0x82106C1C;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82106c60
	if (ctx.cr6.lt) goto loc_82106C60;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x82106c60
	if (!ctx.cr6.lt) goto loc_82106C60;
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x821201a0
	ctx.lr = 0x82106C38;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82106c54
	if (!ctx.cr6.eq) goto loc_82106C54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27684
	ctx.r4.s64 = ctx.r11.s64 + -27684;
	// b 0x82106c68
	goto loc_82106C68;
loc_82106C54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3908
	ctx.lr = 0x82106C5C;
	sub_822C3908(ctx, base);
	// b 0x82106c90
	goto loc_82106C90;
loc_82106C60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27752
	ctx.r4.s64 = ctx.r11.s64 + -27752;
loc_82106C68:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82106C74;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-27768
	ctx.r3.s64 = ctx.r10.s64 + -27768;
	// bl 0x822e84f0
	ctx.lr = 0x82106C84;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82106C90;
	sub_8227CF18(ctx, base);
loc_82106C90:
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

PPC_WEAK_FUNC(sub_82106BC8) {
	__imp__sub_82106BC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106CA8) {
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
	// lis r11,-31937
	ctx.r11.s64 = -2093023232;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
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
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// ble cr6,0x82106cf0
	if (!ctx.cr6.gt) goto loc_82106CF0;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82106cf8
	goto loc_82106CF8;
loc_82106CF0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,-28736
	ctx.r3.s64 = ctx.r11.s64 + -28736;
loc_82106CF8:
	// bl 0x823deaf8
	ctx.lr = 0x82106CFC;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82106d40
	if (ctx.cr6.lt) goto loc_82106D40;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bge cr6,0x82106d40
	if (!ctx.cr6.lt) goto loc_82106D40;
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x821201a0
	ctx.lr = 0x82106D18;
	sub_821201A0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82106d34
	if (!ctx.cr6.eq) goto loc_82106D34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27572
	ctx.r4.s64 = ctx.r11.s64 + -27572;
	// b 0x82106d48
	goto loc_82106D48;
loc_82106D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c3928
	ctx.lr = 0x82106D3C;
	sub_822C3928(ctx, base);
	// b 0x82106d70
	goto loc_82106D70;
loc_82106D40:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-27624
	ctx.r4.s64 = ctx.r11.s64 + -27624;
loc_82106D48:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280900
	ctx.lr = 0x82106D54;
	sub_82280900(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r10,-27768
	ctx.r3.s64 = ctx.r10.s64 + -27768;
	// bl 0x822e84f0
	ctx.lr = 0x82106D64;
	sub_822E84F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227cf18
	ctx.lr = 0x82106D70;
	sub_8227CF18(ctx, base);
loc_82106D70:
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

PPC_WEAK_FUNC(sub_82106CA8) {
	__imp__sub_82106CA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x82106D90;
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82106fc4
	if (ctx.cr6.gt) goto loc_82106FC4;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82106ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82106EF8;
	// bdzf 4*cr6+eq,0x82106e20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82106E20;
	// bdzf 4*cr6+eq,0x82106e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82106E68;
	// bdzf 4*cr6+eq,0x82106ef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82106EF8;
	// bdzf 4*cr6+eq,0x82106f84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82106F84;
	// bne cr6,0x82106eb0
	if (!ctx.cr6.eq) goto loc_82106EB0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// addi r11,r11,20076
	ctx.r11.s64 = ctx.r11.s64 + 20076;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// bl 0x822c69e8
	ctx.lr = 0x82106E18;
	sub_822C69E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82106E20:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// addi r11,r11,20072
	ctx.r11.s64 = ctx.r11.s64 + 20072;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r4,r9,13148
	ctx.r4.s64 = ctx.r9.s64 + 13148;
	// bl 0x822c69e8
	ctx.lr = 0x82106E60;
	sub_822C69E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82106E68:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// addi r11,r11,20084
	ctx.r11.s64 = ctx.r11.s64 + 20084;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r4,r9,13156
	ctx.r4.s64 = ctx.r9.s64 + 13156;
	// bl 0x822c69e8
	ctx.lr = 0x82106EA8;
	sub_822C69E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82106EB0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// addi r11,r11,20088
	ctx.r11.s64 = ctx.r11.s64 + 20088;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
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
	// addi r4,r9,13164
	ctx.r4.s64 = ctx.r9.s64 + 13164;
	// bl 0x822c69e8
	ctx.lr = 0x82106EF0;
	sub_822C69E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82106EF8:
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// addi r27,r27,22912
	ctx.r27.s64 = ctx.r27.s64 + 22912;
	// addi r11,r11,20080
	ctx.r11.s64 = ctx.r11.s64 + 20080;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// addi r28,r10,-1216
	ctx.r28.s64 = ctx.r10.s64 + -1216;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106f4c
	if (!ctx.cr6.lt) goto loc_82106F4C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r11,r30,3712
	ctx.r11.s64 = ctx.r30.s64 * 3712;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x822c69e8
	ctx.lr = 0x82106F3C;
	sub_822C69E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,13116
	ctx.r4.s64 = ctx.r10.s64 + 13116;
	// bl 0x822c69e8
	ctx.lr = 0x82106F4C;
	sub_822C69E8(ctx, base);
loc_82106F4C:
	// addis r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20092
	ctx.r10.s64 = ctx.r10.s64 + 20092;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r30,3712
	ctx.r11.s64 = ctx.r30.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r10,13176
	ctx.r4.s64 = ctx.r10.s64 + 13176;
	// bl 0x822c69e8
	ctx.lr = 0x82106F7C;
	sub_822C69E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
loc_82106F84:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addis r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 131072;
	// ori r9,r10,22912
	ctx.r9.u64 = ctx.r10.u64 | 22912;
	// addi r11,r11,18528
	ctx.r11.s64 = ctx.r11.s64 + 18528;
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82106fc4
	if (!ctx.cr6.lt) goto loc_82106FC4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mulli r11,r30,3712
	ctx.r11.s64 = ctx.r30.s64 * 3712;
	// addi r10,r10,-1216
	ctx.r10.s64 = ctx.r10.s64 + -1216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r9,13188
	ctx.r4.s64 = ctx.r9.s64 + 13188;
	// bl 0x822c69e8
	ctx.lr = 0x82106FC4;
	sub_822C69E8(ctx, base);
loc_82106FC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82106D88) {
	__imp__sub_82106D88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82106FCC) {
	__imp__sub_82106FCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82106FD0) {
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
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 131072;
	// ori r7,r8,22912
	ctx.r7.u64 = ctx.r8.u64 | 22912;
	// addi r10,r10,18528
	ctx.r10.s64 = ctx.r10.s64 + 18528;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
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
	// b 0x822c69e8
	sub_822C69E8(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82106FD0) {
	__imp__sub_82106FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107028) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_82107028) {
	__imp__sub_82107028(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_8210702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_8210702C) {
	__imp__sub_8210702C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x82107038;
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
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// ori r26,r8,22912
	ctx.r26.u64 = ctx.r8.u64 | 22912;
	// addi r11,r11,20076
	ctx.r11.s64 = ctx.r11.s64 + 20076;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r10,-1216
	ctx.r29.s64 = ctx.r10.s64 + -1216;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// add r27,r30,r26
	ctx.r27.u64 = ctx.r30.u64 + ctx.r26.u64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8210709c
	if (!ctx.cr6.lt) goto loc_8210709C;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r11,r3,3712
	ctx.r11.s64 = ctx.r3.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13108
	ctx.r4.s64 = ctx.r10.s64 + 13108;
	// bl 0x822c69e8
	ctx.lr = 0x8210709C;
	sub_822C69E8(ctx, base);
loc_8210709C:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20080
	ctx.r10.s64 = ctx.r10.s64 + 20080;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821070e0
	if (!ctx.cr6.lt) goto loc_821070E0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x822c69e8
	ctx.lr = 0x821070D0;
	sub_822C69E8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r10,13116
	ctx.r4.s64 = ctx.r10.s64 + 13116;
	// bl 0x822c69e8
	ctx.lr = 0x821070E0;
	sub_822C69E8(ctx, base);
loc_821070E0:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20072
	ctx.r10.s64 = ctx.r10.s64 + 20072;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82107110
	if (!ctx.cr6.lt) goto loc_82107110;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13148
	ctx.r4.s64 = ctx.r10.s64 + 13148;
	// bl 0x822c69e8
	ctx.lr = 0x82107110;
	sub_822C69E8(ctx, base);
loc_82107110:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20084
	ctx.r10.s64 = ctx.r10.s64 + 20084;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82107140
	if (!ctx.cr6.lt) goto loc_82107140;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13156
	ctx.r4.s64 = ctx.r10.s64 + 13156;
	// bl 0x822c69e8
	ctx.lr = 0x82107140;
	sub_822C69E8(ctx, base);
loc_82107140:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20088
	ctx.r10.s64 = ctx.r10.s64 + 20088;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82107170
	if (!ctx.cr6.lt) goto loc_82107170;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13164
	ctx.r4.s64 = ctx.r10.s64 + 13164;
	// bl 0x822c69e8
	ctx.lr = 0x82107170;
	sub_822C69E8(ctx, base);
loc_82107170:
	// addis r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 131072;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r10,20092
	ctx.r10.s64 = ctx.r10.s64 + 20092;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x821071a0
	if (!ctx.cr6.lt) goto loc_821071A0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13176
	ctx.r4.s64 = ctx.r10.s64 + 13176;
	// bl 0x822c69e8
	ctx.lr = 0x821071A0;
	sub_822C69E8(ctx, base);
loc_821071A0:
	// addis r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 131072;
	// lwzx r10,r30,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// addi r11,r11,18528
	ctx.r11.s64 = ctx.r11.s64 + 18528;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821071d0
	if (!ctx.cr6.lt) goto loc_821071D0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mulli r11,r31,3712
	ctx.r11.s64 = ctx.r31.s64 * 3712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r4,r10,13188
	ctx.r4.s64 = ctx.r10.s64 + 13188;
	// bl 0x822c69e8
	ctx.lr = 0x821071D0;
	sub_822C69E8(ctx, base);
loc_821071D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107030) {
	__imp__sub_82107030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821071D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x821071E0;
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
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// beq cr6,0x8210722c
	if (ctx.cr6.eq) goto loc_8210722C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-27512
	ctx.r4.s64 = ctx.r11.s64 + -27512;
	// bl 0x82280b08
	ctx.lr = 0x8210721C;
	sub_82280B08(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_8210722C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r28,r10,-28736
	ctx.r28.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8210724c
	if (!ctx.cr6.gt) goto loc_8210724C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107250
	goto loc_82107250;
loc_8210724C:
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
loc_82107250:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// ble cr6,0x82107268
	if (!ctx.cr6.gt) goto loc_82107268;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8210726c
	goto loc_8210726C;
loc_82107268:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8210726C:
	// bl 0x823deaf8
	ctx.lr = 0x82107270;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x8210729c
	if (!ctx.cr6.gt) goto loc_8210729C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821072a0
	goto loc_821072A0;
loc_8210729C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821072A0:
	// bl 0x823deaf8
	ctx.lr = 0x821072A4;
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
	// ble cr6,0x821072d0
	if (!ctx.cr6.gt) goto loc_821072D0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x821072d4
	goto loc_821072D4;
loc_821072D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821072D4:
	// bl 0x823deaf8
	ctx.lr = 0x821072D8;
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
	// ble cr6,0x82107304
	if (!ctx.cr6.gt) goto loc_82107304;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x82107308
	goto loc_82107308;
loc_82107304:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82107308:
	// bl 0x823dec00
	ctx.lr = 0x8210730C;
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
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// ble cr6,0x82107338
	if (!ctx.cr6.gt) goto loc_82107338;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,24(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x8210733c
	goto loc_8210733C;
loc_82107338:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8210733C:
	// bl 0x823dec00
	ctx.lr = 0x82107340;
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
	// ble cr6,0x8210736c
	if (!ctx.cr6.gt) goto loc_8210736C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,28(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// b 0x82107370
	goto loc_82107370;
loc_8210736C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82107370:
	// bl 0x823dec00
	ctx.lr = 0x82107374;
	sub_823DEC00(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82366d20
	ctx.lr = 0x82107394;
	sub_82366D20(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821071D8) {
	__imp__sub_821071D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821073A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821073A4) {
	__imp__sub_821073A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821073A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x821073B0;
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
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82107408
	if (!ctx.cr6.lt) goto loc_82107408;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// b 0x8210740c
	goto loc_8210740C;
loc_82107408:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8210740C:
	// bl 0x823deaf8
	ctx.lr = 0x82107410;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82107444
	if (!ctx.cr6.lt) goto loc_82107444;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82107448
	goto loc_82107448;
loc_82107444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107448:
	// bl 0x823dec00
	ctx.lr = 0x8210744C;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82107480
	if (!ctx.cr6.lt) goto loc_82107480;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x82107484
	goto loc_82107484;
loc_82107480:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107484:
	// bl 0x823dec00
	ctx.lr = 0x82107488;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r31,68
	ctx.r9.s64 = ctx.r31.s64 + 68;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x821074bc
	if (!ctx.cr6.lt) goto loc_821074BC;
	// addi r9,r31,100
	ctx.r9.s64 = ctx.r31.s64 + 100;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r3,r7,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// b 0x821074c0
	goto loc_821074C0;
loc_821074BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821074C0:
	// bl 0x823dec00
	ctx.lr = 0x821074C4;
	sub_823DEC00(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82366d20
	ctx.lr = 0x821074E4;
	sub_82366D20(ctx, base);
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

PPC_WEAK_FUNC(sub_821073A8) {
	__imp__sub_821073A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821074F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_821074F4) {
	__imp__sub_821074F4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821074F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82107500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lwzx r29,r10,r9
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// beq cr6,0x82107550
	if (ctx.cr6.eq) goto loc_82107550;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82107550
	if (ctx.cr6.eq) goto loc_82107550;
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82107550
	if (ctx.cr6.eq) goto loc_82107550;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-27456
	ctx.r4.s64 = ctx.r11.s64 + -27456;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82107548;
	sub_82280B08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_82107550:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// addi r3,r9,-28736
	ctx.r3.s64 = ctx.r9.s64 + -28736;
	// ble cr6,0x82107570
	if (!ctx.cr6.gt) goto loc_82107570;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// b 0x82107574
	goto loc_82107574;
loc_82107570:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82107574:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// ble cr6,0x82107588
	if (!ctx.cr6.gt) goto loc_82107588;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82107588:
	// bl 0x823deaf8
	ctx.lr = 0x8210758C;
	sub_823DEAF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821073a8
	ctx.lr = 0x821075A4;
	sub_821073A8(ctx, base);
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x821075c4
	if (ctx.cr6.lt) goto loc_821075C4;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x821073a8
	ctx.lr = 0x821075C0;
	sub_821073A8(ctx, base);
	// b 0x821075c8
	goto loc_821075C8;
loc_821075C4:
	// bl 0x82366e08
	ctx.lr = 0x821075C8;
	sub_82366E08(ctx, base);
loc_821075C8:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt cr6,0x821075ec
	if (ctx.cr6.lt) goto loc_821075EC;
	// li r6,11
	ctx.r6.s64 = 11;
	// bl 0x821073a8
	ctx.lr = 0x821075E4;
	sub_821073A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_821075EC:
	// bl 0x82366e08
	ctx.lr = 0x821075F0;
	sub_82366E08(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821074F8) {
	__imp__sub_821074F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_821075F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82107600;
	__savegprlr_28(ctx, base);
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
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x8210774c
	if (ctx.cr6.lt) goto loc_8210774C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bgt cr6,0x8210774c
	if (ctx.cr6.gt) goto loc_8210774C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8210764c
	if (!ctx.cr6.gt) goto loc_8210764C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107650
	goto loc_82107650;
loc_8210764C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107650:
	// bl 0x823deaf8
	ctx.lr = 0x82107654;
	sub_823DEAF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8210773c
	if (ctx.cr6.eq) goto loc_8210773C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x821076f4
	if (ctx.cr6.eq) goto loc_821076F4;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82107760
	if (!ctx.cr6.eq) goto loc_82107760;
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
	// ble cr6,0x82107698
	if (!ctx.cr6.gt) goto loc_82107698;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x8210769c
	goto loc_8210769C;
loc_82107698:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_8210769C:
	// bl 0x823deaf8
	ctx.lr = 0x821076A0;
	sub_823DEAF8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x821076dc
	if (!ctx.cr6.gt) goto loc_821076DC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82366e08
	ctx.lr = 0x821076D4;
	sub_82366E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821076DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x82366e08
	ctx.lr = 0x821076EC;
	sub_82366E08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_821076F4:
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
	// ble cr6,0x82107728
	if (!ctx.cr6.gt) goto loc_82107728;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// bl 0x8236a858
	ctx.lr = 0x82107720;
	sub_8236A858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82107728:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8236a858
	ctx.lr = 0x82107734;
	sub_8236A858(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8210773C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82366db8
	ctx.lr = 0x82107744;
	sub_82366DB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_8210774C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-27384
	ctx.r4.s64 = ctx.r11.s64 + -27384;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82280b08
	ctx.lr = 0x82107760;
	sub_82280B08(ctx, base);
loc_82107760:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_821075F8) {
	__imp__sub_821075F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82107770;
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
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// beq cr6,0x821077bc
	if (ctx.cr6.eq) goto loc_821077BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-27312
	ctx.r4.s64 = ctx.r11.s64 + -27312;
	// bl 0x82280b08
	ctx.lr = 0x821077AC;
	sub_82280B08(ctx, base);
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
loc_821077BC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r30,r10,-28736
	ctx.r30.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x821077dc
	if (!ctx.cr6.gt) goto loc_821077DC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x821077e0
	goto loc_821077E0;
loc_821077DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821077E0:
	// bl 0x823deaf8
	ctx.lr = 0x821077E4;
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
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82107810
	if (!ctx.cr6.gt) goto loc_82107810;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82107814
	goto loc_82107814;
loc_82107810:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82107814:
	// bl 0x823dec00
	ctx.lr = 0x82107818;
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
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// ble cr6,0x82107844
	if (!ctx.cr6.gt) goto loc_82107844;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// b 0x82107848
	goto loc_82107848;
loc_82107844:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82107848:
	// bl 0x823dec00
	ctx.lr = 0x8210784C;
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
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// ble cr6,0x82107878
	if (!ctx.cr6.gt) goto loc_82107878;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,20(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// b 0x8210787c
	goto loc_8210787C;
loc_82107878:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8210787C:
	// bl 0x823dec00
	ctx.lr = 0x82107880;
	sub_823DEC00(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,68
	ctx.r10.s64 = ctx.r31.s64 + 68;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// ble cr6,0x821078ac
	if (!ctx.cr6.gt) goto loc_821078AC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r31,8(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821078b0
	goto loc_821078B0;
loc_821078AC:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_821078B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,12240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12240);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x821078C8;
	sub_823DDE20(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
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
	// and r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 & ctx.r8.u64;
	// bl 0x823668c0
	ctx.lr = 0x82107904;
	sub_823668C0(ctx, base);
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

PPC_WEAK_FUNC(sub_82107768) {
	__imp__sub_82107768(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107914) {
	__imp__sub_82107914(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x82107920;
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
	// beq cr6,0x8210795c
	if (ctx.cr6.eq) goto loc_8210795C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-27256
	ctx.r4.s64 = ctx.r11.s64 + -27256;
	// bl 0x82280b08
	ctx.lr = 0x82107954;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_8210795C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r29,r10,-28736
	ctx.r29.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x8210797c
	if (!ctx.cr6.gt) goto loc_8210797C;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107980
	goto loc_82107980;
loc_8210797C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82107980:
	// bl 0x823deaf8
	ctx.lr = 0x82107984;
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
	// ble cr6,0x821079b0
	if (!ctx.cr6.gt) goto loc_821079B0;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x821079b4
	goto loc_821079B4;
loc_821079B0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821079B4:
	// bl 0x823dec00
	ctx.lr = 0x821079B8;
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
	ctx.lr = 0x821079D4;
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
	// bl 0x823669e8
	ctx.lr = 0x82107A04;
	sub_823669E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107918) {
	__imp__sub_82107918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_82107A0C) {
	__imp__sub_82107A0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_82107A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x82107A18;
	__savegprlr_28(ctx, base);
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
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// beq cr6,0x82107a54
	if (ctx.cr6.eq) goto loc_82107A54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r4,r11,-27188
	ctx.r4.s64 = ctx.r11.s64 + -27188;
	// bl 0x82280b08
	ctx.lr = 0x82107A4C;
	sub_82280B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_82107A54:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// addi r28,r10,-28736
	ctx.r28.s64 = ctx.r10.s64 + -28736;
	// ble cr6,0x82107a74
	if (!ctx.cr6.gt) goto loc_82107A74;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x82107a78
	goto loc_82107A78;
loc_82107A74:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82107A78:
	// bl 0x823deaf8
	ctx.lr = 0x82107A7C;
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
	// ble cr6,0x82107aa8
	if (!ctx.cr6.gt) goto loc_82107AA8;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82107aac
	goto loc_82107AAC;
loc_82107AA8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82107AAC:
	// bl 0x823deaf8
	ctx.lr = 0x82107AB0;
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
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// ble cr6,0x82107adc
	if (!ctx.cr6.gt) goto loc_82107ADC;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r3,12(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x82107ae0
	goto loc_82107AE0;
loc_82107ADC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82107AE0:
	// bl 0x823dec00
	ctx.lr = 0x82107AE4;
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
	ctx.lr = 0x82107B00;
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
	// and r31,r5,r8
	ctx.r31.u64 = ctx.r5.u64 & ctx.r8.u64;
	// bl 0x82321c38
	ctx.lr = 0x82107B30;
	sub_82321C38(ctx, base);
	// addi r4,r3,324
	ctx.r4.s64 = ctx.r3.s64 + 324;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82365f08
	ctx.lr = 0x82107B40;
	sub_82365F08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_82107A10) {
	__imp__sub_82107A10(ctx, base);
}

