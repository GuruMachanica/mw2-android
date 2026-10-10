#include "ppc_recomp_shared.h"

PPC_FUNC_IMPL(__imp__sub_823B8FC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8FC8) {
	__imp__sub_823B8FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8FD0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,2,23,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1FC;
	// rlwinm r10,r3,27,5,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFC;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8FD0) {
	__imp__sub_823B8FD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8FE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B8FE4) {
	__imp__sub_823B8FE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B8FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-27648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f13,f2
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f2.f64));
	// lfs f12,15124(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 15124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-11988(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -11988);
	ctx.f0.f64 = double(temp.f32);
	// fadds f10,f1,f12
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f12.f64));
	// lfs f13,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f9,8(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B8FE8) {
	__imp__sub_823B8FE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// rlwinm r10,r11,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FC;
	// rlwinm r9,r11,27,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFC;
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
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// lfs f0,-27648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17640(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,-11988(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11988);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,15124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15124);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// lfs f12,-14360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14360);
	ctx.f12.f64 = double(temp.f32);
	// fadds f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fadds f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmadds f2,f4,f10,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f2,0(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmadds f3,f5,f0,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f3,4(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9030) {
	__imp__sub_823B9030(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B90BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B90BC) {
	__imp__sub_823B90BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B90C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r10,r11,-27648
	ctx.r10.s64 = ctx.r11.s64 + -27648;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B90C0) {
	__imp__sub_823B90C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B90E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B90E4) {
	__imp__sub_823B90E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B90E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B90E8) {
	__imp__sub_823B90E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B90F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r8,532(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 532);
	// lbzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B90F0) {
	__imp__sub_823B90F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B910C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B910C) {
	__imp__sub_823B910C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9110) {
	PPC_FUNC_PROLOGUE();
	// b 0x8239e408
	sub_8239E408(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9110) {
	__imp__sub_823B9110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9114) {
	__imp__sub_823B9114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8239e510
	sub_8239E510(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9118) {
	__imp__sub_823B9118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r11,-27648
	ctx.r7.s64 = ctx.r11.s64 + -27648;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
loc_823B9144:
	// lwz r9,40(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b9144
	if (ctx.cr6.lt) goto loc_823B9144;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9120) {
	__imp__sub_823B9120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9170) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B9178;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r8,-31772
	ctx.r8.s64 = -2082209792;
	// addi r11,r11,-27648
	ctx.r11.s64 = ctx.r11.s64 + -27648;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r31,r8,-28032
	ctx.r31.s64 = ctx.r8.s64 + -28032;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r3,r7,12
	ctx.r3.u64 = ctx.r7.u64 | 12;
	// lwz r5,80(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// addi r6,r11,52
	ctx.r6.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r31,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// clrlwi r10,r4,30
	ctx.r10.u64 = ctx.r4.u32 & 0x3;
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r30,r4,2,28,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xC;
	// rlwinm r29,r10,2,28,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r28,r11,52
	ctx.r28.s64 = ctx.r11.s64 + 52;
	// lwzx r9,r7,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r9,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stwx r10,r31,r3
	PPC_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r8.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwzx r3,r29,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// stw r3,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r3.u32);
	// bl 0x822dd778
	ctx.lr = 0x823B9204;
	sub_822DD778(ctx, base);
	// lis r6,-31780
	ctx.r6.s64 = -2082734080;
	// lwz r11,12876(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12876);
	// lbz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x823b921c
	if (!ctx.cr6.eq) goto loc_823B921C;
	// bl 0x823b9120
	ctx.lr = 0x823B921C;
	sub_823B9120(ctx, base);
loc_823B921C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r11,4
	ctx.r9.u64 = ctx.r11.u64 | 4;
	// ori r8,r10,8
	ctx.r8.u64 = ctx.r10.u64 | 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwzx r9,r31,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823b92ac
	if (!ctx.cr6.gt) goto loc_823B92AC;
	// addis r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 65536;
	// addi r8,r8,-28668
	ctx.r8.s64 = ctx.r8.s64 + -28668;
loc_823B924C:
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r5,r7,12
	ctx.r5.u64 = ctx.r7.u64 | 12;
	// lwzx r4,r31,r5
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// subf r3,r6,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r6.s64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// blt cr6,0x823b929c
	if (ctx.cr6.lt) goto loc_823B929C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r5,r9,8
	ctx.r5.u64 = ctx.r9.u64 | 8;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// ori r6,r4,8
	ctx.r6.u64 = ctx.r4.u64 | 8;
	// ori r4,r3,4
	ctx.r4.u64 = ctx.r3.u64 | 4;
	// sthx r11,r7,r31
	PPC_STORE_U16(ctx.r7.u32 + ctx.r31.u32, ctx.r11.u16);
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r9,r31,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stwx r11,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r11.u32);
loc_823B929C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b924c
	if (ctx.cr6.lt) goto loc_823B924C;
loc_823B92AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9170) {
	__imp__sub_823B9170(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B92B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B92B4) {
	__imp__sub_823B92B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B92B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r5,1,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x4;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// rlwinm r9,r4,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B92B8) {
	__imp__sub_823B92B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B92EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B92EC) {
	__imp__sub_823B92EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B92F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r9,r4,5,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFE00;
	// rlwinm r11,r3,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r4,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r9,r4,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r4,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xor r5,r7,r3
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r3.u64;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r5,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x18;
	// rlwinm r10,r3,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r4,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B92F0) {
	__imp__sub_823B92F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9338) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823B9340;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r3,0,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r11,r3,2,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1E0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r3,r3,27,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x8;
	// rlwinm r29,r31,2,23,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1FC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r3,-31771
	ctx.r3.s64 = -2082144256;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,27,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x4;
	// rlwinm r30,r31,28,4,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r28,r3,-27648
	ctx.r28.s64 = ctx.r3.s64 + -27648;
	// xor r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 ^ ctx.r29.u64;
	// rlwinm r3,r11,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// rlwinm r31,r31,2,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x4;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lis r3,-31799
	ctx.r3.s64 = -2083979264;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r31,r3,4608
	ctx.r31.s64 = ctx.r3.s64 + 4608;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r3,8456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8456);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x823a16c0
	ctx.lr = 0x823B93C8;
	sub_823A16C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9338) {
	__imp__sub_823B9338(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B93D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// rlwinm r10,r3,0,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFE00;
	// lbz r6,1(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm r11,r3,2,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1E0;
	// lbz r8,3(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// rlwinm r9,r3,27,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x8;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// rlwinm r4,r3,28,4,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r3,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r3,2,23,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1FC;
	// lis r31,-31771
	ctx.r31.s64 = -2082144256;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// xor r9,r4,r30
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r30.u64;
	// addi r11,r31,-27904
	ctx.r11.s64 = ctx.r31.s64 + -27904;
	// rotlwi r4,r8,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r8,r9,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 | ctx.r7.u64;
	// lwz r10,284(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 284);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r3,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// rlwinm r4,r7,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r7,r4,r6
	ctx.r7.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lwz r8,72(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// li r10,64
	ctx.r10.s64 = 64;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r7,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823B9464:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bdnz 0x823b9464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B9464;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B93D0) {
	__imp__sub_823B93D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B947C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B947C) {
	__imp__sub_823B947C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9480) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r10,4608
	ctx.r9.s64 = ctx.r10.s64 + 4608;
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mulli r8,r3,44
	ctx.r8.s64 = ctx.r3.s64 * 44;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r7,632(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,620(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 620);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lhz r10,34(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// rlwinm r4,r5,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823b94cc
	if (ctx.cr6.eq) goto loc_823B94CC;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// b 0x823b93d0
	sub_823B93D0(ctx, base);
	return;
loc_823B94CC:
	// lbz r5,37(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// b 0x823b9338
	sub_823B9338(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9480) {
	__imp__sub_823B9480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B94E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B94E4) {
	__imp__sub_823B94E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B94E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r11,r10,-28032
	ctx.r11.s64 = ctx.r10.s64 + -28032;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,14336
	ctx.r3.s64 = ctx.r11.s64 + 14336;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// addi r8,r11,31
	ctx.r8.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r8,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// b 0x822dd778
	sub_822DD778(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B94E8) {
	__imp__sub_823B94E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9514) {
	__imp__sub_823B9514(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823B9520;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r11,-28032
	ctx.r10.s64 = ctx.r11.s64 + -28032;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// lwzx r11,r10,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823b9688
	if (ctx.cr6.eq) goto loc_823B9688;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r25,r11,4608
	ctx.r25.s64 = ctx.r11.s64 + 4608;
	// ori r8,r9,16
	ctx.r8.u64 = ctx.r9.u64 | 16;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r31,8456(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// rlwinm r23,r7,27,5,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823b9688
	if (ctx.cr6.eq) goto loc_823B9688;
	// addi r24,r10,14336
	ctx.r24.s64 = ctx.r10.s64 + 14336;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// addi r28,r10,-27648
	ctx.r28.s64 = ctx.r10.s64 + -27648;
	// addi r27,r11,17280
	ctx.r27.s64 = ctx.r11.s64 + 17280;
loc_823B9588:
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b9678
	if (ctx.cr6.eq) goto loc_823B9678;
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r29,r26,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823b9678
	if (!ctx.cr6.lt) goto loc_823B9678;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823B95A8:
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r8,620(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// mulli r9,r10,44
	ctx.r9.s64 = ctx.r10.s64 * 44;
	// lwzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 & ~ctx.r7.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,38(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,34(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// rlwinm r4,r5,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// beq cr6,0x823b95f8
	if (ctx.cr6.eq) goto loc_823B95F8;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x823b93d0
	ctx.lr = 0x823B95F4;
	sub_823B93D0(ctx, base);
	// b 0x823b9664
	goto loc_823B9664;
loc_823B95F8:
	// rlwinm r6,r3,2,23,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1E0;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r8,r3,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFE00;
	// lbz r5,37(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// rlwinm r7,r3,27,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x8;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r4,r3,28,4,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFF0;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r6,72(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r8,r3,27,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r3,2,23,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1FC;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// xor r8,r4,r22
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r22.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	// rlwinm r8,r3,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x823a16c0
	ctx.lr = 0x823B9664;
	sub_823A16C0(ctx, base);
loc_823B9664:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lwz r31,8456(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8456);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x823b95a8
	if (ctx.cr6.lt) goto loc_823B95A8;
loc_823B9678:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x823b9588
	if (ctx.cr6.lt) goto loc_823B9588;
loc_823B9688:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9518) {
	__imp__sub_823B9518(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// rlwinm r10,r11,2,23,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FC;
	// rlwinm r9,r11,27,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFC;
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
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// frsp f6,f11
	ctx.f6.f64 = double(float(ctx.f11.f64));
	// lfs f0,-27648(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -27648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17640(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 17640);
	ctx.f13.f64 = double(temp.f32);
	// lis r5,-32251
	ctx.r5.s64 = -2113601536;
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,5488(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f10,-11988(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -11988);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,15124(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 15124);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f12
	ctx.f8.f64 = double(float(ctx.f12.f64));
	// lfs f12,-14360(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14360);
	ctx.f12.f64 = double(temp.f32);
	// fadds f4,f6,f13
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lfs f11,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,4504(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4504, temp.u32);
	// stfs f11,4508(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4508, temp.u32);
	// fadds f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fmadds f2,f4,f10,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f2,4496(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4496, temp.u32);
	// fmadds f3,f5,f0,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f3,4500(r4)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4500, temp.u32);
	// lhz r11,5458(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 5458);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sth r9,5458(r4)
	PPC_STORE_U16(ctx.r4.u32 + 5458, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9690) {
	__imp__sub_823B9690(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,7
	ctx.r11.s64 = 7;
	// lvx128 v63,r0,r3
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-31852
	ctx.r9.s64 = -2087452672;
	// addi r8,r10,-4400
	ctx.r8.s64 = ctx.r10.s64 + -4400;
	// lvx128 v62,r3,r11
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r9,-31248
	ctx.r7.s64 = ctx.r9.s64 + -31248;
	// vperm128 v6,v63,v62,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// li r6,4512
	ctx.r6.s64 = 4512;
	// lvx128 v63,r0,r8
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r8.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v5,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r7.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghh v4,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_unpackhi_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v0.u16)));
	// vcuxwfp128 v61,v4,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_cvtepu32_ps_(simde_mm_load_si128((simde__m128i*)ctx.v4.u32)));
	// vmulfp128 v63,v61,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v60,v63,v63
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vperm128 v59,v60,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// stvx128 v59,r4,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r11,5460(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 5460);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// sth r5,5460(r4)
	PPC_STORE_U16(ctx.r4.u32 + 5460, ctx.r5.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9728) {
	__imp__sub_823B9728(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-27904
	ctx.r11.s64 = ctx.r11.s64 + -27904;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_823B9798:
	// rlwinm r10,r5,1,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x4;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r9,4
	ctx.r9.s64 = 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r6,-8
	ctx.r11.s64 = ctx.r6.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r6,64
	ctx.r6.s64 = ctx.r6.s64 + 64;
loc_823B97BC:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stwu r4,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823b97bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823B97BC;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// blt cr6,0x823b9798
	if (ctx.cr6.lt) goto loc_823B9798;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9788) {
	__imp__sub_823B9788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9814) {
	__imp__sub_823B9814(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-27648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,6820(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6820);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,-14356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,17800(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// stfs f12,528(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f0,536(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f13,540(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f11,532(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9818) {
	__imp__sub_823B9818(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r10,-27648
	ctx.r8.s64 = ctx.r10.s64 + -27648;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,6820(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6820);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,28(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lfs f12,-14356(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14356);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,17800(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17800);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,1212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1212, ctx.r11.u32);
	// lfs f0,-27648(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f12,528(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 528, temp.u32);
	// stfs f11,536(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 536, temp.u32);
	// stfs f10,540(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 540, temp.u32);
	// stfs f0,532(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 532, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9858) {
	__imp__sub_823B9858(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B98A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B98A4) {
	__imp__sub_823B98A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B98A8) {
	PPC_FUNC_PROLOGUE();
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// b 0x822e54e0
	sub_822E54E0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B98A8) {
	__imp__sub_823B98A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B98B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B98B4) {
	__imp__sub_823B98B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B98B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r8,r3,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// lis r10,-31772
	ctx.r10.s64 = -2082209792;
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r5,r10,-28032
	ctx.r5.s64 = ctx.r10.s64 + -28032;
	// addi r11,r11,-27648
	ctx.r11.s64 = ctx.r11.s64 + -27648;
	// slw r10,r6,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rotlw r7,r6,r9
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, ctx.r9.u8 & 0x1F);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// stwx r10,r5,r4
	PPC_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r10.u32);
	// bge cr6,0x823b9914
	if (!ctx.cr6.lt) goto loc_823B9914;
loc_823B98F8:
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// cmplwi cr6,r10,4096
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4096, ctx.xer);
	// blt cr6,0x823b98f8
	if (ctx.cr6.lt) goto loc_823B98F8;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stwx r10,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r10.u32);
loc_823B9914:
	// addi r7,r9,-7
	ctx.r7.s64 = ctx.r9.s64 + -7;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r7,2
	ctx.r5.s64 = ctx.r7.s64 + 2;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// slw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// slw r7,r6,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lfs f0,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// rlwinm r7,r8,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stw r7,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B98B8) {
	__imp__sub_823B98B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B996C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B996C) {
	__imp__sub_823B996C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9970) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823B9978;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13312
	ctx.r10.s64 = ctx.r11.s64 + 13312;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x823b98b8
	ctx.lr = 0x823B998C;
	sub_823B98B8(ctx, base);
	// bl 0x823b9788
	ctx.lr = 0x823B9990;
	sub_823B9788(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r31,r11,-27648
	ctx.r31.s64 = ctx.r11.s64 + -27648;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e54e0
	ctx.lr = 0x823B99B4;
	sub_822E54E0(ctx, base);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
loc_823B99C0:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// li r4,128
	ctx.r4.s64 = 128;
	// bl 0x822e54e0
	ctx.lr = 0x823B99D0;
	sub_822E54E0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x823b99c0
	if (!ctx.cr0.eq) goto loc_823B99C0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x822e54e0
	ctx.lr = 0x823B99F0;
	sub_822E54E0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,128
	ctx.r4.s64 = 128;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822e54e0
	ctx.lr = 0x823B9A08;
	sub_822E54E0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9970) {
	__imp__sub_823B9970(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9A14) {
	__imp__sub_823B9A14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823B9A20;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r31,4
	ctx.r31.s64 = 4;
	// addi r29,r11,-27648
	ctx.r29.s64 = ctx.r11.s64 + -27648;
	// addi r30,r29,48
	ctx.r30.s64 = ctx.r29.s64 + 48;
loc_823B9A34:
	// li r4,255
	ctx.r4.s64 = 255;
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r5,80(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// bl 0x822dd778
	ctx.lr = 0x823B9A44;
	sub_822DD778(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823b9a34
	if (!ctx.cr0.eq) goto loc_823B9A34;
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b9a94
	if (ctx.cr6.eq) goto loc_823B9A94;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,6912(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6912);
	ctx.f0.f64 = double(temp.f32);
loc_823B9A6C:
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lwz r9,32(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b9a6c
	if (ctx.cr6.lt) goto loc_823B9A6C;
loc_823B9A94:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r10,13412(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b9c94
	if (ctx.cr6.eq) goto loc_823B9C94;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b9c74
	if (ctx.cr6.eq) goto loc_823B9C74;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r23,r11,4608
	ctx.r23.s64 = ctx.r11.s64 + 4608;
loc_823B9AD4:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x823b9ba0
	if (ctx.cr6.eq) goto loc_823B9BA0;
	// lbz r30,6(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 6);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823b9ba0
	if (ctx.cr6.eq) goto loc_823B9BA0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_823B9B00:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
loc_823B9B14:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823b9b78
	if (ctx.cr6.eq) goto loc_823B9B78;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823b9b78
	if (ctx.cr6.eq) goto loc_823B9B78;
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
loc_823B9B34:
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823b9b68
	if (ctx.cr6.eq) goto loc_823B9B68;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823B9B4C:
	// lhz r21,0(r10)
	ctx.r21.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi cr6,r21,57
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 57, ctx.xer);
	// beq cr6,0x823b9b9c
	if (ctx.cr6.eq) goto loc_823B9B9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823b9b4c
	if (ctx.cr6.lt) goto loc_823B9B4C;
loc_823B9B68:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,84
	ctx.r8.s64 = ctx.r8.s64 + 84;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x823b9b34
	if (ctx.cr6.lt) goto loc_823B9B34;
loc_823B9B78:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r4,33
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 33, ctx.xer);
	// blt cr6,0x823b9b14
	if (ctx.cr6.lt) goto loc_823B9B14;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x823b9b00
	if (ctx.cr6.lt) goto loc_823B9B00;
	// b 0x823b9ba0
	goto loc_823B9BA0;
loc_823B9B9C:
	// li r25,0
	ctx.r25.s64 = 0;
loc_823B9BA0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// sth r25,34(r26)
	PPC_STORE_U16(ctx.r26.u32 + 34, ctx.r25.u16);
	// beq cr6,0x823b9c60
	if (ctx.cr6.eq) goto loc_823B9C60;
	// lbz r11,38(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 38);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823b9c60
	if (!ctx.cr6.eq) goto loc_823B9C60;
	// lwz r31,8456(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8456);
	// lwz r11,632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 632);
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 620);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lbz r8,38(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// lhz r9,34(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 34);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823b9bf4
	if (ctx.cr6.eq) goto loc_823B9BF4;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// bl 0x823b93d0
	ctx.lr = 0x823B9BF0;
	sub_823B93D0(ctx, base);
	// b 0x823b9c60
	goto loc_823B9C60;
loc_823B9BF4:
	// rlwinm r7,r3,0,0,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFE00;
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// rlwinm r8,r3,2,23,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1E0;
	// lbz r5,37(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 37);
	// rlwinm r6,r3,27,28,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x8;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r3,28,4,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFF0;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,72(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r9,r3,27,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x4;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r3,2,23,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x1FC;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// xor r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// rlwinm r9,r4,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r7,r8,0,27,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x18;
	// rlwinm r8,r3,2,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0x4;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r4,r10,24
	ctx.r4.s64 = ctx.r10.s64 + 24;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,40
	ctx.r9.s64 = ctx.r11.s64 + 40;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x823a16c0
	ctx.lr = 0x823B9C60;
	sub_823A16C0(ctx, base);
loc_823B9C60:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r27,r27,44
	ctx.r27.s64 = ctx.r27.s64 + 44;
	// addi r26,r26,44
	ctx.r26.s64 = ctx.r26.s64 + 44;
	// bne 0x823b9ad4
	if (!ctx.cr0.eq) goto loc_823B9AD4;
loc_823B9C74:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-28032
	ctx.r9.s64 = ctx.r11.s64 + -28032;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_823B9C94:
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-28032
	ctx.r9.s64 = ctx.r11.s64 + -28032;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9A18) {
	__imp__sub_823B9A18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9CB4) {
	__imp__sub_823B9CB4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9CB8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823b2510
	ctx.lr = 0x823B9CD4;
	sub_823B2510(ctx, base);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r11,-27648
	ctx.r10.s64 = ctx.r11.s64 + -27648;
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// addi r9,r9,-14352
	ctx.r9.s64 = ctx.r9.s64 + -14352;
	// stw r3,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// ori r7,r7,2
	ctx.r7.u64 = ctx.r7.u64 | 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x823d7118
	ctx.lr = 0x823B9D08;
	sub_823D7118(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9CB8) {
	__imp__sub_823B9CB8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9D18) {
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
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r31,r11,-27648
	ctx.r31.s64 = ctx.r11.s64 + -27648;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823b9d48
	if (ctx.cr6.eq) goto loc_823B9D48;
	// bl 0x823b2508
	ctx.lr = 0x823B9D40;
	sub_823B2508(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_823B9D48:
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

PPC_WEAK_FUNC(sub_823B9D18) {
	__imp__sub_823B9D18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9D5C) {
	__imp__sub_823B9D5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9D60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r11,-28032
	ctx.r8.s64 = ctx.r11.s64 + -28032;
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// ori r6,r9,8
	ctx.r6.u64 = ctx.r9.u64 | 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r11,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r10,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9D60) {
	__imp__sub_823B9D60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9D8C) {
	__imp__sub_823B9D8C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9D90) {
	PPC_FUNC_PROLOGUE();
	// lhz r10,34(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// lis r11,-31772
	ctx.r11.s64 = -2082209792;
	// addi r11,r11,-28032
	ctx.r11.s64 = ctx.r11.s64 + -28032;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b9dac
	if (ctx.cr6.eq) goto loc_823B9DAC;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// b 0x823b9e98
	goto loc_823B9E98;
loc_823B9DAC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,4
	ctx.r8.u64 = ctx.r10.u64 | 4;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r9,r11,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// bge cr6,0x823b9ddc
	if (!ctx.cr6.lt) goto loc_823B9DDC;
	// ori r7,r10,4
	ctx.r7.u64 = ctx.r10.u64 | 4;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// b 0x823b9e54
	goto loc_823B9E54;
loc_823B9DDC:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r8,r10,12
	ctx.r8.u64 = ctx.r10.u64 | 12;
	// ori r6,r9,8
	ctx.r6.u64 = ctx.r9.u64 | 8;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r10,r11,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
loc_823B9DF0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823b9ebc
	if (ctx.cr6.eq) goto loc_823B9EBC;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// ori r8,r9,8
	ctx.r8.u64 = ctx.r9.u64 | 8;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 65536;
	// addi r5,r9,-28672
	ctx.r5.s64 = ctx.r9.s64 + -28672;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lhzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r11.u32);
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823b9df0
	if (ctx.cr6.eq) goto loc_823B9DF0;
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r6,r11,22528
	ctx.r6.s64 = ctx.r11.s64 + 22528;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,13412(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// lhzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// mulli r7,r7,44
	ctx.r7.s64 = ctx.r7.s64 * 44;
	// lwz r10,88(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// add r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 + ctx.r10.u64;
	// sth r5,34(r6)
	PPC_STORE_U16(ctx.r6.u32 + 34, ctx.r5.u16);
loc_823B9E54:
	// sth r8,34(r3)
	PPC_STORE_U16(ctx.r3.u32 + 34, ctx.r8.u16);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r11,22528
	ctx.r6.s64 = ctx.r11.s64 + 22528;
	// lis r5,-32191
	ctx.r5.s64 = -2109669376;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r3,r5,17280
	ctx.r3.s64 = ctx.r5.s64 + 17280;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// sthx r4,r7,r6
	PPC_STORE_U16(ctx.r7.u32 + ctx.r6.u32, ctx.r4.u16);
	// rlwinm r6,r4,2,25,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x7C;
	// addi r7,r11,14336
	ctx.r7.s64 = ctx.r11.s64 + 14336;
	// ori r4,r5,16
	ctx.r4.u64 = ctx.r5.u64 | 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// lwzx r6,r10,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// or r5,r3,r6
	ctx.r5.u64 = ctx.r3.u64 | ctx.r6.u64;
	// stwx r5,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r5.u32);
	// stwx r8,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r8.u32);
loc_823B9E98:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// ori r7,r8,12
	ctx.r7.u64 = ctx.r8.u64 | 12;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r10,-28672
	ctx.r5.s64 = ctx.r10.s64 + -28672;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r11,r11,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// stwx r11,r6,r5
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u32);
	// blr 
	return;
loc_823B9EBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823B9D90) {
	__imp__sub_823B9D90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823B9EC4) {
	__imp__sub_823B9EC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823B9EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823B9ED0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lhz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-27648
	ctx.r31.s64 = ctx.r11.s64 + -27648;
	// beq cr6,0x823ba050
	if (ctx.cr6.eq) goto loc_823BA050;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r9,24
	ctx.r10.u64 = ctx.r9.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823b9f60
	if (!ctx.cr6.eq) goto loc_823B9F60;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823b9ff8
	if (!ctx.cr6.eq) goto loc_823B9FF8;
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823b9ff8
	if (!ctx.cr6.eq) goto loc_823B9FF8;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823b9ffc
	if (ctx.cr6.eq) goto loc_823B9FFC;
	// b 0x823b9ff8
	goto loc_823B9FF8;
loc_823B9F60:
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lfs f13,5992(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// lfs f8,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// lfs f6,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f11
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f11.f64));
	// fmuls f4,f9,f9
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmadds f3,f7,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64 + ctx.f4.f64));
	// fmadds f0,f5,f5,f3
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f5.f64 + ctx.f3.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823b9ffc
	if (ctx.cr6.lt) goto loc_823B9FFC;
	// lis r9,-31772
	ctx.r9.s64 = -2082209792;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// addi r6,r9,-28032
	ctx.r6.s64 = ctx.r9.s64 + -28032;
	// ori r5,r7,12
	ctx.r5.u64 = ctx.r7.u64 | 12;
	// lwz r10,12668(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12668);
	// lwzx r9,r6,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf. r5,r6,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x823b9ff8
	if (ctx.cr0.eq) goto loc_823B9FF8;
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// lwz r10,12744(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12744);
	// lfs f13,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f13
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823b9ffc
	if (ctx.cr6.lt) goto loc_823B9FFC;
loc_823B9FF8:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823B9FFC:
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ba050
	if (ctx.cr6.eq) goto loc_823BA050;
	// lis r8,-32191
	ctx.r8.s64 = -2109669376;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r7,r11,2,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// addi r6,r8,17280
	ctx.r6.s64 = ctx.r8.s64 + 17280;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r4,r7,r6
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// andc r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lbzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r8.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823BA050:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ba1b0
	if (!ctx.cr6.eq) goto loc_823BA1B0;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r7,68(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r6,72(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwzx r3,r11,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x823ba0d4
	if (ctx.cr6.lt) goto loc_823BA0D4;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
loc_823BA098:
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// divwu r9,r11,r3
	ctx.r9.u32 = ctx.r11.u32 / ctx.r3.u32;
	// mullw r8,r9,r3
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// subf r8,r8,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r8.s64;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823ba1a8
	if (ctx.cr6.eq) goto loc_823BA1A8;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r30,r11,r6
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r28,r11,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 & ctx.r30.u64;
	// and r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bge cr6,0x823ba098
	if (!ctx.cr6.lt) goto loc_823BA098;
loc_823BA0D4:
	// lis r7,-32191
	ctx.r7.s64 = -2109669376;
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r28,r7,17280
	ctx.r28.s64 = ctx.r7.s64 + 17280;
	// rlwinm r7,r8,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r8,r6,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r7,r5,r8
	ctx.r7.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// add r6,r30,r9
	ctx.r6.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f12,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// sth r27,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r27.u16);
	// bl 0x823973a0
	ctx.lr = 0x823BA140;
	sub_823973A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// stb r4,1(r26)
	PPC_STORE_U8(ctx.r26.u32 + 1, ctx.r4.u8);
	// bctrl 
	ctx.lr = 0x823BA154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823b9338
	ctx.lr = 0x823BA17C;
	sub_823B9338(ctx, base);
	// stb r3,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r3.u8);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r7,1(r26)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r26.u32 + 1);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823BA1A8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_823BA1B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823B9EC8) {
	__imp__sub_823B9EC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA1BC) {
	__imp__sub_823BA1BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA1C0) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r11,-28432
	ctx.r5.s64 = ctx.r11.s64 + -28432;
	// bl 0x823b9ec8
	ctx.lr = 0x823BA1F0;
	sub_823B9EC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA1C0) {
	__imp__sub_823BA1C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA200) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lfs f11,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lfs f10,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f9,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// addi r5,r10,-28400
	ctx.r5.s64 = ctx.r10.s64 + -28400;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f9,100(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x823b9ec8
	ctx.lr = 0x823BA260;
	sub_823B9EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA200) {
	__imp__sub_823BA200(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA270) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lis r10,-32196
	ctx.r10.s64 = -2109997056;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r10,-28392
	ctx.r5.s64 = ctx.r10.s64 + -28392;
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
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
	// bl 0x823b9ec8
	ctx.lr = 0x823BA2B8;
	sub_823B9EC8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA270) {
	__imp__sub_823BA270(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA2C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA2C8) {
	__imp__sub_823BA2C8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA2CC) {
	__imp__sub_823BA2CC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA2D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA2D0) {
	__imp__sub_823BA2D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA2D4) {
	__imp__sub_823BA2D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,16(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f1,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,20(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA2D8) {
	__imp__sub_823BA2D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA354) {
	__imp__sub_823BA354(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BA360;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ble cr6,0x823ba434
	if (!ctx.cr6.gt) goto loc_823BA434;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lfs f9,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f8,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f8.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
loc_823BA3C0:
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f6,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f3,f10,f5,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsubs f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823ba3fc
	if (!ctx.cr6.gt) goto loc_823BA3FC;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x823ba410
	goto loc_823BA410;
loc_823BA3FC:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x823ba40c
	if (!ctx.cr6.lt) goto loc_823BA40C;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// b 0x823ba410
	goto loc_823BA410;
loc_823BA40C:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_823BA410:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// bdnz 0x823ba3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA3C0;
loc_823BA434:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stfsx f0,r9,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// bne cr6,0x823ba468
	if (!ctx.cr6.eq) goto loc_823BA468;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BA468:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ba494
	if (!ctx.cr6.eq) goto loc_823BA494;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823de1f0
	ctx.lr = 0x823BA488;
	sub_823DE1F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BA494:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ble cr6,0x823ba5f0
	if (!ctx.cr6.gt) goto loc_823BA5F0;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823BA4AC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwzx r31,r6,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x823ba4e4
	if (!ctx.cr6.eq) goto loc_823BA4E4;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BA4D0:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823ba4d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA4D0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823ba5d8
	goto loc_823BA5D8;
loc_823BA4E4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823ba510
	if (!ctx.cr6.eq) goto loc_823BA510;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BA4FC:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823ba4fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA4FC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_823BA510:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ba5dc
	if (ctx.cr6.eq) goto loc_823BA5DC;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x823ba5dc
	if (ctx.cr6.eq) goto loc_823BA5DC;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lfs f0,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// divw r7,r10,r30
	ctx.r7.s32 = ctx.r10.s32 / ctx.r30.s32;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// lfsx f13,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmadds f7,f8,f10,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f10,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f2,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f13,f0,f10,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f8,f9,f10,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f10,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f0,f1,f10,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_823BA5D8:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_823BA5DC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bne 0x823ba4ac
	if (!ctx.cr0.eq) goto loc_823BA4AC;
loc_823BA5F0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BA358) {
	__imp__sub_823BA358(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA5F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f11,f12,f1,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f0.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// fmadds f7,f8,f1,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f1,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f1.f64 + ctx.f6.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f2.f64));
	// fmadds f12,f13,f1,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f12,12(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fmadds f8,f9,f1,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f1.f64 + ctx.f11.f64));
	// stfs f8,16(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f1,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 + ctx.f7.f64));
	// stfs f4,20(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA5F8) {
	__imp__sub_823BA5F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA674) {
	__imp__sub_823BA674(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BA680;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// ble cr6,0x823ba754
	if (!ctx.cr6.gt) goto loc_823BA754;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f11,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lfs f9,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lfs f8,6004(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6004);
	ctx.f8.f64 = double(temp.f32);
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f13,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
loc_823BA6E0:
	// lfs f0,-4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmuls f7,f12,f0
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f6,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f11,f6,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f7.f64));
	// fmadds f3,f10,f5,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f5.f64 + ctx.f4.f64));
	// fsubs f0,f3,f9
	ctx.f0.f64 = double(float(ctx.f3.f64 - ctx.f9.f64));
	// stfsx f0,r9,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823ba71c
	if (!ctx.cr6.gt) goto loc_823BA71C;
	// stw r3,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r3.u32);
	// b 0x823ba730
	goto loc_823BA730;
loc_823BA71C:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x823ba72c
	if (!ctx.cr6.lt) goto loc_823BA72C;
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// b 0x823ba730
	goto loc_823BA730;
loc_823BA72C:
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
loc_823BA730:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// bdnz 0x823ba6e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA6E0;
loc_823BA754:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// stfsx f0,r9,r6
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// bne cr6,0x823ba788
	if (!ctx.cr6.eq) goto loc_823BA788;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BA788:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ba7b4
	if (!ctx.cr6.eq) goto loc_823BA7B4;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823de1f0
	ctx.lr = 0x823BA7A8;
	sub_823DE1F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BA7B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ble cr6,0x823ba910
	if (!ctx.cr6.gt) goto loc_823BA910;
	// addi r9,r4,20
	ctx.r9.s64 = ctx.r4.s64 + 20;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823BA7CC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lwzx r31,r6,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x823ba804
	if (!ctx.cr6.eq) goto loc_823BA804;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BA7F0:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823ba7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA7F0;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823ba8f8
	goto loc_823BA8F8;
loc_823BA804:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x823ba830
	if (!ctx.cr6.eq) goto loc_823BA830;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r10,r9,-24
	ctx.r10.s64 = ctx.r9.s64 + -24;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BA81C:
	// lwzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r7,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823ba81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BA81C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_823BA830:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x823ba8fc
	if (ctx.cr6.eq) goto loc_823BA8FC;
	// cmpw cr6,r10,r31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x823ba8fc
	if (ctx.cr6.eq) goto loc_823BA8FC;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lfs f0,-20(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// divw r7,r10,r30
	ctx.r7.s32 = ctx.r10.s32 / ctx.r30.s32;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// lfsx f13,r6,r8
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r5
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lfs f9,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fmadds f7,f8,f10,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,-16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fmadds f3,f4,f10,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f3,4(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f2,-12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fmadds f13,f0,f10,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f2.f64));
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f11,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f8,f9,f10,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f8,12(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f7,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmadds f4,f5,f10,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f7.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f3,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fmadds f0,f1,f10,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f3.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_823BA8F8:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
loc_823BA8FC:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// bne 0x823ba7cc
	if (!ctx.cr0.eq) goto loc_823BA7CC;
loc_823BA910:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BA678) {
	__imp__sub_823BA678(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA918) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ba934
	if (ctx.cr6.eq) goto loc_823BA934;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BA934:
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r3,r7,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA918) {
	__imp__sub_823BA918(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA950) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,13412(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13412);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r6,r7,29
	ctx.r6.u64 = ctx.r7.u32 & 0x7;
	// rlwinm r6,r6,0,31,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ba990
	if (ctx.cr6.eq) goto loc_823BA990;
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_823BA990:
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// and r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 & ctx.r10.u64;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cntlzw r6,r7
	ctx.r6.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r3,r6,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA950) {
	__imp__sub_823BA950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BA9AC) {
	__imp__sub_823BA9AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mulli r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 * 44;
	// lwz r11,13412(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13412);
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r11,34(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r3,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA9B0) {
	__imp__sub_823BA9B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BA9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r5,48
	ctx.r11.s64 = ctx.r5.s64 + 48;
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r5,64
	ctx.r11.s64 = ctx.r5.s64 + 64;
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f13,f5
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// fmadds f3,f11,f0,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f4.f64));
	// addi r9,r5,80
	ctx.r9.s64 = ctx.r5.s64 + 80;
	// fmadds f2,f9,f12,f3
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f3.f64));
	// fsubs f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f1,12(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,16(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmr f3,f13
	ctx.f3.f64 = ctx.f13.f64;
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,20(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// fmr f8,f11
	ctx.f8.f64 = ctx.f11.f64;
	// lfs f10,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,24(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmadds f0,f11,f7,f1
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f13,f9,f5,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fsubs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f12,28(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,32(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,36(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f6,f9
	ctx.f6.f64 = ctx.f9.f64;
	// stfs f9,40(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// lfs f8,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmadds f0,f8,f7,f1
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f1.f64));
	// fmadds f13,f9,f5,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fsubs f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f4.f64));
	// stfs f12,44(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,48(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,52(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// lfs f7,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,56(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// lfs f1,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f5,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f5,f4,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f10,f6,f2,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f2.f64 + ctx.f11.f64));
	// fsubs f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f9,60(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,64(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 64, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,68(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 68, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// stfs f6,72(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 72, temp.u32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,64(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f5,68(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f11,f5,f12,f13
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfs f3,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f10,f6,f3,f11
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f3.f64 + ctx.f11.f64));
	// fsubs f9,f10,f2
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f2.f64));
	// stfs f9,76(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 76, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,80(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 80, temp.u32);
	// lfs f6,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f5,84(r5)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + 84, temp.u32);
	// lfs f4,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,88(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 88, temp.u32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,84(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f9,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f11
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f8,f2,f9,f10
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f7,f3,f0,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fsubs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// stfs f6,92(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 92, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BA9D8) {
	__imp__sub_823BA9D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BABCC) {
	__imp__sub_823BABCC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BABD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f9,f12,f13
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f0.f64));
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fsubs f1,f3,f13
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f7
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f8,f9
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fmuls f3,f1,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// fmsubs f0,f1,f2,f5
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f5.f64));
	// fmsubs f13,f13,f9,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 - ctx.f3.f64));
	// fmsubs f12,f4,f8,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f12.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmadds f9,f7,f13,f11
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f11,f6,f12,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f9,f11,f11
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f13,5880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f8,f12,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f10.f64));
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmuls f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fcmpu cr6,f9,f6
	ctx.cr6.compare(ctx.f9.f64, ctx.f6.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BABD0) {
	__imp__sub_823BABD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BAC7C) {
	__imp__sub_823BAC7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BAC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// addi r8,r5,-16
	ctx.r8.s64 = ctx.r5.s64 + -16;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
loc_823BACA4:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f13,28(r8)
	ea = 28 + ctx.r8.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823baca4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BACA4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BAC80) {
	__imp__sub_823BAC80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BACE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,217(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 217);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bacf4
	if (!ctx.cr6.eq) goto loc_823BACF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823BACF4:
	// lbz r11,21(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 21);
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

PPC_WEAK_FUNC(sub_823BACE0) {
	__imp__sub_823BACE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BAD04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BAD04) {
	__imp__sub_823BAD04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BAD08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x823BAD10;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823ddff8
	ctx.lr = 0x823BAD18;
	__savefpr_16(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,20(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lbz r10,216(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// stw r3,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r3.u32);
	// stw r4,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r4.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r5,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r5.u32);
	// stw r6,876(r1)
	PPC_STORE_U32(ctx.r1.u32 + 876, ctx.r6.u32);
	// stw r8,892(r1)
	PPC_STORE_U32(ctx.r1.u32 + 892, ctx.r8.u32);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r11.u8);
	// beq cr6,0x823bad58
	if (ctx.cr6.eq) goto loc_823BAD58;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// beq cr6,0x823bb384
	if (ctx.cr6.eq) goto loc_823BB384;
loc_823BAD58:
	// lbz r11,21(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 21);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r24,r7,10
	ctx.r24.s64 = ctx.r7.s64 + 10;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// stb r11,6(r20)
	PPC_STORE_U8(ctx.r20.u32 + 6, ctx.r11.u8);
	// lbz r9,22(r7)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + 22);
	// stb r9,5(r20)
	PPC_STORE_U8(ctx.r20.u32 + 5, ctx.r9.u8);
	// lwz r11,3216(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 3216);
	// lwz r5,4(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lhz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// lwz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mulli r9,r5,44
	ctx.r9.s64 = ctx.r5.s64 * 44;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// add r27,r9,r10
	ctx.r27.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823bb384
	if (ctx.cr6.eq) goto loc_823BB384;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r19,r11,-5616
	ctx.r19.s64 = ctx.r11.s64 + -5616;
	// addi r18,r10,-5632
	ctx.r18.s64 = ctx.r10.s64 + -5632;
	// ori r21,r9,65535
	ctx.r21.u64 = ctx.r9.u64 | 65535;
	// stw r19,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r19.u32);
	// li r23,4
	ctx.r23.s64 = 4;
	// stw r18,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r18.u32);
	// li r22,8
	ctx.r22.s64 = 8;
loc_823BADD4:
	// lhz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lhz r10,2(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// lwz r3,876(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 876);
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// add r6,r11,r27
	ctx.r6.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bl 0x823babd0
	ctx.lr = 0x823BAE00;
	sub_823BABD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823bb36c
	if (!ctx.cr6.eq) goto loc_823BB36C;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bac80
	ctx.lr = 0x823BAE1C;
	sub_823BAC80(ctx, base);
	// lwz r31,868(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
loc_823BAE2C:
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mulli r8,r29,216
	ctx.r8.s64 = ctx.r29.s64 * 216;
	// mulli r10,r9,216
	ctx.r10.s64 = ctx.r9.s64 * 216;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x823ba678
	ctx.lr = 0x823BAE54;
	sub_823BA678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bb36c
	if (ctx.cr6.eq) goto loc_823BB36C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// xori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 ^ 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x823bae2c
	if (ctx.cr6.lt) goto loc_823BAE2C;
	// lwz r10,100(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	// addi r11,r26,1092
	ctx.r11.s64 = ctx.r26.s64 + 1092;
	// lwz r4,1092(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1092);
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// cmpw cr6,r3,r9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x823bb398
	if (ctx.cr6.gt) goto loc_823BB398;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r8,92(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	// lwz r31,1088(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 1088);
	// addi r9,r26,1088
	ctx.r9.s64 = ctx.r26.s64 + 1088;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r7,r31,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r31.s64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// bgt cr6,0x823bb398
	if (ctx.cr6.gt) goto loc_823BB398;
	// lwz r11,96(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 96);
	// mulli r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 * 14;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x823baf08
	if (!ctx.cr6.gt) goto loc_823BAF08;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r5,r3,-2
	ctx.r5.s64 = ctx.r3.s64 + -2;
loc_823BAECC:
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// add r8,r10,r21
	ctx.r8.u64 = ctx.r10.u64 + ctx.r21.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r8,r20,-1
	ctx.r8.s64 = ctx.r20.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823BAEEC:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x823baeec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BAEEC;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x823baecc
	if (!ctx.cr0.eq) goto loc_823BAECC;
loc_823BAF08:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// lvx128 v0,r0,r19
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r19.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r7,2(r28)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r28.u32 + 2);
	// mulli r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 * 44;
	// lvx128 v13,r0,r18
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r18.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lhz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// lwz r26,852(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r9,r7,44
	ctx.r9.s64 = ctx.r7.s64 * 44;
	// lwz r5,36(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lfs f0,28(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// mulli r11,r6,44
	ctx.r11.s64 = ctx.r6.s64 * 44;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r30,r1,136
	ctx.r30.s64 = ctx.r1.s64 + 136;
	// lfs f12,28(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r1,92
	ctx.r25.s64 = ctx.r1.s64 + 92;
	// lfs f11,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r24,r1,92
	ctx.r24.s64 = ctx.r1.s64 + 92;
	// lfs f9,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// addi r21,r1,92
	ctx.r21.s64 = ctx.r1.s64 + 92;
	// addi r20,r1,140
	ctx.r20.s64 = ctx.r1.s64 + 140;
	// addi r19,r1,104
	ctx.r19.s64 = ctx.r1.s64 + 104;
	// addi r18,r1,104
	ctx.r18.s64 = ctx.r1.s64 + 104;
	// addi r17,r1,104
	ctx.r17.s64 = ctx.r1.s64 + 104;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r4,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// vupkd3d128 v12,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// vmaddfp v12,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v61,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v60,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v59,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r6,r23
	ea = (ctx.r6.u32 + ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r22
	ea = (ctx.r5.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// lvlx128 v58,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vupkd3d128 v12,v57,8
	temp.u32 = ctx.v57.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// vmaddfp v12,v12,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v56,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v55,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v54,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v56,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r24,r23
	ea = (ctx.r24.u32 + ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r21,r22
	ea = (ctx.r21.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lvlx128 v53,r0,r20
	temp.u32 = ctx.r20.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vupkd3d128 v12,v52,8
	temp.u32 = ctx.v52.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v50,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v49,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v51,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r18,r23
	ea = (ctx.r18.u32 + ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r17,r22
	ea = (ctx.r17.u32 + ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,104(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	// lfs f8,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// blt cr6,0x823bb268
	if (ctx.cr6.lt) goto loc_823BB268;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mulli r8,r29,216
	ctx.r8.s64 = ctx.r29.s64 * 216;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r1,164
	ctx.r10.s64 = ctx.r1.s64 + 164;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_823BB070:
	// lfs f8,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f25,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f30,f8,f11
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// stfs f25,4(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f28,f8,f3
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// lfs f22,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f26,f8,f4
	ctx.f26.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// stfs f22,8(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// lfs f29,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f4,f6,f4
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f22,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f25,f6,f12
	ctx.f25.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f22,12(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmuls f23,f6,f11
	ctx.f23.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fmuls f21,f6,f3
	ctx.f21.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// lfs f27,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f5,f6,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// lfs f24,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f22,f29,f0,f7
	ctx.f22.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f7.f64));
	// lfs f6,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f30,f29,f13,f30
	ctx.f30.f64 = double(float(ctx.f29.f64 * ctx.f13.f64 + ctx.f30.f64));
	// lfs f7,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f28,f29,f31,f28
	ctx.f28.f64 = double(float(ctx.f29.f64 * ctx.f31.f64 + ctx.f28.f64));
	// lfs f20,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f26,f29,f1,f26
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f1.f64 + ctx.f26.f64));
	// lfs f1,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f29,f29,f2,f8
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f2.f64 + ctx.f8.f64));
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f17,f27,f1,f4
	ctx.f17.f64 = double(float(ctx.f27.f64 * ctx.f1.f64 + ctx.f4.f64));
	// lfs f8,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f25,f27,f0,f25
	ctx.f25.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f25.f64));
	// lfs f19,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f23,f27,f13,f23
	ctx.f23.f64 = double(float(ctx.f27.f64 * ctx.f13.f64 + ctx.f23.f64));
	// lfs f18,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f21,f27,f31,f21
	ctx.f21.f64 = double(float(ctx.f27.f64 * ctx.f31.f64 + ctx.f21.f64));
	// lfs f16,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f5,f27,f2,f5
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f2.f64 + ctx.f5.f64));
	// lfs f27,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f4,f24,f10,f22
	ctx.f4.f64 = double(float(ctx.f24.f64 * ctx.f10.f64 + ctx.f22.f64));
	// stfs f4,16(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f4,f9,f24,f30
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f24.f64 + ctx.f30.f64));
	// stfs f4,20(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f4,f6,f24,f28
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f24.f64 + ctx.f28.f64));
	// stfs f4,24(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmadds f4,f7,f24,f26
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f24.f64 + ctx.f26.f64));
	// stfs f4,28(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmuls f26,f20,f11
	ctx.f26.f64 = double(float(ctx.f20.f64 * ctx.f11.f64));
	// lfs f28,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f3,f20,f3
	ctx.f3.f64 = double(float(ctx.f20.f64 * ctx.f3.f64));
	// lfs f22,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f29,f8,f24,f29
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f24.f64 + ctx.f29.f64));
	// stfs f29,32(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// fmuls f30,f20,f12
	ctx.f30.f64 = double(float(ctx.f20.f64 * ctx.f12.f64));
	// stfs f19,36(r11)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f16,40(r11)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// fmadds f29,f18,f10,f25
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f10.f64 + ctx.f25.f64));
	// stfs f27,44(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// fmadds f25,f18,f9,f23
	ctx.f25.f64 = double(float(ctx.f18.f64 * ctx.f9.f64 + ctx.f23.f64));
	// stfs f29,48(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fmadds f27,f18,f6,f21
	ctx.f27.f64 = double(float(ctx.f18.f64 * ctx.f6.f64 + ctx.f21.f64));
	// stfs f25,52(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// fmadds f29,f18,f7,f17
	ctx.f29.f64 = double(float(ctx.f18.f64 * ctx.f7.f64 + ctx.f17.f64));
	// stfs f27,56(r11)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// fmadds f25,f18,f8,f5
	ctx.f25.f64 = double(float(ctx.f18.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f29,60(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fmadds f29,f28,f13,f26
	ctx.f29.f64 = double(float(ctx.f28.f64 * ctx.f13.f64 + ctx.f26.f64));
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f5,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f26,f28,f31,f3
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f31.f64 + ctx.f3.f64));
	// stfs f25,64(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// fmuls f27,f20,f4
	ctx.f27.f64 = double(float(ctx.f20.f64 * ctx.f4.f64));
	// lfs f3,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f30,f28,f0,f30
	ctx.f30.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f30.f64));
	// stfs f22,68(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fmuls f25,f20,f5
	ctx.f25.f64 = double(float(ctx.f20.f64 * ctx.f5.f64));
	// lfs f24,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,36(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	ctx.f23.f64 = double(temp.f32);
	// stfs f3,72(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f22,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f27,f28,f1,f27
	ctx.f27.f64 = double(float(ctx.f28.f64 * ctx.f1.f64 + ctx.f27.f64));
	// fmuls f21,f22,f12
	ctx.f21.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// lfs f3,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f20,f22,f11
	ctx.f20.f64 = double(float(ctx.f22.f64 * ctx.f11.f64));
	// stfs f23,76(r11)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// fmadds f30,f24,f10,f30
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f10.f64 + ctx.f30.f64));
	// stfs f30,80(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// fmuls f18,f22,f3
	ctx.f18.f64 = double(float(ctx.f22.f64 * ctx.f3.f64));
	// lfs f19,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f30,f24,f9,f29
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f9.f64 + ctx.f29.f64));
	// stfs f30,84(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// fmuls f23,f22,f4
	ctx.f23.f64 = double(float(ctx.f22.f64 * ctx.f4.f64));
	// lfs f17,52(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f30,f24,f6,f26
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f6.f64 + ctx.f26.f64));
	// stfs f30,88(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// fmadds f28,f28,f2,f25
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f2.f64 + ctx.f25.f64));
	// lfs f16,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f22,f22,f5
	ctx.f22.f64 = double(float(ctx.f22.f64 * ctx.f5.f64));
	// lfs f25,56(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	ctx.f25.f64 = double(temp.f32);
	// fmadds f30,f24,f7,f27
	ctx.f30.f64 = double(float(ctx.f24.f64 * ctx.f7.f64 + ctx.f27.f64));
	// stfs f30,92(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// fmadds f30,f19,f0,f21
	ctx.f30.f64 = double(float(ctx.f19.f64 * ctx.f0.f64 + ctx.f21.f64));
	// lfs f29,60(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f27,f19,f13,f20
	ctx.f27.f64 = double(float(ctx.f19.f64 * ctx.f13.f64 + ctx.f20.f64));
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// fmadds f26,f19,f31,f18
	ctx.f26.f64 = double(float(ctx.f19.f64 * ctx.f31.f64 + ctx.f18.f64));
	// fmadds f23,f19,f1,f23
	ctx.f23.f64 = double(float(ctx.f19.f64 * ctx.f1.f64 + ctx.f23.f64));
	// fmadds f28,f24,f8,f28
	ctx.f28.f64 = double(float(ctx.f24.f64 * ctx.f8.f64 + ctx.f28.f64));
	// stfs f28,96(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// fmadds f22,f19,f2,f22
	ctx.f22.f64 = double(float(ctx.f19.f64 * ctx.f2.f64 + ctx.f22.f64));
	// stfs f17,100(r11)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f25,104(r11)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// stfs f29,108(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// fmadds f30,f16,f10,f30
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f10.f64 + ctx.f30.f64));
	// stfs f30,112(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// fmadds f30,f16,f9,f27
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f9.f64 + ctx.f27.f64));
	// stfs f30,116(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// fmadds f30,f16,f6,f26
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f6.f64 + ctx.f26.f64));
	// stfs f30,120(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// fmadds f30,f16,f7,f23
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f7.f64 + ctx.f23.f64));
	// stfs f30,124(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// fmadds f30,f16,f8,f22
	ctx.f30.f64 = double(float(ctx.f16.f64 * ctx.f8.f64 + ctx.f22.f64));
	// stfsu f30,128(r11)
	ea = 128 + ctx.r11.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bb070
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB070;
loc_823BB268:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823bb320
	if (!ctx.cr6.lt) goto loc_823BB320;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r7,r8,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r8.s64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_823BB2A4:
	// lfs f30,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f28,f30,f10
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// fmuls f27,f29,f11
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f11.f64));
	// lfs f26,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f29,f3
	ctx.f25.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// lfs f24,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f23,f29,f4
	ctx.f23.f64 = double(float(ctx.f29.f64 * ctx.f4.f64));
	// stfs f24,4(r11)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f21,f29,f5
	ctx.f21.f64 = double(float(ctx.f29.f64 * ctx.f5.f64));
	// lfs f22,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f22.f64 = double(temp.f32);
	// lfs f20,-12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f20.f64 = double(temp.f32);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// stfs f22,8(r11)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f20,12(r11)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f29,f29,f12,f28
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f28.f64));
	// fmadds f28,f13,f26,f27
	ctx.f28.f64 = double(float(ctx.f13.f64 * ctx.f26.f64 + ctx.f27.f64));
	// fmadds f27,f31,f26,f25
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f26.f64 + ctx.f25.f64));
	// fmadds f25,f1,f26,f23
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f26.f64 + ctx.f23.f64));
	// fmadds f24,f2,f26,f21
	ctx.f24.f64 = double(float(ctx.f2.f64 * ctx.f26.f64 + ctx.f21.f64));
	// fmadds f29,f0,f26,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f26.f64 + ctx.f29.f64));
	// stfs f29,16(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmadds f29,f30,f9,f28
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f28.f64));
	// stfs f29,20(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f29,f30,f6,f27
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f27.f64));
	// stfs f29,24(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmadds f29,f30,f7,f25
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f7.f64 + ctx.f25.f64));
	// stfs f29,28(r11)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f30,f30,f8,f24
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f24.f64));
	// stfsu f30,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bb2a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB2A4;
loc_823BB320:
	// lwz r10,892(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r9,r4,r3
	ctx.r9.u64 = ctx.r4.u64 + ctx.r3.u64;
	// lwz r24,120(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// lwz r25,116(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r20,860(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lwz r18,124(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r11,r26,1092
	ctx.r11.s64 = ctx.r26.s64 + 1092;
	// lwz r19,128(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r9,1092(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1092, ctx.r9.u32);
	// addi r11,r26,1088
	ctx.r11.s64 = ctx.r26.s64 + 1088;
	// stw r8,1088(r26)
	PPC_STORE_U32(ctx.r26.u32 + 1088, ctx.r8.u32);
	// ori r21,r6,65535
	ctx.r21.u64 = ctx.r6.u64 | 65535;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// li r22,8
	ctx.r22.s64 = 8;
	// li r23,4
	ctx.r23.s64 = 4;
loc_823BB36C:
	// lhz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,6
	ctx.r28.s64 = ctx.r28.s64 + 6;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823badd4
	if (ctx.cr6.lt) goto loc_823BADD4;
loc_823BB384:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de044
	ctx.lr = 0x823BB394;
	__restfpr_16(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_823BB398:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x823de044
	ctx.lr = 0x823BB3A8;
	__restfpr_16(ctx, base);
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BAD08) {
	__imp__sub_823BAD08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BB3AC) {
	__imp__sub_823BB3AC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BB3B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r6,88(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r5,r10,-2312
	ctx.r5.s64 = ctx.r10.s64 + -2312;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r28,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r28.u8);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// sth r28,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r28.u16);
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823b8248
	ctx.lr = 0x823BB3F8;
	sub_823B8248(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bb47c
	if (ctx.cr6.eq) goto loc_823BB47C;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_823BB410:
	// lbz r11,217(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 217);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bb424
	if (!ctx.cr6.eq) goto loc_823BB424;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823bb434
	goto loc_823BB434;
loc_823BB424:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823BB434:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb468
	if (ctx.cr6.eq) goto loc_823BB468;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bad08
	ctx.lr = 0x823BB45C;
	sub_823BAD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb4c4
	if (ctx.cr6.eq) goto loc_823BB4C4;
loc_823BB468:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bb410
	if (ctx.cr6.lt) goto loc_823BB410;
loc_823BB47C:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bb4b8
	if (ctx.cr6.eq) goto loc_823BB4B8;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r4,1088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lwz r3,1100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BB4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r28.u32);
	// stw r28,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r28.u32);
loc_823BB4B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BB4C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BB3B0) {
	__imp__sub_823BB3B0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB4D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
	// addi r8,r5,-16
	ctx.r8.s64 = ctx.r5.s64 + -16;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5484(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
loc_823BB4F4:
	// lhzu r10,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f13,28(r8)
	ea = 28 + ctx.r8.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823bb4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB4F4;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BB4D0) {
	__imp__sub_823BB4D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BB53C) {
	__imp__sub_823BB53C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf54
	ctx.lr = 0x823BB548;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4176(r1)
	ea = -4176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r11,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r11.u8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82195c80
	ctx.lr = 0x823BB56C;
	sub_82195C80(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823bb584
	if (!ctx.cr6.eq) goto loc_823BB584;
loc_823BB578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,4176
	ctx.r1.s64 = ctx.r1.s64 + 4176;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
loc_823BB584:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb994
	if (ctx.cr6.eq) goto loc_823BB994;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r20,r1,112
	ctx.r20.s64 = ctx.r1.s64 + 112;
	// ori r25,r11,65535
	ctx.r25.u64 = ctx.r11.u64 | 65535;
loc_823BB5A4:
	// lhz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r20.u32 + 0);
	// lwz r30,88(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195e18
	ctx.lr = 0x823BB5B4;
	sub_82195E18(ctx, base);
	// lbz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bb5d0
	if (ctx.cr6.eq) goto loc_823BB5D0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x823bb5e8
	goto loc_823BB5E8;
loc_823BB5D0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subf r8,r9,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_823BB5E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb980
	if (ctx.cr6.eq) goto loc_823BB980;
	// addi r24,r27,52
	ctx.r24.s64 = ctx.r27.s64 + 52;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r8,256
	ctx.r8.s64 = 256;
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82195c08
	ctx.lr = 0x823BB61C;
	sub_82195C08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb578
	if (ctx.cr6.eq) goto loc_823BB578;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r23,r27,108
	ctx.r23.s64 = ctx.r27.s64 + 108;
	// stb r22,106(r1)
	PPC_STORE_U8(ctx.r1.u32 + 106, ctx.r22.u8);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// sth r31,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r31.u16);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stb r22,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r22.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb944
	if (ctx.cr6.eq) goto loc_823BB944;
	// addi r26,r1,608
	ctx.r26.s64 = ctx.r1.s64 + 608;
loc_823BB650:
	// lhz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 4);
	// addi r5,r1,992
	ctx.r5.s64 = ctx.r1.s64 + 992;
	// lhz r10,2(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 2);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,992
	ctx.r9.s64 = ctx.r1.s64 + 992;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823babd0
	ctx.lr = 0x823BB6A0;
	sub_823BABD0(ctx, base);
	// clrlwi r8,r3,24
	ctx.r8.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x823bb930
	if (!ctx.cr6.eq) goto loc_823BB930;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x823bb4d0
	ctx.lr = 0x823BB6BC;
	sub_823BB4D0(ctx, base);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_823BB6CC:
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mulli r8,r30,216
	ctx.r8.s64 = ctx.r30.s64 * 216;
	// mulli r10,r9,216
	ctx.r10.s64 = ctx.r9.s64 * 216;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x823ba678
	ctx.lr = 0x823BB6F4;
	sub_823BA678(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bb930
	if (ctx.cr6.eq) goto loc_823BB930;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// xori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 ^ 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpwi cr6,r29,6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 6, ctx.xer);
	// blt cr6,0x823bb6cc
	if (ctx.cr6.lt) goto loc_823BB6CC;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// lwz r4,1092(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823bb578
	if (ctx.cr6.gt) goto loc_823BB578;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// lwz r31,1088(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1088);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r31,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r31.s64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x823bb578
	if (ctx.cr6.gt) goto loc_823BB578;
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// mulli r10,r31,14
	ctx.r10.s64 = ctx.r31.s64 * 14;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x823bb7a0
	if (!ctx.cr6.gt) goto loc_823BB7A0;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r5,r3,-2
	ctx.r5.s64 = ctx.r3.s64 + -2;
loc_823BB764:
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r6,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r6.u16);
	// add r29,r10,r25
	ctx.r29.u64 = ctx.r10.u64 + ctx.r25.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r8,r1,99
	ctx.r8.s64 = ctx.r1.s64 + 99;
	// sth r29,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r29.u16);
	// addi r7,r11,5
	ctx.r7.s64 = ctx.r11.s64 + 5;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823BB784:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stbu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x823bb784
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB784;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x823bb764
	if (!ctx.cr0.eq) goto loc_823BB764;
loc_823BB7A0:
	// lwz r10,104(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// blt cr6,0x823bb8a4
	if (ctx.cr6.lt) goto loc_823BB8A4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mulli r11,r30,216
	ctx.r11.s64 = ctx.r30.s64 * 216;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BB7E0:
	// lfs f0,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,32(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lfs f8,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,36(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f7,44(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,40(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// lfs f6,48(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,44(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,56(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// lfs f4,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,60(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// lfs f3,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,64(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f2,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// lfs f1,68(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lfs f0,72(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,88(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,92(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,96(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lfs f10,88(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,100(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f9,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,104(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// lfsu f0,96(r10)
	ea = 96 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,120(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// lfs f7,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,124(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// stfsu f6,128(r11)
	ea = 128 + ctx.r11.u32;
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bb7e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB7E0;
loc_823BB8A4:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823bb918
	if (!ctx.cr6.lt) goto loc_823BB918;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// subf r6,r9,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r9.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r10,-24
	ctx.r10.s64 = ctx.r10.s64 + -24;
loc_823BB8E4:
	// lfs f13,16(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,24(r10)
	ea = 24 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,24(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lfs f10,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// stfsu f9,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823bb8e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB8E4;
loc_823BB918:
	// add r11,r31,r3
	ctx.r11.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r10,r4,r3
	ctx.r10.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// stw r10,1092(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1092, ctx.r10.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r9,1088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1088, ctx.r9.u32);
loc_823BB930:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r26,r26,6
	ctx.r26.s64 = ctx.r26.s64 + 6;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bb650
	if (ctx.cr6.lt) goto loc_823BB650;
loc_823BB944:
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bb980
	if (ctx.cr6.eq) goto loc_823BB980;
	// lwz r11,1096(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1096);
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r7,104(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 104);
	// lwz r5,96(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r3,1100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1100);
	// lwz r6,1092(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1092);
	// lwz r4,1088(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1088);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BB978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,1088(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1088, ctx.r22.u32);
	// stw r22,1092(r27)
	PPC_STORE_U32(ctx.r27.u32 + 1092, ctx.r22.u32);
loc_823BB980:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r20,r20,2
	ctx.r20.s64 = ctx.r20.s64 + 2;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823bb5a4
	if (ctx.cr6.lt) goto loc_823BB5A4;
loc_823BB994:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,4176
	ctx.r1.s64 = ctx.r1.s64 + 4176;
	// b 0x823ddfa4
	__restgprlr_19(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BB540) {
	__imp__sub_823BB540(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BB9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// addi r7,r4,36
	ctx.r7.s64 = ctx.r4.s64 + 36;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r6,r3,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r3.s64;
loc_823BB9C0:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f9,f8,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfs f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f5,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f12,f5,f4,f13
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f13.f64));
	// fmadds f11,f3,f2,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f12.f64));
	// stfs f11,-4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + -4, temp.u32);
	// lfs f10,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f6
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f3,f10,f9,f4
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f4.f64));
	// fmadds f2,f8,f7,f3
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfsx f2,r6,r11
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// lfs f1,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f9,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmadds f7,f1,f0,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f6,f13,f12,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f7.f64));
	// fsubs f5,f11,f6
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f6.f64));
	// stfsu f5,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bb9c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BB9C0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BB9A0) {
	__imp__sub_823BB9A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823BBA80;
	__savegprlr_20(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,1064(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823bbc98
	if (ctx.cr6.eq) goto loc_823BBC98;
	// addi r26,r3,108
	ctx.r26.s64 = ctx.r3.s64 + 108;
	// addi r25,r3,52
	ctx.r25.s64 = ctx.r3.s64 + 52;
	// addi r30,r3,684
	ctx.r30.s64 = ctx.r3.s64 + 684;
	// li r23,2
	ctx.r23.s64 = 2;
	// lis r24,-31799
	ctx.r24.s64 = -2083979264;
loc_823BBAB0:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stb r23,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r23.u8);
	// sth r11,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// bl 0x820edc20
	ctx.lr = 0x823BBAC8;
	sub_820EDC20(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822da650
	ctx.lr = 0x823BBAD4;
	sub_822DA650(ctx, base);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820edc00
	ctx.lr = 0x823BBAE0;
	sub_820EDC00(ctx, base);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823bb9a0
	ctx.lr = 0x823BBAF0;
	sub_823BB9A0(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822d6770
	ctx.lr = 0x823BBB00;
	sub_822D6770(ctx, base);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// lhz r11,54(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 54);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lhz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 52);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x823bbbb4
	if (ctx.cr6.eq) goto loc_823BBBB4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823BBB2C:
	// lwz r11,13412(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 13412);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,16(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bbb58
	if (ctx.cr6.eq) goto loc_823BBB58;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x823bbb74
	goto loc_823BBB74;
loc_823BBB58:
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r5,r6,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r6.s64;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r11,r4,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
loc_823BBB74:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bbba4
	if (ctx.cr6.eq) goto loc_823BBBA4;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823bad08
	ctx.lr = 0x823BBB98;
	sub_823BAD08(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bbca4
	if (ctx.cr6.eq) goto loc_823BBCA4;
loc_823BBBA4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x823bbb2c
	if (!ctx.cr6.eq) goto loc_823BBB2C;
loc_823BBBB4:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bbc88
	if (ctx.cr6.eq) goto loc_823BBC88;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822d6378
	ctx.lr = 0x823BBBCC;
	sub_822D6378(ctx, base);
	// lfs f0,184(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,188(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f8,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f7,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f7.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f6,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f7
	ctx.f5.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f4,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f8,f6,f10,f0
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f0.f64));
	// fmadds f7,f4,f10,f11
	ctx.f7.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fmadds f6,f3,f10,f9
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f9.f64));
	// fmadds f4,f2,f5,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f4,132(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f3,f1,f5,f7
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f7.f64));
	// stfs f3,136(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fmadds f2,f12,f5,f6
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f6.f64));
	// stfs f2,140(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x823BBC48;
	sub_822D67F0(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r28,64
	ctx.r3.s64 = ctx.r28.s64 + 64;
	// bl 0x822d6770
	ctx.lr = 0x823BBC58;
	sub_822D6770(ctx, base);
	// lwz r11,1096(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1096);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lwz r7,104(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r6,1092(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1092);
	// lwz r5,96(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r4,1088(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1088);
	// lwz r3,1100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BBC80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,1088(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1088, ctx.r22.u32);
	// stw r22,1092(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1092, ctx.r22.u32);
loc_823BBC88:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmpw cr6,r21,r20
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x823bbab0
	if (!ctx.cr6.eq) goto loc_823BBAB0;
loc_823BBC98:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823BBCA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BBA78) {
	__imp__sub_823BBA78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBCB0) {
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
	// bl 0x823bb3b0
	ctx.lr = 0x823BBCC8;
	sub_823BB3B0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bbcec
	if (!ctx.cr6.eq) goto loc_823BBCEC;
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
loc_823BBCEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bba78
	ctx.lr = 0x823BBCF4;
	sub_823BBA78(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_823BBCB0) {
	__imp__sub_823BBCB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BBD14) {
	__imp__sub_823BBD14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBD18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BBD20;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r11.u64);
	// bl 0x822f1a00
	ctx.lr = 0x823BBD58;
	sub_822F1A00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2388
	ctx.lr = 0x823BBD60;
	sub_822F2388(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821023f0
	ctx.lr = 0x823BBD70;
	sub_821023F0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f23e0
	ctx.lr = 0x823BBD7C;
	sub_822F23E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f2368
	ctx.lr = 0x823BBD88;
	sub_822F2368(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BBD18) {
	__imp__sub_823BBD18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823BBD98;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x822d7a78
	ctx.lr = 0x823BBDC4;
	sub_822D7A78(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r31,108
	ctx.r5.s64 = ctx.r31.s64 + 108;
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f13,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stfs f13,208(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,212(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// lbz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r10,216(r31)
	PPC_STORE_U8(ctx.r31.u32 + 216, ctx.r10.u8);
	// lbz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r26.u32 + 4);
	// rlwinm r8,r9,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x1;
	// stb r8,217(r31)
	PPC_STORE_U8(ctx.r31.u32 + 217, ctx.r8.u8);
	// stw r28,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r28.u32);
	// stw r25,1084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1084, ctx.r25.u32);
	// bl 0x823ba9d8
	ctx.lr = 0x823BBE10;
	sub_823BA9D8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823bbe28
	if (!ctx.cr6.eq) goto loc_823BBE28;
	// stw r11,1064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823BBE28:
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// stw r11,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bbe48
	if (ctx.cr6.eq) goto loc_823BBE48;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
loc_823BBE48:
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r6,r31,224
	ctx.r6.s64 = ctx.r31.s64 + 224;
	// addi r5,r11,-22096
	ctx.r5.s64 = ctx.r11.s64 + -22096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823b8690
	ctx.lr = 0x823BBE64;
	sub_823B8690(ctx, base);
	// stw r3,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BBD90) {
	__imp__sub_823BBD90(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBE70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x823bbe88
	if (!ctx.cr6.eq) goto loc_823BBE88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BBE88:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,292
	ctx.r9.s64 = ctx.r11.s64 + 292;
	// stw r4,292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 292, ctx.r4.u32);
	// stw r5,296(r11)
	PPC_STORE_U32(ctx.r11.u32 + 296, ctx.r5.u32);
	// sth r6,300(r11)
	PPC_STORE_U16(ctx.r11.u32 + 300, ctx.r6.u16);
	// lwz r11,676(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 676);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,676(r10)
	PPC_STORE_U32(ctx.r10.u32 + 676, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BBE70) {
	__imp__sub_823BBE70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BBEBC) {
	__imp__sub_823BBEBC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBEC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823bbed8
	if (!ctx.cr6.eq) goto loc_823BBED8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BBED8:
	// addi r11,r11,89
	ctx.r11.s64 = ctx.r11.s64 + 89;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// lwz r11,1080(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1080);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,1080(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1080, ctx.r6.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BBEC0) {
	__imp__sub_823BBEC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBF10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1064(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x823bbf28
	if (!ctx.cr6.eq) goto loc_823BBF28;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BBF28:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,680
	ctx.r9.s64 = ctx.r11.s64 + 680;
	// stw r4,680(r11)
	PPC_STORE_U32(ctx.r11.u32 + 680, ctx.r4.u32);
	// stw r5,684(r11)
	PPC_STORE_U32(ctx.r11.u32 + 684, ctx.r5.u32);
	// sth r6,688(r11)
	PPC_STORE_U16(ctx.r11.u32 + 688, ctx.r6.u16);
	// lwz r11,1064(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1064);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,1064(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1064, ctx.r9.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BBF10) {
	__imp__sub_823BBF10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BBF5C) {
	__imp__sub_823BBF5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BBF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823BBF68;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de024
	ctx.lr = 0x823BBF70;
	__savefpr_27(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r26,0
	ctx.r26.s64 = 0;
loc_823BBFA0:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mulli r10,r31,216
	ctx.r10.s64 = ctx.r31.s64 * 216;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mulli r11,r9,216
	ctx.r11.s64 = ctx.r9.s64 * 216;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x823ba358
	ctx.lr = 0x823BBFC0;
	sub_823BA358(ctx, base);
	// xori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 ^ 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc4d0
	if (ctx.cr6.eq) goto loc_823BC4D0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// blt cr6,0x823bbfa0
	if (ctx.cr6.lt) goto loc_823BBFA0;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x823bc4e4
	if (ctx.cr6.gt) goto loc_823BC4E4;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x823bc4e4
	if (ctx.cr6.gt) goto loc_823BC4E4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lwz r11,340(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r4,r6,-5616
	ctx.r4.s64 = ctx.r6.s64 + -5616;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r6,r5,-5632
	ctx.r6.s64 = ctx.r5.s64 + -5632;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,24(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r29,r1,88
	ctx.r29.s64 = ctx.r1.s64 + 88;
	// li r9,4
	ctx.r9.s64 = 4;
	// lvx128 v0,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,88
	ctx.r26.s64 = ctx.r1.s64 + 88;
	// lvx128 v13,r0,r6
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r6.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vupkd3d128 v12,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r25,r1,88
	ctx.r25.s64 = ctx.r1.s64 + 88;
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// vmaddfp v12,v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r21,r1,88
	ctx.r21.s64 = ctx.r1.s64 + 88;
	// addi r20,r1,88
	ctx.r20.s64 = ctx.r1.s64 + 88;
	// vspltw128 v61,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v60,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v59,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v61,r0,r29
	ea = (ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r26,r9
	ea = (ctx.r26.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f30,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f30.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f10,f4,f0
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lvlx128 v58,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// lfs f31,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f7,f2,f13,f10
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f10.f64));
	// lfs f29,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f28,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// vupkd3d128 v12,v57,8
	temp.u32 = ctx.v57.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// lfs f27,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f27.f64 = double(temp.f32);
	// vmaddfp v12,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fmadds f8,f1,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f12.f64));
	// vspltw128 v56,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v55,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v54,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v56,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r9
	ea = (ctx.r5.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r25,r10
	ea = (ctx.r25.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lfs f10,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f4,f0
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmadds f6,f31,f13,f9
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// fmuls f9,f30,f0
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// fmadds f13,f29,f11,f7
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f11.f64 + ctx.f7.f64));
	// lvlx128 v53,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmadds f12,f28,f11,f8
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f11.f64 + ctx.f8.f64));
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// fmuls f8,f3,f0
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f11,f27,f11,f6
	ctx.f11.f64 = double(float(ctx.f27.f64 * ctx.f11.f64 + ctx.f6.f64));
	// fmadds f7,f2,f10,f5
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f6,f1,f10,f9
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f9.f64));
	// vupkd3d128 v12,v52,8
	temp.u32 = ctx.v52.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// fmadds f9,f28,f0,f6
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmadds f5,f31,f10,f8
	ctx.f5.f64 = double(float(ctx.f31.f64 * ctx.f10.f64 + ctx.f8.f64));
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// fmadds f10,f29,f0,f7
	ctx.f10.f64 = double(float(ctx.f29.f64 * ctx.f0.f64 + ctx.f7.f64));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// fmadds f8,f27,f0,f5
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f27.f64 * ctx.f0.f64 + ctx.f5.f64));
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v50,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v49,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v51,r0,r21
	ea = (ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r20,r9
	ea = (ctx.r20.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// li r9,0
	ctx.r9.s64 = 0;
	// stvewx128 v49,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f6,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f30,f30,f7
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f7.f64));
	// lfs f5,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// lfs f0,5484(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f2,f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f1,f1,f6,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 + ctx.f30.f64));
	// fmadds f4,f31,f6,f3
	ctx.f4.f64 = double(float(ctx.f31.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f7,f29,f5,f2
	ctx.f7.f64 = double(float(ctx.f29.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f6,f28,f5,f1
	ctx.f6.f64 = double(float(ctx.f28.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f5,f27,f5,f4
	ctx.f5.f64 = double(float(ctx.f27.f64 * ctx.f5.f64 + ctx.f4.f64));
	// blt cr6,0x823bc3b0
	if (ctx.cr6.lt) goto loc_823BC3B0;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mulli r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 * 216;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BC1D8:
	// lfs f4,-44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f3,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f4,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f1,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f2,f1,f7,f3
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 + ctx.f3.f64));
	// lfs f1,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f4,f1,f13,f2
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f1,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// lfs f3,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f3,f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fmadds f2,f2,f12,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f2,28(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f4,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmadds f4,f4,f5,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f2.f64));
	// fmadds f3,f1,f11,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfs f3,32(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f2,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,36(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f1,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,40(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f4,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f3,f3,f10,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f4.f64));
	// fmadds f2,f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,56(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f12
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmadds f1,f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmadds f4,f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f4,60(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f3,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f11
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmadds f3,f3,f8,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmadds f2,f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f2,64(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,68(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,72(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lfs f3,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,76(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lfs f2,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmadds f2,f2,f7,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f1,f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f1,88(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmadds f4,f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// fmadds f3,f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// stfs f3,92(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lfs f2,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfs f4,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f4,f5,f1
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f1.f64));
	// fmadds f1,f3,f11,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f2.f64));
	// stfs f1,96(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,100(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lfs f3,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,104(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// lfs f2,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,108(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f0,116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f10
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f2,f7,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// fmadds f3,f1,f13,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f3,120(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmadds f3,f2,f6,f4
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f4.f64));
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f2,f12,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f3.f64));
	// stfs f1,124(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f8
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmadds f4,f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f1.f64));
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// fmadds f3,f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfsu f3,128(r10)
	ea = 128 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bc1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC1D8;
loc_823BC3B0:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823bc468
	if (!ctx.cr6.lt) goto loc_823BC468;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_823BC3EC:
	// lfs f4,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f3,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f4,f4,f10,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fmadds f3,f7,f1,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f3,24(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmadds f2,f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f6,f1,f2
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f1,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f11
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f3,f1,f8,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f8.f64 + ctx.f2.f64));
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// fmadds f2,f5,f4,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f3.f64));
	// stfsu f2,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bc3ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC3EC;
loc_823BC468:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x823bc4e8
	if (!ctx.cr6.gt) goto loc_823BC4E8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r23,16
	ctx.r6.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 2;
	// addi r5,r3,-2
	ctx.r5.s64 = ctx.r3.s64 + -2;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
loc_823BC484:
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r6,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r6.u16);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// addi r8,r28,5
	ctx.r8.s64 = ctx.r28.s64 + 5;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BC4A4:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823bc4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC4A4;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823bc484
	if (!ctx.cr0.eq) goto loc_823BC484;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de070
	ctx.lr = 0x823BC4CC;
	__restfpr_27(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823BC4D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de070
	ctx.lr = 0x823BC4E0;
	__restfpr_27(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823BC4E4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823BC4E8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x823de070
	ctx.lr = 0x823BC4F4;
	__restfpr_27(ctx, base);
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BBF60) {
	__imp__sub_823BBF60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BC4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf50
	ctx.lr = 0x823BC500;
	__savegprlr_18(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// li r27,0
	ctx.r27.s64 = 0;
loc_823BC530:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// mulli r10,r31,216
	ctx.r10.s64 = ctx.r31.s64 * 216;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mulli r11,r9,216
	ctx.r11.s64 = ctx.r9.s64 * 216;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + ctx.r30.u64;
	// bl 0x823ba358
	ctx.lr = 0x823BC550;
	sub_823BA358(ctx, base);
	// xori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 ^ 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bc9c4
	if (ctx.cr6.eq) goto loc_823BC9C4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r27,6
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 6, ctx.xer);
	// blt cr6,0x823bc530
	if (ctx.cr6.lt) goto loc_823BC530;
	// cmpw cr6,r3,r24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x823bc9d0
	if (ctx.cr6.gt) goto loc_823BC9D0;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x823bc9d0
	if (ctx.cr6.gt) goto loc_823BC9D0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,340(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r5,r8,-5616
	ctx.r5.s64 = ctx.r8.s64 + -5616;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r6,-5632
	ctx.r4.s64 = ctx.r6.s64 + -5632;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r5
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r5.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v62,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// lvx128 v13,r0,r4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r4.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vupkd3d128 v12,v62,8
	temp.u32 = ctx.v62.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r27,r1,108
	ctx.r27.s64 = ctx.r1.s64 + 108;
	// addi r25,r1,108
	ctx.r25.s64 = ctx.r1.s64 + 108;
	// vmaddfp v12,v12,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r24,r1,80
	ctx.r24.s64 = ctx.r1.s64 + 80;
	// addi r21,r1,120
	ctx.r21.s64 = ctx.r1.s64 + 120;
	// addi r20,r1,120
	ctx.r20.s64 = ctx.r1.s64 + 120;
	// addi r19,r1,120
	ctx.r19.s64 = ctx.r1.s64 + 120;
	// lis r18,-32256
	ctx.r18.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// vspltw128 v61,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v60,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v59,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v61,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r29,r10
	ea = (ctx.r29.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v59,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lvlx128 v58,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v57,v58,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v58.u32), 0xFF));
	// vupkd3d128 v12,v57,8
	temp.u32 = ctx.v57.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// vmaddfp v12,v12,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v56,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v55,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v54,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// stvewx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r25,r11
	ea = (ctx.r25.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,8(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lvlx128 v53,r0,r24
	temp.u32 = ctx.r24.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v52,v53,0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v53.u32), 0xFF));
	// vupkd3d128 v12,v52,8
	temp.u32 = ctx.v52.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// vmaddfp v0,v12,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v50,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// vspltw128 v49,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v51,r0,r21
	ea = (ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r20,r10
	ea = (ctx.r20.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r19,r11
	ea = (ctx.r19.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,5484(r18)
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x823bc8ac
	if (ctx.cr6.lt) goto loc_823BC8AC;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mulli r11,r31,216
	ctx.r11.s64 = ctx.r31.s64 * 216;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823BC6D4:
	// lfs f4,-44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -44);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f3,-40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -40);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,-36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -36);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f1,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmadds f1,f1,f11,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f4,f4,f5,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f1.f64));
	// stfs f4,24(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f3,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f9
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmadds f3,f3,f12,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f2,f2,f6,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f6.f64 + ctx.f3.f64));
	// stfs f2,28(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f1,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fmadds f1,f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f4,f4,f7,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f1.f64));
	// stfs f4,32(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f3,-20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,36(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f2,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,40(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f1,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,44(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f2,f8,f3
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f3.f64));
	// fmadds f3,f11,f1,f4
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f3,56(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f2,f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f12,f1,f2
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f1,60(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f4,f4,f10,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64));
	// fmadds f3,f13,f3,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f3.f64 + ctx.f4.f64));
	// stfs f3,64(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,68(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,72(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 72, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,76(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 76, temp.u32);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,84(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f8
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmadds f3,f3,f11,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f4.f64));
	// fmadds f2,f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64 + ctx.f3.f64));
	// stfs f2,88(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f9
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fmadds f1,f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f2.f64));
	// fmadds f4,f4,f6,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f1.f64));
	// stfs f4,92(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lfs f3,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// lfs f1,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f3,f1,f13,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f2.f64));
	// fmadds f2,f4,f7,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,96(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// lfs f1,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,100(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// lfs f4,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,104(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 104, temp.u32);
	// lfs f3,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,108(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 108, temp.u32);
	// stfs f0,112(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 112, temp.u32);
	// stfs f0,116(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 116, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fmadds f2,f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f3.f64));
	// fmadds f1,f1,f5,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f5.f64 + ctx.f2.f64));
	// stfs f1,120(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 120, temp.u32);
	// lfs f4,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f9
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f9.f64));
	// fmadds f4,f4,f12,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f1.f64));
	// fmadds f3,f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,124(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 124, temp.u32);
	// lfs f2,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f1,f10
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// fmadds f3,f2,f13,f4
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f4.f64));
	// lfs f2,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// fmadds f1,f2,f7,f3
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfsu f1,128(r10)
	ea = 128 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bc6d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC6D4;
loc_823BC8AC:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x823bc964
	if (!ctx.cr6.lt) goto loc_823BC964;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// subf r8,r9,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r9.s64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_823BC8E8:
	// lfs f4,-20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,4(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f3,-16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f3,f5
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// fmadds f4,f4,f8,f2
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 + ctx.f2.f64));
	// fmadds f3,f1,f11,f4
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f4.f64));
	// stfs f3,24(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f4,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f6.f64));
	// fmadds f2,f2,f9,f3
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f3.f64));
	// fmadds f1,f1,f12,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f2.f64));
	// stfs f1,28(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f4,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f7
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmadds f4,f4,f10,f1
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f1.f64));
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// fmadds f3,f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfsu f3,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bc8e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC8E8;
loc_823BC964:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x823bc9d4
	if (!ctx.cr6.gt) goto loc_823BC9D4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// clrlwi r6,r23,16
	ctx.r6.u64 = ctx.r23.u32 & 0xFFFF;
	// addi r11,r23,2
	ctx.r11.s64 = ctx.r23.s64 + 2;
	// addi r5,r3,-2
	ctx.r5.s64 = ctx.r3.s64 + -2;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
loc_823BC980:
	// li r10,7
	ctx.r10.s64 = 7;
	// sth r6,4(r28)
	PPC_STORE_U16(ctx.r28.u32 + 4, ctx.r6.u16);
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// sth r11,2(r28)
	PPC_STORE_U16(ctx.r28.u32 + 2, ctx.r11.u16);
	// addi r8,r28,5
	ctx.r8.s64 = ctx.r28.s64 + 5;
	// sth r9,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r9.u16);
	// addi r9,r22,-1
	ctx.r9.s64 = ctx.r22.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823BC9A0:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbu r10,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823bc9a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BC9A0;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r28,r28,14
	ctx.r28.s64 = ctx.r28.s64 + 14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x823bc980
	if (!ctx.cr0.eq) goto loc_823BC980;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_823BC9C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
loc_823BC9D0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823BC9D4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa0
	__restgprlr_18(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BC4F8) {
	__imp__sub_823BC4F8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BC9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BC9DC) {
	__imp__sub_823BC9DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BC9E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BC9E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,1092(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm r8,r30,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r29,1088(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r7,96(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r6,r29,14
	ctx.r6.s64 = ctx.r29.s64 * 14;
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r28,92(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// subf r7,r29,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x823bbf60
	ctx.lr = 0x823BCA38;
	sub_823BBF60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823bca4c
	if (!ctx.cr6.eq) goto loc_823BCA4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BCA4C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bca70
	if (ctx.cr6.eq) goto loc_823BCA70;
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lwz r10,1092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r9,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r9.u32);
loc_823BCA70:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BC9E0) {
	__imp__sub_823BC9E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BCA7C) {
	__imp__sub_823BCA7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCA80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BCA88;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,1092(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r8,r29,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// lwz r28,1088(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r30,96(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mulli r7,r28,14
	ctx.r7.s64 = ctx.r28.s64 * 14;
	// lwz r6,92(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + ctx.r30.u64;
	// subf r7,r28,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r28.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r9,r29,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r29.s64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x823bc4f8
	ctx.lr = 0x823BCAD4;
	sub_823BC4F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823bcae8
	if (!ctx.cr6.eq) goto loc_823BCAE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BCAE8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bcb0c
	if (ctx.cr6.eq) goto loc_823BCB0C;
	// lwz r11,1088(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// lwz r10,1092(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// stw r10,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r10.u32);
	// stw r9,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r9.u32);
loc_823BCB0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BCA80) {
	__imp__sub_823BCA80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823BCB20;
	__savegprlr_26(ctx, base);
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-28
	ctx.r28.s64 = ctx.r11.s64 + -28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f31,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// addi r29,r4,-4
	ctx.r29.s64 = ctx.r4.s64 + -4;
	// addi r31,r1,116
	ctx.r31.s64 = ctx.r1.s64 + 116;
	// lfs f30,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r30,3
	ctx.r30.s64 = 3;
loc_823BCB58:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r5,r31,-20
	ctx.r5.s64 = ctx.r31.s64 + -20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x823BCB84;
	sub_822D67F0(ctx, base);
	// stfs f31,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -4, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stfs f31,0(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stfsu f30,28(r28)
	ea = 28 + ctx.r28.u32;
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// bne 0x823bcb58
	if (!ctx.cr0.eq) goto loc_823BCB58;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x823babd0
	ctx.lr = 0x823BCBB4;
	sub_823BABD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bcbd4
	if (ctx.cr6.eq) goto loc_823BCBD4;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823BCBD4:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,24(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,16(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823bc9e0
	ctx.lr = 0x823BCBF0;
	sub_823BC9E0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BCB18) {
	__imp__sub_823BCB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BCC0C) {
	__imp__sub_823BCC0C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCC10) {
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
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r8,r11,-28
	ctx.r8.s64 = ctx.r11.s64 + -28;
	// addi r11,r7,-12
	ctx.r11.s64 = ctx.r7.s64 + -12;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// lfs f13,12168(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
loc_823BCC58:
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f10,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfsu f0,24(r11)
	ea = 24 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f13,28(r8)
	ea = 28 + ctx.r8.u32;
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x823bcc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BCC58;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823babd0
	ctx.lr = 0x823BCC9C;
	sub_823BABD0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bccb0
	if (ctx.cr6.eq) goto loc_823BCCB0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823bccd4
	goto loc_823BCCD4;
loc_823BCCB0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x823bca80
	ctx.lr = 0x823BCCC8;
	sub_823BCA80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823BCCD4:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
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

PPC_WEAK_FUNC(sub_823BCC10) {
	__imp__sub_823BCC10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCCEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BCCEC) {
	__imp__sub_823BCCEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCCF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BCCF8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
loc_823BCD20:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfsu f0,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fmuls f11,f13,f1
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfsu f10,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bcd20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BCD20;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f10,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// lfs f8,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f10,f13
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f12,220(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f7,84(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// bl 0x822d6770
	ctx.lr = 0x823BCDA0;
	sub_822D6770(ctx, base);
	// lfs f5,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f31
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f31
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// fmuls f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r7,60(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r10,r31,52
	ctx.r10.s64 = ctx.r31.s64 + 52;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// addi r9,r31,108
	ctx.r9.s64 = ctx.r31.s64 + 108;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// stw r31,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r31.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r8,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// fneg f11,f4
	ctx.f11.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// fadds f10,f1,f4
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f10,112(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fadds f8,f12,f4
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f4.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fadds f7,f1,f11
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfs f7,128(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f6,f13,f11
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f6,132(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f5,f12,f11
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// stfs f5,136(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// beq cr6,0x823bce68
	if (ctx.cr6.eq) goto loc_823BCE68;
loc_823BCE2C:
	// lis r11,-32196
	ctx.r11.s64 = -2109997056;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r11,-13544
	ctx.r7.s64 = ctx.r11.s64 + -13544;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82300698
	ctx.lr = 0x823BCE4C;
	sub_82300698(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bce78
	if (ctx.cr6.eq) goto loc_823BCE78;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bce2c
	if (!ctx.cr6.eq) goto loc_823BCE2C;
loc_823BCE68:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823BCE78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BCCF0) {
	__imp__sub_823BCCF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf64
	ctx.lr = 0x823BCE90;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82300a68
	ctx.lr = 0x823BCEC0;
	sub_82300A68(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823BCED0;
	sub_82300AE0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x823bcf80
	if (ctx.cr6.eq) goto loc_823BCF80;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_823BCEE8:
	// cmpwi cr6,r29,31744
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 31744, ctx.xer);
	// bgt cr6,0x823bcf80
	if (ctx.cr6.gt) goto loc_823BCF80;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bcf10
	if (ctx.cr6.eq) goto loc_823BCF10;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823bcf2c
	goto loc_823BCF2C;
loc_823BCF10:
	// lwz r10,88(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_823BCF2C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bcf6c
	if (ctx.cr6.eq) goto loc_823BCF6C;
	// stb r24,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r24.u8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stb r31,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r31.u8);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// add r4,r29,r11
	ctx.r4.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x823bccf0
	ctx.lr = 0x823BCF60;
	sub_823BCCF0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bcf90
	if (ctx.cr6.eq) goto loc_823BCF90;
loc_823BCF6C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,124
	ctx.r29.s64 = ctx.r29.s64 + 124;
	// cmpw cr6,r31,r23
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r23.s32, ctx.xer);
	// bne cr6,0x823bcee8
	if (!ctx.cr6.eq) goto loc_823BCEE8;
loc_823BCF80:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
loc_823BCF90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x823ddfb4
	__restgprlr_23(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BCE88) {
	__imp__sub_823BCE88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BCFA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823BCFA8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823ddff0
	ctx.lr = 0x823BCFB0;
	__savefpr_14(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
loc_823BCFD8:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823bcfd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BCFD8;
	// lfs f8,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// lfs f9,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f4,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f6,f9,f8
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f3,f4,f8
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,140(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f30,f0,f11
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f29,f13,f11
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f2,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f28,f11,f10
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// lfs f1,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f26,f7,f5
	ctx.f26.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f31,f2,f6
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// stfs f29,96(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// lfs f12,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f20,f2,f3
	ctx.f20.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// fmuls f4,f4,f3
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// lfs f22,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f18,f9,f5
	ctx.f18.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// lfs f25,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f6,f9,f6
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f23,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f2,f2,f5
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f5.f64));
	// lfs f27,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f9,f3
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f3.f64));
	// lfs f19,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f19.f64 = double(temp.f32);
	// fmuls f16,f0,f30
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f21,212(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	ctx.f21.f64 = double(temp.f32);
	// fmuls f5,f0,f29
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f1,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f0,f28
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f17,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f17.f64 = double(temp.f32);
	// fadds f0,f31,f7
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f7.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmr f11,f30
	ctx.f11.f64 = ctx.f30.f64;
	// fmr f24,f28
	ctx.f24.f64 = ctx.f28.f64;
	// fmuls f15,f13,f29
	ctx.f15.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fadds f14,f26,f4
	ctx.f14.f64 = double(float(ctx.f26.f64 + ctx.f4.f64));
	// fmr f8,f29
	ctx.f8.f64 = ctx.f29.f64;
	// fadds f26,f6,f26
	ctx.f26.f64 = double(float(ctx.f6.f64 + ctx.f26.f64));
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f10,f28
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// lfs f29,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fadds f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f28,84(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fadds f28,f18,f20
	ctx.f28.f64 = double(float(ctx.f18.f64 + ctx.f20.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f4,f12,f24
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f24.f64));
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fsubs f24,f3,f2
	ctx.f24.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// fadds f25,f25,f22
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f22.f64));
	// fadds f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f3.f64));
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fadds f27,f27,f23
	ctx.f27.f64 = double(float(ctx.f27.f64 + ctx.f23.f64));
	// fsubs f2,f0,f26
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// lfs f22,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f22.f64 = double(temp.f32);
	// fadds f23,f16,f10
	ctx.f23.f64 = double(float(ctx.f16.f64 + ctx.f10.f64));
	// fsubs f26,f18,f20
	ctx.f26.f64 = double(float(ctx.f18.f64 - ctx.f20.f64));
	// fadds f12,f16,f15
	ctx.f12.f64 = double(float(ctx.f16.f64 + ctx.f15.f64));
	// fadds f21,f21,f19
	ctx.f21.f64 = double(float(ctx.f21.f64 + ctx.f19.f64));
	// fsubs f30,f30,f14
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f14.f64));
	// fmuls f16,f1,f22
	ctx.f16.f64 = double(float(ctx.f1.f64 * ctx.f22.f64));
	// fsubs f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f31.f64));
	// fsubs f6,f0,f6
	ctx.f6.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// fadds f10,f15,f10
	ctx.f10.f64 = double(float(ctx.f15.f64 + ctx.f10.f64));
	// fadds f20,f5,f4
	ctx.f20.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fmuls f19,f29,f28
	ctx.f19.f64 = double(float(ctx.f29.f64 * ctx.f28.f64));
	// fadds f18,f11,f13
	ctx.f18.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmuls f15,f29,f30
	ctx.f15.f64 = double(float(ctx.f29.f64 * ctx.f30.f64));
	// lfs f31,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// stfs f13,252(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// fsubs f12,f9,f8
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// fadds f11,f8,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// stfs f18,244(r1)
	temp.f32 = float(ctx.f18.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// fsubs f9,f5,f4
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// stfs f20,260(r1)
	temp.f32 = float(ctx.f20.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// fmadds f0,f17,f7,f19
	ctx.f0.f64 = double(float(ctx.f17.f64 * ctx.f7.f64 + ctx.f19.f64));
	// stfs f11,264(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// fmadds f29,f29,f24,f16
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f24.f64 + ctx.f16.f64));
	// stfs f9,268(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// fsubs f12,f31,f23
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f23.f64));
	// stfs f12,256(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// fsubs f8,f31,f10
	ctx.f8.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// stfs f8,272(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// fmadds f5,f17,f3,f15
	ctx.f5.f64 = double(float(ctx.f17.f64 * ctx.f3.f64 + ctx.f15.f64));
	// stfs f27,276(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f25,280(r1)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// stfs f21,284(r1)
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stfs f2,288(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stfs f7,292(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f3,296(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// fnmadds f0,f1,f6,f0
	ctx.f0.f64 = double(float(-(ctx.f1.f64 * ctx.f6.f64 + ctx.f0.f64)));
	// stfs f22,300(r1)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// fnmadds f4,f17,f2,f29
	ctx.f4.f64 = double(float(-(ctx.f17.f64 * ctx.f2.f64 + ctx.f29.f64)));
	// stfs f6,304(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f26,308(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f24,312(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// fnmadds f13,f1,f26,f5
	ctx.f13.f64 = double(float(-(ctx.f1.f64 * ctx.f26.f64 + ctx.f5.f64)));
	// stfs f28,316(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f30,320(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f4,324(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f13,332(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x823BD1D4;
	sub_822D60B8(ctx, base);
	// addi r5,r1,528
	ctx.r5.s64 = ctx.r1.s64 + 528;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x823bb9a0
	ctx.lr = 0x823BD1E4;
	sub_823BB9A0(ctx, base);
	// addi r5,r1,416
	ctx.r5.s64 = ctx.r1.s64 + 416;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x822d6770
	ctx.lr = 0x823BD1F4;
	sub_822D6770(ctx, base);
	// lfs f30,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f28,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f8,f0,f30
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f11,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f5,f0,f29
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f12,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f3,f0,f28
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f1,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f12,f30
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// lfs f2,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f6,f12,f29
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f7,f13,f30
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f12,f1,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// fmuls f4,f13,f29
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f22,f12,f2
	ctx.f22.f64 = double(float(ctx.f12.f64 * ctx.f2.f64));
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f30,f1,f0
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f29,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f29.f64 = double(temp.f32);
	// lfs f26,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f26.f64 = double(temp.f32);
	// lfs f24,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f20,f30,f0
	ctx.f20.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fadds f18,f3,f6
	ctx.f18.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// stfs f26,372(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fadds f3,f3,f10
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// stfs f24,376(r1)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// fmuls f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// stfs f23,380(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// fadds f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// fmuls f19,f1,f2
	ctx.f19.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// fmuls f6,f1,f29
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f29.f64));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// fsubs f28,f5,f7
	ctx.f28.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// stfs f28,212(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fmuls f1,f30,f29
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// fmuls f2,f30,f2
	ctx.f2.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fsubs f30,f31,f18
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f18.f64));
	// stfs f30,192(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// fsubs f3,f31,f3
	ctx.f3.f64 = double(float(ctx.f31.f64 - ctx.f3.f64));
	// stfs f3,208(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fsubs f29,f9,f13
	ctx.f29.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f29,196(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// fadds f26,f4,f8
	ctx.f26.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// stfs f26,200(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// fadds f7,f5,f7
	ctx.f7.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// stfs f7,220(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// fmuls f9,f28,f25
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f25.f64));
	// fsubs f5,f31,f10
	ctx.f5.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// stfs f5,224(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// fadds f28,f2,f6
	ctx.f28.f64 = double(float(ctx.f2.f64 + ctx.f6.f64));
	// stfs f28,356(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// fsubs f28,f19,f1
	ctx.f28.f64 = double(float(ctx.f19.f64 - ctx.f1.f64));
	// stfs f28,344(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// fmuls f30,f30,f27
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f27.f64));
	// fmuls f3,f3,f25
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f25.f64));
	// fadds f28,f12,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f28,340(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// fadds f10,f22,f11
	ctx.f10.f64 = double(float(ctx.f22.f64 + ctx.f11.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,348(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// fadds f12,f1,f19
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f19.f64));
	// stfs f12,360(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// fmadds f9,f26,f27,f9
	ctx.f9.f64 = double(float(ctx.f26.f64 * ctx.f27.f64 + ctx.f9.f64));
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// stfs f8,216(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// fadds f11,f20,f11
	ctx.f11.f64 = double(float(ctx.f20.f64 + ctx.f11.f64));
	// fadds f4,f22,f20
	ctx.f4.f64 = double(float(ctx.f22.f64 + ctx.f20.f64));
	// fmadds f1,f13,f25,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f25.f64 + ctx.f30.f64));
	// fmadds f0,f29,f27,f3
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f27.f64 + ctx.f3.f64));
	// fsubs f12,f2,f6
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f6.f64));
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// fsubs f13,f31,f10
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f10.f64));
	// stfs f13,352(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// fnmadds f10,f5,f21,f9
	ctx.f10.f64 = double(float(-(ctx.f5.f64 * ctx.f21.f64 + ctx.f9.f64)));
	// stfs f10,236(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// fsubs f11,f31,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// stfs f11,368(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fsubs f4,f31,f4
	ctx.f4.f64 = double(float(ctx.f31.f64 - ctx.f4.f64));
	// stfs f4,336(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// fnmadds f9,f8,f21,f1
	ctx.f9.f64 = double(float(-(ctx.f8.f64 * ctx.f21.f64 + ctx.f1.f64)));
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fnmadds f8,f7,f21,f0
	ctx.f8.f64 = double(float(-(ctx.f7.f64 * ctx.f21.f64 + ctx.f0.f64)));
	// stfs f8,232(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// bl 0x822d60b8
	ctx.lr = 0x823BD378;
	sub_822D60B8(ctx, base);
	// lfs f7,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stfs f7,176(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stfs f6,180(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stfs f5,184(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// bl 0x822d67f0
	ctx.lr = 0x823BD3A4;
	sub_822D67F0(ctx, base);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,528
	ctx.r9.s64 = ctx.r1.s64 + 528;
	// stw r31,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r31.u32);
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// stw r27,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r27.u32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// lfs f2,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f11,f4,f2
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f9,f1,f4
	ctx.f9.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// fadds f8,f0,f4
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f9,148(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r30,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r30.u32);
	// stfs f8,152(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// lis r7,-32196
	ctx.r7.s64 = -2109997056;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// fmr f13,f2
	ctx.f13.f64 = ctx.f2.f64;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// addi r7,r7,-13296
	ctx.r7.s64 = ctx.r7.s64 + -13296;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fadds f7,f3,f2
	ctx.f7.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// stfs f7,160(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fadds f6,f1,f3
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// stfs f6,164(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fadds f5,f0,f3
	ctx.f5.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// stfs f5,168(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82300698
	ctx.lr = 0x823BD430;
	sub_82300698(ctx, base);
	// clrlwi r6,r3,24
	ctx.r6.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x823bd450
	if (!ctx.cr6.eq) goto loc_823BD450;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de03c
	ctx.lr = 0x823BD44C;
	__restfpr_14(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823BD450:
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd46c
	if (ctx.cr6.eq) goto loc_823BD46C;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x822d6770
	ctx.lr = 0x823BD46C;
	sub_822D6770(ctx, base);
loc_823BD46C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de03c
	ctx.lr = 0x823BD47C;
	__restfpr_14(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BCFA0) {
	__imp__sub_823BCFA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BD480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf4c
	ctx.lr = 0x823BD488;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82300a68
	ctx.lr = 0x823BD4B4;
	sub_82300A68(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300b40
	ctx.lr = 0x823BD4C0;
	sub_82300B40(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300ae0
	ctx.lr = 0x823BD4D0;
	sub_82300AE0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// beq cr6,0x823bd640
	if (ctx.cr6.eq) goto loc_823BD640;
	// lis r11,-32191
	ctx.r11.s64 = -2109669376;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// addi r24,r11,17280
	ctx.r24.s64 = ctx.r11.s64 + 17280;
loc_823BD4F0:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bd510
	if (ctx.cr6.eq) goto loc_823BD510;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x823bd52c
	goto loc_823BD52C;
loc_823BD510:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// subf r6,r7,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
loc_823BD52C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd62c
	if (ctx.cr6.eq) goto loc_823BD62C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r30,r21,r11
	ctx.r30.u64 = ctx.r21.u64 + ctx.r11.u64;
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823bd62c
	if (!ctx.cr6.eq) goto loc_823BD62C;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd62c
	if (ctx.cr6.eq) goto loc_823BD62C;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_823BD560:
	// lwz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lhzx r10,r28,r11
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r11,r10,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// srawi r9,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 5;
	// rlwinm r8,r10,2,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r8,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// lwzx r5,r7,r23
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// and r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823bd618
	if (!ctx.cr6.eq) goto loc_823BD618;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r10,1(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1, ctx.r10.u8);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r5,r11,r26
	ctx.r5.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bcfa0
	ctx.lr = 0x823BD5B8;
	sub_823BCFA0(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bd64c
	if (ctx.cr6.eq) goto loc_823BD64C;
	// lwz r4,1088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823bd5e4
	if (!ctx.cr6.eq) goto loc_823BD5E4;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd618
	if (ctx.cr6.eq) goto loc_823BD618;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823bd610
	if (ctx.cr6.eq) goto loc_823BD610;
loc_823BD5E4:
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823bd610
	if (ctx.cr6.eq) goto loc_823BD610;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
	// addi r8,r31,28
	ctx.r8.s64 = ctx.r31.s64 + 28;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,1100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BD610;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823BD610:
	// stw r19,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r19.u32);
	// stw r19,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r19.u32);
loc_823BD618:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bd560
	if (!ctx.cr6.eq) goto loc_823BD560;
loc_823BD62C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// addi r21,r21,124
	ctx.r21.s64 = ctx.r21.s64 + 124;
	// cmpw cr6,r20,r17
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x823bd4f0
	if (!ctx.cr6.eq) goto loc_823BD4F0;
loc_823BD640:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
loc_823BD64C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x823ddf9c
	__restgprlr_17(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BD480) {
	__imp__sub_823BD480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BD658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823BD660;
	__savegprlr_20(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,676(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 676);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd790
	if (ctx.cr6.eq) goto loc_823BD790;
	// addi r23,r3,296
	ctx.r23.s64 = ctx.r3.s64 + 296;
	// li r21,3
	ctx.r21.s64 = 3;
loc_823BD684:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r30,-4(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lhz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r23.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// std r26,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r26.u64);
	// bl 0x822f1a00
	ctx.lr = 0x823BD6B4;
	sub_822F1A00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2388
	ctx.lr = 0x823BD6BC;
	sub_822F2388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821023f0
	ctx.lr = 0x823BD6CC;
	sub_821023F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x823BD6D8;
	sub_822F23E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822f2368
	ctx.lr = 0x823BD6E4;
	sub_822F2368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f19f0
	ctx.lr = 0x823BD6EC;
	sub_822F19F0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd77c
	if (ctx.cr6.eq) goto loc_823BD77C;
loc_823BD700:
	// sth r24,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r24.u16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r26,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r26,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r26.u8);
	// stb r21,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r21.u8);
	// stb r31,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r31.u8);
	// bl 0x822f1eb8
	ctx.lr = 0x823BD720;
	sub_822F1EB8(ctx, base);
	// lbz r10,226(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 226);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x823bd760
	if (!ctx.cr6.lt) goto loc_823BD760;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1d00
	ctx.lr = 0x823BD738;
	sub_822F1D00(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x823bd480
	ctx.lr = 0x823BD754;
	sub_823BD480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd79c
	if (ctx.cr6.eq) goto loc_823BD79C;
loc_823BD760:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x823bd700
	if (!ctx.cr6.eq) goto loc_823BD700;
loc_823BD77C:
	// lwz r11,676(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 676);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823bd684
	if (!ctx.cr6.eq) goto loc_823BD684;
loc_823BD790:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823BD79C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BD658) {
	__imp__sub_823BD658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BD7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf5c
	ctx.lr = 0x823BD7B0;
	__savegprlr_21(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1080(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1080);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bd8e8
	if (ctx.cr6.eq) goto loc_823BD8E8;
	// addi r23,r3,1068
	ctx.r23.s64 = ctx.r3.s64 + 1068;
	// li r22,3
	ctx.r22.s64 = 3;
loc_823BD7D4:
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lwz r30,0(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r31,4(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r26.u64);
	// std r26,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r26.u64);
	// std r26,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r26.u64);
	// bl 0x822f1a00
	ctx.lr = 0x823BD800;
	sub_822F1A00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f2388
	ctx.lr = 0x823BD808;
	sub_822F2388(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821023f0
	ctx.lr = 0x823BD818;
	sub_821023F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f23e0
	ctx.lr = 0x823BD824;
	sub_822F23E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x822f2368
	ctx.lr = 0x823BD830;
	sub_822F2368(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f19f0
	ctx.lr = 0x823BD838;
	sub_822F19F0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823bd8d4
	if (ctx.cr6.eq) goto loc_823BD8D4;
loc_823BD84C:
	// lwz r11,1084(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1084);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r26,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r26.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stb r26,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r26.u8);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r22.u8);
	// ori r9,r10,8064
	ctx.r9.u64 = ctx.r10.u64 | 8064;
	// or r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 | ctx.r31.u64;
	// stb r8,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r8.u8);
	// bl 0x822f1eb8
	ctx.lr = 0x823BD878;
	sub_822F1EB8(ctx, base);
	// lbz r6,226(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 226);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,128
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 128, ctx.xer);
	// bge cr6,0x823bd8b8
	if (!ctx.cr6.lt) goto loc_823BD8B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822f1d00
	ctx.lr = 0x823BD890;
	sub_822F1D00(ctx, base);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823bd480
	ctx.lr = 0x823BD8AC;
	sub_823BD480(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bd8f4
	if (ctx.cr6.eq) goto loc_823BD8F4;
loc_823BD8B8:
	// lbz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rotlwi r10,r11,5
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 5);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpw cr6,r31,r24
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x823bd84c
	if (!ctx.cr6.eq) goto loc_823BD84C;
loc_823BD8D4:
	// lwz r11,1080(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1080);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r23,r23,12
	ctx.r23.s64 = ctx.r23.s64 + 12;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823bd7d4
	if (!ctx.cr6.eq) goto loc_823BD7D4;
loc_823BD8E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
loc_823BD8F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x823ddfac
	__restgprlr_21(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BD7A8) {
	__imp__sub_823BD7A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BD900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf58
	ctx.lr = 0x823BD908;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r11,r3,288
	ctx.r11.s64 = ctx.r3.s64 + 288;
	// stb r8,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r8.u8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// beq cr6,0x823bdaf8
	if (ctx.cr6.eq) goto loc_823BDAF8;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r28,r11,-5616
	ctx.r28.s64 = ctx.r11.s64 + -5616;
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r11,r9,13412
	ctx.r11.s64 = ctx.r9.s64 + 13412;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// li r25,31
	ctx.r25.s64 = 31;
	// li r26,16
	ctx.r26.s64 = 16;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r29,4
	ctx.r29.s64 = 4;
	// li r30,8
	ctx.r30.s64 = 8;
	// addi r27,r10,-5632
	ctx.r27.s64 = ctx.r10.s64 + -5632;
	// b 0x823bd970
	goto loc_823BD970;
loc_823BD96C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823BD970:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mulli r11,r10,44
	ctx.r11.s64 = ctx.r10.s64 * 44;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r4,28(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28);
	// lbz r9,226(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 226);
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x823bdad4
	if (!ctx.cr6.lt) goto loc_823BDAD4;
	// stb r25,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r25.u8);
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// lbz r9,36(r6)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + 36);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r9,98(r1)
	PPC_STORE_U8(ctx.r1.u32 + 98, ctx.r9.u8);
	// lvx128 v0,r0,r28
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r28.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lbz r7,37(r6)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + 37);
	// lvx128 v13,r0,r27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + ((ctx.r27.u32) & ~0xF))), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stb r7,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r7.u8);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// sth r8,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r8.u16);
	// lvrx128 v63,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// vspltw128 v60,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vspltw128 v59,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vspltw128 v58,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r24,r1,124
	ctx.r24.s64 = ctx.r1.s64 + 124;
	// vupkd3d128 v10,v60,8
	temp.u32 = ctx.v60.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v10 = vTemp;
	// addi r23,r1,124
	ctx.r23.s64 = ctx.r1.s64 + 124;
	// vupkd3d128 v12,v59,8
	temp.u32 = ctx.v59.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v12 = vTemp;
	// addi r22,r1,136
	ctx.r22.s64 = ctx.r1.s64 + 136;
	// vupkd3d128 v11,v58,8
	temp.u32 = ctx.v58.u32[0];
	vTemp.u32[3] = 0x40400000 + uint32_t(int32_t(temp.u32 << 22) >> 22);
	vTemp.u32[2] = 0x40400000 + uint32_t(int32_t(temp.u32 << 12) >> 22);
	vTemp.u32[1] = 0x40400000 + uint32_t(int32_t(temp.u32 << 2) >> 22);
	vTemp.u32[0] = 0x40400000 + (temp.u32 >> 30);
	ctx.v11 = vTemp;
	// addi r21,r1,136
	ctx.r21.s64 = ctx.r1.s64 + 136;
	// addi r20,r1,136
	ctx.r20.s64 = ctx.r1.s64 + 136;
	// vmaddfp v10,v10,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// vmaddfp v12,v12,v13,v0
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vmaddfp v0,v11,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vspltw128 v57,v10,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xFF));
	// vspltw128 v56,v10,1
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0xAA));
	// vspltw128 v55,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vspltw128 v54,v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xFF));
	// vspltw128 v53,v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0xAA));
	// vspltw128 v52,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), 0x55));
	// vspltw128 v51,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xFF));
	// vspltw128 v50,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0xAA));
	// stvewx128 v57,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// vspltw128 v49,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v0.u32), 0x55));
	// stvewx128 v56,r9,r29
	ea = (ctx.r9.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r7,r30
	ea = (ctx.r7.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r24,r29
	ea = (ctx.r24.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r23,r30
	ea = (ctx.r23.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r0,r22
	ea = (ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r21,r29
	ea = (ctx.r21.u32 + ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r20,r30
	ea = (ctx.r20.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,24(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823bce88
	ctx.lr = 0x823BDA6C;
	sub_823BCE88(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bdb04
	if (ctx.cr6.eq) goto loc_823BDB04;
	// lwz r4,1088(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x823bda98
	if (!ctx.cr6.eq) goto loc_823BDA98;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bdad0
	if (ctx.cr6.eq) goto loc_823BDAD0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823bdac4
	if (ctx.cr6.eq) goto loc_823BDAC4;
loc_823BDA98:
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823bdac4
	if (ctx.cr6.eq) goto loc_823BDAC4;
	// lwz r11,1096(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1096);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r7,104(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r3,1100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823BDAC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823BDAC4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1088(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1088, ctx.r11.u32);
	// stw r11,1092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1092, ctx.r11.u32);
loc_823BDAD0:
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BDAD4:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// lwz r9,288(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x823bd96c
	if (!ctx.cr6.eq) goto loc_823BD96C;
loc_823BDAF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
loc_823BDB04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x823ddfa8
	__restgprlr_20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BD900) {
	__imp__sub_823BD900(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDB10) {
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
	// bl 0x823bd900
	ctx.lr = 0x823BDB28;
	sub_823BD900(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bdb4c
	if (!ctx.cr6.eq) goto loc_823BDB4C;
loc_823BDB34:
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
loc_823BDB4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bd658
	ctx.lr = 0x823BDB54;
	sub_823BD658(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bdb34
	if (ctx.cr6.eq) goto loc_823BDB34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bd7a8
	ctx.lr = 0x823BDB68;
	sub_823BD7A8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bdb34
	if (ctx.cr6.eq) goto loc_823BDB34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bb540
	ctx.lr = 0x823BDB7C;
	sub_823BB540(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

PPC_WEAK_FUNC(sub_823BDB10) {
	__imp__sub_823BDB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BDB9C) {
	__imp__sub_823BDB9C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDBA0) {
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
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r7.u32);
	// stw r8,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,1088(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1088, ctx.r11.u32);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
	// stw r11,1092(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1092, ctx.r11.u32);
	// stw r4,1096(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1096, ctx.r4.u32);
	// stw r5,1100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1100, ctx.r5.u32);
	// bne cr6,0x823bdbf4
	if (!ctx.cr6.eq) goto loc_823BDBF4;
	// bl 0x823bbcb0
	ctx.lr = 0x823BDBF0;
	sub_823BBCB0(ctx, base);
	// b 0x823bdbf8
	goto loc_823BDBF8;
loc_823BDBF4:
	// bl 0x823bdb10
	ctx.lr = 0x823BDBF8;
	sub_823BDB10(ctx, base);
loc_823BDBF8:
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823bdc08
	if (!ctx.cr6.eq) goto loc_823BDC08;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823BDC08:
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bdc58
	if (ctx.cr6.eq) goto loc_823BDC58;
	// lfs f4,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// li r3,14
	ctx.r3.s64 = 14;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// addi r4,r11,-14168
	ctx.r4.s64 = ctx.r11.s64 + -14168;
	// lfs f1,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,92(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stfd f4,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.f4.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f3,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82280900
	ctx.lr = 0x823BDC58;
	sub_82280900(ctx, base);
loc_823BDC58:
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

PPC_WEAK_FUNC(sub_823BDBA0) {
	__imp__sub_823BDBA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDC70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// addis r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 393216;
	// addi r7,r10,20748
	ctx.r7.s64 = ctx.r10.s64 + 20748;
loc_823BDC80:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823bdc80
	if (!ctx.cr0.eq) goto loc_823BDC80;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823bdcb0
	if (ctx.cr6.eq) goto loc_823BDCB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BDCB0:
	// lis r10,6
	ctx.r10.s64 = 393216;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// ori r8,r10,20760
	ctx.r8.u64 = ctx.r10.u64 | 20760;
	// lis r7,-31771
	ctx.r7.s64 = -2082144256;
	// li r6,44
	ctx.r6.s64 = 44;
	// addi r5,r7,-27552
	ctx.r5.s64 = ctx.r7.s64 + -27552;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,14592(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 14592);
	// stw r10,-27552(r7)
	PPC_STORE_U32(ctx.r7.u32 + -27552, ctx.r10.u32);
	// lwz r4,5248(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5248);
	// divwu r10,r4,r6
	ctx.r10.u32 = ctx.r4.u32 / ctx.r6.u32;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,5204(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5204);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,5288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5288);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r11,5244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5244);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDC70) {
	__imp__sub_823BDC70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDD00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// addi r8,r11,24448
	ctx.r8.s64 = ctx.r11.s64 + 24448;
	// addis r11,r8,6
	ctx.r11.s64 = ctx.r8.s64 + 393216;
	// addi r7,r11,20748
	ctx.r7.s64 = ctx.r11.s64 + 20748;
loc_823BDD10:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x823bdd10
	if (!ctx.cr0.eq) goto loc_823BDD10;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// lis r5,-31799
	ctx.r5.s64 = -2083979264;
	// addi r4,r6,-27552
	ctx.r4.s64 = ctx.r6.s64 + -27552;
	// lis r3,6
	ctx.r3.s64 = 393216;
	// lwz r10,-27552(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + -27552);
	// ori r7,r3,20760
	ctx.r7.u64 = ctx.r3.u64 | 20760;
	// lwz r9,14592(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14592);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r6,r11,44
	ctx.r6.s64 = ctx.r11.s64 * 44;
	// stwx r10,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u32);
	// stw r6,5248(r9)
	PPC_STORE_U32(ctx.r9.u32 + 5248, ctx.r6.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,14592(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14592);
	// stw r11,5204(r10)
	PPC_STORE_U32(ctx.r10.u32 + 5204, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDD00) {
	__imp__sub_823BDD00(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDD68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r11,r11,-27552
	ctx.r11.s64 = ctx.r11.s64 + -27552;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,9216
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 9216, ctx.xer);
	// ble cr6,0x823bdd88
	if (!ctx.cr6.gt) goto loc_823BDD88;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BDD88:
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDD68) {
	__imp__sub_823BDD68(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BDDA4) {
	__imp__sub_823BDDA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDA8) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r8,r9,-27552
	ctx.r8.s64 = ctx.r9.s64 + -27552;
	// mulli r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 * 44;
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDDA8) {
	__imp__sub_823BDDA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BDDC4) {
	__imp__sub_823BDDC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDDC8) {
	__imp__sub_823BDDC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDDD0) {
	__imp__sub_823BDDD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BDDD4) {
	__imp__sub_823BDDD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r11,r11,-27552
	ctx.r11.s64 = ctx.r11.s64 + -27552;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// ble cr6,0x823bddf8
	if (!ctx.cr6.gt) goto loc_823BDDF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BDDF8:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDDD8) {
	__imp__sub_823BDDD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDE08) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823BDE10;
	__savegprlr_26(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bdecc
	if (ctx.cr6.eq) goto loc_823BDECC;
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r11,-16
	ctx.r31.s64 = ctx.r11.s64 + -16;
loc_823BDE28:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823bdec0
	if (ctx.cr6.lt) goto loc_823BDEC0;
	// cmplw cr6,r3,r6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823bdec0
	if (!ctx.cr6.lt) goto loc_823BDEC0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823bde90
	if (ctx.cr6.eq) goto loc_823BDE90;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823BDE50:
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x823bde90
	if (!ctx.cr6.lt) goto loc_823BDE90;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r11,16
	ctx.r30.s64 = ctx.r11.s64 + 16;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r26,12(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// bne 0x823bde50
	if (!ctx.cr0.eq) goto loc_823BDE50;
loc_823BDE90:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r29,r11,r7
	ctx.r29.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// stw r30,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
loc_823BDEC0:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x823bde28
	if (!ctx.cr0.eq) goto loc_823BDE28;
loc_823BDECC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BDE08) {
	__imp__sub_823BDE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BDED4) {
	__imp__sub_823BDED4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDED8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823bdf3c
	if (ctx.cr6.eq) goto loc_823BDF3C;
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_823BDEF0:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823bdf30
	if (ctx.cr6.lt) goto loc_823BDF30;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823bdf30
	if (!ctx.cr6.lt) goto loc_823BDF30;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r3,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// stw r31,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r31.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823BDF30:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x823bdef0
	if (!ctx.cr0.eq) goto loc_823BDEF0;
loc_823BDF3C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDED8) {
	__imp__sub_823BDED8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDF48) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// lwz r10,-27552(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + -27552);
	// cmplwi cr6,r10,1536
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1536, ctx.xer);
	// bge cr6,0x823bdfe8
	if (!ctx.cr6.lt) goto loc_823BDFE8;
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// ld r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r11,24448
	ctx.r3.s64 = ctx.r11.s64 + 24448;
	// rldicl r7,r7,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 34) & 0x3FFFFFFFF;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// clrlwi r3,r7,16
	ctx.r3.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r11,r11,-22528
	ctx.r11.s64 = ctx.r11.s64 + -22528;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r10,-27552(r9)
	PPC_STORE_U32(ctx.r9.u32 + -27552, ctx.r10.u32);
	// li r8,9
	ctx.r8.s64 = 9;
	// divwu r7,r6,r7
	ctx.r7.u32 = ctx.r6.u32 / ctx.r7.u32;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwimi r31,r3,1,19,30
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r3.u32, 1) & 0x1FFE) | (ctx.r31.u64 & 0xFFFFFFFFFFFFE001);
	// clrlwi r3,r31,19
	ctx.r3.u64 = ctx.r31.u32 & 0x1FFF;
	// rlwinm r10,r3,0,16,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFE;
	// sth r3,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r3.u16);
	// lbz r9,5(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// stb r9,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// sth r7,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r7.u16);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r8,10(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10, ctx.r8.u8);
	// stb r6,11(r11)
	PPC_STORE_U8(ctx.r11.u32 + 11, ctx.r6.u8);
	// lbz r7,1(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// stb r7,12(r11)
	PPC_STORE_U8(ctx.r11.u32 + 12, ctx.r7.u8);
	// lbz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// stb r6,13(r11)
	PPC_STORE_U8(ctx.r11.u32 + 13, ctx.r6.u8);
	// lhz r5,2(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r5,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r5.u16);
loc_823BDFE8:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BDF48) {
	__imp__sub_823BDF48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BDFF0) {
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
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lis r10,6
	ctx.r10.s64 = 393216;
	// addi r31,r11,24448
	ctx.r31.s64 = ctx.r11.s64 + 24448;
	// ori r9,r10,20760
	ctx.r9.u64 = ctx.r10.u64 | 20760;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823be028
	if (ctx.cr6.lt) goto loc_823BE028;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_823BE028:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// addi r3,r10,-22528
	ctx.r3.s64 = ctx.r10.s64 + -22528;
	// lwz r11,8456(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// lwz r5,40(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x823be078
	ctx.lr = 0x823BE048;
	sub_823BE078(ctx, base);
	// lis r8,6
	ctx.r8.s64 = 393216;
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r7,r8,20760
	ctx.r7.u64 = ctx.r8.u64 | 20760;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
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

PPC_WEAK_FUNC(sub_823BDFF0) {
	__imp__sub_823BDFF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE074) {
	__imp__sub_823BE074(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823BE080;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r11,8194
	ctx.r6.s64 = ctx.r11.s64 + 8194;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x823bde08
	ctx.lr = 0x823BE0C0;
	sub_823BDE08(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823bded8
	ctx.lr = 0x823BE0D8;
	sub_823BDED8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bde08
	ctx.lr = 0x823BE0F4;
	sub_823BDE08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BE078) {
	__imp__sub_823BE078(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE0FC) {
	__imp__sub_823BE0FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32075
	ctx.r11.s64 = -2102067200;
	// lwz r11,14960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14960);
	// lbz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE100) {
	__imp__sub_823BE100(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf60
	ctx.lr = 0x823BE118;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,28(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// lwz r23,4(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r22,r11,24448
	ctx.r22.s64 = ctx.r11.s64 + 24448;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823be1e0
	if (ctx.cr6.eq) goto loc_823BE1E0;
	// addis r11,r22,7
	ctx.r11.s64 = ctx.r22.s64 + 458752;
	// addi r30,r11,-476
	ctx.r30.s64 = ctx.r11.s64 + -476;
loc_823BE154:
	// lbzx r11,r28,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r23.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be1cc
	if (ctx.cr6.eq) goto loc_823BE1CC;
	// lwz r11,-8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r29,r11,19,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823be188
	if (ctx.cr6.eq) goto loc_823BE188;
	// lhz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823be1cc
	if (!ctx.cr6.lt) goto loc_823BE1CC;
loc_823BE188:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82102458
	ctx.lr = 0x823BE190;
	sub_82102458(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lhz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bne cr6,0x823be1c4
	if (!ctx.cr6.eq) goto loc_823BE1C4;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// bl 0x8219ad40
	ctx.lr = 0x823BE1C0;
	sub_8219AD40(ctx, base);
	// b 0x823be1cc
	goto loc_823BE1CC;
loc_823BE1C4:
	// clrlwi r6,r29,16
	ctx.r6.u64 = ctx.r29.u32 & 0xFFFF;
	// bl 0x8219ad18
	ctx.lr = 0x823BE1CC;
	sub_8219AD18(ctx, base);
loc_823BE1CC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823be154
	if (!ctx.cr6.eq) goto loc_823BE154;
loc_823BE1E0:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823be26c
	if (ctx.cr6.eq) goto loc_823BE26C;
	// addis r11,r22,8
	ctx.r11.s64 = ctx.r22.s64 + 524288;
	// addi r30,r11,-108
	ctx.r30.s64 = ctx.r11.s64 + -108;
loc_823BE1FC:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be258
	if (ctx.cr6.eq) goto loc_823BE258;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823be258
	if (!ctx.cr6.lt) goto loc_823BE258;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823be258
	if (ctx.cr6.eq) goto loc_823BE258;
	// lwz r8,44(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lbz r9,60(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 60);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// bl 0x8219ac38
	ctx.lr = 0x823BE258;
	sub_8219AC38(ctx, base);
loc_823BE258:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,72
	ctx.r30.s64 = ctx.r30.s64 + 72;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823be1fc
	if (!ctx.cr6.eq) goto loc_823BE1FC;
loc_823BE26C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r28,12(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823be2d8
	if (ctx.cr6.eq) goto loc_823BE2D8;
	// addis r11,r22,9
	ctx.r11.s64 = ctx.r22.s64 + 589824;
	// addi r30,r11,15260
	ctx.r30.s64 = ctx.r11.s64 + 15260;
loc_823BE288:
	// lbzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r28.u32);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be2c4
	if (ctx.cr6.eq) goto loc_823BE2C4;
	// lhz r6,-6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + -6);
	// lhz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823be2c4
	if (!ctx.cr6.lt) goto loc_823BE2C4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lbz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219ad68
	ctx.lr = 0x823BE2C4;
	sub_8219AD68(ctx, base);
loc_823BE2C4:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823be288
	if (!ctx.cr6.eq) goto loc_823BE288;
loc_823BE2D8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x823ddfb0
	__restgprlr_22(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BE110) {
	__imp__sub_823BE110(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BE2E8;
	__savegprlr_28(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823be378
	if (ctx.cr6.eq) goto loc_823BE378;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_823BE300:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823be35c
	if (ctx.cr6.lt) goto loc_823BE35C;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823be35c
	if (!ctx.cr6.lt) goto loc_823BE35C;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823be348
	if (ctx.cr6.eq) goto loc_823BE348;
	// addi r11,r29,8
	ctx.r11.s64 = ctx.r29.s64 + 8;
loc_823BE32C:
	// lhz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x823be348
	if (!ctx.cr6.lt) goto loc_823BE348;
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r28,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bne 0x823be32c
	if (!ctx.cr0.eq) goto loc_823BE32C;
loc_823BE348:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u32);
loc_823BE35C:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823be300
	if (ctx.cr6.lt) goto loc_823BE300;
loc_823BE378:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BE2E0) {
	__imp__sub_823BE2E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823be3dc
	if (ctx.cr6.eq) goto loc_823BE3DC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
loc_823BE398:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x823be3c0
	if (ctx.cr6.lt) goto loc_823BE3C0;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x823be3c0
	if (!ctx.cr6.lt) goto loc_823BE3C0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
loc_823BE3C0:
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// addi r10,r10,-11
	ctx.r10.s64 = ctx.r10.s64 + -11;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x823be398
	if (ctx.cr6.lt) goto loc_823BE398;
loc_823BE3DC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE380) {
	__imp__sub_823BE380(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE3E4) {
	__imp__sub_823BE3E4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE3E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31809
	ctx.r11.s64 = -2084634624;
	// ld r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// stb r5,-13(r1)
	PPC_STORE_U8(ctx.r1.u32 + -13, ctx.r5.u8);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,24448
	ctx.r8.s64 = ctx.r11.s64 + 24448;
	// stb r3,-14(r1)
	PPC_STORE_U8(ctx.r1.u32 + -14, ctx.r3.u8);
	// rldicl r7,r10,34,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 34) & 0x3FFFFFFFF;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// clrlwi r4,r7,20
	ctx.r4.u64 = ctx.r7.u32 & 0xFFF;
	// addi r5,r11,14336
	ctx.r5.s64 = ctx.r11.s64 + 14336;
	// sth r4,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r4.u16);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stwx r3,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE3E8) {
	__imp__sub_823BE3E8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE420) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-31799
	ctx.r10.s64 = -2083979264;
	// addi r9,r11,4608
	ctx.r9.s64 = ctx.r11.s64 + 4608;
	// lis r8,-31809
	ctx.r8.s64 = -2084634624;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r7,r8,24448
	ctx.r7.s64 = ctx.r8.s64 + 24448;
	// lwz r11,14592(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 14592);
	// lwz r10,8456(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8456);
	// addis r9,r7,1
	ctx.r9.s64 = ctx.r7.s64 + 65536;
	// addi r3,r9,14336
	ctx.r3.s64 = ctx.r9.s64 + 14336;
	// lwz r4,5468(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5468);
	// lwz r5,44(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// bl 0x823be480
	ctx.lr = 0x823BE468;
	sub_823BE480(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
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

PPC_WEAK_FUNC(sub_823BE420) {
	__imp__sub_823BE420(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823BE488;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r9,r11,8192
	ctx.r9.s64 = ctx.r11.s64 + 8192;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r6,r11,8194
	ctx.r6.s64 = ctx.r11.s64 + 8194;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhzx r27,r10,r6
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x823be2e0
	ctx.lr = 0x823BE4C8;
	sub_823BE2E0(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x823be380
	ctx.lr = 0x823BE4DC;
	sub_823BE380(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be2e0
	ctx.lr = 0x823BE4F4;
	sub_823BE2E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BE480) {
	__imp__sub_823BE480(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE4FC) {
	__imp__sub_823BE4FC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE500) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r11,r11,-27528
	ctx.r11.s64 = ctx.r11.s64 + -27528;
	// lbz r9,709(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 709);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// addi r6,r11,14
	ctx.r6.s64 = ctx.r11.s64 + 14;
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// beq cr6,0x823be578
	if (ctx.cr6.eq) goto loc_823BE578;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r31,12
	ctx.r31.s64 = 12;
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r30,16
	ctx.r30.s64 = 16;
	// li r8,20
	ctx.r8.s64 = 20;
	// stbx r31,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r31.u8);
	// stbx r30,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r30.u8);
	// li r7,14
	ctx.r7.s64 = 14;
	// stbx r8,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u8);
	// li r6,18
	ctx.r6.s64 = 18;
	// li r5,22
	ctx.r5.s64 = 22;
	// b 0x823be5a4
	goto loc_823BE5A4;
loc_823BE578:
	// li r10,9
	ctx.r10.s64 = 9;
	// li r31,11
	ctx.r31.s64 = 11;
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// li r30,15
	ctx.r30.s64 = 15;
	// li r8,19
	ctx.r8.s64 = 19;
	// stbx r31,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r31.u8);
	// stbx r30,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r30.u8);
	// li r7,13
	ctx.r7.s64 = 13;
	// stbx r8,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u8);
	// li r6,17
	ctx.r6.s64 = 17;
	// li r5,21
	ctx.r5.s64 = 21;
loc_823BE5A4:
	// stbx r5,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r5.u8);
	// stbx r6,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u8);
	// stbx r7,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE500) {
	__imp__sub_823BE500(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE5BC) {
	__imp__sub_823BE5BC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE5C0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// addi r10,r11,13536
	ctx.r10.s64 = ctx.r11.s64 + 13536;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r11,r11,-27528
	ctx.r11.s64 = ctx.r11.s64 + -27528;
	// lbz r9,709(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 709);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
	// addi r5,r11,14
	ctx.r5.s64 = ctx.r11.s64 + 14;
	// addi r4,r11,15
	ctx.r4.s64 = ctx.r11.s64 + 15;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// beq cr6,0x823be630
	if (ctx.cr6.eq) goto loc_823BE630;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r31,10
	ctx.r31.s64 = 10;
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r30,16
	ctx.r30.s64 = 16;
	// stbx r31,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u8);
	// li r7,20
	ctx.r7.s64 = 20;
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// li r8,18
	ctx.r8.s64 = 18;
	// li r6,22
	ctx.r6.s64 = 22;
	// b 0x823be654
	goto loc_823BE654;
loc_823BE630:
	// li r10,11
	ctx.r10.s64 = 11;
	// li r31,9
	ctx.r31.s64 = 9;
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// li r30,15
	ctx.r30.s64 = 15;
	// stbx r31,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r31.u8);
	// li r7,19
	ctx.r7.s64 = 19;
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// li r8,17
	ctx.r8.s64 = 17;
	// li r6,21
	ctx.r6.s64 = 21;
loc_823BE654:
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u8);
	// stbx r8,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u8);
	// stbx r7,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r30,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r30.u8);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE5C0) {
	__imp__sub_823BE5C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE670) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-27528
	ctx.r11.s64 = ctx.r11.s64 + -27528;
	// subf r9,r3,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// addi r7,r11,13
	ctx.r7.s64 = ctx.r11.s64 + 13;
	// addi r6,r11,14
	ctx.r6.s64 = ctx.r11.s64 + 14;
	// addi r5,r11,15
	ctx.r5.s64 = ctx.r11.s64 + 15;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,17
	ctx.r3.s64 = ctx.r11.s64 + 17;
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
	// li r10,35
	ctx.r10.s64 = 35;
	// stbx r10,r9,r8
	PPC_STORE_U8(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u8);
	// stbx r10,r9,r7
	PPC_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// stbx r10,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r10.u8);
	// stbx r10,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r10.u8);
	// stbx r10,r9,r4
	PPC_STORE_U8(ctx.r9.u32 + ctx.r4.u32, ctx.r10.u8);
	// stbx r10,r9,r3
	PPC_STORE_U8(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u8);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE670) {
	__imp__sub_823BE670(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE6C0) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823be5c0
	ctx.lr = 0x823BE6D4;
	sub_823BE5C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x823be5c0
	ctx.lr = 0x823BE6DC;
	sub_823BE5C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823be500
	ctx.lr = 0x823BE6E4;
	sub_823BE500(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823be500
	ctx.lr = 0x823BE6EC;
	sub_823BE500(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823be500
	ctx.lr = 0x823BE6F4;
	sub_823BE500(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823be500
	ctx.lr = 0x823BE6FC;
	sub_823BE500(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823be500
	ctx.lr = 0x823BE704;
	sub_823BE500(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823be500
	ctx.lr = 0x823BE70C;
	sub_823BE500(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x823be500
	ctx.lr = 0x823BE714;
	sub_823BE500(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x823be500
	ctx.lr = 0x823BE71C;
	sub_823BE500(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// li r11,35
	ctx.r11.s64 = 35;
	// addi r5,r10,-27528
	ctx.r5.s64 = ctx.r10.s64 + -27528;
	// li r10,35
	ctx.r10.s64 = 35;
	// li r9,35
	ctx.r9.s64 = 35;
	// li r8,35
	ctx.r8.s64 = 35;
	// li r7,35
	ctx.r7.s64 = 35;
	// li r6,35
	ctx.r6.s64 = 35;
	// stb r11,82(r5)
	PPC_STORE_U8(ctx.r5.u32 + 82, ctx.r11.u8);
	// stb r10,83(r5)
	PPC_STORE_U8(ctx.r5.u32 + 83, ctx.r10.u8);
	// stb r9,84(r5)
	PPC_STORE_U8(ctx.r5.u32 + 84, ctx.r9.u8);
	// stb r8,85(r5)
	PPC_STORE_U8(ctx.r5.u32 + 85, ctx.r8.u8);
	// stb r7,86(r5)
	PPC_STORE_U8(ctx.r5.u32 + 86, ctx.r7.u8);
	// stb r6,87(r5)
	PPC_STORE_U8(ctx.r5.u32 + 87, ctx.r6.u8);
	// stb r11,88(r5)
	PPC_STORE_U8(ctx.r5.u32 + 88, ctx.r11.u8);
	// stb r10,89(r5)
	PPC_STORE_U8(ctx.r5.u32 + 89, ctx.r10.u8);
	// stb r9,90(r5)
	PPC_STORE_U8(ctx.r5.u32 + 90, ctx.r9.u8);
	// stb r8,91(r5)
	PPC_STORE_U8(ctx.r5.u32 + 91, ctx.r8.u8);
	// stb r7,92(r5)
	PPC_STORE_U8(ctx.r5.u32 + 92, ctx.r7.u8);
	// stb r6,93(r5)
	PPC_STORE_U8(ctx.r5.u32 + 93, ctx.r6.u8);
	// stb r11,94(r5)
	PPC_STORE_U8(ctx.r5.u32 + 94, ctx.r11.u8);
	// stb r10,95(r5)
	PPC_STORE_U8(ctx.r5.u32 + 95, ctx.r10.u8);
	// stb r9,96(r5)
	PPC_STORE_U8(ctx.r5.u32 + 96, ctx.r9.u8);
	// stb r8,97(r5)
	PPC_STORE_U8(ctx.r5.u32 + 97, ctx.r8.u8);
	// stb r7,98(r5)
	PPC_STORE_U8(ctx.r5.u32 + 98, ctx.r7.u8);
	// stb r6,99(r5)
	PPC_STORE_U8(ctx.r5.u32 + 99, ctx.r6.u8);
	// stb r11,100(r5)
	PPC_STORE_U8(ctx.r5.u32 + 100, ctx.r11.u8);
	// stb r10,101(r5)
	PPC_STORE_U8(ctx.r5.u32 + 101, ctx.r10.u8);
	// stb r9,102(r5)
	PPC_STORE_U8(ctx.r5.u32 + 102, ctx.r9.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE6C0) {
	__imp__sub_823BE6C0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE7A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r11,r11,-27528
	ctx.r11.s64 = ctx.r11.s64 + -27528;
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823BE7B8:
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stb r10,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
	// stb r10,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stbu r10,7(r11)
	ea = 7 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823be7b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE7B8;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE7A0) {
	__imp__sub_823BE7A0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE7DC) {
	__imp__sub_823BE7DC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12852);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be830
	if (ctx.cr6.eq) goto loc_823BE830;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// li r9,91
	ctx.r9.s64 = 91;
	// addi r11,r6,-27528
	ctx.r11.s64 = ctx.r6.s64 + -27528;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r10,-27528(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27528, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_823BE824:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823be824
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE824;
	// blr 
	return;
loc_823BE830:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12804(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12804);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823be880
	if (ctx.cr6.eq) goto loc_823BE880;
	// lis r6,-31771
	ctx.r6.s64 = -2082144256;
	// li r9,91
	ctx.r9.s64 = 91;
	// addi r11,r6,-27528
	ctx.r11.s64 = ctx.r6.s64 + -27528;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// stw r10,-27528(r6)
	PPC_STORE_U32(ctx.r6.u32 + -27528, ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_823BE874:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823be874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE874;
	// blr 
	return;
loc_823BE880:
	// lis r8,-31771
	ctx.r8.s64 = -2082144256;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r7,r8,-27528
	ctx.r7.s64 = ctx.r8.s64 + -27528;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,-27528(r8)
	PPC_STORE_U32(ctx.r8.u32 + -27528, ctx.r11.u32);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// stw r9,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r9.u32);
	// b 0x823be6c0
	sub_823BE6C0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BE7E0) {
	__imp__sub_823BE7E0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BE8A4) {
	__imp__sub_823BE8A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823be944
	if (!ctx.cr6.gt) goto loc_823BE944;
	// addis r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 524288;
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// addi r31,r31,28288
	ctx.r31.s64 = ctx.r31.s64 + 28288;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
loc_823BE8D4:
	// lbz r10,8468(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8468);
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823be90c
	if (ctx.cr6.eq) goto loc_823BE90C;
	// srawi r11,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 5;
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// addi r9,r11,1352
	ctx.r9.s64 = ctx.r11.s64 + 1352;
	// slw r8,r30,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// and r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 & ctx.r10.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823be90c
	if (ctx.cr6.eq) goto loc_823BE90C;
	// addi r6,r6,3
	ctx.r6.s64 = ctx.r6.s64 + 3;
loc_823BE90C:
	// li r9,13
	ctx.r9.s64 = 13;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
	// addi r8,r5,5
	ctx.r8.s64 = ctx.r5.s64 + 5;
	// addi r10,r11,-256
	ctx.r10.s64 = ctx.r11.s64 + -256;
	// add r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823BE924:
	// lbzu r9,7(r11)
	ea = 7 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,256(r10)
	ea = 256 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823be924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE924;
	// lwz r11,432(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 432);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823be8d4
	if (ctx.cr6.lt) goto loc_823BE8D4;
loc_823BE944:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE8A8) {
	__imp__sub_823BE8A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823be99c
	if (!ctx.cr6.eq) goto loc_823BE99C;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x823be99c
	if (!ctx.cr6.eq) goto loc_823BE99C;
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x823be99c
	if (!ctx.cr6.eq) goto loc_823BE99C;
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823BE99C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r10,r4,2672
	ctx.r10.s64 = ctx.r4.s64 + 2672;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f13,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lhzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// sthx r9,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u16);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE950) {
	__imp__sub_823BE950(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BE9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12620(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12620);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823be9f8
	if (!ctx.cr6.eq) goto loc_823BE9F8;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13092(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13092);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bea50
	if (ctx.cr6.eq) goto loc_823BEA50;
loc_823BE9F8:
	// lbz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bea50
	if (ctx.cr6.eq) goto loc_823BEA50;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12852(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12852);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823bea50
	if (!ctx.cr6.eq) goto loc_823BEA50;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12928);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bea50
	if (ctx.cr6.eq) goto loc_823BEA50;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,608(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x823bea50
	if (ctx.cr6.eq) goto loc_823BEA50;
	// lfs f13,612(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823bea54
	if (!ctx.cr6.eq) goto loc_823BEA54;
loc_823BEA50:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BEA54:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BE9D0) {
	__imp__sub_823BE9D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEA5C) {
	__imp__sub_823BEA5C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,504(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,12168(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x823bea84
	if (!ctx.cr6.lt) goto loc_823BEA84;
loc_823BEA7C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823BEA84:
	// lfs f13,512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x823bea7c
	if (ctx.cr6.lt) goto loc_823BEA7C;
	// lfs f13,520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823beac4
	if (!ctx.cr6.lt) goto loc_823BEAC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,532(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_823BEAC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEA60) {
	__imp__sub_823BEA60(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEACC) {
	__imp__sub_823BEACC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,752(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 752);
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

PPC_WEAK_FUNC(sub_823BEAD0) {
	__imp__sub_823BEAD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,13064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13064);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEAE0) {
	__imp__sub_823BEAE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEB10) {
	PPC_FUNC_PROLOGUE();
	// b 0x823da068
	sub_823DA068(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BEB10) {
	__imp__sub_823BEB10(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEB14) {
	__imp__sub_823BEB14(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEB18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r10,-29904
	ctx.r8.s64 = ctx.r10.s64 + -29904;
	// addi r7,r9,4608
	ctx.r7.s64 = ctx.r9.s64 + 4608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r4,r3,352
	ctx.r4.s64 = ctx.r3.s64 + 352;
	// stw r11,4816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4816, ctx.r11.u32);
	// lwz r3,8616(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8616);
	// b 0x823a7528
	sub_823A7528(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BEB18) {
	__imp__sub_823BEB18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEB3C) {
	__imp__sub_823BEB3C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEB40) {
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
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// addi r31,r11,-19960
	ctx.r31.s64 = ctx.r11.s64 + -19960;
	// lwz r11,-19960(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823beb88
	if (!ctx.cr6.gt) goto loc_823BEB88;
	// lis r10,-31775
	ctx.r10.s64 = -2082406400;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r10,-29904
	ctx.r8.s64 = ctx.r10.s64 + -29904;
	// addi r7,r9,4608
	ctx.r7.s64 = ctx.r9.s64 + 4608;
	// addi r4,r3,352
	ctx.r4.s64 = ctx.r3.s64 + 352;
	// stw r11,4816(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4816, ctx.r11.u32);
	// lwz r3,8616(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8616);
	// bl 0x823a7528
	ctx.lr = 0x823BEB88;
	sub_823A7528(ctx, base);
loc_823BEB88:
	// li r11,0
	ctx.r11.s64 = 0;
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

PPC_WEAK_FUNC(sub_823BEB40) {
	__imp__sub_823BEB40(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEBA4) {
	__imp__sub_823BEBA4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEBA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f0,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// fsel f13,f0,f1,f3
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f3.f64;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// bgt cr6,0x823bebcc
	if (ctx.cr6.gt) goto loc_823BEBCC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
loc_823BEBCC:
	// fsubs f0,f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f2.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fdivs f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 / ctx.f0.f64));
	// stfs f12,0(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fdivs f11,f2,f13
	ctx.f11.f64 = double(float(ctx.f2.f64 / ctx.f13.f64));
	// stfs f11,8(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEBA8) {
	__imp__sub_823BEBA8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEBE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fsubs f13,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f5.f64));
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// lfs f12,29544(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 29544);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fsel f10,f13,f1,f5
	ctx.f10.f64 = ctx.f13.f64 >= 0.0 ? ctx.f1.f64 : ctx.f5.f64;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fcmpu cr6,f2,f10
	ctx.cr6.compare(ctx.f2.f64, ctx.f10.f64);
	// bgt cr6,0x823bec24
	if (ctx.cr6.gt) goto loc_823BEC24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// lfs f0,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
loc_823BEC24:
	// fsubs f10,f5,f3
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fsubs f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f7,f10,f5,f3
	ctx.f7.f64 = ctx.f10.f64 >= 0.0 ? ctx.f5.f64 : ctx.f3.f64;
	// fdivs f6,f12,f9
	ctx.f6.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// stfs f6,0(r7)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fdivs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// stfs f5,8(r7)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// fcmpu cr6,f4,f7
	ctx.cr6.compare(ctx.f4.f64, ctx.f7.f64);
	// bgt cr6,0x823bec58
	if (ctx.cr6.gt) goto loc_823BEC58;
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f11,12(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// blr 
	return;
loc_823BEC58:
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f13,f3,f4
	ctx.f13.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fdivs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// stfs f12,4(r7)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// fdivs f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 / ctx.f13.f64));
	// stfs f11,12(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEBE8) {
	__imp__sub_823BEBE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEC74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEC74) {
	__imp__sub_823BEC74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEC78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmr f13,f2
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f2.f64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r11,12732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12732);
	// lfs f10,17644(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17644);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,29544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29544);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f11,f0,f10
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// fsel f8,f9,f1,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// fcmpu cr6,f2,f8
	ctx.cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// bgt cr6,0x823becc8
	if (ctx.cr6.gt) goto loc_823BECC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_823BECC8:
	// fsubs f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fdivs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f10,8(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEC78) {
	__imp__sub_823BEC78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BECE4) {
	__imp__sub_823BECE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BECE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12980);
	// lbz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BECE8) {
	__imp__sub_823BECE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BED08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823BED10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823BED30;
	sub_823C90B8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9ca0
	ctx.lr = 0x823BED3C;
	sub_823C9CA0(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r28,r11,4608
	ctx.r28.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8484(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8484);
	// bl 0x823a71f8
	ctx.lr = 0x823BED50;
	sub_823A71F8(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r10,-26624
	ctx.r27.s64 = ctx.r10.s64 + -26624;
	// lwz r4,200(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// bl 0x823a7d70
	ctx.lr = 0x823BED64;
	sub_823A7D70(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,528(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,10
	ctx.r4.s64 = 10;
	// lfs f0,5880(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x823d9e40
	ctx.lr = 0x823BED84;
	sub_823D9E40(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c90b8
	ctx.lr = 0x823BED90;
	sub_823C90B8(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c9ca0
	ctx.lr = 0x823BED9C;
	sub_823C9CA0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8488(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8488);
	// bl 0x823a71f8
	ctx.lr = 0x823BEDA8;
	sub_823A71F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,200(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// bl 0x823a7d70
	ctx.lr = 0x823BEDB4;
	sub_823A7D70(ctx, base);
	// lis r8,-31775
	ctx.r8.s64 = -2082406400;
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r8,-29904
	ctx.r7.s64 = ctx.r8.s64 + -29904;
	// lwz r3,8492(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8492);
	// stw r11,4816(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4816, ctx.r11.u32);
	// bl 0x823a71f8
	ctx.lr = 0x823BEDD0;
	sub_823A71F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,200(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// bl 0x823a7d70
	ctx.lr = 0x823BEDDC;
	sub_823A7D70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BED08) {
	__imp__sub_823BED08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEDE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEDE4) {
	__imp__sub_823BEDE4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEDE8) {
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
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13048);
	// lfs f2,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823e1e88
	ctx.lr = 0x823BEE04;
	sub_823E1E88(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEDE8) {
	__imp__sub_823BEDE8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEE18) {
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
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lfs f13,528(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,4520
	ctx.r9.s64 = ctx.r11.s64 + 4520;
	// lis r8,-31780
	ctx.r8.s64 = -2082734080;
	// lfs f0,4376(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwz r10,13048(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13048);
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fdivs f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// fdivs f1,f8,f13
	ctx.f1.f64 = double(float(ctx.f8.f64 / ctx.f13.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823BEE68;
	sub_823E1E88(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BEE18) {
	__imp__sub_823BEE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BEE7C) {
	__imp__sub_823BEE7C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BEE80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823BEE88;
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f5,328(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 328);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,524(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 524);
	ctx.f4.f64 = double(temp.f32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lfs f3,520(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 520);
	ctx.f3.f64 = double(temp.f32);
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// lfs f2,516(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	ctx.f2.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f1,512(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 512);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x823bebe8
	ctx.lr = 0x823BEEBC;
	sub_823BEBE8(ctx, base);
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x823BEED0;
	sub_823BE950(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lfs f13,508(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,29544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 29544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,17644(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17644);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// lwz r11,12732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12732);
	// lfs f0,504(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 504);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fsel f9,f10,f0,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
	// fcmpu cr6,f13,f9
	ctx.cr6.compare(ctx.f13.f64, ctx.f9.f64);
	// bgt cr6,0x823bef24
	if (ctx.cr6.gt) goto loc_823BEF24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// lfs f13,2416(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
loc_823BEF24:
	// fsubs f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r28,-31780
	ctx.r28.s64 = -2082734080;
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f9,532(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 532);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,528(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f8.f64));
	// lwz r11,13048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13048);
	// fdivs f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f6,f13,f10
	ctx.f6.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f6,88(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x823e1e88
	ctx.lr = 0x823BEF58;
	sub_823E1E88(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,92(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be950
	ctx.lr = 0x823BEF70;
	sub_823BE950(ctx, base);
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f4,4000(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4000);
	ctx.f4.f64 = double(temp.f32);
	// addi r29,r11,4520
	ctx.r29.s64 = ctx.r11.s64 + 4520;
	// fcmpu cr6,f4,f30
	ctx.cr6.compare(ctx.f4.f64, ctx.f30.f64);
	// lfs f31,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// fdivs f0,f31,f1
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// bne cr6,0x823befcc
	if (!ctx.cr6.eq) goto loc_823BEFCC;
	// lfs f13,4004(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823befcc
	if (!ctx.cr6.eq) goto loc_823BEFCC;
	// lfs f13,4008(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bne cr6,0x823befcc
	if (!ctx.cr6.eq) goto loc_823BEFCC;
	// lfs f13,4012(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4012);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// beq cr6,0x823befec
	if (ctx.cr6.eq) goto loc_823BEFEC;
loc_823BEFCC:
	// stfs f30,4000(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4000, temp.u32);
	// stfs f0,4004(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4004, temp.u32);
	// stfs f30,4008(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4008, temp.u32);
	// stfs f30,4012(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4012, temp.u32);
	// lhz r11,5396(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5396, ctx.r11.u16);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_823BEFEC:
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r11,13048(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13048);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f13,528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,-13260(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13260);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fdivs f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f13.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823BF020;
	sub_823E1E88(ctx, base);
	// lwz r7,4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lwz r10,13048(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 13048);
	// lfs f8,528(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 528);
	ctx.f8.f64 = double(temp.f32);
	// frsp f30,f1
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f0,-13264(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13264);
	ctx.f0.f64 = double(temp.f32);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fdivs f1,f4,f8
	ctx.f1.f64 = double(float(ctx.f4.f64 / ctx.f8.f64));
	// bl 0x823e1e88
	ctx.lr = 0x823BF058;
	sub_823E1E88(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f3,3968(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3968);
	ctx.f3.f64 = double(temp.f32);
	// lfs f0,2424(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f30
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fsubs f12,f31,f13
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f13.f64));
	// fsubs f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// fcmpu cr6,f3,f11
	ctx.cr6.compare(ctx.f3.f64, ctx.f11.f64);
	// fdivs f8,f0,f12
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fdivs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fdivs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// bne cr6,0x823bf0ac
	if (!ctx.cr6.eq) goto loc_823BF0AC;
	// lfs f7,3972(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3972);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f0
	ctx.cr6.compare(ctx.f7.f64, ctx.f0.f64);
	// bne cr6,0x823bf0ac
	if (!ctx.cr6.eq) goto loc_823BF0AC;
	// lfs f7,3976(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3976);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bne cr6,0x823bf0ac
	if (!ctx.cr6.eq) goto loc_823BF0AC;
	// lfs f7,3980(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3980);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f9
	ctx.cr6.compare(ctx.f7.f64, ctx.f9.f64);
	// beq cr6,0x823bf0c8
	if (ctx.cr6.eq) goto loc_823BF0C8;
loc_823BF0AC:
	// stfs f11,3968(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3968, temp.u32);
	// stfs f0,3972(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3972, temp.u32);
	// stfs f8,3976(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3976, temp.u32);
	// stfs f9,3980(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3980, temp.u32);
	// lhz r11,5392(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5392);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5392(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5392, ctx.r11.u16);
loc_823BF0C8:
	// fdivs f11,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f9,3984(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3984);
	ctx.f9.f64 = double(temp.f32);
	// fdivs f0,f31,f12
	ctx.f0.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, ctx.f31.f64);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// bne cr6,0x823bf108
	if (!ctx.cr6.eq) goto loc_823BF108;
	// lfs f11,3988(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3988);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bne cr6,0x823bf108
	if (!ctx.cr6.eq) goto loc_823BF108;
	// lfs f11,3992(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3992);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bne cr6,0x823bf108
	if (!ctx.cr6.eq) goto loc_823BF108;
	// lfs f11,3996(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3996);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// beq cr6,0x823bf124
	if (ctx.cr6.eq) goto loc_823BF124;
loc_823BF108:
	// stfs f13,3988(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3988, temp.u32);
	// stfs f0,3992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3992, temp.u32);
	// stfs f31,3984(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3984, temp.u32);
	// stfs f12,3996(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3996, temp.u32);
	// lhz r11,5394(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5394);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5394(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5394, ctx.r11.u16);
loc_823BF124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823bed08
	ctx.lr = 0x823BF130;
	sub_823BED08(ctx, base);
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

PPC_WEAK_FUNC(sub_823BEE80) {
	__imp__sub_823BEE80(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823BF148;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lfs f13,504(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,508(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 508);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12980(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12980);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// bge cr6,0x823bf190
	if (!ctx.cr6.lt) goto loc_823BF190;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823bf1dc
	goto loc_823BF1DC;
loc_823BF190:
	// lfs f13,512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,516(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823bf1ac
	if (!ctx.cr6.lt) goto loc_823BF1AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823bf1dc
	goto loc_823BF1DC;
loc_823BF1AC:
	// lfs f13,520(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f11,524(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x823bf1d8
	if (!ctx.cr6.lt) goto loc_823BF1D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,532(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823bf1dc
	if (ctx.cr6.gt) goto loc_823BF1DC;
loc_823BF1D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BF1DC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf214
	if (ctx.cr6.eq) goto loc_823BF214;
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ld r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16268);
	// bl 0x823bee80
	ctx.lr = 0x823BF1F8;
	sub_823BEE80(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16268);
	// bl 0x823c90b8
	ctx.lr = 0x823BF204;
	sub_823C90B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BF210;
	sub_823C9CA0(ctx, base);
	// ori r30,r30,4
	ctx.r30.u64 = ctx.r30.u64 | 4;
loc_823BF214:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4608
	ctx.r11.s64 = ctx.r11.s64 + 4608;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// addi r9,r11,8496
	ctx.r9.s64 = ctx.r11.s64 + 8496;
	// lwzx r3,r10,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x823a7528
	ctx.lr = 0x823BF230;
	sub_823A7528(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BF140) {
	__imp__sub_823BF140(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// fmuls f0,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lwz r11,13064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13064);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsqrts f1,f12
	ctx.f1.f64 = double(float(sqrt(ctx.f12.f64)));
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BF238) {
	__imp__sub_823BF238(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BF254) {
	__imp__sub_823BF254(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF258) {
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
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lfs f0,436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 436);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31780
	ctx.r10.s64 = -2082734080;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,13064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13064);
	// lwz r11,5752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5752);
	// lfs f0,-13256(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13256);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f11,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fsqrts f1,f10
	ctx.f1.f64 = double(float(sqrt(ctx.f10.f64)));
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fdivs f31,f0,f8
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x823bf300
	if (!ctx.cr6.lt) goto loc_823BF300;
	// fdivs f12,f1,f31
	ctx.f12.f64 = double(float(ctx.f1.f64 / ctx.f31.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,3100(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 3100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x823dde20
	ctx.lr = 0x823BF2E8;
	sub_823DDE20(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
loc_823BF300:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x823d9e40
	ctx.lr = 0x823BF310;
	sub_823D9E40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823BF31C;
	sub_823C90B8(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r11)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BF32C;
	sub_823C9CA0(ctx, base);
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-31799
	ctx.r9.s64 = -2083979264;
	// addi r8,r10,-26624
	ctx.r8.s64 = ctx.r10.s64 + -26624;
	// addi r11,r9,4608
	ctx.r11.s64 = ctx.r9.s64 + 4608;
	// lis r7,-31780
	ctx.r7.s64 = -2082734080;
	// addi r6,r11,8472
	ctx.r6.s64 = ctx.r11.s64 + 8472;
	// addi r5,r31,352
	ctx.r5.s64 = ctx.r31.s64 + 352;
	// lwz r11,180(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 180);
	// lwz r10,12980(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12980);
	// stw r11,4816(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4816, ctx.r11.u32);
	// lbz r3,12(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r10,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r6
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// bl 0x823a7240
	ctx.lr = 0x823BF370;
	sub_823A7240(ctx, base);
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

PPC_WEAK_FUNC(sub_823BF258) {
	__imp__sub_823BF258(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BF38C) {
	__imp__sub_823BF38C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF390) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,712(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,724(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 724);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// ble cr6,0x823bf420
	if (!ctx.cr6.gt) goto loc_823BF420;
	// fdivs f11,f30,f0
	ctx.f11.f64 = double(float(ctx.f30.f64 / ctx.f0.f64));
	// lfs f0,4432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 716);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf414
	if (!ctx.cr6.eq) goto loc_823BF414;
	// lfs f0,4436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x823bf414
	if (!ctx.cr6.eq) goto loc_823BF414;
	// lfs f0,4440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x823bf414
	if (!ctx.cr6.eq) goto loc_823BF414;
	// lfs f0,4444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x823bf470
	if (ctx.cr6.eq) goto loc_823BF470;
loc_823BF414:
	// stfs f10,4436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f11,4440(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
	// b 0x823bf45c
	goto loc_823BF45C;
loc_823BF420:
	// lfs f0,4432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,716(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 716);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x823bf454
	if (!ctx.cr6.eq) goto loc_823BF454;
	// lfs f0,4436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bne cr6,0x823bf454
	if (!ctx.cr6.eq) goto loc_823BF454;
	// lfs f0,4440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4440);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823bf454
	if (!ctx.cr6.eq) goto loc_823BF454;
	// lfs f0,4444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4444);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x823bf470
	if (ctx.cr6.eq) goto loc_823BF470;
loc_823BF454:
	// stfs f11,4436(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4436, temp.u32);
	// stfs f31,4440(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4440, temp.u32);
loc_823BF45C:
	// lhz r11,5450(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5450);
	// stfs f12,4444(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4444, temp.u32);
	// stfs f13,4432(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4432, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,5450(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5450, ctx.r11.u16);
loc_823BF470:
	// lis r11,-31771
	ctx.r11.s64 = -2082144256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-26624
	ctx.r10.s64 = ctx.r11.s64 + -26624;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// stw r11,4816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4816, ctx.r11.u32);
	// bl 0x823c90b8
	ctx.lr = 0x823BF48C;
	sub_823C90B8(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r9)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BF49C;
	sub_823C9CA0(ctx, base);
	// lwz r8,748(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 748);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823bf4f0
	if (ctx.cr6.eq) goto loc_823BF4F0;
	// lwz r10,740(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 740);
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,744(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 744);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fdivs f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// fsubs f13,f30,f8
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f8.f64));
	// b 0x823bf4f4
	goto loc_823BF4F4;
loc_823BF4F0:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_823BF4F4:
	// lfs f0,4448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823bf524
	if (!ctx.cr6.eq) goto loc_823BF524;
	// lfs f0,4452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4452);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x823bf524
	if (!ctx.cr6.eq) goto loc_823BF524;
	// lfs f0,4456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823bf524
	if (!ctx.cr6.eq) goto loc_823BF524;
	// lfs f0,4460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x823bf540
	if (ctx.cr6.eq) goto loc_823BF540;
loc_823BF524:
	// lhz r11,5452(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 5452);
	// stfs f31,4448(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4448, temp.u32);
	// stfs f30,4452(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4452, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfs f31,4456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4456, temp.u32);
	// stfs f13,4460(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4460, temp.u32);
	// sth r11,5452(r31)
	PPC_STORE_U16(ctx.r31.u32 + 5452, ctx.r11.u16);
loc_823BF540:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r10,r11,4608
	ctx.r10.s64 = ctx.r11.s64 + 4608;
	// lwz r3,8624(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8624);
	// bl 0x823a71f8
	ctx.lr = 0x823BF554;
	sub_823A71F8(ctx, base);
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

PPC_WEAK_FUNC(sub_823BF390) {
	__imp__sub_823BF390(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BF574) {
	__imp__sub_823BF574(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823BF580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823BF5A0;
	sub_823D3B90(ctx, base);
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r9,-31775
	ctx.r9.s64 = -2082406400;
	// addi r29,r9,-24112
	ctx.r29.s64 = ctx.r9.s64 + -24112;
	// lwz r11,-19968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19968);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,4924(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4924, ctx.r11.u32);
	// bl 0x823d3c78
	ctx.lr = 0x823BF5BC;
	sub_823D3C78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da0d8
	ctx.lr = 0x823BF5C4;
	sub_823DA0D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c9618
	ctx.lr = 0x823BF5CC;
	sub_823C9618(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BF578) {
	__imp__sub_823BF578(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BF5D4) {
	__imp__sub_823BF5D4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF5D8) {
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
	ctx.lr = 0x823BF5F0;
	__savefpr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf614
	if (ctx.cr6.eq) goto loc_823BF614;
	// bl 0x823b1c28
	ctx.lr = 0x823BF614;
	sub_823B1C28(ctx, base);
loc_823BF614:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r31,r11,-29904
	ctx.r31.s64 = ctx.r11.s64 + -29904;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d4060
	ctx.lr = 0x823BF624;
	sub_823D4060(ctx, base);
	// lwz r11,5768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5768);
	// lwz r10,5764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5764);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// lfs f0,2416(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lis r6,-31799
	ctx.r6.s64 = -2083979264;
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r30,r6,4608
	ctx.r30.s64 = ctx.r6.s64 + 4608;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// li r31,8
	ctx.r31.s64 = 8;
	// lfs f31,12168(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12168);
	ctx.f31.f64 = double(temp.f32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lfs f30,5484(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5484);
	ctx.f30.f64 = double(temp.f32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// lwz r3,8448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f28,f4,f0
	ctx.f28.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmuls f29,f9,f0
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f26,f28,f0
	ctx.f26.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fmuls f27,f29,f0
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823BF6BC;
	sub_823A66B8(ctx, base);
	// lis r10,-256
	ctx.r10.s64 = -16777216;
	// lwz r3,8448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// fmr f4,f26
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f26.f64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ori r9,r10,65280
	ctx.r9.u64 = ctx.r10.u64 | 65280;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823BF6F4;
	sub_823A66B8(ctx, base);
	// lis r8,-256
	ctx.r8.s64 = -16777216;
	// lwz r3,8448(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8448);
	// fmr f3,f27
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f27.f64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// ori r7,r8,255
	ctx.r7.u64 = ctx.r8.u64 | 255;
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f8,f31
	ctx.f8.f64 = ctx.f31.f64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823BF72C;
	sub_823A66B8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,8452(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8452);
	// fmr f8,f31
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f31.f64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// fmr f7,f31
	ctx.f7.f64 = ctx.f31.f64;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823BF760;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BF764;
	sub_823B1C28(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x823de06c
	ctx.lr = 0x823BF770;
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

PPC_WEAK_FUNC(sub_823BF5D8) {
	__imp__sub_823BF5D8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BF784) {
	__imp__sub_823BF784(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BF788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823BF790;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de014
	ctx.lr = 0x823BF798;
	__savefpr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31777
	ctx.r11.s64 = -2082537472;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r9,r11,-15488
	ctx.r9.s64 = ctx.r11.s64 + -15488;
	// ori r8,r10,6156
	ctx.r8.u64 = ctx.r10.u64 | 6156;
	// lwzx r11,r9,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bf7bc
	if (ctx.cr6.eq) goto loc_823BF7BC;
	// bl 0x823b1c28
	ctx.lr = 0x823BF7BC;
	sub_823B1C28(ctx, base);
loc_823BF7BC:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// lis r10,-31771
	ctx.r10.s64 = -2082144256;
	// addi r29,r11,-29904
	ctx.r29.s64 = ctx.r11.s64 + -29904;
	// addi r9,r10,-26624
	ctx.r9.s64 = ctx.r10.s64 + -26624;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,5768(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5768);
	// lwz r10,5764(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5764);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// lfs f30,2416(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f30.f64 = double(temp.f32);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// lwz r10,100(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r6,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,4816(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4816, ctx.r10.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f25,f9,f30
	ctx.f25.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f26,f10,f30
	ctx.f26.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// fmuls f23,f25,f30
	ctx.f23.f64 = double(float(ctx.f25.f64 * ctx.f30.f64));
	// fmuls f24,f26,f30
	ctx.f24.f64 = double(float(ctx.f26.f64 * ctx.f30.f64));
	// bl 0x823c90b8
	ctx.lr = 0x823BF828;
	sub_823C90B8(ctx, base);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r5)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r5.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BF838;
	sub_823C9CA0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4060
	ctx.lr = 0x823BF840;
	sub_823D4060(ctx, base);
	// lis r4,-31799
	ctx.r4.s64 = -2083979264;
	// lhz r11,5380(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5380);
	// li r30,8
	ctx.r30.s64 = 8;
	// lhz r10,5382(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5382);
	// addi r28,r4,4608
	ctx.r28.s64 = ctx.r4.s64 + 4608;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// sth r5,5380(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5380, ctx.r5.u16);
	// li r31,-1
	ctx.r31.s64 = -1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// sth r4,5382(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5382, ctx.r4.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lhz r9,5384(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5384);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lwz r3,8444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8444);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmr f8,f30
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f30.f64;
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// lfs f28,5880(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5880);
	ctx.f28.f64 = double(temp.f32);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// lfs f29,12168(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12168);
	ctx.f29.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// lfs f31,5484(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// stfs f29,3872(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3872, temp.u32);
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// stfs f31,3876(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3876, temp.u32);
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stfs f31,3880(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3880, temp.u32);
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// stfs f31,3884(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3884, temp.u32);
	// sth r9,5384(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5384, ctx.r9.u16);
	// stfs f31,3888(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3888, temp.u32);
	// stfs f31,3892(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3892, temp.u32);
	// stfs f31,3896(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3896, temp.u32);
	// stfs f31,3900(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3900, temp.u32);
	// stfs f31,3904(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3904, temp.u32);
	// stfs f31,3908(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3908, temp.u32);
	// stfs f31,3912(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3912, temp.u32);
	// stfs f31,3916(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3916, temp.u32);
	// bl 0x823a66b8
	ctx.lr = 0x823BF8EC;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BF8F0;
	sub_823B1C28(ctx, base);
	// lhz r11,5380(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5380);
	// lhz r10,5382(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5382);
	// stfs f31,3872(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3872, temp.u32);
	// stfs f31,3876(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3876, temp.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lhz r9,5384(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5384);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// lwz r3,8444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8444);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stfs f31,3880(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3880, temp.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stfs f31,3884(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3884, temp.u32);
	// stfs f31,3888(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3888, temp.u32);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// lfs f27,8336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8336);
	ctx.f27.f64 = double(temp.f32);
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// stfs f29,3892(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3892, temp.u32);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// stfs f31,3896(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3896, temp.u32);
	// fmr f2,f23
	ctx.f2.f64 = ctx.f23.f64;
	// stfs f31,3900(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3900, temp.u32);
	// fmr f6,f28
	ctx.f6.f64 = ctx.f28.f64;
	// stfs f31,3904(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3904, temp.u32);
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// stfs f31,3908(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3908, temp.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// stfs f31,3912(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3912, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f31,3916(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3916, temp.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// sth r7,5380(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5380, ctx.r7.u16);
	// sth r6,5382(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5382, ctx.r6.u16);
	// sth r5,5384(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5384, ctx.r5.u16);
	// bl 0x823a66b8
	ctx.lr = 0x823BF97C;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BF980;
	sub_823B1C28(ctx, base);
	// lhz r11,5380(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5380);
	// lhz r10,5382(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5382);
	// stfs f31,3872(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3872, temp.u32);
	// lhz r9,5384(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5384);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,8444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8444);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stfs f31,3876(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3876, temp.u32);
	// stfs f31,3880(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3880, temp.u32);
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// stfs f31,3884(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3884, temp.u32);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// stfs f31,3888(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3888, temp.u32);
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// stfs f31,3892(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3892, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stfs f31,3896(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3896, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stfs f31,3900(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3900, temp.u32);
	// fmr f5,f28
	ctx.f5.f64 = ctx.f28.f64;
	// stfs f31,3904(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3904, temp.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stfs f31,3908(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3908, temp.u32);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// stfs f29,3912(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3912, temp.u32);
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// stfs f31,3916(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3916, temp.u32);
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// sth r4,5380(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5380, ctx.r4.u16);
	// sth r10,5382(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5382, ctx.r10.u16);
	// sth r9,5384(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5384, ctx.r9.u16);
	// bl 0x823a66b8
	ctx.lr = 0x823BFA04;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BFA08;
	sub_823B1C28(ctx, base);
	// lhz r11,5380(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5380);
	// lhz r10,5382(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5382);
	// stfs f31,3872(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3872, temp.u32);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lhz r9,5384(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 5384);
	// stfs f31,3876(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3876, temp.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stfs f31,3880(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3880, temp.u32);
	// sth r8,5380(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5380, ctx.r8.u16);
	// stfs f29,3884(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3884, temp.u32);
	// stfs f31,3888(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3888, temp.u32);
	// stfs f31,3892(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3892, temp.u32);
	// stfs f31,3896(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3896, temp.u32);
	// stfs f29,3900(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3900, temp.u32);
	// stfs f31,3904(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3904, temp.u32);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// lwz r3,8444(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8444);
	// stfs f31,3908(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3908, temp.u32);
	// fmr f8,f27
	ctx.f8.f64 = ctx.f27.f64;
	// stfs f31,3912(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3912, temp.u32);
	// fmr f6,f30
	ctx.f6.f64 = ctx.f30.f64;
	// stfs f29,3916(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 3916, temp.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// fmr f7,f27
	ctx.f7.f64 = ctx.f27.f64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// fmr f5,f30
	ctx.f5.f64 = ctx.f30.f64;
	// sth r7,5382(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5382, ctx.r7.u16);
	// fmr f4,f23
	ctx.f4.f64 = ctx.f23.f64;
	// sth r6,5384(r29)
	PPC_STORE_U16(ctx.r29.u32 + 5384, ctx.r6.u16);
	// fmr f3,f24
	ctx.f3.f64 = ctx.f24.f64;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f26
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x823a66b8
	ctx.lr = 0x823BFA8C;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BFA90;
	sub_823B1C28(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x823de060
	ctx.lr = 0x823BFA9C;
	__restfpr_23(ctx, base);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BF788) {
	__imp__sub_823BF788(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFAA0) {
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
	ctx.lr = 0x823BFAB4;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31777
	ctx.r10.s64 = -2082537472;
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r8,r10,-15488
	ctx.r8.s64 = ctx.r10.s64 + -15488;
	// ori r7,r9,6156
	ctx.r7.u64 = ctx.r9.u64 | 6156;
	// lwz r11,13100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13100);
	// lwzx r10,r8,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823bfae4
	if (ctx.cr6.eq) goto loc_823BFAE4;
	// bl 0x823b1c28
	ctx.lr = 0x823BFAE4;
	sub_823B1C28(ctx, base);
loc_823BFAE4:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x823bfb00
	if (!ctx.cr6.eq) goto loc_823BFB00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f31,5880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5880);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8336);
	ctx.f30.f64 = double(temp.f32);
	// b 0x823bfb10
	goto loc_823BFB10;
loc_823BFB00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
loc_823BFB10:
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-29904
	ctx.r3.s64 = ctx.r11.s64 + -29904;
	// lwz r11,5768(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5768);
	// lwz r10,5764(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5764);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f28,f11
	ctx.f28.f64 = double(float(ctx.f11.f64));
	// frsp f29,f12
	ctx.f29.f64 = double(float(ctx.f12.f64));
	// bl 0x823d4060
	ctx.lr = 0x823BFB4C;
	sub_823D4060(ctx, base);
	// fsubs f10,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// lis r7,-31799
	ctx.r7.s64 = -2083979264;
	// li r6,8
	ctx.r6.s64 = 8;
	// fmr f8,f30
	ctx.f8.f64 = ctx.f30.f64;
	// addi r5,r7,4608
	ctx.r5.s64 = ctx.r7.s64 + 4608;
	// fmr f7,f30
	ctx.f7.f64 = ctx.f30.f64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// fmr f6,f31
	ctx.f6.f64 = ctx.f31.f64;
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmuls f2,f28,f31
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// lwz r3,8440(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8440);
	// fmuls f1,f29,f31
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f4,f10,f28
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f28.f64));
	// fmuls f3,f10,f29
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// bl 0x823a66b8
	ctx.lr = 0x823BFB90;
	sub_823A66B8(ctx, base);
	// bl 0x823b1c28
	ctx.lr = 0x823BFB94;
	sub_823B1C28(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x823de074
	ctx.lr = 0x823BFBA0;
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

PPC_WEAK_FUNC(sub_823BFAA0) {
	__imp__sub_823BFAA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFBB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12992);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823bfbc8
	if (!ctx.cr6.eq) goto loc_823BFBC8;
	// b 0x823bf5d8
	sub_823BF5D8(ctx, base);
	return;
loc_823BFBC8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823bfbd4
	if (!ctx.cr6.eq) goto loc_823BFBD4;
	// b 0x823bf788
	sub_823BF788(ctx, base);
	return;
loc_823BFBD4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13100);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x823bfaa0
	sub_823BFAA0(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BFBB0) {
	__imp__sub_823BFBB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFBEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFBEC) {
	__imp__sub_823BFBEC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823BFBF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-29904
	ctx.r30.s64 = ctx.r11.s64 + -29904;
	// addi r4,r3,7120
	ctx.r4.s64 = ctx.r3.s64 + 7120;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d3b90
	ctx.lr = 0x823BFC18;
	sub_823D3B90(ctx, base);
	// lis r11,-31775
	ctx.r11.s64 = -2082406400;
	// addi r3,r11,-24112
	ctx.r3.s64 = ctx.r11.s64 + -24112;
	// bl 0x823d3c78
	ctx.lr = 0x823BFC24;
	sub_823D3C78(ctx, base);
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16268);
	// bl 0x823c90b8
	ctx.lr = 0x823BFC34;
	sub_823C90B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BFC40;
	sub_823C9CA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// bl 0x823d4328
	ctx.lr = 0x823BFC50;
	sub_823D4328(ctx, base);
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c8d28
	ctx.lr = 0x823BFC5C;
	sub_823C8D28(ctx, base);
	// lis r9,-31771
	ctx.r9.s64 = -2082144256;
	// lwz r10,-16268(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16268);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r8,r9,-26624
	ctx.r8.s64 = ctx.r9.s64 + -26624;
	// lwz r11,100(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// stw r11,4824(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4824, ctx.r11.u32);
	// bl 0x823bf140
	ctx.lr = 0x823BFC78;
	sub_823BF140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823be9d0
	ctx.lr = 0x823BFC80;
	sub_823BE9D0(ctx, base);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823bfcb4
	if (ctx.cr6.eq) goto loc_823BFCB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823da068
	ctx.lr = 0x823BFC94;
	sub_823DA068(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823BFCA0;
	sub_823C90B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BFCAC;
	sub_823C9CA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823beb40
	ctx.lr = 0x823BFCB4;
	sub_823BEB40(ctx, base);
loc_823BFCB4:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,13064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13064);
	// lfs f0,5484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823bfce4
	if (ctx.cr6.gt) goto loc_823BFCE4;
	// lfs f13,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823bfce4
	if (ctx.cr6.gt) goto loc_823BFCE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BFCE4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bfcf8
	if (ctx.cr6.eq) goto loc_823BFCF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf258
	ctx.lr = 0x823BFCF8;
	sub_823BF258(ctx, base);
loc_823BFCF8:
	// lbz r11,752(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 752);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823bfd18
	if (ctx.cr6.eq) goto loc_823BFD18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bf390
	ctx.lr = 0x823BFD18;
	sub_823BF390(ctx, base);
loc_823BFD18:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823c90b8
	ctx.lr = 0x823BFD24;
	sub_823C90B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r3,-16268(r29)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r29.u32 + -16268);
	// bl 0x823c9ca0
	ctx.lr = 0x823BFD30;
	sub_823C9CA0(ctx, base);
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,12992(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12992);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823bfd50
	if (!ctx.cr6.eq) goto loc_823BFD50;
	// bl 0x823bf5d8
	ctx.lr = 0x823BFD48;
	sub_823BF5D8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823BFD50:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823bfd64
	if (!ctx.cr6.eq) goto loc_823BFD64;
	// bl 0x823bf788
	ctx.lr = 0x823BFD5C;
	sub_823BF788(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823BFD64:
	// lis r11,-31780
	ctx.r11.s64 = -2082734080;
	// lwz r11,13100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13100);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823bfd7c
	if (ctx.cr6.eq) goto loc_823BFD7C;
	// bl 0x823bfaa0
	ctx.lr = 0x823BFD7C;
	sub_823BFAA0(ctx, base);
loc_823BFD7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BFBF0) {
	__imp__sub_823BFBF0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BFD84) {
	__imp__sub_823BFD84(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFD88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x823bfda4
	if (!ctx.cr6.gt) goto loc_823BFDA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BFDA4:
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFD88) {
	__imp__sub_823BFD88(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFDC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r4,r11
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r7.u32);
	// lwz r6,44(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x823bfdf0
	if (!ctx.cr6.gt) goto loc_823BFDF0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BFDF0:
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// divwu r10,r9,r11
	ctx.r10.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFDC0) {
	__imp__sub_823BFDC0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BFE04) {
	__imp__sub_823BFE04(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFE08) {
	__imp__sub_823BFE08(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFE18) {
	__imp__sub_823BFE18(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE30) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,88(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFE30) {
	__imp__sub_823BFE30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BFE44) {
	__imp__sub_823BFE44(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE48) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFE48) {
	__imp__sub_823BFE48(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823BFE60;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de018
	ctx.lr = 0x823BFE68;
	__savefpr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r30,284(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// li r11,2
	ctx.r11.s64 = 2;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// sth r8,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// fmr f29,f3
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f28,f4
	ctx.f28.f64 = ctx.f4.f64;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmr f27,f5
	ctx.f27.f64 = ctx.f5.f64;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// fmr f26,f6
	ctx.f26.f64 = ctx.f6.f64;
	// fmr f25,f7
	ctx.f25.f64 = ctx.f7.f64;
	// fmr f24,f8
	ctx.f24.f64 = ctx.f8.f64;
	// stw r5,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r5.u32);
	// fmr f4,f6
	ctx.f4.f64 = ctx.f6.f64;
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823a6588
	ctx.lr = 0x823BFEF0;
	sub_823A6588(ctx, base);
	// fadds f29,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f31.f64 + ctx.f29.f64));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x823a6588
	ctx.lr = 0x823BFF10;
	sub_823A6588(ctx, base);
	// fadds f30,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// fmr f4,f24
	ctx.f4.f64 = ctx.f24.f64;
	// fmr f3,f25
	ctx.f3.f64 = ctx.f25.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x823a6588
	ctx.lr = 0x823BFF30;
	sub_823A6588(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// fmr f4,f24
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f24.f64;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823a6588
	ctx.lr = 0x823BFF4C;
	sub_823A6588(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// stw r11,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x823de064
	ctx.lr = 0x823BFF68;
	__restfpr_24(ctx, base);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BFE58) {
	__imp__sub_823BFE58(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823BFF6C) {
	__imp__sub_823BFF6C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFF70) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// stfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f4,12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// bl 0x823bfe58
	ctx.lr = 0x823BFFA0;
	sub_823BFE58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823BFF70) {
	__imp__sub_823BFF70(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823BFFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823BFFB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,180(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8688
	ctx.lr = 0x823BFFD8;
	sub_823C8688(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823c007c
	if (ctx.cr6.eq) goto loc_823C007C;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r28,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823d4060
	ctx.lr = 0x823BFFF4;
	sub_823D4060(ctx, base);
	// lbz r11,5772(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 5772);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c0024
	if (ctx.cr6.eq) goto loc_823C0024;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c8a38
	ctx.lr = 0x823C000C;
	sub_823C8A38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c8c38
	ctx.lr = 0x823C0018;
	sub_823C8C38(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c8e00
	ctx.lr = 0x823C0024;
	sub_823C8E00(ctx, base);
loc_823C0024:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d5650
	ctx.lr = 0x823C0030;
	sub_823D5650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823d54e8
	ctx.lr = 0x823C0038;
	sub_823D54E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4f10
	ctx.lr = 0x823C0040;
	sub_823D4F10(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c92c8
	ctx.lr = 0x823C004C;
	sub_823C92C8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x823d4be0
	ctx.lr = 0x823C0068;
	sub_823D4BE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823d4ba0
	ctx.lr = 0x823C0070;
	sub_823D4BA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823c86e8
	ctx.lr = 0x823C007C;
	sub_823C86E8(ctx, base);
loc_823C007C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823BFFB0) {
	__imp__sub_823BFFB0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0084) {
	__imp__sub_823C0084(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,5576(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5576);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,24(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 24, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f13,5580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5580);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// stfs f13,28(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 28, temp.u32);
	// lfs f12,5584(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5584);
	ctx.f12.f64 = double(temp.f32);
	// fabs f10,f12
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f0,19444(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19444);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5484(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// addi r9,r11,12168
	ctx.r9.s64 = ctx.r11.s64 + 12168;
	// stfs f12,32(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 32, temp.u32);
	// stfs f13,16(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x823c00e4
	if (!ctx.cr6.gt) goto loc_823C00E4;
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// b 0x823c00ec
	goto loc_823C00EC;
loc_823C00E4:
	// stfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// stfs f0,20(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
loc_823C00EC:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f10,f9,f11
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f11.f64));
	// stfs f8,0(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f3,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f6,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// fmsubs f2,f3,f7,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 - ctx.f4.f64));
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f11,f8
	ctx.f11.f64 = ctx.f8.f64;
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f7,f2,f2
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f2.f64));
	// fmsubs f6,f13,f12,f8
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 - ctx.f8.f64));
	// stfs f6,8(r4)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// fmadds f4,f11,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmadds f3,f6,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f4.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// fsel f12,f13,f0,f2
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// fdivs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmuls f8,f6,f10
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f8,8(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// stfs f9,4(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmuls f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// stfs f7,0(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f9,f5
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmsubs f3,f8,f6,f4
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f6.f64 - ctx.f4.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f2,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmsubs f11,f2,f1,f12
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f12.f64));
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmsubs f5,f10,f9,f6
	ctx.f5.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 - ctx.f6.f64));
	// stfs f5,8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0088) {
	__imp__sub_823C0088(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C01D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f12,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fneg f8,f0
	ctx.f8.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fneg f4,f12
	ctx.f4.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f5,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// fneg f3,f7
	ctx.f3.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f0,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f5
	ctx.f1.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f2,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f13,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f10,16(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// stfs f9,32(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// stfs f3,48(r5)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// stfs f2,4(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// stfs f12,20(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f7,36(r5)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r5.u32 + 36, temp.u32);
	// stfs f1,52(r5)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// stfs f8,8(r5)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// stfs f6,24(r5)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f4,40(r5)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + 40, temp.u32);
	// stfs f0,56(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 56, temp.u32);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// stfs f0,44(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 44, temp.u32);
	// stfs f13,60(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 60, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C01D0) {
	__imp__sub_823C01D0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0274) {
	__imp__sub_823C0274(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf74
	ctx.lr = 0x823C0280;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de024
	ctx.lr = 0x823C0288;
	__savefpr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,52(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f13,56(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lfs f31,5488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5488);
	ctx.f31.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f30,12168(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12168);
	ctx.f30.f64 = double(temp.f32);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f29,f8
	ctx.f29.f64 = double(float(ctx.f8.f64));
	// fadds f7,f0,f9
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fdivs f5,f7,f29
	ctx.f5.f64 = double(float(ctx.f7.f64 / ctx.f29.f64));
	// fdivs f4,f6,f29
	ctx.f4.f64 = double(float(ctx.f6.f64 / ctx.f29.f64));
	// fmsubs f28,f5,f31,f30
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f30.f64));
	// fmsubs f27,f4,f31,f30
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f31.f64 - ctx.f30.f64));
	// bl 0x823de090
	ctx.lr = 0x823C0308;
	sub_823DE090(ctx, base);
	// addi r5,r29,19
	ctx.r5.s64 = ctx.r29.s64 + 19;
	// lfs f3,20(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f2.f64));
	// stfs f28,112(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// stfs f27,116(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stfs f30,124(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f0,2424(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 2424);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsx f13,r11,r27
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fdivs f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 / ctx.f1.f64));
	// stfs f11,120(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// fdivs f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// stfs f10,104(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f11,332(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 332, temp.u32);
	// fdivs f9,f31,f12
	ctx.f9.f64 = double(float(ctx.f31.f64 / ctx.f12.f64));
	// stfs f9,64(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stfs f9,84(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// bl 0x822d62b8
	ctx.lr = 0x823C036C;
	sub_822D62B8(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d6658
	ctx.lr = 0x823C0378;
	sub_822D6658(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x823de070
	ctx.lr = 0x823C0384;
	__restfpr_27(ctx, base);
	// b 0x823ddfc4
	__restgprlr_27(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0278) {
	__imp__sub_823C0278(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r5,8
	ctx.r9.s64 = ctx.r5.s64 + 8;
	// lfs f12,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,5484(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f13
	ctx.f7.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,256(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 256, temp.u32);
	// fneg f6,f12
	ctx.f6.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,260(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 260, temp.u32);
	// fneg f5,f11
	ctx.f5.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f0,264(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 264, temp.u32);
	// fneg f4,f10
	ctx.f4.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f7,268(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 268, temp.u32);
	// fneg f3,f9
	ctx.f3.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f5,276(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 276, temp.u32);
	// fneg f2,f8
	ctx.f2.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f6,272(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 272, temp.u32);
	// addi r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 + 24;
	// stfs f3,284(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 284, temp.u32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// stfs f4,280(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 280, temp.u32);
	// stfs f2,288(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 288, temp.u32);
	// lfs f1,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,292(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 292, temp.u32);
	// lfs f13,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f11
	ctx.f6.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// lfs f5,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f7
	ctx.f4.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// lfs f3,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// fneg f2,f5
	ctx.f2.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// stfs f13,296(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 296, temp.u32);
	// stfs f12,300(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 300, temp.u32);
	// fneg f12,f3
	ctx.f12.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// lfs f1,60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,304(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 304, temp.u32);
	// fneg f11,f1
	ctx.f11.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,308(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 308, temp.u32);
	// lfs f13,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,312(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 312, temp.u32);
	// stfs f13,316(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 316, temp.u32);
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// stfs f0,320(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 320, temp.u32);
	// stfs f0,324(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 324, temp.u32);
	// stfs f0,328(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 328, temp.u32);
	// stfs f0,332(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 332, temp.u32);
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f9,16(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f8,32(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// stfs f11,48(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// stfs f7,4(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f5,20(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// stfs f3,36(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f6,52(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// stfs f4,8(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f2,24(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// stfs f12,40(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// stfs f0,56(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// stfs f0,12(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// stfs f0,28(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// stfs f0,44(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// stfs f13,60(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// b 0x823c0278
	sub_823C0278(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0388) {
	__imp__sub_823C0388(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C04B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C04B4) {
	__imp__sub_823C04B4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C04B8) {
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
	ctx.lr = 0x823C04C8;
	__savefpr_28(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// lfs f11,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f10,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f8,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// lfs f7,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5488(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5488);
	ctx.f13.f64 = double(temp.f32);
loc_823C0514:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r10,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c052c
	if (ctx.cr6.eq) goto loc_823C052C;
	// lfs f31,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f31.f64 = double(temp.f32);
	// b 0x823c0530
	goto loc_823C0530;
loc_823C052C:
	// lfs f31,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
loc_823C0530:
	// rlwinm r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c0544
	if (ctx.cr6.eq) goto loc_823C0544;
	// lfs f12,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// b 0x823c0548
	goto loc_823C0548;
loc_823C0544:
	// lfs f12,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
loc_823C0548:
	// fmsubs f31,f31,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f13.f64 - ctx.f0.f64));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmsubs f12,f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f31,f10
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fneg f31,f31
	ctx.f31.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f30,f9,f31
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmuls f29,f6,f31
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// fmuls f31,f3,f31
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmadds f30,f8,f12,f30
	ctx.f30.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f30.f64));
	// fmadds f29,f5,f12,f29
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f29.f64));
	// fmadds f12,f2,f12,f31
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f31.f64));
	// fadds f31,f30,f7
	ctx.f31.f64 = double(float(ctx.f30.f64 + ctx.f7.f64));
	// stfs f31,4(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fadds f31,f29,f4
	ctx.f31.f64 = double(float(ctx.f29.f64 + ctx.f4.f64));
	// stfs f31,8(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f29,f30,f30
	ctx.f29.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
	// fmadds f29,f12,f12,f29
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f29.f64));
	// fmadds f29,f31,f31,f29
	ctx.f29.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fsqrts f29,f29
	ctx.f29.f64 = double(float(sqrt(ctx.f29.f64)));
	// fneg f28,f29
	ctx.f28.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// fsel f29,f28,f0,f29
	ctx.f29.f64 = ctx.f28.f64 >= 0.0 ? ctx.f0.f64 : ctx.f29.f64;
	// fdivs f29,f0,f29
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f12,f30,f29
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f29.f64));
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmuls f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// stfsu f12,12(r11)
	ea = 12 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823c0514
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C0514;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x823de074
	ctx.lr = 0x823C05E0;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C04B8) {
	__imp__sub_823C04B8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C05EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C05EC) {
	__imp__sub_823C05EC(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C05F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf6c
	ctx.lr = 0x823C05F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r26,r4,104
	ctx.r26.s64 = ctx.r4.s64 + 104;
	// addi r25,r4,112
	ctx.r25.s64 = ctx.r4.s64 + 112;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// lfs f0,5484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r4,48
	ctx.r30.s64 = ctx.r4.s64 + 48;
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// addi r31,r4,-8
	ctx.r31.s64 = ctx.r4.s64 + -8;
	// stfs f0,108(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 108, temp.u32);
	// li r28,4
	ctx.r28.s64 = 4;
	// stfs f0,112(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 112, temp.u32);
	// stfs f0,116(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 116, temp.u32);
loc_823C0630:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f9,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f6,f8,f9,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f7.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lfs f5,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfsu f0,12(r31)
	ea = 12 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r31.u32 = ea;
	// lfs f1,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f13,f4,f5,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f5.f64 + ctx.f0.f64));
	// fmadds f12,f3,f2,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f13.f64));
	// stfs f12,4(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// bl 0x822d7898
	ctx.lr = 0x823C0690;
	sub_822D7898(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x823c0630
	if (!ctx.cr0.eq) goto loc_823C0630;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x823ddfbc
	__restgprlr_25(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C05F0) {
	__imp__sub_823C05F0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C06A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C06A4) {
	__imp__sub_823C06A4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C06A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f10.f64 = double(temp.f32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// lfs f13,5804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// fmsubs f9,f11,f10,f12
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f12.f64));
	// stfs f9,96(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f9,92(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// stfs f9,100(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f7,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,80(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// lfs f1,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// lfs f0,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f2
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f10,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsel f8,f9,f1,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f7,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,84(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// lfs f1,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f2
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f10,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsel f8,f9,f1,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f7,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f4.f64));
	// fmsubs f2,f7,f6,f3
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f6.f64 - ctx.f3.f64));
	// stfs f2,88(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// lfs f1,100(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f2
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f2.f64;
	// stfs f11,96(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fsel f8,f9,f1,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f1.f64 : ctx.f10.f64;
	// stfs f8,100(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// lfs f6,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// fsubs f4,f8,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// stw r8,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r8.u32);
	// fmr f7,f8
	ctx.f7.f64 = ctx.f8.f64;
	// stw r8,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r8.u32);
	// fsel f3,f4,f5,f8
	ctx.f3.f64 = ctx.f4.f64 >= 0.0 ? ctx.f5.f64 : ctx.f8.f64;
	// fcmpu cr6,f3,f13
	ctx.cr6.compare(ctx.f3.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfs f12,-30864(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -30864);
	ctx.f12.f64 = double(temp.f32);
	// ble cr6,0x823c080c
	if (!ctx.cr6.gt) goto loc_823C080C;
	// lfs f11,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823c080c
	if (ctx.cr6.gt) goto loc_823C080C;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// b 0x823c0830
	goto loc_823C0830;
loc_823C080C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823c0828
	if (!ctx.cr6.lt) goto loc_823C0828;
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823c0828
	if (ctx.cr6.lt) goto loc_823C0828;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// b 0x823c0830
	goto loc_823C0830;
loc_823C0828:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
loc_823C0830:
	// lfs f0,84(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c0850
	if (!ctx.cr6.gt) goto loc_823C0850;
	// lfs f11,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823c0850
	if (ctx.cr6.gt) goto loc_823C0850;
	// stw r9,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r9.u32);
	// b 0x823c087c
	goto loc_823C087C;
loc_823C0850:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823c086c
	if (!ctx.cr6.lt) goto loc_823C086C;
	// lfs f0,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823c086c
	if (ctx.cr6.lt) goto loc_823C086C;
	// stw r9,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r9.u32);
	// b 0x823c087c
	goto loc_823C087C;
loc_823C086C:
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_823C087C:
	// lfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c08a0
	if (!ctx.cr6.gt) goto loc_823C08A0;
	// lfs f11,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823c08a0
	if (ctx.cr6.gt) goto loc_823C08A0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// b 0x823c08d4
	goto loc_823C08D4;
loc_823C08A0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823c08c0
	if (!ctx.cr6.lt) goto loc_823C08C0;
	// lfs f0,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823c08c0
	if (ctx.cr6.lt) goto loc_823C08C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// b 0x823c08d4
	goto loc_823C08D4;
loc_823C08C0:
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_823C08D4:
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c08f8
	if (!ctx.cr6.gt) goto loc_823C08F8;
	// lfs f11,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bgt cr6,0x823c08f8
	if (ctx.cr6.gt) goto loc_823C08F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// blr 
	return;
loc_823C08F8:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823c0918
	if (!ctx.cr6.lt) goto loc_823C0918;
	// lfs f0,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x823c0918
	if (ctx.cr6.lt) goto loc_823C0918;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
	// blr 
	return;
loc_823C0918:
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C06A8) {
	__imp__sub_823C06A8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C092C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C092C) {
	__imp__sub_823C092C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0930) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823c04b8
	ctx.lr = 0x823C0950;
	sub_823C04B8(ctx, base);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823c05f0
	ctx.lr = 0x823C0958;
	sub_823C05F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c06a8
	ctx.lr = 0x823C0960;
	sub_823C06A8(ctx, base);
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

PPC_WEAK_FUNC(sub_823C0930) {
	__imp__sub_823C0930(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0974) {
	__imp__sub_823C0974(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r10,r8,11
	ctx.r10.s64 = ctx.r8.s64 + 11;
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f8,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// fmadds f6,f10,f11,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f12.f64));
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f11,4(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fnmadds f5,f8,f9,f6
	ctx.f5.f64 = double(float(-(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64)));
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lfs f4,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f4,f7
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f7.f64));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f2,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f2,f1
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// stfs f1,12(r10)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0978) {
	__imp__sub_823C0978(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0A1C) {
	__imp__sub_823C0A1C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// fneg f7,f9
	ctx.f7.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// addi r10,r8,11
	ctx.r10.s64 = ctx.r8.s64 + 11;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f0,7540(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f4,f8,f10,f5
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fnmadds f3,f6,f7,f4
	ctx.f3.f64 = double(float(-(ctx.f6.f64 * ctx.f7.f64 + ctx.f4.f64)));
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fadds f13,f1,f2
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f1,f0,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0A20) {
	__imp__sub_823C0A20(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0AD4) {
	__imp__sub_823C0AD4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,100(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-30864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30864);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x823c0978
	sub_823C0978(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0AD8) {
	__imp__sub_823C0AD8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0AF4) {
	__imp__sub_823C0AF4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f0,f9,f8,f7
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c0b34
	if (!ctx.cr6.gt) goto loc_823C0B34;
	// lfs f1,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823c0978
	sub_823C0978(ctx, base);
	return;
loc_823C0B34:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-30864(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lfs f1,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823c0a20
	sub_823C0A20(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0AF8) {
	__imp__sub_823C0AF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0B4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0B4C) {
	__imp__sub_823C0B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,96(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-30864(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30864);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823c0cc4
	if (!ctx.cr6.lt) goto loc_823C0CC4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,36
	ctx.r8.s64 = 36;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r10,r4,4
	ctx.r10.s64 = ctx.r4.s64 + 4;
	// lfs f0,12168(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// subfic r31,r4,-4
	ctx.xer.ca = ctx.r4.u32 <= 4294967292;
	ctx.r31.s64 = -4 - ctx.r4.s64;
	// li r7,4
	ctx.r7.s64 = 4;
loc_823C0B8C:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lfsx f12,r11,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x823c0cac
	if (!ctx.cr6.lt) goto loc_823C0CAC;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f11,f8,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 - ctx.f9.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f6,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f3.f64));
	// fmsubs f1,f5,f6,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 - ctx.f2.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsx f11,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f7
	ctx.f9.f64 = ctx.f7.f64;
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmuls f5,f1,f1
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// fmr f12,f1
	ctx.f12.f64 = ctx.f1.f64;
	// fmsubs f3,f11,f10,f6
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 - ctx.f6.f64));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmadds f1,f9,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmadds f11,f3,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64 + ctx.f1.f64));
	// fsqrts f10,f11
	ctx.f10.f64 = double(float(sqrt(ctx.f11.f64)));
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// fsel f8,f9,f0,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f10.f64;
	// fdivs f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// fmuls f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f5,4(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f4,f7,f3
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// stfs f4,8(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f2,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f12,f1,f6
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f11,f3,f5,f12
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f5.f64 + ctx.f12.f64));
	// fnmadds f10,f2,f4,f11
	ctx.f10.f64 = double(float(-(ctx.f2.f64 * ctx.f4.f64 + ctx.f11.f64)));
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r9,r9,11
	ctx.r9.s64 = ctx.r9.s64 + 11;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r8,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r8.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
loc_823C0CAC:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// add r8,r31,r10
	ctx.r8.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x823c0b8c
	if (!ctx.cr0.eq) goto loc_823C0B8C;
loc_823C0CC4:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0B50) {
	__imp__sub_823C0B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C0CD8;
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
	// lwz r11,120(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822d4b60
	ctx.lr = 0x823C0D0C;
	sub_822D4B60(ctx, base);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fabs f11,f13
	ctx.f11.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f5,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lfs f2,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r8,r31,176
	ctx.r8.s64 = ctx.r31.s64 + 176;
	// fmuls f6,f8,f12
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f31,2416(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f4,f12,f7
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// lfs f30,7540(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7540);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// fadds f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,124(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 124);
	// fmadds f6,f2,f0,f6
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f0.f64 + ctx.f6.f64));
	// lfs f12,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f5,f1,f0,f4
	ctx.f5.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f11,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f4,f13,f0,f3
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f3.f64));
	// addi r7,r11,6
	ctx.r7.s64 = ctx.r11.s64 + 6;
	// lfs f10,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stfs f6,16(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f5,20(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lfs f8,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fmuls f0,f12,f6
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f6
	ctx.f1.f64 = ctx.f6.f64;
	// fmuls f12,f7,f31
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fmadds f13,f5,f11,f0
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fnmadds f11,f4,f10,f13
	ctx.f11.f64 = double(float(-(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64)));
	// stfs f11,28(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r10,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r10.u32);
	// lfs f9,188(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmadds f7,f12,f30,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfs f8,28(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// stfs f7,188(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// stw r6,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r6.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// fmr f10,f11
	ctx.f10.f64 = ctx.f11.f64;
	// stw r11,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// bl 0x822d4b60
	ctx.lr = 0x823C0E00;
	sub_822D4B60(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fabs f5,f13
	ctx.f5.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f6,f0
	ctx.f6.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f2,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f1,76(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fadds f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f8,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmadds f6,f8,f4,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f4.f64 + ctx.f13.f64));
	// lfs f7,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f3,f1
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f1.f64));
	// lfs f2,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f5,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f1,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// stfs f6,32(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f7,f4,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 + ctx.f10.f64));
	// stfs f13,36(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// fmuls f7,f2,f6
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f6.f64));
	// fmr f8,f6
	ctx.f8.f64 = ctx.f6.f64;
	// fmadds f12,f5,f4,f9
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 + ctx.f9.f64));
	// stfs f12,40(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// fmuls f9,f3,f31
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f31.f64));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmadds f6,f13,f1,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f7.f64));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fnmadds f5,f12,f0,f6
	ctx.f5.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 + ctx.f6.f64)));
	// stfs f5,44(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r7,40(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r6,44(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// lfs f3,204(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f9.f64));
	// fmadds f1,f9,f30,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 + ctx.f3.f64));
	// stfs f2,44(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f1,204(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0CD0) {
	__imp__sub_823C0CD0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C0EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// addi r9,r11,11
	ctx.r9.s64 = ctx.r11.s64 + 11;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r31,r11,r5
	ctx.r31.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x822d4ac8
	ctx.lr = 0x823C0F34;
	sub_822D4AC8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f5,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f10,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f9,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f3,f10,f13,f1
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f1.f64));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f0,f13,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f5,0(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f4,f11,f13,f2
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f2.f64));
	// stfs f4,4(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f1,f13
	ctx.f1.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f2,f0
	ctx.f2.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lfs f8,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f6,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fadds f11,f2,f1
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f1.f64));
	// fmadds f10,f6,f13,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmuls f9,f11,f8
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmsubs f8,f9,f12,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 - ctx.f10.f64));
	// stfs f8,12(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C0EE0) {
	__imp__sub_823C0EE0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C0FC4) {
	__imp__sub_823C0FC4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C0FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmuls f6,f11,f1
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f5,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// lfs f3,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f9,f5,f12
	ctx.f9.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f8,f4,f10
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fadds f11,f4,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f7,f3,f6
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f6.f64));
	// fadds f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f10,f3,f6
	ctx.f10.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// beq cr6,0x823c10d0
	if (ctx.cr6.eq) goto loc_823C10D0;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lfs f6,5484(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5484);
	ctx.f6.f64 = double(temp.f32);
loc_823C1024:
	// lfs f0,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// lfs f5,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f11
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f3,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f0,f5,f9,f13
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f9.f64 + ctx.f13.f64));
	// fmadds f13,f5,f12,f4
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f4.f64));
	// fmadds f5,f3,f7,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f0.f64));
	// fmadds f4,f3,f10,f13
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fadds f0,f5,f2
	ctx.f0.f64 = double(float(ctx.f5.f64 + ctx.f2.f64));
	// fadds f13,f4,f2
	ctx.f13.f64 = double(float(ctx.f4.f64 + ctx.f2.f64));
	// fcmpu cr6,f0,f6
	ctx.cr6.compare(ctx.f0.f64, ctx.f6.f64);
	// bgt cr6,0x823c1090
	if (ctx.cr6.gt) goto loc_823C1090;
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// ble cr6,0x823c110c
	if (!ctx.cr6.gt) goto loc_823C110C;
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f3,f10,f0
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmsubs f8,f8,f13,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 - ctx.f4.f64));
	// fmsubs f7,f7,f13,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64 - ctx.f3.f64));
	// fmsubs f0,f9,f13,f5
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 - ctx.f5.f64));
	// fdivs f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 / ctx.f2.f64));
	// fdivs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f2.f64));
	// fdivs f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// b 0x823c10c0
	goto loc_823C10C0;
loc_823C1090:
	// fcmpu cr6,f13,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// bgt cr6,0x823c10c0
	if (ctx.cr6.gt) goto loc_823C10C0;
	// fmuls f4,f8,f13
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f3,f7,f13
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f5,f9,f13
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmsubs f11,f11,f0,f4
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f4.f64));
	// fmsubs f10,f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f3.f64));
	// fmsubs f13,f12,f0,f5
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fdivs f11,f11,f2
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// fdivs f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// fdivs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
loc_823C10C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823c1024
	if (!ctx.cr6.eq) goto loc_823C1024;
loc_823C10D0:
	// fsubs f13,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// lfs f0,14192(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f13,f13
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmuls f8,f10,f10
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f7,f12,f12,f9
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f9.f64));
	// fmadds f6,f11,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f7.f64));
	// fcmpu cr6,f6,f8
	ctx.cr6.compare(ctx.f6.f64, ctx.f8.f64);
	// blt cr6,0x823c1108
	if (ctx.cr6.lt) goto loc_823C1108;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C1108:
	// blr 
	return;
loc_823C110C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C0FC8) {
	__imp__sub_823C0FC8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1114) {
	__imp__sub_823C1114(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf48
	ctx.lr = 0x823C1120;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de028
	ctx.lr = 0x823C1128;
	__savefpr_28(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,116(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lfs f13,108(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f12,112(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f10,104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 104);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fcmpu cr6,f11,f9
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// blt cr6,0x823c1158
	if (ctx.cr6.lt) goto loc_823C1158;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823C1158:
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r9,r6,19
	ctx.r9.s64 = ctx.r6.s64 + 19;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfsx f0,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f10,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f10.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfsx f9,r8,r3
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,2416(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 2416);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmsubs f12,f10,f0,f9
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// blt cr6,0x823c11bc
	if (ctx.cr6.lt) goto loc_823C11BC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823C11BC:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r8,r4,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r30,r5,15
	ctx.r30.s64 = ctx.r5.s64 + 15;
	// addi r29,r10,13
	ctx.r29.s64 = ctx.r10.s64 + 13;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// add r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stfsx f12,r7,r4
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfsx f6,r29,r3
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r3.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r30,r3
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,0(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmsubs f12,f6,f0,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f5.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,4(r9)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f1
	ctx.cr6.compare(ctx.f12.f64, ctx.f1.f64);
	// lfs f2,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fneg f11,f2
	ctx.f11.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fneg f9,f10
	ctx.f9.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// stfs f9,12(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfsx f8,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f13,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// stfsx f7,r8,r5
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r5.u32, temp.u32);
	// blt cr6,0x823c127c
	if (ctx.cr6.lt) goto loc_823C127C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823C127C:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// xori r10,r8,1
	ctx.r10.u64 = ctx.r8.u64 ^ 1;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f11,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// rlwinm r29,r6,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stfs f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r30,r1,108
	ctx.r30.s64 = ctx.r1.s64 + 108;
	// lfs f9,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfsx f12,r7,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// lwzx r5,r29,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lfs f8,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f6,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fneg f5,f6
	ctx.f5.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f5,4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fneg f3,f4
	ctx.f3.u64 = ctx.f4.u64 ^ 0x8000000000000000;
	// stfs f3,8(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fneg f12,f2
	ctx.f12.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f11,r8,r30
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfsx f10,r8,r30
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r30.u32, temp.u32);
	// beq cr6,0x823c137c
	if (ctx.cr6.eq) goto loc_823C137C;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f11,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f10,5804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5804);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
loc_823C1348:
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfs f7,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f5,f12,f7,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f4,f11,f6,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fabs f3,f4
	ctx.f3.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fcmpu cr6,f3,f10
	ctx.cr6.compare(ctx.f3.f64, ctx.f10.f64);
	// blt cr6,0x823c152c
	if (ctx.cr6.lt) goto loc_823C152C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823c1348
	if (!ctx.cr6.eq) goto loc_823C1348;
loc_823C137C:
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// lfs f0,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// stwx r11,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r8,r31
	ctx.r22.u64 = ctx.r8.u64 + ctx.r31.u64;
	// add r21,r9,r31
	ctx.r21.u64 = ctx.r9.u64 + ctx.r31.u64;
	// bge cr6,0x823c1474
	if (!ctx.cr6.lt) goto loc_823C1474;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,4(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,8(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r19,r10,r31
	ctx.r19.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r17,r11,r31
	ctx.r17.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r23,8(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r20,0(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r18,4(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r16,8(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// stw r3,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r3.u32);
	// stw r30,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r30.u32);
	// stw r28,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r28.u32);
	// stwx r27,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r27.u32);
	// stw r26,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r26.u32);
	// stw r25,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r25.u32);
	// stw r7,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r7.u32);
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// stw r24,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r24.u32);
	// stw r23,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r23.u32);
	// stw r6,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r6.u32);
	// stwx r20,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r20.u32);
	// stw r18,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r18.u32);
	// stw r16,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r16.u32);
	// stw r4,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r4.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x823C1470;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
loc_823C1474:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r28,12(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r26,4(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r25,8(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r19,r10,r31
	ctx.r19.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r24,4(r6)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// add r17,r11,r31
	ctx.r17.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r23,8(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r20,0(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r18,4(r4)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r16,8(r4)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stwx r5,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r5.u32);
	// stw r3,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r3.u32);
	// stw r30,8(r22)
	PPC_STORE_U32(ctx.r22.u32 + 8, ctx.r30.u32);
	// stw r28,12(r22)
	PPC_STORE_U32(ctx.r22.u32 + 12, ctx.r28.u32);
	// stwx r27,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r27.u32);
	// stw r26,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r26.u32);
	// stw r25,8(r21)
	PPC_STORE_U32(ctx.r21.u32 + 8, ctx.r25.u32);
	// stw r7,12(r21)
	PPC_STORE_U32(ctx.r21.u32 + 12, ctx.r7.u32);
	// stwx r29,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r29.u32);
	// stw r24,4(r19)
	PPC_STORE_U32(ctx.r19.u32 + 4, ctx.r24.u32);
	// stw r23,8(r19)
	PPC_STORE_U32(ctx.r19.u32 + 8, ctx.r23.u32);
	// stw r6,12(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12, ctx.r6.u32);
	// stwx r20,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r20.u32);
	// stw r18,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r18.u32);
	// stw r16,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r16.u32);
	// stw r4,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r4.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x823C1528;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
loc_823C152C:
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fnmsubs f12,f13,f0,f1
	ctx.f12.f64 = double(float(-(ctx.f13.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// lfs f11,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// fnmsubs f10,f11,f0,f1
	ctx.f10.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f1.f64)));
	// addi r8,r6,8
	ctx.r8.s64 = ctx.r6.s64 + 8;
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f7,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfs f6,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,60(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f5.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f4,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fneg f31,f1
	ctx.f31.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f3,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// addi r27,r10,16
	ctx.r27.s64 = ctx.r10.s64 + 16;
	// lfsx f2,r7,r3
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r28,r6,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// fadds f0,f12,f5
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fadds f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fmuls f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f11,f8,f0
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmadds f30,f6,f13,f12
	ctx.f30.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f29,f4,f13,f11
	ctx.f29.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f11.f64));
	// fmadds f28,f3,f13,f10
	ctx.f28.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 + ctx.f10.f64));
loc_823C15A8:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f0,f31,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 + ctx.f30.f64));
	// lfs f11,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f31,f29
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f29.f64));
	// fmadds f9,f31,f11,f28
	ctx.f9.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f28.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f10,84(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// xori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 ^ 32;
	// stfs f9,88(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823c0fc8
	ctx.lr = 0x823C15E8;
	sub_823C0FC8(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823c1634
	if (!ctx.cr6.eq) goto loc_823C1634;
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lwz r3,12(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// stw r9,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r9.u32);
	// stw r7,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// stw r3,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r3.u32);
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
loc_823C1634:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x823c15a8
	if (ctx.cr6.lt) goto loc_823C15A8;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x823de074
	ctx.lr = 0x823C1650;
	__restfpr_28(ctx, base);
	// b 0x823ddf98
	__restgprlr_16(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C1118) {
	__imp__sub_823C1118(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1654) {
	__imp__sub_823C1654(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C1660;
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
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r9,r6,6
	ctx.r9.s64 = ctx.r6.s64 + 6;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r7,6
	ctx.r8.s64 = ctx.r7.s64 + 6;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r4,r8,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfsx f0,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f13,52(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lfs f12,52(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,80(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x823C16CC;
	sub_822D4AC8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f6,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fmuls f5,f0,f6
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// lfs f4,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f3,f13
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lfs f9,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// fabs f7,f8
	ctx.f7.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmuls f8,f1,f13
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmadds f13,f9,f13,f5
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f10,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f12,f6,f0,f2
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f2.f64));
	// lfs f3,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f11,f3,f0,f11
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fmuls f6,f4,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f30,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f0,f30,f0,f8
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64 + ctx.f8.f64));
	// lfs f29,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f9,40(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,76(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f7,f8
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// fmadds f4,f1,f12,f6
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f5,f0,f9,f31
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f9.f64 + ctx.f31.f64));
	// fnmadds f2,f29,f11,f4
	ctx.f2.f64 = double(float(-(ctx.f29.f64 * ctx.f11.f64 + ctx.f4.f64)));
	// stfs f2,108(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// fnmsubs f3,f7,f10,f5
	ctx.f3.f64 = double(float(-(ctx.f7.f64 * ctx.f10.f64 - ctx.f5.f64)));
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// fsubs f0,f1,f3
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r11,11
	ctx.r10.s64 = ctx.r11.s64 + 11;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r5,12(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lfs f0,7540(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 7540);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// stw r5,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// lfs f13,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f12,f3,f0,f13
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C1658) {
	__imp__sub_823C1658(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C180C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C180C) {
	__imp__sub_823C180C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823C1818;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,120(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x823c1910
	if (!ctx.cr6.eq) goto loc_823C1910;
	// lfs f0,96(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,100(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lfs f31,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x823c18b8
	if (!ctx.cr6.gt) goto loc_823C18B8;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823c1658
	ctx.lr = 0x823C186C;
	sub_823C1658(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1658
	ctx.lr = 0x823C188C;
	sub_823C1658(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1658
	ctx.lr = 0x823C18AC;
	sub_823C1658(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// b 0x823c1abc
	goto loc_823C1ABC;
loc_823C18B8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x823c1658
	ctx.lr = 0x823C18C4;
	sub_823C1658(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1658
	ctx.lr = 0x823C18E4;
	sub_823C1658(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1658
	ctx.lr = 0x823C1904;
	sub_823C1658(ctx, base);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823c1abc
	goto loc_823C1ABC;
loc_823C1910:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r5,r6,6
	ctx.r5.s64 = ctx.r6.s64 + 6;
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// addi r3,r10,6
	ctx.r3.s64 = ctx.r10.s64 + 6;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r10,r7,6
	ctx.r10.s64 = ctx.r7.s64 + 6;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lfs f4,5804(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5804);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f11,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f6,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f3,f0,f6
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f6.f64));
	// lfs f2,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f7,f11,f2
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f2.f64));
	// lfs f12,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f1,f13,f2
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f2.f64));
	// fsubs f8,f12,f2
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f10,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f10,f6
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f6.f64));
	// stfs f7,108(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f6,96(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmuls f2,f3,f3
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// fmuls f31,f7,f3
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f3.f64));
	// fmuls f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f3.f64));
	// fmadds f3,f1,f1,f2
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fmsubs f7,f1,f6,f8
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f6.f64 - ctx.f8.f64));
	// stfs f7,80(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmsubs f6,f5,f1,f31
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f1.f64 - ctx.f31.f64));
	// stfs f6,84(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fsqrts f8,f3
	ctx.f8.f64 = double(float(sqrt(ctx.f3.f64)));
	// fmuls f5,f8,f4
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bge cr6,0x823c19d4
	if (!ctx.cr6.lt) goto loc_823C19D4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823C19D4:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfsx f7,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// bge cr6,0x823c1a04
	if (!ctx.cr6.lt) goto loc_823C1A04;
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f8
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f8.f64));
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// fsel f1,f12,f12,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// b 0x823c1ac0
	goto loc_823C1AC0;
loc_823C1A04:
	// subfic r8,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r9.s64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfsx f8,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f31,5484(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5484);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f8,f5
	ctx.cr6.compare(ctx.f8.f64, ctx.f5.f64);
	// ble cr6,0x823c1b20
	if (!ctx.cr6.gt) goto loc_823C1B20;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r8,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 + ctx.r7.u64;
	// lfsx f8,r5,r7
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f3,f4,f8,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f8.f64 - ctx.f5.f64));
	// fcmpu cr6,f3,f31
	ctx.cr6.compare(ctx.f3.f64, ctx.f31.f64);
	// ble cr6,0x823c1ae0
	if (!ctx.cr6.gt) goto loc_823C1AE0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subfic r8,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r8.s64;
loc_823C1A64:
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r10,r8,32
	ctx.r10.s64 = ctx.r8.s64 + 32;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r6,r27,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// lwzx r7,r26,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
	// bl 0x823c1658
	ctx.lr = 0x823C1A94;
	sub_823C1658(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r7,r27,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,120(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x823c1658
	ctx.lr = 0x823C1AB4;
	sub_823C1658(ctx, base);
	// lwzx r6,r26,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r31.u32);
loc_823C1AB8:
	// lwz r7,124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
loc_823C1ABC:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_823C1AC0:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1658
	ctx.lr = 0x823C1AD4;
	sub_823C1658(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C1AE0:
	// fsubs f10,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fsubs f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f7,104(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fsubs f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fsubs f6,f11,f13
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f6,108(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f5,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f2.f64));
	// fmsubs f0,f5,f4,f1
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f4.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823c1a64
	if (ctx.cr6.gt) goto loc_823C1A64;
loc_823C1B20:
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r7,r27,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x823c1658
	ctx.lr = 0x823C1B44;
	sub_823C1658(ctx, base);
	// lwzx r6,r27,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// b 0x823c1ab8
	goto loc_823C1AB8;
}

PPC_WEAK_FUNC(sub_823C1810) {
	__imp__sub_823C1810(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1B4C) {
	__imp__sub_823C1B4C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lfs f0,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fsubs f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f3,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r7,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r7.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f13,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f7,f13,f0
	ctx.f7.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f1,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// lfs f6,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f3,f1
	ctx.f11.f64 = double(float(ctx.f3.f64 - ctx.f1.f64));
	// fcfid f2,f10
	ctx.f2.f64 = double(ctx.f10.s64);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lfs f0,8336(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8336);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f12,-18596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -18596);
	ctx.f12.f64 = double(temp.f32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fmuls f4,f4,f7
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fadds f3,f6,f5
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f1,f11,f7
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fadds f11,f10,f5
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// frsp f10,f8
	ctx.f10.f64 = double(float(ctx.f8.f64));
	// fmadds f9,f3,f0,f4
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fmadds f8,f11,f0,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f1.f64));
	// fdivs f7,f9,f2
	ctx.f7.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// fdivs f6,f8,f2
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f2.f64));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f7.f64));
	// fdivs f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 / ctx.f10.f64));
	// stfs f4,4(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// beq cr6,0x823c1c10
	if (ctx.cr6.eq) goto loc_823C1C10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5484(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// b 0x823c1c14
	goto loc_823C1C14;
loc_823C1C10:
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
loc_823C1C14:
	// lis r11,-31799
	ctx.r11.s64 = -2083979264;
	// stfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r11,13536
	ctx.r9.s64 = ctx.r11.s64 + 13536;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,6056(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,904(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 904);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// lfs f12,25336(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 25336);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,19368(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 19368);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,5880(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5880);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f7,16(r6)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// fmuls f6,f9,f12
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f6,24(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// fmuls f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f5,28(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// fmuls f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f4,20(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C1B50) {
	__imp__sub_823C1B50(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1C74) {
	__imp__sub_823C1C74(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1C78) {
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
	// addi r11,r4,19
	ctx.r11.s64 = ctx.r4.s64 + 19;
	// lfs f13,44(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f30,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f30.f64 = double(temp.f32);
	// fdivs f29,f0,f30
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C1CC4;
	sub_823DDE20(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f31,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f31.f64 = double(temp.f32);
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// stfs f10,60(r7)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r7.u32 + 60, temp.u32);
	// lfs f9,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f1,f9,f29
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C1CF0;
	sub_823DDE20(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// addi r6,r30,8
	ctx.r6.s64 = ctx.r30.s64 + 8;
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// fadds f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f31.f64));
	// fmuls f6,f7,f30
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// stfsx f6,r5,r31
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

PPC_WEAK_FUNC(sub_823C1C78) {
	__imp__sub_823C1C78(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1D2C) {
	__imp__sub_823C1D2C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1D30) {
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
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f31,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f31.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f0,12168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12168);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f7,f11,f10,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// lfs f6,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fdivs f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfs f0,2416(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2416);
	ctx.f0.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmadds f3,f6,f4,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f4.f64 + ctx.f7.f64));
	// fnmsubs f29,f5,f0,f0
	ctx.f29.f64 = double(float(-(ctx.f5.f64 * ctx.f0.f64 - ctx.f0.f64)));
	// fmuls f1,f30,f3
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C1DB4;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,52(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmadds f4,f11,f10,f5
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f5.f64));
	// fmadds f3,f9,f8,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f4.f64));
	// fmuls f1,f30,f3
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f3.f64));
	// bl 0x823dde20
	ctx.lr = 0x823C1DF8;
	sub_823DDE20(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// fadds f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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

PPC_WEAK_FUNC(sub_823C1D30) {
	__imp__sub_823C1D30(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C1E34) {
	__imp__sub_823C1E34(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r5,8
	ctx.r7.s64 = ctx.r5.s64 + 8;
	// lfs f0,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r5,19
	ctx.r9.s64 = ctx.r5.s64 + 19;
	// lfs f13,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r11,r7,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// lfsx f9,r5,r3
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,60(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r11,r3
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f7.f64 = double(temp.f32);
	// fnmsubs f6,f0,f9,f8
	ctx.f6.f64 = double(float(-(ctx.f0.f64 * ctx.f9.f64 - ctx.f8.f64)));
	// fnmsubs f5,f13,f9,f7
	ctx.f5.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 - ctx.f7.f64)));
	// stfs f6,0(r6)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f5,4(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f4,f10,f9
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fadds f3,f6,f4
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fadds f2,f5,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// stfs f2,12(r6)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C1E38) {
	__imp__sub_823C1E38(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f12,76(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f9,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// lfs f8,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f8.f64 = double(temp.f32);
	// lfs f5,64(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f5.f64 = double(temp.f32);
	// fnmsubs f13,f10,f12,f8
	ctx.f13.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f8.f64)));
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f7,-16(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfs f3,80(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// lfs f2,68(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f2.f64 = double(temp.f32);
	// fnmsubs f0,f9,f12,f5
	ctx.f0.f64 = double(float(-(ctx.f9.f64 * ctx.f12.f64 - ctx.f5.f64)));
	// lfs f1,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// lfs f11,24332(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24332);
	ctx.f11.f64 = double(temp.f32);
	// fnmsubs f7,f3,f9,f1
	ctx.f7.f64 = double(float(-(ctx.f3.f64 * ctx.f9.f64 - ctx.f1.f64)));
	// fnmsubs f8,f3,f10,f2
	ctx.f8.f64 = double(float(-(ctx.f3.f64 * ctx.f10.f64 - ctx.f2.f64)));
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f6,f4,f12
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// fmuls f4,f6,f11
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f12,f6,f0
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fmuls f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f11,f13,f4
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// stfs f11,-16(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// fadds f9,f0,f4
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f4.f64));
	// stfs f9,-12(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fsubs f6,f10,f4
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f4.f64));
	// stfs f6,-8(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fsubs f5,f12,f4
	ctx.f5.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f5,-4(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fadds f11,f8,f3
	ctx.f11.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// fadds f8,f7,f3
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// fsubs f9,f2,f3
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// fsubs f7,f1,f3
	ctx.f7.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stw r7,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r7.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// stw r4,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
	// stw r6,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r6.u32);
	// bge cr6,0x823c1f78
	if (!ctx.cr6.lt) goto loc_823C1F78;
	// stfs f11,24(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f13,16(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// b 0x823c1f88
	goto loc_823C1F88;
loc_823C1F78:
	// fcmpu cr6,f10,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f9.f64);
	// ble cr6,0x823c1f94
	if (!ctx.cr6.gt) goto loc_823C1F94;
	// stfs f10,24(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// stfs f9,16(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
loc_823C1F88:
	// stfs f0,20(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f12,28(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
loc_823C1F94:
	// fcmpu cr6,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f8.f64);
	// bge cr6,0x823c1fbc
	if (!ctx.cr6.lt) goto loc_823C1FBC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsx f8,r7,r5
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
	// b 0x823c1fe0
	goto loc_823C1FE0;
loc_823C1FBC:
	// fcmpu cr6,f12,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f7,4(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsx f12,r7,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, temp.u32);
loc_823C1FE0:
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// stfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r6,r5
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C1EA0) {
	__imp__sub_823C1EA0(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C1FF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,5804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5804);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x823c2054
	if (!ctx.cr6.lt) goto loc_823C2054;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fsel f8,f9,f11,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsel f1,f6,f3,f2
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// stfs f1,4(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
loc_823C2054:
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fabs f11,f0
	ctx.f11.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// lfs f12,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// bge cr6,0x823c20a4
	if (!ctx.cr6.lt) goto loc_823C20A4;
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fsel f8,f13,f10,f9
	ctx.f8.f64 = ctx.f13.f64 >= 0.0 ? ctx.f10.f64 : ctx.f9.f64;
	// stfs f8,0(r6)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f4,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// fsubs f3,f4,f5
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f5.f64));
	// fsel f1,f6,f3,f2
	ctx.f1.f64 = ctx.f6.f64 >= 0.0 ? ctx.f3.f64 : ctx.f2.f64;
	// stfs f1,4(r6)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
loc_823C20A4:
	// lfs f10,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsel f9,f13,f12,f11
	ctx.f9.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f11.f64;
	// lfs f8,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f0,f10,f8
	ctx.f7.f64 = ctx.f0.f64 >= 0.0 ? ctx.f10.f64 : ctx.f8.f64;
	// lfs f6,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f4,f9,f6
	ctx.f4.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f3,f7,f5
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f5.f64));
	// fdivs f2,f4,f13
	ctx.f2.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// fdivs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 / ctx.f0.f64));
	// fsubs f0,f2,f1
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsel f13,f0,f2,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f2.f64 : ctx.f1.f64;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f7,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsel f3,f12,f11,f10
	ctx.f3.f64 = ctx.f12.f64 >= 0.0 ? ctx.f11.f64 : ctx.f10.f64;
	// fsel f4,f7,f6,f5
	ctx.f4.f64 = ctx.f7.f64 >= 0.0 ? ctx.f6.f64 : ctx.f5.f64;
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fdivs f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f12.f64));
	// fdivs f0,f2,f7
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f7.f64));
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C1FF8) {
	__imp__sub_823C1FF8(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C2128;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,-12924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12924);
	ctx.f0.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f31,11804(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// beq cr6,0x823c21e8
	if (ctx.cr6.eq) goto loc_823C21E8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,-8
	ctx.r31.s64 = ctx.r11.s64 + -8;
loc_823C2164:
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x823c1ff8
	ctx.lr = 0x823C2174;
	sub_823C1FF8(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823c21dc
	if (!ctx.cr6.lt) goto loc_823C21DC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823c21dc
	if (ctx.cr6.lt) goto loc_823C21DC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823c2198
	if (!ctx.cr6.eq) goto loc_823C2198;
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
loc_823C2198:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c21c4
	if (ctx.cr6.eq) goto loc_823C21C4;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_823C21A8:
	// lfs f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c21c4
	if (!ctx.cr6.gt) goto loc_823C21C4;
	// ld r6,-16(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stdu r6,-8(r11)
	ea = -8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r6.u64);
	ctx.r11.u32 = ea;
	// bne 0x823c21a8
	if (!ctx.cr0.eq) goto loc_823C21A8;
loc_823C21C4:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stdx r11,r10,r6
	PPC_STORE_U64(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u64);
loc_823C21DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823c2164
	if (ctx.cr6.lt) goto loc_823C2164;
loc_823C21E8:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x823c2204
	if (!ctx.cr6.gt) goto loc_823C2204;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
loc_823C2204:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x823c2318
	if (!ctx.cr6.gt) goto loc_823C2318;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823c22cc
	if (ctx.cr6.lt) goto loc_823C22CC;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
loc_823C2228:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f10,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// fsel f9,f11,f13,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fsubs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsel f9,f11,f9,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fsubs f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// lfs f10,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// fadds f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fsel f9,f11,f9,f0
	ctx.f9.f64 = ctx.f11.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// lfsu f0,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fsubs f12,f9,f0
	ctx.f12.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// addi r9,r8,-3
	ctx.r9.s64 = ctx.r8.s64 + -3;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fsel f11,f12,f9,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f9.f64 : ctx.f0.f64;
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x823c2228
	if (ctx.cr6.lt) goto loc_823C2228;
loc_823C22CC:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_823C22E4:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f12,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x823c2318
	if (!ctx.cr6.lt) goto loc_823C2318;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// fsel f11,f12,f13,f0
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blt cr6,0x823c22e4
	if (ctx.cr6.lt) goto loc_823C22E4;
loc_823C2318:
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f11,f12,f0,f13
	ctx.f11.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f11,4(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2120) {
	__imp__sub_823C2120(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C233C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C233C) {
	__imp__sub_823C233C(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf7c
	ctx.lr = 0x823C2348;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsubs f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f9,84(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// bl 0x822d4ac8
	ctx.lr = 0x823C2388;
	sub_822D4AC8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823c2530
	if (ctx.cr6.eq) goto loc_823C2530;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11804(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11804);
	ctx.f31.f64 = double(temp.f32);
loc_823C23AC:
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823c1ff8
	ctx.lr = 0x823C23BC;
	sub_823C1FF8(ctx, base);
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x823c2418
	if (!ctx.cr6.lt) goto loc_823C2418;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823c2418
	if (ctx.cr6.lt) goto loc_823C2418;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c2400
	if (ctx.cr6.eq) goto loc_823C2400;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_823C23E4:
	// lfs f0,-16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x823c2400
	if (!ctx.cr6.gt) goto loc_823C2400;
	// ld r7,-16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stdu r7,-8(r11)
	ea = -8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r7.u64);
	ctx.r11.u32 = ea;
	// bne 0x823c23e4
	if (!ctx.cr0.eq) goto loc_823C23E4;
loc_823C2400:
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stdx r11,r10,r7
	PPC_STORE_U64(ctx.r10.u32 + ctx.r7.u32, ctx.r11.u64);
loc_823C2418:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// bne 0x823c23ac
	if (!ctx.cr0.eq) goto loc_823C23AC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823c2530
	if (ctx.cr6.eq) goto loc_823C2530;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823c2530
	if (ctx.cr6.gt) goto loc_823C2530;
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x823c2520
	if (!ctx.cr6.gt) goto loc_823C2520;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823c24dc
	if (ctx.cr6.lt) goto loc_823C24DC;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
loc_823C2458:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// lfs f13,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// lfs f13,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// lfs f13,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// lfsu f13,32(r10)
	ea = 32 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r9,r8,-3
	ctx.r9.s64 = ctx.r8.s64 + -3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blt cr6,0x823c2458
	if (ctx.cr6.lt) goto loc_823C2458;
loc_823C24DC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823C24F4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x823c2520
	if (!ctx.cr6.lt) goto loc_823C2520;
	// lfsu f13,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// blt cr6,0x823c24f4
	if (ctx.cr6.lt) goto loc_823C24F4;
loc_823C2520:
	// fsubs f13,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// li r3,1
	ctx.r3.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823c2534
	if (!ctx.cr6.lt) goto loc_823C2534;
loc_823C2530:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823C2534:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x823ddfcc
	__restgprlr_29(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2340) {
	__imp__sub_823C2340(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C2544) {
	__imp__sub_823C2544(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf70
	ctx.lr = 0x823C2550;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de020
	ctx.lr = 0x823C2558;
	__savefpr_26(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x823c1ea0
	ctx.lr = 0x823C2574;
	sub_823C1EA0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822d4b60
	ctx.lr = 0x823C2590;
	sub_822D4B60(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x822d4b60
	ctx.lr = 0x823C25A8;
	sub_822D4B60(ctx, base);
	// addi r31,r28,44
	ctx.r31.s64 = ctx.r28.s64 + 44;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c2120
	ctx.lr = 0x823C25C4;
	sub_823C2120(ctx, base);
	// clrlwi r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823c2854
	if (ctx.cr6.eq) goto loc_823C2854;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c2120
	ctx.lr = 0x823C25E8;
	sub_823C2120(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c2854
	if (ctx.cr6.eq) goto loc_823C2854;
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r30,8
	ctx.r26.s64 = ctx.r30.s64 + 8;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// fmr f8,f0
	ctx.f8.f64 = ctx.f0.f64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmr f7,f13
	ctx.f7.f64 = ctx.f13.f64;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f31,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// lfs f26,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f9,f11,f31,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64 + ctx.f13.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f4,f6,f26,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f26.f64 + ctx.f0.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fmadds f3,f5,f26,f13
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f26.f64 + ctx.f13.f64));
	// stfs f9,4(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f4,8(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stfs f3,12(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// bne cr6,0x823c265c
	if (!ctx.cr6.eq) goto loc_823C265C;
loc_823C2648:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C2658;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C265C:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c2340
	ctx.lr = 0x823C2670;
	sub_823C2340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823c2648
	if (!ctx.cr6.eq) goto loc_823C2648;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lfs f8,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f30,f10,f0,f12
	ctx.f30.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// lfs f6,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f29,f8,f0,f11
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f11.f64));
	// lfs f5,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f28,f6,f13,f12
	ctx.f28.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f27,f5,f13,f11
	ctx.f27.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f29,100(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f28,104(r1)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f27,108(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bge cr6,0x823c2810
	if (!ctx.cr6.lt) goto loc_823C2810;
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bge cr6,0x823c27d4
	if (!ctx.cr6.lt) goto loc_823C27D4;
	// fmuls f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f26.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823c26e8
	if (!ctx.cr6.lt) goto loc_823C26E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823C26E8:
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r28,r31,r10
	ctx.r28.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c2340
	ctx.lr = 0x823C2710;
	sub_823C2340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c2744
	if (ctx.cr6.eq) goto loc_823C2744;
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C2740;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C2744:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// subf r28,r31,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r4,r31,r30
	ctx.r4.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823c2340
	ctx.lr = 0x823C2760;
	sub_823C2340(ctx, base);
	// clrlwi r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823c2790
	if (ctx.cr6.eq) goto loc_823C2790;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f13,4(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C278C;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C2790:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c2340
	ctx.lr = 0x823C27A4;
	sub_823C2340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c2854
	if (ctx.cr6.eq) goto loc_823C2854;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f29,4(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f28,0(r26)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// stfs f27,4(r26)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C27D0;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C27D4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c2340
	ctx.lr = 0x823C27E8;
	sub_823C2340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c2854
	if (ctx.cr6.eq) goto loc_823C2854;
	// stfs f30,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f29,4(r30)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C280C;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C2810:
	// fcmpu cr6,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f26.f64);
	// bge cr6,0x823c2854
	if (!ctx.cr6.lt) goto loc_823C2854;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823c2340
	ctx.lr = 0x823C282C;
	sub_823C2340(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823c2854
	if (ctx.cr6.eq) goto loc_823C2854;
	// stfs f28,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfs f27,4(r26)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C2850;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
loc_823C2854:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x823de06c
	ctx.lr = 0x823C2864;
	__restfpr_26(ctx, base);
	// b 0x823ddfc0
	__restgprlr_26(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2548) {
	__imp__sub_823C2548(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C2868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x823ddf78
	ctx.lr = 0x823C2870;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x823c1c78
	ctx.lr = 0x823C288C;
	sub_823C1C78(ctx, base);
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823c28a4
	if (!ctx.cr6.eq) goto loc_823C28A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
loc_823C28A4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823c2548
	ctx.lr = 0x823C28B8;
	sub_823C2548(ctx, base);
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x823ddfc8
	__restgprlr_28(ctx, base);
	return;
}

PPC_WEAK_FUNC(sub_823C2868) {
	__imp__sub_823C2868(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C28C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

PPC_WEAK_FUNC(sub_823C28C4) {
	__imp__sub_823C28C4(ctx, base);
}

PPC_FUNC_IMPL(__imp__sub_823C28C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

PPC_WEAK_FUNC(sub_823C28C8) {
	__imp__sub_823C28C8(ctx, base);
}

